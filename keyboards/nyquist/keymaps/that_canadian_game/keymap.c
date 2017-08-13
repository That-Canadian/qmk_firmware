#include "nyquist.h"
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0
#define _FUNC 1

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  U_FUNC
};

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,-----------------------------------------.
 * | Esc  |   1  |   2  |   3  |   4  |   5  |
 * |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |
 * |------+------+------+------+------+------|
 * | Func |   A  |   S  |   D  |   F  |   G  |
 * |------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |
 * |------+------+------+------+------+------|
 * | Ctrl |   ~  | GUI  | Alt  |Space |Space |
 * `-----------------------------------------'
 */
[_QWERTY] = KEYMAP( \
  KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,  \
  KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,  \
  MO(_FUNC), KC_A,    KC_S,    KC_D,    KC_F,    KC_G,  \
  KC_LSFT,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,  \
  KC_LCTL,   KC_TILD, KC_LGUI, KC_LALT, KC_SPC,  KC_SPC \
),

/* Function
 * ,-----------------------------------------.
 * |   `  |   1  |   2  |   3  |   4  |   5  |
 * |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |
 * |------+------+------+------+------+------|
 * | Esc  |   A  |   S  |   D  |   F  |   G  |
 * |------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |
 * |------+------+------+------+------+------|
 * |RESET | Ctrl | Alt  | GUI  |Space |Space |
 * `-----------------------------------------'
 */
[_FUNC] = KEYMAP( \
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,  \
  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,  \
  KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,  \
  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,  \
  RESET,  KC_LCTL, KC_LALT, KC_LGUI, KC_SPC,   KC_SPC \
)


};

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        persistent_default_layer_set(1UL<<_QWERTY);
      }
      return false;
      break;
  }
  return true;
}