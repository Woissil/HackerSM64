#include "src/game/envfx_snow.h"

const GeoLayout shyguy_eenemy_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(1, 255, 160),
		GEO_OPEN_NODE(),
			GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, shyguy_eenemy_body_mesh_layer_1),
			GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, shyguy_eenemy_leftshoe_mesh_layer_1),
			GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, shyguy_eenemy_rightshoe_mesh_layer_1),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
