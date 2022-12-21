#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_1x4(
        KC_LEFT,   KC_UP,   KC_DOWN,   KC_RIGHT
    )
};
