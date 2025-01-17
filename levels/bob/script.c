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

#include "actors/common1.h"
#include "actors/group1.h"
#include "actors/group0.h"
#include "make_const_nonconst.h"
#include "levels/bob/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_bob_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _generic_yay0SegmentRomStart, _generic_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group3_yay0SegmentRomStart, _group3_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group3_geoSegmentRomStart, _group3_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_4), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_CHAIN_CHOMP_GATE, bob_geo_000440), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_SEESAW_PLATFORM, bob_geo_000458), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BARS_GRILLS, bob_geo_000470), 
	LOAD_MODEL_FROM_GEO(MODEL_FLIPSWAP_PLATFORM_MOP, Flipswap_Platform_MOP_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_FLIPSWAP_PLATFORM_BORDER_MOP, Flipswap_Platform_Border_MOP_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_SHRINKING_PLATFORM_BORDER_MOP, Shrinking_Platform_Border_MOP_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_SHRINKING_PLATFORM_MOP, Shrinking_Platform_MOP_geo), 
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, bob_area_1),
		WARP_NODE(2, LEVEL_BOB,  0x02,  3, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_BOB,   1,   0, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB,  2,  10, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE_GROUNDS,   1, 0xA1, WARP_NO_CHECKPOINT),
		WARP_NODE(241, LEVEL_CASTLE_GROUNDS,   1, 0xA0, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_FALLING_OBJECT, 7115, 5638, 3469, 0, 0, 0, (120 << 24) | (2 << 16) | (2 << 8), bhvFallingObject),
		OBJECT(MODEL_FALLING_OBJECT, 7916, 5741, 2026, 0, 0, 0, (120 << 24) | (2 << 16) | (2 << 8), bhvFallingObject),
		OBJECT(MODEL_FALLING_OBJECT, 7916, 6500, -356, 0, 0, 0, (120 << 24) | (2 << 16) | (2 << 8), bhvFallingObject),
		OBJECT(MODEL_FALLING_OBJECT, 7305, 6853, -1143, 0, 0, 0, (120 << 24) | (2 << 16) | (2 << 8), bhvFallingObject),
		OBJECT(MODEL_BULLET_BILL, -4177, 1380, -6218, 0, 0, 0,   0x0, bhvBulletBill),
		OBJECT(MODEL_BULLET_BILL, -7531, 2215, -6481, 0, 0, 0,   0x0, bhvBulletBill),
		OBJECT(MODEL_BULLET_BILL, -4915, 2205, -3798, 0, 180, 0,   0x0, bhvBulletBill),
		OBJECT(0, 1127, -1245, -2907, 0, 90, 0,   0x0, bhvCoinFormation),
		OBJECT(0, 1135, -752, -2390, 0, 90, 0,   0x0, bhvCoinFormation),
		OBJECT(0, 1125, -246, -1872, 0, 90, 0,   0x0, bhvCoinFormation),
		OBJECT(0, 2381, -1245, -5115, 0, 90, 0,   0x0, bhvCoinFormation),
		OBJECT(0, -8801, 2685, -5222, 0, 90, 0,   0x110000, bhvCoinFormation),
		OBJECT(0, 1784, 250, 85, 0, 90, 0,   0x0, bhvCoinFormation),
		OBJECT(0, 4706, 2495, 1907, 0, 90, 0,   0x20000, bhvCoinFormation),
		OBJECT(0, 1761, 2495, 3309, 0, 90, 0,   0x20000, bhvCoinFormation),
		OBJECT(0, 5381, 1885, -2110, 0, 90, 0,   0x40000, bhvCoinFormation),
		OBJECT(0, -725, 250, -2416, 0, 0, 0,   0x0, bhvCoinFormation),
		OBJECT(137, 1071, 3635, 1656, 0, 0, 0,   0x60000, bhvExclamationBox),
		OBJECT(MODEL_FLIPSWAP_PLATFORM_MOP, 5255, 1860, 833, 0, 0, 0, 0x0, bhvFlipswap_Platform_MOP),
		OBJECT(220, -4709, 2445, -5003, 0, 0, 0,   0x0, bhvFlyGuy),
		OBJECT(0, 1256, -1495, -4265, 0, 0, 0,   0x0, bhvGoombaTripletSpawner),
		OBJECT(0, 4749, -1495, -4626, 0, 0, 0,   0x0, bhvGoombaTripletSpawner),
		OBJECT(0, 4738, 2495, 1926, 0, 0, 0,   0x0, bhvGoombaTripletSpawner),
		OBJECT(0, 1740, 2495, 3245, 0, 0, 0,   0x0, bhvGoombaTripletSpawner),
		OBJECT(0, 5264, 1824, -11, 0, -90, 0,   0x3000000, bhvHiddenRedCoinStar),
		OBJECT(116, 2864, 2204, -2629, 0, 0, 0,   0x0, bhvOneCoin),
		OBJECT(116, 3882, 2319, -2606, 0, 0, 0,   0x0, bhvOneCoin),
		OBJECT(116, 2867, 1879, -2120, 0, 0, 0,   0x0, bhvOneCoin),
		OBJECT(116, 3886, 2069, -2126, 0, 0, 0,   0x0, bhvOneCoin),
		OBJECT(116, 3376, 1729, -2123, 0, 0, 0,   0x0, bhvOneCoin),
		OBJECT(116, 8209, 2265, -2253, 0, 90, 0,   0x0, bhvOneCoin),
		OBJECT(116, 8371, 2265, -2253, 0, 90, 0,   0x0, bhvOneCoin),
		OBJECT(116, 8042, 2265, -2253, 0, 90, 0,   0x0, bhvOneCoin),
		OBJECT(116, 8524, 2115, -2253, 0, 90, 0,   0x0, bhvOneCoin),
		OBJECT(116, 7884, 2115, -2253, 0, 90, 0,   0x0, bhvOneCoin),
		OBJECT(116, -626, 999, -5606, 0, 0, 0,   0x0, bhvOneCoin),
		OBJECT(116, -631, 999, -5379, 0, 0, 0,   0x0, bhvOneCoin),
		OBJECT(116, -371, 999, -5127, 0, 0, 0,   0x0, bhvOneCoin),
		OBJECT(116, -136, 999, -4865, 0, 0, 0,   0x0, bhvOneCoin),
		OBJECT(215, -112, 499, 2376, 0, 0, 0,   0x0, bhvRedCoin),
		OBJECT(215, 1134, -1245, -1629, 0, 0, 0,   0x0, bhvRedCoin),
		OBJECT(215, -139, 1499, -5610, 0, 0, 0,   0x0, bhvRedCoin),
		OBJECT(215, 4508, 5, -4721, 0, 0, 0,   0x0, bhvRedCoin),
		OBJECT(215, 3364, 2009, -2617, 0, 0, 0,   0x0, bhvRedCoin),
		OBJECT(215, 4873, -749, -2365, 0, 0, 0,   0x0, bhvRedCoin),
		OBJECT(215, 775, 3289, 3515, 0, 0, 0,   0x0, bhvRedCoin),
		OBJECT(215, 1465, 1339, 191, 0, 0, 0,   0x0, bhvRedCoin),
		OBJECT(MODEL_SHRINKING_PLATFORM_MOP, 5119, 5072, 3418, 0, 0, 0,   0x0, bhvShrinking_Platform_MOP),
		OBJECT(MODEL_SHRINKING_PLATFORM_MOP, -6209, 2085, -5163, 0, 0, 0,   0x0, bhvShrinking_Platform_MOP),
		OBJECT(0, 349, 969, -96, 0, 90, 0,   0xa0000, bhvSpinAirborneWarp),
		OBJECT(122, 12142, 3512, 216, 0, -90, 0,   0x0, bhvStar),
		OBJECT(122, 7305, 7830, -1817, 0, -90, 0,   0x1000000, bhvStar),
		OBJECT(122, -8230, 4219, -5239, 0, -90, 0,   0x2000000, bhvStar),
		OBJECT(MODEL_NONE, 4474, -1305, -2747, 0, 180, 0,  (2 << 16), bhvWarp),
		TERRAIN(bob_area_1_collision),
		MACRO_OBJECTS(bob_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_SMB_OVERWORLD),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	AREA(2, bob_area_2),
		WARP_NODE(10, LEVEL_BOB,   2,   0, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE_GROUNDS,   1, 0xA1, WARP_NO_CHECKPOINT),
		WARP_NODE(241, LEVEL_CASTLE_GROUNDS,   1, 0XA0, WARP_NO_CHECKPOINT),
		OBJECT(0, 1965, -6437, -2029, 0, 0, 0,   0x20000, bhvCoinFormation),
		OBJECT(0, -2894, -5690, -2042, 0, 0, 0,   0x110000, bhvCoinFormation),
		OBJECT(0, 2804, -5580, 2551, 0, 90, 0,   0x0, bhvCoinFormation),
		OBJECT(137, 3242, -3796, 314, 0, 0, 0,   0x20000, bhvExclamationBox),
		OBJECT(137, -2817, -4862, -2583, 0, 0, 0,   0x50000, bhvExclamationBox),
		OBJECT(207, -2841, -4937, -1484, 0, 0, 0,   0x0, bhvFloorSwitchHiddenObjects),
		OBJECT(220, -4077, -4341, -528, 0, 0, 0,   0x0, bhvFlyGuy),
		OBJECT(192, -4110, -4938, 1239, 0, 0, 0,   0x0, bhvGoomba),
		OBJECT(192, -4297, -4938, 1598, 0, 0, 0,   0x0, bhvGoomba),
		OBJECT(192, -3295, -5366, -2583, 0, 0, 0,   0x0, bhvGoomba),
		OBJECT(0, 1965, -6437, -2031, 0, 0, 0,   0x0, bhvGoombaTripletSpawner),
		OBJECT(129, -3295, -5111, -997, 0, 0, 0,   0x0, bhvHiddenObject),
		OBJECT(129, -3671, -5111, -302, 0, 0, 0,   0x0, bhvHiddenObject),
		OBJECT(129, -3967, -5111, 329, 0, 0, 0,   0x0, bhvHiddenObject),
		OBJECT(104, -2413, -6223, -2366, 0, 0, 0,   0x0, bhvKoopa),
		OBJECT(122, -918, -5256, 1426, 0, 0, 0,   0x4000000, bhvStar),
		OBJECT(122, 2829, -6020, 2561, 0, 0, 0,   0x5000000, bhvStar),
		OBJECT(0, 1553, -4739, 2551, 0, 179, 0,  (3 << 16), bhvWarp),
		OBJECT(MODEL_FALLING_OBJECT_2, -2534, -5804, 1426, 0, 0, 0, 0x0, bhvFallingObject),
		OBJECT(MODEL_FALLING_OBJECT_2, -3166, -5453, 1426, 0, 0, 0, 0x0, bhvFallingObject),
		OBJECT(MODEL_FALLING_OBJECT_2, -1729, -6451, 1426, 0, 0, 0, 0x0, bhvFallingObject),
		OBJECT(MODEL_FALLING_OBJECT_2, 674, -6451, -2031, 0, 0, 0, 0x0, bhvFallingObject),
		OBJECT(MODEL_FALLING_OBJECT_2, -521, -6451, -2031, 0, 0, 0, 0x0, bhvFallingObject),
		OBJECT(MODEL_FALLING_OBJECT_2, -1611, -6451, -2031, 0, 0, 0, 0x0, bhvFallingObject),
		TERRAIN(bob_area_2_collision),
		MACRO_OBJECTS(bob_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_SMB_UNDERGROUND),
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