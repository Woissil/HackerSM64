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

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

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
	LOAD_MIO0(0x7, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _bbh_skybox_mio0SegmentRomStart, _bbh_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_4), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_CHAIN_CHOMP_GATE, bob_geo_000440), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_SEESAW_PLATFORM, bob_geo_000458), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BARS_GRILLS, bob_geo_000470), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, bob_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE, 0x01, 0x32, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(2, LEVEL_BOB, 0x02, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(3, LEVEL_BOB, 0x01, 3, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_EXCLAMATION_BOX, -3326, 630, -1911, 0, 0, 0, (1 << 16), bhvExclamationBox),
		OBJECT(MODEL_YELLOW_COIN, -5175, 201, -4020, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -5117, 201, -4020, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -5058, 201, -4020, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -5008, 201, -4020, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -4950, 201, -4020, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -4891, 201, -4020, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -2223, 202, 2323, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -2165, 202, 2323, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -2106, 202, 2323, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -2402, 202, 2323, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -2345, 202, 2323, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -2285, 202, 2323, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 891, 999, 2392, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 948, 999, 2392, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 1007, 999, 2392, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 711, 999, 2392, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 769, 999, 2392, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 828, 999, 2392, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 1244, 999, 2392, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 1302, 999, 2392, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 1361, 999, 2392, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 1065, 999, 2392, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 1123, 999, 2392, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 1182, 999, 2392, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -2336, 202, 3700, 0, -90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -2336, 202, 3757, 0, -90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -2336, 202, 3521, 0, -90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -2336, 202, 3578, 0, -90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -2336, 202, 3637, 0, -90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_NONE, -4961, 465, -6533, 0, -90, 0, (3 << 16), bhvWarp),
		OBJECT(MODEL_GOOMBA, -3646, 201, -976, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -3145, 201, -1377, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -4071, 201, 846, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -3003, 201, 1801, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -3003, 201, 614, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -3606, 201, 2326, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -401, 756, 2348, 0, 0, 0, 0x00000000, bhvGoomba),
		MARIO_POS(0x01, 90, -5573, 310, -3983),
		OBJECT(MODEL_CASTLE_GROUNDS_WARP_PIPE, -4961, 201, -7051, 0, -90, 0, (2 << 16), bhvWarpPipe),
		OBJECT(MODEL_RED_COIN, -3729, 567, -2485, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -5311, 663, 5765, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -8198, 1147, -857, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_WOODEN_SIGNPOST, -3014, 201, -1906, 0, -180, 0, 0x00000000, bhvMessagePanel),
		OBJECT(MODEL_WOODEN_SIGNPOST, 1988, 995, 1782, 0, -90, 0, (1 << 16), bhvMessagePanel),
		OBJECT(MODEL_WOODEN_SIGNPOST, -5166, 663, 1670, 0, 90, 0, (2 << 16), bhvMessagePanel),
		OBJECT(MODEL_WOODEN_SIGNPOST, -197, 201, -2432, 0, -90, 0, (3 << 16), bhvMessagePanel),
		OBJECT(MODEL_WOODEN_SIGNPOST, -2496, 201, 5009, 0, -180, 0, (4 << 16), bhvMessagePanel),
		OBJECT(MODEL_WOODEN_SIGNPOST, -5313, 201, -6468, 0, 0, 0, (5 << 16), bhvMessagePanel),
		OBJECT(MODEL_STAR, -10722, 1805, 1183, 0, 0, 0, (2 << 24), bhvStar),
		OBJECT(MODEL_STAR, -2353, 694, 10523, 0, 0, 0, (3 << 24), bhvStar),
		OBJECT(MODEL_STAR_STUCK_IN_CRYSTAL, -6024, 630, 2445, 0, 0, 0, 0x00000000, bhvStarStuckInCrystal),
		OBJECT(MODEL_TARGET_BULSEYE, 5410, 995, 1022, 0, 180, 0, (1 << 24), bhvTargetBulseye),
		OBJECT(MODEL_TARGET_BULSEYE, 5397, 995, 3691, 0, 180, 0, (1 << 24), bhvTargetBulseye),
		OBJECT(MODEL_TARGET_BULSEYE, 5412, 995, 2419, 0, 180, 0, (1 << 24), bhvTargetBulseye),
		OBJECT(MODEL_TNT, -6600, 663, 5989, 0, 90, 0, (2 << 16), bhvTNT),
		OBJECT(MODEL_NONE, -5573, 310, -3983, 0, 90, 0, 0x000A0000, bhvSpinAirborneWarp),
		TERRAIN(bob_area_1_collision),
		MACRO_OBJECTS(bob_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, bob_area_2),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE, 0x01, 0x32, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 3, WARP_NO_CHECKPOINT),
		MARIO_POS(0x01, 90, 4681, 310, 24),
		OBJECT(MODEL_NONE, 4681, 310, 24, 0, 90, 0, 0x000A0000, bhvSpinAirborneWarp),
		TERRAIN(bob_area_2_collision),
		MACRO_OBJECTS(bob_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 90, 4681, 310, 24),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
