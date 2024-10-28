#include "main.h"

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

#define ARRAY_SIZE 3

extern int button_flag[ARRAY_SIZE];

void subKeyProcess();
void getKeyInput();

#endif /* INC_BUTTON_H_ */
