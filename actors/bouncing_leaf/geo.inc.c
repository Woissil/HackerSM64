#include "src/game/envfx_snow.h"

const GeoLayout bouncing_leaf_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, bouncing_leaf_Plane_mesh_layer_4),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
