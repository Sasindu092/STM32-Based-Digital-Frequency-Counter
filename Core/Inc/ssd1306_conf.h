#ifndef __SSD1306_CONF_H__
#define __SSD1306_CONF_H__

#include "stm32f4xx_hal.h"

#define SSD1306_USE_I2C
#define SSD1306_HEIGHT    64
#define SSD1306_WIDTH     128

extern I2C_HandleTypeDef hi2c2;
#define SSD1306_I2C_PORT hi2c2

#define SSD1306_INCLUDE_FONT_7x10
#define SSD1306_INCLUDE_FONT_11x18

#endif
