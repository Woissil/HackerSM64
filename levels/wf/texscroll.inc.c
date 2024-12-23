void scroll_wf_dl_Circle_010_mesh_layer_1_vtx_4() {
	int i = 0;
	int count = 99;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wf_dl_Circle_010_mesh_layer_1_vtx_4);

	deltaY = (int)(0.2500000596046448 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_wf_dl_Circle_013_mesh_layer_1_vtx_3() {
	int i = 0;
	int count = 29;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wf_dl_Circle_013_mesh_layer_1_vtx_3);

	deltaY = (int)(0.2500000596046448 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_wf_dl_Circle_015_mesh_layer_1_vtx_1() {
	int i = 0;
	int count = 15;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wf_dl_Circle_015_mesh_layer_1_vtx_1);

	deltaY = (int)(0.2500000596046448 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_wf() {
	scroll_wf_dl_Circle_010_mesh_layer_1_vtx_4();
	scroll_wf_dl_Circle_013_mesh_layer_1_vtx_3();
	scroll_wf_dl_Circle_015_mesh_layer_1_vtx_1();
};
