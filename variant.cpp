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
#include "variant.h"
#include "types.h"
#include "USARTClass.h"
#include "adc.h"

// >>> Autogenerated by /Applications/Arduino.app/Contents/Java/hardware/koduino/stm32/variants/variant_codegen.py >>>

const uint8_t PE2 = 0;
const uint8_t PE3 = 1;
const uint8_t PE4 = 2;
const uint8_t PE5 = 3;
const uint8_t PE6 = 4;
const uint8_t PC13 = 5;
const uint8_t PC0 = 6;
const uint8_t PC1 = 7;
const uint8_t PC2 = 8;
const uint8_t PC3 = 9;
const uint8_t PA0 = 10;
const uint8_t PA1 = 11;
const uint8_t PA2 = 12;
const uint8_t PA3 = 13;
const uint8_t PA4 = 14;
const uint8_t PA5 = 15;
const uint8_t PA6 = 16;
const uint8_t PA7 = 17;
const uint8_t PC4 = 18;
const uint8_t PC5 = 19;
const uint8_t PB0 = 20;
const uint8_t PB1 = 21;
const uint8_t PE7 = 22;
const uint8_t PE8 = 23;
const uint8_t PE9 = 24;
const uint8_t PE10 = 25;
const uint8_t PE11 = 26;
const uint8_t PE12 = 27;
const uint8_t PE13 = 28;
const uint8_t PE14 = 29;
const uint8_t PE15 = 30;
const uint8_t PB10 = 31;
const uint8_t PB11 = 32;
const uint8_t PB12 = 33;
const uint8_t PB13 = 34;
const uint8_t PB14 = 35;

const uint8_t PE1 = 36;
const uint8_t PE0 = 37;
const uint8_t PB9 = 38;
const uint8_t PB8 = 39;
const uint8_t PB7 = 40;
const uint8_t PB6 = 41;
const uint8_t PB5 = 42;
const uint8_t PB3 = 43;
const uint8_t PD7 = 44;
const uint8_t PD6 = 45;
const uint8_t PD5 = 46;
const uint8_t PD4 = 47;
const uint8_t PD3 = 48;
const uint8_t PD2 = 49;
const uint8_t PD1 = 50;
const uint8_t PD0 = 51;
const uint8_t PC12 = 52;
const uint8_t PC11 = 53;
const uint8_t PC10 = 54;
const uint8_t PA15 = 55;
const uint8_t PA12 = 56;
const uint8_t PA11 = 57;
const uint8_t PA10 = 58;
const uint8_t PA9 = 59;
const uint8_t PA8 = 60;
const uint8_t PC9 = 61;
const uint8_t PC8 = 62;
const uint8_t PC7 = 63;
const uint8_t PC6 = 64;
const uint8_t PD15 = 65;
const uint8_t PD14 = 66;
const uint8_t PD13 = 67;
const uint8_t PD12 = 68;
const uint8_t PD11 = 69;
const uint8_t PD10 = 70;
const uint8_t PD9 = 71;
const uint8_t PD8 = 72;
const uint8_t PB15 = 73;
const uint8_t PA13 = 74;
const uint8_t PA14 = 75;
const uint8_t PB4 = 76;
const uint8_t PB2 = 77;
const uint8_t PC14 = 78;
const uint8_t PC15 = 79;


