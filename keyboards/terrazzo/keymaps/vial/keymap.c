/* Copyright 2020 ademey "MsMustard"
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/* Ortho layout with all 1u
 * make terrazzo:othro_all
 */
#include QMK_KEYBOARD_H

enum layers {
	_QWERTY,
	_RAISE,
	_LOWER

};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_QWERTY] = LAYOUT_ortho_all(
	  	  KC_MUTE, KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,       KC_T,   KC_Y,   KC_U,       KC_I,     KC_O,    KC_P,    KC_BSPC,
	      TZ_NXT,  KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,       KC_G,   KC_H,   KC_J,       KC_K,     KC_L,    KC_SCLN, KC_ENT,
	      TZ_PRV,  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,       KC_B,   KC_N,   KC_M,       KC_COMM,  KC_DOT,  KC_SLSH, KC_RSFT,
	      TZ_OFF,           KC_TAB,  KC_LGUI, KC_RALT, MO(_LOWER), KC_SPC, KC_SPC, MO(_RAISE), KC_BSPC,  KC_ENT, KC_LCTL
    ),

    [_RAISE] = LAYOUT_ortho_all(
        _______, KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
	      _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MINS, KC_EQL,  KC_SCLN, KC_QUOT, _______,
	      _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BSLS, KC_LBRC, KC_RBRC, _______, _______,
	      _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

    [_LOWER] = LAYOUT_ortho_all(
        _______, KC_TAB,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
	      _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_UNDS, KC_PLUS, KC_COLN, KC_DQT,  _______,
	      _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_PIPE, KC_LCBR, KC_RCBR, _______, _______,
	      _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    )

};

bool encoder_update_user(uint8_t index, bool clockwise) {
    terrazzo_scroll_pixel(clockwise);
    switch(index) {
      case 0:
        clockwise ? tap_code(KC_PGDN) : tap_code(KC_PGUP);
        break;
      case 1:
        clockwise ? tap_code(KC_AUDIO_VOL_UP) : tap_code(KC_AUDIO_VOL_DOWN);
        break;        
    }
    return true;
}

