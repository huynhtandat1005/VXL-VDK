///*
// * fsm_manual.c
// *
// *  Created on: Nov 4, 2022
// *      Author: huynh
// */
//
//#include "fsm_manual.h"
//
//void fsm_manual_run(){
//	switch (status) {
//		case MAN_RED :
//			HAL_GPIO_WritePin(led_red_GPIO_Port, led_red_Pin, GPIO_PIN_RESET);
//			HAL_GPIO_WritePin(led_green_GPIO_Port, led_green_Pin, GPIO_PIN_SET);
//			HAL_GPIO_WritePin(led_yellow_GPIO_Port, led_yellow_Pin, GPIO_PIN_SET);
//			if(timer1_flag == 1){
//				status = AUTO_RED;
//				setTimer1(500);
//			}
//			if(isButtonPressed() == 1){
//				status = MAN_GREEN;
//				setTimer1(1000);
//			}
//			break;
//		case MAN_GREEN :
//			HAL_GPIO_WritePin(led_red_GPIO_Port, led_red_Pin, GPIO_PIN_SET);
//			HAL_GPIO_WritePin(led_green_GPIO_Port, led_green_Pin, GPIO_PIN_RESET);
//			HAL_GPIO_WritePin(led_yellow_GPIO_Port, led_yellow_Pin, GPIO_PIN_SET);
//			if(timer1_flag == 1){
//				status = AUTO_GREEN;
//				setTimer1(300);
//			}
//			if(isButtonPressed() == 1){
//				status = MAN_YELLOW;
//				setTimer1(1000);
//			}
//			break;
//		case MAN_YELLOW :
//			HAL_GPIO_WritePin(led_red_GPIO_Port, led_red_Pin, GPIO_PIN_SET);
//			HAL_GPIO_WritePin(led_green_GPIO_Port, led_green_Pin, GPIO_PIN_SET);
//			HAL_GPIO_WritePin(led_yellow_GPIO_Port, led_yellow_Pin, GPIO_PIN_RESET);
//			if(timer1_flag == 1){
//				status = AUTO_YELLOW;
//				setTimer1(500);
//			}
//			if(isButtonPressed() == 1){
//				status = MAN_RED;
//				setTimer1(1000);
//			}
//			break;
//		default:
//			break;
//	}
//}
