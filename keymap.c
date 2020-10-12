#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _LOWER  1
#define _RAISE  2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Esc  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  "   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Caps | Ctrl | Alt  | GUI  | Space| Lower|Raise |Space | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
[_QWERTY] = LAYOUT_ortho_4x12(
    KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,        KC_T,    KC_Y,    KC_U,        KC_I,     KC_O,     KC_P,     KC_BSPC, \
    KC_ESC,   KC_A,     KC_S,     KC_D,     KC_F,        KC_G,    KC_H,    KC_J,        KC_K,     KC_L,     KC_SCLN,  KC_QUOT, \
    KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,        KC_B,    KC_N,    KC_M,        KC_COMM,  KC_DOT,   KC_SLSH,  KC_ENT , \
    KC_CAPS,  KC_LCTL,  KC_LGUI,  KC_LALT,  TT(_LOWER),  KC_SPC,  KC_SPC,  TT(_RAISE),  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT  \
),

  /* Lower
   * ,-----------------------------------------------------------------------------------.
   * |   ~  |   !  |   @  |   #  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  | Del  |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |  Del |      |      |      |      |      |      |   _  |   +  |   {  |   }  |  \   |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |      |      |      |      |      |      |   -  |   =  |   [  |   ]  |  |   |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |      |      |      |      |      |      |      |      |      |      |      |
   * `-----------------------------------------------------------------------------------'
   */
[_LOWER] = LAYOUT_ortho_4x12( \
  KC_TILD,  KC_EXLM,  KC_AT,  KC_HASH,  KC_DLR,   KC_PERC,  KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_LPRN,  KC_RPRN,  KC_DEL,  \
  KC_DEL,   KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_UNDS,  KC_PLUS,  KC_LCBR,  KC_RCBR,  KC_BSLS, \
  KC_NO,    KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_MINS,  KC_EQL,   KC_LBRC,  KC_RBRC,  KC_PIPE, \
  KC_NO,    KC_NO,    KC_NO,  KC_NO,    _______,  KC_SPC,   KC_SPC,   _______,  KC_NO,    KC_NO,    KC_NO,    KC_NO    \
),

  /* Raise
   * ,-----------------------------------------------------------------------------------.
   * |  `   |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | DEL  |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |      | Home | PgDn | PgUp | End  |      |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |      |      |  ,   |  .   |      |Enter |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |      |      |      |      |      |autosh|      | Left | Down |  Up  |Right |
   * `-----------------------------------------------------------------------------------'
   */
[_RAISE] = LAYOUT_ortho_4x12( \
    KC_GRV,  KC_1,   KC_2,   KC_3,   KC_4,     KC_5,    KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_DEL, \
    KC_F1,   KC_F2,  KC_F3,  KC_F4,  KC_F5,    KC_F6,   KC_NO,    KC_HOME,  KC_PGDN,  KC_PGUP,  KC_END,   KC_NO,  \
    KC_F7,   KC_F8,  KC_F9,  KC_F10, KC_F11,   KC_F12,  KC_NO,    KC_NO,    KC_COMM,  KC_DOT,   KC_NO,    KC_ENT,  \
    KC_NO,   KC_NO,  KC_NO,  KC_NO,  _______,  KC_NO,   KC_ASTG,  _______,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT  \
),
};
