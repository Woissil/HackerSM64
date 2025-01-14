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
#include "actors/common0.h"
#include "make_const_nonconst.h"
#include "levels/castle_inside/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_castle_inside_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _castle_inside_segment_7SegmentRomStart, _castle_inside_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _inside_yay0SegmentRomStart, _inside_yay0SegmentRomEnd), 
	LOAD_YAY0(0x06, _group15_yay0SegmentRomStart, _group15_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group15_geoSegmentRomStart, _group15_geoSegmentRomEnd), 
	LOAD_YAY0(0xa, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_16), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_BOWSER_TRAP, castle_geo_000F18), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WATER_LEVEL_PILLAR, castle_geo_001940), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_MINUTE_HAND, castle_geo_001530), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_HOUR_HAND, castle_geo_001548), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_PENDULUM, castle_geo_001518), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WOODEN_DOOR, wooden_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_METAL_DOOR, metal_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR_UNUSED, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WOODEN_DOOR_UNUSED, wooden_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_0_STARS, castle_door_0_star_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_1_STAR, castle_door_1_star_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_3_STARS, castle_door_3_stars_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_KEY_DOOR, key_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_30_STARS, castle_geo_000F00), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_8_STARS, castle_geo_000F00), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_50_STARS, castle_geo_000F00), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_70_STARS, castle_geo_000F00), 
	LOAD_MODEL_FROM_GEO(MODEL_WARP_PIPE, warp_pipe_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_NOTEBLOCK, noteblock_geo), 
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, castle_inside_area_1),
		WARP_NODE(0x0A, LEVEL_CASTLE_GROUNDS, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE, 0x01, 0xA2, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE, 0x01, 0xA2, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0C, LEVEL_CASTLE_GROUNDS, 0x01, 0x05, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_CASTLE_GROUNDS, 0x01, 0x04, WARP_NO_CHECKPOINT),
		WARP_NODE(0x07, LEVEL_PSS, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x08, LEVEL_BITDW, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		MARIO_POS(0x01, 0, 0, 200, 0),
		OBJECT(0, 328, 710, -1921, 0, 0, 0,  0x40000, bhvAirborneDeathWarp),
		OBJECT(0, -1620, 1540, 30, 0, -90, 0, (0xB1 << 16), bhvAirborneDeathWarp),
		OBJECT(0, -12, 1450, 1775, 0, -180, 0,  0x80000, bhvAirborneDeathWarp),
		OBJECT(0, 989, 517, 5, 0, 90, 0, (0xA2 << 16), bhvAirborneDeathWarp),
		OBJECT(0, 328, 710, -1921, 0, 0, 0,  0x30000, bhvAirborneStarCollectWarp),
		OBJECT(0, -1620, 1540, 30, 0, -90, 0, (0xB0 << 16), bhvAirborneStarCollectWarp),
		OBJECT(34, -1274, 991, 72, 0, 90, 0,  0x14000000, bhvDoor),
		OBJECT(34, -1274, 991, -76, 0, -90, 0,  0x14000000, bhvDoor),
		OBJECT(38, 2668, 0, 73, 0, 90, 0, (0x0C << 16), bhvDoorWarp),
		OBJECT(38, 2668, 0, -77, 0, -90, 0, (0x0B << 16), bhvDoorWarp),
		OBJECT(0, -12, 1450, 1775, 0, -180, 0,  0x70000, bhvLaunchDeathWarp),
		OBJECT(MODEL_NOTEBLOCK, -9, 128, 1209, 0, 0, 0,  0x280000, bhvNoteBlock),
		OBJECT(0, 2222, 690, -29, 0, -90, 0,  0xa0000, bhvSpinAirborneWarp),
		OBJECT(221, 928, 200, -2334, 0, 0, 0,  0x4c000000, bhvToadMessage),
		OBJECT(0, 351, 610, -2968, 0, 0, 0, (7 << 16), bhvWarp),
		OBJECT(MODEL_WARP_PIPE, -2150, 1128, 0, 0, 0, 0, (8 << 16), bhvWarpPipe),
		OBJECT(MODEL_CASTLE_KEY_DOOR, 90, 991, 2071, 0, -180, 0, (1 << 24), bhvDoor),
		OBJECT(MODEL_CASTLE_KEY_DOOR, -58, 991, 2071, 0, 0, 0, (1 << 24), bhvDoor),
		OBJECT(MODEL_NONE, 0, 200, 0, 0, 0, 0, (1 << 16), bhvSpinAirborneWarp),
		TERRAIN(castle_inside_area_1_collision),
		MACRO_OBJECTS(castle_inside_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x27, SEQ_CI),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, 0, 200, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};