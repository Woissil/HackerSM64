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
    }
}