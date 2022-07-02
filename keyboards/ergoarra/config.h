// Copyright 2021 romulogarofalo (@romulogarofalo)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID 0xFEED
#define PRODUCT_ID 0x0000
#define DEVICE_VER 0x0001
#define MANUFACTURER romulogarofalo
#define PRODUCT ergoarra

/* key matrix size */
#define MATRIX_ROWS 12
#define MATRIX_COLS 7

/* key matrix pins */
// rigth side row (main)
#define MATRIX_ROW_PINS { B6, B2, B3, B1, F7, D2 }
// rigth side col (main)
#define MATRIX_COL_PINS { B4, E6, D7, C6, F6, F5, D1 }
// #define MATRIX_COL_PINS { D1, F5, F6, C6, D7, E6, B4 }

// #define DIRECT_PINS_RIGHT { { B6, B2, B3, B1, F7, D2 }, { B4, E6, D7, C6, F6, F5, D1 } }

// left side row (main)
// #define MATRIX_ROW_PINS { B6, B2, B3, B1, F7, F6 }
// left side col (main)
// #define MATRIX_COL_PINS { F5, D4, C6, D7, E6, B4, B5 }

#define UNUSED_PINS

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

/*
 * Split Keyboard specific options, make sure you have 'SPLIT_KEYBOARD = yes' in your rules.mk, and define SOFT_SERIAL_PIN.
 */
#define SOFT_SERIAL_PIN D0  // or D1, D2, D3, E6

#define MASTER_RIGTH

// #define EE_HANDS

/* define if matrix has ghost (lacks anti-ghosting diodes) */
//#define MATRIX_HAS_GHOST

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
// #define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
// #define LOCKING_RESYNC_ENABLE

/* If defined, GRAVE_ESC will always act as ESC when CTRL is held.
 * This is useful for the Windows task manager shortcut (ctrl+shift+esc).
 */
//#define GRAVE_ESC_CTRL_OVERRIDE


/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

/* disable these deprecated features by default */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

/* Bootmagic Lite key configuration */
//#define BOOTMAGIC_LITE_ROW 0
//#define BOOTMAGIC_LITE_COLUMN 0
