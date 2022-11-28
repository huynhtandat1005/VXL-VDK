/*
 * button.h
 *
 *  Created on: Nov 4, 2022
 *      Author: huynh
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"
#include "global.h"

#define NORMAL_STATE SET
#define PRESSED_STATE RESET

extern int button_flag;

int button_pressed();
void run_button();
void getKeyInput();

#endif /* INC_BUTTON_H_ */
