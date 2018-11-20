/*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include "variant.h"

/*
 * Pins descriptions
 * TCC0 IOSET4
 * TCC1 IOSET2
 * TCC2 IOSET1
 * TCC3 IOSET1
 * TCC4 IOSET1
 */
const PinDescription g_APinDescription[]=
{
  // 0..13 - Digital pins
  // ----------------------
  // 0/1 - SERCOM/UART (Serial1)
  { PORTB, 25, PIO_SERCOM, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_9 }, // RX: SERCOMX/PAD[1]
  { PORTB, 24, PIO_SERCOM, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_8 }, // TX: SERCOMX/PAD[0]

  // 2..12
  // Digital Low
  { PORTC,  18, PIO_DIGITAL, PIN_ATTR_PWM_F, No_ADC_Channel, TCC0_CH2, NOT_ON_TIMER,  EXTERNAL_INT_2 },
  { PORTC,  19, PIO_DIGITAL, PIN_ATTR_PWM_F, No_ADC_Channel, TCC0_CH3, NOT_ON_TIMER,  EXTERNAL_INT_3 },
  { PORTC,  20, PIO_DIGITAL, PIN_ATTR_PWM_F, No_ADC_Channel, TCC0_CH4, NOT_ON_TIMER,  EXTERNAL_INT_4 },
  { PORTC,  21, PIO_DIGITAL, PIN_ATTR_PWM_F, No_ADC_Channel, TCC0_CH5, NOT_ON_TIMER,  EXTERNAL_INT_5 },
  { PORTD,  20, PIO_DIGITAL, PIN_ATTR_PWM_F, No_ADC_Channel, TCC1_CH0, NOT_ON_TIMER,  EXTERNAL_INT_10 },
  { PORTD,  21, PIO_DIGITAL, PIN_ATTR_PWM_F, No_ADC_Channel, TCC1_CH1, NOT_ON_TIMER,  EXTERNAL_INT_11 },

  // Digital High
  { PORTB,  18, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_2 },
  { PORTB,  2, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_3 },
  { PORTB,  22, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_6 },
  { PORTB,  23, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_7 },
  { PORTB,  0, PIO_DIGITAL, PIN_ATTR_PWM_E, No_ADC_Channel, TC7_CH0, TC7_CH0,  EXTERNAL_INT_0 },

  // 13 (LED)
  { PORTB,  1, PIO_DIGITAL, PIN_ATTR_PWM_E, No_ADC_Channel, TC7_CH1, TC7_CH1,  EXTERNAL_INT_1 },

  // 14..21 - UARTS
  { PORTB,  16, PIO_SERCOM, PIN_ATTR_PWM_E, No_ADC_Channel, TC6_CH0, TC6_CH0, EXTERNAL_INT_0 }, // UART3_TX
  { PORTB,  17, PIO_SERCOM, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_1 }, // UART3_RX
  { PORTC,  22, PIO_SERCOM, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_6 }, // UART2_TX
  { PORTC,  23, PIO_SERCOM, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_6 }, // UART2_RX
  { PORTB,  12, PIO_SERCOM, PIN_ATTR_PWM_F, No_ADC_Channel, TCC3_CH0, NOT_ON_TIMER, EXTERNAL_INT_12 }, // UART1_TX
  { PORTB,  13, PIO_SERCOM, PIN_ATTR_PWM_F, No_ADC_Channel, TCC3_CH1, NOT_ON_TIMER, EXTERNAL_INT_13 }, // UART1_RX
  { PORTB,  20, PIO_SERCOM, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_4 }, //same as SDA
  { PORTB,  21, PIO_SERCOM, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_5 }, //same as SCL

  // 22..53 - Extra Digital Pins
  // ----------------------
  // 22..29
  { PORTD,  12, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_7 },
  { PORTA,  15, PIO_DIGITAL, PIN_ATTR_PWM_F, No_ADC_Channel, TCC2_CH1, NOT_ON_TIMER,  EXTERNAL_INT_15 },
  { PORTC,  17, PIO_SERCOM, PIN_ATTR_PWM_F, No_ADC_Channel, TCC0_CH1, NOT_ON_TIMER,  EXTERNAL_INT_1 }, // SCL_1
  { PORTC,  16, PIO_SERCOM, PIN_ATTR_PWM_F, No_ADC_Channel, TCC0_CH0, NOT_ON_TIMER,  EXTERNAL_INT_0 }, // SDA_1
  { PORTA,  12, PIO_DIGITAL, PIN_ATTR_PWM_E, No_ADC_Channel, TC2_CH0, TC2_CH0,  EXTERNAL_INT_12 }, // DEN1
  { PORTA,  13, PIO_DIGITAL, PIN_ATTR_PWM_E, No_ADC_Channel, TC2_CH1, TC2_CH1,  EXTERNAL_INT_13 }, // DEN2
  { PORTA,  14, PIO_DIGITAL, PIN_ATTR_PWM_F, No_ADC_Channel, TCC2_CH0, NOT_ON_TIMER,  EXTERNAL_INT_14 }, // CLK
  { PORTB,  19, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_3 }, // XCLK

  // 30..37
  { PORTA,  23, PIO_DIGITAL, PIN_ATTR_PWM_E, No_ADC_Channel, TC4_CH1, TC4_CH1,  EXTERNAL_INT_7 },
  { PORTA,  22, PIO_DIGITAL, PIN_ATTR_PWM_E, No_ADC_Channel, TC4_CH0, TC4_CH0,  EXTERNAL_INT_6 },
  { PORTA,  21, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_5 },
  { PORTA,  20, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_4 },
  { PORTA,  19, PIO_DIGITAL, PIN_ATTR_PWM_E, No_ADC_Channel, TC3_CH1, TC3_CH1,  EXTERNAL_INT_3 },
  { PORTA,  18, PIO_DIGITAL, PIN_ATTR_PWM_E, No_ADC_Channel, TC3_CH0, TC3_CH0,  EXTERNAL_INT_2 },
  { PORTA,  17, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_1 },
  { PORTA,  16, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_0 },

  // 38..45
  { PORTB,  15, PIO_DIGITAL, PIN_ATTR_PWM_F, No_ADC_Channel, TCC4_CH1, NOT_ON_TIMER,  EXTERNAL_INT_15 },
  { PORTB,  14, PIO_DIGITAL, PIN_ATTR_PWM_F, No_ADC_Channel, TCC4_CH0, NOT_ON_TIMER,  EXTERNAL_INT_14 },
  { PORTC,  13, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_13 },
  { PORTC,  12, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_12 },
  { PORTC,  15, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_15 },
  { PORTC,  14, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_14 },
  { PORTC,  11, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_11 },
  { PORTC,  10, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_10 },

  // 46..53
  { PORTC,  6, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_6 },
  { PORTC,  7, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_5 },
  { PORTC,  4, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_4 },
  { PORTC,  5, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_5 },
  { PORTD,  11, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_11 }, //same as MISO
  { PORTD,  8, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_8 }, //same as MOSI
  { PORTD,  9, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_9 }, //same as SCK
  { PORTD,  10, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_10 }, //same as SS

  // 54..61 - Additional ADC
  { PORTB,  5, PIO_ANALOG, PIN_ATTR_ANALOG_ALT, ADC_Channel7, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_5 },
  { PORTB,  6, PIO_ANALOG, PIN_ATTR_ANALOG_ALT, ADC_Channel8, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_6 },
  { PORTB,  7, PIO_ANALOG, PIN_ATTR_ANALOG_ALT, ADC_Channel9, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_7 },
  { PORTB,  8, PIO_ANALOG, PIN_ATTR_ANALOG_ALT, ADC_Channel0, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_8 },
  { PORTB,  9, PIO_ANALOG, PIN_ATTR_ANALOG_ALT, ADC_Channel1, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_9 },
  { PORTA,  4, PIO_ANALOG, (PIN_ATTR_ANALOG|PIN_ATTR_PWM_E), ADC_Channel4, TC0_CH0, TC0_CH0, EXTERNAL_INT_4 },
  { PORTA,  6, PIO_ANALOG, (PIN_ATTR_ANALOG|PIN_ATTR_PWM_E), ADC_Channel6, TC1_CH0, NOT_ON_TIMER, EXTERNAL_INT_6 },
  { PORTA,  7, PIO_ANALOG, (PIN_ATTR_ANALOG|PIN_ATTR_PWM_E), ADC_Channel7, TC1_CH1, NOT_ON_TIMER, EXTERNAL_INT_7 },

  // 62..63 - I2C pins (SDA/SCL)
  // ----------------------
  { PORTB,  20, PIO_SERCOM, PIN_ATTR_PWM_F, No_ADC_Channel, TCC1_CH2, NOT_ON_TIMER, EXTERNAL_INT_4 }, // SDA
  { PORTB,  21, PIO_SERCOM, PIN_ATTR_PWM_F, No_ADC_Channel, TCC1_CH3, NOT_ON_TIMER, EXTERNAL_INT_5 }, // SCL

  // 64..66 - SPI pins (ICSP:MISO,SCK,MOSI)
  // ----------------------
  { PORTD,  11, PIO_SERCOM, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_6 }, // MISO
  { PORTD,  8, PIO_SERCOM, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_3 }, // MOSI
  { PORTD,  9, PIO_SERCOM, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_4 }, // SCK

  // 67..74 - Analog pins
  // --------------------
  { PORTA,  2, PIO_ANALOG, PIN_ATTR_ANALOG, ADC_Channel0, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_2 },
  { PORTA,  5, PIO_ANALOG, PIN_ATTR_ANALOG, ADC_Channel5, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_5 },
  { PORTB,  3, PIO_ANALOG, (PIN_ATTR_ANALOG|PIN_ATTR_PWM_E), ADC_Channel15, TC6_CH1, TC6_CH1, EXTERNAL_INT_3 },
  { PORTC,  0, PIO_ANALOG, PIN_ATTR_ANALOG_ALT, ADC_Channel10, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_0 },
  { PORTC,  1, PIO_ANALOG, PIN_ATTR_ANALOG_ALT, ADC_Channel11, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_1 },
  { PORTC,  2, PIO_ANALOG, PIN_ATTR_ANALOG_ALT, ADC_Channel4, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_2 },
  { PORTC,  3, PIO_ANALOG, PIN_ATTR_ANALOG_ALT, ADC_Channel5, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_3 },
  { PORTB,  4, PIO_ANALOG, PIN_ATTR_ANALOG_ALT, ADC_Channel6, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_4 },

  // 75..76 - RX/TX LEDS
  // --------------------
  { PORTC, 31, PIO_OUTPUT, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE }, // used as output only
  { PORTC, 30, PIO_OUTPUT, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE }, // used as output only

  // 77..79 - USB
  // --------------------
  { PORTA, 27, PIO_COM, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE }, // USB Host enable
  { PORTA, 24, PIO_COM, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_8 }, // USB/DM
  { PORTA, 25, PIO_COM, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_9 }, // USB/DP

  // 80..83 - SD SPI pins (SD:MISO,SCK,MOSI,CS)
  // ----------------------
  { PORTB,  29, PIO_SERCOM, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE  },
  { PORTB,  27, PIO_SERCOM, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE  },
  { PORTB,  26, PIO_SERCOM, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE  },
  { PORTB,  28, PIO_SERCOM, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE  },

  // 84 (AREF)
  { PORTA, 3, PIO_ANALOG, PIN_ATTR_ANALOG, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_3 }, // DAC/VREFP

  // ----------------------
  // 85..86 - Alternate use of A0 and A1 (DAC output)
  { PORTA,  2, PIO_ANALOG, PIN_ATTR_ANALOG, DAC_Channel0, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_2 }, // DAC/VOUT[0]
  { PORTA,  5, PIO_ANALOG, PIN_ATTR_ANALOG, DAC_Channel1, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_5 }, // DAC/VOUT[1]

  // 87 - LED #13 duplicate placeholder
  { PORTB,  1, PIO_DIGITAL, PIN_ATTR_PWM_E, No_ADC_Channel, TC7_CH1, TC7_CH1,  EXTERNAL_INT_1 },

  // 88 - Internal NeoPixel
  { PORTC,  24, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_NONE }, // used as output only

  // ----------------------
  // 89 - 94 QSPI (SCK, CS, IO0, IO1, IO2, IO3)
  { PORTB, 10, PIO_COM, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_10 },
  { PORTB, 11, PIO_COM, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_11 },
  { PORTA, 8, PIO_COM, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NMI },
  { PORTA, 9, PIO_COM, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_9 },
  { PORTA, 10, PIO_COM, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_10 },
  { PORTA, 11, PIO_COM, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_11 },
} ;

