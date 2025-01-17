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
    o->oVelY = 10.0f;
    o->oVelZ = 10.0f;
    if (GET_BPARAM4(o->oBehParams) == 1) {
        o->oAction = 1;
    }
}

void bhv_up_down_object_loop(void) {
    if (GET_BPARAM3(o->oBehParams) == 1) {

        switch (o->oAction) {
            case 0:
            if (o->oTimer > (o->oBehParams >> 24)) {
                o->oAction = 3;
            }
            o->oPosZ -= o->oBehParams2ndByte;
            break;
        
            case 1:
            if (o->oTimer > (o->oBehParams >> 24)) {
                o->oAction++;
            }
            o->oPosZ += o->oBehParams2ndByte;
            break;

            case 2:
            if (o->oTimer > 25) {
                o->oAction = 0;
            }
            break;

            case 3:
            if (o->oTimer > 25) {
                o->oAction = 1;
            }
            break;
        }
    } else if (GET_BPARAM3(o->oBehParams) == 2) {

        switch (o->oAction) {
            case 0:
            if (o->oTimer > (o->oBehParams >> 24)) {
                o->oAction = 3;
            }
            o->oPosY -= o->oBehParams2ndByte;
            break;
        
            case 1:
            if (o->oTimer > (o->oBehParams >> 24)) {
                o->oAction++;
            }
            o->oPosY += o->oBehParams2ndByte;
            break;

            case 2:
            if (o->oTimer > 15) {
                o->oAction = 0;
            }
            break;

            case 3:
            if (o->oTimer > 15) {
                o->oAction = 1;
            }
            break;
        }
    } else if (GET_BPARAM3(o->oBehParams) == 3) {

        switch (o->oAction) {
            case 0:
            if (o->oTimer > (o->oBehParams >> 24)) {
                o->oAction = 3;
            }
            o->oPosX -= o->oBehParams2ndByte;
            break;
        
            case 1:
            if (o->oTimer > (o->oBehParams >> 24)) {
                o->oAction++;
            }
            o->oPosX += o->oBehParams2ndByte;
            break;

            case 2:
            if (o->oTimer > 15) {
                o->oAction = 0;
            }
            break;

            case 3:
            if (o->oTimer > 15) {
                o->oAction = 1;
            }
            break;
        }
    }
}

// unused conveyor bhv
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
        load_object_collision_model();
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
