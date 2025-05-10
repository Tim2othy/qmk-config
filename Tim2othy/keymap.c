#include QMK_KEYBOARD_H
#include "keymap_german.h"
#include "sendstring_german.h"

enum layer_number {
    _QWERTY = 0,
    _LOWER,
    _RAISE,
    _ADJUST,
};

    /* The fist is your Main layout what you get without changing the layer
     * then we have the lower, and raised layers
     * and the 4. isn't being used at the moment.
     */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* Dvorak
     * ,-----------------------------------------.                    ,-----------------------------------------.
     * | ESC  |  F1  | F2   | F3   |  F4  |  F5  |                    |  F6  |  F7  |  F8  | F9   | F10  |  +   |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * | F11  │   "  |  ,   |  .   |   P  |   Y  |                    |   F  |   G  |   C  |   T  |   Z  │  /   |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * | Tab  |   A  |   O  |   E  |   I  |   U  |-------.    ,-------|   H  |   D  |   R  |  N   |   S  |  L   |
     * |------+------+------+------+------+------|   (   |    |    )  |------+------+------+------+------+------|
     * |LShift|Wndws |   Q  |   J  |   K  |   X  |-------|    |-------|   B  |   M  |   W  |   V  |   #  |   -  |
     * `-----------------------------------------/       /     \      \-----------------------------------------'
     *                   | LAlt |  F13 | LCTRL| /BackSP /       \Space \  | LOWER| F14  |ENTER |
     *                   |      |      |      |/       /         \      \ |      |      |      |
     *                   `----------------------------'           '------''--------------------'
     */

     [_QWERTY] = LAYOUT(
      KC_ESC,   KC_F1,  KC_F2,   KC_F3,   KC_F4,   KC_F5,                    KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   DE_PLUS,
      KC_F11,   DE_DQUO,DE_COMM, DE_DOT,  DE_P,    DE_Y,                     DE_F,    DE_G,    DE_C,    DE_T,    DE_Z,     DE_SLSH,
      KC_TAB,   DE_A,   DE_O,    DE_E,    DE_I,    DE_U,                     DE_H,    DE_D,    DE_R,    DE_N,    DE_S,    DE_L,
      KC_LSFT,  KC_LGUI,DE_Q,    DE_J,    DE_K,    DE_X, DE_LPRN,  DE_RPRN,  DE_B,    DE_M,    DE_W,    DE_V,    DE_HASH,  DE_MINS,
                            KC_LALT, KC_F13,  KC_LCTL, KC_BSPC,     KC_SPC, MO(_LOWER), KC_F14, KC_ENT
    ),
         /* LOWER
          * ,-----------------------------------------.                    ,-----------------------------------------.
          * |  ESC |  Ä   |  Ö   |  Ü   |  F4  |  F5  |                    |  F6  |  F7  |  F8  | F9   | F10  |  F12 |
          * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
          * |   €  |  $   |   7  |   8  |  9   |   %  |                    |   &  |   !  |  Up  |  °   |      |   \  |
          * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
          * |   ^  |   0  |   4  |   5  |  6   |   <  |-------.    ,-------|   >  | Left | Down |Right |  =   |   ~  |
          * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
          * |LShift|Wndws |   1  |   2  |   3  |   {  |-------|    |-------|   }  |   ?  |  F15 |   ß  |  |   |   @  |
          * `-----------------------------------------/       /     \      \-----------------------------------------'
          *                   | LAlt | F13  |LCTRL | /BackSP /       \Space \  | LOWER|  F14 | ENTER|
          *                   |      |      |      |/       /         \      \ |      |      |      |
          *                   `----------------------------'           '------''--------------------'
          */
         [_LOWER] = LAYOUT(
           _______, DE_ADIA, DE_ODIA, DE_UDIA, _______, _______,                   _______, _______, _______,  _______, _______, KC_F12,
           DE_EURO, DE_DLR,  DE_7,    DE_8,    DE_9,    DE_PERC,                   DE_AMPR, DE_EXLM,   KC_UP, DE_DEG,  XXXXXXX, DE_BSLS,
           KC_GRV,  DE_0,    DE_4,    DE_5,    DE_6,    DE_LABK,                   DE_RABK, KC_LEFT, KC_DOWN, KC_RGHT, DE_EQL,  DE_TILD,
           _______, _______, DE_1,    DE_2,    DE_3,    DE_LCBR, DE_LBRC, DE_RBRC, DE_RCBR, DE_QUES, KC_F15, DE_SS,   DE_PIPE, DE_AT,
                                      _______, _______, _______, _______, _______,  _______, _______, _______
         ),
         /* RAISE
          * ,-----------------------------------------.                    ,-----------------------------------------.
          * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
          * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
          * |   `  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |      |
          * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
          * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |-------.    ,-------|      |   &  |   *  |   (  |   )  |      |
          * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
          * |  F7  |  F8  |  F9  | F10  | F11  | F12  |-------|    |-------|   +  |   -  |   =  |   [  |   ]  |   \  |
          * `-----------------------------------------/       /     \      \-----------------------------------------'
          *                   | Wndws| LAlt |Space | /Enter  /       \LOWER \  |BackSP|RAISE | RGUI |
          *                   |      |      |      |/       /         \      \ |      |      |      |
          *                   `----------------------------'           '------''--------------------'
          */

         [_RAISE] = LAYOUT(
           _______, _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______, _______,
           KC_GRV,  DE_1,    DE_2,    DE_3,    DE_4,    DE_5,                        DE_6,    DE_7,    DE_8,    DE_9,    DE_0,    _______,
           KC_F1,  KC_F2,    KC_F3,   KC_F4,   KC_F5,   KC_F6,                       XXXXXXX, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX,
           KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,   _______, _______,  KC_PLUS, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS,
                                      _______, _______, _______,  _______, _______,  _______, _______, _______
         ),
         /* ADJUST
          * ,-----------------------------------------.                    ,-----------------------------------------.
          * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
          * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
          * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
          * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
          * |      |      |      |      |      |      |-------.    ,-------|      |      |RGB ON| HUE+ | SAT+ | VAL+ |
          * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
          * |      |      |      |      |      |      |-------|    |-------|      |      | MODE | HUE- | SAT- | VAL- |
          * `-----------------------------------------/       /     \      \-----------------------------------------'
          *                   | Wndws| LAlt |Space | /Enter  /       \LOWER \  |BackSP|RAISE | RGUI |
          *                   |      |      |      |/       /         \      \ |      |      |      |
          *                   `----------------------------'           '------''--------------------'
          */
           [_ADJUST] = LAYOUT(
           XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
           XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
           XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
           XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                      _______, _______, _______, _______, _______,  _______, _______, _______
           )
};

layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

//SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (!is_keyboard_master())
        return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
    return rotation;
}

// When you add source files to SRC in rules.mk, you can use functions.
const char* read_layer_state(void);
const char* read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t* record);
const char* read_keylog(void);
const char* read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        // If you want to change the display of OLED, you need to change here
        oled_write_ln(read_layer_state(), false);
        oled_write_ln(read_keylog(), false);
        oled_write_ln(read_keylogs(), false);
        //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
        //oled_write_ln(read_host_led_state(), false);
        //oled_write_ln(read_timelog(), false);
    }
    else {
        oled_write(read_logo(), false);
    }
    return false;
}
#endif // OLED_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
    if (record->event.pressed) {
#ifdef OLED_ENABLE
        set_keylog(keycode, record);
#endif
        // set_timelog();
    }
    return true;
}
