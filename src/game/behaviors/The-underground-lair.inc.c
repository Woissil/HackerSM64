extern u8 gPowerup;
extern u8 POWERUP_CRYSTAL;

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
}

void crystal_powerup_loop(void) {
    if (detect_object_hitbox_overlap(o, gMarioState->marioObj)) {
        obj_set_model(gMarioState->marioObj, MODEL_CRYSTAL_MARIO);
        gPowerup = POWERUP_CRYSTAL;
        obj_mark_for_deletion(o);
    }
}

void crystal_shard(void) {
    o->oForwardVel = 20;
    if (cur_obj_dist_to_nearest_object_with_behavior(bhvGoomba) < 200.0f) {
        cur_obj_nearest_object_with_behavior(bhvGoomba)->oInteractStatus = ATTACK_KICK_OR_TRIP | INT_STATUS_INTERACTED | INT_STATUS_WAS_ATTACKED;
    }

    if (o->oTimer > 100) {
        obj_mark_for_deletion(o);
    }
}