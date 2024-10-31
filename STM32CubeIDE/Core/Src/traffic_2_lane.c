#include "traffic_2_lane.h"

void red_1(void){
    HAL_GPIO_WritePin(red1_GPIO_Port, red1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(green1_GPIO_Port, green1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(yellow1_GPIO_Port, yellow1_Pin, GPIO_PIN_RESET);
}

void green_1(void){
    HAL_GPIO_WritePin(red1_GPIO_Port, red1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(yellow1_GPIO_Port, yellow1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(green1_GPIO_Port, green1_Pin, GPIO_PIN_SET);
}

void yellow_1(void){
	HAL_GPIO_WritePin(red1_GPIO_Port, red1_Pin, GPIO_PIN_RESET );
	HAL_GPIO_WritePin(yellow1_GPIO_Port, yellow1_Pin, GPIO_PIN_SET );
    HAL_GPIO_WritePin(green1_GPIO_Port, green1_Pin, GPIO_PIN_RESET );
}

void red_2(void) {
    HAL_GPIO_WritePin(red2_GPIO_Port, red2_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(green2_GPIO_Port, green2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(yellow2_GPIO_Port, yellow2_Pin, GPIO_PIN_RESET);
}

void green_2(void) {
    HAL_GPIO_WritePin(red2_GPIO_Port, red2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(yellow2_GPIO_Port, yellow2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(green2_GPIO_Port, green2_Pin, GPIO_PIN_SET);
}

void yellow_2(void){
	HAL_GPIO_WritePin(red2_GPIO_Port, red2_Pin, GPIO_PIN_RESET );
	HAL_GPIO_WritePin(yellow2_GPIO_Port, yellow2_Pin, GPIO_PIN_SET );
    HAL_GPIO_WritePin(green2_GPIO_Port, green2_Pin, GPIO_PIN_RESET );
}
void off_lane1(void){
    HAL_GPIO_WritePin(red1_GPIO_Port, red1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(green1_GPIO_Port, green1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(yellow1_GPIO_Port, yellow1_Pin, GPIO_PIN_RESET);
}
void off_lane2(void){
	HAL_GPIO_WritePin(red2_GPIO_Port, red2_Pin, GPIO_PIN_RESET );
	HAL_GPIO_WritePin(yellow2_GPIO_Port, yellow2_Pin, GPIO_PIN_RESET );
    HAL_GPIO_WritePin(green2_GPIO_Port, green2_Pin, GPIO_PIN_RESET );
}
//void fsm_auto_run(){
//	case_1();
//	if(timer_flag[1] == 1){
//		setTimer(1, 100);
//		if(count == 0)
//			status = RED_GREEN;
//		else if(count == 1)
//			status = RED_YELLOW;
//		else if(count == 2)
//			status = GREEN_RED;
//		else if(count == 3){
//			status = YELLOW_RED;
//		}
//		count++;
//		if(count == 3)count = 0;
//	}
//}
