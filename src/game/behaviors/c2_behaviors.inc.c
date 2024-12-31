float leaf_scaling;
static struct ObjectHitbox sSpinFlowerObject = {
    /* interactType:      */ 0,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 0,
    /* health:            */ 0,
    /* numLootCoins:      */ 0,
    /* radius:            */ 140,
    /* height:            */ 90,
    /* hurtboxRadius:     */ 0,
    /* hurtboxHeight:     */ 0,
};

void bhv_spin_flower(void) {
    cur_obj_set_model(MODEL_SPIN_FLOWER);
    o->oAngleVelYaw = 0x200;
    cur_obj_rotate_face_angle_using_vel();
    obj_set_hitbox(o, &sSpinFlowerObject);
    if (obj_check_if_collided_with_object(o, gMarioObject)) {
        if (gMarioStates[0].controller->buttonDown & A_BUTTON){
                gMarioStates[0].vel[1] = o->oBehParams2ndByte;
        } else {
            gMarioStates[0].vel[1] = o->oBehParams2ndByte/2;
        }
        set_mario_action(gMarioState,ACT_TWIRLING,0);
        play_sound(SOUND_MARIO_TWIRL_BOUNCE, gMarioStates->marioObj->header.gfx.cameraToObject);
    }
}

void bhv_bouncing_leaf_init(void) {
    if (o->oBehParams2ndByte == 1) {
        obj_scale(o, 0.7711f);
        leaf_scaling = 0.7711;
    } else {
        leaf_scaling = 1;
    }
}

void bhv_bouncing_leaf(void) {
    if ((cur_obj_is_mario_on_platform()) && (gMarioState->action == ACT_GROUND_POUND_LAND)) {
        set_mario_action(gMarioState,ACT_TRIPLE_JUMP,0);
        set_mario_animation(gMarioState,MARIO_ANIM_TRIPLE_JUMP_FLY);
        gMarioStates[0].vel[1] = 90;
        if (o->oBehParams2ndByte == 1) {
            gMarioStates->forwardVel = 20;
        }
        gMarioStates->forwardVel = 35;
        if (o->oAction == 0) {
            o->oAction = 1;
        }
    }

    switch (o->oAction) {
        case 1:
        if (o->header.gfx.scale[1] <= -leaf_scaling) {
            o->oAction = 2;
        } else {
            o->header.gfx.scale[1] -= 0.5;
        }
        break;

        case 2:
        if (o->header.gfx.scale[1] >= leaf_scaling) {
            o->oAction = 0;
        } else {
            o->header.gfx.scale[1] += 0.2;
        }
        break;
    }
}