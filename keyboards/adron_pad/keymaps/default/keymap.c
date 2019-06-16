#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _L1 0

#define _FUNC 15

// Defines for task manager and such
#define CALTDEL LCTL(LALT(KC_DEL))
#define TSKMGR LCTL(LSFT(KC_ESC))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Layer 1
 * ,------.
 * |  2   |
 * |------|
 * |  4   |
 * |------|
 * |  6   |
 * `------'
 */
[_L1] = LAYOUT( \
    KC_1, \
    KC_2, \
    KC_3  \
)

};

void matrix_init_user(void) {

}
