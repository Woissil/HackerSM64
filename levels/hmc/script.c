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
	LOAD_YAY0(0x06, _group17_yay0SegmentRomStart, _group17_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group17_geoSegmentRomStart, _group17_geoSegmentRomEnd), 
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

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, hmc_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BOOMERANG_BOX, 2762, 139, 10408, 0, 0, 0, 0x00000000, bhvBreakBoxBoomerang),
		OBJECT(MODEL_EXCLAMATION_BOX, 1016, 622, 11314, 0, 0, 0, 0x00000000, bhvExclamationBox),
		OBJECT(MODEL_COCONUT, -770, 207, 10853, 0, 0, 0, 0x00000000, bhvCoconut),
		OBJECT(MODEL_COCONUT, 2762, 139, 10408, 0, 0, 0, 0x00000000, bhvCoconut),
		OBJECT(MODEL_COCONUT, -3529, 837, 10810, 0, 0, 0, 0x00000000, bhvCoconut),
		OBJECT(MODEL_NONE, -2955, 207, 10403, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 182, 207, 10403, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_GOOMBA, 314, 250, 9786, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -314, 250, 10490, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -314, 250, 9845, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 2573, 183, 12734, 0, 0, 0, 0x00000000, bhvSketchyKoopa),
		OBJECT(MODEL_STAR, -2725, 1153, 7284, 0, 0, 0, (1 << 24), bhvStar),
		OBJECT(MODEL_YOSHI, 314, 201, 12874, 0, 0, 0, 0x00000000, bhvBeachYoshi),
		OBJECT(MODEL_NONE, 0, 397, 13252, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, 0, 0, 397, 13252),
		TERRAIN(hmc_area_1_collision),
		MACRO_OBJECTS(hmc_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
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
