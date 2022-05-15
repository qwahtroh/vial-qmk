#include "oshambles.h"

// Layers
enum layer_names {
  _BASE,
  _RIGHT,
  _LEFT,
  _EMPTY
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* BASE
  .--------------------.   .--------------------.  .--------------------.  .--------------------.
  |      |      |      |   |      |      |      |  |      |      |      |  |      |      |      |
  |      |      |      |   |      |      |      |  |      |      |      |  |      |      |      |
  `--------------------`   `--------------------`  `--------------------`  `--------------------`
  .--------------------.   .---------------------------------------------------------------------.
  |      |      |      |   |  Q   |   W  |   E  |  R   |   T  |  Y   |  U   |  I  |  O   |   P   |
  |      |      |      |   |      |      |      |      |      |      |      |     |      |       |
  |------+------+------|   |------+------+------+------+------+------+------+-----+------+-------|
  |      |      |      |   |  A   |   S  |   D  |  F   |   G  |  H   |  J   |  K  |  L   |   '   |
  |      |      |      |   |      |      |      |      |      |      |      |     |      |       |
  |------+------+------|   |------+------+------+------+------+------+------+-----+------+-------|
  |      |      |      |   |  Z   |   X  |   C  |  V   |   B  |  N   |  M   |  ,  |  .   |   /   |
  |      |      |      |   |      |      |      |      |      |      |      |     |      |       |
  |------+------+------|   |---------------------------------------------------------------------|
  |      |      |      |   |        |        |      | BSPC | ENT |  SPC |      |        |        |
  |      |      |      |   |        |        |      |      |     |      |      |        |        |
  `--------------------`   `---------------------------------------------------------------------`
*/
  	[_BASE] = LAYOUT (
    KC_A,   KC_A,  KC_A,       KC_A,   KC_A,   KC_A,         KC_A,   KC_A,   KC_A,        KC_A,   KC_A,   KC_A,                
    KC_A,   KC_A,  KC_A,       KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,
    KC_A,   KC_A,  KC_A,       KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,
    KC_A,   KC_A,  KC_A,       KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,
    KC_A,   KC_A,  KC_A,       KC_A,   KC_A,         KC_A,   KC_A,   KC_A,   KC_A,   KC_A,        KC_A,   KC_A
    ),

/* RIGHT (NAVIGATION, FUNCTIONS, AND SETTINGS)
  .--------------------.   .--------------------.  .--------------------.  .--------------------.
  |      |      |      |   |      |      |      |  |      |      |      |  |      |      |      |
  |      |      |      |   |      |      |      |  |      |      |      |  |      |      |      |
  `--------------------`   `--------------------`  `--------------------`  `--------------------`
  .--------------------.   .---------------------------------------------------------------------.
  |      |      |      |   |  Q   |   W  |   E  |  R   |   T  |  Y   |  U   |  I  |  O   |   P   |
  |      |      |      |   |      |      |      |      |      |      |      |     |      |       |
  |------+------+------|   |------+------+------+------+------+------+------+-----+------+-------|
  |      |      |      |   |  A   |   S  |   D  |  F   |   G  |  H   |  J   |  K  |  L   |   '   |
  |      |      |      |   |      |      |      |      |      |      |      |     |      |       |
  |------+------+------|   |------+------+------+------+------+------+------+-----+------+-------|
  |      |      |      |   |  Z   |   X  |   C  |  V   |   B  |  N   |  M   |  ,  |  .   |   /   |
  |      |      |      |   |      |      |      |      |      |      |      |     |      |       |
  |------+------+------|   |---------------------------------------------------------------------|
  |      |      |      |   |        |        |      | BSPC | ENT |  SPC |      |        |        |
  |      |      |      |   |        |        |      |      |     |      |      |        |        |
  `--------------------`   `---------------------------------------------------------------------`
*/  
    [_RIGHT] = LAYOUT (
    KC_A,   KC_A,  KC_A,       KC_A,   KC_A,   KC_A,         KC_A,   KC_A,   KC_A,        KC_A,   KC_A,   KC_A,                
    KC_A,   KC_A,  KC_A,       KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,
    KC_A,   KC_A,  KC_A,       KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,
    KC_A,   KC_A,  KC_A,       KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,
    KC_A,   KC_A,  KC_A,       KC_A,   KC_A,         KC_A,   KC_A,   KC_A,   KC_A,   KC_A,        KC_A,   KC_A
    ),
  
