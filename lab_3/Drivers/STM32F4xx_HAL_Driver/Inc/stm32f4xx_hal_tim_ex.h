/**
  @Generated PIC24 / dsPIC33 / PIC32MM MCUs Source File

  @Company:
    Microchip Technology Inc.

  @File Name:
    clock.c

  @Summary:
    This is the clock.c file generated using PIC24 / dsPIC33 / PIC32MM MCUs

  @Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC24 / dsPIC33 / PIC32MM MCUs - 1.171.4
        Device            :  dsPIC33CK256MP508
    The generated drivers are tested against the following:
        Compiler          :  XC16 v2.10
        MPLAB             :  MPLAB X v6.05
*/

/*
    (c) 2020 Microchip Technology Inc. and its subsidiaries. You may use this
    software and any derivatives exclusively with Microchip products.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION
    WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.

    MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE
    TERMS.
*/

#include <stdint.h>
#include "xc.h"
#include "clock.h"

void CLOCK_Initialize(void)
{
    // FRCDIV FRC/1; PLLPRE 1; DOZE 1:8; DOZEN disabled; ROI disabled; 
    CLKDIV = 0x3001;
    // PLLFBDIV 150; 
    PLLFBD = 0x96;
    // TUN Center frequency; 
    OSCTUN = 0x00;
    // POST1DIV 1:4; VCODIV FVCO/4; POST2DIV 1:1; 
    PLLDIV = 0x41;
    // APLLEN disabled; FRCSEL FRC; APLLPRE 1:1; 
    ACLKCON1 = 0x101;
    // APLLFBDIV 150; 
    APLLFBD1 = 0x96;
    // APOST1DIV 1:4; APOST2DIV 1:1; AVCODIV FVCO/4; 
    APLLDIV1 = 0x41;
    // CANCLKEN disabled; CANCLKSEL No Clock Selected; CANCLKDIV Divide by 1; 
    CANCLKCON = 0x00;
    // ROEN disabled; ROSWEN disabled; ROSLP disabled; ROSEL FOSC; ROOUT disabled; ROSIDL disabled; 
    REFOCONL = 0x00;
    // RODIV 0; 
    REFOCONH = 0x00;
    // ROTRIM 0; 
    REFOTRIMH = 0x00;
    // IOLOCK disabled; 
    RPCON = 0x00;
    // PMDLOCK disabled; 
    PMDCON = 0x00;
    // ADC1MD enabled; T1MD enabled; U2MD enabled; U1MD enabled; SPI2MD enabled; SPI1MD enabled; QEI1MD enabled; C1MD enabled; PWMMD enabled; I2C1MD enabled; 
    PMD1 = 0x00;
    // CCP2MD enabled; CCP1MD enabled; CCP4MD enabled; CCP3MD enabled; CCP7MD enabled; CCP8MD enabled; CCP5MD enabled; CCP6MD enabled; CCP9MD enabled; 
    PMD2 = 0x00;
    // I2C3MD enabled; PMPMD enabled; U3MD enabled; QEI2MD enabled; CRCMD enabled; I2C2MD enabled; 
    PMD3 = 0x00;
    // REFOMD enabled; 
    PMD4 = 0x00;
    // DMA1MD enabled; SPI3MD enabled; DMA2MD enabled; DMA3MD enabled; DMA0MD enabled; 
    PMD6 = 0x00;
    // CMP3MD enabled; PTGMD enabled; CMP1MD enabled; CMP2MD enabled; 
    PMD7 = 0x00;
    // DMTMD enabled; CLC3MD enabled; OPAMPMD enabled; BIASMD enabled; CLC4MD enabled; SENT2MD enabled; SENT1MD enabled; CLC1MD enabled; CLC2MD enabled; 
    PMD8 = 0x00;
    // CF no clock failure; NOSC FRCDIV; CLKLOCK unlocked; OSWEN Switch is Complete; 
    __builtin_write_OSCCONH((uint8_t) (0x07));
    __builtin_write_OSCCONL((uint8_t) (0x00));
}

bool CLOCK_AuxPllLockStatusGet()
{
    return ACLKCON1bits.APLLCK;
}
                                                                                                                                                                                            /**
  System Interrupts Generated Driver File 

  @Company:
    Microchip Technology Inc.

  @File Name:
    interrupt_manager.h

  @Summary:
    This is the generated driver implementation file for setting up the
    interrupts using PIC24 / dsPIC33 / PIC32MM MCUs

  @Description:
    This source file provides implementations for PIC24 / dsPIC33 / PIC32MM MCUs interrupts.
    Generation Information : 
        Product Revision  :  PIC24 / dsPIC33 / PIC32MM MCUs - 1.171.4
        Device            :  dsPIC33CK256MP508
    The generated drivers are tested against the following:
        Compiler          :  XC16 v2.10
        MPLAB             :  MPLAB X v6.05
*/
/*
    (c) 2020 Microchip Technology Inc. and its subsidiaries. You may use this
    software and any derivatives exclusively with Microchip products.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION
    WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.

    MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE
    TERMS.
*/

