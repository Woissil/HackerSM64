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
#include "actors/group10.h"
#include "actors/group14.h"

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/hmc/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_hmc_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _hmc_segment_7SegmentRomStart, _hmc_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _cave_yay0SegmentRomStart, _cave_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group10_yay0SegmentRomStart, _group10_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group10_geoSegmentRomStart, _group10_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _hmc_segment_7SegmentRomStart, _hmc_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_11), 
	JUMP_LINK(script_func_load_boomerangs), 
	LOAD_MODEL_FROM_GEO(MODEL_SKETCHY_KOOPA, sketchy_koopa_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_KOOPA_WITH_SHELL, koopa_with_shell_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_KOOPA_WITHOUT_SHELL, koopa_without_shell_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BARREL, barrel_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_WHOMP, whomp_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, hmc_area_1),
		WARP_NODE(0x0A, LEVEL_HMC, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE, 0x01, 0x32, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(21, LEVEL_HMC, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(22, LEVEL_HMC, 0x03, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BOOMERANG_BOX, 2762, 56, 10408, 0, 0, 0, 0x00000000, bhvBreakBoxBoomerang),
		OBJECT(MODEL_EXCLAMATION_BOX, 1016, 622, 11314, 0, 0, 0, 0x00000000, bhvExclamationBox),
		OBJECT(MODEL_COCONUT, -770, 207, 10853, 0, 0, 0, 0x00000000, bhvCoconut),
		OBJECT(MODEL_COCONUT, 2762, 56, 10408, 0, 0, 0, 0x00000000, bhvCoconut),
		OBJECT(MODEL_COCONUT, -3529, 837, 10810, 0, 0, 0, 0x00000000, bhvCoconut),
		OBJECT(MODEL_NONE, -2955, 207, 10403, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 182, 207, 10403, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 3029, 1293, 649, 0, 90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_GOOMBA, 314, 250, 9786, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -314, 250, 10490, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -314, 250, 9845, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 3372, 173, 8035, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_KOOPA_WITH_SHELL, 3372, 485, 4342, 0, 0, 0, (1 << 16), bhvKoopa),
		OBJECT(MODEL_KOOPA_WITH_SHELL, 3372, 1238, 2524, 0, 0, 0, (1 << 16), bhvKoopa),
		OBJECT(MODEL_KOOPA_WITH_SHELL, 2944, 1332, -736, 0, 0, 0, (1 << 16), bhvKoopa),
		OBJECT(MODEL_THI_WARP_PIPE, 2944, 1541, -3083, 0, 0, 0, (21 << 16), bhvWarpPipe),
		OBJECT(MODEL_THI_WARP_PIPE, 10523, 41, -10398, 0, 0, 0, (22 << 16), bhvWarpPipe),
		OBJECT(MODEL_RED_COIN, 2644, 87, 8274, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_NONE, 175, 413, 10651, 0, 0, 0, (2 << 24), bhvBowserCourseRedCoinStar),
		OBJECT(MODEL_RED_COIN, 8, 372, 7307, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 1541, 605, 2009, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_SKETCHY_KOOPA, 2573, 183, 12734, 0, 0, 0, 0x00000000, bhvSketchyKoopa),
		OBJECT(MODEL_STAR, -2725, 1153, 7284, 0, 0, 0, (1 << 24), bhvStar),
		OBJECT(MODEL_NONE, 0, 397, 13252, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, 0, 0, 397, 13252),
		OBJECT(MODEL_YOSHI, 314, 201, 12874, 0, 0, 0, 0x00000000, bhvBeachYoshi),
		TERRAIN(hmc_area_1_collision),
		MACRO_OBJECTS(hmc_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_BEACHY_THEME),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, hmc_area_2),
		WARP_NODE(0x0A, LEVEL_HMC, 0x01, 21, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE, 0x01, 0x32, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BARREL, -258, 135, 10377, 0, 0, 0, (2 << 16), bhvBeachBarrel),
		OBJECT(MODEL_BARREL, 379, 135, 10377, 0, 0, 0, (4 << 16), bhvBeachBarrel),
		OBJECT(MODEL_BARREL, 977, 135, 10377, 0, 0, 0, (3 << 16), bhvBeachBarrel),
		OBJECT(MODEL_BARREL, 379, 135, 10897, 0, 0, 0, (1 << 16), bhvBeachBarrel),
		OBJECT(MODEL_WHOMP, 379, 135, 9348, 0, 0, 0, (10 << 16), bhvBeachWhomp),
		OBJECT(MODEL_THI_WARP_PIPE, 0, 167, 13391, 0, -180, 0, 0x000A0000, bhvWarpPipe),
		TERRAIN(hmc_area_2_collision),
		MACRO_OBJECTS(hmc_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_BEACHY_THEME),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(3, hmc_area_3),
		WARP_NODE(0x0A, LEVEL_HMC, 0x01, 21, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE, 0x01, 0x32, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_HMC, 0x03, 22, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_EXCLAMATION_BOX, 2423, 462, -3098, 0, 0, 0, 0x00000000, bhvExclamationBox),
		OBJECT(MODEL_GOOMBA, 1069, 196, -1090, 0, 0, 0, (11 << 16), bhvCoconutKing),
		OBJECT(MODEL_NONE, 1069, 314, -3098, 0, 0, 0, (10 << 16), bhvSpinAirborneWarp),
		OBJECT(MODEL_EXCLAMATION_BOX, -546, 462, -3098, 0, 0, 0, 0x00000000, bhvExclamationBox),
		TERRAIN(hmc_area_3_collision),
		MACRO_OBJECTS(hmc_area_3_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_BEACHY_THEME),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, 0, 397, 13252),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
