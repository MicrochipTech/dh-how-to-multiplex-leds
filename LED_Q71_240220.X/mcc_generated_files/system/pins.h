/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.1.0
*/

/*
© [2024] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RB0 aliases
#define GP0_TRIS                 TRISBbits.TRISB0
#define GP0_LAT                  LATBbits.LATB0
#define GP0_PORT                 PORTBbits.RB0
#define GP0_WPU                  WPUBbits.WPUB0
#define GP0_OD                   ODCONBbits.ODCB0
#define GP0_ANS                  ANSELBbits.ANSELB0
#define GP0_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define GP0_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define GP0_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define GP0_GetValue()           PORTBbits.RB0
#define GP0_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define GP0_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define GP0_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define GP0_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define GP0_SetPushPull()        do { ODCONBbits.ODCB0 = 0; } while(0)
#define GP0_SetOpenDrain()       do { ODCONBbits.ODCB0 = 1; } while(0)
#define GP0_SetAnalogMode()      do { ANSELBbits.ANSELB0 = 1; } while(0)
#define GP0_SetDigitalMode()     do { ANSELBbits.ANSELB0 = 0; } while(0)
   
// get/set RB1 aliases
#define GP1_TRIS                 TRISBbits.TRISB1
#define GP1_LAT                  LATBbits.LATB1
#define GP1_PORT                 PORTBbits.RB1
#define GP1_WPU                  WPUBbits.WPUB1
#define GP1_OD                   ODCONBbits.ODCB1
#define GP1_ANS                  ANSELBbits.ANSELB1
#define GP1_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define GP1_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define GP1_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define GP1_GetValue()           PORTBbits.RB1
#define GP1_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define GP1_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define GP1_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define GP1_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define GP1_SetPushPull()        do { ODCONBbits.ODCB1 = 0; } while(0)
#define GP1_SetOpenDrain()       do { ODCONBbits.ODCB1 = 1; } while(0)
#define GP1_SetAnalogMode()      do { ANSELBbits.ANSELB1 = 1; } while(0)
#define GP1_SetDigitalMode()     do { ANSELBbits.ANSELB1 = 0; } while(0)
   
// get/set RB2 aliases
#define GP2_TRIS                 TRISBbits.TRISB2
#define GP2_LAT                  LATBbits.LATB2
#define GP2_PORT                 PORTBbits.RB2
#define GP2_WPU                  WPUBbits.WPUB2
#define GP2_OD                   ODCONBbits.ODCB2
#define GP2_ANS                  ANSELBbits.ANSELB2
#define GP2_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define GP2_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define GP2_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define GP2_GetValue()           PORTBbits.RB2
#define GP2_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define GP2_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define GP2_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define GP2_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define GP2_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define GP2_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define GP2_SetAnalogMode()      do { ANSELBbits.ANSELB2 = 1; } while(0)
#define GP2_SetDigitalMode()     do { ANSELBbits.ANSELB2 = 0; } while(0)
   
/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);


#endif // PINS_H
/**
 End of File
*/