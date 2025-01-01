#include "src/game/envfx_snow.h"

const GeoLayout Switchblock_Red_MOP_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, Switchblock_Red_MOP_Cube_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
