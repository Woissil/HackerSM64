#ifndef INTRO_HEADER_H
#define INTRO_HEADER_H

#include "types.h"

// geo
extern const GeoLayout intro_geo_splash_screen[];
extern const GeoLayout intro_geo_mario_head_regular[];
extern const GeoLayout intro_geo_mario_head_dizzy[];
extern const GeoLayout intro_geo_debug_level_select[];

// leveldata
extern Lights1 titlescreen__9_f3d_lights;
extern Lights1 titlescreen__6_f3d_lights;
extern Lights1 titlescreen__1_f3d_lights;
extern Lights1 titlescreen__10_f3d_lights;
extern Lights1 titlescreen__11_f3d_lights;
extern u8 titlescreen__9_rgba16[];
extern u8 titlescreen__6_rgba16[];
extern u8 titlescreen__1_rgba16[];
extern u8 titlescreen__10_rgba16[];
extern u8 titlescreen__11_rgba16[];
extern Vtx titlescreen_jb_title_mesh_vtx_0[2879];
extern Gfx titlescreen_jb_title_mesh_tri_0[];
extern Vtx titlescreen_jb_title_mesh_vtx_1[115];
extern Gfx titlescreen_jb_title_mesh_tri_1[];
extern Vtx titlescreen_jb_title_mesh_vtx_2[238];
extern Gfx titlescreen_jb_title_mesh_tri_2[];
extern Vtx titlescreen_jb_title_mesh_vtx_3[105];
extern Gfx titlescreen_jb_title_mesh_tri_3[];
extern Vtx titlescreen_jb_title_mesh_vtx_4[156];
extern Gfx titlescreen_jb_title_mesh_tri_4[];
extern Gfx mat_titlescreen__9_f3d[];
extern Gfx mat_titlescreen__6_f3d[];
extern Gfx mat_titlescreen__1_f3d[];
extern Gfx mat_titlescreen__10_f3d[];
extern Gfx mat_titlescreen__11_f3d[];
extern Gfx titlescreen_jb_title_mesh[];

extern const Gfx intro_seg7_dl_copyright_trademark[];
extern const f32 intro_seg7_table_scale_1[];
extern const f32 intro_seg7_table_scale_2[];

// script
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
