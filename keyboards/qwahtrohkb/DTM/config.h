/*
Copyright %YEAR% %YOUR_NAME%

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0x7134 // qwahtroh 4 = "Q4"
#define PRODUCT_ID      0x0000
#define DEVICE_VER      0x0001
#define MANUFACTURER    qwahtroh
#define PRODUCT         DTM
#define DESCRIPTION     a 4x11(+6 keyboard)
#define VIAL_KEYBOARD_UID {0xB9, 0x36, 0xF0, 0x6C, 0x52, 0xE2, 0x79, 0x73}

#define USB_POLLING_INTERVAL_MS 1

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 11
#define MATRIX_ROW_PINS { A8, B4, B2, B1, B0 }
#define MATRIX_COL_PINS { B15, B14, B13, B8, A0, A1, A2, A15, A6, B3, B5}
#define DIODE_DIRECTION COL2ROW

/* encoder pins */
#define ENCODERS_PAD_A { B11, B9 }
#define ENCODERS_PAD_B { B12, B10 }
#define ENCODER_RESOLUTION 4
#define VIAL_ENCODER_DEFAULT { KC_A, KC_B, KC_C, KC_D, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_A, KC_B, KC_C, KC_D, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS}
#define VIAL_ENCODER_KEYCODE_DELAY 10 

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* ws2812 RGB LED */
#define RGB_DI_PIN A7
#define RGBLED_NUM 8    // Number of LEDs
#define RGBLIGHT_ANIMATIONS

#define USB_MAX_POWER_CONSUMPTION 100