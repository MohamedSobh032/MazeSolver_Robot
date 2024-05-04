#ifndef _MAIN_H_
#define _MAIN_H_


/************************************** HARDWARE SETTING **************************************/
	/* NUMBER OF IR's */
#define APP_IR_ARRAY_COUNT		5
	/* DEFINE IR ARRAY PINS */
#define APP_IR0			GPIOA, MGPIO_PIN00
#define APP_IR1			GPIOA, MGPIO_PIN01
#define APP_IR2			GPIOA, MGPIO_PIN02
#define APP_IR3			GPIOA, MGPIO_PIN03
#define APP_IR4			GPIOA, MGPIO_PIN04
	/* DEFINE THE CHANNELS */
#define APP_IR0_CHANNEL	MADC_CHANNEL0
#define APP_IR1_CHANNEL	MADC_CHANNEL1
#define APP_IR2_CHANNEL	MADC_CHANNEL2
#define APP_IR3_CHANNEL	MADC_CHANNEL3
#define APP_IR4_CHANNEL	MADC_CHANNEL4

	/* DEFINE USART FOR MOBILE APPLICATION */
#define APP_MOBILE_USART		USART1
	/* DEFINE THE PINS */
#define APP_MOBILE_USART_TX		GPIOA, MGPIO_PIN09
#define APP_MOBILE_USART_RX		GPIOA, MGPIO_PIN10
	/* DEFINE THE DIRECTION */
#define APP_MOBILE_USART_AF		MGPIO_AF07

	/* BUTTON PINS */
#define APP_BUTTON_APP1			GPIOB, MGPIO_PIN00
#define APP_BUTTON_APP2			GPIOB, MGPIO_PIN01

	/* PWM TIMER GENERATOR */
		/* PWM 1 */
#define APP_TIM_PWM_R			GPT3
#define APP_CHANNEL_PWM_R		MGPT_CHANNEL_1
		/* PWM 2 */
#define APP_TIM_PWM_L			GPT4
#define APP_CHANNEL_PWM_L		MGPT_CHANNEL_1
		/* GENERAL */
#define APP_PWM_PERIOD			4095
#define APP_PWM_PRESCALER		1
	/* DEFINE THE PINS */
		/* PWM 1 */
#define APP_TIM_PWM_R_PIN		GPIOB, MGPIO_PIN04
#define APP_TIM_PWM_R_AF		MGPIO_AF02
		/* PWM 2 */
#define APP_TIM_PWM_L_PIN		GPIOB, MGPIO_PIN06
#define APP_TIM_PWM_L_AF		MGPIO_AF02
/**********************************************************************************************/


/********************************** APPLICATION CODE SETTING **********************************/
/* ENUM ALGORTHIM DEFINITION */
typedef enum {
	APP_LINE_FOLLOWING = 0,
	APP_MAZE_SOLVING = 1
} APP_ALGORITHM;
/* DEFINE RECEIVED STRING FROM MOBILE APPLICATION LENGTH */
#define APP_MOBILE_MESSAGE_LENGTH			6U
/* PWM MOVE FUNCTIONS */
#define APP_CAR_MOVE_FULL_FORCE				APP_PWM_PERIOD
#define APP_CAR_MOVE_ZERO_FORCE				0
/* DEFINE AVERAGE SPEED FOR THE MOTORS */
#define APP_AVERAGE_SPEED					(APP_PWM_PERIOD/2)
/**********************************************************************************************/

#endif /* _MAIN_H_ */
