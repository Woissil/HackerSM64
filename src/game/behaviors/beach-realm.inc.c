
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
    if (o->oAction == 0 && o->oInteractStatus & INT_STATUS_INTERACTED) {
        if (make_dialog_appear_mario(o->oBehParams2ndByte, 4, 162)) {
            o->oInteractStatus = 0;
            if (o->oBehParams2ndByte == 8) {
                // spawn a star
                bhv_spawn_star_no_level_exit(STAR_BP_ACT_1);
                spawn_mist_particles();
                obj_mark_for_deletion(o);
            }
        }
    }
}

// kinda different from the yoshi

void sketchy_koopa(void) {
    cur_obj_init_animation(0x9);
    if (o->oTimer == 0) {
        obj_scale(o, 3);
        o->oBehParams2ndByte = 9;
    }

    o->oMoveAngleYaw = approach_s16_symmetric(o->oMoveAngleYaw, o->oAngleToMario, 0x200);
    if (o->oAction == 0 && o->oInteractStatus & INT_STATUS_INTERACTED) {
        if (make_dialog_appear_mario(o->oBehParams2ndByte, 4, 162)) {
            o->oInteractStatus = 0;
            play_sound(SOUND_GENERAL_BIG_POUND, gGlobalSoundSource);
            coconuts++;
            spawn_mist_particles();
            obj_mark_for_deletion(o);
        }
    }
}

struct ObjectHitbox sBeachBarrelHitbox = {
    /* interactType:      */ INTERACT_BREAKABLE,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 0,
    /* health:            */ 1,
    /* numLootCoins:      */ 0,
    /* radius:            */ 120,
    /* height:            */ 160,
    /* hurtboxRadius:     */ 120,
    /* hurtboxHeight:     */ 160,
};

void beachbarrel(void) {
    obj_set_hitbox(o, &sBeachBarrelHitbox);
    if (cur_obj_was_attacked_or_ground_pounded()) {
        spawn_object(o, MODEL_NONE, bhvTenCoinsSpawn);
        spawn_triangle_break_particles(30, MODEL_DIRT_ANIMATION, 3.0f,
                                       TINY_DIRT_PARTICLE_ANIM_STATE_YELLOW);
        create_sound_spawner(SOUND_GENERAL_BREAK_BOX);
        obj_mark_for_deletion(o);
    }
}

#define BOAT_NOT_MOVING 0
#define BOAT_MOVING 1

void beachboat_moving(void) {
    struct Object *nearest_point = cur_obj_nearest_object_with_behavior(bhvBeachBoatPoint);

    if (nearest_point) {
        o->oPosX = approach_f32_symmetric(o->oPosX, nearest_point->oPosX, 30);
        o->oPosZ = approach_f32_symmetric(o->oPosZ, nearest_point->oPosZ, 30);
    }

    if (o->oPosX == nearest_point->oPosX && o->oPosZ == nearest_point->oPosZ) {
        obj_mark_for_deletion(nearest_point);
    }

    if (!nearest_point) {
        o->oAction = BOAT_NOT_MOVING;
    }
}

void beachboat_update(void) {
    if (cur_obj_is_mario_on_platform()) {
        o->oSubAction++;
    }

    if (o->oSubAction >= 10) {
        o->oAction = BOAT_MOVING;
        o->oSubAction = 0;
    }

    if (o->oAction == BOAT_MOVING) {
        beachboat_moving();
    }
}

/// coconut king

#define KING_COCONUT_TALKING 0         // talking
#define KING_COCONUT_STAY_IN_PLACE 1   // action that he throws coconuts at mario
#define KING_COCONUT_GOT_HIT 2         // got hit
#define KING_COCONUT_WALK 3            /// walking
#define KING_COCONUT_DEAD 4            // deaded, dont spawn star thp
#define KING_COCONUT_WAIT_SPAWN_STAR 5 // wait 32 frames then spawn stae

static struct ObjectHitbox coconutking_hitbox = {
    /* interactType:      */ INTERACT_DAMAGE,
    /* downOffset:        */ 40,
    /* damageOrCoinValue: */ 2,
    /* health:            */ 3,
    /* numLootCoins:      */ 0,
    /* radius:            */ 50,
    /* height:            */ 50,
    /* hurtboxRadius:     */ 50,
    /* hurtboxHeight:     */ 50,
};

