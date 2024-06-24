u8 propeller_gotten = FALSE;
u8 can_spin = FALSE;

void propeller_loop(void) {
    if (detect_object_hitbox_overlap(o, gMarioState->marioObj)) {
        propeller_gotten = TRUE;
    }

    if (propeller_gotten) {
        cur_obj_scale(1.3f);
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

void bhv_noteblock_loop(void) {
	f32 Yspd = 64;
	u32 CarmackMeme;
	if (cur_obj_is_mario_on_platform()){
		//this is awful
		if (gMarioStates[0].controller->buttonPressed & A_BUTTON){
			Yspd = 128;
		}
		set_mario_action(gMarioState,ACT_DOUBLE_JUMP,0);
		CarmackMeme = * (u32 *) &Yspd;
		CarmackMeme+=(o->oBehParams2ndByte<<16);
		Yspd = *(f32 *) &CarmackMeme;
		gMarioStates[0].vel[1]=Yspd;
		o->oAction=1;
		gMarioStates[0].SelFallDmg=1;
	}
	if (o->oAction==1){
		if (o->oTimer==4){
			o->oAction=0;
			o->oPosY = o->oHomeY;
		}else{
			if (o->oTimer>2){
				o->oPosY = o->oHomeY+(f32)(o->oTimer%3)*6;
			}else{
				o->oPosY = o->oHomeY-(f32)(o->oTimer)*6;
			}
		}
	}
}
