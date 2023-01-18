#ifndef NVIC_interface_H_
#define NVIC_interface_H_

/* interrupt Number*/

#define GPIOA_IRQ                    0   // GPIO Port A
#define GPIOB_IRQ                    1   // GPIO Port B
#define GPIOC_IRQ                    2   // GPIO Port C
#define GPIOD_IRQ                    3  // GPIO Port D
#define GPIOE_IRQ                    4  // GPIO Port E
#define UART0_IRQ                    5  // UART0 Rx and Tx
#define UART1                        6  // UART1 Rx and Tx
#define SSI0                         7  // SSI0 Rx and Tx
#define I2C0                         8  // I2C0 Master and Slave
#define PWM_FAULT                    9  // PWM Fault
#define PWM_GENERATOR0               10  // PWM Generator 0
#define PWM_GENERATOR1               11  // PWM Generator 1
#define PWM_GENERATOR2               12  // PWM Generator 2
#define QEI0                         13   // Quadrature Encoder 0
#define ADC_SEQUENCE0                14   // ADC Sequence 0
#define ADC_SEQUENCE1                15   // ADC Sequence 1
#define ADC_SEQUENCE2                16   // ADC Sequence 2
#define ADC_SEQUENCE3                17   // ADC Sequence 3
#define WATCHDOG_TIMER               18
#define TIMER0_SUBTIMER_A            19   // Timer 0 timer A
#define TIMER0_SUBTIMER_B            20   // Timer 0 timer B
#define TIMER1_SUBTIMER_A            21   // Timer 1 timer A
#define TIMER1_SUBTIMER_B            22   // Timer 1 timer B
#define TIMER2_SUBTIMER_A            23  // Timer 2 timer A
#define TIMER2_SUBTIMER_B            24   // Timer 2 timer B
#define ANALOG_COMPARATOR_0          25   // Analog Comparator 0
#define ANALOG_COMPARATOR_1          26   // Analog Comparator 1
#define SYSTEM_CONTROL               28   // System Control (PLL, OSC, BO)
#define FLASH_CONROL                 29   // FLASH Control and EEPROM Control
#define GPIOF_IRQ                    30   // GPIO Port F
#define Reserved2                    31  // 31 is Reserved not use
#define Reserved3                    32  // 32 is Reserved not use
#define UART2                        33  // UART2 Rx and Tx
#define SSI1                         34   // SSI1 Rx and Tx
#define TIMER3_SUBTIMER_A            35   // Timer 3 timer A
#define TIMER3_SUBTIMER_B            36   // Timer 3 timer B
#define I2C1                         37   // I2C1 Master and Slave
#define QEI1                         38   // Quadrature Encoder 1
#define CAN0                         39
#define CAN1                         40
#define HIBERNATE                    43  // Hibernation Module
#define USB0                         44
#define PWM_GENERATOR3               45  // PWM Generator 3
#define UDMA_SW                      46  // uDMA Software Transfer
#define UDMA_ERROR                   47  // uDMA Error
#define ADC1_SEQUENCE0               48
#define ADC1_SEQUENCE1               49
#define ADC1_SEQUENCE2               50
#define ADC1_SEQUENCE3               51
#define SSI2                         57   // SSI2 Rx and Tx
#define SSI3                         58    // SSI3 Rx and Tx
#define UART3                        58    // UART3 Rx and Tx
#define UART4                        59    // UART4 Rx and Tx
#define UART5                        60   // UART5 Rx and Tx
#define UART6                        61    // UART6 Rx and Tx
#define UART7                        62    // UART7 Rx and Tx
#define I2C2                         68    // I2C2 Master and Slave
#define I2C3                         69    // I2C3 Master and Slave
#define TIMER4_SUBTIMER_A            70    // Timer 4 timer A
#define TIMER4_SUBTIMER_B            71    // Timer 4 timer B
#define TIMER5_SUBTIMER_A            92   // Timer 5 timer A
#define TIMER5_SUBTIMER_B            93   // Timer 5 timer B
#define WIDE_TIMER0_SUBTIMER_A       94     // Wide Timer 0 timer A
#define WIDE_TIMER0_SUBTIMER_B       95   // Wide Timer 0 timer B
#define WIDE_TIMER1_SUBTIMER_A       96   // Wide Timer 1 timer A
#define WIDE_TIMER1_SUBTIMER_B       97   // Wide Timer 1 timer B
#define WIDE_TIMER2_SUBTIMER_A       98   // Wide Timer 2 timer A
#define WIDE_TIMER2_SUBTIMER_B       99   // Wide Timer 2 timer B
#define WIDE_TIMER3_SUBTIMER_A       100   // Wide Timer 3 timer A
#define WIDE_TIMER3_SUBTIMER_B       101   // Wide Timer 3 timer B
#define WIDE_TIMER4_SUBTIMER_A       102   // Wide Timer 4 timer A
#define WIDE_TIMER4_SUBTIMER_B       103   // Wide Timer 4 timer B
#define WIDE_TIMER5_SUBTIMER_A       104   // Wide Timer 5 timer A
#define WIDE_TIMER5_SUBTIMER_B       105   // Wide Timer 5 timer B
#define System_Exception             106
#define PWM1_GENERATOR_0             134
#define PWM1_GENERATOR_1             135
#define PWM1_GENERATOR_2             136
#define PWM1_GENERATOR_3             137
#define PWM1_FAULT                   138


/*
  this function enable and disable interrupts and assign interrupt Priority
  Copy_u8InterruptNum : interrupt Number that is enabled or disabled
  Copy_u8PerPriority  : Priority Number from 0 to 7 (0 is the highest Priority)
  Copy_u8InterruptStatus : 0 disable interrupt , 1 enable interrupt
   */

void IntCtrl_int(u8 Copy_u8InterruptNum, u8 Copy_u8PerPriority,u8 Copy_u8InterruptStatus);
void GPIOF_Handler(void);

#endif
