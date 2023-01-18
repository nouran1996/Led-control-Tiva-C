
#ifndef SysCtrl_cfg_H_
#define SysCtrl_cfg_H_


/*
   PWM_UNIT_CLOCK_DIVIS0R Can be:
                                            Divisor
                               0x0           /2
                               0x1           /4
                               0x2           /8
                               0x3           /16
                               0x4           /32
                               0x5           /64
                               0x6           /64
                               0x7           64 (default)

   CRYSTAL_VALUE Can be:
                           0x06   4 MHz
                           0x07   4.096 MHz
                           0x08   4.9152 MHz
                           0x09   5 MHz (USB)
                           0x0A   5.12 MHz
                           0x0B   6 MHz (USB)
                           0x0C   6.144 MHz
                           0x0D   7.3728 MHz
                           0x0E   8 MHz (USB)
                           0x0F   8.192 MHz
                           0x10   10.0 MHz (USB)
                           0x11   12.0 MHz (USB)
                           0x12   12.288 MHz
                           0x13   13.56 MHz
                           0x14   14.31818 MHz
                           0x15   16.0 MHz (USB)
                           0x16   16.384 MHz
                           0x17   18.0 MHz (USB)
                           0x18   20.0 MHz (USB)
                           0x19   24.0 MHz (USB)
                           0x1A   25.0 MHz (USB)

   OSCILLATOR_SOURCE Can be:
                           0x0          Main oscillator
                           0x1          Precision internal oscillator
                           0x2          Precision internal oscillator / 4
                           0x3          Precision internal oscillator / 4


*/

#define          PWM_UNIT_CLOCK_DIVIS0R    0x7
#define          CRYSTAL_VALUE             0x15
#define          OSCILLATOR_SOURCE         0x0

#endif





//MAIN_OSCILLATOR_ENABLE
