/* 
// This file is subject to the terms and conditions defined in
// file 'LICENSE.md', which is part of this source code package.
*/

#ifndef _VARIANT_H_
#define _VARIANT_H_

#include "Arduino.h"

#include "config/pins.h"

#define VARIANT_SPI_INTFCS  2
#define VARIANT_WIRE_INTFCS 2

// SPI
#define VARIANT_SPI_SDI     SPI_SDI
#define VARIANT_SPI_SDO     SPI_SDO
#define VARIANT_SPI_CLK     SPI_CLK

#define VARIANT_SPI1_SDI     SPI1_SDI
#define VARIANT_SPI1_SDO     SPI1_SDO
#define VARIANT_SPI1_CLK     SPI1_CLK

// Wire
#define VARIANT_Wire_SDA    I2C_SDA
#define VARIANT_Wire_SCL    I2C_SCL

#define VARIANT_Wire1_SDA   I2C1_SDA
#define VARIANT_Wire1_SCL   I2C1_SCL

// UART
extern UART Serial1;

// temporary patch to support Arduino SD library
#define SS SPI_CS
#define MOSI SPI_SDO
#define MISO SPI_SDI
#define SCK SPI_CLK

// Backwards Compatibility with SPI library
#define PIN_SPI_SS   SPI_CS
#define PIN_SPI_MOSI SPI_SDO
#define PIN_SPI_MISO SPI_SDI
#define PIN_SPI_SCK  SPI_CLK

#endif // _VARIANT_H_
