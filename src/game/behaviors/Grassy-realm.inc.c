void chuckya_spawn_star(void) {
    if (!cur_obj_nearest_object_with_behavior(bhvChuckya)) {
        struct Object *chuckyastar = NULL;
        chuckyastar = spawn_star(chuckyastar, o->oPosX, o->oPosY + 400, o->oPosZ);
        chuckyastar->oBehParams2ndByte = SPAWN_STAR_ARC_CUTSCENE_BP_DEFAULT_STAR;
        chuckyastar->oBehParams |= (2 << 24);
        obj_mark_for_deletion(o);
    }
}