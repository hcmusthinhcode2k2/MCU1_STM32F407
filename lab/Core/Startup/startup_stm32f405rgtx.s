#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a pre- and a post- target defined where you can add customization code.
#
# This makefile implements macros and targets common to all configurations.
#
# NOCDDL


# Building and Cleaning subprojects are done by default, but can be controlled with the SUB
# macro. If SUB=no, subprojects will not be built or cleaned. The following macro
# statements set BUILD_SUB-CONF and CLEAN_SUB-CONF to .build-reqprojects-conf
# and .clean-reqprojects-conf unless SUB has the value 'no'
SUB_no=NO
SUBPROJECTS=${SUB_${SUB}}
BUILD_SUBPROJECTS_=.build-subprojects
BUILD_SUBPROJECTS_NO=
BUILD_SUBPROJECTS=${BUILD_SUBPROJECTS_${SUBPROJECTS}}
CLEAN_SUBPROJECTS_=.clean-subprojects
CLEAN_SUBPROJECTS_NO=
CLEAN_SUBPROJECTS=${CLEAN_SUBPROJECTS_${SUBPROJECTS}}


# Project Name
PROJECTNAME=7SEGMENTS_TIMER_MINIPROJECT.X

# Active Configuration
DEFAULTCONF=default
CONF=${DEFAULTCONF}

# All Configurations
ALLCONFS=default 


# build
.build-impl: .build-pre
	${MAKE} -f nbproject/Makefile-${CONF}.mk SUBPROJECTS=${SUBPROJECTS} .build-conf


# clean
.clean-impl: .clean-pre
	${MAKE} -f nbproject/Makefile-${CONF}.mk SUBPROJECTS=${SUBPROJECTS} .clean-conf

# clobber
.clobber-impl: .clobber-pre .depcheck-impl
	    ${MAKE} SUBPROJECTS=${SUBPROJECTS} CONF=default clean



# all
.all-impl: .all-pre .depcheck-impl
	    ${MAKE} SUBPROJECTS=${SUBPROJECTS} CONF=default build



# dependency checking support
.depcheck-impl:
#	@echo "# This code depends on make tool being used" >.dep.inc
#	@if [ -n "${MAKE_VERSION}" ]; then \
#	    echo "DEPFILES=\$$(wildcard \$$(addsuffix .d, \$${OBJECTFILES}))" >>.dep.inc; \
#	    echo "ifneq (\$${DEPFILES},)" >>.dep.inc; \
#	    echo "include \$${DEPFILES}" >>.dep.inc; \
#	    echo "endif" >>.dep.inc; \
#	else \
#	    echo ".KEEP_STATE:" >>.dep.inc; \
#	    echo ".KEEP_STATE_FILE:.make.state.\$${CONF}" >>.dep.inc; \
#	fi
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       <?xml version="1.0" encoding="UTF-8"?>
<configurationDescriptor version="65">
  <projectmakefile>Makefile</projectmakefile>
  <defaultConf>0</defaultConf>
  <confs>
    <conf name="default" type="2">
      <platformToolSN>:=MPLABComm-USB-Microchip:=&lt;vid>04D8:=&lt;pid>810B:=&lt;rev>0100:=&lt;man>Microchip Technology Incorporated:=&lt;prod>MPLAB PKoB 4:=&lt;sn>BUR215118055:=&lt;drv>x:=&lt;xpt>b:=end</platformToolSN>
      <languageToolchainDir>C:\Program Files\Microchip\xc16\v2.10\bin</languageToolchainDir>
      <mdbdebugger version="1">
        <placeholder1>place holder 1</placeholder1>
        <placeholder2>place holder 2</placeholder2>
      </mdbdebugger>
      <runprofile version="6">
        <args></args>
        <rundir></rundir>
        <buildfirst>true</buildfirst>
        <console-type>0</console-type>
        <terminal-type>0</terminal-type>
        <remove-instrumentation>0</remove-instrumentation>
        <environment>
        </environment>
      </runprofile>
    </conf>
  </confs>
</configurationDescriptor>
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     /**
  WATCHDOG Generated Driver File

  @Company
    Microchip Technology Inc.

  @File Name
    watchdog.h

  @Summary
    This is the generated driver implementation file for the WATCHDOG driver using PIC24 / dsPIC33 / PIC32MM MCUs

  @Description
    This header file provides implementations for driver APIs for WATCHDOG.
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

#ifndef WATCHDOG_H
#define	WATCHDOG_H

/**
  Section: Type defines
 */ 
#define WATCHDOG_CLR_KEY 0x5743

/**
 * Enables Watch Dog Timer (WDT) using the software bit.
 * @example
 * <code>
 * WATCHDOG_TimerSoftwareEnable();
 * </code>
 */
inline static void WATCHDOG_TimerSoftwareEnable(void)
{
    WDTCONLbits.ON = 1;
}

/**
 * Disables Watch Dog Timer (WDT) using the software bit.
 * @example
 * <code>
 * WATCHDOG_TimerSoftwareDisable();
 * </code>
 */
inline static void WATCHDOG_TimerSoftwareDisable(void)
{
    WDTCONLbits.ON = 0;
}

/**
 * Clears the Watch Dog Timer (WDT).
 * @example
 * <code>
 * WATCHDOG_TimerClear();
 * </code>
 */
inline static void WATCHDOG_TimerClear(void)
{
    WDTCONH = WATCHDOG_CLR_KEY;
}

#endif	/* WATCHDOG_H */
/**
 End of File
*/                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  /**
  @Generated PIC24 / dsPIC33 / PIC32MM MCUs Source File

  @Company:
    Microchip Technology Inc.

  @File Name:
    mcc.c

  @Summary:
    This is the mcc.c file generated using PIC24 / dsPIC33 / PIC32MM MCUs

  @Description:
    The configuration contents of this file are moved to system.c and this file will be removed in future MCC releases. 
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
 End of File
*/                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  /**
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

    if(INTCON3bits.APLL)
    {
      INTCON3bits.APLL = 0;  //Clear the trap flag
      TRAPS_halt_on_error(TRAPS_APLL_ERR);
    }

    while(1);
}


                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 