PinInfo PIN_MAP[] = {
  {GPIOE, 2, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOE, 3, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOE, 4, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOE, 5, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOE, 6, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOC, 13, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOC, 0, 10, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOC, 1, 11, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOC, 2, 12, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOC, 3, 13, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOA, 0, 0, 2, TIMER5, 1, NOT_SET, NOT_SET},
  {GPIOA, 1, 1, 2, TIMER5, 2, NOT_SET, NOT_SET},
  {GPIOA, 2, 2, 2, TIMER5, 3, NOT_SET, NOT_SET},
  {GPIOA, 3, 3, 2, TIMER5, 4, NOT_SET, NOT_SET},
  {GPIOA, 4, 4, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOA, 5, 5, 1, TIMER2, 1, NOT_SET, NOT_SET},
  {GPIOA, 6, 6, 2, TIMER3, 1, NOT_SET, NOT_SET},
  {GPIOA, 7, 7, 2, TIMER3, 2, NOT_SET, NOT_SET},
  {GPIOC, 4, 14, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOC, 5, 15, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOB, 0, 8, 2, TIMER3, 3, NOT_SET, NOT_SET},
  {GPIOB, 1, 9, 2, TIMER3, 4, NOT_SET, NOT_SET},
  {GPIOE, 7, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOE, 8, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOE, 9, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOE, 10, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOE, 11, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOE, 12, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOE, 13, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOE, 14, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOE, 15, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOB, 10, NOT_SET, 2, TIMER2, 3, NOT_SET, NOT_SET},
  {GPIOB, 11, NOT_SET, 2, TIMER2, 4, NOT_SET, NOT_SET},
  {GPIOB, 12, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOB, 13, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOB, 14, NOT_SET, 9, TIMER12, 1, NOT_SET, NOT_SET},
  {GPIOE, 1, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOE, 0, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOB, 9, NOT_SET, 2, TIMER4, 4, NOT_SET, NOT_SET},
  {GPIOB, 8, NOT_SET, 2, TIMER4, 3, NOT_SET, NOT_SET},
  {GPIOB, 7, NOT_SET, 2, TIMER4, 2, NOT_SET, NOT_SET},
  {GPIOB, 6, NOT_SET, 2, TIMER4, 1, NOT_SET, NOT_SET},
  {GPIOB, 5, NOT_SET, 2, TIMER3, 2, NOT_SET, NOT_SET},
  {GPIOB, 3, NOT_SET, 1, TIMER2, 2, NOT_SET, NOT_SET},
  {GPIOD, 7, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOD, 6, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOD, 5, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOD, 4, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOD, 3, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOD, 2, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOD, 1, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOD, 0, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOC, 12, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOC, 11, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOC, 10, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOA, 15, NOT_SET, 1, TIMER2, 1, NOT_SET, NOT_SET},
  {GPIOA, 12, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOA, 11, NOT_SET, 1, TIMER1, 4, NOT_SET, NOT_SET},
  {GPIOA, 10, NOT_SET, 1, TIMER1, 3, NOT_SET, NOT_SET},
  {GPIOA, 9, NOT_SET, 1, TIMER1, 2, NOT_SET, NOT_SET},
  {GPIOA, 8, NOT_SET, 1, TIMER1, 1, NOT_SET, NOT_SET},
  {GPIOC, 9, NOT_SET, 3, TIMER8, 4, NOT_SET, NOT_SET},
  {GPIOC, 8, NOT_SET, 3, TIMER8, 3, NOT_SET, NOT_SET},
  {GPIOC, 7, NOT_SET, 3, TIMER8, 2, NOT_SET, NOT_SET},
  {GPIOC, 6, NOT_SET, 3, TIMER8, 1, NOT_SET, NOT_SET},
  {GPIOD, 15, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOD, 14, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOD, 13, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOD, 12, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOD, 11, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOD, 10, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOD, 9, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOD, 8, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOB, 15, NOT_SET, 9, TIMER12, 2, NOT_SET, NOT_SET},
  {GPIOA, 13, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOA, 14, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOB, 4, NOT_SET, 1, TIMER3, 1, NOT_SET, NOT_SET},
  {GPIOB, 2, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOC, 14, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOC, 15, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
};

const uint8_t TIMER2 = 0;
const uint8_t TIMER5 = 1;
const uint8_t TIMER3 = 2;
const uint8_t TIMER4 = 3;
const uint8_t TIMER1 = 4;
const uint8_t TIMER8 = 5;
const uint8_t TIMER9 = 6;
const uint8_t TIMER12 = 7;
const uint8_t TIMER10 = 8;
const uint8_t TIMER11 = 9;
const uint8_t TIMER13 = 10;
const uint8_t TIMER14 = 11;
const uint8_t TIMER6 = 12;
const uint8_t TIMER7 = 13;

TimerChannelData timer2ch[4] = {
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0}
};
TimerChannelData timer5ch[4] = {
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0}
};
TimerChannelData timer3ch[4] = {
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0}
};
TimerChannelData timer4ch[4] = {
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0}
};
TimerChannelData timer1ch[4] = {
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0}
};
TimerChannelData timer8ch[4] = {
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0}
};
TimerChannelData timer9ch[2] = {
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0}
};
TimerChannelData timer12ch[2] = {
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0}
};
TimerChannelData timer10ch[1] = {
  {0, false, 0, 0, 0, 0}
};
TimerChannelData timer11ch[1] = {
  {0, false, 0, 0, 0, 0}
};
TimerChannelData timer13ch[1] = {
  {0, false, 0, 0, 0, 0}
};
TimerChannelData timer14ch[1] = {
  {0, false, 0, 0, 0, 0}
};

