################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HAL/ALARM_LED/ALARM_LED.c 

OBJS += \
./HAL/ALARM_LED/ALARM_LED.o 

C_DEPS += \
./HAL/ALARM_LED/ALARM_LED.d 


# Each subdirectory must supply rules for building sources it contributes
HAL/ALARM_LED/%.o: ../HAL/ALARM_LED/%.c HAL/ALARM_LED/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega16 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


