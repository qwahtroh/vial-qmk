#include QMK_KEYBOARD_H

#define ____ KC_TRNS

// Layers
enum layer_names {
  _BASE,
  _RIGHT,
  _LEFT
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* BASE
  .-----------------------------------------.
  | ESC  | CUT  | COPY | PASTE| PLY2 | PLY  | (MUTE)  (PLAY/PAUSE)
  |------+------+------+------+------+------+---------------------------------.
  |  Q   |   W  |   E  |  R   |   T  | DEL  |  Y   |  U   |  I  |  O   |   P   |
  |------+------+------+------+------+------+------+------+-----+------+-------|
  |  A   |   S  |   D  |  F   |   G  | TAB  |  H   |  J   |  K  |  L   |   ;   |
  |------+------+------+------+------+------+------+------+-----+------+-------|
  |  Z   |   X  |   C  |  V   |   B  |      |  N   |  M   |  ,  |  .   |   /   |
  |------+------+------+------+------+------+------+------+-----+------+-------|
  | DEL  |  WIN | ALT  | CTRL | BSPC | ENT  | SPC  | LEFT |  UP | DOWN | RIGHT |
  |      |      |      |      | LEFT | SHFT | RIGHT|      |     |      |       |
  `----------------------------------------------------------------------------`
*/
  	[_BASE] = LAYOUT (
    KC_ESC,        KC_CUT,       KC_COPY,      KC_PASTE,     KC_MNXT,            KC_MPLY,                  KC_MPLY,             KC_MPLY,
    KC_Q,          KC_W,         KC_E,         KC_R,         KC_T,               KC_DEL,        KC_Y,                KC_U,        KC_I,         KC_O,         KC_P,
    KC_A,          KC_S,         KC_D,         KC_F,         KC_G,               KC_TAB,        KC_H,                KC_J,        KC_K,         KC_L,         KC_SCLN,
    KC_Z,          KC_X,         KC_C,         KC_V,         KC_B,               _______,       KC_N,                KC_M,        KC_COMM,      KC_DOT,       KC_SLSH,
    KC_DEL,        KC_LGUI,      KC_LALT,      KC_LCTL,      LT(_LEFT, KC_BSPC), LSFT(KC_ENT),  LT(_RIGHT, KC_SPC),  KC_LEFT,     KC_UP,        KC_DOWN,      KC_RIGHT
    ),

/* RIGHT (NAVIGATION, FUNCTIONS, AND SETTINGS)
  .----------- -----------------------------.
  | QWER |      |      |      | iPad |RESET | (     )  (RGB TOG / COLOR)
  |------+------+------+------+------+------+------------------------------------.
  |  F1  |  F2  |  F3  |  F4  |      |      |      | HOME  | PGUP  | PGDN  | END  |
  |------+------+------+------+------+------+------+-------+-------+-------+------|
  |  F5  |  F6  |  F7  |  F8  |      |PLAIN |      |  UP   | DOWN  | LEFT  | RIGHT|
  |------+------+------+------+------+------+------+-------+-------+-------+------|
  |  F9  |  F10 |  F11 |  F12 |      |      |      |       |       |       |      |
  |------+------+------+------+------+------+------+-------+-------+-------+------|
  | SHFT |      |      |      | TRNS | TRNS | TRNS |       |       | BRGHT | SAT  |
  `-------------------------------------------------------------------------------`
*/  
    [_RIGHT] = LAYOUT (
    _______, _______,     _______,      _______,   _______, RESET,              _______, RGB_TOG,
    KC_F1,       KC_F2,       KC_F3,        KC_F4,     _______, _______, _______, KC_HOME,  KC_PGUP,  KC_PGDN,  KC_END,
    KC_F5,       KC_F6,       KC_F7,        KC_F8,     _______, RGB_M_P, _______, KC_LEFT,  KC_UP,    KC_DOWN,  KC_RIGHT,
    KC_F9,       KC_F10,      KC_F11,       KC_F12,    _______, _______, _______, _______,  _______,  _______,  _______,
    KC_LSFT,     _______,     _______,      _______,   KC_TRNS, KC_TRNS, KC_TRNS, _______,  _______,  RGB_VAI,  RGB_SAI
    ),
  
