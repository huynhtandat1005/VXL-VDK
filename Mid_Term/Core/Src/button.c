/*
 * button.c
 *
 *  Created on: Nov 4, 2022
 *      Author: huynh
 */

#include "button.h"

int BUTTON_RES = 0;
int BUTTON_INC = 0;
int BUTTON_DEC = 0;

int INC_LONG = 0;
int DEC_LONG = 0;

int KeyReg0 = NORMAL_STATE;
int KeyReg1 = NORMAL_STATE;
int KeyReg2 = NORMAL_STATE;
int RESET_KEY = NORMAL_STATE;

int KeyReg3 = NORMAL_STATE;
int KeyReg4 = NORMAL_STATE;
int KeyReg5 = NORMAL_STATE;
int INC = NORMAL_STATE;

int KeyReg6 = NORMAL_STATE;
int KeyReg7 = NORMAL_STATE;
int KeyReg8 = NORMAL_STATE;
int DEC = NORMAL_STATE;

int TimeOutForKeyPress = 200;
int TimeOutINC_KEY =  300;
int TimeOutDEC_KEY =  300;

int RESET_pressed(){
	if(BUTTON_RES == 1){
		BUTTON_RES = 0;
		return 1;
	}
	return 0;
}

int INC_pressed(){
	if(BUTTON_INC == 1){
		BUTTON_INC = 0;
		return 1;
	}
	return 0;
}

int DEC_pressed(){
	if(BUTTON_DEC == 1){
		BUTTON_DEC = 0;
		return 1;
	}
	return 0;
}

int INC_longpressed(){
	if(INC_LONG == 1){
		INC_LONG = 0;
		return 1;
	}
	return 0;
}

int DEC_longpressed(){
	if(DEC_LONG == 1){
		DEC_LONG = 0;
		return 1;
	}
	return 0;
}

void input_RESET(){
	  KeyReg0 = KeyReg1;
	  KeyReg1 = RESET_KEY;
	  RESET_KEY = HAL_GPIO_ReadPin(RESET_GPIO_Port, RESET_Pin);
	  if ((KeyReg0 == KeyReg1) && (KeyReg1 == RESET_KEY)){
		if (KeyReg2 != RESET_KEY){
			KeyReg2 = RESET_KEY;
		  if (RESET_KEY == PRESSED_STATE){
			TimeOutForKeyPress = 200;
			BUTTON_RES = 1;
		  }
		}
	  }
}

void input_INC(){
	  KeyReg3 = KeyReg4;
	  KeyReg4 = INC;
	  INC = HAL_GPIO_ReadPin(INC_GPIO_Port, INC_Pin);
	  if ((KeyReg3 == KeyReg4) && (KeyReg4 == INC)){
	    if (KeyReg5 != INC){
	    	KeyReg5 = INC;
	      if (INC == PRESSED_STATE){
	    	  TimeOutINC_KEY = 300;
	    	  BUTTON_INC = 1;
	      }
	    }
	    else if(INC == PRESSED_STATE){
	    	TimeOutINC_KEY --;
	        if (TimeOutINC_KEY == 0){
	        	INC_LONG = 1;
	        	TimeOutINC_KEY = 100;
	        }
	    }
	  }
}

void input_DEC(){
	  KeyReg6 = KeyReg7;
	  KeyReg7 = DEC;
	  DEC = HAL_GPIO_ReadPin(DEC_GPIO_Port, DEC_Pin);
	  if ((KeyReg6 == KeyReg7) && (KeyReg7 == DEC)){
	    if (KeyReg8 != DEC){
	    	KeyReg8 = DEC;
	      if (DEC == PRESSED_STATE){
	    	  TimeOutDEC_KEY = 300;
	    	  BUTTON_DEC = 1;
	      }
	    }
	    else if(DEC == PRESSED_STATE){
	    	TimeOutDEC_KEY --;
	        if (TimeOutDEC_KEY == 0){
	        	DEC_LONG = 1;
	        	TimeOutDEC_KEY = 100;
	        }
	    }
	  }
}

void getKeyInput(){
	input_DEC();
	input_INC();
	input_RESET();
}
