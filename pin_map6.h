/*
 * pin_map.h
 *
 *  Created on: Jul 15, 2024
 *      Author: saidi
 */

#ifndef PIN_MAP_H
#define PIN_MAP_H

// Motor 1 Pins
#define MOTOR1_IN1_PORT GPIOA
#define MOTOR1_IN1_PIN GPIO_PIN_7
#define MOTOR1_IN2_PORT GPIOA
#define MOTOR1_IN2_PIN GPIO_PIN_6
#define MOTOR1_PWM_CHANNEL TIM_CHANNEL_2

// Motor 2 Pins
#define MOTOR2_IN3_PORT GPIOC
#define MOTOR2_IN3_PIN GPIO_PIN_8
#define MOTOR2_IN4_PORT GPIOC
#define MOTOR2_IN4_PIN GPIO_PIN_6
#define MOTOR2_PWM_CHANNEL TIM_CHANNEL_3

// Button Pins
#define BUTTON1_PORT GPIOB
#define BUTTON1_PIN GPIO_PIN_12
#define BUTTON2_PORT GPIOB
#define BUTTON2_PIN GPIO_PIN_13

// LED Pins
#define LED1_PORT GPIOC
#define LED1_PIN GPIO_PIN_5
#define LED2_PORT GPIOC
#define LED2_PIN GPIO_PIN_9

//#define LED3_PIN GPIO_PIN_11
//#define LED3_PIN GPIO_PORT GPIOA

#endif // PIN_MAP_H


