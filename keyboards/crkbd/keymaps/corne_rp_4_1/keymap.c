#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif

//const uint16_t PROGMEM esc_combo[] = {KC_Q, KC_W, COMBO_END};
//const uint16_t PROGMEM tab_combo[] = {KC_A, KC_R, COMBO_END};

//combo_t key_combos[] = {
//    COMBO(esc_combo, KC_ESC),
//    COMBO(tab_combo, KC_TAB),
//};

enum custom_keycodes {
    GAMINGTGL = SAFE_RANGE,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case GAMINGTGL:
        if (record->event.pressed) {
            //SEND_STRING(SS_TAP(TG(4)) SS_TAP(RGB_TOG));
            //tap_code_delay(TG(4), 100);
            //tap_code_delay(RGB_TOG, 100);
            //register_code16(TG(4));
            //unregister_code16(TG(4));
            //register_code16(RGB_TOG);
            //unregister_code16(RGB_TOG);
        } else {

        }
        break;
    }
    return true;
};

// Tap Dance declarations
//enum {
//    TD_Q_ESC,
//    TD_Y_TAB,
//};

// Tap Dance definitions
//tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Escape, twice for Caps Lock
//    [TD_Q_ESC] = ACTION_TAP_DANCE_DOUBLE(KC_Q, KC_ESC),
//    [TD_Y_TAB] = ACTION_TAP_DANCE_DOUBLE(KC_Y, KC_TAB),
//};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3_ex2(
//,-----------------------------------------------------.                       ,-----------------------------------------------------.
KC_ESC,    KC_Q,    KC_W,  KC_F,    KC_P,    KC_B, RM_NEXT,                     RM_SPDU,        KC_J,    KC_L,    KC_U,    KC_Z,   KC_SLSH, TG(4),
//|--------+--------+--------+--------+--------+--------|                       |--------+--------+--------+--------+--------+--------|
KC_TAB, LCTL_T(KC_A), LALT_T(KC_R), LGUI_T(KC_S), LSFT_T(KC_T), KC_G, RM_PREV, RM_SPDD,      KC_M, RSFT_T(KC_N), RGUI_T(KC_E), RALT_T(KC_I), RCTL_T(KC_O), LALT(KC_TAB),
//|--------+--------+--------+--------+--------+--------|                       |--------+--------+--------+--------+--------+--------|
MO(3), KC_Y, KC_X, KC_C, KC_D, KC_V,                                                        KC_K, KC_H, KC_COMM, KC_DOT, KC_MINS, RM_TOGG,
//|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                               KC_DEL, MO(2), KC_SPC,                           KC_ENT, MO(1), KC_BSPC
                               //`--------------------------'  `--------------------------'
  ),

    [1] = LAYOUT_split_3x6_3_ex2(
//,-----------------------------------------------------.                    ,-----------------------------------------------------.
KC_ESC, KC_ESC, KC_7, KC_8, KC_9, KC_SLSH, QK_BOOT,                             QK_BOOT,        KC_NO, QK_MOUSE_BUTTON_1, QK_MOUSE_BUTTON_2, KC_PAGE_DOWN, KC_PAGE_UP, LGUI(KC_TAB),
//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
KC_TAB, KC_0, KC_4, KC_5, KC_6, KC_DOT, KC_NO,                                      KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, LALT(KC_TAB),
//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
KC_NO, KC_TAB, KC_1, KC_2, KC_3, KC_COMM,                                     KC_NO, MS_LEFT, MS_DOWN, MS_UP, MS_RGHT, KC_NO,
//|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                            KC_DEL, MO(3), KC_SPC,                           KC_ENT, KC_TRNS, KC_BSPC
                            //`--------------------------'  `--------------------------'
  ),

    [2] = LAYOUT_split_3x6_3_ex2(
KC_ESC, RALT(KC_Q), KC_HASH, KC_DLR, RALT(KC_E), KC_CIRC, KC_NO,                    KC_NO, KC_GRV, KC_ASTR, KC_LPRN, KC_SLSH, KC_RBRC, LGUI(KC_TAB),
//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
KC_TAB, KC_NUBS, LSFT(KC_NUBS), RALT(KC_MINS), KC_AMPR, RALT(KC_NUBS), KC_NO, KC_NO, KC_QUOT, KC_SCLN, KC_LBRC, KC_PIPE, KC_AT, LALT(KC_TAB),
//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
KC_NO, KC_NO, KC_PERC, RALT(KC_7), RALT(KC_0), RALT(KC_RBRC),                KC_NUHS, RALT(KC_8), RALT(KC_9), KC_RPRN, KC_EXLM, KC_NO,
//|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                            KC_DEL, KC_TRNS, KC_SPC,                            KC_ENT, MO(3), KC_BSPC
                                      //`--------------------------'  `--------------------------'
  ),

    [3] = LAYOUT_split_3x6_3_ex2(
UG_TOGG, KC_NO, KC_F7, KC_F8, KC_F9, KC_F10, KC_NO,                         KC_NO, KC_WSCH, KC_WBAK, KC_WFWD, RCS(KC_TAB), LCTL(KC_TAB), KC_PWR,
//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
KC_NO, KC_NO, KC_F4, KC_F5, KC_F6, KC_F11, KC_NO,                                    KC_NO, KC_MUTE, KC_VOLD, KC_VOLU, KC_BRID, KC_BRIU, KC_EXEC,
//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
KC_NO, KC_NO, KC_F1, KC_F2, KC_F3, KC_F12,                                    KC_NO, KC_MPRV, KC_MNXT, KC_MRWD, KC_MFFD, KC_NO,
//|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                            KC_DEL, KC_TRNS, KC_SPC,                            KC_ENT, KC_TRNS, KC_BSPC
                                      //`--------------------------'  `--------------------------'
  )
};
