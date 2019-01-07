#include QMK_KEYBOARD_H
#include "debug.h"
#include "action_layer.h"

#define BASE 0 // default layer
#define QWER 1 // qwerty base layer
#define MOUS 2 // symbols
#define MDIA 3 // media keys

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[BASE] = LAYOUT_ergodox(
        // left hand
        KC_GRV,          KC_1,           KC_2,     KC_3,    KC_4,            KC_5,   KC_EQUAL,
        KC_DELT,         KC_Q,           KC_W,     KC_F,    KC_P,            KC_G,   TG(QWER),
        LGUI_T(KC_ESC),  LT(MDIA, KC_A), KC_R,     KC_S,    LT(MOUS, KC_T),  KC_D,
        LSFT_T(KC_LBRC), CTL_T(KC_Z),    KC_X,     KC_C,    KC_V,            KC_B,   TG(MOUS),
        KC_CUT         , KC_COPY,        KC_PASTE, KC_LEFT, KC_UP,

                                                 KC_NO,         KC_NO,
                                                                KC_HOME,
                                        KC_BSPC, LALT_T(KC_TAB),KC_PGUP,
        // right hand
             KC_MINS,     KC_6,   KC_7,             KC_8,     KC_9,   KC_0,             KC_MINS,
             TG(QWER),    KC_J,   KC_L,             KC_U,     KC_Y,   KC_SCLN,          KC_BSLASH,
                          KC_H,   LT(MOUS, KC_N),   KC_E,     KC_I,   LT(MDIA, KC_O),   RGUI_T(KC_QUOT),
             TG(MOUS),    KC_K,   KC_M,             KC_COMM,  KC_DOT, CTL_T(KC_SLSH),   RSFT_T(KC_RBRC),
                                  KC_DOWN,          KC_RIGHT, KC_NO,  KC_NO,            RESET,

             KC_NO,  KC_NO,
             KC_END,
             KC_PGDN,RALT_T(KC_ENT),KC_SPC
    ),
// QWERTY
[QWER] = LAYOUT_ergodox(
        // left hand
        KC_TRNS,KC_TRNS,        KC_TRNS,   KC_TRNS,   KC_TRNS,       KC_TRNS,KC_TRNS,
        KC_TRNS,KC_Q,           KC_W,      KC_E,      KC_R,          KC_T,   KC_TRNS,
        KC_TRNS,LT(MDIA, KC_A), KC_S,      KC_D,      LT(MOUS, KC_F),KC_G,
        KC_TRNS,CTL_T(KC_Z),    KC_X,      KC_C,      KC_V,          KC_B,   KC_TRNS,
        KC_TRNS,KC_TRNS,        KC_TRNS,   KC_TRNS,   KC_TRNS,

                                                       KC_TRNS,KC_TRNS,
                                                               KC_TRNS,
                                               KC_TRNS,KC_TRNS,KC_TRNS,
        // right hand
             KC_TRNS,     KC_TRNS,   KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
             KC_TRNS,     KC_Y,      KC_U,          KC_I,    KC_O,    KC_P,             KC_TRNS,
                          KC_H,      LT(MOUS, KC_J),KC_K,    KC_L,    LT(MDIA, KC_SCLN),KC_TRNS,
             KC_TRNS,     KC_N,      KC_M,          KC_COMM, KC_DOT,  CTL_T(KC_SLSH),   KC_TRNS,
                                     KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,           KC_TRNS,

             KC_TRNS,KC_TRNS,
             KC_TRNS,
             KC_TRNS,KC_TRNS,KC_TRNS
    ),
// MOUSE
[MOUS] = LAYOUT_ergodox(
       // left hand
       KC_TRNS, KC_ACL0, KC_ACL1, KC_ACL2, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_MS_U, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_R, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_WH_L, KC_WH_U,
                                           KC_TRNS, KC_TRNS,
                                                    KC_TRNS,
                                  KC_BTN1, KC_BTN2, KC_BTN3,
    // right hand
       KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS,  KC_TRNS, KC_TRNS, KC_MS_U, KC_TRNS, KC_TRNS, KC_TRNS,
                 KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_R, KC_TRNS, KC_TRNS,
       KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                          KC_WH_D, KC_WH_R, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS,
       KC_TRNS,
       KC_BTN3, KC_BTN2, KC_BTN1
),
[MDIA] = LAYOUT_ergodox(
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_MRWD, KC__VOLUP,
                                            KC_TRNS,  KC_TRNS,
                                                      KC_TRNS,
                                  KC__MUTE, KC_MPLY,  KC_BRID,
    // right hand
       KC_TRNS,  KC_TRNS,  KC_F10,      KC_F11,  KC_F12,  KC_TRNS, KC_TRNS,
       KC_TRNS,  KC_TRNS,  KC_F7,       KC_F8,   KC_F9,   KC_TRNS, KC_TRNS,
                 KC_TRNS,  KC_F4,       KC_F5,   KC_F6,   KC_TRNS, KC_TRNS,
       KC_TRNS,  KC_TRNS,  KC_F1,       KC_F2,   KC_F3,   KC_TRNS, KC_TRNS,
                           KC__VOLDOWN, KC_MFFD, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS,
       KC_TRNS,
       KC_BRIU, KC_TRNS, KC_UNDS
),
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
        if (record->event.pressed) {
          register_code(KC_RSFT);
        } else {
          unregister_code(KC_RSFT);
        }
        break;
      }
    return MACRO_NONE;
};

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {

};

// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {

    uint8_t layer = biton32(layer_state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
      // TODO: Make this relevant to the ErgoDox EZ.
        case QWER:
            ergodox_right_led_1_on();
            break;
        case MOUS:
            ergodox_right_led_2_on();
            break;
        case MDIA:
            ergodox_right_led_3_on();
            break;
        default:
            // none
            break;
    }

};
