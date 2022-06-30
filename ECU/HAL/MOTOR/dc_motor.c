/*
 *	File name: dc_motor.c
 *  Created on: 30/1/ 2022
 *  Author: Omar
 */
#include "dc_motor.h"

void DcMotor_init(){
	GPIO_setupPinDirection(INPUT_PORT_ID, INPUT1_PIN_ID, PIN_OUTPUT);
	GPIO_setupPinDirection(INPUT_PORT_ID, INPUT2_PIN_ID, PIN_OUTPUT);

	DcMotor_Rotate(Stop);
}

void DcMotor_Rotate(DcMotor_State state){
	switch(state){
	case Stop:
		GPIO_writePin(INPUT_PORT_ID, INPUT1_PIN_ID, LOGIC_LOW);
		GPIO_writePin(INPUT_PORT_ID, INPUT2_PIN_ID, LOGIC_LOW);
		break;
	case ACW:
		GPIO_writePin(INPUT_PORT_ID, INPUT1_PIN_ID, LOGIC_HIGH);
		GPIO_writePin(INPUT_PORT_ID, INPUT2_PIN_ID, LOGIC_LOW);
		break;
	case CW:
		GPIO_writePin(INPUT_PORT_ID, INPUT1_PIN_ID, LOGIC_LOW);
		GPIO_writePin(INPUT_PORT_ID, INPUT2_PIN_ID, LOGIC_HIGH);
		break;
	}

}
