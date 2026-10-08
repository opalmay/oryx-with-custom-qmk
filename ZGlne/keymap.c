#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
};

#define DUAL_FUNC_0 LT(11, KC_F21)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_RIGHT_ALT,   KC_TRANSPARENT, DRAG_SCROLL,    KC_MS_BTN2,     KC_MS_BTN1,     KC_TRANSPARENT,                                 TD(DANCE_0),    LGUI(LCTL(LSFT(KC_M))),KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_AUDIO_MUTE,  
    KC_BRIGHTNESS_UP,KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_AUDIO_VOL_UP,
    KC_BRIGHTNESS_DOWN,MT(MOD_LALT, KC_A),MT(MOD_LGUI, KC_S),MT(MOD_LCTL, KC_D),MT(MOD_LSFT, KC_F),LT(2, KC_G),                                    KC_H,           MT(MOD_LSFT, KC_J),MT(MOD_LCTL, KC_K),MT(MOD_LGUI, KC_L),MT(MOD_LALT, KC_SCLN),KC_AUDIO_VOL_DOWN,
    DUAL_FUNC_0,    KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       TD(DANCE_1),    
                                                    MT(MOD_LGUI, KC_SPACE),MO(1),                                          LT(4, KC_ENTER),LT(3, KC_BSPC)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 LCTL(KC_LEFT),  KC_HOME,        KC_END,         LCTL(KC_RIGHT), KC_BSPC,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_TRANSPARENT,                                 KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_DELETE,      KC_TRANSPARENT, 
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 LCTL(LSFT(KC_LEFT)),LSFT(KC_HOME),  LSFT(KC_END),   LCTL(LSFT(KC_RIGHT)),KC_TRANSPARENT, TO(0),          
                                                    KC_SPACE,       KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, NAVIGATOR_DEC_CPI,NAVIGATOR_INC_CPI,KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, TO(0),          NAVIGATOR_TURBO,NAVIGATOR_AIM,  TOGGLE_SCROLL,                                  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, DRAG_SCROLL,    KC_MS_BTN2,     KC_MS_BTN1,     KC_MS_BTN6,                                     NAVIGATOR_TURBO,KC_MS_BTN1,     KC_MS_BTN2,     DRAG_SCROLL,    KC_TRANSPARENT, KC_TRANSPARENT, 
    TO(0),          KC_TRANSPARENT, KC_MS_DBL_CLICK,KC_MS_BTN3,     LSFT(KC_MS_BTN1),KC_MS_BTN7,                                     KC_TRANSPARENT, DRAG_SCROLL,    NAVIGATOR_AIM,  KC_TRANSPARENT, KC_TRANSPARENT, TO(0),          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, TOGGLE_LAYER_COLOR,RGB_TOG,        RGB_MODE_FORWARD,RGB_SPD,        RGB_SPI,                                        RGB_VAD,        RGB_VAI,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TAB,         KC_LBRC,        KC_RBRC,        KC_MINUS,       KC_PIPE,                                        KC_CIRC,        KC_LCBR,        KC_RCBR,        KC_DLR,         KC_BSPC,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_EXLM,        KC_ASTR,        KC_COLN,        KC_EQUAL,       KC_AMPR,                                        KC_HASH,        KC_LPRN,        KC_RPRN,        KC_QUES,        KC_QUOTE,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TILD,        KC_PLUS,        KC_DQUO,        KC_UNDS,        KC_PERC,                                        KC_AT,          KC_LABK,        KC_RABK,        KC_BSLS,        KC_GRAVE,       KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, TO(0)
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F11,         KC_F12,         KC_ASTR,        KC_PLUS,        KC_UNDS,                                        KC_EQUAL,       KC_MINUS,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  '*', '*', '*', '*'
);

const uint16_t PROGMEM combo0[] = { MT(MOD_LCTL, KC_D), MT(MOD_LSFT, KC_F), COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_O, KC_E, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_U, KC_E, COMBO_END};
const uint16_t PROGMEM combo3[] = { MT(MOD_LGUI, KC_S), MT(MOD_LCTL, KC_D), COMBO_END};
const uint16_t PROGMEM combo4[] = { MT(MOD_LALT, KC_A), KC_E, COMBO_END};
const uint16_t PROGMEM combo5[] = { MT(MOD_LSFT, KC_J), MT(MOD_LSFT, KC_F), COMBO_END};
const uint16_t PROGMEM jk_click_combo[] = { MT(MOD_LSFT, KC_J), MT(MOD_LCTL, KC_K), COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_ESCAPE),
    COMBO(combo1, RALT(KC_O)),
    COMBO(combo2, RALT(KC_U)),
    COMBO(combo3, RALT(KC_S)),
    COMBO(combo4, RALT(KC_A)),
    COMBO(combo5, CW_TOGG),
    COMBO(jk_click_combo, MS_BTN1),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(4, KC_ENTER):
            return TAPPING_TERM -40;
        case LT(3, KC_BSPC):
            return TAPPING_TERM -40;
        default:
            return TAPPING_TERM;
    }
}


extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [1] = { {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255} },

    [2] = { {224,255,255}, {224,255,255}, {224,255,255}, {224,255,255}, {224,255,255}, {224,255,255}, {224,255,255}, {224,255,255}, {224,255,255}, {224,255,255}, {224,255,255}, {224,255,255}, {224,255,255}, {224,255,255}, {224,255,255}, {224,255,255}, {224,255,255}, {224,255,255}, {224,255,255}, {224,255,255}, {224,255,255}, {224,255,255}, {224,255,255}, {224,255,255}, {224,255,255}, {224,255,255}, {224,255,255}, {224,255,255}, {224,255,255}, {224,255,255}, {224,255,255}, {224,255,255}, {224,255,255}, {224,255,255}, {224,255,255}, {224,255,255}, {224,255,255}, {224,255,255}, {224,255,255}, {224,255,255}, {224,255,255}, {224,255,255}, {224,255,255}, {224,255,255}, {224,255,255}, {224,255,255}, {224,255,255}, {224,255,255}, {224,255,255}, {224,255,255}, {224,255,255}, {224,255,255} },

    [3] = { {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {239,255,255}, {239,255,255}, {239,255,255}, {239,255,255}, {239,255,255}, {0,0,0}, {176,255,255}, {176,255,255}, {176,255,255}, {176,255,255}, {176,255,255}, {0,0,0}, {239,255,255}, {239,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {239,255,255}, {239,255,255}, {239,255,255}, {239,255,255}, {239,255,255}, {0,0,0}, {176,255,255}, {176,255,255}, {176,255,255}, {176,255,255}, {176,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

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
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) { 
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
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  return true;
}


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

static tap dance_state[2];

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


void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case DOUBLE_TAP: layer_move(3); break;
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
    }
    dance_state[0].step = 0;
}
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case DOUBLE_TAP: layer_move(1); break;
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
    }
    dance_state[1].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_1_finished, dance_1_reset),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case QK_MODS ... QK_MODS_MAX:
    // Mouse and consumer keys (volume, media) with modifiers work inconsistently across operating systems,
    // this makes sure that modifiers are always applied to the key that was pressed.
    if (IS_MOUSE_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode)) || IS_CONSUMER_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))) {
      if (record->event.pressed) {
        add_mods(QK_MODS_GET_MODS(keycode));
        send_keyboard_report();
        wait_ms(2);
        register_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
        return false;
      } else {
        wait_ms(2);
        del_mods(QK_MODS_GET_MODS(keycode));
      }
    }
    break;

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LGUI(LCTL(LSFT(KC_W))));
        } else {
          unregister_code16(LGUI(LCTL(LSFT(KC_W))));
        }
      } else {
        if (record->event.pressed) {
          layer_on(2);
        } else {
          layer_off(2);
        }  
      }  
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}

#ifdef POINTING_DEVICE_ENABLE
// Custom trackball behavior layered on top of the Navigator module. This runs
// after the module in the pointing-device chain (modules -> _kb -> _user), so
// mouse_report already carries the rotated, CPI-scaled delta.
//
//   Super held        -> the ball scrolls
//   nav layer active  -> the ball sends arrow-key taps
//   otherwise         -> the ball moves the pointer as usual

// Layer on which the ball sends arrow keys instead of moving the pointer.
#    ifndef NAV_ARROW_LAYER
#        define NAV_ARROW_LAYER 1
#    endif
// Sensor counts the ball must travel to produce one arrow tap. Lower is more
// sensitive.
#    ifndef NAV_ARROW_STEP
#        define NAV_ARROW_STEP 16
#    endif
// Upper bound on taps emitted from a single report, so a fast flick cannot
// stall the scan loop.
#    ifndef NAV_ARROW_MAX_TAPS
#        define NAV_ARROW_MAX_TAPS 8
#    endif
// Modifiers that turn the ball into a scroll wheel while held.
#    ifndef NAV_MOD_SCROLL_MASK
#        define NAV_MOD_SCROLL_MASK MOD_MASK_GUI
#    endif
// Sensor counts per scroll notch for the modifier scroll. Follows the module's
// own scroll speed by default. Higher is less sensitive.
#    ifndef NAV_MOD_SCROLL_DIVIDER
#        define NAV_MOD_SCROLL_DIVIDER NAVIGATOR_SCROLL_DIVIDER
#    endif

