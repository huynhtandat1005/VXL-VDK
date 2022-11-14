/*
 * 7seg.c
 *
 *  Created on: Nov 13, 2022
 *      Author: huynh
 */

#include "7seg.h"

int seg1[4] ;
int seg2[4] ;
int seg3[4] ;
int seg4[4] ;

void update1(){
	/// SEG 1
	if(seg1[0] == 1) HAL_GPIO_WritePin(A0_GPIO_Port, A0_Pin, GPIO_PIN_SET);
	else if(seg1[0] == 0) HAL_GPIO_WritePin(A0_GPIO_Port, A0_Pin, GPIO_PIN_RESET);

	if(seg1[1] == 1) HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, GPIO_PIN_SET);
	else if(seg1[1] == 0) HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, GPIO_PIN_RESET);

	if(seg1[2] == 1) HAL_GPIO_WritePin(A2_GPIO_Port, A2_Pin, GPIO_PIN_SET);
	else if(seg1[2] == 0) HAL_GPIO_WritePin(A2_GPIO_Port, A2_Pin, GPIO_PIN_RESET);

	if(seg1[3] == 1) HAL_GPIO_WritePin(A3_GPIO_Port, A3_Pin, GPIO_PIN_SET);
	else if(seg1[3] == 0) HAL_GPIO_WritePin(A3_GPIO_Port, A3_Pin, GPIO_PIN_RESET);
}

void update2(){
	/// SEG 2
	if(seg2[0] == 1) HAL_GPIO_WritePin(B0_GPIO_Port, B0_Pin, GPIO_PIN_SET);
	else if(seg2[0] == 0) HAL_GPIO_WritePin(B0_GPIO_Port, B0_Pin, GPIO_PIN_RESET);

	if(seg2[1] == 1) HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, GPIO_PIN_SET);
	else if(seg2[1] == 0) HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, GPIO_PIN_RESET);

	if(seg2[2] == 1) HAL_GPIO_WritePin(B2_GPIO_Port, B2_Pin, GPIO_PIN_SET);
	else if(seg2[2] == 0) HAL_GPIO_WritePin(B2_GPIO_Port, B2_Pin, GPIO_PIN_RESET);

	if(seg2[3] == 1) HAL_GPIO_WritePin(B3_GPIO_Port, B3_Pin, GPIO_PIN_SET);
	else if(seg2[3] == 0) HAL_GPIO_WritePin(B3_GPIO_Port, B3_Pin, GPIO_PIN_RESET);
}

void update3(){
	/// SEG 3
	if(seg3[0] == 1) HAL_GPIO_WritePin(C0_GPIO_Port, C0_Pin, GPIO_PIN_SET);
	else if(seg3[0] == 0) HAL_GPIO_WritePin(C0_GPIO_Port, C0_Pin, GPIO_PIN_RESET);

	if(seg3[1] == 1) HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, GPIO_PIN_SET);
	else if(seg3[1] == 0) HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, GPIO_PIN_RESET);

	if(seg3[2] == 1) HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, GPIO_PIN_SET);
	else if(seg3[2] == 0) HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, GPIO_PIN_RESET);

	if(seg3[3] == 1) HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, GPIO_PIN_SET);
	else if(seg3[3] == 0) HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, GPIO_PIN_RESET);
}

void update4(){
	/// SEG 4
	if(seg4[0] == 1) HAL_GPIO_WritePin(D0_GPIO_Port, D0_Pin, GPIO_PIN_SET);
	else if(seg4[0] == 0) HAL_GPIO_WritePin(D0_GPIO_Port, D0_Pin, GPIO_PIN_RESET);

	if(seg4[1] == 1) HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, GPIO_PIN_SET);
	else if(seg4[1] == 0) HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, GPIO_PIN_RESET);

	if(seg4[2] == 1) HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, GPIO_PIN_SET);
	else if(seg4[2] == 0) HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, GPIO_PIN_RESET);

	if(seg4[3] == 1) HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, GPIO_PIN_SET);
	else if(seg4[3] == 0) HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, GPIO_PIN_RESET);
}

void clear1(){
	seg1[0] = 0;
	seg1[1] = 0;
	seg1[2] = 0;
	seg1[3] = 0;
}

void clear2(){
	seg2[0] = 0;
	seg2[1] = 0;
	seg2[2] = 0;
	seg2[3] = 0;
}

void clear3(){
	seg3[0] = 0;
	seg3[1] = 0;
	seg3[2] = 0;
	seg3[3] = 0;
}

void clear4(){
	seg4[0] = 0;
	seg4[1] = 0;
	seg4[2] = 0;
	seg4[3] = 0;
}

void display1(int number){
	clear1();
	if(number == 1) seg1[3] = 1;
	if(number == 2) seg1[2] = 1;
	if(number == 3) {
		seg1[2] = 1;
		seg1[3] = 1;
	}
	if(number == 4) seg1[1] = 1;
	if(number == 5) {
		seg1[1] = 1;
		seg1[3] = 1;
	}
	if(number == 6) {
		seg1[1] = 1;
		seg1[2] = 1;
	}
	if(number == 7) {
		seg1[1] = 1;
		seg1[2] = 1;
		seg1[3] = 1;
	}
	if(number == 8) seg1[0] = 1;
	if(number == 9) {
		seg1[0] = 1;
		seg1[3] = 1;
	}
	update1();
}

void display2(int number){
	clear2();
	if(number == 1) seg2[3] = 1;
	if(number == 2) seg2[2] = 1;
	if(number == 3) {
		seg2[2] = 1;
		seg2[3] = 1;
	}
	if(number == 4) seg2[1] = 1;
	if(number == 5) {
		seg2[1] = 1;
		seg2[3] = 1;
	}
	if(number == 6) {
		seg2[1] = 1;
		seg2[2] = 1;
	}
	if(number == 7) {
		seg2[1] = 1;
		seg2[2] = 1;
		seg2[3] = 1;
	}
	if(number == 8) seg2[0] = 1;
	if(number == 9) {
		seg2[0] = 1;
		seg2[3] = 1;
	}
	update2();
}

void display3(int number){
	clear3();
	if(number == 1) seg3[3] = 1;
	if(number == 2) seg3[2] = 1;
	if(number == 3) {
		seg3[2] = 1;
		seg3[3] = 1;
	}
	if(number == 4) seg3[1] = 1;
	if(number == 5) {
		seg3[1] = 1;
		seg3[3] = 1;
	}
	if(number == 6) {
		seg3[1] = 1;
		seg3[2] = 1;
	}
	if(number == 7) {
		seg3[1] = 1;
		seg3[2] = 1;
		seg3[3] = 1;
	}
	if(number == 8) seg3[0] = 1;
	if(number == 9) {
		seg3[0] = 1;
		seg3[3] = 1;
	}
	update3();
}

void display4(int number){
	clear4();
	if(number == 1) seg4[3] = 1;
	if(number == 2) seg4[2] = 1;
	if(number == 3) {
		seg4[2] = 1;
		seg4[3] = 1;
	}
	if(number == 4) seg4[1] = 1;
	if(number == 5) {
		seg4[1] = 1;
		seg4[3] = 1;
	}
	if(number == 6) {
		seg4[1] = 1;
		seg4[2] = 1;
	}
	if(number == 7) {
		seg4[1] = 1;
		seg4[2] = 1;
		seg4[3] = 1;
	}
	if(number == 8) seg4[0] = 1;
	if(number == 9) {
		seg4[0] = 1;
		seg4[3] = 1;
	}
	update4();
}

