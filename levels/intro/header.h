#ifndef INTRO_HEADER_H
#define INTRO_HEADER_H

#include "types.h"

// geo
extern const GeoLayout intro_geo_splash_screen[];
extern const GeoLayout intro_geo_mario_head_regular[];
extern const GeoLayout intro_geo_mario_head_dizzy[];
extern const GeoLayout intro_geo_debug_level_select[];

// leveldata
extern u8 new_title_screen_Material1_i8[];
extern u8 new_title_screen_Material3_i8[];
extern u8 new_title_screen_Material4_i8[];
extern u8 new_title_screen_Material35_i8[];
extern u8 new_title_screen_Material10_ci8[];
extern u8 new_title_screen_Material10_pal_rgba16[];
extern u8 new_title_screen_Material7_ci8[];
extern u8 new_title_screen_Material7_pal_rgba16[];
extern Vtx new_title_screen_new_title_mesh_vtx_0[12];
extern Gfx new_title_screen_new_title_mesh_tri_0[];
extern Vtx new_title_screen_new_title_mesh_vtx_1[32];
extern Gfx new_title_screen_new_title_mesh_tri_1[];
extern Vtx new_title_screen_new_title_mesh_vtx_2[32];
extern Gfx new_title_screen_new_title_mesh_tri_2[];
extern Vtx new_title_screen_new_title_mesh_vtx_3[604];
extern Gfx new_title_screen_new_title_mesh_tri_3[];
extern Vtx new_title_screen_new_title_mesh_vtx_4[176];
extern Gfx new_title_screen_new_title_mesh_tri_4[];
extern Vtx new_title_screen_new_title_mesh_vtx_5[70];
extern Gfx new_title_screen_new_title_mesh_tri_5[];
extern Gfx mat_new_title_screen_f3dlite_material_005[];
extern Gfx mat_revert_new_title_screen_f3dlite_material_005[];
extern Gfx mat_new_title_screen_f3dlite_material_006[];
extern Gfx mat_revert_new_title_screen_f3dlite_material_006[];
extern Gfx mat_new_title_screen_f3dlite_material[];
extern Gfx mat_revert_new_title_screen_f3dlite_material[];
extern Gfx mat_new_title_screen_f3dlite_material_001[];
extern Gfx mat_revert_new_title_screen_f3dlite_material_001[];
extern Gfx mat_new_title_screen_f3dlite_material_002[];
extern Gfx mat_revert_new_title_screen_f3dlite_material_002[];
extern Gfx mat_new_title_screen_f3dlite_material_003[];
extern Gfx mat_revert_new_title_screen_f3dlite_material_003[];
extern Gfx new_title_screen_new_title_mesh[];

extern const Gfx intro_seg7_dl_copyright_trademark[];
extern const f32 intro_seg7_table_scale_1[];
extern const f32 intro_seg7_table_scale_2[];

extern const LevelScript level_intro_splash_screen[];
extern const LevelScript level_intro_mario_head_regular[];
extern const LevelScript level_intro_mario_head_dizzy[];
extern const LevelScript level_intro_entry_level_select[];
extern const LevelScript script_intro_file_select[];
extern const LevelScript script_intro_level_select[];
extern const LevelScript script_intro_main_level_entry_stop_music[];
extern const LevelScript script_intro_main_level_entry[];
extern const LevelScript script_intro_splash_screen[];

#endif
