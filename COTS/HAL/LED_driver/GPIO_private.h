#ifndef GPIO_private_H_
#define GPIO_private_H_

/* GPIO Port (APB) base */

#define GPIOA_BASE_ADD               0x40004000
#define GPIOB_BASE_ADD               0x40005000
#define GPIOC_BASE_ADD               0x40006000
#define GPIOD_BASE_ADD               0x40007000
#define GPIOE_BASE_ADD               0x40024000
#define GPIOF_BASE_ADD               0x40025000

/*           PORTA REGISTERS         */
#define DATA_A(PIN)       *((volatile u32 *)(GPIOA_BASE_ADD+(1<< (PIN+2))))    //  input 2 :  0b00000001 << (4)= 0b00001000
#define DATA_PORT_A       *((volatile u32 *)(GPIOA_BASE_ADD+0x3FC))            // allow writing on any pin in the register (R/M/W)
#define DIR_A             *((volatile u32 *)(GPIOA_BASE_ADD+0x400))            // GPIO Direction
#define AFSEL_A           *((volatile u32 *)(GPIOA_BASE_ADD+0x420))            // GPIO Alternate Function Select
#define DR2R_A            *((volatile u32 *)(GPIOA_BASE_ADD+0x500))            // GPIO 2-mA Drive Select
#define DR4R_A            *((volatile u32 *)(GPIOA_BASE_ADD+0x504))            // GPIO 4-mA Drive Select
#define DR8R_A            *((volatile u32 *)(GPIOA_BASE_ADD+0x508))            // GPIO 8-mA Drive Select
#define ODR_A             *((volatile u32 *)(GPIOA_BASE_ADD+0x50C))            // GPIO Open Drain Select
#define PUR_A             *((volatile u32 *)(GPIOA_BASE_ADD+0x510))            // GPIO Pull-Up Select
#define PDR_A             *((volatile u32 *)(GPIOA_BASE_ADD+0x514))            // GPIO Pull-Down Select
#define DEN_A             *((volatile u32 *)(GPIOA_BASE_ADD+0x51C))            // GPIO Digital Enable
#define LOCK_A            *((volatile u32 *)(GPIOA_BASE_ADD+0x520))            // GPIO Digital Enable
#define CR_A              *((volatile u32 *)(GPIOA_BASE_ADD+0x524))            // GPIO Commit
#define AMSEL_A           *((volatile u32 *)(GPIOA_BASE_ADD+0x528))            // GPIO Analog Mode Select
#define PCTL_A            *((volatile u32 *)(GPIOA_BASE_ADD+0x52C))            // GPIO Port Control (give Alternate Function )
#define ADCCTL_A          *((volatile u32 *)(GPIOA_BASE_ADD+0x530))            // GPIO ADC Control

/************************************************************************************************************************/

/*           PORTB REGISTERS         */
#define DATA_B(PIN)       *((volatile u32 *)(GPIOB_BASE_ADD+(1<< (PIN+2))))
#define DATA_PORT_B       *((volatile u32 *)(GPIOB_BASE_ADD+0x3FC))
#define DIR_B             *((volatile u32 *)(GPIOB_BASE_ADD+0x400))            // GPIO Direction
#define AFSEL_B           *((volatile u32 *)(GPIOB_BASE_ADD+0x420))            // GPIO Alternate Function Select
#define DR2R_B            *((volatile u32 *)(GPIOB_BASE_ADD+0x500))            // GPIO 2-mA Drive Select
#define DR4R_B            *((volatile u32 *)(GPIOB_BASE_ADD+0x504))            // GPIO 4-mA Drive Select
#define DR8R_B            *((volatile u32 *)(GPIOB_BASE_ADD+0x508))            // GPIO 8-mA Drive Select
#define ODR_B             *((volatile u32 *)(GPIOB_BASE_ADD+0x50C))            // GPIO Open Drain Select
#define PUR_B             *((volatile u32 *)(GPIOB_BASE_ADD+0x510))            // GPIO Pull-Up Select
#define PDR_B             *((volatile u32 *)(GPIOB_BASE_ADD+0x514))            // GPIO Pull-Down Select
#define DEN_B             *((volatile u32 *)(GPIOB_BASE_ADD+0x51C))            // GPIO Digital Enable
#define LOCK_B            *((volatile u32 *)(GPIOB_BASE_ADD+0x520))            // GPIO Digital Enable
#define CR_B              *((volatile u32 *)(GPIOB_BASE_ADD+0x524))            // GPIO Commit
#define AMSEL_B           *((volatile u32 *)(GPIOB_BASE_ADD+0x528))            // GPIO Analog Mode Select
#define PCTL_B            *((volatile u32 *)(GPIOB_BASE_ADD+0x52C))            // GPIO Port Control (give Alternate Function )
#define ADCCTL_B          *((volatile u32 *)(GPIOB_BASE_ADD+0x530))            // GPIO ADC Control

