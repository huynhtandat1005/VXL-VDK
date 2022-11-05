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
#include "display_7segment.h"

#define INIT 		1
#define RESET		2

#define INC_AUTO	3
#define DEC_AUTO 	4

#define INC_MAN 	5
#define DEC_MAN 	6

#define EMPTY		7

extern int status;

#endif /* INC_GLOBAL_H_ */
