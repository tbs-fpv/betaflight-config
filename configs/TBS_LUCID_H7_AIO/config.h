/*
 * This file is part of Betaflight.
 *
 * Betaflight is free software. You can redistribute this software
 * and/or modify this software under the terms of the GNU General
 * Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later
 * version.
 *
 * Betaflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define FC_TARGET_MCU     STM32H743

#define BOARD_NAME        TBS_LUCID_H7_AIO
#define MANUFACTURER_ID   TEBS

#define USE_ACC
#define USE_ACC_SPI_MPU6000
#define USE_ACC_SPI_ICM42688P

#define USE_GYRO
#define USE_GYRO_CLKIN
#define USE_GYRO_SPI_MPU6000
#define USE_GYRO_SPI_ICM42688P

#define ENSURE_MPU_DATA_READY_IS_LOW

#define GYRO_1_CS_PIN        PA4
#define GYRO_1_EXTI_PIN      PE11
#define GYRO_1_SPI_INSTANCE  SPI1
#define GYRO_1_ALIGN         ALIGN_CUSTOM
#define GYRO_1_CUSTOM_ALIGN  SENSOR_ALIGNMENT(0, 0, 225)
#define GYRO_1_CLKIN_PIN     PE6

#define USE_BARO
#define USE_BARO_BMP388
#define USE_BARO_DPS310
#define BARO_I2C_INSTANCE    I2CDEV_2
#define MAG_I2C_INSTANCE     I2CDEV_2

#define USE_FLASH
#define USE_FLASH_M25P16
#define FLASH_SPI_INSTANCE   SPI2
#define FLASH_CS_PIN         PB12

#define BEEPER_INVERTED
#define BEEPER_PIN           PE9

#define MOTOR1_PIN           PC7
#define MOTOR2_PIN           PC9
#define MOTOR3_PIN           PC6
#define MOTOR4_PIN           PC8

#define LED_STRIP_PIN        PA0

#define UART1_RX_PIN         PA10

#define UART2_RX_PIN         PA3
#define UART2_TX_PIN         PA2

#define UART3_RX_PIN         PC11
#define UART3_TX_PIN         PC10

#define UART4_RX_PIN         PA1

#define UART5_RX_PIN         PD2
#define UART5_TX_PIN         PC12

#define UART7_RX_PIN         PE7
#define UART7_TX_PIN         PE8

#define UART8_RX_PIN         PE0
#define UART8_TX_PIN         PE1

#define I2C2_SCL_PIN         PB10
#define I2C2_SDA_PIN         PB11

#define LED0_PIN             PE3
#define LED1_PIN             PE4

#define SPI1_SCK_PIN         PA5
#define SPI1_SDI_PIN         PA6
#define SPI1_SDO_PIN         PA7
#define SPI2_SCK_PIN         PB13
#define SPI2_SDI_PIN         PB14
#define SPI2_SDO_PIN         PB15

#define ADC_VBAT_PIN         PC1
#define ADC_CURR_PIN         PC0

#define PINIO1_PIN           PD11

#define TIMER_PIN_MAPPING \
    TIMER_PIN_MAP( 0, PC7 , 2,  0) \
    TIMER_PIN_MAP( 1, PC9 , 2,  0) \
    TIMER_PIN_MAP( 2, PC6 , 2,  0) \
    TIMER_PIN_MAP( 3, PC8 , 2,  0) \
    TIMER_PIN_MAP( 4, PA0 , 2,  0) \
    TIMER_PIN_MAP( 5, PE6 , 1, -1)

#define ADC1_DMA_OPT        8
#define ADC3_DMA_OPT        9

#define TIMUP1_DMA_OPT      0
#define TIMUP2_DMA_OPT      0
#define TIMUP3_DMA_OPT      2
#define TIMUP4_DMA_OPT      1
#define TIMUP5_DMA_OPT      0
#define TIMUP8_DMA_OPT      0

#define DEFAULT_BLACKBOX_DEVICE     BLACKBOX_DEVICE_FLASH

#define DEFAULT_CURRENT_METER_SOURCE CURRENT_METER_ADC
#define DEFAULT_VOLTAGE_METER_SOURCE VOLTAGE_METER_ADC

#define DEFAULT_VOLTAGE_METER_SCALE 130
#define DEFAULT_CURRENT_METER_SCALE 250

#define BOX_USER1_NAME "VTX"
#define PINIO1_BOX 40
#define PINIO1_CONFIG 129

#define SERIALRX_PROVIDER    SERIALRX_CRSF
#define SERIALRX_UART        SERIAL_PORT_USART3

#define MSP_DISPLAYPORT_UART SERIAL_PORT_UART5
