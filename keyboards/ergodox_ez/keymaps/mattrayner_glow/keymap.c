#include QMK_KEYBOARD_H
#include "version.h"
//#include "keymap_german.h"
//#include "keymap_nordic.h"
//#include "keymap_french.h"
//#include "keymap_spanish.h"
//#include "keymap_hungarian.h"
//#include "keymap_swedish.h"
//#include "keymap_br_abnt2.h"
//#include "keymap_canadian_multilingual.h"
//#include "keymap_german_ch.h"
//#include "keymap_jp.h"
//#include "keymap_bepo.h"
//#include "keymap_italian.h"
//#include "keymap_slovenian.h"
//#include "keymap_danish.h"
//#include "keymap_norwegian.h"
//#include "keymap_portuguese.h"

enum layers {
    _BASE,
    _LOWER,
    _RAISE,
    _ADJUST,
    _CONTROL
};

enum custom_keycodes {
    RGB_SLD = EZ_SAFE_RANGE,
    ST_MACRO_0,
    ST_MACRO_1,
    ST_MACRO_2,
    ST_MACRO_3,
    ST_MACRO_4,
};

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define SUPER_ESCAPE MT(MOD_HYPR, KC_ESCAPE)
#define MEDIA_PLAY KC_MEDIA_PLAY_PAUSE
#define MEDIA_VDOWN KC_AUDIO_VOL_DOWN
#define MEDIA_VUP KC_AUDIO_VOL_UP
#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_LBRACKET,                                    KC_RBRACKET,    KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT,
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_PERC,                                        KC_HASH,        KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSPACE,
    SUPER_ESCAPE,   KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCOLON,      KC_QUOTE,
    KC_LSHIFT,      KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           KC_ESCAPE,                                      KC_UNDS,        KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       RSFT_T(KC_ENTER),
    TT(_CONTROL),   KC_LCTRL,       KC_LALT,        KC_LGUI,        LOWER,                                                                                                          RAISE,          KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_SPACE,       KC_BSPACE,      TT(_ADJUST),    TT(_ADJUST),    KC_TAB,         KC_ENTER
  ),
  [_LOWER] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,                                          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_F13,
    KC_TILD,        KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_LPRN,        KC_RPRN,        KC_TRANSPARENT,
    TO(_BASE),      KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                          KC_NO,          KC_MINUS,       KC_EQUAL,       KC_LCBR,        KC_RCBR,        KC_PIPE,
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_PLUS,        KC_SLASH,       KC_LBRACKET,    KC_RBRACKET,    KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, MEDIA_PLAY,     MEDIA_VDOWN,    MEDIA_VUP,      LALT(LCTL(LSFT(KC_P))),
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [_RAISE] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,                                          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_F13,
    KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT,
    TO(_BASE),      KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                          KC_NO,          KC_MINUS,       KC_EQUAL,       KC_LCBR,        KC_RCBR,        KC_BSLASH,
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_PLUS,        KC_SLASH,       KC_LBRACKET,    KC_RBRACKET,    KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, MEDIA_PLAY,     MEDIA_VDOWN,    MEDIA_VUP,      LALT(LCTL(LSFT(KC_N))),
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [_ADJUST] = LAYOUT_ergodox_pretty(
    TO(_BASE),      KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_F14,                                         KC_F15,         KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_DELETE,
    TO(_BASE),      KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                          KC_NO,          RGB_TOG,        RGB_VAI,        RGB_VAD,        KC_NO,          RESET,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          RGB_MOD,        RGB_HUI,        RGB_HUD,        KC_NO,          KC_NO,
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_NO,          TOGGLE_LAYER_COLOR,KC_NO,       LED_LEVEL,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    TT(4),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TT(_CONTROL)
  ),
  [_CONTROL] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,
    KC_NO,          KC_MS_BTN1,     KC_MS_UP,       KC_MS_BTN2,     KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    TO(_BASE),      KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_NO,          KC_NO,                                                                          KC_NO,          KC_UNDS,        KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_MS_WH_UP,    KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          LGUI(KC_F),     KC_TRANSPARENT,
    WEBUSB_PAIR,    KC_MS_WH_LEFT,  KC_MS_WH_DOWN,  KC_MS_WH_RIGHT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, ST_MACRO_0,     ST_MACRO_1,     ST_MACRO_2,     ST_MACRO_3,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_4
  ),
};


