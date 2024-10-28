#include "traffic2lane.h"
#include "main.h"

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
