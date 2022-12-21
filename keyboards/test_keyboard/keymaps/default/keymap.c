#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_3x2(
        KC_LEFT,   KC_UP,   KC_A,
        KC_DOWN,   KC_RIGHT
    )
};
