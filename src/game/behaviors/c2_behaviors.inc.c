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

void bhv_spin_flower(void) { // peak brooo
    cur_obj_set_model(MODEL_SPIN_FLOWER);
    o->oAngleVelYaw = 0x200;
    cur_obj_rotate_face_angle_using_vel();
    obj_set_hitbox(o, &sSpinFlowerObject);

    if (obj_check_if_collided_with_object(o, gMarioObject)) {
        if (gMarioStates[0].controller->buttonDown & A_BUTTON) {
            gMarioStates[0].vel[1] = o->oBehParams2ndByte;
        } else {
            gMarioStates[0].vel[1] = o->oBehParams2ndByte / 2;
        }
        set_mario_action(gMarioState, ACT_TWIRLING, 0);
    }
}


void bhv_moving_gray_platform(void) {
    switch (o->oAction) {
        case 0:
        if (o->oTimer > (o->oBehParams >> 24)) {
            o->oAction++;
        }
        o->oPosX -= o->oBehParams2ndByte;
        break;
        
        case 1:
        if (o->oTimer > (o->oBehParams >> 24)) {
            o->oAction++;
        }
        o->oPosX += o->oBehParams2ndByte;
        break;

        case 2:
        if (o->oTimer > 15) {
            o->oAction = 0;
        }
        break;
    }
}