const void* g_apTCInstances[TCC_INST_NUM+TC_INST_NUM]={ TCC0, TCC1, TCC2, TCC3, TCC4, TC0, TC1, TC2, TC3, TC4, TC5, TC6, TC7 } ;
const uint32_t GCLK_CLKCTRL_IDs[TCC_INST_NUM+TC_INST_NUM] = { TCC0_GCLK_ID, TCC1_GCLK_ID, TCC2_GCLK_ID, TCC3_GCLK_ID, TCC4_GCLK_ID, TC0_GCLK_ID, TC1_GCLK_ID, TC2_GCLK_ID, TC3_GCLK_ID, TC4_GCLK_ID, TC5_GCLK_ID, TC6_GCLK_ID, TC7_GCLK_ID } ;


// Multi-serial objects instantiation
SERCOM sercom0( SERCOM0 ) ;
SERCOM sercom1( SERCOM1 ) ;
SERCOM sercom2( SERCOM2 ) ;
SERCOM sercom3( SERCOM3 ) ;
SERCOM sercom4( SERCOM4 ) ;
SERCOM sercom5( SERCOM5 ) ;
SERCOM sercom6( SERCOM6 ) ;
SERCOM sercom7( SERCOM7 ) ;

Uart Serial1( &sercom0, PIN_SERIAL1_RX, PIN_SERIAL1_TX, PAD_SERIAL1_RX, PAD_SERIAL1_TX ) ;

void SERCOM0_0_Handler()
{
  Serial1.IrqHandler();
}
void SERCOM0_1_Handler()
{
  Serial1.IrqHandler();
}
void SERCOM0_2_Handler()
{
  Serial1.IrqHandler();
}
void SERCOM0_3_Handler()
{
  Serial1.IrqHandler();
}
