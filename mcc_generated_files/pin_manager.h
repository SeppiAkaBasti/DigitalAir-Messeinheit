/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC18F47K40
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above
        MPLAB 	          :  MPLAB X 5.45	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set GSCKRGB aliases
#define GSCKRGB_TRIS                 TRISAbits.TRISA0
#define GSCKRGB_LAT                  LATAbits.LATA0
#define GSCKRGB_PORT                 PORTAbits.RA0
#define GSCKRGB_WPU                  WPUAbits.WPUA0
#define GSCKRGB_OD                   ODCONAbits.ODCA0
#define GSCKRGB_ANS                  ANSELAbits.ANSELA0
#define GSCKRGB_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define GSCKRGB_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define GSCKRGB_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define GSCKRGB_GetValue()           PORTAbits.RA0
#define GSCKRGB_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define GSCKRGB_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define GSCKRGB_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define GSCKRGB_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define GSCKRGB_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define GSCKRGB_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define GSCKRGB_SetAnalogMode()      do { ANSELAbits.ANSELA0 = 1; } while(0)
#define GSCKRGB_SetDigitalMode()     do { ANSELAbits.ANSELA0 = 0; } while(0)

// get/set XBLNK aliases
#define XBLNK_TRIS                 TRISAbits.TRISA1
#define XBLNK_LAT                  LATAbits.LATA1
#define XBLNK_PORT                 PORTAbits.RA1
#define XBLNK_WPU                  WPUAbits.WPUA1
#define XBLNK_OD                   ODCONAbits.ODCA1
#define XBLNK_ANS                  ANSELAbits.ANSELA1
#define XBLNK_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define XBLNK_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define XBLNK_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define XBLNK_GetValue()           PORTAbits.RA1
#define XBLNK_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define XBLNK_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define XBLNK_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define XBLNK_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define XBLNK_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define XBLNK_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define XBLNK_SetAnalogMode()      do { ANSELAbits.ANSELA1 = 1; } while(0)
#define XBLNK_SetDigitalMode()     do { ANSELAbits.ANSELA1 = 0; } while(0)

// get/set GSLAT aliases
#define GSLAT_TRIS                 TRISAbits.TRISA2
#define GSLAT_LAT                  LATAbits.LATA2
#define GSLAT_PORT                 PORTAbits.RA2
#define GSLAT_WPU                  WPUAbits.WPUA2
#define GSLAT_OD                   ODCONAbits.ODCA2
#define GSLAT_ANS                  ANSELAbits.ANSELA2
#define GSLAT_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define GSLAT_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define GSLAT_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define GSLAT_GetValue()           PORTAbits.RA2
#define GSLAT_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define GSLAT_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define GSLAT_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define GSLAT_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define GSLAT_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define GSLAT_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define GSLAT_SetAnalogMode()      do { ANSELAbits.ANSELA2 = 1; } while(0)
#define GSLAT_SetDigitalMode()     do { ANSELAbits.ANSELA2 = 0; } while(0)

// get/set LED_Hello aliases
#define LED_Hello_TRIS                 TRISAbits.TRISA7
#define LED_Hello_LAT                  LATAbits.LATA7
#define LED_Hello_PORT                 PORTAbits.RA7
#define LED_Hello_WPU                  WPUAbits.WPUA7
#define LED_Hello_OD                   ODCONAbits.ODCA7
#define LED_Hello_ANS                  ANSELAbits.ANSELA7
#define LED_Hello_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define LED_Hello_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define LED_Hello_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define LED_Hello_GetValue()           PORTAbits.RA7
#define LED_Hello_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define LED_Hello_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define LED_Hello_SetPullup()          do { WPUAbits.WPUA7 = 1; } while(0)
#define LED_Hello_ResetPullup()        do { WPUAbits.WPUA7 = 0; } while(0)
#define LED_Hello_SetPushPull()        do { ODCONAbits.ODCA7 = 0; } while(0)
#define LED_Hello_SetOpenDrain()       do { ODCONAbits.ODCA7 = 1; } while(0)
#define LED_Hello_SetAnalogMode()      do { ANSELAbits.ANSELA7 = 1; } while(0)
#define LED_Hello_SetDigitalMode()     do { ANSELAbits.ANSELA7 = 0; } while(0)

// get/set RB2 procedures
#define RB2_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define RB2_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define RB2_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define RB2_GetValue()              PORTBbits.RB2
#define RB2_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define RB2_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define RB2_SetPullup()             do { WPUBbits.WPUB2 = 1; } while(0)
#define RB2_ResetPullup()           do { WPUBbits.WPUB2 = 0; } while(0)
#define RB2_SetAnalogMode()         do { ANSELBbits.ANSELB2 = 1; } while(0)
#define RB2_SetDigitalMode()        do { ANSELBbits.ANSELB2 = 0; } while(0)

// get/set RB3 procedures
#define RB3_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define RB3_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define RB3_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define RB3_GetValue()              PORTBbits.RB3
#define RB3_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define RB3_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define RB3_SetPullup()             do { WPUBbits.WPUB3 = 1; } while(0)
#define RB3_ResetPullup()           do { WPUBbits.WPUB3 = 0; } while(0)
#define RB3_SetAnalogMode()         do { ANSELBbits.ANSELB3 = 1; } while(0)
#define RB3_SetDigitalMode()        do { ANSELBbits.ANSELB3 = 0; } while(0)

// get/set RC0 procedures
#define RC0_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define RC0_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define RC0_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define RC0_GetValue()              PORTCbits.RC0
#define RC0_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define RC0_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define RC0_SetPullup()             do { WPUCbits.WPUC0 = 1; } while(0)
#define RC0_ResetPullup()           do { WPUCbits.WPUC0 = 0; } while(0)
#define RC0_SetAnalogMode()         do { ANSELCbits.ANSELC0 = 1; } while(0)
#define RC0_SetDigitalMode()        do { ANSELCbits.ANSELC0 = 0; } while(0)