static int16_t nav_arrow_x   = 0;
static int16_t nav_arrow_y   = 0;
static float   nav_scroll_h  = 0.0f;
static float   nav_scroll_v  = 0.0f;

// Turn ball movement into wheel movement, matching the sign conventions and
// fractional carry of the module's own scroll path.
static report_mouse_t nav_scroll_from_motion(report_mouse_t mouse_report) {
#    ifdef POINTING_DEVICE_HIRES_SCROLL_ENABLE
    const float gain = (float)pointing_device_get_hires_scroll_resolution() / NAV_MOD_SCROLL_DIVIDER;
#    else
    const float gain = 1.0f / NAV_MOD_SCROLL_DIVIDER;
#    endif

    nav_scroll_h += (float)mouse_report.x * gain;
    nav_scroll_v += (float)mouse_report.y * gain;

#    ifdef WHEEL_EXTENDED_REPORT
    const float lim = 32000.0f;
#    else
    const float lim = 127.0f;
#    endif
    float out_h = nav_scroll_h;
    float out_v = nav_scroll_v;
    if (out_h > lim) out_h = lim;
    if (out_h < -lim) out_h = -lim;
    if (out_v > lim) out_v = lim;
    if (out_v < -lim) out_v = -lim;

    mouse_hv_report_t send_h = (mouse_hv_report_t)out_h; // truncates toward zero
    mouse_hv_report_t send_v = (mouse_hv_report_t)out_v;
    nav_scroll_h -= (float)send_h;
    nav_scroll_v -= (float)send_v;

#    ifdef NAVIGATOR_SCROLL_INVERT_X
    mouse_report.h = send_h;
#    else
    mouse_report.h = -send_h;
#    endif
#    ifdef NAVIGATOR_SCROLL_INVERT_Y
    mouse_report.v = -send_v;
#    else
    mouse_report.v = send_v;
#    endif

    mouse_report.x = 0;
    mouse_report.y = 0;
    return mouse_report;
}

// Emit arrow-key taps for accumulated ball movement. Locked to the dominant
// axis so a diagonal roll does not fire both axes.
static report_mouse_t nav_arrows_from_motion(report_mouse_t mouse_report) {
    nav_arrow_x += mouse_report.x;
    nav_arrow_y += mouse_report.y;

    int16_t abs_x = (nav_arrow_x < 0) ? -nav_arrow_x : nav_arrow_x;
    int16_t abs_y = (nav_arrow_y < 0) ? -nav_arrow_y : nav_arrow_y;

    if (abs_x >= abs_y) {
        nav_arrow_y = 0;
        for (uint8_t i = 0; i < NAV_ARROW_MAX_TAPS && nav_arrow_x >= NAV_ARROW_STEP; i++) {
            nav_arrow_x -= NAV_ARROW_STEP;
            tap_code(KC_RIGHT);
        }
        for (uint8_t i = 0; i < NAV_ARROW_MAX_TAPS && nav_arrow_x <= -NAV_ARROW_STEP; i++) {
            nav_arrow_x += NAV_ARROW_STEP;
            tap_code(KC_LEFT);
        }
    } else {
        nav_arrow_x = 0;
        for (uint8_t i = 0; i < NAV_ARROW_MAX_TAPS && nav_arrow_y >= NAV_ARROW_STEP; i++) {
            nav_arrow_y -= NAV_ARROW_STEP;
            tap_code(KC_DOWN);
        }
        for (uint8_t i = 0; i < NAV_ARROW_MAX_TAPS && nav_arrow_y <= -NAV_ARROW_STEP; i++) {
            nav_arrow_y += NAV_ARROW_STEP;
            tap_code(KC_UP);
        }
    }

    mouse_report.x = 0;
    mouse_report.y = 0;
    return mouse_report;
}

report_mouse_t pointing_device_task_user(report_mouse_t mouse_report) {
    // The module already turned this report into scroll, through DRAG_SCROLL,
    // TOGGLE_SCROLL or a scroll layer. Leave its output untouched.
    if (mouse_report.h != 0 || mouse_report.v != 0) {
        return mouse_report;
    }

    uint8_t mods = get_mods() | get_weak_mods() | get_oneshot_mods();

    if (mods & NAV_MOD_SCROLL_MASK) {
        nav_arrow_x = 0;
        nav_arrow_y = 0;
        return nav_scroll_from_motion(mouse_report);
    }

    nav_scroll_h = 0.0f;
    nav_scroll_v = 0.0f;

    if (layer_state_is(NAV_ARROW_LAYER)) {
        return nav_arrows_from_motion(mouse_report);
    }

    nav_arrow_x = 0;
    nav_arrow_y = 0;
    return mouse_report;
}
#endif
