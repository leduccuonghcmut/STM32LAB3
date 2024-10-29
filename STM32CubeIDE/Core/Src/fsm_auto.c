#include "fsm_auto.h"
#include "software_timer.h"

int red_duration = 5;
int green_duration = 3;
int yellow_duration = 2;


void fsm_auto_run(){
	switch(status){
		case INIT:
			status = RED_GREEN;
			value_2_lane(red_duration, green_duration);
			setTimer(0, green_duration*100);
			setTimer(1, 100);
			setTimer(2, 25);
			break;
		case RED_GREEN:
			red_1();
			green_2();
			if(timer_flag)
			status = RED_YELLOW;
			value_2_lane(red_duration, yellow_duration);
			break;
		case RED_YELLOW:
			break;
	}
}