/************************************************************************************************************************/

/*           PORTC REGISTERS         */
#define DATA_C(PIN)       *((volatile u32 *)(GPIOC_BASE_ADD+(1<< (PIN+2))))
#define DATA_PORT_C            *((volatile u32 *)(GPIOC_BASE_ADD+0x3FC))
#define DIR_C             *((volatile u32 *)(GPIOC_BASE_ADD+0x400))            // GPIO Direction
#define AFSEL_C           *((volatile u32 *)(GPIOC_BASE_ADD+0x420))            // GPIO Alternate Function Select
#define DR2R_C            *((volatile u32 *)(GPIOC_BASE_ADD+0x500))            // GPIO 2-mA Drive Select
#define DR4R_C            *((volatile u32 *)(GPIOC_BASE_ADD+0x504))            // GPIO 4-mA Drive Select
#define DR8R_C            *((volatile u32 *)(GPIOC_BASE_ADD+0x508))            // GPIO 8-mA Drive Select
#define ODR_C             *((volatile u32 *)(GPIOC_BASE_ADD+0x50C))            // GPIO Open Drain Select
#define PUR_C             *((volatile u32 *)(GPIOC_BASE_ADD+0x510))            // GPIO Pull-Up Select
#define PDR_C             *((volatile u32 *)(GPIOC_BASE_ADD+0x514))            // GPIO Pull-Down Select
#define DEN_C             *((volatile u32 *)(GPIOC_BASE_ADD+0x51C))            // GPIO Digital Enable
#define LOCK_C            *((volatile u32 *)(GPIOC_BASE_ADD+0x520))            // GPIO Digital Enable
#define CR_C              *((volatile u32 *)(GPIOC_BASE_ADD+0x524))            // GPIO Commit
#define AMSEL_C           *((volatile u32 *)(GPIOC_BASE_ADD+0x528))            // GPIO Analog Mode Select
#define PCTL_C            *((volatile u32 *)(GPIOC_BASE_ADD+0x52C))            // GPIO Port Control (give Alternate Function )
#define ADCCTL_C          *((volatile u32 *)(GPIOC_BASE_ADD+0x530))            // GPIO ADC Control

/************************************************************************************************************************/

/*           PORTC REGISTERS         */
#define DATA_D(PIN)       *((volatile u32 *)(GPIOD_BASE_ADD+(1<< (PIN+2))))
#define DATA_PORT_D            *((volatile u32 *)(GPIOD_BASE_ADD+0x3FC))
#define DIR_D             *((volatile u32 *)(GPIOD_BASE_ADD+0x400))            // GPIO Direction
#define AFSEL_D           *((volatile u32 *)(GPIOD_BASE_ADD+0x420))            // GPIO Alternate Function Select
#define DR2R_D            *((volatile u32 *)(GPIOD_BASE_ADD+0x500))            // GPIO 2-mA Drive Select
#define DR4R_D            *((volatile u32 *)(GPIOD_BASE_ADD+0x504))            // GPIO 4-mA Drive Select
#define DR8R_D            *((volatile u32 *)(GPIOD_BASE_ADD+0x508))            // GPIO 8-mA Drive Select
#define ODR_D             *((volatile u32 *)(GPIOD_BASE_ADD+0x50C))            // GPIO Open Drain Select
#define PUR_D             *((volatile u32 *)(GPIOD_BASE_ADD+0x510))            // GPIO Pull-Up Select
#define PDR_D             *((volatile u32 *)(GPIOD_BASE_ADD+0x514))            // GPIO Pull-Down Select
#define DEN_D             *((volatile u32 *)(GPIOD_BASE_ADD+0x51C))            // GPIO Digital Enable
#define LOCK_D            *((volatile u32 *)(GPIOD_BASE_ADD+0x520))            // GPIO Digital Enable
#define CR_D              *((volatile u32 *)(GPIOD_BASE_ADD+0x524))            // GPIO Commit
#define AMSEL_D           *((volatile u32 *)(GPIOD_BASE_ADD+0x528))            // GPIO Analog Mode Select
#define PCTL_D            *((volatile u32 *)(GPIOD_BASE_ADD+0x52C))            // GPIO Port Control (give Alternate Function )
#define ADCCTL_D          *((volatile u32 *)(GPIOD_BASE_ADD+0x530))            // GPIO ADC Control

