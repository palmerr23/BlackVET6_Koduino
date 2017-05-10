/**
 * @authors Avik De <avikde@gmail.com>

  This file is part of koduino <https://github.com/avikde/koduino>

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation, either
  version 3 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, see <http://www.gnu.org/licenses/>.
 */
#ifndef variant_h
#define variant_h

#include "chip.h"

#ifdef __cplusplus
extern "C"{
#endif // __cplusplus

// >>> Autogenerated by /Applications/Arduino.app/Contents/Resources/Java/hardware/koduino/stm32/variants/variant_codegen.py >>>

extern const uint8_t PE2;
extern const uint8_t PE3;
extern const uint8_t PE4;
extern const uint8_t PE5;
extern const uint8_t PE6;
extern const uint8_t PC13;
extern const uint8_t PC0;
extern const uint8_t PC1;
extern const uint8_t PC2;
extern const uint8_t PC3;
extern const uint8_t PA0;
extern const uint8_t PA1;
extern const uint8_t PA2;
extern const uint8_t PA3;
extern const uint8_t PA4;
extern const uint8_t PA5;
extern const uint8_t PA6;
extern const uint8_t PA7;
extern const uint8_t PC4;
extern const uint8_t PC5;
extern const uint8_t PB0;
extern const uint8_t PB1;
extern const uint8_t PE7;
extern const uint8_t PE8;
extern const uint8_t PE9;
extern const uint8_t PE10;
extern const uint8_t PE11;
extern const uint8_t PE12;
extern const uint8_t PE13;
extern const uint8_t PE14;
extern const uint8_t PE15;
extern const uint8_t PB10;
extern const uint8_t PB11;
extern const uint8_t PB12;
extern const uint8_t PB13;
extern const uint8_t PB14;

extern const uint8_t PE1;
extern const uint8_t PE0;
extern const uint8_t PB9;
extern const uint8_t PB8;
extern const uint8_t PB7;
extern const uint8_t PB6;
extern const uint8_t PB5;
extern const uint8_t PB3;
extern const uint8_t PD7;
extern const uint8_t PD6;
extern const uint8_t PD5;
extern const uint8_t PD4;
extern const uint8_t PD3;
extern const uint8_t PD2;
extern const uint8_t PD1;
extern const uint8_t PD0;
extern const uint8_t PC12;
extern const uint8_t PC11;
extern const uint8_t PC10;
extern const uint8_t PA15;
extern const uint8_t PA12;
extern const uint8_t PA11;
extern const uint8_t PA10;
extern const uint8_t PA9;
extern const uint8_t PA8;
extern const uint8_t PC9;
extern const uint8_t PC8;
extern const uint8_t PC7;
extern const uint8_t PC6;
extern const uint8_t PD15;
extern const uint8_t PD14;
extern const uint8_t PD13;
extern const uint8_t PD12;
extern const uint8_t PD11;
extern const uint8_t PD10;
extern const uint8_t PD9;
extern const uint8_t PD8;
extern const uint8_t PB15;
extern const uint8_t PA13;
extern const uint8_t PA14;
extern const uint8_t PB4;
extern const uint8_t PB2;
extern const uint8_t PC14;
extern const uint8_t PC15;

extern const uint8_t TIMER2;
extern const uint8_t TIMER5;
extern const uint8_t TIMER3;
extern const uint8_t TIMER4;
extern const uint8_t TIMER1;
extern const uint8_t TIMER8;
extern const uint8_t TIMER9;
extern const uint8_t TIMER12;
extern const uint8_t TIMER10;
extern const uint8_t TIMER11;
extern const uint8_t TIMER13;
extern const uint8_t TIMER14;
extern const uint8_t TIMER6;
extern const uint8_t TIMER7;

// <<< Autogenerated by /Applications/Arduino.app/Contents/Java/hardware/koduino/stm32/variants/variant_codegen.py <<<



// Mandated by the core library
#define LED_BUILTIN PA5

#ifdef __cplusplus
} // extern "C"

#include "USARTClass.h"

extern USARTClass Serial1;
extern USARTClass Serial2;
extern USARTClass Serial3;
extern USARTClass Serial6;


bool isTimer32Bit(uint8_t tim);
uint8_t numChannelsInTimer(uint8_t tim);
bool isAnalogPin(uint8_t pin);
void variantInit();

#endif // __cplusplus

#endif

