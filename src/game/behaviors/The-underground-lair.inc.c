#include "src/game/powerups.h"

static struct ObjectHitbox sPowerupHitbox = {
    /* interactType:      */ 0,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 0,
    /* health:            */ 0,
    /* numLootCoins:      */ 0,
    /* radius:            */ 80,
    /* height:            */ 80,
    /* hurtboxRadius:     */ 90,
    /* hurtboxHeight:     */ 90,
};

void crystal_powerup_init(void) {
    obj_set_hitbox(o, &sPowerupHitbox);
    o->oGravity = 2.4f;
    o->oFriction = 0.999f;
    o->oBuoyancy = 1.5f;
    o->oOpacity = 255;
}

void crystal_powerup_loop(void) {
    object_step();
    if (detect_object_hitbox_overlap(o, gMarioState->marioObj)) {
        obj_set_model(gMarioState->marioObj, MODEL_CRYSTAL_MARIO);
        play_sound(SOUND_GENERAL_COLLECT_1UP, gGlobalSoundSource);
        gPowerup = POWERUP_CRYSTAL;
        obj_mark_for_deletion(o); // don't forget this :)
    }
}

void crystal_shard_init(void) {
    obj_set_hitbox(o, &sPowerupHitbox);
}

void crystal_shard(void) {
    o->oForwardVel = approach_f32(o->oForwardVel, 50, 8, 0);
    if (cur_obj_dist_to_nearest_object_with_behavior(bhvGoomba) < 200.0f) {
        struct Object *nearest_goomba = cur_obj_nearest_object_with_behavior(bhvGoomba);
        if (nearest_goomba && detect_object_hitbox_overlap(o, nearest_goomba)) {
            cur_obj_nearest_object_with_behavior(bhvGoomba)->oInteractStatus =
                ATTACK_KICK_OR_TRIP | INT_STATUS_INTERACTED | INT_STATUS_WAS_ATTACKED;
            cur_obj_play_sound_2(SOUND_GENERAL_BREAK_BOX);
        }
    }
    if (o->oTimer > 80) {
        obj_mark_for_deletion(o);
    }
}

static struct ObjectHitbox sTargetHitbox = {
    /* interactType:      */ 0,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 0,
    /* health:            */ 0,
    /* numLootCoins:      */ 0,
    /* radius:            */ 75,
    /* height:            */ 75,
    /* hurtboxRadius:     */ 0,
    /* hurtboxHeight:     */ 0,
};

void target_bulseye_init(void) {
    obj_set_hitbox(o, &sTargetHitbox);
    cur_obj_scale(1.2);
}

void target_bulseye(void) {
    struct Object *nearest_shard = cur_obj_nearest_object_with_behavior(bhvCrystalShard);
    if (nearest_shard && detect_object_hitbox_overlap(o, nearest_shard)) {
        cur_obj_play_sound_2(SOUND_GENERAL_BREAK_BOX);
        obj_mark_for_deletion(o);
    }
}