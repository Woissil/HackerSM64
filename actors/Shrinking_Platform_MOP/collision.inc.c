const Collision Shrinking_Platform_MOP_collision[] = {
	COL_INIT(),
	COL_VERTEX_INIT(4),
	COL_VERTEX(140, 0, 140),
	COL_VERTEX(-140, 0, -140),
	COL_VERTEX(-140, 0, 140),
	COL_VERTEX(140, 0, -140),
	COL_TRI_INIT(SURFACE_DEFAULT, 2),
	COL_TRI(0, 1, 2),
	COL_TRI(1, 0, 3),
	COL_TRI_STOP(),
	COL_END()
};
