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

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/jrb/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_jrb_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _jrb_segment_7SegmentRomStart, _jrb_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0B, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _water_yay0SegmentRomStart, _water_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _clouds_skybox_yay0SegmentRomStart, _clouds_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group4_yay0SegmentRomStart, _group4_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group4_geoSegmentRomStart, _group4_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group13_yay0SegmentRomStart, _group13_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group13_geoSegmentRomStart, _group13_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _jrb_segment_7SegmentRomStart, _jrb_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_5), 
	JUMP_LINK(script_func_global_14), 
	JUMP_LINK(script_func_load_boomerangs), 
	LOAD_MODEL_FROM_GEO(MODEL_NOTEBLOCK, noteblock_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_SHYGUY_EENEMY, shyguy_eenemy_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BLUECUBE, bluecube_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, jrb_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE, 0x01, 0x32, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BLUECUBE, -1413, 203, -3411, 0, 0, 0, 0, bhvBlueCube),
		OBJECT(MODEL_BLUECUBE, -2121, 360, -3411, 0, 0, 0, 0, bhvBlueCube),
		OBJECT(MODEL_BLUECUBE, -2909, 360, -3411, 0, 0, 0, 0, bhvBlueCube),
		OBJECT(MODEL_BLUECUBE, -2909, 360, -4308, 0, 0, 0, 0, bhvBlueCube),
		OBJECT(MODEL_BLUECUBE, -2909, 708, -5311, 0, 0, 0, 0, bhvBlueCube),
		OBJECT(MODEL_BLUECUBE, -2909, 986, -6175, 0, 0, 0, 0, bhvBlueCube),
		OBJECT(MODEL_BLUECUBE, -2909, 986, -6908, 0, 0, 0, 0, bhvBlueCube),
		OBJECT(MODEL_BLUECUBE, -3674, 986, -6908, 0, 0, 0, 0, bhvBlueCube),
		OBJECT(MODEL_BLUECUBE, -4206, 986, -6908, 0, 0, 0, 0, bhvBlueCube),
		OBJECT(MODEL_BLUECUBE, -4963, 986, -6908, 0, 0, 0, 0, bhvBlueCube),
		OBJECT(MODEL_BLUECUBE, -4963, 986, -7726, 0, 0, 0, 0, bhvBlueCube),
		OBJECT(MODEL_BLUECUBE, -4963, 986, -8461, 0, 0, 0, 0, bhvBlueCube),
		OBJECT(MODEL_BLUECUBE, -5654, 986, -8832, 0, 0, 0, 0, bhvBlueCube),
		OBJECT(MODEL_BREAKABLE_BOX, 5303, 207, 0, 0, 0, 0, 0, bhvBreakableBox),
		OBJECT(MODEL_BOOMERANG_BOX, 6502, 207, -5909, 0, 0, 0, 0, bhvBreakBoxBoomerang),
		OBJECT(MODEL_BOOMERANG_BOX, 6502, 207, -4739, 0, 0, 0, 0, bhvBreakBoxBoomerang),
		OBJECT(MODEL_BOOMERANG_BOX, 6502, 207, -3667, 0, 0, 0, 0, bhvBreakBoxBoomerang),
		OBJECT(MODEL_BOOMERANG_BOX, 7448, 207, -5909, 0, 0, 0, 0, bhvBreakBoxBoomerang),
		OBJECT(MODEL_BOOMERANG_BOX, 7448, 207, -4739, 0, 0, 0, 0, bhvBreakBoxBoomerang),
		OBJECT(MODEL_BOOMERANG_BOX, 7448, 207, -3667, 0, 0, 0, 0, bhvBreakBoxBoomerang),
		OBJECT(MODEL_WOODEN_SIGNPOST, 5671, 207, -5653, 0, 0, 0, (DIALOG_006 << 16), bhvMessagePanel),
		OBJECT(MODEL_BREAKABLE_BOX, 5303, 207, -990, 0, 0, 0, 0, bhvBreakableBox),
		OBJECT(MODEL_BREAKABLE_BOX, 5303, 207, -1956, 0, 0, 0, 0, bhvBreakableBox),
		OBJECT(MODEL_BREAKABLE_BOX, 4417, 207, 0, 0, 0, 0, 0, bhvBreakableBox),
		OBJECT(MODEL_BREAKABLE_BOX, 4417, 207, -990, 0, 0, 0, 0, bhvBreakableBox),
		OBJECT(MODEL_BREAKABLE_BOX, 4417, 207, -1956, 0, 0, 0, 0, bhvBreakableBox),
		OBJECT(MODEL_BREAKABLE_BOX, 3492, 207, 0, 0, 0, 0, 0, bhvBreakableBox),
		OBJECT(MODEL_BREAKABLE_BOX, 3492, 207, -990, 0, 0, 0, 0, bhvBreakableBox),
		OBJECT(MODEL_BREAKABLE_BOX, 3492, 207, -1956, 0, 0, 0, 0, bhvBreakableBox),
		OBJECT(MODEL_CHUCKYA, -4227, 263, 5076, 0, 0, 0, 0, bhvChuckya),
		OBJECT(MODEL_CHUCKYA, -5519, 264, 5076, 0, 0, 0, 0, bhvChuckya),
		OBJECT(MODEL_CHUCKYA, -4865, 264, 4616, 0, 0, 0, 0, bhvChuckya),
		OBJECT(MODEL_EXCLAMATION_BOX, 3221, 678, -3567, 0, 0, 0, 0, bhvExclamationBox),
		MARIO_POS(0x01, 0, -7, 612, -33),
		OBJECT(MODEL_NOTEBLOCK, 1248, 282, 503, 0, 0, 0, (5 << 16), bhvNoteBlock),
		OBJECT(MODEL_NOTEBLOCK, 1792, 546, 503, 0, 0, 0, (3 << 16), bhvNoteBlock),
		OBJECT(MODEL_NOTEBLOCK, 2316, 800, 503, 0, 0, 0, (3 << 16), bhvNoteBlock),
		OBJECT(MODEL_GOOMBA, 1248, 349, -2029, 0, 0, 0, 0, bhvGoomba),
		OBJECT(MODEL_SHYGUY_EENEMY, -690, 203, -3411, 0, 0, 0, 0, bhvShyguy),
		OBJECT(MODEL_STAR, 4867, 1863, -14652, 0, 0, 0, 0x00000000, bhvStar),
		OBJECT(MODEL_STAR, 4417, 200, -1956, 0, 0, 0, (3 << 24), bhvStar),
		OBJECT(MODEL_STAR, 3159, 1730, 2756, 0, 0, 0, (1 << 24), bhvStar),
		OBJECT(MODEL_NONE, -4997, 263, 5076, 0, 0, 0, 0, bhvChuckyaStarSpawner),
		OBJECT(MODEL_STAR, -5677, 1462, -8865, 0, 0, 0, (5 << 24), bhvStar),
		OBJECT(MODEL_NONE, -7, 612, -33, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		OBJECT(MODEL_GOOMBA, 476, 349, -3108, 0, 0, 0, 0, bhvGoomba),
		OBJECT(MODEL_YELLOW_COIN, 2289, 224, -3939, 0, 0, 0, 0, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 2107, 224, -3635, 0, 0, 0, 0, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 2195, 224, -3785, 0, 0, 0, 0, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 2376, 224, -4085, 0, 0, 0, 0, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 4760, 905, -8348, 0, 29, 0, 0, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 4765, 905, -8521, 0, 29, 0, 0, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 4773, 905, -8702, 0, 29, 0, 0, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 4778, 905, -8871, 0, 29, 0, 0, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 4760, 1590, -11620, 0, 29, 0, 0, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 4765, 1590, -11794, 0, 29, 0, 0, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 4773, 1590, -11975, 0, 29, 0, 0, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 4778, 1590, -12144, 0, 29, 0, 0, bhvYellowCoin),
		OBJECT(MODEL_NONE, 5618, 207, -4739, 0, 0, 0, 0, bhvBoomerangStarSpawner),
		TERRAIN(jrb_area_1_collision),
		MACRO_OBJECTS(jrb_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_OVERWORLD_THEME),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, -7, 612, -33),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
