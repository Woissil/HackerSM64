//this is terrible, please, for your meantal sanity, dont read. thanks

static int SwitchBlockState = 1; // if 1, blue is acvtivated, if 0 it's red

void bhv_Switchblock_Switch_init(void) {
	if (o->oBehParams2ndByte == 1) {
		o->oAction = 1;
	}
}

void bhv_Switchblock_Switch_loop(void){
	if (o->oBehParams2ndByte == 1) {
		cur_obj_set_model(MODEL_SWITCHBLOCK_SWITCH_MOP);
	} else {
		cur_obj_set_model(MODEL_SWITCHBLOCK_SWITCH_RED_MOP);
	}
	load_object_collision_model();
	if ((cur_obj_is_mario_on_platform())&& (SwitchBlockState!=o->oBehParams2ndByte)){
		SwitchBlockState = o->oBehParams2ndByte;
		o->oAction = 1;
	} else if (SwitchBlockState!=o->oBehParams2ndByte) {
		o->header.gfx.scale[1] = 1;
	} else if ((SwitchBlockState == o->oBehParams2ndByte) && (o->header.gfx.scale[1] == 1)) {
		o->oAction = 1;
	}

	if (o->oAction == 1) {
		o->header.gfx.scale[1] -= 0.3;
		if (o->header.gfx.scale[1] <= 0.1) {
			o->oAction = 0;
		}
	}
}


void bhv_Switchblock_loop(void) {
	//for bowser battle 1
	if (GET_BPARAM3(o->oBehParams) == 1) {
		o->header.gfx.scale[0] = 3.6;
		o->header.gfx.scale[2] = 3.6;
		o->header.gfx.scale[1] = 0.11;
	}
	if (o->oBehParams2ndByte == SwitchBlockState) {
		if (o->oBehParams2ndByte == 1) {
			load_object_collision_model();
			cur_obj_set_model(MODEL_SWITCHBLOCK_MOP);
		} else {
			load_object_collision_model();
			cur_obj_set_model(MODEL_SWITCHBLOCK_RED_MOP);
		}
	} else if (o->oBehParams2ndByte == 1) {
		cur_obj_set_model(MODEL_SWITCHBLOCK_BORDER_MOP);
	} else {
		cur_obj_set_model(MODEL_SWITCHBLOCK_BORDER_RED_MOP);
	}
}

// why did you read this i told you...