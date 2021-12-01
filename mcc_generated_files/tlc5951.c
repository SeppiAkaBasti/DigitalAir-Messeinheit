#include "tlc5951.h"

#define bit_set(p, m) ((p) |= (m))
#define bit_clear(p, m) ((p) &= ~(m))
#define bit_write(c, p, m) (c ? bit_set(p, m) : bit_clear(p, m))

void TLC5951_init(uint16_t grayscale)
{
    _bufferCount = 0;
    TLC5951_setAllGSData(grayscale);
}

void TLC5951_setAllGSData(uint16_t gsvalue)
{
    for (int8_t a = 0; a < 8; a++)
    {
        for (int8_t b = 0; b < 3; b++)
        {
            _gsData[a][b] = gsvalue;
        }
    }
}

void TLC5951_updateGS()
{
    _bufferCount = 0;

    XBLNK_SetLow(); // Turn off the LED's since we're clocking in data
                    // GS Latch low, so it goes into the GS data latch

    for (int8_t a = 7; a >= 0; a--)
    { // We have 8 LED's. Start at the last since thats how we clock data out
        for (int8_t b = 2; b >= 0; b--)
        { // Each with 3 colors
            for (int8_t c = 11; c >= 0; c--)
            { // each consiting of 12 bits
                TLC5951_setBuffer((_gsData[a][b] & (1 << c)));
            }
        }
    }

    __delay_ms(1);

    GSLAT_SetHigh();
    GSLAT_SetLow();

    XBLNK_SetHigh();
}

void TLC5951_setLED(uint8_t led, uint16_t red, uint16_t green, uint16_t blue)
{
    _gsData[led][2] = blue;
    _gsData[led][1] = green;
    _gsData[led][0] = red;
}

void TLC5951_setFunctionData(uint8_t data)
{
    _functionData = data;
}

void TLC5951_setBrightness(uint8_t red, uint8_t green, uint8_t blue)
{
    _brightRed = red;
    _brightGreen = green;
    _brightBlue = blue;
}

void TLC5951_setAllDCData(uint8_t dcvalue)
{
    for (int8_t a = 0; a < 8; a++)
    {
        for (int8_t b = 0; b < 3; b++)
        {
            _dcData[a][b] = dcvalue;
        }
    }
}

void TLC5951_updateControl()
{
    _bufferCount = 0;

    XBLNK_SetLow();
    GSLAT_SetHigh();

    // 89 blank bits to get to correct position for DC/DC/FC (Disregard UD) data
    for (int8_t a = 0; a < 89; a++)
    {
        TLC5951_setBuffer(0);
    }

    // 7-bit Function Data
    for (int8_t a = 6; a >= 0; a--)
    {
        TLC5951_setBuffer((_functionData & (1 << a)));
    }

    // Blue Brightness
    for (int8_t a = 7; a >= 0; a--)
    {
        TLC5951_setBuffer((_brightBlue & (1 << a)));
    }

    // Green Brightness
    for (int8_t a = 7; a >= 0; a--)
    {
        TLC5951_setBuffer((_brightGreen & (1 << a)));
    }

    // Red Brightness
    for (int8_t a = 7; a >= 0; a--)
    {
        TLC5951_setBuffer((_brightRed & (1 << a)));
    }

    // Dot Correctness data
    for (int8_t a = 7; a >= 0; a--)
    {
        for (int8_t b = 2; b >= 0; b--)
        {
            for (int8_t c = 6; c >= 0; c--)
            {
                TLC5951_setBuffer(_dcData[a][b] & (1 << c));
            }
        }
    }

    GSLAT_SetLow();
    __delay_ms(1); // 10µs waren vorher eingestetllt

    GSLAT_SetHigh();
    GSLAT_SetLow();

    XBLNK_SetHigh();
}

void TLC5951_update()
{
    TLC5951_updateControl();
    TLC5951_updateGS();
}

void TLC5951_setBuffer(uint8_t bit)
{
    bit_write(_buffer, _bufferCount, bit);
    _bufferCount++;
    if (_bufferCount == 8)
    {
        // LSBFIRST
        SPI1_Open(SPI1_DEFAULT);
        SPI1_ExchangeByte(_buffer);
        SPI1_Close();
        _bufferCount = 0;
        _buffer = 0;
    }
}
