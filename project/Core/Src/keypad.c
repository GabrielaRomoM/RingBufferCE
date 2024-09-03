/*
 * keypad.c
 *
 *  Created on: Sep 2, 2024
 *      Author: Gabriela
 */
#include "keypad.h"
#include "main.h"



uint8_t keypad_scan(uint16_t GPIO_Pin){
	uint8_t key_pressed = 0xFF;

	switch(GPIO_Pin){
	case COLUMN1_Pin:
		HAL_GPIO_WritePin(ROW1_GPIO_Port,ROW1_Pin,GPIO_PIN_RESET);
		if(HAL_GPIO_ReadPin(COLUMN1_GPIO_Port, COLUMN1_Pin)==0){
			key_pressed = '1';
			break;
		}
	    HAL_GPIO_WritePin(ROW2_GPIO_Port,ROW2_Pin,GPIO_PIN_RESET);
		if(HAL_GPIO_ReadPin(COLUMN1_GPIO_Port,COLUMN1_Pin)==0){
			key_pressed = '4';
			break;
		}
		HAL_GPIO_WritePin(ROW3_GPIO_Port,ROW3_Pin,GPIO_PIN_RESET);
		if(HAL_GPIO_ReadPin(COLUMN1_GPIO_Port,COLUMN1_Pin)==0){
			key_pressed = '7';
			break;
		}
		HAL_GPIO_WritePin(ROW4_GPIO_Port,ROW4_Pin,GPIO_PIN_RESET);
		if(HAL_GPIO_ReadPin(COLUMN1_GPIO_Port,COLUMN1_Pin)==0){
			key_pressed = '*';
			break;
		}
		break;
	case COLUMN2_Pin:
		HAL_GPIO_WritePin(ROW1_GPIO_Port,ROW1_Pin,GPIO_PIN_RESET);
	    if(HAL_GPIO_ReadPin(COLUMN2_GPIO_Port, COLUMN2_Pin)==0){
			key_pressed = '2';
			break;
		}
		HAL_GPIO_WritePin(ROW2_GPIO_Port,ROW2_Pin,GPIO_PIN_RESET);
	    if(HAL_GPIO_ReadPin(COLUMN2_GPIO_Port,COLUMN2_Pin)==0){
			key_pressed = '5';
			break;
		}
		HAL_GPIO_WritePin(ROW3_GPIO_Port,ROW3_Pin,GPIO_PIN_RESET);
	    if(HAL_GPIO_ReadPin(COLUMN2_GPIO_Port,COLUMN2_Pin)==0){
			key_pressed = '8';
			break;
		}
	    HAL_GPIO_WritePin(ROW4_GPIO_Port,ROW4_Pin,GPIO_PIN_RESET);
	    if(HAL_GPIO_ReadPin(COLUMN2_GPIO_Port,COLUMN2_Pin)==0){
			key_pressed = '0';
			break;
		}
		break;
	 case COLUMN3_Pin:
		HAL_GPIO_WritePin(ROW1_GPIO_Port,ROW1_Pin,GPIO_PIN_RESET);
		if(HAL_GPIO_ReadPin(COLUMN3_GPIO_Port, COLUMN3_Pin)==0){
			key_pressed = '3';
			break;
		}
		HAL_GPIO_WritePin(ROW2_GPIO_Port,ROW2_Pin,GPIO_PIN_RESET);
		if(HAL_GPIO_ReadPin(COLUMN3_GPIO_Port,COLUMN3_Pin)==0){
			key_pressed = '6';
			break;
		}
		HAL_GPIO_WritePin(ROW3_GPIO_Port,ROW3_Pin,GPIO_PIN_RESET);
		if(HAL_GPIO_ReadPin(COLUMN3_GPIO_Port,COLUMN3_Pin)==0){
			key_pressed = '9';
			break;
		}
		HAL_GPIO_WritePin(ROW4_GPIO_Port,ROW4_Pin,GPIO_PIN_RESET);
		if(HAL_GPIO_ReadPin(COLUMN3_GPIO_Port,COLUMN3_Pin)==0){
			key_pressed = '#';
			break;
		}
		break;
	case COLUMN4_Pin:
		HAL_GPIO_WritePin(ROW1_GPIO_Port,ROW1_Pin,GPIO_PIN_RESET);
		if(HAL_GPIO_ReadPin(COLUMN4_GPIO_Port, COLUMN4_Pin)==0){
			key_pressed = 'A';
			break;
		}
		HAL_GPIO_WritePin(ROW2_GPIO_Port,ROW2_Pin,GPIO_PIN_RESET);
		if(HAL_GPIO_ReadPin(COLUMN4_GPIO_Port,COLUMN4_Pin)==0){
			key_pressed = 'B';
			break;
		}
		HAL_GPIO_WritePin(ROW3_GPIO_Port,ROW3_Pin,GPIO_PIN_RESET);
		if(HAL_GPIO_ReadPin(COLUMN4_GPIO_Port,COLUMN4_Pin)==0){
			key_pressed = 'C';
			break;
		}
		HAL_GPIO_WritePin(ROW4_GPIO_Port,ROW4_Pin,GPIO_PIN_RESET);
		if(HAL_GPIO_ReadPin(COLUMN4_GPIO_Port,COLUMN4_Pin)==0){
			key_pressed = 'D';
			break;
		}
		break;
	default:
		break;
		}
		HAL_GPIO_WritePin(ROW1_GPIO_Port,ROW1_Pin,GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW2_GPIO_Port,ROW2_Pin,GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW3_GPIO_Port,ROW3_Pin,GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW4_GPIO_Port,ROW4_Pin,GPIO_PIN_SET);
	return key_pressed;
}
