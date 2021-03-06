/* Copyright (C) 2013 by Jacob Alexander
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef __output_com_h
#define __output_com_h

// ----- Includes -----

// Compiler Includes
#include <stdint.h>

// Local Includes
#include <buildvars.h> // Defines USB Parameters, partially generated by CMake



// ----- Defines -----

// Indicator for other modules through USBKeys_MaxSize for how capable the USB module is when sending large number of keypresses
#define USB_MAX_KEY_SEND 6



// ----- Variables -----

// Variables used to communciate to the usb module
extern                       uint8_t USBKeys_Modifiers;
extern                       uint8_t USBKeys_Array[USB_MAX_KEY_SEND];
extern                       uint8_t USBKeys_Sent;
extern volatile              uint8_t USBKeys_LEDs;

                static const uint8_t USBKeys_MaxSize = USB_MAX_KEY_SEND;

// Misc variables (XXX Some are only properly utilized using AVR)
extern                       uint8_t USBKeys_Protocol;
extern                       uint8_t USBKeys_Idle_Config;
extern                       uint8_t USBKeys_Idle_Count;



// ----- Functions -----

void output_setup();

void output_firmwareReload();

#endif

