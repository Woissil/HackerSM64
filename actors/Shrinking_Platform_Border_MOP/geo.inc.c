#include "src/game/envfx_snow.h"

const GeoLayout Shrinking_Platform_Border_MOP_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, Shrinking_Platform_Border_MOP_Plane_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
