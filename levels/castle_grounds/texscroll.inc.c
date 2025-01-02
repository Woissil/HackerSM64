void scroll_castle_grounds_dl_cg_mesh_layer_1_vtx_12() {
	int i = 0;
	int count = 48;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(castle_grounds_dl_cg_mesh_layer_1_vtx_12);

	deltaY = (int)(0.2200000137090683 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_castle_grounds() {
	scroll_castle_grounds_dl_cg_mesh_layer_1_vtx_12();
};
