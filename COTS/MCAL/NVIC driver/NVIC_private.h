#ifndef NVIC_interface_H_
#define NVIC_private_H_


#define CORTEXM4_PERI_BASE_ADDRESS  0xE000E000

/* system control block registers */

#define ACTLR            *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x008) )
#define CPUID            *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0xD00) )
#define INTCTRL          *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0xD04) )
#define VTABLE           *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0xD08) )
#define APINT            *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0xD0C) )
#define SYSCTRL          *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0xD10) )
#define CFGCTRL          *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0xD14) )
#define SYSPRI1          *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0xD18) )
#define SYSPRI2          *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0xD1C) )
#define SYSPRI3          *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0xD20) )
#define SYSHNDCTRL       *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0xD24) )
#define FAULTSTAT        *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0xD28) )
#define HFAULTSTAT       *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0xD2C) )
#define MMADDR           *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0xD34) )
#define FAULTADDR        *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0xD38) )

/************************************************************************************/

/* Nested Vectored Interrupt Controller registers */

#define EN0             *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x100) )
#define EN1             *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x104) )
#define EN2             *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x108) )
#define EN3             *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x10C) )
#define EN4             *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x110) )
#define DIS0            *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x180) )
#define DIS1            *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x184) )
#define DIS2            *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x188) )
#define DIS3            *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x18C) )
#define DIS4            *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x190) )
#define PEND0           *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x200) )
#define PEND1           *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x204) )
#define PEND2           *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x208) )
#define PEND3           *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x20C) )
#define PEND4           *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x210) )
#define UNPEND0         *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x280) )
#define UNPEND1         *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x284) )
#define UNPEND2         *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x288) )
#define UNPEND3         *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x28C) )
#define UNPEND4         *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x290) )
#define ACTIVE0         *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x300) )
#define ACTIVE1         *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x304) )
#define ACTIVE2         *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x308) )
#define ACTIVE3         *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x30C) )
#define ACTIVE4         *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x310) )
#define PRI0            *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x400) )
#define PRI1            *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x404) )
#define PRI2            *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x408) )
#define PRI3            *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x40C) )
#define PRI4            *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x410) )
#define PRI5            *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x414) )
#define PRI6            *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x418) )
#define PRI7            *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x41C) )
#define PRI8            *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x420) )
#define PRI9            *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x424) )
#define PRI10           *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x428) )
#define PRI11           *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x42C) )
#define PRI12           *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x430) )
#define PRI13           *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x434) )
#define PRI14           *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x438) )
#define PRI15           *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x43C) )
#define PRI16           *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x440) )
#define PRI17           *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x444) )
#define PRI18           *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x448) )
#define PRI19           *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x44C) )
#define PRI20           *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x450) )
#define PRI21           *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x454) )
#define PRI22           *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x458) )
#define PRI23           *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x45C) )
#define PRI24           *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x460) )
#define PRI25           *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x464) )
#define PRI26           *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x468) )
#define PRI27           *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x46C) )
#define PRI28           *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x470) )
#define PRI29           *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x474) )
#define PRI30           *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x478) )
#define PRI31           *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x47C) )
#define PRI32           *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x480) )
#define PRI33           *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x484) )
#define PRI34           *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0x488) )
#define SWTRIG          *((volatile u32 *)(CORTEXM4_PERI_BASE_ADDRESS+0xF00) )

/* group and sub-group */

#define         GROUPS_8_SUB_1      0x200         // 0x4
#define         GROUPS_4_SUB_2      0x280         // 0x5
#define         GROUPS_2_SUB_4      0x300         // 0x6
#define         GROUPS_1_SUB_8      0x380         // 0x7
#endif