/**
    Section: Includes
*/
#include <xc.h>

/**
    void INTERRUPT_Initialize (void)
*/
void INTERRUPT_Initialize (void)
{
    //    CNEI: Change Notification E
    //    Priority: 1
        IPC19bits.CNEIP = 1;
    //    CNBI: Change Notification B
    //    Priority: 1
        IPC0bits.CNBIP = 1;
    //    UEVTI: UART1 Event
    //    Priority: 1
        IPC47bits.U1EVTIP = 1;
    //    UTXI: UART1 TX
    //    Priority: 1
        IPC3bits.U1TXIP = 1;
    //    UEI: UART1 Error
    //    Priority: 1
        IPC12bits.U1EIP = 1;
    //    URXI: UART1 RX
    //    Priority: 1
        IPC2bits.U1RXIP = 1;
    //    ADCAN24: ADC AN24 Convert Done
    //    Priority: 1
        IPC48bits.ADCAN24IP = 1;
    //    ADCAN25: ADC AN25 Convert Done
    //    Priority: 1
        IPC48bits.ADCAN25IP = 1;
    //    INT0I: External Interrupt 0
    //    Priority: 1
        IPC0bits.INT0IP = 1;
    //    INT1I: External Interrupt 1
    //    Priority: 1
        IPC3bits.INT1IP = 1;
    //    MICI: I2C1 Master Event
    //    Priority: 1
        IPC4bits.MI2C1IP = 1;
    //    SICI: I2C1 Slave Event
    //    Priority: 1
        IPC4bits.SI2C1IP = 1;
    //    TI: Timer 1
    //    Priority: 1
        IPC0bits.T1IP = 1;
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  /**
  System Interrupts Generated Driver File 

  @Company:
    Microchip Technology Inc.

  @File Name:
    interrupt_manager.h

  @Summary:
    This is the generated driver implementation file for setting up the
    interrupts using PIC24 / dsPIC33 / PIC32MM MCUs

  @Description:
    This source file provides implementations for PIC24 / dsPIC33 / PIC32MM MCUs interrupts.
    Generation Information : 
        Product Revision  :  PIC24 / dsPIC33 / PIC32MM MCUs - 1.171.4
        Device            :  dsPIC33CK256MP508
    The generated drivers are tested against the following:
        Compiler          :  XC16 v2.10
        MPLAB             :  MPLAB X v6.05
*/
/*
    (c) 2020 Microchip Technology Inc. and its subsidiaries. You may use this
    software and any derivatives exclusively with Microchip products.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION
    WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.

    MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE
    TERMS.
*/

#ifndef _INTERRUPT_MANAGER_H
#define _INTERRUPT_MANAGER_H

/**
  @Summary
    Initializes the interrupt priorities of the dsPIC33CK256MP508

  @Description
    This routine sets the interrupt priorities of the modules that have been configured
    for the dsPIC33CK256MP508

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    void SYSTEM_Initialize(void)
    {
        // Other initializers are called from this function
        INTERRUPT_Initialize ();
    }
    </code>

*/
void INTERRUPT_Initialize(void);

/**
  @Summary
    Enables global interrupts of the dsPIC33CK256MP508

  @Description
    This routine enables the global interrupt bit for the dsPIC33CK256MP508

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    void SYSTEM_Initialize(void)
    {
        // Other initializers are called from this function
        INTERRUPT_GlobalEnable ();
    }
    </code>

*/
inline static void INTERRUPT_GlobalEnable(void)
{
    __builtin_enable_interrupts();
}

/**
  @Summary
    Disables global interrupts of the dsPIC33CK256MP508

  @Description
    This routine disables the global interrupt bit for the dsPIC33CK256MP508

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    void SYSTEM_Initialize(void)
    {
        // Other initializers are called from this function
        INTERRUPT_GlobalDisable ();
    }
    </code>

*/
inline static void INTERRUPT_GlobalDisable(void)
{
    __builtin_disable_interrupts();
}

/**
  @Summary
    Returns the interrupt vector number of the interrupt which is pending.

  @Description
    This routine returns the interrupt vector number of the interrupt which is pending.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
        uint16_t ivrNum;
        ivrNum = INTERRUPT_VectorNumberGet();
    </code>

*/
inline static uint16_t INTERRUPT_VectorNumberGet(void)
{
    return _VECNUM; 
}

#endif                                                                                                   /**
  System Traps Generated Driver File 

  @Company:
    Microchip Technology Inc.

  @File Name:
    traps.h

  @Summary:
    This is the generated driver implementation file for handling traps
    using PIC24 / dsPIC33 / PIC32MM MCUs

  @Description:
    This source file provides implementations for PIC24 / dsPIC33 / PIC32MM MCUs traps.
    Generation Information : 
        Product Revision  :  PIC24 / dsPIC33 / PIC32MM MCUs - 1.171.4
        Device            :  dsPIC33CK256MP508
    The generated drivers are tested against the following:
        Compiler          :  XC16 v2.10
        MPLAB             :  MPLAB X v6.05
*/
/*
    (c) 2020 Microchip Technology Inc. and its subsidiaries. You may use this
    software and any derivatives exclusively with Microchip products.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION
    WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.

    MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE
    TERMS.
*/

/**
    Section: Includes
*/
#include <xc.h>
#include "traps.h"

#define ERROR_HANDLER __attribute__((interrupt, no_auto_psv, keep, section("error_handler")))
#define FAILSAFE_STACK_GUARDSIZE 8

/**
 * a private place to store the error code if we run into a severe error
 */
static uint16_t TRAPS_error_code = -1;

/**
 * Halts 
 * 
 * @param code error code
 */
void __attribute__((weak)) TRAPS_halt_on_error(uint16_t code)
{
    TRAPS_error_code = code;
#ifdef __DEBUG    
    __builtin_software_breakpoint();
    /* If we are in debug mode, cause a software breakpoint in the debugger */
#endif
    while(1);
    
}

/**
 * Sets the stack pointer to a backup area of memory, in case we run into
 * a stack error (in which case we can't really trust the stack pointer)
 */
inline static void use_failsafe_stack(void)
{
    static uint8_t failsafe_stack[32];
    asm volatile (
        "   mov    %[pstack], W15\n"
        :
        : [pstack]"r"(failsafe_stack)
    );
/* Controls where the stack pointer limit is, relative to the end of the
 * failsafe stack
 */    
    SPLIM = (uint16_t)(((uint8_t *)failsafe_stack) + sizeof(failsafe_stack) 
            - FAILSAFE_STACK_GUARDSIZE);
}


/** Oscillator Fail Trap vector**/
void ERROR_HANDLER _OscillatorFail(void)
{
    INTCON1bits.OSCFAIL = 0;  //Clear the trap flag
    TRAPS_halt_on_error(TRAPS_OSC_FAIL);
}
/** Stack Error Trap Vector**/
void ERROR_HANDLER _StackError(void)
{
    /* We use a failsafe stack: the presence of a stack-pointer error
     * means that we cannot trust the stack to operate correctly unless
     * we set the stack pointer to a safe place.
     */
    use_failsafe_stack(); 
    INTCON1bits.STKERR = 0;  //Clear the trap flag
    TRAPS_halt_on_error(TRAPS_STACK_ERR);
}
/** Address error Trap vector**/
void ERROR_HANDLER _AddressError(void)
{
    INTCON1bits.ADDRERR = 0;  //Clear the trap flag
    TRAPS_halt_on_error(TRAPS_ADDRESS_ERR);
}
/** Math Error Trap vector**/
void ERROR_HANDLER _MathError(void)
{
    INTCON1bits.MATHERR = 0;  //Clear the trap flag
    TRAPS_halt_on_error(TRAPS_MATH_ERR);
}
/** Generic Hard Trap vector**/
void ERROR_HANDLER _HardTrapError(void)
{
    INTCON4bits.SGHT = 0;  //Clear the trap flag
    TRAPS_halt_on_error(TRAPS_HARD_ERR);
}
/** Generic Soft Trap vector**/
void ERROR_HANDLER _SoftTrapError(void)
{
    if(INTCON3bits.NAE)
    {
      INTCON3bits.NAE = 0;  //Clear the trap flag
      TRAPS_halt_on_error(TRAPS_NVM_ERR);
    }

    if(INTCON3bits.DOOVR)
    {
      INTCON3bits.DOOVR = 0;  //Clear the trap flag
      TRAPS_halt_on_error(TRAPS_DOOVR_ERR);
    }

    if