  /* LEFT (NUMBERS AND SYMBOLS)
  .------------------------------------------.
  | CALC |      |      |      |      | SLEEP | (      ) (        )
  |------+------+------+------+------+-------+-----------------------------------.
  |      | &    | *    | (    |      |       | ~    |      |      |       |      |
  |  *   |   7  |   8  |  9   |   +  |       |   `  |   (  |   )  |   _   |  =   |
  |------+------+------+------+------+-------+------+------+------+-------+------|
  | ?    | $    | %    | ^    |      |       | |    | {    |  }   |  :    | "    |
  |   /  |   4  |   5  |  6   |   -  |       |   \  |   [  |    ] |    ;  |   '  |
  |------+------+------+------+------+-------+------+------+------+-------+------|
  | )    | !    | @    | #    |      |       |      |      |      |       |      |
  |   0  |   1  |   2  |  3   | ENT  |       |      |   <  |   >  |       |   ?  |
  |------+------+------+------+------+-------+------+------+------+------+-------|
  | SHFT |      |   .  | TAB  | TRNS | TRNS  | TRNS |  LEFT |  UP | DOWN | RIGHT |
  `------------------------------------------------------------------------------`
*/  
    [_LEFT] = LAYOUT (
    KC_CALC,    _______,  _______, _______, _______,      KC_SLEP,                     _______,   _______,
    KC_EQUAL,   KC_7,     KC_8,    KC_9,    KC_PLUS,      _______,  KC_GRV,    KC_LPRN,   KC_RPRN,    KC_UNDS,   KC_EQL,
    KC_SLSH,    KC_4,     KC_5,    KC_6,    KC_MINS,      _______,  KC_BSLS,   KC_LBRC,   KC_RBRC,    KC_SCLN,   KC_QUOT,
    KC_0,       KC_1,     KC_2,    KC_3,    KC_ENT,       _______,  _______,   KC_RABK,   KC_HASH,    _______,   KC_QUES,
    KC_LSFT,    _______,  _______, _______, KC_TRNS,      KC_TRNS,  KC_TRNS,   KC_LEFT,   KC_UP,      KC_DOWN,   KC_RIGHT
    )

    [_LEFT] = LAYOUT (
    _______,   _______,  _______, _______, _______,      _______,                    _______,     _______,
    _______,   _______,  _______, _______, _______,      _______,  _______,   _______,   _______,    _______,   _______,
    _______,   _______,  _______, _______, _______,      _______,  _______,   _______,   _______,    _______,   _______,
    _______,   _______,  _______, _______, _______,      _______,  _______,   _______,   _______,    _______,   _______,
    _______,   _______,  _______, _______, _______,      _______,  _______,   _______,   _______,    _______,   _______
    )
  };

void encoder_update_user(uint8_t index, bool clockwise) {

// Left Encoder
  if (index == 0) { 
  // Left Layer
    if(IS_LAYER_ON(_LEFT)) {
        if (clockwise) {
            rgblight_step();
        } else {
           rgblight_step_reverse();        
      }
    }
  // Base Layer
    else { 
      if (clockwise){
        tap_code(KC_WH_U);
      } else{
        tap_code(KC_WH_D);
      }
    } 
  }

// Right Encoder  
  if (index == 1) { 
  // Left Layer
    if(IS_LAYER_ON(_LEFT)) { 
      if (clockwise){
        rgblight_increase_hue();
      } else{
        rgblight_decrease_hue();
      }        
    }
  // Base Layer
    else { 
      if (clockwise){
        tap_code(KC_VOLD);
      } else{
        tap_code(KC_VOLU);
      }
    }
  }
}

#ifdef OLED_DRIVER_ENABLE
void oled_task_user(void) {
    // Host Keyboard Layer Status
    oled_write_P(PSTR("Layer: "), false);

    switch (get_highest_layer(layer_state)) {
        case _BASE:
            oled_write_P(PSTR("BASE\n"), false);
            break;
        case _LEFT:
            oled_write_P(PSTR("LEFT\n"), false);
            break;
        case _RIGHT:
            oled_write_P(PSTR("RIGHT\n"), false);
            break;
        default:
            // Or use the write_ln shortcut over adding '\n' to the end of your string
            oled_write_ln_P(PSTR("Undefined"), false);
    }

    // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
    oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
    oled_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);
}

#endif