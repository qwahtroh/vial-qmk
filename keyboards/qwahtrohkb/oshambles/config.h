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
#define PRODUCT_ID      0x0002
#define DEVICE_VER      0x0001
#define MANUFACTURER    qwahtroh
#define PRODUCT         oShambles
#define DESCRIPTION     a 5x12 keyboard

#define VIAL_KEYBOARD_UID {0xCE, 0x16, 0x6B, 0x8F, 0x7B, 0x72, 0x32, 0xD5}

#define USB_POLLING_INTERVAL_MS 1

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 8
#define MATRIX_ROW_PINS { C6, D7, B5, D4, D0, D1, D2, D3 }
#define MATRIX_COL_PINS { B2, B6, B3, F6, F5, F7, F4, B1 }
#define DIODE_DIRECTION COL2ROW

/* encoder pins */
#define ENCODERS_PAD_A { B4 }
#define ENCODERS_PAD_B { E6 }
#define ENCODER_RESOLUTION 4
#define VIAL_ENCODER_DEFAULT { KC_A, KC_B, KC_C, KC_D, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS }
#define VIAL_ENCODER_KEYCODE_DELAY 10 

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define USB_MAX_POWER_CONSUMPTION 100