TimerInfo TIMER_MAP[] = {
  {TIM2, TIM2_IRQn, 1000, 0, timer2ch},
  {TIM5, TIM5_IRQn, 1000, 0, timer5ch},
 // {TIM3, TIM3_IRQn, 1000, 0, timer3ch},
  {TIM4, TIM4_IRQn, 1000, 0, timer4ch},
//  {TIM1, TIM1_IRQn, 1000, 0, timer1ch},
 // {TIM8, TIM8_IRQn, 1000, 0, timer8ch},
 // {TIM9, TIM9_IRQn, 1000, 0, timer9ch},
//  {TIM12, TIM12_IRQn, 1000, 0, timer12ch},
//  {TIM10, TIM10_IRQn, 1000, 0, timer10ch},
 // {TIM11, TIM11_IRQn, 1000, 0, timer11ch},
 // {TIM13, TIM13_IRQn, 1000, 0, timer13ch},
//  {TIM14, TIM14_IRQn, 1000, 0, timer14ch},
 // {TIM6, TIM6_IRQn, 1000, 0, (TimerChannelData *)0},
  {TIM7, TIM7_IRQn, 1000, 0, (TimerChannelData *)0},
  // ^^^ Look up IRQn names from CMSIS device header ^^^
};

// <<< Autogenerated by /Applications/Arduino.app/Contents/Java/hardware/koduino/stm32/variants/variant_codegen.py <<<


// Use the 3 basic timers and two others
TimebaseChannel TIMEBASE_MAP[] = {
  {.timer = NOT_SET, .isr = 0}, // 0
  {.timer = NOT_SET, .isr = 0} // 1
};

// Serial
USARTInfo USART_MAP[4] = {
  { USART1, USART1_IRQn, PA9,  PA10 },
  { USART2, USART2_IRQn, PA2,  PA3 },
  { USART3, USART3_IRQn, PC10, PC11 }, // PD8,  PD9
  { USART6, USART6_IRQn, PC6,  PC7 } 
};
USARTClass Serial1(&USART_MAP[0]);
USARTClass Serial2(&USART_MAP[1]);
USARTClass Serial3(&USART_MAP[2]);
USARTClass Serial6(&USART_MAP[3]);

bool isTimer32Bit(uint8_t tim) {
  return (tim < TIMER3);
}

uint8_t numChannelsInTimer(uint8_t tim) {
  if (tim < TIMER9)
    return 4;
  else if (tim < TIMER10)
    return 2;
  else if (tim < TIMER6)
    return 1;
  else
    return 0;
}

bool isAnalogPin(uint8_t pin) {
  return (PIN_MAP[pin].adcChannel != NOT_SET);
}

void variantInit() {
  TIMEBASE_MAP[0].timer = TIMER6;
  TIMEBASE_MAP[1].timer = TIMER7;

  // GPIO
  RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA, ENABLE);
  RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB, ENABLE);
  RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC, ENABLE);
  RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD, ENABLE); // added RP
  RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOH, ENABLE);
  // SYSCFG - needed for EXTI
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_SYSCFG, ENABLE);

  // Timer clocks
  RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM2, ENABLE);
  RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM3, ENABLE);
  RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM4, ENABLE);
  RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM5, ENABLE);
  RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM6, ENABLE);
  RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM7, ENABLE);
  RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM12, ENABLE);
  RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM13, ENABLE);
  RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM14, ENABLE);
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_TIM1, ENABLE);
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_TIM8, ENABLE);
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_TIM9, ENABLE);
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_TIM10, ENABLE);
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_TIM11, ENABLE);

  // USART
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_USART1, ENABLE);
  RCC_APB1PeriphClockCmd(RCC_APB1Periph_USART2, ENABLE);
  RCC_APB1PeriphClockCmd(RCC_APB1Periph_USART3, ENABLE);
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_USART6, ENABLE);

  // ADC(s)
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_ADC1, ENABLE);
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_ADC2, ENABLE);
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_ADC3, ENABLE);
  // adcCommonInit();
  adcInit(ADC1);
  adcInit(ADC2);
  adcInit(ADC3);
}
