///*
// * fsm_automatic.c
// *
// *  Created on: Nov 4, 2022
// *      Author: huynh
// */
//
//#include "fsm_automatic.h"
//
//void fsm_automatic_run(){
//	switch(status){
//	case INIT :
//		HAL_GPIO_WritePin(led_red_GPIO_Port, led_red_Pin, GPIO_PIN_SET);
//		HAL_GPIO_WritePin(led_green_GPIO_Port, led_green_Pin, GPIO_PIN_SET);
//		HAL_GPIO_WritePin(led_yellow_GPIO_Port, led_yellow_Pin, GPIO_PIN_SET);
//		status = AUTO_RED;
//		setTimer1(500);
//		break;
//	case AUTO_RED :
//		HAL_GPIO_WritePin(led_red_GPIO_Port, led_red_Pin, GPIO_PIN_RESET);
//		HAL_GPIO_WritePin(led_green_GPIO_Port, led_green_Pin, GPIO_PIN_SET);
//		HAL_GPIO_WritePin(led_yellow_GPIO_Port, led_yellow_Pin, GPIO_PIN_SET);
//		if(timer1_flag == 1){
//			status = AUTO_GREEN;
//			setTimer1(300);
//		}
//		if(isButtonPressed() == 1){
//			status = MAN_RED;
//			setTimer1(1000);
//		}
//		break;
//	case AUTO_GREEN :
//		HAL_GPIO_WritePin(led_red_GPIO_Port, led_red_Pin, GPIO_PIN_SET);
//		HAL_GPIO_WritePin(led_green_GPIO_Port, led_green_Pin, GPIO_PIN_RESET);
//		HAL_GPIO_WritePin(led_yellow_GPIO_Port, led_yellow_Pin, GPIO_PIN_SET);
//		if(timer1_flag == 1){
//			status = AUTO_YELLOW;
//			setTimer1(200);
//		}
//		break;
//	case AUTO_YELLOW :
//		HAL_GPIO_WritePin(led_red_GPIO_Port, led_red_Pin, GPIO_PIN_SET);
//		HAL_GPIO_WritePin(led_green_GPIO_Port, led_green_Pin, GPIO_PIN_SET);
//		HAL_GPIO_WritePin(led_yellow_GPIO_Port, led_yellow_Pin, GPIO_PIN_RESET);
//		if(timer1_flag == 1){
//			status = AUTO_RED;
//			setTimer1(500);
//		}
//		break;
//	default:
//		break;
//	}
//}
//
