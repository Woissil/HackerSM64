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
#include "actors/group0.h"
#include "make_const_nonconst.h"
#include "levels/wf/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_wf_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _wf_segment_7SegmentRomStart, _wf_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _grass_yay0SegmentRomStart, _grass_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group1_yay0SegmentRomStart, _group1_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group1_geoSegmentRomStart, _group1_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_2), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, wf_geo_0007E0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04, wf_geo_000820), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05, wf_geo_000860), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06, wf_geo_000878), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07, wf_geo_000890), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08, wf_geo_0008A8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09, wf_geo_0008E8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A, wf_geo_000900), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C, wf_geo_000940), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_GIANT_POLE, wf_geo_000AE0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E, wf_geo_000958), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F, wf_geo_0009A0), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_ROTATING_PLATFORM, wf_geo_0009B8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11, wf_geo_0009D0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_12, wf_geo_0009E8), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_SMALL_BOMP, wf_geo_000A00), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_LARGE_BOMP, wf_geo_000A40), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_ROTATING_WOODEN_PLATFORM, wf_geo_000A58), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_SLIDING_PLATFORM, wf_geo_000A98), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TUMBLING_BRIDGE_PART, wf_geo_000AB0), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TUMBLING_BRIDGE, wf_geo_000AC8), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_TRAPEZOID_PLATORM, wf_geo_000AF8), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_SQUARE_PLATORM, wf_geo_000B10), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_SQUARE_PLATORM_UNUSED, wf_geo_000B38), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_SQUARE_PLATORM_ELEVATOR, wf_geo_000B60), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_BREAKABLE_WALL_RIGHT, wf_geo_000B78), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_BREAKABLE_WALL_LEFT, wf_geo_000B90), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_KICKABLE_BOARD, wf_geo_000BA8), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_DOOR, wf_geo_000BE0), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_KICKABLE_BOARD_FELLED, wf_geo_000BC8), 
	LOAD_MODEL_FROM_GEO(MODEL_SPIN_FLOWER, spin_flower_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_VINE, swingvine_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BOUNCING_LEAF, bouncing_leaf_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_SWITCHBLOCK_SWITCH_MOP, Switchblock_Switch_MOP_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_SWITCHBLOCK_SWITCH_RED_MOP, Switchblock_Switch_Red_MOP_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_SWITCHBLOCK_MOP, Switchblock_MOP_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_SWITCHBLOCK_RED_MOP, Switchblock_Red_MOP_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_SWITCHBLOCK_BORDER_MOP, Switchblock_Border_MOP_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_SWITCHBLOCK_BORDER_RED_MOP, Switchblock_Border_Red_MOP_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_NOTEBLOCK, noteblock_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_FLIPSWAP_PLATFORM_BORDER_MOP, Flipswap_Platform_Border_MOP_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_FLIPSWAP_PLATFORM_MOP, Flipswap_Platform_MOP_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_SPRING_MOP, Spring_MOP_geo), 
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, wf_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BOUNCING_LEAF, 870, 1741, 10337, 0, -72, 0, 0x00000000, bhvBouncingLeaf),
		OBJECT(MODEL_BOUNCING_LEAF, -1682, 1068, 11723, 0, -49, 0, 0x00000000, bhvBouncingLeaf),
		OBJECT(MODEL_BOUNCING_LEAF, -468, 795, 6684, 0, -51, 0, (1 << 16), bhvBouncingLeaf),
		OBJECT(MODEL_BOUNCING_LEAF, 3160, 1461, 11564, 0, 141, 0, (1 << 16), bhvBouncingLeaf),
		OBJECT(MODEL_BOUNCING_LEAF, -8790, 1080, 9274, 0, 84, 0, (1 << 16), bhvBouncingLeaf),
		OBJECT(MODEL_BOUNCING_LEAF, 933, -108, 12060, 0, -145, 0, (1 << 16), bhvBouncingLeaf),
		OBJECT(MODEL_NONE, -4068, 2279, 6353, 0, 0, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -3690, 2279, 4763, 0, 0, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 496, 291, 3840, 0, 0, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_FLIPSWAP_PLATFORM_MOP, -1306, 366, 614, 0, 0, 0, 0x00000000, bhvFlipswap_Platform_MOP),
		MARIO_POS(0x01, 0, 78, 487, -424),
		OBJECT(MODEL_NOTEBLOCK, 4217, 1455, 4902, 0, 0, 0, (35 << 16), bhvNoteBlock),
		OBJECT(MODEL_NOTEBLOCK, 1402, 366, 1848, 0, 0, 0, (20 << 16), bhvNoteBlock),
		OBJECT(MODEL_RED_COIN, 773, -47, 11763, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 760, 750, 6541, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 1679, -326, 3121, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 2085, 1080, -3224, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -2689, 2269, 6201, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_NONE, 496, 291, 3840, 0, 0, 0, 0x00000000, bhvHiddenRedCoinStar),
		OBJECT(MODEL_SPIN_FLOWER, -2564, 989, 4014, 0, 0, 0, (84 << 16), bhvSpinFlower),
		OBJECT(MODEL_SPIN_FLOWER, 1786, 491, -2625, 0, 0, 0, (90 << 16), bhvSpinFlower),
		OBJECT(MODEL_SPIN_FLOWER, 2, 561, 11173, 0, 0, 0, (84 << 16), bhvSpinFlower),
		OBJECT(MODEL_SPRING_MOP, -836, 366, -354, 0, 0, 0, (1 << 16), bhvSpring_MOP),
		OBJECT(MODEL_STAR, 9198, 5242, -5525, 0, 0, 0, (3 << 16), bhvStar),
		OBJECT(MODEL_NONE, 1800, 366, 355, 0, 0, 0, (1 << 16), bhvSwitchblock_MOP),
		OBJECT(MODEL_NONE, 1370, 366, 1100, 0, 0, 0, (0 << 16), bhvSwitchblock_MOP),
		OBJECT(MODEL_SWITCHBLOCK_SWITCH_MOP, 859, 366, 109, 0, 0, 0, (0 << 16), bhvSwitchblock_Switch_MOP),
		OBJECT(MODEL_SWITCHBLOCK_SWITCH_MOP, 232, 366, 262, 0, 0, 0, (1 << 16), bhvSwitchblock_Switch_MOP),
		OBJECT(MODEL_SWITCHBLOCK_SWITCH_MOP, 637, 366, 458, 0, 0, 0, (1 << 16), bhvSwitchblock_Switch_MOP),
		OBJECT(MODEL_NONE, 78, 487, -424, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		OBJECT(MODEL_EXCLAMATION_BOX, 6283, 2575, 4676, 0, 0, 0, (3 << 16), bhvExclamationBox),
		TERRAIN(wf_area_1_collision),
		MACRO_OBJECTS(wf_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, 78, 487, -424),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};