// get/set RC1 procedures
#define RC1_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define RC1_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define RC1_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define RC1_GetValue()              PORTCbits.RC1
#define RC1_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define RC1_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define RC1_SetPullup()             do { WPUCbits.WPUC1 = 1; } while(0)
#define RC1_ResetPullup()           do { WPUCbits.WPUC1 = 0; } while(0)
#define RC1_SetAnalogMode()         do { ANSELCbits.ANSELC1 = 1; } while(0)
#define RC1_SetDigitalMode()        do { ANSELCbits.ANSELC1 = 0; } while(0)

// get/set CS aliases
#define CS_TRIS                 TRISCbits.TRISC2
#define CS_LAT                  LATCbits.LATC2
#define CS_PORT                 PORTCbits.RC2
#define CS_WPU                  WPUCbits.WPUC2
#define CS_OD                   ODCONCbits.ODCC2
#define CS_ANS                  ANSELCbits.ANSELC2
#define CS_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define CS_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define CS_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define CS_GetValue()           PORTCbits.RC2
#define CS_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define CS_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define CS_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define CS_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define CS_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define CS_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define CS_SetAnalogMode()      do { ANSELCbits.ANSELC2 = 1; } while(0)
#define CS_SetDigitalMode()     do { ANSELCbits.ANSELC2 = 0; } while(0)

// get/set DC aliases
#define DC_TRIS                 TRISCbits.TRISC3
#define DC_LAT                  LATCbits.LATC3
#define DC_PORT                 PORTCbits.RC3
#define DC_WPU                  WPUCbits.WPUC3
#define DC_OD                   ODCONCbits.ODCC3
#define DC_ANS                  ANSELCbits.ANSELC3
#define DC_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define DC_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define DC_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define DC_GetValue()           PORTCbits.RC3
#define DC_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define DC_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define DC_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define DC_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define DC_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define DC_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define DC_SetAnalogMode()      do { ANSELCbits.ANSELC3 = 1; } while(0)
#define DC_SetDigitalMode()     do { ANSELCbits.ANSELC3 = 0; } while(0)

// get/set RESET aliases
#define RESET_TRIS                 TRISCbits.TRISC4
#define RESET_LAT                  LATCbits.LATC4
#define RESET_PORT                 PORTCbits.RC4
#define RESET_WPU                  WPUCbits.WPUC4
#define RESET_OD                   ODCONCbits.ODCC4
#define RESET_ANS                  ANSELCbits.ANSELC4
#define RESET_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define RESET_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define RESET_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define RESET_GetValue()           PORTCbits.RC4
#define RESET_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define RESET_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define RESET_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define RESET_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define RESET_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define RESET_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define RESET_SetAnalogMode()      do { ANSELCbits.ANSELC4 = 1; } while(0)
#define RESET_SetDigitalMode()     do { ANSELCbits.ANSELC4 = 0; } while(0)

// get/set RC7 procedures
#define RC7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define RC7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define RC7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RC7_GetValue()              PORTCbits.RC7
#define RC7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define RC7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define RC7_SetPullup()             do { WPUCbits.WPUC7 = 1; } while(0)
#define RC7_ResetPullup()           do { WPUCbits.WPUC7 = 0; } while(0)
#define RC7_SetAnalogMode()         do { ANSELCbits.ANSELC7 = 1; } while(0)
#define RC7_SetDigitalMode()        do { ANSELCbits.ANSELC7 = 0; } while(0)

// get/set RD6 procedures
#define RD6_SetHigh()            do { LATDbits.LATD6 = 1; } while(0)
#define RD6_SetLow()             do { LATDbits.LATD6 = 0; } while(0)
#define RD6_Toggle()             do { LATDbits.LATD6 = ~LATDbits.LATD6; } while(0)
#define RD6_GetValue()              PORTDbits.RD6
#define RD6_SetDigitalInput()    do { TRISDbits.TRISD6 = 1; } while(0)
#define RD6_SetDigitalOutput()   do { TRISDbits.TRISD6 = 0; } while(0)
#define RD6_SetPullup()             do { WPUDbits.WPUD6 = 1; } while(0)
#define RD6_ResetPullup()           do { WPUDbits.WPUD6 = 0; } while(0)
#define RD6_SetAnalogMode()         do { ANSELDbits.ANSELD6 = 1; } while(0)
#define RD6_SetDigitalMode()        do { ANSELDbits.ANSELD6 = 0; } while(0)

// get/set RD7 procedures
#define RD7_SetHigh()            do { LATDbits.LATD7 = 1; } while(0)
#define RD7_SetLow()             do { LATDbits.LATD7 = 0; } while(0)
#define RD7_Toggle()             do { LATDbits.LATD7 = ~LATDbits.LATD7; } while(0)
#define RD7_GetValue()              PORTDbits.RD7
#define RD7_SetDigitalInput()    do { TRISDbits.TRISD7 = 1; } while(0)
#define RD7_SetDigitalOutput()   do { TRISDbits.TRISD7 = 0; } while(0)
#define RD7_SetPullup()             do { WPUDbits.WPUD7 = 1; } while(0)
#define RD7_ResetPullup()           do { WPUDbits.WPUD7 = 0; } while(0)
#define RD7_SetAnalogMode()         do { ANSELDbits.ANSELD7 = 1; } while(0)
#define RD7_SetDigitalMode()        do { ANSELDbits.ANSELD7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/