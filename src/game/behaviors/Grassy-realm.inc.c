#include "src/game/powerups.h"

#define BOOMERANG_GOING 0
#define BOOMERANG_COME_BACK 1
#define BOOMERANG_STAY 2
#define BOOMERANG_SPEED 60.0f

void chuckya_spawn_star(void) {
    if (!cur_obj_nearest_object_with_behavior(bhvChuckya)) {
        struct Object *chuckyastar = NULL;
        chuckyastar = spawn_star(chuckyastar, o->oPosX, o->oPosY + 400, o->oPosZ);
        chuckyastar->oBehParams2ndByte = SPAWN_STAR_ARC_CUTSCENE_BP_DEFAULT_STAR;
        chuckyastar->oBehParams |= (2 << 24);
        obj_mark_for_deletion(o);
    }
}

struct ObjectHitbox boomerang_box_hitbox = {
    /* interactType:      */ INTERACT_BREAKABLE,
    /* downOffset:        */ 20,
    /* damageOrCoinValue: */ 0,
    /* health:            */ 1,
    /* numLootCoins:      */ 0,
    /* radius:            */ 150,
    /* height:            */ 200,
    /* hurtboxRadius:     */ 150,
    /* hurtboxHeight:     */ 200,
};

void bhv_boomerang_box_loop(void) {
    obj_set_hitbox(o, &boomerang_box_hitbox);
    if (cur_obj_nearest_object_with_behavior(bhvBoomerangProjectile)
        && detect_object_hitbox_overlap(cur_obj_nearest_object_with_behavior(bhvBoomerangProjectile),
                                        o)) {
        obj_explode_and_spawn_coins(46.0f, COIN_TYPE_YELLOW);
        create_sound_spawner(SOUND_GENERAL_BREAK_BOX);
    }
}

// boomerang :D

void boomerang_init(void) {
    obj_set_hitbox(o, &sPowerupHitbox);
    o->oGravity = 2.4f;
    o->oFriction = 0.999f;
    o->oBuoyancy = 1.5f;
    o->oOpacity = 255;
}

void boomerang_loop(void) {
    object_step();
    if (detect_object_hitbox_overlap(o, gMarioState->marioObj)) {
        play_sound(SOUND_GENERAL_COLLECT_1UP, gGlobalSoundSource);
        gPowerup = POWERUP_BOOMERANG;
        obj_mark_for_deletion(o);
    }

    if (o->oTimer > 300) {
        obj_flicker_and_disappear(o, 300);
    }
}

// projectile

extern u8 boomerangThrown;

void boomerangprojectile(void) {
    o->oGraphYOffset = 50.f;
    o->oFaceAngleYaw += (0x900 * 4);
    switch (o->oAction) {
        case BOOMERANG_GOING:
            o->oForwardVel = BOOMERANG_SPEED;
            break;

        case BOOMERANG_COME_BACK:
            o->oForwardVel = 0.f;
            break;

        case BOOMERANG_STAY:
            o->oForwardVel = 0.f;
            break;
    }

    if (o->oTimer >= 8 && o->oAction == BOOMERANG_GOING) {
        o->oAction = BOOMERANG_STAY;
    }

    if (o->oTimer >= 50 && o->oAction == BOOMERANG_STAY) {
        o->oAction = BOOMERANG_COME_BACK;
    }

    if (o->oAction == BOOMERANG_COME_BACK) {
        o->oPosX = approach_f32_symmetric(o->oPosX, gMarioState->pos[0], BOOMERANG_SPEED);
        o->oPosY = approach_f32_symmetric(o->oPosY, gMarioState->pos[1], BOOMERANG_SPEED);
        o->oPosZ = approach_f32_symmetric(o->oPosZ, gMarioState->pos[2], BOOMERANG_SPEED);
        if (o->oPosX == gMarioState->pos[0] && o->oPosY == gMarioState->pos[1]
            && o->oPosZ == gMarioState->pos[2]) {
            boomerangThrown = FALSE;
            obj_mark_for_deletion(o);
        }
    }

    struct Object *nearest_goomba = cur_obj_nearest_object_with_behavior(bhvGoomba);
    if (nearest_goomba && detect_object_hitbox_overlap(o, nearest_goomba)) {
        nearest_goomba->oInteractStatus =
            ATTACK_KICK_OR_TRIP | INT_STATUS_INTERACTED | INT_STATUS_WAS_ATTACKED;
    }

    struct Object *nearest_box = cur_obj_nearest_object_with_behavior(bhvBreakableBox);
    if (nearest_box && detect_object_hitbox_overlap(o, nearest_box)) {
        nearest_box->oInteractStatus =
            ATTACK_KICK_OR_TRIP | INT_STATUS_INTERACTED | INT_STATUS_WAS_ATTACKED;
    }
}

void spawnstar_boomerangbox(void) {
    if (!cur_obj_nearest_object_with_behavior(bhvBreakBoxBoomerang)) {
        struct Object *boomstar = NULL;
        boomstar = spawn_star(boomstar, o->oPosX, o->oPosY + 400, o->oPosZ);
        boomstar->oBehParams2ndByte = SPAWN_STAR_ARC_CUTSCENE_BP_DEFAULT_STAR;
        boomstar->oBehParams |= (4 << 24);
        obj_mark_for_deletion(o);
    }
}

// stop_background_music(SEQUENCE_ARGS(4, SEQ_EVENT_BOSS));

#define cubetime 900

void shyguynpc(void) {
    cur_obj_init_animation(0);
    if (o->oTimer == 0) {
        o->oBehParams2ndByte = 15;
    }

    o->oMoveAngleYaw = approach_s16_symmetric(o->oMoveAngleYaw, o->oAngleToMario, 0x200);
    if (o->oAction == 0 && o->oInteractStatus & INT_STATUS_INTERACTED) {
        if (make_dialog_appear_mario(o->oBehParams2ndByte, 4, 162)) {
            o->oInteractStatus = 0;
            SET_BPARAM4(o->oBehParams, 2);
        }
    }
}

void bluecube(void) {
    struct Object *nearshyg = cur_obj_nearest_object_with_behavior(bhvShyguy);
    if (nearshyg && (GET_BPARAM4(nearshyg->oBehParams) == 2)) {
        o->oAction = 1;
    }

    switch (o->oAction) {
        case 0:
            cur_obj_hide();
            break;

        case 1:
            o->oSubAction++;
            if (o->oSubAction < cubetime) {
                cur_obj_unhide();
                load_object_collision_model();
            }

            if (o->oSubAction > cubetime) {
                SET_BPARAM4(nearshyg->oBehParams, 1);
                o->oAction = 0;
                o->oSubAction = 0;
                stop_background_music(SEQUENCE_ARGS(4, SEQ_BLUE_CUBE));
            }
            break;
    }
}