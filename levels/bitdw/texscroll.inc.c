void scroll_bitdw_dl_b1_mesh_layer_1_vtx_3() {
	int i = 0;
	int count = 56;
	int width = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(bitdw_dl_b1_mesh_layer_1_vtx_3);

	deltaX = (int)(-0.3100000023841858 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_bitdw_dl_b1_mesh_layer_1_vtx_16() {
	int i = 0;
	int count = 60;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(bitdw_dl_b1_mesh_layer_1_vtx_16);

	deltaY = (int)(2.5 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_bitdw_dl_b1_mesh_layer_4_vtx_1() {
	int i = 0;
	int count = 4;
	int width = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int timeX;
	float amplitudeX = 0.6700000166893005;
	float frequencyX = 0.8199999928474426;
	float offsetX = 0.5099999904632568;
	Vtx *vertices = segmented_to_virtual(bitdw_dl_b1_mesh_layer_4_vtx_1);

	deltaX = (int)(amplitudeX * frequencyX * coss((frequencyX * timeX + offsetX) * (1024 * 16 - 1) / 6.28318530718) * 0x20);

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;	timeX += 1;
}

void scroll_bitdw() {
	scroll_bitdw_dl_b1_mesh_layer_1_vtx_3();
	scroll_bitdw_dl_b1_mesh_layer_1_vtx_16();
	scroll_bitdw_dl_b1_mesh_layer_4_vtx_1();
};
