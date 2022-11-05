/*
 * display_7segment.c
 *
 *  Created on: Nov 4, 2022
 *      Author: huynh
 */

#include "display_7segment.h"

void display(int number){
	  clear();
	  if(number == 1 || number == 4)  HAL_GPIO_WritePin ( a_GPIO_Port , a_Pin , GPIO_PIN_SET ) ;
	  if(number == 5 || number == 6)  HAL_GPIO_WritePin ( b_GPIO_Port , b_Pin , GPIO_PIN_SET ) ;
	  if(number == 2)  HAL_GPIO_WritePin ( c_GPIO_Port , c_Pin , GPIO_PIN_SET ) ;
	  if(number == 1 || number == 4 || number == 7)  HAL_GPIO_WritePin ( d_GPIO_Port , d_Pin , GPIO_PIN_SET ) ;
	  if(number != 0 && number != 2 && number != 6 && number != 8)  HAL_GPIO_WritePin ( e_GPIO_Port , e_Pin , GPIO_PIN_SET ) ;
	  if(number == 1 || number == 2 || number == 3 || number == 7)  HAL_GPIO_WritePin ( f_GPIO_Port , f_Pin , GPIO_PIN_SET ) ;
	  if(number == 0 || number == 1 || number == 7)  HAL_GPIO_WritePin ( g_GPIO_Port , g_Pin , GPIO_PIN_SET ) ;
}
void clear(){
	  HAL_GPIO_WritePin ( a_GPIO_Port , a_Pin , GPIO_PIN_RESET ) ;
	  HAL_GPIO_WritePin ( b_GPIO_Port , b_Pin , GPIO_PIN_RESET ) ;
	  HAL_GPIO_WritePin ( c_GPIO_Port , c_Pin , GPIO_PIN_RESET ) ;
	  HAL_GPIO_WritePin ( d_GPIO_Port , d_Pin , GPIO_PIN_RESET ) ;
	  HAL_GPIO_WritePin ( e_GPIO_Port , e_Pin , GPIO_PIN_RESET ) ;
	  HAL_GPIO_WritePin ( f_GPIO_Port , f_Pin , GPIO_PIN_RESET ) ;
	  HAL_GPIO_WritePin ( g_GPIO_Port , g_Pin , GPIO_PIN_RESET ) ;
}