  /* LEFT (NUMBERS AND SYMBOLS)
  .--------------------.   .--------------------.  .--------------------.  .--------------------.
  |      |      |      |   |      |      |      |  |      |      |      |  |      |      |      |
  |      |      |      |   |      |      |      |  |      |      |      |  |      |      |      |
  `--------------------`   `--------------------`  `--------------------`  `--------------------`
  .--------------------.   .---------------------------------------------------------------------.
  |      |      |      |   |  Q   |   W  |   E  |  R   |   T  |  Y   |  U   |  I  |  O   |   P   |
  |      |      |      |   |      |      |      |      |      |      |      |     |      |       |
  |------+------+------|   |------+------+------+------+------+------+------+-----+------+-------|
  |      |      |      |   |  A   |   S  |   D  |  F   |   G  |  H   |  J   |  K  |  L   |   '   |
  |      |      |      |   |      |      |      |      |      |      |      |     |      |       |
  |------+------+------|   |------+------+------+------+------+------+------+-----+------+-------|
  |      |      |      |   |  Z   |   X  |   C  |  V   |   B  |  N   |  M   |  ,  |  .   |   /   |
  |      |      |      |   |      |      |      |      |      |      |      |     |      |       |
  |------+------+------|   |---------------------------------------------------------------------|
  |      |      |      |   |        |        |      | BSPC | ENT |  SPC |      |        |        |
  |      |      |      |   |        |        |      |      |     |      |      |        |        |
  `--------------------`   `---------------------------------------------------------------------`
*/  
    [_LEFT] = LAYOUT (
    KC_A,   KC_A,  KC_A,       KC_A,   KC_A,   KC_A,         KC_A,   KC_A,   KC_A,        KC_A,   KC_A,   KC_A,                
    KC_A,   KC_A,  KC_A,       KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,
    KC_A,   KC_A,  KC_A,       KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,
    KC_A,   KC_A,  KC_A,       KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,
    KC_A,   KC_A,  KC_A,       KC_A,   KC_A,         KC_A,   KC_A,   KC_A,   KC_A,   KC_A,        KC_A,   KC_A
    ),

  /* EMPTY
  .--------------------.   .--------------------.  .--------------------.  .--------------------.
  |      |      |      |   |      |      |      |  |      |      |      |  |      |      |      |
  |      |      |      |   |      |      |      |  |      |      |      |  |      |      |      |
  `--------------------`   `--------------------`  `--------------------`  `--------------------`
  .--------------------.   .---------------------------------------------------------------------.
  |      |      |      |   |  Q   |   W  |   E  |  R   |   T  |  Y   |  U   |  I  |  O   |   P   |
  |      |      |      |   |      |      |      |      |      |      |      |     |      |       |
  |------+------+------|   |------+------+------+------+------+------+------+-----+------+-------|
  |      |      |      |   |  A   |   S  |   D  |  F   |   G  |  H   |  J   |  K  |  L   |   '   |
  |      |      |      |   |      |      |      |      |      |      |      |     |      |       |
  |------+------+------|   |------+------+------+------+------+------+------+-----+------+-------|
  |      |      |      |   |  Z   |   X  |   C  |  V   |   B  |  N   |  M   |  ,  |  .   |   /   |
  |      |      |      |   |      |      |      |      |      |      |      |     |      |       |
  |------+------+------|   |---------------------------------------------------------------------|
  |      |      |      |   |        |        |      | BSPC | ENT |  SPC |      |        |        |
  |      |      |      |   |        |        |      |      |     |      |      |        |        |
  `--------------------`   `---------------------------------------------------------------------`
  */
    [_EMPTY] = LAYOUT (
    KC_A,   KC_A,  KC_A,       KC_A,   KC_A,   KC_A,         KC_A,   KC_A,   KC_A,        KC_A,   KC_A,   KC_A,                
    KC_A,   KC_A,  KC_A,       KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,
    KC_A,   KC_A,  KC_A,       KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,
    KC_A,   KC_A,  KC_A,       KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,
    KC_A,   KC_A,  KC_A,       KC_A,   KC_A,         KC_A,   KC_A,   KC_A,   KC_A,   KC_A,        KC_A,   KC_A
    )
  };

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code_delay(KC_VOLU, 10);
        } else {
            tap_code_delay(KC_VOLD, 10);
        }
    }
    return false;
}