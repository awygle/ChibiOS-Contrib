/*
    Copyright (C) 2015 Fabio Utzig

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

#ifndef _BOARD_H_
#define _BOARD_H_

/* Board identifier. */
#define BOARD_NRF51_DK
#define BOARD_NAME              "nRF51 DK"

/* Board oscillators-related settings. */
#define NRF51_XTAL_VALUE        16000000
#define NRF51_LFCLK_SOURCE      1

/* GPIO pins. */
#define BTN1           17
#define BTN2           18
#define BTN3           19
#define BTN4           20
#define LED1           21
#define LED2           22
#define LED3           23
#define LED4           24
#define UART_RTS        8
#define UART_TX         9
#define UART_CTS       10
#define UART_RX        11
#define SPI_SCK        29
#define SPI_MOSI       25
#define SPI_MISO       28
#define SPI_SS         24
#define I2C_SCL         7
#define I2C_SDA        30

/*
 * IO pins assignments.
 */
#define IOPORT1_BTN1           17U
#define IOPORT1_BTN2           18U
#define IOPORT1_BTN3           19U
#define IOPORT1_BTN4           20U
#define IOPORT1_LED1           21U
#define IOPORT1_LED2           22U
#define IOPORT1_LED3           23U
#define IOPORT1_LED4           24U
#define IOPORT1_UART_RTS        8U
#define IOPORT1_UART_TX         9U
#define IOPORT1_UART_CTS       10U
#define IOPORT1_UART_RX        11U
#define IOPORT1_SPI_SCK        29U
#define IOPORT1_SPI_MOSI       25U
#define IOPORT1_SPI_MISO       28U
#define IOPORT1_SPI_SS         24U
#define IOPORT1_I2C_SCL         7U
#define IOPORT1_I2C_SDA        30U

/*
 * IO lines assignments.
 */
#define LINE_BTN1      PAL_LINE(IOPORT1, IOPORT1_BTN1)
#define LINE_BTN2      PAL_LINE(IOPORT1, IOPORT1_BTN2)
#define LINE_BTN3      PAL_LINE(IOPORT1, IOPORT1_BTN3)
#define LINE_BTN4      PAL_LINE(IOPORT1, IOPORT1_BTN4)
#define LINE_LED1      PAL_LINE(IOPORT1, IOPORT1_LED1)
#define LINE_LED2      PAL_LINE(IOPORT1, IOPORT1_LED2)
#define LINE_LED3      PAL_LINE(IOPORT1, IOPORT1_LED3)
#define LINE_LED4      PAL_LINE(IOPORT1, IOPORT1_LED4)
#define LINE_UART_RTS  PAL_LINE(IOPORT1, IOPORT1_UART_RTS)
#define LINE_UART_TX   PAL_LINE(IOPORT1, IOPORT1_UART_TX)
#define LINE_UART_CTS  PAL_LINE(IOPORT1, IOPORT1_UART_CTS)
#define LINE_UART_RX   PAL_LINE(IOPORT1, IOPORT1_UART_RX)
#define LINE_SPI_SCK   PAL_LINE(IOPORT1, IOPORT1_SPI_SCK)
#define LINE_SPI_MOSI  PAL_LINE(IOPORT1, IOPORT1_SPI_MOSI)
#define LINE_SPI_MISO  PAL_LINE(IOPORT1, IOPORT1_SPI_MISO)
#define LINE_SPI_SS    PAL_LINE(IOPORT1, IOPORT1_SPI_SS)
#define LINE_I2C_SCL   PAL_LINE(IOPORT1, IOPORT1_I2C_SCL)
#define LINE_I2C_SDA   PAL_LINE(IOPORT1, IOPORT1_I2C_SDA)

#if !defined(_FROM_ASM_)
#ifdef __cplusplus
extern "C" {
#endif
  void boardInit(void);
#ifdef __cplusplus
}
#endif
#endif /* _FROM_ASM_ */

#endif /* _BOARD_H_ */
