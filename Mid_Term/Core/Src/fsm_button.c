/*
 * fsm_simple_button_run.c
 *
 *  Created on: Nov 5, 2022
 *      Author: huynh
 */
#include "fsm_button.h"
#include "global.h"

int counter = 6;

//In gia tri counter
void display_static(){
	if(timer2_flag == 1){
		display(counter);
		setTimer2(10);
	}
}

void fsm_simple_button_run(){
	// RESET duoc nhan
	if(RESET_pressed() == 1) {
		counter = 0;
		setTimer4(1000);
	}
	//INC duoc nhan
	if(INC_pressed() == 1 ) {
		counter++;
		if(counter > 9) counter = 0;
		setTimer4(1000);
	}
	//DEC duoc nhan
	if(DEC_pressed() == 1) {
		counter--;
		if(counter < 0) counter = 9;
		setTimer4(1000);
	}
	display_static();
}

void fsm_auto_button_run(){
	//INC duoc giu sau 3s va tang counter sau do 1s
	if(INC_longpressed() == 1){
		  display(counter);
		  counter++;
		  if(counter > 9) counter = 0;
		  setTimer4(1000);
	}
	//DEC duoc giu sau 3s va giam counter sau do 1s
	 if(DEC_longpressed() == 1){
		  display(counter);
		  counter--;
		  if(counter < 0) counter = 9;
		  setTimer4(1000);
	  }
}

void fsm_timeout(){
	//Sau 10s tu giam counter sau 1s
	// Dung khi counter = 0
	if(timer4_flag == 1){
		display(counter);
		counter--;
		if(counter < 0) counter = 0;
		setTimer4(100);
	}
}

