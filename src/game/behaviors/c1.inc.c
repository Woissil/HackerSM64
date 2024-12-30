void bhv_falling_object_init(void) {
    o->oGravity = 0.0f;
    o->oFriction = 1.0f;
    o->oBuoyancy = 1.0f;
    o->oTimer = 0;
    o->oAction = 0;
}

void bhv_falling_object_loop(void) {
    switch (o->oAction) {
        case 0:
            if (obj_check_if_collided_with_object(o, gMarioObject)) {
                o->oAction = 1;
                o->oTimer = 0;
            }
            break;
        case 1:
            if (o->oTimer < 60) {
                o->oVelY = -1.0f;
            } else if (o->oTimer < 120) {
                o->oVelY = -5.0f;
            } else {
                o->oAction = 2;
                o->oTimer = 0;
                o->header.gfx.node.flags &= ~GRAPH_RENDER_ACTIVE;
                load_object_collision_model();
            }
            break;
        case 2:
            if (o->oTimer >= 180) {
                o->oAction = 0;
                o->oPosY = o->oHomeY;
                o->oTimer = 0;
                o->header.gfx.node.flags |= GRAPH_RENDER_ACTIVE;
            }
            break;
    }
    o->oTimer++;
}

void bhv_up_down_object_init(void) {
    o->oGravity = 0.0f;
    o->oFriction = 1.0f;
    o->oBuoyancy = 1.0f;
    o->oTimer = 0;
    o->oAction = 0;
    o->oVelY = 2.0f;
}

void bhv_up_down_object_loop(void) {
    switch (o->oAction) {
        case 0:
            if (o->oPosY >= o->oHomeY + 100.0f) {
                o->oAction = 1;
            }
            break;
        case 1:
            o->oVelY = -2.0f;
            if (o->oPosY <= o->oHomeY - 100.0f) {
                o->oAction = 0;
                o->oVelY = 2.0f;
            }
            break;
    }
    o->oPosY += o->oVelY;
}

void bhv_conveyor_init(void) {
    o->oGravity = 0.0f;
    o->oFriction = 1.0f;
    o->oBuoyancy = 1.0f; // change these values
    o->oTimer = 0;
    o->oAction = 0;
}

void bhv_conveyor_loop(void) {
    switch (o->oAction) {
        case 0:
            if (obj_check_if_collided_with_object(o, gMarioObject)) {
                float speed = GET_BPARAM1(o->oBehParams) * 5.0f;
                if (o->oBehParams2ndByte == 0) {
                    gMarioObject->oPosX += speed;
                } else {
                    gMarioObject->oPosX -= speed;
                }
            }
            break;
    }
}
