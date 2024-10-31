#include "fsm_auto.h"


int red_duration_max = 5, green_duration_max = 3, yellow_duration_max = 2;

int index_7LED = 0, count = 0;
void case_1(){
	switch(status){
		case INIT:
			off_lane1();
			off_lane2();
			status = RED_GREEN;
			//setTimer(1, red_duration*100);
			break;
		case RED_GREEN:
			red_1();
			green_2();
			break;
		case RED_YELLOW:
			red_1();
			yellow_2();
			break;
		case GREEN_RED:
			green_1();
			red_2();
			break;
		case YELLOW_RED:
			yellow_1();
			red_2();
		default:
			status = INIT;
			break;
	}
}

void fsm_auto_run(){
	case_1();
	if(timer_flag[1] == 1){
		setTimer(1, 100);
		if(count == 0)
			status = RED_GREEN;
		else if(count == 1)
			status = RED_YELLOW;
		else if(count == 2)
			status = GREEN_RED;
		else if(count == 3){
			status = YELLOW_RED;
		}
		count++;
		if(count == 3)count = 0;
	}
}
