#include <ultra64.h>
#include "sm64.h"
#include "surface_terrains.h"
#include "geo_commands.h"

#include "make_const_nonconst.h"

// Note: This bin does not use bin IDs, unlike the other segmented bins.
#include "mario/model.inc.c"

#include "bubble/model.inc.c"

#include "walk_smoke/model.inc.c"

#include "burn_smoke/model.inc.c"

#include "small_water_splash/model.inc.c"

#include "water_wave/model.inc.c"

#include "sparkle/model.inc.c"

#include "water_splash/model.inc.c"

#include "white_particle_small/model.inc.c"

#include "sparkle_animation/model.inc.c"

#ifdef S2DEX_TEXT_ENGINE
#include "src/s2d_engine/s2d_config.h"
#include FONT_C_FILE
#endif

#include "new_title_screen/model.inc.c"
#include "crystal_mario/model.inc.c"
#include "crystal/model.inc.c"
#include "crystal_powerup/model.inc.c"
#include "target_bulseye/model.inc.c"
#include "cave_goomba/model.inc.c"
#include "star_stuck_in_crystal/model.inc.c"
#include "star_stuck_in_crystal/collision.inc.c"
#include "tnt/model.inc.c"
#include "peashooter/model.inc.c"
#include "propeller_box/model.inc.c"
#include "propeller_box/anims/data.inc.c"
#include "propeller_box/anims/table.inc.c"
#include "icon_course1/model.inc.c"