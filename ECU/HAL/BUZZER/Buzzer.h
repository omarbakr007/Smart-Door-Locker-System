/*
 * Buzzer.h
 *
 *  Created on: 30/1/ 2022
 *  Author: Omar Bakr
 */

#ifndef BUZZER_H_
#define BUZZER_H_

#include "../../MCAL/GPIO/gpio.h"



/* Configurations */
#define BUZZER_PORT		PORTC_ID
#define BUZZER_PIN		PIN3_ID


/* Functions prototypes */
void BUZZRR_init(void);

/*
 * Decription: function to clear the buzzer pin
 * */
void BUZZRR_ON(void);

/*
 * Decription: function to set the buzzer pin
 * */
void BUZZRR_OFF(void);

#endif /* BUZZER_H_ */
