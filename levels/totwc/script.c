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
#include "make_const_nonconst.h"
#include "levels/totwc/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_totwc_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _totwc_segment_7SegmentRomStart, _totwc_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _cloud_floor_skybox_yay0SegmentRomStart, _cloud_floor_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _sky_yay0SegmentRomStart, _sky_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group8_yay0SegmentRomStart, _group8_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group8_geoSegmentRomStart, _group8_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _totwc_segment_7SegmentRomStart, _totwc_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_9), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, totwc_geo_000160), 
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, totwc_area_1),
		WARP_NODE(0x0A, LEVEL_CASTLE_GROUNDS, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_WF, 0x01, 0xA0, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_WF, 0x01, 0xA1, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_WF, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x02, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x04, LEVEL_CASTLE, 0x01, 0x0B, WARP_NO_CHECKPOINT),
		WARP_NODE(0x05, LEVEL_CASTLE, 0x01, 0x0C, WARP_NO_CHECKPOINT),
		MARIO_POS(0x01, 0, 55, 585, 1097),
		OBJECT(195, -3874, 1825, -1728, 0, 0, 0,  0x0, bhvBobombBuddyOpensCannon),
		OBJECT(201, -4194, 1825, -1944, 0, 0, 0,  0x0, bhvCannonClosed),
		OBJECT(85, 4258, 222, -1168, 0, 0, 0,  0x0, bhvCapSwitch),
		OBJECT(223, 2969, 123, -1149, 0, 0, 0,  0x0, bhvChuckya),
		OBJECT(0, -4272, 1050, -1309, 0, 90, 0,  0x0, bhvCoinFormation),
		OBJECT(0, -3988, 3625, -2302, 0, 0, 0,  0x120000, bhvCoinFormation),
		OBJECT(137, -96, 740, -1248, 0, 0, 0,  0x50000, bhvExclamationBox),
		OBJECT(137, -4520, 2185, -1723, 0, 0, 0,  0x0, bhvExclamationBox),
		OBJECT(220, 2276, 480, -1162, 0, 0, 0,  0x0, bhvFlyGuy),
		OBJECT(220, -2419, 990, -1431, 0, 0, 0,  0x0, bhvFlyGuy),
		OBJECT(0, 19, 115, -606, 0, 0, 0,  0x0, bhvGoombaTripletSpawner),
		OBJECT(0, 3662, 522, -1191, 0, 0, 0,  0x0, bhvHiddenStar),
		OBJECT(0, 1504, 4350, 3100, 0, 0, 0,  0x0, bhvHiddenStarTrigger),
		OBJECT(0, -1112, 4980, 1965, 0, 0, 0,  0x0, bhvHiddenStarTrigger),
		OBJECT(0, 1494, 4440, -6246, 0, 0, 0,  0x0, bhvHiddenStarTrigger),
		OBJECT(0, -929, 5010, -6092, 0, 0, 0,  0x0, bhvHiddenStarTrigger),
		OBJECT(0, 4234, 4170, -1203, 0, 0, 0,  0x0, bhvHiddenStarTrigger),
		OBJECT(0, 32, 630, 1111, 0, -180, 0,  0xa0000, bhvSpinAirborneWarp),
		OBJECT(MODEL_NONE, 55, 585, 1097, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		TERRAIN(totwc_area_1_collision),
		MACRO_OBJECTS(totwc_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x29, SEQ_WC),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, 55, 585, 1097),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};