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
#include "make_const_nonconst.h"
#include "levels/bitfs/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_bitfs_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _bitfs_segment_7SegmentRomStart, _bitfs_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _sky_yay0SegmentRomStart, _sky_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _bidw_skybox_yay0SegmentRomStart, _bidw_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0B, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group2_yay0SegmentRomStart, _group2_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group2_geoSegmentRomStart, _group2_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group17_yay0SegmentRomStart, _group17_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group17_geoSegmentRomStart, _group17_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_3), 
	JUMP_LINK(script_func_global_18), 
	JUMP_LINK(script_func_global_1), 
	LOAD_MODEL_FROM_GEO(MODEL_NOTEBLOCK, noteblock_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_FLIPSWAP_PLATFORM_BORDER_MOP, Flipswap_Platform_Border_MOP_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_FLIPSWAP_PLATFORM_MOP, Flipswap_Platform_MOP_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_SANDBLOCK_MOP, SandBlock_MOP_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_SHRINKING_PLATFORM_BORDER_MOP, Shrinking_Platform_Border_MOP_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_SHRINKING_PLATFORM_MOP, Shrinking_Platform_MOP_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_SPRING_MOP, Spring_MOP_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_WARP_PIPE, warp_pipe_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_UPNDOWN, upndown_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BITDW_IN_OUT_PLATFORM, bitdw_in_out_platform_geo), 
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, bitfs_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE, 0x01, 0xB0, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE, 0x01, 0xB1, WARP_NO_CHECKPOINT),
		WARP_NODE(0xA2, LEVEL_BOWSER_1, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		MARIO_POS(0x01, 0, 6317, 804, -6822),
		OBJECT(MODEL_NONE, -378, 7318, 6948, 0, 90, 0, (32 << 24), bhvTTCTreadmill),
		OBJECT(MODEL_NONE, 2567, 7318, 6948, 0, -90, 0, (32 << 24) | (1 << 16), bhvTTCTreadmill),
		OBJECT(MODEL_NONE, 2569, 7318, 5453, 0, 90, 0, (32 << 24), bhvTTCTreadmill),
		OBJECT(MODEL_NONE, -376, 7318, 5453, 0, -90, 0, (32 << 24) | (1 << 16), bhvTTCTreadmill),
		OBJECT(MODEL_UPNDOWN, 7645, 7330, 4716, 0, -90, 0, (115 << 24) | (20 << 16) | (1 << 8), bhvUpDownObject),
		OBJECT(MODEL_UPNDOWN, 8304, 8159, -5100, 0, 0, 0, (30 << 24) | (15 << 16) | (2 << 8), bhvUpDownObject),
		OBJECT(MODEL_BITDW_IN_OUT_PLATFORM, 5985, 7561, -158, 0, -180, 0, (30 << 24) | (15 << 16) | (3 << 8) | (1), bhvInOutPlatform),
		OBJECT(MODEL_BITDW_IN_OUT_PLATFORM, 6436, 7888, -712, 0, 0, 0, (30 << 24) | (15 << 16) | (3 << 8), bhvInOutPlatform),
		OBJECT(MODEL_BITDW_IN_OUT_PLATFORM, 5985, 7716, -1723, 0, -180, 0, (30 << 24) | (15 << 16) | (3 << 8) | (1), bhvInOutPlatform),
		OBJECT(MODEL_BITDW_IN_OUT_PLATFORM, 6444, 7716, -2560, 0, 0, 0, (30 << 24) | (15 << 16) | (3 << 8), bhvInOutPlatform),
		OBJECT(MODEL_BITDW_IN_OUT_PLATFORM, -3418, 5625, -110, 0, -90, 0, (30 << 24) | (15 << 16) | (1 << 8), bhvInOutPlatform),
		OBJECT(MODEL_BITDW_IN_OUT_PLATFORM, -4691, 5625, -618, 0, 90, 0, (30 << 24) | (15 << 16) | (1 << 8) | (1), bhvInOutPlatform),
		OBJECT(0, 8337, 8645, -6340, 0, 0, 0, (0xA1 << 16), bhvAirborneDeathWarp),
		OBJECT(0, 8337, 8645, -6340, 0, 0, 0,  0x1000000, bhvBowserCourseRedCoinStar),
		OBJECT(194, -4286, 6935, -311, 0, 0, 0,  0x0, bhvCirclingAmp),
		OBJECT(0, -7129, 5725, -5785, 0, 0, 0,  0x0, bhvCoinFormation),
		OBJECT(0, -4072, 5440, -2464, 0, 90, 0,  0x0, bhvCoinFormation),
		OBJECT(0, -4280, 6875, -290, 0, 90, 0,  0x0, bhvCoinFormation),
		OBJECT(0, -3079, 7175, 5864, 0, 90, 0,  0x20000, bhvCoinFormation),
		OBJECT(0, -4759, 3067, -1326, 0, 90, 0,  0x20000, bhvCoinFormation),
		OBJECT(0, 4954, 7175, 6188, 0, 90, 0,  0x20000, bhvCoinFormation),
		OBJECT(137, -4341, 8535, 6960, 0, 0, 0,  0x50000, bhvExclamationBox),
		OBJECT(MODEL_FLIPSWAP_PLATFORM_MOP, -5429, 5905, -4111, 0, -23, 0,  0x0, bhvFlipswap_Platform_MOP),
		OBJECT(MODEL_FLIPSWAP_PLATFORM_MOP, -4359, 6295, -3440, 0, -28, 0,  0x0, bhvFlipswap_Platform_MOP),
		OBJECT(MODEL_FLIPSWAP_PLATFORM_MOP, -3359, 6715, -2953, 0, -33, 0,  0x0, bhvFlipswap_Platform_MOP),
		OBJECT(MODEL_FLIPSWAP_PLATFORM_MOP, -3137, 1000, -6951, 0, 0, 0,  0x0, bhvFlipswap_Platform_MOP),
		OBJECT(MODEL_FLIPSWAP_PLATFORM_MOP, -3137, 514, -7642, 0, -180, 0,  0x0, bhvFlipswap_Platform_MOP),
		OBJECT(MODEL_FLIPSWAP_PLATFORM_MOP, -2549, 250, -5600, 0, 125, 0,  0x0, bhvFlipswap_Platform_MOP),
		OBJECT(MODEL_FLIPSWAP_PLATFORM_MOP, -3123, 1451, -6265, 0, -180, 0,  0x0, bhvFlipswap_Platform_MOP),
		OBJECT(207, -3553, 155, -5256, 0, 0, 0,  0x0, bhvFloorSwitchHiddenObjects),
		OBJECT(220, 2373, 640, -6769, 0, 0, 0,  0x0, bhvFlyGuy),
		OBJECT(220, -4810, 3130, -3217, 0, 0, 0,  0x0, bhvFlyGuy),
		OBJECT(220, 7134, 8410, -1163, 0, 0, 0,  0x0, bhvFlyGuy),
		OBJECT(0, -3079, 7175, 5864, 0, 90, 0,  0x0, bhvGoombaTripletSpawner),
		OBJECT(0, -4759, 3067, -1326, 0, 90, 0,  0x0, bhvGoombaTripletSpawner),
		OBJECT(0, 4954, 7175, 6188, 0, 90, 0,  0x0, bhvGoombaTripletSpawner),
		OBJECT(129, -25, 90, -4777, 0, 0, 0,  0x0, bhvHiddenObject),
		OBJECT(129, -25, 90, -4577, 0, 0, 0,  0x0, bhvHiddenObject),
		OBJECT(0, -51, 1230, -595, 0, 0, 0,  0x0, bhvHiddenStar),
		OBJECT(0, 1745, 930, -642, 0, 0, 0, (1 << 16), bhvHiddenStarTrigger),
		OBJECT(0, 3607, 930, 1183, 0, 0, 0, (1 << 16), bhvHiddenStarTrigger),
		OBJECT(0, 1784, 930, 2969, 0, 0, 0, (1 << 16), bhvHiddenStarTrigger),
		OBJECT(0, -64, 930, 1237, 0, 0, 0, (1 << 16), bhvHiddenStarTrigger),
		OBJECT(0, 1823, 930, 1107, 0, 0, 0, (1 << 16), bhvHiddenStarTrigger),
		OBJECT(MODEL_NOTEBLOCK, -2329, 4072, -1375, 0, 0, 0, (57 << 16), bhvNoteBlock),
		OBJECT(215, 8335, 539, -8577, 0, 0, 0,  0x0, bhvRedCoin),
		OBJECT(215, -5595, 2850, -8486, 0, 0, 0,  0x0, bhvRedCoin),
		OBJECT(215, -7131, 6514, -8211, 0, 0, 0,  0x0, bhvRedCoin),
		OBJECT(215, -4049, 6060, -696, 0, 0, 0,  0x0, bhvRedCoin),
		OBJECT(215, -5831, 6875, -310, 0, 0, 0,  0x0, bhvRedCoin),
		OBJECT(215, -3446, 8369, 6619, 0, 0, 0,  0x0, bhvRedCoin),
		OBJECT(215, -401, 8060, 5465, 0, 0, 0,  0x0, bhvRedCoin),
		OBJECT(215, 9028, 7639, 3627, 0, 0, 0,  0x0, bhvRedCoin),
		OBJECT(MODEL_SANDBLOCK_MOP, -4298, 2090, -3931, 0, 0, 0,  0x0, bhvSandblock_MOP),
		OBJECT(MODEL_SANDBLOCK_MOP, -5349, 2090, -3940, 0, 0, 0,  0x0, bhvSandblock_MOP),
		OBJECT(MODEL_SANDBLOCK_MOP, -4294, 2540, -3257, 0, 0, 0,  0x0, bhvSandblock_MOP),
		OBJECT(MODEL_SANDBLOCK_MOP, -5344, 2540, -3263, 0, 0, 0,  0x0, bhvSandblock_MOP),
		OBJECT(MODEL_SHRINKING_PLATFORM_MOP, 1748, 720, -642, 0, 0, 0,  0x0, bhvShrinking_Platform_MOP),
		OBJECT(MODEL_SHRINKING_PLATFORM_MOP, 3606, 720, 1177, 0, 0, 0,  0x0, bhvShrinking_Platform_MOP),
		OBJECT(MODEL_SHRINKING_PLATFORM_MOP, 1787, 720, 2968, 0, 0, 0,  0x0, bhvShrinking_Platform_MOP),
		OBJECT(MODEL_SHRINKING_PLATFORM_MOP, -71, 720, 1216, 0, 0, 0,  0x0, bhvShrinking_Platform_MOP),
		OBJECT(MODEL_SHRINKING_PLATFORM_MOP, 1823, 720, 1089, 0, 0, 0,  0x0, bhvShrinking_Platform_MOP),
		OBJECT(MODEL_SHRINKING_PLATFORM_MOP, -6054, 5580, -3460, 0, 0, 0,  0x0, bhvShrinking_Platform_MOP),
		OBJECT(MODEL_SPRING_MOP, -2449, 7175, -461, 0, -6, 0,  0x6e6e0000, bhvSpring_MOP),
		OBJECT(MODEL_WARP_PIPE, 8321, 8285, -6821, 0, 0, 0, (0xA2 << 16), bhvWarpPipe),
		OBJECT(MODEL_NONE, 6317, 804, -6822, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		TERRAIN(bitfs_area_1_collision),
		MACRO_OBJECTS(bitfs_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x28, SEQ_PMTTYD_MACHO_GRUBBA),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, 6317, 804, -6822),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};