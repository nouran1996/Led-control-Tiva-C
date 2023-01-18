#ifndef SysTick_MCU_HW_private_H_
#define SysTick_MCU_HW_private_H_

/* GPIO Port (APB) base */



#define SYSTICK_BASE_ADD             0xE000E000

/*           System Control Register         */

#define STCTRL             *((volatile u32 *)(SYSTICK_BASE_ADD+0x010))            //  SysTick Control and Status Register
#define STRELOAD           *((volatile u32 *)(SYSTICK_BASE_ADD+0x014))            //  SysTick Reload Value Register
#define STCURRENT          *((volatile u32 *)(SYSTICK_BASE_ADD+0x018))            //  SysTick Current Value Register


/************************************************************************************************************************/



#endif
