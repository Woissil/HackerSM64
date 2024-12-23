#define SEGMENTLENGTH -180.f
void calcMarioVinePos() {
    s16 rotation = o->oMoveAnglePitch / 5;
    f32 xc = sins(o->oFaceAngleYaw);
    f32 zc = coss(o->oFaceAngleYaw);
    f32 currX = o->oPosX;
    f32 currY = o->oPosY + 1000.f;
    f32 currZ = o->oPosZ;
    s32 i;

    for (i = 1; i < 5; i++) {
        currX += xc * sins(rotation * i) * SEGMENTLENGTH;
        currY += coss(rotation * i) * SEGMENTLENGTH;
        currZ += zc * sins(rotation * i) * SEGMENTLENGTH;
    }
#define VISUALOFFSET -50.f
    currX += xc * sins(0X4000 + rotation * 4) * VISUALOFFSET;
    currY += coss(0X4000 + rotation * 4) * VISUALOFFSET;
    currZ += zc * sins(0X4000 + rotation * 4) * VISUALOFFSET;
    if (o->oTimer < 15) {
        gMarioState->pos[0] =
            approach_f32_asymptotic(gMarioState->pos[0], currX, 0.06666f * (o->oTimer + 1));
        gMarioState->pos[1] =
            approach_f32_asymptotic(gMarioState->pos[1], currY, 0.06666f * (o->oTimer + 1));
        gMarioState->pos[2] =
            approach_f32_asymptotic(gMarioState->pos[2], currZ, 0.06666f * (o->oTimer + 1));
        gMarioState->pos[0] = approach_f32_symmetric(gMarioState->pos[0], currX, 10.f);
        gMarioState->pos[1] = approach_f32_symmetric(gMarioState->pos[1], currY, 10.f);
        gMarioState->pos[2] = approach_f32_symmetric(gMarioState->pos[2], currZ, 10.f);
    } else {
        gMarioState->pos[0] = currX;
        gMarioState->pos[1] = currY;
        gMarioState->pos[2] = currZ;
    }
}

extern Vec3f joinPosition[6][4];

void bhv_vine_loop(void) {
    cur_obj_set_model(MODEL_VINE);
    s32 i;
    s16 *trans;
    f32 speedScale = 1.f;
    o->oAnimState = o->oBehParams2ndByte;

    switch (o->oAction) {
        case 0:
            if ((random_u16() & 0x3F) == 0) {
                o->oAngleVelPitch += (random_u16() % 200) - 100;
            }
            if (o->oTimer > 20) {
                if ((lateral_dist_between_objects(o, gMarioState->marioObj) < 100.f)
                    && (gMarioState->pos[1] + 100.f > o->oPosY)
                    && (gMarioState->pos[1] < o->oPosY + 1000.f)) {
                    if ((gMarioState->action & ACT_ID_MASK) >= 0x080 && (gMarioState->action & ACT_ID_MASK) < 0x0A0) {
                        o->oAction++;
                        gMarioState->action = ACT_HANG_VINE;
                        gMarioState->usedObj = o;
                        o->oAngleVelPitch = -gMarioState->forwardVel / 0.01581917687f / 2.f;
                        play_sound(SOUND_MARIO_WHOA, gMarioState->marioObj->header.gfx.cameraToObject);
                    }
                }
            }
            break;
        case 1:
#define OFFSET -1000.f
            speedScale += 4.f - absf((o->oAngleVelPitch - (o->oMoveAnglePitch / 64)) / 0x1000);
            gMarioState->faceAngle[1] =
                approach_s16_symmetric(gMarioState->faceAngle[1], o->oFaceAngleYaw, 0xC00);
            gMarioState->action = ACT_HANG_VINE;
            gMarioState->usedObj = o;
            calcMarioVinePos();
            o->oAngleVelPitch -= coss(gMarioState->intendedYaw - o->oFaceAngleYaw)
                                 * gMarioState->intendedMag * speedScale * 0.5f;
            o->oAngleVelPitch *= .975f;
            if (gMarioState->controller->buttonPressed & A_BUTTON) {
                o->oAction = 0;
                gMarioState->action = ACT_TRIPLE_JUMP;
                play_sound(SOUND_MARIO_YAHOO_WAHA_YIPPEE, gMarioState->marioObj->header.gfx.cameraToObject);
                gMarioState->vel[1] =
                    o->oAngleVelPitch * coss(o->oMoveAnglePitch - 0x4000) * 0.01581917687f * 2.5f
                    + 25.f;
                gMarioState->forwardVel = o->oAngleVelPitch * sins(o->oMoveAnglePitch - 0x4000)
                                          * 0.01581917687f * 2.5f * 1.2f;
            }
            if (absi(o->oAngleVelPitch) > 0x400) {
                o->oOpacity = 1;
            } else if (absi(o->oAngleVelPitch) < 0x200) {
                o->oOpacity = 0;
            }
            break;
    }

    cur_obj_init_animation(o->oBehParams2ndByte);

    trans = segmented_to_virtual(o->header.gfx.animInfo.curAnim->values);
    for (i = 0; i < 5; i++) {
        trans[3 + i * 3] = o->oMoveAnglePitch / 5;
    }
    o->oAngleVelPitch -= o->oMoveAnglePitch / 64;
    o->oAngleVelPitch *= .99f;
    o->oMoveAnglePitch += o->oAngleVelPitch;
}
