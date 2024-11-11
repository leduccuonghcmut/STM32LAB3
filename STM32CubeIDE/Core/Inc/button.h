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

int isButton1_Pressed();
int isButton2_Pressed();
int isButton3_Pressed();

extern int timerForKeyPress;

int isButton1_Pressed_Long();
int isButton2_Pressed_Long();
int isButton3_Pressed_Long();

extern int button1_flag;
extern int button2_flag;
extern int button3_flag;

extern int button1_long_flag;
extern int button2_long_flag;
extern int button3_long_flag;

//void getKeyInput();
//void getkey();

void getKeyInput1();
void getKeyInput2();
void getKeyInput3();
#endif /* INC_BUTTON_H_ */
