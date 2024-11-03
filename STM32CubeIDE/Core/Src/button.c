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



#include "button.h"
int keyReg0[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int keyReg1[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int keyReg2[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};

int keyReg3[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};// trạng thái ổn định trước đó
int timerForKeyPress = 300;// nhấn đè thì 3s mới xử lý

int button_BUT1_flag = 0;
int button_BUT2_flag = 0;
int button_BUT3_flag = 0;

int button_BUT1_LongPressed_flag = 0;
int button_BUT2_LongPressed_flag = 0;
int button_BUT3_LongPressed_flag = 0;


int isButton_BUT1_Pressed()
{
	if(button_BUT1_flag == 1)
	{
		button_BUT1_flag = 0;
		return 1;
	}
	else return 0;
}
int isButton_BUT2_Pressed()
{
	if(button_BUT2_flag == 1)
	{
		button_BUT2_flag = 0;
		return 1;
	}
	else return 0;
}
int isButton_BUT3_Pressed()
{
	if(button_BUT3_flag == 1)
	{
		button_BUT3_flag = 0;
		return 1;
	}
	else return 0;
}
int isButton_BUT1_LongPressed(){
	if(button_BUT1_LongPressed_flag == 1){
		button_BUT1_LongPressed_flag = 0;
		return 1;
	}
	else return 0;
}
int isButton_BUT2_LongPressed(){
	if(button_BUT2_LongPressed_flag == 1){
		button_BUT2_LongPressed_flag = 0;
		return 1;
	}
	else return 0;
}
int isButton_BUT3_LongPressed(){
	if(button_BUT3_LongPressed_flag == 1){
		button_BUT3_LongPressed_flag = 0;
		return 1;
	}
	else return 0;
}

void getKeyInput()
{
	for(int i = 0; i < 3; i++){
		keyReg0[i] = keyReg1[i];
		keyReg1[i] = keyReg2[i];
		if(i == 0){
			keyReg2[i] = HAL_GPIO_ReadPin(BUTTON_1_GPIO_Port, BUTTON_1_Pin);
			if((keyReg0[i] == keyReg1[i]) && (keyReg1[i] == keyReg2[i]))
			{
				if(keyReg3[i] != keyReg2[i])
				{
					keyReg3[i] = keyReg2[i];
					if(keyReg2[i] == PRESSED_STATE)
					{
						button_BUT1_flag = 1;
						timerForKeyPress = 300;
					}
				}
				else
				{
					if(keyReg2[i] == PRESSED_STATE){
						timerForKeyPress--;
						if(timerForKeyPress == 0)
						{
							button_BUT1_LongPressed_flag = 1;
							timerForKeyPress = 300;
						}
					}
				}
			}
		}
		if(i == 1){
			keyReg2[i] = HAL_GPIO_ReadPin(BUTTON_2_GPIO_Port, BUTTON_2_Pin);
			if((keyReg0[i] == keyReg1[i]) && (keyReg1[i] == keyReg2[i]))
			{
				if(keyReg3[i] != keyReg2[i])
				{
					keyReg3[i] = keyReg2[i];
					if(keyReg2[i] == PRESSED_STATE)
					{
						button_BUT2_flag = 1;
						timerForKeyPress = 300;
					}
				}
				else
				{
					if(keyReg2[i] == PRESSED_STATE){
						timerForKeyPress--;
						if(timerForKeyPress == 0)
						{
							button_BUT2_LongPressed_flag = 1;
							timerForKeyPress = 300;
						}
					}
				}
			}
		}
		if(i == 2){
			keyReg2[i] = HAL_GPIO_ReadPin(BUTTON_3_GPIO_Port, BUTTON_3_Pin);
			if((keyReg0[i] == keyReg1[i]) && (keyReg1[i] == keyReg2[i]))
			{
				if(keyReg3[i] != keyReg2[i])
				{
					keyReg3[i] = keyReg2[i];
					if(keyReg2[i] == PRESSED_STATE)
					{
						button_BUT3_flag = 1;
						timerForKeyPress = 300;
					}
				}
				else
				{
					if(keyReg2[i] == PRESSED_STATE){
						timerForKeyPress--;
						if(timerForKeyPress == 0)
						{
							button_BUT3_LongPressed_flag = 1;
							timerForKeyPress = 300;
						}
					}
				}
			}
		}
	}
}


