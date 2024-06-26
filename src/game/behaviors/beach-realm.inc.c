
u8 make_dialog_appear_mario(s32 dialogID, s32 actionArg, s32 cutsceneThing) {
    return cur_obj_update_dialog_with_cutscene(actionArg, 1, cutsceneThing, dialogID);
}

u8 coconuts = 0;

void coconut_code(void) {
    if (detect_object_hitbox_overlap(o, gMarioObject)) {
        play_sound(SOUND_GENERAL_COLLECT_1UP, gGlobalSoundSource);
        coconuts++;
        obj_mark_for_deletion(o);
    }
}

void beachyoshi_message(void) {
    if (o->oTimer == 0) {
        o->oBehParams2ndByte = 7;
    }
    cur_obj_init_animation(0);
    if (coconuts >= 4) {
        o->oBehParams2ndByte = 8;
    }

    o->oMoveAngleYaw = approach_s16_symmetric(o->oMoveAngleYaw, o->oAngleToMario, 0x200);
    if (o->oAction == 3) {

        if (make_dialog_appear_mario(o->oBehParams2ndByte, 4, 162)) {
            o->oAction = 2;
            if (o->oBehParams2ndByte == 8) {
                // spawn a star
                bhv_spawn_star_no_level_exit(STAR_BP_ACT_1);
                spawn_mist_particles();
                obj_mark_for_deletion(o);
            }
        }
    } else if (o->oAction == 2) {
        if (o->oDistanceToMario > 550.f) {
            o->oAction = 0;
        }
    } else {
        if (o->oDistanceToMario < 155.f) {
            o->oAction = 3;
        }
    }
}

// kinda different from the yoshi

void sketchy_koopa(void) {
    cur_obj_init_animation(0);
    if (o->oTimer == 0) {
        o->oBehParams2ndByte = 9;
    }

    o->oMoveAngleYaw = approach_s16_symmetric(o->oMoveAngleYaw, o->oAngleToMario, 0x200);
    if (o->oAction == 3) {

        if (make_dialog_appear_mario(o->oBehParams2ndByte, 4, 162)) {
            play_sound(SOUND_GENERAL_COLLECT_1UP, gGlobalSoundSource);
            coconuts++;
            spawn_mist_particles();
            obj_mark_for_deletion(o);
        }
    } else if (o->oAction == 2) {
        if (o->oDistanceToMario > 550.f) {
            o->oAction = 0;
        }
    } else {
        if (o->oDistanceToMario < 155.f) {
            o->oAction = 3;
        }
    }
}
