#include"main.h"

#ifndef INC_DISPLAY7SEG_H_
#define INC_DISPLAY7SEG_H_


void display7SEG(int num);
void update7SEG(int index);
void update_buffer();

extern int counter_led_1;
extern int counter_led_2;


void counter_2_led();

void value_2_lane(int value_lane1, int value_lane2);

#endif /* INC_DISPLAY7SEG_H_ */
