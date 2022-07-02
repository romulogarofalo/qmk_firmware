#include QMK_KEYBOARD_H

#define _QWERT 0
#define _SYMB 1
#define _OTHER 2
#define _CONFIG 3

#define SYMB_L   MO(_SYMB)
#define OTHER_L  MO(_OTHER)
#define KC_CTPL LCTL_T(KC_BSLS)

#define KC_NAGR LT(_NAV, KC_GRV)
#define KC_NAMI LT(_NAV, KC_MINS)

#define KC_ADEN LT(_ADJUST, KC_END)
#define KC_ADPU LT(_ADJUST, KC_PGUP)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[_QWERT] = LAYOUT(
		// left rand
		KC_NAGR,  KC_1,   KC_2,    KC_3,    KC_4,    KC_5,    SYMB_L,
		KC_ESC,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,    KC_SPC,
		KC_TAB,   KC_A,   KC_S,    KC_D,    KC_F,    KC_G,           
		KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,    KC_SPC,
		KC_LCTL,  KC_APP, KC_LALT, SYM_L, KC_RBRC,                  
			      KC_SPC, KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,
		// rigth rand
		OTHER_L,  KC_6,   KC_7,   KC_8,    KC_9,   KC_0,    KC_BACKSPACE, 
		KC_GRV,   KC_Y,   KC_U,   KC_I,    KC_O,   KC_P,    KC_LBRC, 
		          KC_H,   KC_J,   KC_K,    KC_L,   KC_SCLN, KC_QUOT,
		KC_SPC,   KC_N,   KC_M,   KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
		                  KC_SPC, KC_SPC,  KC_SPC, KC_SPC,  KC_RGHT,
		KC_HOME,  KC_END, KC_ENT, KC_ENT,  KC_ENT, KC_ENT
	),

	[_SYMB] = LAYOUT(
		// left rand
		KC_ESC,  KC_1,   KC_2,   KC_3,   KC_4,    KC_5,    KC_SPC,
		KC_TAB,  KC_Q,   KC_W,   KC_E,   KC_R,    KC_T,    KC_SPC,
		KC_LSFT, KC_A,   KC_S,   KC_D,   KC_F,    KC_G,           
		KC_LCTL, KC_Z,   KC_X,   KC_C,   KC_V,    KC_B,    KC_SPC,
		KC_SPC,  KC_SPC, KC_SPC, KC_SPC, KC_SPC,                  
			     KC_SPC, KC_SPC, KC_SPC, KC_SPC,  KC_SPC,  KC_SPC,
		// rigth rand
		KC_SPC,  KC_6,   KC_7,   KC_8,    KC_9,   KC_0,    KC_BACKSPACE, 
		KC_SPC,  KC_Y,   KC_U,   KC_I,    KC_O,   KC_P,    KC_LBRC, 
		         KC_H,   KC_J,   KC_K,    KC_L,   KC_SCLN, KC_QUOT,
		KC_SPC,  KC_N,   KC_M,   KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
		                 KC_SPC, KC_SPC,  KC_SPC, KC_SPC,  KC_RGHT,
		KC_HOME, KC_END, KC_ENT, KC_ENT,  KC_ENT, KC_ENT
	),

	[_OTHER] = LAYOUT(
		// left rand
		QK_BOOT,  KC_1,   KC_2,   KC_3,   KC_4,    KC_5,    KC_SPC,
		KC_TAB,  QK_BOOT,   KC_W,   KC_E,   KC_R,    KC_T,    KC_SPC,
		KC_LSFT, KC_A,   KC_S,   KC_D,   KC_F,    KC_G,           
		KC_LCTL, KC_Z,   KC_X,   KC_C,   KC_V,    KC_B,    KC_SPC,
		KC_SPC,  KC_SPC, KC_SPC, KC_SPC, KC_SPC,                  
			     KC_SPC, KC_SPC, KC_SPC, KC_SPC,  KC_SPC,  KC_SPC,
		// rigth rand
		KC_SPC,  KC_6,   KC_7,   KC_8,    KC_9,   KC_0,    KC_BACKSPACE, 
		KC_SPC,  KC_Y,   KC_U,   KC_I,    KC_O,   KC_P,    KC_LBRC, 
		         KC_H,   KC_J,   KC_K,    KC_L,   KC_SCLN, KC_QUOT,
		KC_SPC,  KC_N,   KC_M,   KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
		                 KC_SPC, KC_SPC,  KC_SPC, KC_SPC,  KC_RGHT,
		KC_HOME, KC_END, KC_ENT, KC_ENT,  KC_ENT, KC_ENT
	)

	// [_CONFIG] = LAYOUT(
	// 	// left rand
	// 	KC_ESC,  KC_1,   KC_2,   KC_3,   KC_4,    KC_5,    KC_SPC,
	// 	KC_TAB,  KC_Q,   KC_W,   KC_E,   KC_R,    KC_T,    KC_SPC,
	// 	KC_LSFT, KC_A,   KC_S,   KC_D,   KC_F,    KC_G,           
	// 	KC_LCTL, KC_Z,   KC_X,   KC_C,   KC_V,    KC_B,    KC_SPC,
	// 	KC_SPC,  KC_SPC, KC_SPC, KC_SPC, KC_SPC,                  
	// 		     KC_SPC, KC_SPC, KC_SPC, KC_SPC,  KC_SPC,  KC_SPC,
	// 	// rigth rand
	// 	KC_SPC,  KC_6,   KC_7,   KC_8,    KC_9,   KC_0,    KC_BACKSPACE, 
	// 	KC_SPC,  KC_Y,   KC_U,   KC_I,    KC_O,   KC_P,    KC_LBRC, 
	// 	         KC_H,   KC_J,   KC_K,    KC_L,   KC_SCLN, KC_QUOT,
	// 	KC_SPC,  KC_N,   KC_M,   KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
	// 	                 KC_SPC, KC_SPC,  KC_SPC, KC_SPC,  KC_RGHT,
	// 	KC_HOME, KC_END, KC_ENT, KC_ENT,  KC_ENT, KC_ENT
	// )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}


