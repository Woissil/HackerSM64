#include "src/game/envfx_snow.h"

const GeoLayout boomerang_flower_geo[] = {
	GEO_SHADOW(SHADOW_CIRCLE_9_VERTS, 0xB4, 75),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, boomerang_flower_BoomerangFlower_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, boomerang_flower_BoomerangFlower_mesh_layer_5),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
