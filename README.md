flash usw wie gewohnt, kopiere die .c datei in den qmk ordner von hier

das problem vorhin war das mit master left oder right



# Adding all the obsidian stuff



# *Attempt 26.02.2025*

*I used claude to guide me it's guide was very good.*

*Basically you edit the c file and then open the qmk terminal and compile the c file, then you get a .hex file and you find that and give it to the qmk toolbox and that flashes that onto the keyboard but that didn't work for some reason idk why.*

*I'll ask henri.*

# *My layout*

```C

/* QWERTY

 * ,-----------------------------------------.                    ,-----------------------------------------.

 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |

 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|

 * | Tab  |   Ü  |   W  |   E  |   P  |   Y  |                    |   F  |   G  |   C  |   T  |   Z  |  -   |

 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|

 * |LCTRL |   A  |   O  |   E  |   I  |   U  |-------.    ,-------|   H  |   D  |   R  |   N  |   S  |  L   |

 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|

 * |LShift|   Ä  |   Ö  |   Q  |   J  |   K  |-------|    |-------|   B  |   M  |   W  |   V  |   /  |RShift|

 * `-----------------------------------------/       /     \      \-----------------------------------------'

 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |

 *                   |      |      |      |/       /         \      \ |      |      |      |

 *                   `----------------------------'           '------''--------------------'

 */
```

# *Original File*

```C

#include QMK_KEYBOARD_H



enum layer_number {

  _QWERTY = 0,

  _LOWER,

  _RAISE,

  _ADJUST,

};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {



/* QWERTY

 * ,-----------------------------------------.                    ,-----------------------------------------.

 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |

 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|

 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  -   |

 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|

 * |LCTRL |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |

 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|

 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|

 * `-----------------------------------------/       /     \      \-----------------------------------------'

 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |

 *                   |      |      |      |/       /         \      \ |      |      |      |

 *                   `----------------------------'           '------''--------------------'

 */



 [_QWERTY] = LAYOUT(

  KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_GRV,

  KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS,

  KC_LCTL,  KC_A,   KC_O,    KC_E,    KC_I,    KC_G,                     KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,

  KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, KC_LBRC,  KC_RBRC,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT,

                        KC_LALT, KC_LGUI, MO(_LOWER), KC_SPC, KC_ENT, MO(_RAISE), KC_BSPC, KC_RGUI

),

/* LOWER

 * ,-----------------------------------------.                    ,-----------------------------------------.

 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |

 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|

 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |                    |  F7  |  F8  |  F9  | F10  | F11  | F12  |

 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|

 * |   `  |   !  |   @  |   #  |   $  |   %  |-------.    ,-------|   ^  |   &  |   *  |   (  |   )  |   -  |

 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|

 * |      |      |      |      |      |      |-------|    |-------|      |   _  |   +  |   {  |   }  |   |  |

 * `-----------------------------------------/       /     \      \-----------------------------------------'

 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |

 *                   |      |      |      |/       /         \      \ |      |      |      |

 *                   `----------------------------'           '------''--------------------'

 */

[_LOWER] = LAYOUT(

  _______, _______, _______, _______, _______, _______,                   _______, _______, _______,_______, _______, _______,

  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                     KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,

  KC_GRV, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                   KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_TILD,

  _______, _______, _______, _______, _______, _______, _______, _______, XXXXXXX, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE,

                             _______, _______, _______, _______, _______,  _______, _______, _______

),

/* RAISE

 * ,-----------------------------------------.                    ,-----------------------------------------.

 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |

 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|

 * |   `  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |      |

 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|

 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |-------.    ,-------|      | Left | Down |  Up  |Right |      |

 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|

 * |  F7  |  F8  |  F9  | F10  | F11  | F12  |-------|    |-------|   +  |   -  |   =  |   [  |   ]  |   \  |

 * `-----------------------------------------/       /     \      \-----------------------------------------'

 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |

 *                   |      |      |      |/       /         \      \ |      |      |      |

 *                   `----------------------------'           '------''--------------------'

 */



[_RAISE] = LAYOUT(

  _______, _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______, _______,

  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                        KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,

  KC_F1,  KC_F2,    KC_F3,   KC_F4,   KC_F5,   KC_F6,                       XXXXXXX, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX,

  KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,   _______, _______,  KC_PLUS, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS,

                             _______, _______, _______,  _______, _______,  _______, _______, _______

),

/* ADJUST

 * ,-----------------------------------------.                    ,-----------------------------------------.

 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |

 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|

 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |

 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|

 * |      |      |      |      |      |      |-------.    ,-------|      |      |RGB ON| HUE+ | SAT+ | VAL+ |

 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|

 * |      |      |      |      |      |      |-------|    |-------|      |      | MODE | HUE- | SAT- | VAL- |

 * `-----------------------------------------/       /     \      \-----------------------------------------'

 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |

 *                   |      |      |      |/       /         \      \ |      |      |      |

 *                   `----------------------------'           '------''--------------------'

 */

  [_ADJUST] = LAYOUT(

  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,

  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,

  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,

  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,

                             _______, _______, _______, _______, _______,  _______, _______, _______

  )

};



layer_state_t layer_state_set_user(layer_state_t state) {

  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);

}



//SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk

#ifdef OLED_ENABLE



oled_rotation_t oled_init_user(oled_rotation_t rotation) {

  if (!is_keyboard_master())

    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand

  return rotation;

}



// When you add source files to SRC in rules.mk, you can use functions.

const char *read_layer_state(void);

const char *read_logo(void);

void set_keylog(uint16_t keycode, keyrecord_t *record);

const char *read_keylog(void);

const char *read_keylogs(void);



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

  } else {

    oled_write(read_logo(), false);

  }

    return false;

}

#endif // OLED_ENABLE



bool process_record_user(uint16_t keycode, keyrecord_t *record) {

  if (record->event.pressed) {

#ifdef OLED_ENABLE

    set_keylog(keycode, record);

#endif

    // set_timelog();

  }

  return true;

}

```

# *Alphabet*

```

abcdefghi  lmnop rstuvw y z
abcdefghs
as
abcdefgui
abcdefguh
abcdefgh
abcdesfgi

Keyboard

can i do norma thingöä

a cdefghi mno r tu.,xuzuzzya	q1234556890^^^ytcgf

Ö

qwerty


anm;

amb;m;nnn

ab;nrcde;nf;;efghi';'';mnorxr;tnu.123456890`xbbxxiii

6ggdddddddddddddf
ggg7777777888990aaoei;nrdqwezrtcg12340987561234567890àoeigctzzaxcdv;n/m

iiiiivvvvvvvvvvvvcccccccvvvvcvee bbbbbbbbbbbbbbbbbxxxxccccccceeeeeeeeeeeeeeeeeeeeeeeeccvvi

```