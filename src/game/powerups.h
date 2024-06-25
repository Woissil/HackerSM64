#ifndef POWERUPS_H
#define POWERUPS_H

extern u8 gPowerup;
extern u8 gPowerUpModelList[];

enum PowerUpID {
    POWERUP_NORMAL,
    POWERUP_CRYSTAL,
    POWERUP_BOOMERANG,
    POWERUP_MAX,
};

#endif // POWERUPS_H