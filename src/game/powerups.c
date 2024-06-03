#include <PR/ultratypes.h>
#include "powerups.h"
#include "model_ids.h"

u8 gPowerup = 0;

u8 gPowerUpModelList[POWERUP_MAX] = {
    [POWERUP_NORMAL] = MODEL_MARIO,
    [POWERUP_CRYSTAL] = MODEL_CRYSTAL_MARIO,
};

/* Power-up Defines. Actual code at void bhv_mario_update(). */