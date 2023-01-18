#ifndef SysCtrl_MCU_HW_private_H_
#define SysCtrl_MCU_HW_private_H_

/* GPIO Port (APB) base */



#define SYSCTRL_BASE_ADD             0x400FE000

/*           System Control Register         */
#define PBORCTL           *((volatile u32 *)(SYSCTRL_BASE_ADD+0x030))            // Brown-Out Reset Control
#define RIS               *((volatile u32 *)(SYSCTRL_BASE_ADD+0x050))            // Raw Interrupt Status
#define IMC               *((volatile u32 *)(SYSCTRL_BASE_ADD+0x054))            // Interrupt Mask Control
#define MISC              *((volatile u32 *)(SYSCTRL_BASE_ADD+0x058))            // Masked Interrupt Status and Clear
#define RESC              *((volatile u32 *)(SYSCTRL_BASE_ADD+0x05C))            // Reset Cause
#define RCC               *((volatile u32 *)(SYSCTRL_BASE_ADD+0x060))            // Run-Mode Clock Configuration
#define GPIOHBCTL         *((volatile u32 *)(SYSCTRL_BASE_ADD+0x06C))            // GPIO High-Performance Bus Control
#define RCC2              *((volatile u32 *)(SYSCTRL_BASE_ADD+0x070))            // Run-Mode Clock Configuration 2
#define MOSCCTL           *((volatile u32 *)(SYSCTRL_BASE_ADD+0x07C))            // Main Oscillator Control
#define PIOSCCAL          *((volatile u32 *)(SYSCTRL_BASE_ADD+0x150))            // Precision Internal Oscillator Calibration
#define PIOSCSTAT         *((volatile u32 *)(SYSCTRL_BASE_ADD+0x154))            // Precision Internal Oscillator Statistics
#define PLLFREQ0          *((volatile u32 *)(SYSCTRL_BASE_ADD+0x160))            // PLL Frequency 0
#define PLLFREQ1          *((volatile u32 *)(SYSCTRL_BASE_ADD+0x164))            // PLL Frequency 1
#define PLLSTAT           *((volatile u32 *)(SYSCTRL_BASE_ADD+0x168))            // PLL Status
#define PPWD              *((volatile u32 *)(SYSCTRL_BASE_ADD+0x300))            // Watchdog Timer Peripheral Present
#define PPTIMER           *((volatile u32 *)(SYSCTRL_BASE_ADD+0x304))            // 16/32-Bit General-Purpose Timer Peripheral Present
#define PPGPIO            *((volatile u32 *)(SYSCTRL_BASE_ADD+0x308))            // General-Purpose Input/Output Peripheral Present
#define PPPWM             *((volatile u32 *)(SYSCTRL_BASE_ADD+0x340))            // Pulse Width Modulator Peripheral Present
#define SRWD              *((volatile u32 *)(SYSCTRL_BASE_ADD+0x500))            // Watchdog Timer Software Reset
#define SRTIMER           *((volatile u32 *)(SYSCTRL_BASE_ADD+0x504))            // 6/32-Bit General-Purpose Timer Software Reset
#define SRGPIO            *((volatile u32 *)(SYSCTRL_BASE_ADD+0x508))            // General-Purpose Input/Output Software Reset
#define SRPWM             *((volatile u32 *)(SYSCTRL_BASE_ADD+0x540))            // Pulse Width Modulator Software Reset
#define RCGCWD            *((volatile u32 *)(SYSCTRL_BASE_ADD+0x600))            //16/32-Bit General-Purpose Timer Run Mode Clock Gating Control
#define RCGCTIMER         *((volatile u32 *)(SYSCTRL_BASE_ADD+0x604))            // Watchdog Timer Run Mode Clock Gating Control
#define RCGCGPIO          *((volatile u32 *)(SYSCTRL_BASE_ADD+0x608))            //General-Purpose Input/Output Run Mode Clock Gating Control
#define RCGCPWM           *((volatile u32 *)(SYSCTRL_BASE_ADD+0x640))            // PWM Run Mode Clock Gating Control
/*#define                   *((volatile u32 *)(SYSCTRL_BASE_ADD+0x508))            //
#define                   *((volatile u32 *)(SYSCTRL_BASE_ADD+0x50C))            //
#define                   *((volatile u32 *)(SYSCTRL_BASE_ADD+0x510))            //
#define                   *((volatile u32 *)(SYSCTRL_BASE_ADD+0x514))            //
#define                   *((volatile u32 *)(SYSCTRL_BASE_ADD+0x51C))            //
#define                   *((volatile u32 *)(SYSCTRL_BASE_ADD+0x520))
#define                   *((volatile u32 *)(SYSCTRL_BASE_ADD+0x524))            //
#define                   *((volatile u32 *)(SYSCTRL_BASE_ADD+0x528))            //
#define                   *((volatile u32 *)(SYSCTRL_BASE_ADD+0x52C))            //
#define                   *((volatile u32 *)(SYSCTRL_BASE_ADD+0x530))            //

/************************************************************************************************************************/



#endif
