#ifndef TLC5951_h
#define TLC5951_h

#include <stdio.h>
#include <stdint.h>
#include "pin_manager.h"
#include "device_config.h"
#include "spi1.h"

void TLC5951_init(uint16_t grayscale);
void TLC5951_setAllGSData(uint16_t gsvalue);
void TLC5951_updateGS();
void TLC5951_setLED(uint8_t led, uint16_t red, uint16_t green, uint16_t blue);
void TLC5951_setFunctionData(uint8_t data);
void TLC5951_setBrightness(uint8_t red, uint8_t green, uint8_t blue);
void TLC5951_setAllDCData(uint8_t dcvalue);
void TLC5951_updateControl();
void TLC5951_update();
void TLC5951_setBuffer(uint8_t bit);

uint8_t _functionData;
uint8_t _brightRed;
uint8_t _brightGreen;
uint8_t _brightBlue;
uint8_t _dcData[8][3];

// [0-7 LED][0-2 RGB]
uint16_t _gsData[8][3];

// SPI
uint8_t _buffer;
uint8_t _bufferCount;

#endif