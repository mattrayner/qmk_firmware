/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR
#undef RGBLIGHT_HUE_STEP
#define RGBLIGHT_HUE_STEP 3

#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL 13

#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED 9

#define FIRMWARE_VERSION u8"eaNDl/yMXMo"
#define DISABLE_RGB_MATRIX_DIGITAL_RAIN
#define DISABLE_RGB_MATRIX_ALPHAS_MODS
#define DISABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
#define DISABLE_RGB_MATRIX_RAINDROPS
