#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0x7134 // qwahtroh 4 = "Q4"
#define PRODUCT_ID      0x0000
#define DEVICE_VER      0x0002
#define MANUFACTURER    qwahtroh
#define PRODUCT         DTM2
#define DESCRIPTION     a 4x11(+6 keyboard)
#define VIAL_KEYBOARD_UID {0x5A, 0x26, 0x54, 0x8F, 0x72, 0x94, 0x03, 0x2A}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 1 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0


#define USB_POLLING_INTERVAL_MS 1

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 11
#define MATRIX_ROW_PINS { B2, B6, B5, B4, E6 }
#define MATRIX_COL_PINS { B3, B1, F7, F6, D7, D0, C6, D4, D1, D2, D3}
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

