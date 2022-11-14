/*
 * global.h
 *
 *  Created on: Nov 4, 2022
 *      Author: huynh
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "software_timer.h"
#include "button.h"
#include "main.h"
#include "7seg.h"
#include "traffic_mode.h"

#define INIT1 	0
#define RED1 	1
#define YELLOW1 2
#define GREEN1 	3

#define INIT2	4
#define RED2 	5
#define YELLOW2 6
#define GREEN2 	7

extern int status;

extern int color1;
extern int color2;

extern int red1;
extern int yellow1;
extern int green1;

extern int red2;
extern int yellow2;
extern int green2;

extern int red_a;
extern int yellow_a;
extern int green_a;

#endif /* INC_GLOBAL_H_ */
