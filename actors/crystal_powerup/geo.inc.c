#include "src/game/envfx_snow.h"

const GeoLayout crystal_powerup_geo[] = {
	GEO_SHADOW(SHADOW_CIRCLE_9_VERTS, 0xB4, 75),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, crystal_powerup_Bone_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
