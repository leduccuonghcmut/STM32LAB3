//#include "main.h"
//#ifndef INC_BUTTON_H_
//#define INC_BUTTON_H_
//
//#define NORMAL_STATE GPIO_PIN_SET
//#define PRESSED_STATE GPIO_PIN_RESET
//
//extern int button_press_flag[3];
//extern int button_longpress_flag[3];
//
//extern int KeyReg0[4];
//extern int KeyReg1[4];
//extern int KeyReg2[4];
//extern int KeyReg3[4];
//
//int isButtonPressed(int key);
//void subKeyProcess(int key);
//int isButtonLongPressed(int key);
//void subLongPress(int key);
//
//#endif /* INC_BUTTON_H_ */


#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"
#include "display7SEG.h"

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

int isButton_BUT1_Pressed();
int isButton_BUT2_Pressed();
int isButton_BUT3_Pressed();


int isButton_BUT1_LongPressed();
int isButton_BUT2_LongPressed();
int isButton_BUT3_LongPressed();

void getKeyInput();
void getkey();

#endif /* INC_BUTTON_H_ */
