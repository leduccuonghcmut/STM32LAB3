#include "main.h"
#include "software_timer.h"
#include "global.h"
#include "display7SEG.h"
#include "traffic_2_lane.h"

#ifndef INC_FSM_AUTO_H_
#define INC_FSM_AUTO_H_

extern int red_duration;
extern int green_duration;
extern int yellow_duration;

void fsm_auto_run();


#endif /* INC_FSM_AUTO_H_ */