extern bool g_suspend_state;
extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { {40,251,250}, {75,250,244}, {75,250,244}, {144,255,255}, {144,255,255}, {75,250,244}, {75,250,244}, {144,255,255}, {144,255,255}, {194,255,255}, {75,250,244}, {144,255,255}, {144,255,255}, {194,255,255}, {194,255,255}, {144,255,255}, {144,255,255}, {194,255,255}, {194,255,255}, {220,249,246}, {194,255,255}, {194,255,255}, {220,249,246}, {220,249,246}, {40,251,250}, {28,249,246}, {28,249,246}, {0,255,255}, {0,255,255}, {40,251,250}, {40,251,250}, {28,249,246}, {28,249,246}, {0,255,255}, {75,250,244}, {40,251,250}, {40,251,250}, {28,249,246}, {28,249,246}, {75,250,244}, {75,250,244}, {40,251,250}, {40,251,250}, {28,249,246}, {75,250,244}, {0,0,0}, {40,251,250}, {40,251,250} },

    [1] = { {243,222,234}, {243,222,234}, {243,222,234}, {243,222,234}, {243,222,234}, {243,222,234}, {243,222,234}, {243,222,234}, {243,222,234}, {243,222,234}, {0,0,0}, {0,0,0}, {243,222,234}, {243,222,234}, {243,222,234}, {0,0,0}, {243,222,234}, {243,222,234}, {243,222,234}, {243,222,234}, {0,0,0}, {243,222,234}, {243,222,234}, {0,0,0}, {243,222,234}, {243,222,234}, {243,222,234}, {243,222,234}, {243,222,234}, {243,222,234}, {243,222,234}, {243,222,234}, {243,222,234}, {243,222,234}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {0,0,0}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {0,0,0}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {0,0,0}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {10,225,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {10,225,255}, {10,225,255}, {10,225,255}, {0,0,0}, {0,0,0}, {10,225,255}, {10,225,255}, {10,225,255}, {0,0,0}, {0,0,0}, {0,0,0}, {10,225,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {10,225,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {85,203,158}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {85,203,158}, {0,0,0}, {85,203,158}, {85,203,158}, {85,203,158}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {85,203,158}, {85,203,158}, {85,203,158}, {0,0,0}, {0,0,0}, {85,203,158}, {85,203,158}, {85,203,158}, {0,0,0}, {0,0,0}, {0,0,0}, {85,203,158}, {0,0,0}, {0,0,0}, {85,203,158}, {85,203,158}, {85,203,158} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (g_suspend_state || keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_LSFT(SS_TAP(X_UP))) SS_DELAY(100) SS_LGUI(SS_TAP(X_LEFT))  SS_DELAY(100) SS_TAP(X_ENTER));

    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_LSFT(SS_TAP(X_UP))) SS_DELAY(100) SS_TAP(X_DOWN)  SS_DELAY(100) SS_TAP(X_ENTER));

    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_LSFT(SS_TAP(X_UP))) SS_DELAY(100) SS_LGUI(SS_TAP(X_UP))  SS_DELAY(100) SS_TAP(X_ENTER));

    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_LSFT(SS_TAP(X_UP))) SS_DELAY(100) SS_LGUI(SS_TAP(X_RIGHT))  SS_DELAY(100) SS_TAP(X_ENTER));

    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_LSFT(SS_TAP(X_UP))) SS_DELAY(100) SS_TAP(X_SPACE)  SS_DELAY(100) SS_TAP(X_ENTER));

    }
    break;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case LOWER:
      if (record->event.pressed) {
          layer_on(_LOWER);
          update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
          layer_off(_LOWER);
          update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case RAISE:
      if (record->event.pressed) {
          layer_on(_RAISE);
          update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
          layer_off(_RAISE);
          update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
  }

  return true;
}

uint32_t layer_state_set_user(uint32_t state) {

  uint8_t layer = biton32(state);

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
    case 3:
      ergodox_right_led_3_on();
      break;
    case 4:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      break;
    case 5:
      ergodox_right_led_1_on();
      ergodox_right_led_3_on();
      break;
    case 6:
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    case 7:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    default:
      break;
  }
  return state;
};