void coconut_goombaking(void) {
    obj_scale(o, 5);
    object_step();

    if (o->oInteractStatus != 0) {
        o->oInteractStatus = 0;
    }

    switch (o->oAction) {
        case KING_COCONUT_TALKING:
            if (make_dialog_appear_mario(o->oBehParams2ndByte, 4, 162)) {
                o->oGravity = 2.4f;
                o->oFriction = 1.f;
                obj_set_hitbox(o, &coconutking_hitbox);
                o->oAction = KING_COCONUT_STAY_IN_PLACE;
            }
            break;

        case KING_COCONUT_STAY_IN_PLACE:
            cur_obj_init_animation_with_accel_and_sound(0, 1);
            o->oFaceAngleYaw = 0;
            o->oForwardVel = 0.f;
            o->oSubAction++;
            if (o->oSubAction >= 60) {
                o->oSubAction = 0;
                o->oAction = KING_COCONUT_WALK;
            }

            if (cur_obj_nearest_object_with_behavior(bhvBoomerangProjectile)
                && detect_object_hitbox_overlap(
                    o, cur_obj_nearest_object_with_behavior(bhvBoomerangProjectile))) {
                cur_obj_nearest_object_with_behavior(bhvBoomerangProjectile)->oAction = 1;
                o->oSubAction = 0;
                o->oHealth--;
                o->oAction = KING_COCONUT_GOT_HIT;
            }
            break;

        case KING_COCONUT_GOT_HIT:
            if (o->oSubAction == 0) {
                o->oForwardVel = 0.f;
                cur_obj_play_sound_2(SOUND_OBJ_KING_WHOMP_DEATH);
            }

            o->oSubAction++;

            o->oMoveAngleYaw += 0x900 * 4;

            if (o->oSubAction >= 80) {
                o->oSubAction = 0;
                o->oAction = KING_COCONUT_WALK;
            }
            break;

        case KING_COCONUT_WALK:
            o->oSubAction++;
            o->oMoveAngleYaw = o->oAngleToMario;
            o->oForwardVel = 36.f;
            cur_obj_init_animation_with_accel_and_sound(0, 3);
            cur_obj_play_sound_at_anim_range(2, 17, SOUND_OBJ_GOOMBA_WALK);
            if (o->oSubAction > 90) {
                o->oSubAction = 0;
                o->oAction = KING_COCONUT_STAY_IN_PLACE;
            }

            if (cur_obj_nearest_object_with_behavior(bhvBoomerangProjectile)
                && detect_object_hitbox_overlap(
                    o, cur_obj_nearest_object_with_behavior(bhvBoomerangProjectile))) {
                cur_obj_nearest_object_with_behavior(bhvBoomerangProjectile)->oAction = 1;
                o->oSubAction = 0;
                o->oHealth--;
                o->oAction = KING_COCONUT_GOT_HIT;
            }
            break;

        case KING_COCONUT_DEAD:
            o->oForwardVel = 0;
            if (make_dialog_appear_mario(o->oBehParams2ndByte, 4, 162)) {
                cur_obj_play_sound_2(SOUND_OBJ_KING_WHOMP_DEATH);
                spawn_mist_particles_variable(0, 0, 100.0f);
                spawn_triangle_break_particles(20, MODEL_DIRT_ANIMATION, 3.0f, 4);
                stop_background_music(SEQUENCE_ARGS(4, SEQ_EVENT_BOSS));
                o->oSubAction = 0;
                o->oAction = KING_COCONUT_WAIT_SPAWN_STAR;
            }
            break;

        case KING_COCONUT_WAIT_SPAWN_STAR:
            cur_obj_hide();
            o->oSubAction++;
            if (o->oSubAction > 32) {
                bhv_spawn_star_no_level_exit(STAR_BP_ACT_5);
                o->oSubAction = 0;
                obj_mark_for_deletion(o);
            }
    }

    if (o->oHealth <= 0 && o->oOpacity != 34) {
        o->oBehParams2ndByte = 12;
        o->oOpacity = 34;
        o->oAction = KING_COCONUT_DEAD;
    }
}

#define m gMarioState

void beachwhomp(void) {
    cur_obj_init_animation(0);

    o->oMoveAngleYaw = approach_s16_symmetric(o->oMoveAngleYaw, o->oAngleToMario, 0x200);
    if (o->oAction == 0 && o->oInteractStatus & INT_STATUS_INTERACTED) {
        s32 response = make_dialog_appear_mario(o->oBehParams2ndByte, 4, 163);
        if (response == DIALOG_RESPONSE_YES) {
            if (m->numCoins >= 20) {
                bhv_spawn_star_no_level_exit(STAR_BP_ACT_4);
                spawn_mist_particles();
                cur_obj_become_intangible();
                cur_obj_hide();
                m->numCoins -= 20;
                gHudDisplay.coins = m->numCoins;
                o->oInteractStatus = 0;
            }

            if (m->numCoins < 20) {
                o->oInteractStatus = 0;
            }
        }

        if (response == DIALOG_RESPONSE_NO) {
            o->oInteractStatus = 0;
        }
    }

    if (o->oInteractStatus == INT_STATUS_HIT_MINE) {
        if (make_dialog_appear_mario(13, 4, 162)) {
            o->oInteractStatus = 0;
        }
    }
}

#define cataquack_walk 0
#define cataquack_charge 1

#define cataquack_max_dist 550.0f
#define cataquack_max_dist_for_walk_again 1000.0f

void cataquack(void) {
    object_step();

    switch (o->oAction) {
        case cataquack_walk:
            o->oSubAction++;
            o->oForwardVel = 4.f;
            o->oFriction = 1.35f;
            o->oGravity = 2.5f;
            cur_obj_init_animation_with_accel_and_sound(1, 3);
            cur_obj_rotate_yaw_toward(cur_obj_angle_to_home(), 0x220);

            if (o->oDistanceToMario < cataquack_max_dist) {
                o->oAction = cataquack_charge;
                o->oSubAction = 0;
            }
            break;

        case cataquack_charge:
            cur_obj_init_animation_with_accel_and_sound(1, 4);
            cur_obj_rotate_yaw_toward(o->oAngleToMario, 0x250);
            o->oForwardVel = 14.f;
            if (o->oDistanceToMario > cataquack_max_dist_for_walk_again) {
                o->oAction = cataquack_walk;
                o->oSubAction = 0;
            }
            break;
    }

    if (o->oInteractStatus != 0) {
        m->action = ACT_SHOT_FROM_CANNON;
        m->vel[1] = 40;
        m->forwardVel = -1.2f;
        o->oF4++;
        if (o->oF4 > 20) {
            o->oInteractStatus = 0;
            o->oF4 = 0;
        }
    }
}