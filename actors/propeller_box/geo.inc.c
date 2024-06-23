#include "src/game/envfx_snow.h"

const GeoLayout propeller_box_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
		GEO_OPEN_NODE(),
			GEO_ANIMATED_PART(LAYER_OPAQUE, 0, -100, 0, propeller_box_Bone_002_mesh_layer_1),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_TRANSPARENT, propeller_box_Bone_002_mesh_layer_5),
			GEO_CLOSE_NODE(),
			GEO_ANIMATED_PART(LAYER_OPAQUE, 0, -11, 0, propeller_box_Bone_003_mesh_layer_1),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
