#include "main.h"

#ifndef INC_DISPLAY7SEG_H_
#define INC_DISPLAY7SEG_H_


void display7SEG(int num);
void display7SEG_2(int num);
void update7SEG(int index);

extern int counter_led_1;
extern int counter_led_2;

void turn_on_led();

#endif /* INC_DISPLAY7SEG_H_ */