/************************************************************************************************************************/
/*           PORTA REGISTERS         */
#define DATA_E(PIN)       *((volatile u32 *)(GPIOE_BASE_ADD+(1<< (PIN+2))))
#define DATA_PORT_E            *((volatile u32 *)(GPIOE_BASE_ADD+0x3FC))
#define DIR_E             *((volatile u32 *)(GPIOE_BASE_ADD+0x400))            // GPIO Direction
#define AFSEL_E           *((volatile u32 *)(GPIOE_BASE_ADD+0x420))            // GPIO Alternate Function Select
#define DR2R_E            *((volatile u32 *)(GPIOE_BASE_ADD+0x500))            // GPIO 2-mA Drive Select
#define DR4R_E            *((volatile u32 *)(GPIOE_BASE_ADD+0x504))            // GPIO 4-mA Drive Select
#define DR8R_E            *((volatile u32 *)(GPIOE_BASE_ADD+0x508))            // GPIO 8-mA Drive Select
#define ODR_E             *((volatile u32 *)(GPIOE_BASE_ADD+0x50C))            // GPIO Open Drain Select
#define PUR_E             *((volatile u32 *)(GPIOE_BASE_ADD+0x510))            // GPIO Pull-Up Select
#define PDR_E             *((volatile u32 *)(GPIOE_BASE_ADD+0x514))            // GPIO Pull-Down Select
#define DEN_E             *((volatile u32 *)(GPIOE_BASE_ADD+0x51C))            // GPIO Digital Enable
#define LOCK_E            *((volatile u32 *)(GPIOE_BASE_ADD+0x520))            // GPIO Digital Enable
#define CR_E              *((volatile u32 *)(GPIOE_BASE_ADD+0x524))            // GPIO Commit
#define AMSEL_E           *((volatile u32 *)(GPIOE_BASE_ADD+0x528))            // GPIO Analog Mode Select
#define PCTL_E            *((volatile u32 *)(GPIOE_BASE_ADD+0x52C))            // GPIO Port Control (give Alternate Function )
#define ADCCTL_E          *((volatile u32 *)(GPIOE_BASE_ADD+0x530))            // GPIO ADC Control

/************************************************************************************************************************/
/*           PORTA REGISTERS         */
#define DATA_F(PIN)       *((volatile u32 *)(GPIOF_BASE_ADD+(1<< (PIN+2))))
#define DATA_PORT_F       *((volatile u32 *)(GPIOF_BASE_ADD+0x000+0x3FC))
#define DIR_F             *((volatile u32 *)(GPIOF_BASE_ADD+0x400))            // GPIO Direction
#define	GPIOIS_F          *((volatile u32 *)(GPIOF_BASE_ADD+0x404))
#define	GPIOIBE_F         *((volatile u32 *)(GPIOF_BASE_ADD+0x408))
#define	GPIOIM_F          *((volatile u32 *)(GPIOF_BASE_ADD+0x410))
#define	GPIOMIS_F         *((volatile u32 *)(GPIOF_BASE_ADD+0x418))
#define	GPIOICR_F         *((volatile u32 *)(GPIOF_BASE_ADD+0x41C))
#define AFSEL_F           *((volatile u32 *)(GPIOF_BASE_ADD+0x420))            // GPIO Alternate Function Select
#define DR2R_F            *((volatile u32 *)(GPIOF_BASE_ADD+0x500))            // GPIO 2-mA Drive Select
#define DR4R_F            *((volatile u32 *)(GPIOF_BASE_ADD+0x504))            // GPIO 4-mA Drive Select
#define DR8R_F            *((volatile u32 *)(GPIOF_BASE_ADD+0x508))            // GPIO 8-mA Drive Select
#define ODR_F             *((volatile u32 *)(GPIOF_BASE_ADD+0x50C))            // GPIO Open Drain Select
#define PUR_F             *((volatile u32 *)(GPIOF_BASE_ADD+0x510))            // GPIO Pull-Up Select
#define PDR_F             *((volatile u32 *)(GPIOF_BASE_ADD+0x514))            // GPIO Pull-Down Select
#define DEN_F             *((volatile u32 *)(GPIOF_BASE_ADD+0x51C))            // GPIO Digital Enable
#define LOCK_F            *((volatile u32 *)(GPIOF_BASE_ADD+0x520))            // GPIO Digital Enable
#define CR_F              *((volatile u32 *)(GPIOF_BASE_ADD+0x524))            // GPIO Commit
#define AMSEL_F           *((volatile u32 *)(GPIOF_BASE_ADD+0x528))            // GPIO Analog Mode Select
#define PCTL_F            *((volatile u32 *)(GPIOF_BASE_ADD+0x52C))            // GPIO Port Control (give Alternate Function )
#define ADCCTL_F          *((volatile u32 *)(GPIOF_BASE_ADD+0x530))            // GPIO ADC Control

/************************************************************************************************************************/


#endif
