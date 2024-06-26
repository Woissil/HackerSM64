#include "src/game/envfx_snow.h"

const GeoLayout coconut_geo[] = {
	GEO_SHADOW(0, 180, 150),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, coconut_Bone_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
