#include "centromere_plus.h"

#define L0 0 // default layer
#define L1 1
#define L2 2
#define L3 3

// Fillers to make layering more clear
#define XXXXXXX KC_NO
#define YYYYYYY KC_NO
#define _______ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[L0] = {
	{KC_EQL,   KC_1,     KC_2,    KC_3,         KC_4,    KC_5,    KC_BSLS,    YYYYYYY, KC_6,    KC_7,    KC_8,         KC_9,    KC_0,    KC_MINS},
	{KC_ESC,   KC_Q,     KC_W,    KC_E,         KC_R,    KC_T,    YYYYYYY,    KC_LBRC, KC_Y,    KC_U,    KC_I,         KC_O,    KC_P,    KC_RBRC},
	{KC_TAB,   KC_A,     KC_S,    LT(L2, KC_D), KC_F,    KC_G,    YYYYYYY,    YYYYYYY, KC_H,    KC_J,    LT(L1, KC_K), KC_L,    KC_SCLN, KC_QUOT},
	{KC_LSFT,  KC_Z,     KC_X,    KC_C,         KC_V,    KC_B,    XXXXXXX,    XXXXXXX, KC_N,    KC_M,    LT(L3, KC_COMM), KC_DOT, KC_SLSH, KC_RSFT},
	{XXXXXXX,  XXXXXXX,  KC_LALT, KC_SPC,       KC_RGUI, KC_BSPC, XXXXXXX,    XXXXXXX, KC_ENT,  KC_LGUI, KC_SPC,       KC_RCTL, XXXXXXX, XXXXXXX}
},


[L1] = {
    {KC_TILD,  YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY,   YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY},
    {YYYYYYY,  YYYYYYY,  YYYYYYY,  KC_UP,    YYYYYYY,  YYYYYYY,  YYYYYYY,   YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY},
    {YYYYYYY,  YYYYYYY,  KC_LEFT,  KC_DOWN,  KC_RIGHT, YYYYYYY,  YYYYYYY,   YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY},
    {YYYYYYY,  KC_GRV,   YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY,  XXXXXXX,   XXXXXXX,  YYYYYYY,  YYYYYYY,  KC_LBRC,  KC_RBRC,  YYYYYYY,  YYYYYYY},
    {XXXXXXX,  XXXXXXX,  YYYYYYY,  YYYYYYY,  YYYYYYY,  KC_DEL,   XXXXXXX,   XXXXXXX,  YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY,  XXXXXXX,  XXXXXXX}
},

[L2] = {
    {YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY,   YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY},
    {YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY,  KC_VOLU,  YYYYYYY,  YYYYYYY,   YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY},
    {YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY,  KC_VOLD,  YYYYYYY,  YYYYYYY,   YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY},
    {YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY,  KC_MUTE,  YYYYYYY,  XXXXXXX,   XXXXXXX,  YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY},
    {XXXXXXX,  XXXXXXX,  YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY,  XXXXXXX,   XXXXXXX,  YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY,  XXXXXXX,  XXXXXXX}
},

[L3] = {
    {YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY,   YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY},
    {YYYYYYY,  YYYYYYY,  YYYYYYY,  KC_PGUP,  KC_MPLY,  YYYYYYY,  YYYYYYY,   YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY},
    {YYYYYYY,  YYYYYYY,  YYYYYYY,  KC_PGDN,  YYYYYYY,  YYYYYYY,  YYYYYYY,   YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY},
    {YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY,  XXXXXXX,   XXXXXXX,  YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY},
    {XXXXXXX,  XXXXXXX,  YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY,  XXXXXXX,   XXXXXXX,  YYYYYYY,  YYYYYYY,  YYYYYYY,  YYYYYYY,  XXXXXXX,  XXXXXXX}
},


};
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case L0:
      if (record->event.pressed) {
        layer_on(L0);
      } else {
        layer_off(L0);
      }
      return false;
      break;

    case L1:
      if (record->event.pressed) {
        layer_on(L1);
      } else {
        layer_off(L1);
      }
      return false;
      break;

    case L2:
      if (record->event.pressed) {
        layer_on(L2);
      } else {
        layer_off(L2);
      }
      return false;
      break;

    case L3:
      if (record->event.pressed) {
        layer_on(L3);
      } else {
        layer_off(L3);
      }
      return false;
      break;

  }
  return true;
}

void matrix_scan_user(void) {
		return;
};
