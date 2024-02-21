 /*
 * MAIN Generated Driver File
 * 
 * @file main.c
 * 
 * @defgroup main MAIN
 * 
 * @brief This is the generated driver implementation file for the MAIN driver.
 *
 * @version MAIN Driver Version 1.0.0
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
#include "mcc_generated_files/system/system.h"

/*
    Main application
*/

void DELAY_milliseconds(uint16_t);

uint8_t state = 0;

int main(void)
{
    SYSTEM_Initialize();
    while(1)
    {
        DELAY_milliseconds(500); //Sit here and wait for 500 ms
        switch(state)
        {
            case 0:
                GP2_SetDigitalOutput();
                GP1_SetDigitalOutput();
                GP0_SetDigitalOutput();
                GP2_SetLow();
                GP1_SetLow();
                GP0_SetLow();               
                break;
            case 1:
                GP2_SetDigitalInput(); //sets the GP2 pin as High Impedance(Z)input
                GP1_SetDigitalOutput();
                GP0_SetDigitalOutput();
                GP2_SetLow();
                GP1_SetHigh(); //drive GP1 High
                GP0_SetLow();                     
                break;
            case 2:
                GP2_SetDigitalInput();
                GP1_SetDigitalOutput();
                GP0_SetDigitalOutput();
                GP2_SetLow();
                GP1_SetLow();
                GP0_SetHigh();
                break;
            case 3:
                GP2_SetDigitalOutput();
                GP1_SetDigitalOutput();
                GP0_SetDigitalInput();
                GP2_SetHigh();
                GP1_SetLow();
                GP0_SetLow();
                break;
            case 4:
                GP2_SetDigitalOutput();
                GP1_SetDigitalOutput();
                GP0_SetDigitalInput();
                GP2_SetLow();
                GP1_SetHigh();
                GP0_SetLow();
                break;
            case 5:
                GP2_SetDigitalOutput();
                GP1_SetDigitalInput();
                GP0_SetDigitalOutput();
                GP2_SetHigh();
                GP1_SetLow();
                GP0_SetLow();
                break;
            case 6:
                GP2_SetDigitalOutput();
                GP1_SetDigitalInput();
                GP0_SetDigitalOutput();
                GP2_SetLow();
                GP1_SetLow();
                GP0_SetHigh();
                state = 0;
                break;
            default:
                GP2_SetDigitalInput();
                GP1_SetDigitalInput();
                GP0_SetDigitalInput();
                GP2_SetLow();
                GP1_SetLow();
                GP0_SetLow();    
                state = 0;
        }
        ++state;
    }
}
