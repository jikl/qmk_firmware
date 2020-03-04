#include QMK_KEYBOARD_H
#include "version.h"

#define BASE 0    // base
#define SYMB 1    // symbols

#define _______ KC_TRNS
#define KC_____ KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/** ===============
 ** [0] Basic layer
 ** ===============
 ** ┌─────┬────┬────┬────┬────┬────┬────┐    ┌────┬────┬────┬────┬────┬────┬─────┐
 ** │ =+  │ 1  │ 2  │ 3  │ 4  │ 5  │    │    │    │ 6  │ 7  │ 8  │ 9  │ 0  │ -_  │
 ** ├─────┼────┼────┼────┼────┼────┼────┤    ├────┼────┼────┼────┼────┼────┼─────┤
 ** │ /?  │ q  │ w  │ e  │ r  │ t  │    │    │    │ y  │ u  │ i  │ o  │ p  │ \|  │
 ** ├─────┼────┼────┼────┼────┼────┤    │    │    ├────┼────┼────┼────┼────┼─────┤
 ** │Symbl│ a  │ s  │ d  │ f  │ g  ├────┤    ├────┤ h  │ j  │ k  │ l  │Spc │Symbl│
 ** ├─────┼────┼────┼────┼────┼────┤    │    │    ├────┼────┼────┼────┼────┼─────┤
 ** │Shift│ z  │ x  │ c  │ v  │ b  │    │    │    │ n  │ m  │ ,; │ .: │Tab │Shift│
 ** └┬────┼────┼────┼────┼────┼────┴────┘    └────┴────┼────┼────┼────┼────┼────┬┘
 **  │    │ [{ │Bspc│Up  │Del │                        │Left│Down│Rght│ ]} │    │
 **  └────┴────┴────┴────┴────┘                        └────┴────┴────┴────┴────┘
 **                    ┏━━━━┳━━━━┓         ┏━━━━┳━━━━┓
 **                    ┃Home┃PgUp┃         ┃PgDn┃End ┃
 **               ┏━━━━╋━━━━╋━━━━┫         ┣━━━━╋━━━━╋━━━━┓
 **               ┃    ┃    ┃Ret ┃         ┃Ret ┃    ┃    ┃
 **               ┃ `~ ┃lCtl┣━━━━┫         ┣━━━━┫rCtl┃Ins ┃
 **               ┃    ┃    ┃lAlt┃         ┃rAlt┃    ┃    ┃
 **               ┗━━━━┻━━━━┻━━━━┛         ┗━━━━┻━━━━┻━━━━┛
 **/
[BASE] = LAYOUT_ergodox(
/**/
/**  Left fingers
 **/
/**/     KC_EQL,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_____,
/**/     KC_SLSH, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_____,
/**/     KC_FN1,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,
/**/     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_____,
/**/     KC_____, KC_LBRC, KC_BSPC, KC_UP,   KC_DELT,
/**/
/**  Left thumb
 **/
/**/                                                  KC_HOME, KC_PGUP,
/**/                                                           KC_ENT,
/**/                                         KC_GRV,  KC_LCTL, KC_LALT,
/**/
/**  Right fingers
 **/
/**/     KC_____, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
/**/     KC_____, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
/**/              KC_H,    KC_J,    KC_K,    KC_L,    KC_SPC,  KC_FN1,
/**/     KC_____, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_TAB,  KC_RSFT,
/**/                       KC_LEFT, KC_DOWN, KC_RGHT, KC_RBRC, KC_____,
/**/
/**  Right thumb
 **/
/**/     KC_PGDN, KC_END,
/**/     KC_ENT,
/**/     KC_RALT, KC_RCTL, KC_INS
),
/** ================
 ** [1] Symbol layer
 ** ================
 ** ┌─────┬────┬────┬────┬────┬────┬────┐    ┌────┬────┬────┬────┬────┬────┬─────┐
 ** │     │    │    │    │    │    │    │    │    │    │    │    │    │    │     │
 ** ├─────┼────┼────┼────┼────┼────┼────┤    ├────┼────┼────┼────┼────┼────┼─────┤
 ** │     │ #  │ [  │ '  │ ]  │ %  │    │    │    │ =  │ <  │ ~  │ >  │ ^  │     │
 ** ├─────┼────┼────┼────┼────┼────┤    │    │    ├────┼────┼────┼────┼────┼─────┤
 ** │     │ $  │ \  │ "  │ /  │ *  ├────┤    ├────┤ +  │ (  │ -  │ )  │ :  │     │
 ** ├─────┼────┼────┼────┼────┼────┤    │    │    ├────┼────┼────┼────┼────┼─────┤
 ** │     │ @  │ {  │ `  │ }  │ _  │    │    │    │ &  │ |  │ !  │ ?  │ ;  │     │
 ** └┬────┼────┼────┼────┼────┼────┴────┘    └────┴────┼────┼────┼────┼────┼────┬┘
 **  │    │    │    │    │    │                        │    │    │    │    │    │
 **  └────┴────┴────┴────┴────┘                        └────┴────┴────┴────┴────┘
 **/
[SYMB] = LAYOUT_ergodox(
/**/
/**  Left fingers
 **/
/**/     _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   _______,
/**/     _______, KC_HASH, KC_LBRC, KC_QUOT, KC_RBRC, KC_PERC, _______,
/**/     _______, KC_DLR , KC_BSLS, KC_DQT,  KC_SLSH, KC_ASTR,
/**/     _______, KC_AT,   KC_LCBR, KC_GRV,  KC_RCBR, KC_UNDS, _______,
/**/     _______, _______, _______, _______, _______,
/**/
/**  Left thumb
 **/
/**/                                                  _______, _______,
/**/                                                           _______,
/**/                                         _______, _______, _______,
/**/
/**  Right fingers
 **/
/**/     _______, KC_F6,   KC_F7,   KC_F8,   KC_F8,   KC_F10,  _______,
/**/     _______, KC_EQL,  KC_LABK, KC_TILD, KC_RABK, KC_CIRC, _______,
/**/              KC_PLUS, KC_LPRN, KC_MINS, KC_RPRN, KC_COLN, _______,
/**/     _______, KC_AMPR, KC_PIPE, KC_EXLM, KC_QUES, KC_SCLN, _______,
/**/                       _______, _______, _______, _______, _______,
/**/
/**  Right thumb
 **/
/**/     _______, _______,
/**/     _______,
/**/     _______, _______, _______
),
};

const uint16_t PROGMEM fn_actions[] = {
    [1]  = ACTION_LAYER_TAP_TOGGLE(SYMB),
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    switch(id) {
        case 0:
	    if (record->event.pressed) {
	        SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
	    }
	    break;
    }
    return MACRO_NONE;
};

void matrix_init_user(void) {};
void matrix_scan_user(void) {
    uint8_t layer = biton32(layer_state);
    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
        case 1:
            ergodox_right_led_1_on();
            break;
        case 2:
            ergodox_right_led_2_on();
            break;
        default:
            break;
    }

};

/* Local Variables:
 * indent-tabs-mode: nil
 * End:
 */
