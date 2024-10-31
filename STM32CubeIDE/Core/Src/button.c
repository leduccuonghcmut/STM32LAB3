#include "button.h"

int button_press_flag[3] = {0,0,0};
int button_longpress_flag[3] = {0,0,0};

int KeyReg0[4]={NORMAL_STATE,NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int KeyReg1[4]={NORMAL_STATE,NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int KeyReg2[4]={NORMAL_STATE,NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int KeyReg3[4]={NORMAL_STATE,NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};

int timeForKeyPress = 200; // 2 seconds for press

GPIO_TypeDef* button_ports[4] = {0, BUTTON_1_GPIO_Port, BUTTON_2_GPIO_Port, BUTTON_3_GPIO_Port};
uint16_t button_pins[4] = {0, BUTTON_1_Pin, BUTTON_2_Pin, BUTTON_3_Pin};



int isButtonPressed(int key){
	if(button_press_flag[key] == 1){
		button_press_flag[key] = 0;
		return 1;
	}
	return 0;
}

void subKeyProcess(int key){
	button_press_flag[key] = 1;
}

int isButtonLongPressed(int key){
	if(button_longpress_flag[key] = 1){
		button_longpress_flag[key] = 0;
		return 1;
	}
	return 1;
}

void subLongPress(int key){
	button_longpress_flag[key] = 1;
}

void getKeyInput(int key){
	KeyReg0[key] = KeyReg1[key];
	KeyReg1[key] = KeyReg2[key];
	KeyReg2[key] = HAL_GPIO_ReadPin(button_ports[key],button_pins[key]);

	if((KeyReg0[key] == KeyReg1[key]) && (KeyReg1[key] == KeyReg2[key])){
		if(KeyReg3[key] != KeyReg2[key]){
			KeyReg3[key] = KeyReg2[key];
			if(KeyReg2[key] == PRESSED_STATE){
				subKeyProcess(key);
				timeForKeyPress = 100;
			}
		} else {
			timeForKeyPress--;
			if(timeForKeyPress == 0){
				subLongPress(key);
				KeyReg3[key] = NORMAL_STATE;
				timeForKeyPress = 300;
			}
		}
	}
}

