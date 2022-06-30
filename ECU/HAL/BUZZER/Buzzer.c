/*
 * Buzzer.c
 *
 *  Created on: 30/1/ 2022
 *  Author: Omar Bakr
 */

#include "buzzer.h"

void BUZZRR_init(void){
	GPIO_setupPinDirection(BUZZER_PORT, BUZZER_PIN, PIN_OUTPUT);
	BZR_OFF();
}

void BUZZRR_ON(void){
	GPIO_writePin(BUZZER_PORT, BUZZER_PIN, LOGIC_HIGH);
}

void BUZZRR_OFF(void){
	GPIO_writePin(BUZZER_PORT, BUZZER_PIN, LOGIC_LOW);
}
