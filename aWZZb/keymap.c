#include QMK_KEYBOARD_H
#include "version.h"

enum custom_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
  HSV_43_243_241,
  HSV_86_255_128,
  HSV_0_255_255,
};


enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           MO(7),                                          TO(3),          KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_EQUAL,
    KC_TAB,         KC_QUOTE,       KC_COMMA,       KC_DOT,         LT(5,KC_P),     KC_Y,           KC_LPRN,                                        KC_RPRN,        KC_F,           KC_G,           KC_C,           KC_R,           KC_L,           KC_SLASH,
    KC_CAPS,        KC_A,           MT(MOD_LSFT, KC_O),MT(MOD_LCTL, KC_E),MT(MOD_LALT, KC_U),KC_I,                                                                           KC_D,           MT(MOD_RALT, KC_H),MT(MOD_RCTL, KC_T),MT(MOD_RSFT, KC_N),KC_S,           KC_MINUS,
    KC_LEFT_SHIFT,  KC_SCLN,        KC_Q,           KC_J,           KC_K,           KC_X,           KC_LCBR,                                        KC_RCBR,        KC_B,           KC_M,           KC_W,           KC_V,           KC_Z,           MT(MOD_RSFT, KC_BSLS),
    TG(4),          KC_LBRC,        KC_LEFT,        KC_RIGHT,       KC_LEFT_GUI,                                                                                                    KC_RIGHT_GUI,   KC_UP,          KC_DOWN,        KC_RBRC,        MO(6),
                                                                                                    KC_HOME,        KC_INSERT,      KC_PAGE_UP,     KC_END,
                                                                                                                    KC_DELETE,      KC_PGDN,
                                                                                    KC_SPACE,       KC_BSPC,        KC_ESCAPE,      KC_ESCAPE,      KC_ENTER,       KC_SPACE
  ),
  [1] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, TD(DANCE_0),    TD(DANCE_1),    TD(DANCE_2),    TD(DANCE_3),    TD(DANCE_4),    KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_F16,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_F17,         KC_F18,         KC_A,           KC_S,           KC_D,           KC_F,                                                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_F19,         KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_F20,         KC_LEFT_CTRL,   KC_F21,         KC_F22,         KC_LEFT_ALT,                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_F13,         KC_F14,         KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_F15,         KC_TRANSPARENT,
                                                                                    KC_SPACE,       OSL(2),         KC_ESCAPE,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_Y,           KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_P,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_LEFT_SHIFT,  KC_H,           KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_SCLN,                                                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_LEFT_CTRL,   KC_N,           KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_SLASH,       KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, DM_RSTP,        KC_TRANSPARENT, DM_REC2,        KC_LEFT_ALT,                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, DM_REC1,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_E,           LT(5,KC_R),     KC_T,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,
    KC_TRANSPARENT, KC_A,           MT(MOD_LSFT, KC_S),MT(MOD_LCTL, KC_D),MT(MOD_LALT, KC_F),KC_G,                                                                           KC_H,           MT(MOD_RALT, KC_J),MT(MOD_RCTL, KC_K),MT(MOD_RSFT, KC_L),KC_SCLN,        KC_QUOTE,
    KC_TRANSPARENT, KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_MINUS,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_ergodox_pretty(
    KC_F15,         KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          TO(0),                                          TO(3),          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,
    KC_F14,         KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_UP,       KC_TRANSPARENT, KC_MS_WH_UP,    KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_UP,          KC_TRANSPARENT, KC_TRANSPARENT, KC_F12,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_MS_WH_DOWN,                                                                  KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT, KC_MEDIA_PLAY_PAUSE,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_ACCEL0,   KC_MS_ACCEL1,   KC_MS_ACCEL2,   KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_MS_BTN3,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_MS_BTN1,     KC_MS_BTN2,     KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN1,     KC_MS_BTN2
  ),
  [5] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          TO(0),                                          KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_UP,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_PERC,        KC_DOT,         KC_KP_0,        KC_EQUAL,       KC_SLASH,       KC_F12,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_ASTR,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_MINUS,       KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_PLUS,     KC_TRANSPARENT,
                                                                                                    KC_LEFT_GUI,    KC_LEFT_CTRL,   KC_RIGHT_ALT,   KC_RIGHT_GUI,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_SPACE,       KC_TRANSPARENT, TO(4),          TO(0),          KC_TAB,         KC_ENTER
  ),
  [6] = LAYOUT_ergodox_pretty(
    AS_UP,          KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_TRANSPARENT,
    AS_DOWN,        RGB_MODE_FORWARD,RGB_SLD,        KC_TRANSPARENT, HSV_43_243_241, KC_MY_COMPUTER, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_UP,          KC_7,           KC_8,           KC_9,           KC_ASTR,        KC_F12,
    KC_LEFT_SHIFT,  RGB_VAI,        RGB_VAD,        HSV_86_255_128, KC_MEDIA_NEXT_TRACK,KC_GRAVE,                                                                       KC_DOWN,        KC_4,           KC_5,           KC_6,           KC_KP_SLASH,    KC_KP_MINUS,
    KC_TRANSPARENT, RGB_HUI,        RGB_HUD,        HSV_0_255_255,  KC_MEDIA_STOP,  KC_TILD,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_AMPR,        KC_1,           KC_2,           KC_3,           KC_BSLS,        KC_TRANSPARENT,
    KC_TRANSPARENT, RGB_TOG,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_DOT,         KC_0,           KC_EQUAL,       KC_TRANSPARENT,
                                                                                                    KC_AUDIO_VOL_UP,KC_AUDIO_VOL_DOWN,DM_REC1,        DM_REC2,
                                                                                                                    KC_UP,          DM_RSTP,
                                                                                    RGB_VAD,        KC_ENTER,       KC_DOWN,        RGB_VAD,        KC_TAB,         KC_KP_ENTER
  ),
  [7] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, TO(1),          TO(3),          TO(4),          KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, TO(5),          TO(6),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};



uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MT(MOD_RSFT, KC_N):
            return TAPPING_TERM + 100;
        default:
            return TAPPING_TERM;
    }
}

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [1] = { {169,120,255}, {169,120,255}, {169,120,255}, {169,120,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {141,255,233}, {0,0,0}, {0,0,0}, {0,0,0}, {141,255,233}, {141,255,233}, {141,255,233}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {105,255,255}, {105,255,255}, {105,255,255}, {105,255,255}, {105,255,255}, {249,228,255}, {249,228,255}, {249,228,255}, {249,228,255}, {249,228,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {154,255,255}, {154,255,255}, {154,255,255}, {154,255,255}, {154,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {154,255,255}, {154,255,255}, {154,255,255}, {35,255,255}, {154,255,255}, {154,255,255}, {154,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {249,228,255}, {249,228,255}, {249,228,255}, {249,228,255}, {249,228,255}, {105,255,255}, {105,255,255}, {105,255,255}, {105,255,255} },

    [4] = { {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {0,0,0}, {0,0,0}, {169,120,255}, {0,0,0}, {0,0,0}, {0,0,0}, {169,120,255}, {169,120,255}, {169,120,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {31,255,255}, {0,0,0}, {154,255,255}, {0,0,0}, {0,0,0}, {31,255,255}, {154,255,255}, {154,255,255}, {154,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {105,255,255}, {105,255,255}, {105,255,255}, {105,255,255}, {105,255,255}, {0,0,0}, {32,176,255}, {249,228,255}, {32,176,255}, {32,176,255}, {0,0,0}, {249,228,255}, {249,228,255}, {249,228,255}, {32,176,255}, {0,0,0}, {249,228,255}, {249,228,255}, {249,228,255}, {32,176,255}, {249,228,255}, {249,228,255}, {249,228,255}, {32,176,255}, {105,255,255}, {105,255,255}, {105,255,255}, {105,255,255}, {105,255,255}, {0,0,0}, {0,0,0}, {154,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {154,255,255}, {154,255,255}, {154,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [6] = { {105,255,255}, {105,255,255}, {105,255,255}, {105,255,255}, {105,255,255}, {32,255,234}, {35,255,255}, {35,255,255}, {35,255,255}, {154,255,255}, {32,255,234}, {35,255,255}, {35,255,255}, {35,255,255}, {154,255,255}, {154,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {154,255,255}, {0,0,0}, {146,224,255}, {35,255,255}, {154,255,255}, {105,255,255}, {105,255,255}, {105,255,255}, {105,255,255}, {105,255,255}, {14,255,255}, {35,255,255}, {154,255,255}, {146,224,255}, {146,224,255}, {14,255,255}, {35,255,255}, {105,255,255}, {146,224,255}, {146,224,255}, {14,255,255}, {35,255,255}, {249,228,255}, {146,224,255}, {146,224,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [7] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {31,255,255}, {31,255,255}, {31,255,255}, {0,0,0}, {0,0,0}, {31,255,255}, {31,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
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

bool rgb_matrix_indicators_user(void) {
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
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
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
    case 7:
      set_layer_color(7);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case HSV_43_243_241:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(43,243,241);
      }
      return false;
    case HSV_86_255_128:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(86,255,128);
      }
      return false;
    case HSV_0_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(0,255,255);
      }
      return false;
  }
  return true;
}

uint16_t layer_state_set_user(uint16_t state) {
    uint8_t layer = biton16(state);
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


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[5];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_1);
        tap_code16(KC_1);
        tap_code16(KC_1);
    }
    if(state->count > 3) {
        tap_code16(KC_1);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_1); break;
        case DOUBLE_TAP: register_code16(KC_6); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_1); register_code16(KC_1);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_1); break;
        case DOUBLE_TAP: unregister_code16(KC_6); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_1); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_2);
        tap_code16(KC_2);
        tap_code16(KC_2);
    }
    if(state->count > 3) {
        tap_code16(KC_2);
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(KC_2); break;
        case DOUBLE_TAP: register_code16(KC_7); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_2); register_code16(KC_2);
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(KC_2); break;
        case DOUBLE_TAP: unregister_code16(KC_7); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_2); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_3);
        tap_code16(KC_3);
        tap_code16(KC_3);
    }
    if(state->count > 3) {
        tap_code16(KC_3);
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(KC_3); break;
        case DOUBLE_TAP: register_code16(KC_8); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_3); register_code16(KC_3);
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(KC_3); break;
        case DOUBLE_TAP: unregister_code16(KC_8); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_3); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_4);
        tap_code16(KC_4);
        tap_code16(KC_4);
    }
    if(state->count > 3) {
        tap_code16(KC_4);
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(KC_4); break;
        case DOUBLE_TAP: register_code16(KC_9); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_4); register_code16(KC_4);
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(KC_4); break;
        case DOUBLE_TAP: unregister_code16(KC_9); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_4); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(tap_dance_state_t *state, void *user_data);
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void on_dance_4(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_5);
        tap_code16(KC_5);
        tap_code16(KC_5);
    }
    if(state->count > 3) {
        tap_code16(KC_5);
    }
}

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(KC_5); break;
        case DOUBLE_TAP: register_code16(KC_0); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_5); register_code16(KC_5);
    }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(KC_5); break;
        case DOUBLE_TAP: unregister_code16(KC_0); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_5); break;
    }
    dance_state[4].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
};

const key_override_t quote_copy_override = ko_make_basic(MOD_MASK_CTRL, KC_QUOTE, KC_COPY);
const key_override_t comma_paste_override = ko_make_basic(MOD_MASK_CTRL, KC_COMMA, KC_PASTE);
const key_override_t semicolon_undo_override = ko_make_basic(MOD_MASK_CTRL, KC_SCLN, KC_UNDO);

// This globally defines all key overrides to be used
const key_override_t *key_overrides[] = {
  &quote_copy_override,
  &comma_paste_override,
  &semicolon_undo_override
};
