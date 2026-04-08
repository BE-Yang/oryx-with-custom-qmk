/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/

#define ORYX_CONFIGURATOR
#undef IGNORE_MOD_TAP_INTERRUPT
#undef DEBOUNCE
#define DEBOUNCE 30

#undef RGB_MATRIX_TIMEOUT
#define RGB_MATRIX_TIMEOUT 300000

#define USB_SUSPEND_WAKEUP_DELAY 0
#undef MOUSEKEY_WHEEL_INTERVAL
#define MOUSEKEY_WHEEL_INTERVAL 130

#undef MOUSEKEY_WHEEL_TIME_TO_MAX
#define MOUSEKEY_WHEEL_TIME_TO_MAX 70

#define CAPS_LOCK_STATUS
#define FIRMWARE_VERSION u8"aWZZb/4eMZo"
#define RAW_USAGE_PAGE 0xFF60
#define RAW_USAGE_ID 0x61
#define LAYER_STATE_16BIT

#define TAPPING_TERM_PER_KEY
#define RGB_MATRIX_STARTUP_SPD 60

