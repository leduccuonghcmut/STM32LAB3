#include "display7SEG.h"

int counter_led_1 = 0;
int counter_led_2 = 0;

void display7SEG(int num){
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_SET);
	switch(num){
		case 0:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_RESET);
			break;
		case 1:
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
			break;
		case 2:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
			break;
		case 8:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
			break;
		default:
			break;
	}
}

void display7SEG_2(int num){
		HAL_GPIO_WritePin(aa_GPIO_Port, aa_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(bb_GPIO_Port, bb_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(cc_GPIO_Port, cc_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(dd_GPIO_Port, dd_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ee_GPIO_Port, ee_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ff_GPIO_Port, ff_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(gg_GPIO_Port, gg_Pin, GPIO_PIN_SET);
	switch(num){
		case 0:
			HAL_GPIO_WritePin(aa_GPIO_Port,aa_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(bb_GPIO_Port,bb_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(cc_GPIO_Port,cc_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(dd_GPIO_Port,dd_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(ee_GPIO_Port,ee_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(ff_GPIO_Port,ff_Pin,GPIO_PIN_RESET);
			break;
		case 1:
			HAL_GPIO_WritePin(bb_GPIO_Port,bb_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(cc_GPIO_Port,cc_Pin,GPIO_PIN_RESET);
			break;
		case 2:
			HAL_GPIO_WritePin(aa_GPIO_Port,aa_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(bb_GPIO_Port,bb_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(dd_GPIO_Port,dd_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(ee_GPIO_Port,ee_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(gg_GPIO_Port,gg_Pin,GPIO_PIN_RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(aa_GPIO_Port,aa_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(bb_GPIO_Port,bb_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(cc_GPIO_Port,cc_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(dd_GPIO_Port,dd_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(gg_GPIO_Port,gg_Pin,GPIO_PIN_RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(bb_GPIO_Port,bb_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(cc_GPIO_Port,cc_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(ff_GPIO_Port,ff_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(gg_GPIO_Port,gg_Pin,GPIO_PIN_RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(aa_GPIO_Port,aa_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(cc_GPIO_Port,cc_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(dd_GPIO_Port,dd_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(ff_GPIO_Port,ff_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(gg_GPIO_Port,gg_Pin,GPIO_PIN_RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(aa_GPIO_Port,aa_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(cc_GPIO_Port,cc_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(dd_GPIO_Port,dd_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(ee_GPIO_Port,ee_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(ff_GPIO_Port,ff_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(gg_GPIO_Port,gg_Pin,GPIO_PIN_RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(aa_GPIO_Port,aa_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(bb_GPIO_Port,bb_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(cc_GPIO_Port,cc_Pin,GPIO_PIN_RESET);
			break;
		case 8:
			HAL_GPIO_WritePin(aa_GPIO_Port,aa_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(bb_GPIO_Port,bb_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(cc_GPIO_Port,cc_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(dd_GPIO_Port,dd_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(ee_GPIO_Port,ee_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(ff_GPIO_Port,ff_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(gg_GPIO_Port,gg_Pin,GPIO_PIN_RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(aa_GPIO_Port,aa_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(bb_GPIO_Port,bb_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(cc_GPIO_Port,cc_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(dd_GPIO_Port,dd_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(ff_GPIO_Port,ff_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(gg_GPIO_Port,gg_Pin,GPIO_PIN_RESET);
			break;
		default:

			break;
	}
}

const int MAX_LED = 4;
int index_led = 0;
int led_buffer[4] = {1, 2, 3, 4};

void update7SEG(int index){
	switch(index){
		case 0:
			  HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_SET);
			  display7SEG(led_buffer[0]);
			  break;
		case 1:
			  HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_SET);
			  display7SEG(led_buffer[1]);
			  break;
		case 2:
			  HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_SET);
			  display7SEG(led_buffer[2]);
			  break;
		case 3:
			  HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_RESET);
			  display7SEG(led_buffer[3]);
			  break;
		}
}


void update_buffer(){
	  led_buffer[0] = counter_led_1 / 10;
	  led_buffer[1] = counter_led_1 % 10;
	  led_buffer[2] = counter_led_2 / 10;
	  led_buffer[3] = counter_led_2 % 10;
}

void counter_2_led() {
	counter_led_1--;
	counter_led_2--;
}

void value_2_lane(int value_lane1, int value_lane2) {
	counter_led_1 = value_lane1;
	counter_led_2 = value_lane2;
}

