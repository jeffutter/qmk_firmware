#ifndef CENTROMERE_PLUS_H
#define CENTROMERE_PLUS_H

#include "quantum.h"
#include "matrix.h"
#include <stddef.h>

#define red_led_off   PORTF |= (1<<5)
#define red_led_on    PORTF &= ~(1<<5)
#define blu_led_off   PORTF |= (1<<4)
#define blu_led_on    PORTF &= ~(1<<4)
#define grn_led_off   PORTD |= (1<<1)
#define grn_led_on    PORTD &= ~(1<<1)

#define set_led_off     red_led_off; grn_led_off; blu_led_off
#define set_led_red     red_led_on;  grn_led_off; blu_led_off
#define set_led_blue    red_led_off; grn_led_off; blu_led_on
#define set_led_green   red_led_off; grn_led_on;  blu_led_off
#define set_led_yellow  red_led_on;  grn_led_on;  blu_led_off
#define set_led_magenta red_led_on;  grn_led_off; blu_led_on
#define set_led_cyan    red_led_off; grn_led_on;  blu_led_on
#define set_led_white   red_led_on;  grn_led_on;  blu_led_on

/*
#define LED_B 5
#define LED_R 6
#define LED_G 7

#define all_leds_off PORTF &= ~(1<<LED_B) & ~(1<<LED_R) & ~(1<<LED_G)

#define red_led_on   PORTF |= (1<<LED_R)
#define red_led_off  PORTF &= ~(1<<LED_R)
#define grn_led_on   PORTF |= (1<<LED_G)
#define grn_led_off  PORTF &= ~(1<<LED_G)
#define blu_led_on   PORTF |= (1<<LED_B)
#define blu_led_off  PORTF &= ~(1<<LED_B)

#define set_led_off     PORTF &= ~(1<<LED_B) & ~(1<<LED_R) & ~(1<<LED_G)
#define set_led_red     PORTF = PORTF & ~(1<<LED_B) & ~(1<<LED_G) | (1<<LED_R)
#define set_led_blue    PORTF = PORTF & ~(1<<LED_G) & ~(1<<LED_R) | (1<<LED_B)
#define set_led_green   PORTF = PORTF & ~(1<<LED_B) & ~(1<<LED_R) | (1<<LED_G)
#define set_led_yellow  PORTF = PORTF & ~(1<<LED_B) | (1<<LED_R) | (1<<LED_G)
#define set_led_magenta PORTF = PORTF & ~(1<<LED_G) | (1<<LED_R) | (1<<LED_B)
#define set_led_cyan    PORTF = PORTF & ~(1<<LED_R) | (1<<LED_B) | (1<<LED_G)
#define set_led_white   PORTF |= (1<<LED_B) | (1<<LED_R) | (1<<LED_G)
*/

// This a shortcut to help you visually see your layout.
// The first section contains all of the arguements
// The second converts the arguments into a two-dimensional array
#define KEYMAP( \
  k00, k01, k02, k03, k04, k05, k06,      k07, k08, k09, k10, k11, k12, k13, \
  k14, k15, k16, k17, k18, k19, k20,      k21, k22, k23, k24, k25, k26, k27, \
  k28, k29, k30, k31, k32, k33, k34,      k35, k36, k37, k38, k39, k40, k41, \
  k42,      k43, k44, k45, k46, k47,      k48, k49, k50, k51, k52,      k53, \
  k54, k55, k56, k57, k58, k59,                k60, k61, k62, k63, k64, k65  \
) \
{ \
	{ k00, k01,   k02, k03, k04, k05, k06,      k07, k08, k09, k10, k11, k12,   k13 }, \
	{ k14, k15,   k16, k17, k18, k19, k20,      k21, k22, k23, k24, k25, k26,   k27 }, \
	{ k28, k29,   k30, k31, k32, k33, k34,      k35, k36, k37, k38, k39, k40,   k41 }, \
	{ k42, KC_NO, k43, k44, k45, k46, k47,      k48, k49, k50, k51, k52, KC_NO, k53 }, \
	{ k54, k55,   k56, k57, k58, k59, KC_NO,  KC_NO, k60, k61, k62, k63, k64,   k65 } \
}

#endif
