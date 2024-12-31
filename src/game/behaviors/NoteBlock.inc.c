void bhv_noteblock_loop(void) {
    f32 Yspd = 64;
    u32 CarmackMeme;
    if (cur_obj_is_mario_on_platform()){
        //this is awful
        if (gMarioStates[0].controller->buttonDown & A_BUTTON){
            Yspd = o->oBehParams2ndByte;
        }
        set_mario_action(gMarioState,ACT_DOUBLE_JUMP,0);
        CarmackMeme = * (u32 *) &Yspd;
        CarmackMeme+=(o->oBehParams2ndByte<<16);
        Yspd = *(f32 *) &CarmackMeme;
        gMarioStates[0].vel[1]=Yspd;
        o->oAction=1;
    }
    if (o->oAction==1){
        if (o->oTimer==8){
            o->oAction=0;
            o->oPosY = o->oHomeY;
        }else{
            if (o->oTimer>4){
                o->oPosY += 25;
            }else{
                o->oPosY -= 25;
            }
        }
    }
}