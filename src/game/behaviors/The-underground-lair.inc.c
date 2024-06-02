extern gPowerup;
extern POWERUP_CRYSTAL;

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

    }
}