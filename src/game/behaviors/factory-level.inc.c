u8 propeller_gotten = FALSE;
u8 can_spin = FALSE;

void propeller_loop(void) {
    if (detect_object_hitbox_overlap(o, gMarioState->marioObj)) {
        propeller_gotten = TRUE;
    }

    if (propeller_gotten) {
        cur_obj_init_animation(0);
        vec3f_copy(&o->oPosX, gMarioState->pos);
        o->oGraphYOffset = 170.f;
        o->oFaceAngleYaw = gMarioState->faceAngle[1];
        if ((gMarioState->controller->buttonPressed & L_TRIG) && (gMarioState->action & ACT_FLAG_AIR)
            && can_spin) {
            gMarioState->action = ACT_TWIRLING;
            gMarioState->vel[1] = 70;
            can_spin = FALSE;
        }
    }

    if (gMarioState->pos[1] == gMarioState->floorHeight) {
        can_spin = TRUE;
    }

    if (gMarioState->hurtCounter != 0 && propeller_gotten) {
        propeller_gotten = FALSE;
        obj_mark_for_deletion(o);
    }

    if (!propeller_gotten) {
        // cur_obj_init_animation(1);
        o->oGraphYOffset = 0.f;
        o->oFaceAngleYaw += 0x100;
    }
}