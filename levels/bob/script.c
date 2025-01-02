#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"


/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/bob/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_bob_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x7, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario),

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, bob_area_1),
		WARP_NODE(241, LEVEL_CASTLE_GROUNDS,  1,  2, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE_GROUNDS,  1,  1, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB,  2,  10, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_BOB,  1,  0, WARP_NO_CHECKPOINT),
		OBJECT(84, -4177, 1380, -6218, 0, 0, 0,  0x0, bhvBulletBill),
		OBJECT(84, -7531, 2215, -6481, 0, 0, 0,  0x0, bhvBulletBill),
		OBJECT(84, -4915, 2205, -3798, 0, -180, 0,  0x0, bhvBulletBill),
		OBJECT(0, 1127, -1245, -2907, 0, 90, 0,  0x0, bhvCoinFormation),
		OBJECT(0, 1135, -752, -2390, 0, 90, 0,  0x0, bhvCoinFormation),
		OBJECT(0, 1125, -246, -1872, 0, 90, 0,  0x0, bhvCoinFormation),
		OBJECT(0, 2381, -1245, -5115, 0, 90, 0,  0x0, bhvCoinFormation),
		OBJECT(0, -8801, 2685, -5222, 0, 90, 0,  0x110000, bhvCoinFormation),
		OBJECT(0, 1784, 250, 85, 0, 90, 0,  0x0, bhvCoinFormation),
		OBJECT(0, 4706, 2495, 1907, 0, 90, 0,  0x20000, bhvCoinFormation),
		OBJECT(0, 1761, 2495, 3309, 0, 90, 0,  0x20000, bhvCoinFormation),
		OBJECT(0, 5479, 1885, -2198, 0, 90, 0,  0x40000, bhvCoinFormation),
		OBJECT(0, -725, 250, -2416, 0, 0, 0,  0x0, bhvCoinFormation),
		OBJECT(137, 1173, 3690, 2137, 0, 0, 0,  0x60000, bhvExclamationBox),
		OBJECT(MODEL_FLIPSWAP_PLATFORM_MOP, 5255, 1860, 833, 0, 0, 0,  0x0, bhvFlipswap_Platform_MOP),
		OBJECT(220, -4709, 2445, -5003, 0, 0, 0,  0x0, bhvFlyGuy),
		OBJECT(0, 1256, -1495, -4265, 0, 0, 0,  0x0, bhvGoombaTripletSpawner),
		OBJECT(0, 4749, -1495, -4626, 0, 0, 0,  0x0, bhvGoombaTripletSpawner),
		OBJECT(0, 4738, 2495, 1926, 0, 0, 0,  0x0, bhvGoombaTripletSpawner),
		OBJECT(0, 1740, 2495, 3245, 0, 0, 0,  0x0, bhvGoombaTripletSpawner),
		OBJECT(0, 5264, 1824, -11, 0, -90, 0,  0x3000000, bhvHiddenRedCoinStar),
		OBJECT(116, 2864, 2204, -2629, 0, 0, 0,  0x0, bhvOneCoin),
		OBJECT(116, 3882, 2319, -2606, 0, 0, 0,  0x0, bhvOneCoin),
		OBJECT(116, 2867, 1879, -2120, 0, 0, 0,  0x0, bhvOneCoin),
		OBJECT(116, 3886, 2069, -2126, 0, 0, 0,  0x0, bhvOneCoin),
		OBJECT(116, 3376, 1729, -2123, 0, 0, 0,  0x0, bhvOneCoin),
		OBJECT(116, 8209, 2265, -2253, 0, 90, 0,  0x0, bhvOneCoin),
		OBJECT(116, 8371, 2265, -2253, 0, 90, 0,  0x0, bhvOneCoin),
		OBJECT(116, 8042, 2265, -2253, 0, 90, 0,  0x0, bhvOneCoin),
		OBJECT(116, 8524, 2115, -2253, 0, 90, 0,  0x0, bhvOneCoin),
		OBJECT(116, 7884, 2115, -2253, 0, 90, 0,  0x0, bhvOneCoin),
		OBJECT(116, -626, 999, -5606, 0, 0, 0,  0x0, bhvOneCoin),
		OBJECT(116, -631, 999, -5379, 0, 0, 0,  0x0, bhvOneCoin),
		OBJECT(116, -371, 999, -5127, 0, 0, 0,  0x0, bhvOneCoin),
		OBJECT(116, -136, 999, -4865, 0, 0, 0,  0x0, bhvOneCoin),
		OBJECT(215, -112, 499, 2376, 0, 0, 0,  0x0, bhvRedCoin),
		OBJECT(215, 1134, -1245, -1629, 0, 0, 0,  0x0, bhvRedCoin),
		OBJECT(215, -139, 1499, -5610, 0, 0, 0,  0x0, bhvRedCoin),
		OBJECT(215, 4508, 5, -4721, 0, 0, 0,  0x0, bhvRedCoin),
		OBJECT(215, 3364, 2009, -2617, 0, 0, 0,  0x0, bhvRedCoin),
		OBJECT(215, 4873, -749, -2365, 0, 0, 0,  0x0, bhvRedCoin),
		OBJECT(215, 775, 3289, 3515, 0, 0, 0,  0x0, bhvRedCoin),
		OBJECT(215, 1465, 1339, 191, 0, 0, 0,  0x0, bhvRedCoin),
		OBJECT(MODEL_FLIPSWAP_PLATFORM_MOP, 5119, 5072, 3418, 0, 0, 0,  0x0, bhvFlipswap_Platform_MOP),
		OBJECT(MODEL_FLIPSWAP_PLATFORM_MOP, -6209, 2085, -5163, 0, 0, 0,  0x0, bhvFlipswap_Platform_MOP),
		OBJECT(0, 349, 969, -96, 0, 90, 0,  0xa0000, bhvSpinAirborneWarp),
		OBJECT(122, 12142, 3512, 216, 0, -90, 0,  0x0, bhvStar),
		OBJECT(122, 7305, 7830, -1817, 0, -90, 0,  0x1000000, bhvStar),
		OBJECT(122, -8230, 4219, -5239, 0, -90, 0,  0x2000000, bhvStar),
		OBJECT(0, 4497, -1495, -2757, 0, 0, 0,  0x0, bhvWarp),
		TERRAIN(bob_area_1_collision),
		MACRO_OBJECTS(bob_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 39),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, bob_area_2),
		WARP_NODE(241, LEVEL_CASTLE_GROUNDS,  1,  2, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE_GROUNDS,  1,  1, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_BOB,  2,  0, WARP_NO_CHECKPOINT),
		OBJECT(0, 2758, 1750, -2667, 0, 0, 0,  0x20000, bhvCoinFormation),
		OBJECT(0, -2810, 2390, -2617, 0, 0, 0,  0x110000, bhvCoinFormation),
		OBJECT(0, 3439, 2750, 2744, 0, 90, 0,  0x0, bhvCoinFormation),
		OBJECT(137, 4316, 4514, 143, 0, 0, 0,  0x20000, bhvExclamationBox),
		OBJECT(137, -2817, 3360, -3245, 0, 0, 0,  0x50000, bhvExclamationBox),
		OBJECT(207, -2841, 3500, -1964, 0, 0, 0,  0x0, bhvFloorSwitchHiddenObjects),
		OBJECT(220, -4077, 3810, -528, 0, 0, 0,  0x0, bhvFlyGuy),
		OBJECT(192, -4110, 3500, 1597, 0, 0, 0,  0x0, bhvGoomba),
		OBJECT(192, -4492, 3500, 1112, 0, 0, 0,  0x0, bhvGoomba),
		OBJECT(192, -3295, 3000, -2934, 0, 0, 0,  0x0, bhvGoomba),
		OBJECT(0, 2758, 1750, -2667, 0, 0, 0,  0x0, bhvGoombaTripletSpawner),
		OBJECT(129, -3402, 3350, -1014, 0, 0, 0,  0x0, bhvHiddenObject),
		OBJECT(129, -3671, 3350, -347, 0, 0, 0,  0x0, bhvHiddenObject),
		OBJECT(129, -3967, 3350, 354, 0, 0, 0,  0x0, bhvHiddenObject),
		OBJECT(104, -2413, 2000, -2583, 0, 0, 0,  0x0, bhvKoopa),
		OBJECT(0, 3431, 5150, 1893, 0, -167, 0,  0xa0000, bhvSpinAirborneWarp),
		OBJECT(122, -557, 3034, 1443, 0, 0, 0,  0x4000000, bhvStar),
		OBJECT(122, 4540, 2080, 2759, 0, 0, 0,  0x5000000, bhvStar),
		TERRAIN(bob_area_2_collision),
		MACRO_OBJECTS(bob_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 38),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(1, 0, 0, 0, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
