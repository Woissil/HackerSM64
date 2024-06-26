
u8 make_dialog_appear_mario(u16 dialogID, u32 actionArg) {
    return cur_obj_update_dialog_with_cutscene(actionArg, 1, CUTSCENE_DIALOG, dialogID);
}

u8 coconuts = 0;

void beachyoshi_message(void) {
    if (o->oTimer == 0) {
        o->oBehParams2ndByte = 7;
    }
    cur_obj_init_animation(0);
    if (coconuts >= 8) {
        o->oBehParams2ndByte = 8;
    }

    o->oMoveAngleYaw = approach_s16_symmetric(o->oMoveAngleYaw, o->oAngleToMario, 0x200);
    if (o->oAction == 3) {
        if (make_dialog_appear_mario(o->oBehParams2ndByte, 4)) {
            o->oAction = 2;
            if (o->oBehParams2ndByte == 8) {
                // spawn a star
                bhv_spawn_star_no_level_exit(STAR_BP_ACT_1);
            }
        }
    } else if (o->oAction == 2) {
        if (o->oDistanceToMario > 550.f) {
            o->oAction = 0;
        }
    } else {
        if (o->oDistanceToMario < 150.f) {
            o->oAction = 3;
        }
    }
}
