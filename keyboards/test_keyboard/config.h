// Copyright 2022 Catello (@CateCio)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

#    define OLED_DISPLAY_128X64
#define I2C1_SCL_PIN        GP27
#define I2C1_SDA_PIN        GP26
#define I2C_DRIVER I2CD2
#define OLED_BRIGHTNESS 128
#define OLED_FONT_H "keyboards/1upkeyboards/pi40/lib/glcdfont.c"

// Encoder
#define ENCODER_PUSHBUTTON_PIN GP18
#define ENCODERS_PAD_A { GP17 }
#define ENCODERS_PAD_B { GP16 }

/* key matrix size */
#define MATRIX_ROWS 2
#define MATRIX_COLS 3

#define DIODE_DIRECTION COL2ROW

#define MATRIX_ROW_PINS { GP7, GP6 }
#define MATRIX_COL_PINS { GP9, GP8, GP18 }

#define DEBOUNCE 5

/* Bootmagic Lite key configuration */
/* #define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0 */