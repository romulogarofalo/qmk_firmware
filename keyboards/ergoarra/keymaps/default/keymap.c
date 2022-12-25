#include QMK_KEYBOARD_H

#define _QWERT 0
#define _SYMB 1
#define _OTHER 2
#define _CONFIG 3

#define SYMB_L   MO(_SYMB)
#define OTHER_L  MO(_OTHER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[_QWERT] = LAYOUT(
		// left rand
		KC_GRV,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,    KC_MINS,
		KC_ESC,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,    KC_PIPE,
		KC_TAB,   KC_A,   KC_S,    KC_D,    KC_F,    KC_G,           
		KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,    KC_LBRC,
		KC_LCTL,  KC_LGUI, KC_LALT, SYMB_L,  OTHER_L,                
			      							                  KC_SPC,  KC_PGUP, 
																       KC_PGDN,
				  								     KC_SPC,  KC_BSPC, KC_DEL,
		// rigth rand
		OTHER_L,   KC_6,   KC_7,      KC_8,    KC_9,   KC_0,     KC_BACKSPACE, 
		KC_EQL,    KC_Y,   KC_U,      KC_I,    KC_O,   KC_P,     KC_BSLS, 
		           KC_H,   KC_J,      KC_K,    KC_L,   KC_SCLN,  KC_QUOT,
		KC_RBRC,   KC_N,   KC_M,      KC_COMM, KC_DOT, KC_SLSH,  KC_RSFT,
		                   KC_LEFT,   KC_DOWN, KC_UP,  KC_RIGHT, KC_RIGHT,
		KC_HOME, KC_END, 
		KC_LSFT,   
		KC_DEL,  KC_ENT, KC_SPC
	),

	[_SYMB] = LAYOUT(
		// left rand
		KC_ESC,  KC_F1,  KC_F2,  KC_F3,  KC_F4,   KC_F5,   KC_SPC,
		KC_TAB,  KC_Q,   KC_W,   KC_E,   KC_R,    KC_T,    KC_SPC,
		KC_LSFT, KC_A,   KC_S,   KC_D,   KC_F,    KC_G,           
		KC_LCTL, KC_Z,   KC_X,   KC_C,   KC_V,    KC_B,    KC_SPC,
		KC_SPC,  KC_SPC, KC_SPC, KC_SPC, KC_SPC,                  
			     KC_SPC, KC_SPC, KC_SPC, KC_SPC,  KC_SPC,  KC_SPC,
		// rigth rand
		KC_SPC,  KC_F6,  KC_F7,  KC_F8,   KC_F9,  KC_F10,  KC_PRINT_SCREEN, 
		KC_SPC,  KC_Y,   KC_U,   KC_I,    KC_O,   KC_P,    KC_LBRC, 
		         KC_H,   KC_J,   KC_K,    KC_L,   KC_SCLN, KC_QUOT,
		KC_SPC,  KC_N,   KC_M,   KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
		                 KC_SPC, KC_SPC,  KC_SPC, KC_SPC,  KC_RGHT,
		KC_HOME, KC_END, KC_ENT, KC_ENT,  KC_ENT, KC_ENT
	),

	[_OTHER] = LAYOUT(
		// left rand
		QK_BOOT, KC_F11,  KC_F12,   KC_3,   KC_4,    KC_5,    KC_SPC,
		QK_RBT,  KC_Q,    KC_W,   KC_E,   KC_R,    KC_T,    KC_SPC,
		KC_LSFT, KC_A,    KC_S,   KC_D,   KC_F,    KC_G,           
		KC_LCTL, KC_Z,    KC_X,   KC_C,   KC_V,    KC_B,    KC_SPC,
		KC_SPC,  KC_SPC,  KC_PSCR, KC_SPC, KC_SPC,                  
			     KC_VOLU,  KC_VOLD, KC_SPC, KC_MUTE,  KC_WAKE, KC_SLEP,
		// rigth rand
		KC_SPC,  KC_6,   KC_7,   KC_8,    KC_9,   KC_0,    KC_BACKSPACE, 
		KC_SPC,  KC_Y,   KC_U,   KC_I,    KC_O,   KC_P,    KC_LBRC, 
		         KC_H,   KC_J,   KC_K,    KC_L,   KC_SCLN, KC_QUOT,
		KC_SPC,  KC_N,   KC_M,   KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
		                 KC_SPC, KC_SPC,  KC_SPC, KC_SPC,  KC_RGHT,
		KC_MNXT, KC_MPRV, KC_ENT, KC_ENT,  KC_ENT, KC_ENT
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


