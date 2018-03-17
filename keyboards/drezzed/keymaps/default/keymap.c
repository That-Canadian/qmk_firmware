#include "drezzed.h"
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0

#define _FN1 15

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
};

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO

// Defines for task manager and such
#define CALTDEL LCTL(LALT(KC_DEL))
#define TSKMGR LCTL(LSFT(KC_ESC))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 *
 * ,-----------------------------------------.                   ,-----------------------------------------.
 * | TILD |   1  |   2  |   3  |   4  |   5  |                   |   6  |   7  |   8  |   9  |   0  |  Del |
 * |------+------+------+------+------+------|                   |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                   |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+------+------.     .------+------+------+------+------+------+------|
 * | Caps |   A  |   S  |   D  |   F  |   G  |Scrlk |     | Scrlk|   H  |   J  |   K  |   L  |   ;  | Ent  |
 * |------+------+------+------+------+------+------|     |------+------+------+------+------+------+------|
 * | Shft |   Z  |   X  |   C  |   V  |   B  |   +  |     |   =  |   N  |   M  |   ,  |   .  |   /  |   '  |
 * |------+------+------+------+------+------+------'     '------+------+------+------+------+------+------|
 * | Esc  |  GUI |  Alt |  Del |      |Bcksp |                   | Spc  |      |  Left| Down |  Up  | Right|
 * `----------------------------------+------|                   |------+------+------+------+------+------'
 *                                    |  FN1 |                   | Spc  |     
 *                                    `------+------.     .------+------'
 *                                           | Shft |     |  Spc |
 *                                           `------'     `------'
 */
[_QWERTY] = KEYMAP( \
	KC_GRV, KC_1,   KC_2,   KC_3,  KC_4, KC_5,                     KC_6,  KC_7,   KC_8,   KC_9,  KC_0,   KC_DEL, \
	KC_TAB, KC_Q,   KC_W,   KC_E,  KC_R, KC_T,                     KC_Y,  KC_U,   KC_I,   KC_O,  KC_P,   KC_BSPC, \
	KC_CAPS,KC_A,   KC_S,   KC_D,  KC_F, KC_G,   KC_SLCK,  KC_SLCK,KC_H,  KC_J,   KC_K,   KC_L,  KC_SCLN,KC_ENT, \
    KC_LSFT,KC_Z,   KC_X,   KC_C,  KC_V, KC_B,   KC_PLUS,  KC_EQL, KC_N,  KC_M,   KC_COMM,KC_DOT,KC_SLSH,KC_QUOT, \
    KC_ESC, KC_LGUI,KC_LALT,KC_DEL,      KC_BSPC,                  KC_SPC,KC_LEFT,KC_DOWN,KC_UP, KC_RGHT, \
                                         MO(_FN1),KC_LSFT, KC_SPC, KC_SPC  \
	),

/* FN1
 *
 * ,-----------------------------------------.                   ,-----------------------------------------.
 * | RESET|   1  |   2  |   3  |   4  |   5  |                   |   6  |   7  |   8  |   9  |   0  |  Del |
 * |------+------+------+------+------+------|                   |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                   |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+------+------.     .------+------+------+------+------+------+------|
 * | Caps |   A  |   S  |   D  |   F  |   G  |Scrlk |     | Scrlk|   H  |   J  |   K  |   L  |   ;  | Ent  |
 * |------+------+------+------+------+------+------|     |------+------+------+------+------+------+------|
 * | Shft |   Z  |   X  |   C  |   V  |   B  |   +  |     |   =  |   N  |   M  |   ,  |   .  |   /  |   '  |
 * |------+------+------+------+------+------+------'     '------+------+------+------+------+------+------|
 * | Esc  |  GUI |  Alt |  Del |      |Bcksp |                   | Spc  |      |  Left| Down |  Up  | Right|
 * `----------------------------------+------|                   |------+------+------+------+------+------'
 *                                    |  FN1 |                   | Spc  |     
 *                                    `------+------.     .------+------'
 *                                           | Shft |     |  Spc |
 *                                           `------'     `------'
 */
[_FN1] = KEYMAP( \
	RESET,  KC_1,   KC_2,   KC_3,  KC_4, KC_5,                     KC_6,  KC_7,   KC_8,   KC_9,  KC_0,   KC_DEL, \
	KC_TAB, KC_Q,   KC_W,   KC_E,  KC_R, KC_T,                     KC_Y,  KC_U,   KC_I,   KC_O,  KC_P,   KC_BSPC, \
	KC_CAPS,KC_A,   KC_S,   KC_D,  KC_F, KC_G,   KC_SLCK,  KC_SLCK,KC_H,  KC_J,   KC_K,   KC_L,  KC_SCLN,KC_ENT, \
    KC_LSFT,KC_Z,   KC_X,   KC_C,  KC_V, KC_B,   KC_PLUS,  KC_EQL, KC_N,  KC_M,   KC_COMM,KC_DOT,KC_SLSH,KC_QUOT, \
    KC_ESC, KC_LGUI,KC_LALT,KC_DEL,      KC_BSPC,                  KC_SPC,KC_LEFT,KC_DOWN,KC_UP, KC_RGHT, \
                                         _______,KC_LSFT, KC_SPC, KC_SPC  \
	)
};

void persistant_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        #ifdef AUDIO_ENABLE
          PLAY_SONG(tone_qwerty);
        #endif
        persistant_default_layer_set(1UL<<_QWERTY);
      }
      return false;
      break;
  }
  return true;
}
