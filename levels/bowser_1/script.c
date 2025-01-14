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
#include "actors/group0.h"
#include "actors/group12.h"
#include "make_const_nonconst.h"
#include "levels/bowser_1/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_bowser_1_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _bowser_1_segment_7SegmentRomStart, _bowser_1_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _bidw_skybox_yay0SegmentRomStart, _bidw_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x06, _group12_yay0SegmentRomStart, _group12_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group12_geoSegmentRomStart, _group12_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _bowser_1_segment_7SegmentRomStart, _bowser_1_segment_7SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_13), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, bowser_1_yellow_sphere_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_SHRINKING_PLATFORM_BORDER_MOP, Shrinking_Platform_Border_MOP_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_SHRINKING_PLATFORM_MOP, Shrinking_Platform_MOP_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_SWITCHBLOCK_SWITCH_MOP, Switchblock_Switch_MOP_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_SWITCHBLOCK_SWITCH_RED_MOP, Switchblock_Switch_Red_MOP_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_SWITCHBLOCK_MOP, Switchblock_MOP_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_SWITCHBLOCK_RED_MOP, Switchblock_Red_MOP_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_SWITCHBLOCK_BORDER_MOP, Switchblock_Border_MOP_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_SWITCHBLOCK_BORDER_RED_MOP, Switchblock_Border_Red_MOP_geo), 
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, bowser_1_area_1),
		WARP_NODE(0x0A, LEVEL_CASTLE_GROUNDS, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE_GROUNDS, 0x01, 0xA2, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE_GROUNDS, 0x01, 0xA2, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_WF, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x02, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x04, LEVEL_CASTLE, 0x01, 0x0B, WARP_NO_CHECKPOINT),
		WARP_NODE(0x05, LEVEL_CASTLE, 0x01, 0x0C, WARP_NO_CHECKPOINT),
		MARIO_POS(0x01, 0, 975, 2539, 279),
		OBJECT(MODEL_BITDW_IN_OUT_PLATFORM, -581, 2789, 5051, 0, 0, 0, (30 << 24) | (15 << 16) | (1 << 8), bhvInOutPlatform),
		OBJECT(MODEL_BITDW_IN_OUT_PLATFORM, -1051, 2789, 6418, 0, -180, 0, (30 << 24) | (15 << 16) | (1 << 8), bhvInOutPlatform),
		OBJECT(MODEL_BITDW_IN_OUT_PLATFORM, -581, 3037, 6875, 0, 0, 0, (30 << 24) | (15 << 16) | (1 << 8), bhvInOutPlatform),
		OBJECT(MODEL_BITDW_IN_OUT_PLATFORM, 150, 3012, 9413, 0, -90, 0, (30 << 24) | (15 << 16) | (1 << 8), bhvInOutPlatform),
		OBJECT(0, -1488, 4398, -10446, 0, 0, 0,  0x0, bhvBowser),
		OBJECT(MODEL_SHRINKING_PLATFORM_MOP, -1723, 2573, -2974, 0, 0, 0,  0x0, bhvShrinking_Platform_MOP),
		OBJECT(MODEL_SHRINKING_PLATFORM_MOP, -1713, 2573, -3723, 0, 0, 0,  0x0, bhvShrinking_Platform_MOP),
		OBJECT(0, 990, 2120, 266, 0, 0, 0,  0xa0000, bhvSpinAirborneWarp),
		OBJECT(MODEL_NONE, 394, 1880, 541, 0, 0, 0, (1 << 16), bhvSwitchblock_MOP),
		OBJECT(MODEL_NONE, 681, 1880, 541, 0, 0, 0, (1 << 16), bhvSwitchblock_MOP),
		OBJECT(MODEL_NONE, 971, 1880, 541, 0, 0, 0, (1 << 16), bhvSwitchblock_MOP),
		OBJECT(MODEL_NONE, 1256, 1880, 541, 0, 0, 0, (1 << 16), bhvSwitchblock_MOP),
		OBJECT(MODEL_NONE, 1537, 1880, 541, 0, 0, 0, (1 << 16), bhvSwitchblock_MOP),
		OBJECT(MODEL_NONE, 394, 1880, 826, 0, 0, 0, (1 << 16), bhvSwitchblock_MOP),
		OBJECT(MODEL_NONE, 394, 1880, 1109, 0, 0, 0, (1 << 16), bhvSwitchblock_MOP),
		OBJECT(MODEL_NONE, 394, 1880, 1390, 0, 0, 0, (1 << 16), bhvSwitchblock_MOP),
		OBJECT(MODEL_NONE, 394, 1880, 1679, 0, 0, 0, (1 << 16), bhvSwitchblock_MOP),
		OBJECT(MODEL_NONE, 681, 1880, 826, 0, 0, 0, (1 << 16), bhvSwitchblock_MOP),
		OBJECT(MODEL_NONE, 971, 1880, 826, 0, 0, 0, (1 << 16), bhvSwitchblock_MOP),
		OBJECT(MODEL_NONE, 1256, 1880, 826, 0, 0, 0, (1 << 16), bhvSwitchblock_MOP),
		OBJECT(MODEL_NONE, 1537, 1880, 826, 0, 0, 0, (1 << 16), bhvSwitchblock_MOP),
		OBJECT(MODEL_NONE, 681, 1880, 1109, 0, 0, 0, (1 << 16), bhvSwitchblock_MOP),
		OBJECT(MODEL_NONE, 971, 1880, 1109, 0, 0, 0, (1 << 16), bhvSwitchblock_MOP),
		OBJECT(MODEL_NONE, 1256, 1880, 1109, 0, 0, 0, (1 << 16), bhvSwitchblock_MOP),
		OBJECT(MODEL_NONE, 1537, 1880, 1109, 0, 0, 0, (1 << 16), bhvSwitchblock_MOP),
		OBJECT(MODEL_NONE, 681, 1880, 1390, 0, 0, 0, (1 << 16), bhvSwitchblock_MOP),
		OBJECT(MODEL_NONE, 971, 1880, 1390, 0, 0, 0, (1 << 16), bhvSwitchblock_MOP),
		OBJECT(MODEL_NONE, 1256, 1880, 1390, 0, 0, 0, (1 << 16), bhvSwitchblock_MOP),
		OBJECT(MODEL_NONE, 1537, 1880, 1390, 0, 0, 0, (1 << 16), bhvSwitchblock_MOP),
		OBJECT(MODEL_NONE, 681, 1880, 1679, 0, 0, 0, (1 << 16), bhvSwitchblock_MOP),
		OBJECT(MODEL_NONE, 971, 1880, 1679, 0, 0, 0, (1 << 16), bhvSwitchblock_MOP),
		OBJECT(MODEL_NONE, 1256, 1880, 1679, 0, 0, 0, (1 << 16), bhvSwitchblock_MOP),
		OBJECT(MODEL_NONE, 1537, 1880, 1679, 0, 0, 0, (1 << 16), bhvSwitchblock_MOP),
		OBJECT(MODEL_NONE, 3252, 4631, 1190, 0, 0, 0, (1 << 16), bhvSwitchblock_Switch_MOP),
		OBJECT(MODEL_NONE, -557, 3715, 9346, 0, 0, 0,  0x0, bhvSwitchblock_Switch_MOP),
		OBJECT(MODEL_SWITCHBLOCK_SWITCH_MOP, -1730, 2573, -4630, 0, 0, 0, 0x00000000, bhvSwitchblock_Switch_MOP),
		OBJECT(MODEL_NONE, 975, 2539, 279, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		TERRAIN(bowser_1_area_1_collision),
		MACRO_OBJECTS(bowser_1_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x29, SEQ_WC),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, 975, 2539, 279),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};