#include "button.h"
//int button_press_flag[3] = {0,0,0};
//int button_longpress_flag[3] = {0,0,0};
//
//int KeyReg0[4]={NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
//int KeyReg1[4]={NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
//int KeyReg2[4]={NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
//int KeyReg3[4]={NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
//
//int timeForKeyPress = 300;
//
//GPIO_TypeDef* button_ports[4] = {0, BUTTON_1_GPIO_Port, BUTTON_2_GPIO_Port, BUTTON_3_GPIO_Port};
//uint16_t button_pins[4] = {0, BUTTON_1_Pin, BUTTON_2_Pin, BUTTON_3_Pin};
//
//
//
//int isButtonPressed(int key){
//	if(button_press_flag[key] == 1){
//		button_press_flag[key] = 0;
//		return 1;
//	}
//	return 0;
//}
//
//void subKeyProcess(int key){
//	button_press_flag[key] = 1;
//}
//
//int isButtonLongPressed(int key){
//	if(button_longpress_flag[key] == 1){
//		button_longpress_flag[key] = 0;
//		return 1;
//	}
//	return 1;
//}
//
//void subLongPress(int key){
//	button_longpress_flag[key] = 1;
//}
//
//void getKeyInput(int key){
//	KeyReg0[key] = KeyReg1[key];
//	KeyReg1[key] = KeyReg2[key];
//	KeyReg2[key] = HAL_GPIO_ReadPin(button_ports[key],button_pins[key]);
//
//	if((KeyReg0[key] == KeyReg1[key]) && (KeyReg1[key] == KeyReg2[key])){
//		if(KeyReg3[key] != KeyReg2[key]){
//			KeyReg3[key] = KeyReg2[key];
//			if(KeyReg2[key] == PRESSED_STATE){
//				subKeyProcess(key);
//				timeForKeyPress = 300;
//			}
//		} else {
//			timeForKeyPress--;
//			if(timeForKeyPress == 0){
//				subLongPress(key);
//				KeyReg3[key] = NORMAL_STATE;
//				timeForKeyPress = 300;
//			}
//		}
//	}
//}
//
//void getkey(){
//	getKeyInput(1);
//	getKeyInput(2);
//	getKeyInput(3);
//}

int keyReg0[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int keyReg1[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int keyReg2[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int keyReg3[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE}; // trạng thái ổn định trước đó

int timerForKeyPress = 100;// nhấn đè thì 2s mới xử lý

int button_BUT1_flag = 0;
int button_BUT2_flag = 0;
int button_BUT3_flag = 0;

int button_BUT1_LongPressed_flag = 0;
int button_BUT2_LongPressed_flag = 0;
int button_BUT3_LongPressed_flag = 0;


int isButton_BUT1_Pressed(){
	if(button_BUT1_flag == 1){
		button_BUT1_flag = 0;
		return 1;
	}
	return 0;
}
int isButton_BUT2_Pressed(){
	if(button_BUT2_flag == 1){
		button_BUT2_flag = 0;
		return 1;
	}
	return 0;
}
int isButton_BUT3_Pressed(){
	if(button_BUT3_flag == 1){
		button_BUT3_flag = 0;
		return 1;
	}
	return 0;
}
int isButton_BUT1_LongPressed(){
	if(button_BUT1_LongPressed_flag == 1){
		button_BUT1_LongPressed_flag = 0;
		return 1;
	}
	return 0;
}
int isButton_BUT2_LongPressed(){
	if(button_BUT2_LongPressed_flag == 1){
		button_BUT2_LongPressed_flag = 0;
		return 1;
	}
	return 0;
}
int isButton_BUT3_LongPressed(){
	if(button_BUT3_LongPressed_flag == 1){
		button_BUT3_LongPressed_flag = 0;
		return 1;
	}
	return 0;
}

void getKeyInput(){
		keyReg0[0] = keyReg1[0];
		keyReg1[0] = keyReg2[0];
		keyReg2[0] = HAL_GPIO_ReadPin(BUTTON_1_GPIO_Port, BUTTON_1_Pin);
		if((keyReg0[0] == keyReg1[0]) && (keyReg1[0] == keyReg2[0])){
			if(keyReg3[0] != keyReg2[0]){
				keyReg3[0] = keyReg2[0];
				if(keyReg2[0] == PRESSED_STATE){
					button_BUT1_flag = 1;
					timerForKeyPress = 100;
				}
			} else {
					timerForKeyPress--;
					if(timerForKeyPress == 0){
						keyReg3[0] = NORMAL_STATE;
						button_BUT1_flag = 1;
						button_BUT1_LongPressed_flag = 1;
						timerForKeyPress = 100;
					}
				}
		}
		keyReg0[1] = keyReg1[1];
		keyReg1[1] = keyReg2[1];
		keyReg2[1] = HAL_GPIO_ReadPin(BUTTON_2_GPIO_Port, BUTTON_2_Pin);
		if((keyReg0[1] == keyReg1[1]) && (keyReg1[1] == keyReg2[1])){
			if(keyReg3[1] != keyReg2[1]){
				keyReg3[1] = keyReg2[1];
				if(keyReg2[1] == PRESSED_STATE){
					button_BUT2_flag = 1;
					timerForKeyPress = 100;
				}
			} else {
					timerForKeyPress--;
					if(timerForKeyPress == 0){
						keyReg3[1] = NORMAL_STATE;
						button_BUT2_flag = 1;
						button_BUT2_LongPressed_flag = 1;
						timerForKeyPress = 100;
					}
				}
		}
		keyReg0[2] = keyReg1[2];
		keyReg1[2] = keyReg2[2];
		keyReg2[2] = HAL_GPIO_ReadPin(BUTTON_3_GPIO_Port, BUTTON_3_Pin);
		if((keyReg0[2] == keyReg1[2]) && (keyReg1[2] == keyReg2[2])){
			if(keyReg3[2] != keyReg2[2]){
				keyReg3[2] = keyReg2[2];
				if(keyReg2[2] == PRESSED_STATE){
					button_BUT3_flag = 1;
					timerForKeyPress = 100;
				}
			} else {
					timerForKeyPress--;
					if(timerForKeyPress == 0){
						keyReg3[2] = NORMAL_STATE;
						button_BUT3_flag = 1;
						button_BUT3_LongPressed_flag = 1;
						timerForKeyPress = 100;
					}
				}
		}

}

