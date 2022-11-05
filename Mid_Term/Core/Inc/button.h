/*
 * button.h
 *
 *  Created on: Nov 4, 2022
 *      Author: huynh
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"

#define NORMAL_STATE SET
#define PRESSED_STATE RESET

int RESET_pressed();
int INC_pressed();
int DEC_pressed();

int INC_longpressed();
int DEC_longpressed();
void getKeyInput();

#endif /* INC_BUTTON_H_ */
