#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    // base layer
    [0] =  LAYOUT_split_3x6_3(
      KC_ESC,         KC_Q,    KC_W,    KC_G,    KC_P,    KC_COMM,                     KC_DOT,  KC_U,    KC_F,    KC_QUOT,  KC_GRV,  KC_PSCR,
      KC_TAB,         HOME_S,  HOME_A,  HOME_R,  HOME_T,  KC_L,                        KC_M,    HOME_N,  HOME_O,  HOME_E,   HOME_I,  KC_MPLY,
      OSM(MOD_LCTL),  KC_Z,    KC_X,    KC_V,    KC_C,    KC_B,                        KC_H,    KC_D,    KC_Y,    KC_J,     KC_K,    KC_CIRC,
                                    KC_LGUI,  KC_SPC,  LALT_T(KC_ENT),  RALT_T(KC_DEL),  KC_BSPC, TO(1)
    ),

    // symbols layer
    [1] = LAYOUT_split_3x6_3(
      KC_ESC,         KC_PIPE,  KC_BSLS,  KC_SLSH,  KC_MINS,  KC_UNDS,                     KC_EXLM,  KC_DQT,   KC_TILD,  KC_COLN,  XXXXXXX,  KC_PSCR,
      KC_TAB,         KC_AMPR,  KC_LABK,  KC_LCBR,  KC_LPRN,  KC_LBRC,                     KC_QUES,  KC_QUOT,  KC_GRV,   KC_SCLN,  XXXXXXX,  KC_MPLY,
      OSM(MOD_LCTL),  KC_HASH,  KC_RABK,  KC_RCBR,  KC_RPRN,  KC_RBRC,                     KC_CIRC,  KC_AT,    KC_DLR,   XXXXXXX,  XXXXXXX,  XXXXXXX,
                                    TO(0),  KC_SPC,  LALT_T(KC_ENT),    RALT_T(KC_DEL),  KC_BSPC,  TO(2)
    ),

    // navigation layer
    [2] = LAYOUT_split_3x6_3(
      KC_ESC,         XXXXXXX,  XXXXXXX,  KC_PGUP,  KC_PGDN,  XXXXXXX,                     XXXXXXX,  KC_MPRV,  KC_VOLD,  KC_VOLU,  KC_MNXT,  KC_PSCR,
      KC_TAB,         XXXXXXX,  XXXXXXX,  KC_HOME,  KC_END,   KC_INS,                      XXXXXXX,  KC_LEFT,  KC_DOWN,    KC_UP,  KC_RGHT,  KC_MPLY,
      OSM(MOD_LCTL),  KC_UNDO,  KC_CUT,   KC_COPY,  KC_PSTE,  XXXXXXX,                     XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
                                    TO(0),  KC_SPC,  LALT_T(KC_ENT),    RALT_T(KC_DEL),  KC_BSPC,  TO(3)
    ),

    // numbers layer
    [3] = LAYOUT_split_3x6_3(
      KC_ESC,         XXXXXXX,  KC_F7,  KC_F8,  KC_F9,  KC_F10,                     KC_MINS,  KC_7,   KC_8,  KC_9,  KC_SLASH, KC_PSCR,
      KC_TAB,         XXXXXXX,  KC_F4,  KC_F5,  KC_F6,  KC_F11,                     KC_PLUS,  KC_4,  KC_5,  KC_6,  KC_EQL,   KC_MPLY,
      OSM(MOD_LCTL),  XXXXXXX,  KC_F1,  KC_F2,  KC_F3,  KC_F12,                     KC_0,    KC_1,  KC_2,  KC_3,  KC_ASTR,  KC_ENT,
                                    TO(0),  KC_SPC,  LALT_T(KC_ENT),    RALT_T(KC_DEL),  KC_BSPC,  TO(1)
    )
};
