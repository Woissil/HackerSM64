#include "src/game/envfx_snow.h"

const GeoLayout p1plat_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, p1plat_p1plat_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
