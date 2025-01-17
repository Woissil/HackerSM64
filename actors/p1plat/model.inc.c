Gfx p1plat__11_ci4_aligner[] = {gsSPEndDisplayList()};
u8 p1plat__11_ci4[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x11, 0x22, 0x22, 0x11, 0x11, 0x22, 0x22, 0x11, 
	0x12, 0x22, 0x22, 0x01, 0x12, 0x22, 0x22, 0x01, 
	0x12, 0x22, 0x22, 0x01, 0x12, 0x22, 0x22, 0x01, 
	0x11, 0x00, 0x00, 0x11, 0x11, 0x00, 0x00, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
};

Gfx p1plat__11_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 p1plat__11_pal_rgba16[] = {
	0xb1, 0x89, 0xe4, 0xc9, 0x00, 0x00, 
};

Vtx p1plat_p1plat_mesh_layer_1_vtx_cull[8] = {
	{{ {-145, -50, 220}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-145, 50, 220}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-145, 50, -220}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-145, -50, -220}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {145, -50, 220}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {145, 50, 220}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {145, 50, -220}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {145, -50, -220}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx p1plat_p1plat_mesh_layer_1_vtx_0[16] = {
	{{ {-145, -50, 220}, 0, {628, 231}, {255, 255, 255, 255} }},
	{{ {-145, 50, 220}, 0, {628, 0}, {255, 255, 255, 255} }},
	{{ {-145, 50, -220}, 0, {-116, 0}, {255, 255, 255, 255} }},
	{{ {-145, -50, -220}, 0, {-116, 231}, {255, 255, 255, 255} }},
	{{ {-145, -50, -220}, 0, {628, 231}, {255, 255, 255, 255} }},
	{{ {-145, 50, -220}, 0, {628, 0}, {255, 255, 255, 255} }},
	{{ {145, 50, -220}, 0, {-116, 0}, {255, 255, 255, 255} }},
	{{ {145, -50, -220}, 0, {-116, 231}, {255, 255, 255, 255} }},
	{{ {145, -50, -220}, 0, {628, 231}, {255, 255, 255, 255} }},
	{{ {145, 50, -220}, 0, {628, 0}, {255, 255, 255, 255} }},
	{{ {145, 50, 220}, 0, {-116, 0}, {255, 255, 255, 255} }},
	{{ {145, -50, 220}, 0, {-116, 231}, {255, 255, 255, 255} }},
	{{ {145, -50, 220}, 0, {628, 231}, {255, 255, 255, 255} }},
	{{ {145, 50, 220}, 0, {628, 0}, {255, 255, 255, 255} }},
	{{ {-145, 50, 220}, 0, {-116, 0}, {255, 255, 255, 255} }},
	{{ {-145, -50, 220}, 0, {-116, 231}, {255, 255, 255, 255} }},
};

Gfx p1plat_p1plat_mesh_layer_1_tri_0[] = {
	gsSPVertex(p1plat_p1plat_mesh_layer_1_vtx_0 + 0, 16, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSPEndDisplayList(),
};

Vtx p1plat_p1plat_mesh_layer_1_vtx_1[8] = {
	{{ {-145, -50, -220}, 0, {1008, 1008}, {0, 129, 0, 255} }},
	{{ {145, -50, -220}, 0, {1008, -16}, {0, 129, 0, 255} }},
	{{ {145, -50, 220}, 0, {-16, -16}, {0, 129, 0, 255} }},
	{{ {-145, -50, 220}, 0, {-16, 1008}, {0, 129, 0, 255} }},
	{{ {145, 50, -220}, 0, {1008, 1008}, {0, 127, 0, 255} }},
	{{ {-145, 50, -220}, 0, {1008, -16}, {0, 127, 0, 255} }},
	{{ {-145, 50, 220}, 0, {-16, -16}, {0, 127, 0, 255} }},
	{{ {145, 50, 220}, 0, {-16, 1008}, {0, 127, 0, 255} }},
};

Gfx p1plat_p1plat_mesh_layer_1_tri_1[] = {
	gsSPVertex(p1plat_p1plat_mesh_layer_1_vtx_1 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSPEndDisplayList(),
};


Gfx mat_p1plat_f3dlite_material_002[] = {
	gsSPGeometryMode(G_LIGHTING, 0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, ENVIRONMENT, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, ENVIRONMENT, 0, SHADE, 0),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsDPSetTextureFilter(G_TF_POINT),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, p1plat__11_pal_rgba16),
	gsDPSetTile(0, 0, 0, 256, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadTLUTCmd(5, 2),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, p1plat__11_ci4),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 27, 2048),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_4b, 1, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 3, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0),
	gsDPSetTileSize(0, 0, 0, 60, 24),
	gsSPEndDisplayList(),
};

Gfx mat_revert_p1plat_f3dlite_material_002[] = {
	gsSPGeometryMode(0, G_LIGHTING),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsDPSetTextureFilter(G_TF_BILERP),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx mat_p1plat_f3dlite_material_003[] = {
	gsSPLightColor(LIGHT_1, 0xB5372AFF),
	gsSPLightColor(LIGHT_2, 0x59160FFF),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPEndDisplayList(),
};

Gfx mat_revert_p1plat_f3dlite_material_003[] = {
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx p1plat_p1plat_mesh_layer_1[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(p1plat_p1plat_mesh_layer_1_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_p1plat_f3dlite_material_002),
	gsSPDisplayList(p1plat_p1plat_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_p1plat_f3dlite_material_002),
	gsSPDisplayList(mat_p1plat_f3dlite_material_003),
	gsSPDisplayList(p1plat_p1plat_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_p1plat_f3dlite_material_003),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

