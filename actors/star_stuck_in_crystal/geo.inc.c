#include "src/game/envfx_snow.h"

const GeoLayout star_stuck_in_crystal_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_TRANSPARENT, 0, 0, 0, star_stuck_in_crystal_Bone_mesh_layer_5),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_ALPHA, star_stuck_in_crystal_Bone_mesh_layer_4),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, star_stuck_in_crystal_Bone_mesh_layer_1),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
