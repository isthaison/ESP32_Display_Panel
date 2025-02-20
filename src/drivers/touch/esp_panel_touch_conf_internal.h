/*
 * SPDX-FileCopyrightText: 2024-2025 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

// *INDENT-OFF*

#include "drivers/esp_panel_drivers_conf_internal.h"

#ifndef ESP_PANEL_DRIVERS_INCLUDE_INSIDE
    /**
     * Define the driver configuration
     *
     */
    #ifndef ESP_PANEL_DRIVERS_TOUCH_MAX_POINTS
        #ifdef CONFIG_ESP_PANEL_DRIVERS_TOUCH_MAX_POINTS
            #define ESP_PANEL_DRIVERS_TOUCH_MAX_POINTS CONFIG_ESP_PANEL_DRIVERS_TOUCH_MAX_POINTS
        #else
            #define ESP_PANEL_DRIVERS_TOUCH_MAX_POINTS (5)
        #endif
    #endif

    #ifndef ESP_PANEL_DRIVERS_TOUCH_MAX_BUTTONS
        #ifdef CONFIG_ESP_PANEL_DRIVERS_TOUCH_MAX_BUTTONS
            #define ESP_PANEL_DRIVERS_TOUCH_MAX_BUTTONS CONFIG_ESP_PANEL_DRIVERS_TOUCH_MAX_BUTTONS
        #else
            #define ESP_PANEL_DRIVERS_TOUCH_MAX_BUTTONS (5)
        #endif
    #endif

    #ifndef ESP_PANEL_DRIVERS_TOUCH_USE_ALL
        #ifdef CONFIG_ESP_PANEL_DRIVERS_TOUCH_USE_ALL
            #define ESP_PANEL_DRIVERS_TOUCH_USE_ALL CONFIG_ESP_PANEL_DRIVERS_TOUCH_USE_ALL
        #else
            #define ESP_PANEL_DRIVERS_TOUCH_USE_ALL (0)
        #endif
    #endif

    #if ESP_PANEL_DRIVERS_TOUCH_USE_ALL
        #define ESP_PANEL_DRIVERS_TOUCH_USE_AXS15231B (1)
        #define ESP_PANEL_DRIVERS_TOUCH_USE_CHSC6540 (1)
        #define ESP_PANEL_DRIVERS_TOUCH_USE_CST816S (1)
        #define ESP_PANEL_DRIVERS_TOUCH_USE_FT5x06 (1)
        #define ESP_PANEL_DRIVERS_TOUCH_USE_GT911 (1)
        #define ESP_PANEL_DRIVERS_TOUCH_USE_GT1151 (1)
        #define ESP_PANEL_DRIVERS_TOUCH_USE_SPD2010 (1)
        #define ESP_PANEL_DRIVERS_TOUCH_USE_ST1633 (1)
        #define ESP_PANEL_DRIVERS_TOUCH_USE_ST7123 (1)
        #define ESP_PANEL_DRIVERS_TOUCH_USE_STMPE610 (1)
        #define ESP_PANEL_DRIVERS_TOUCH_USE_TT21100 (1)
        #define ESP_PANEL_DRIVERS_TOUCH_USE_XPT2046 (1)
    #else
        #ifndef ESP_PANEL_DRIVERS_TOUCH_USE_AXS15231B
            #ifdef CONFIG_ESP_PANEL_DRIVERS_TOUCH_USE_AXS15231B
                #define ESP_PANEL_DRIVERS_TOUCH_USE_AXS15231B CONFIG_ESP_PANEL_DRIVERS_TOUCH_USE_AXS15231B
            #else
                #define ESP_PANEL_DRIVERS_TOUCH_USE_AXS15231B (0)
            #endif
        #endif

        #ifndef ESP_PANEL_DRIVERS_TOUCH_USE_CHSC6540
            #ifdef CONFIG_ESP_PANEL_DRIVERS_TOUCH_USE_CHSC6540
                #define ESP_PANEL_DRIVERS_TOUCH_USE_CHSC6540 CONFIG_ESP_PANEL_DRIVERS_TOUCH_USE_CHSC6540
            #else
                #define ESP_PANEL_DRIVERS_TOUCH_USE_CHSC6540 (0)
            #endif
        #endif

        #ifndef ESP_PANEL_DRIVERS_TOUCH_USE_CST816S
            #ifdef CONFIG_ESP_PANEL_DRIVERS_TOUCH_USE_CST816S
                #define ESP_PANEL_DRIVERS_TOUCH_USE_CST816S CONFIG_ESP_PANEL_DRIVERS_TOUCH_USE_CST816S
            #else
                #define ESP_PANEL_DRIVERS_TOUCH_USE_CST816S (0)
            #endif
        #endif

        #ifndef ESP_PANEL_DRIVERS_TOUCH_USE_FT5x06
            #ifdef CONFIG_ESP_PANEL_DRIVERS_TOUCH_USE_FT5x06
                #define ESP_PANEL_DRIVERS_TOUCH_USE_FT5x06 CONFIG_ESP_PANEL_DRIVERS_TOUCH_USE_FT5x06
            #else
                #define ESP_PANEL_DRIVERS_TOUCH_USE_FT5x06 (0)
            #endif
        #endif

        #ifndef ESP_PANEL_DRIVERS_TOUCH_USE_GT911
            #ifdef CONFIG_ESP_PANEL_DRIVERS_TOUCH_USE_GT911
                #define ESP_PANEL_DRIVERS_TOUCH_USE_GT911 CONFIG_ESP_PANEL_DRIVERS_TOUCH_USE_GT911
            #else
                #define ESP_PANEL_DRIVERS_TOUCH_USE_GT911 (0)
            #endif
        #endif

        #ifndef ESP_PANEL_DRIVERS_TOUCH_USE_GT1151
            #ifdef CONFIG_ESP_PANEL_DRIVERS_TOUCH_USE_GT1151
                #define ESP_PANEL_DRIVERS_TOUCH_USE_GT1151 CONFIG_ESP_PANEL_DRIVERS_TOUCH_USE_GT1151
            #else
                #define ESP_PANEL_DRIVERS_TOUCH_USE_GT1151 (0)
            #endif
        #endif

        #ifndef ESP_PANEL_DRIVERS_TOUCH_USE_SPD2010
            #ifdef CONFIG_ESP_PANEL_DRIVERS_TOUCH_USE_SPD2010
                #define ESP_PANEL_DRIVERS_TOUCH_USE_SPD2010 CONFIG_ESP_PANEL_DRIVERS_TOUCH_USE_SPD2010
            #else
                #define ESP_PANEL_DRIVERS_TOUCH_USE_SPD2010 (0)
            #endif
        #endif

        #ifndef ESP_PANEL_DRIVERS_TOUCH_USE_ST1633
            #ifdef CONFIG_ESP_PANEL_DRIVERS_TOUCH_USE_ST1633
                #define ESP_PANEL_DRIVERS_TOUCH_USE_ST1633 CONFIG_ESP_PANEL_DRIVERS_TOUCH_USE_ST1633
            #else
                #define ESP_PANEL_DRIVERS_TOUCH_USE_ST1633 (0)
            #endif
        #endif

        #ifndef ESP_PANEL_DRIVERS_TOUCH_USE_ST7123
            #ifdef CONFIG_ESP_PANEL_DRIVERS_TOUCH_USE_ST7123
                #define ESP_PANEL_DRIVERS_TOUCH_USE_ST7123 CONFIG_ESP_PANEL_DRIVERS_TOUCH_USE_ST7123
            #else
                #define ESP_PANEL_DRIVERS_TOUCH_USE_ST7123 (0)
            #endif
        #endif

        #ifndef ESP_PANEL_DRIVERS_TOUCH_USE_STMPE610
            #ifdef CONFIG_ESP_PANEL_DRIVERS_TOUCH_USE_STMPE610
                #define ESP_PANEL_DRIVERS_TOUCH_USE_STMPE610 CONFIG_ESP_PANEL_DRIVERS_TOUCH_USE_STMPE610
            #else
                #define ESP_PANEL_DRIVERS_TOUCH_USE_STMPE610 (0)
            #endif
        #endif

        #ifndef ESP_PANEL_DRIVERS_TOUCH_USE_TT21100
            #ifdef CONFIG_ESP_PANEL_DRIVERS_TOUCH_USE_TT21100
                #define ESP_PANEL_DRIVERS_TOUCH_USE_TT21100 CONFIG_ESP_PANEL_DRIVERS_TOUCH_USE_TT21100
            #else
                #define ESP_PANEL_DRIVERS_TOUCH_USE_TT21100 (0)
            #endif
        #endif

        #ifndef ESP_PANEL_DRIVERS_TOUCH_USE_XPT2046
            #ifdef CONFIG_ESP_PANEL_DRIVERS_TOUCH_USE_XPT2046
                #define ESP_PANEL_DRIVERS_TOUCH_USE_XPT2046 CONFIG_ESP_PANEL_DRIVERS_TOUCH_USE_XPT2046
            #else
                #define ESP_PANEL_DRIVERS_TOUCH_USE_XPT2046 (0)
            #endif
        #endif
    #endif

    #ifndef ESP_PANEL_DRIVERS_TOUCH_COMPILE_UNUSED_DRIVERS
        #ifdef CONFIG_ESP_PANEL_DRIVERS_TOUCH_COMPILE_UNUSED_DRIVERS
            #define ESP_PANEL_DRIVERS_TOUCH_COMPILE_UNUSED_DRIVERS CONFIG_ESP_PANEL_DRIVERS_TOUCH_COMPILE_UNUSED_DRIVERS
        #else
            #define ESP_PANEL_DRIVERS_TOUCH_COMPILE_UNUSED_DRIVERS (0)
        #endif
    #endif

    #ifndef ESP_PANEL_DRIVERS_TOUCH_XPT2046_Z_THRESHOLD
        #ifdef CONFIG_ESP_PANEL_DRIVERS_TOUCH_XPT2046_Z_THRESHOLD
            #define ESP_PANEL_DRIVERS_TOUCH_XPT2046_Z_THRESHOLD CONFIG_ESP_PANEL_DRIVERS_TOUCH_XPT2046_Z_THRESHOLD
        #else
            #define ESP_PANEL_DRIVERS_TOUCH_XPT2046_Z_THRESHOLD (400)
        #endif
    #endif

    #ifndef ESP_PANEL_DRIVERS_TOUCH_XPT2046_INTERRUPT_MODE
        #ifdef CONFIG_ESP_PANEL_DRIVERS_TOUCH_XPT2046_INTERRUPT_MODE
            #define ESP_PANEL_DRIVERS_TOUCH_XPT2046_INTERRUPT_MODE CONFIG_ESP_PANEL_DRIVERS_TOUCH_XPT2046_INTERRUPT_MODE
        #else
            #define ESP_PANEL_DRIVERS_TOUCH_XPT2046_INTERRUPT_MODE (0)
        #endif
    #endif

    #ifndef ESP_PANEL_DRIVERS_TOUCH_XPT2046_VREF_ON_MODE
        #ifdef CONFIG_ESP_PANEL_DRIVERS_TOUCH_XPT2046_VREF_ON_MODE
            #define ESP_PANEL_DRIVERS_TOUCH_XPT2046_VREF_ON_MODE CONFIG_ESP_PANEL_DRIVERS_TOUCH_XPT2046_VREF_ON_MODE
        #else
            #define ESP_PANEL_DRIVERS_TOUCH_XPT2046_VREF_ON_MODE (0)
        #endif
    #endif

    #ifndef ESP_PANEL_DRIVERS_TOUCH_XPT2046_CONVERT_ADC_TO_COORDS
        #ifdef CONFIG_ESP_PANEL_DRIVERS_TOUCH_XPT2046_CONVERT_ADC_TO_COORDS
            #define ESP_PANEL_DRIVERS_TOUCH_XPT2046_CONVERT_ADC_TO_COORDS CONFIG_ESP_PANEL_DRIVERS_TOUCH_XPT2046_CONVERT_ADC_TO_COORDS
        #else
            #define ESP_PANEL_DRIVERS_TOUCH_XPT2046_CONVERT_ADC_TO_COORDS (1)
        #endif
    #endif

    #ifndef ESP_PANEL_DRIVERS_TOUCH_XPT2046_ENABLE_LOCKING
        #ifdef CONFIG_ESP_PANEL_DRIVERS_TOUCH_XPT2046_ENABLE_LOCKING
            #define ESP_PANEL_DRIVERS_TOUCH_XPT2046_ENABLE_LOCKING CONFIG_ESP_PANEL_DRIVERS_TOUCH_XPT2046_ENABLE_LOCKING
        #else
            #define ESP_PANEL_DRIVERS_TOUCH_XPT2046_ENABLE_LOCKING (0)
        #endif
    #endif
#endif

/**
 * Enable the driver if it is used or if the compile unused drivers is enabled
 */
#ifndef ESP_PANEL_DRIVERS_TOUCH_ENABLE_AXS15231B
    #if ESP_PANEL_DRIVERS_TOUCH_COMPILE_UNUSED_DRIVERS || ESP_PANEL_DRIVERS_TOUCH_USE_AXS15231B
        #define ESP_PANEL_DRIVERS_TOUCH_ENABLE_AXS15231B  (1)
    #else
        #define ESP_PANEL_DRIVERS_TOUCH_ENABLE_AXS15231B  (0)
    #endif
#endif

#ifndef ESP_PANEL_DRIVERS_TOUCH_ENABLE_CHSC6540
    #if ESP_PANEL_DRIVERS_TOUCH_COMPILE_UNUSED_DRIVERS || ESP_PANEL_DRIVERS_TOUCH_USE_CHSC6540
        #define ESP_PANEL_DRIVERS_TOUCH_ENABLE_CHSC6540  (1)
    #else
        #define ESP_PANEL_DRIVERS_TOUCH_ENABLE_CHSC6540  (0)
    #endif
#endif

#ifndef ESP_PANEL_DRIVERS_TOUCH_ENABLE_CST816S
    #if ESP_PANEL_DRIVERS_TOUCH_COMPILE_UNUSED_DRIVERS || ESP_PANEL_DRIVERS_TOUCH_USE_CST816S
        #define ESP_PANEL_DRIVERS_TOUCH_ENABLE_CST816S  (1)
    #else
        #define ESP_PANEL_DRIVERS_TOUCH_ENABLE_CST816S  (0)
    #endif
#endif

#ifndef ESP_PANEL_DRIVERS_TOUCH_ENABLE_FT5x06
    #if ESP_PANEL_DRIVERS_TOUCH_COMPILE_UNUSED_DRIVERS || ESP_PANEL_DRIVERS_TOUCH_USE_FT5x06
        #define ESP_PANEL_DRIVERS_TOUCH_ENABLE_FT5x06  (1)
    #else
        #define ESP_PANEL_DRIVERS_TOUCH_ENABLE_FT5x06  (0)
    #endif
#endif

#ifndef ESP_PANEL_DRIVERS_TOUCH_ENABLE_GT911
    #if ESP_PANEL_DRIVERS_TOUCH_COMPILE_UNUSED_DRIVERS || ESP_PANEL_DRIVERS_TOUCH_USE_GT911
        #define ESP_PANEL_DRIVERS_TOUCH_ENABLE_GT911  (1)
    #else
        #define ESP_PANEL_DRIVERS_TOUCH_ENABLE_GT911  (0)
    #endif
#endif

#ifndef ESP_PANEL_DRIVERS_TOUCH_ENABLE_GT1151
    #if ESP_PANEL_DRIVERS_TOUCH_COMPILE_UNUSED_DRIVERS || ESP_PANEL_DRIVERS_TOUCH_USE_GT1151
        #define ESP_PANEL_DRIVERS_TOUCH_ENABLE_GT1151  (1)
    #else
        #define ESP_PANEL_DRIVERS_TOUCH_ENABLE_GT1151  (0)
    #endif
#endif

#ifndef ESP_PANEL_DRIVERS_TOUCH_ENABLE_SPD2010
    #if ESP_PANEL_DRIVERS_TOUCH_COMPILE_UNUSED_DRIVERS || ESP_PANEL_DRIVERS_TOUCH_USE_SPD2010
        #define ESP_PANEL_DRIVERS_TOUCH_ENABLE_SPD2010  (1)
    #else
        #define ESP_PANEL_DRIVERS_TOUCH_ENABLE_SPD2010  (0)
    #endif
#endif

#ifndef ESP_PANEL_DRIVERS_TOUCH_ENABLE_ST1633
    #if ESP_PANEL_DRIVERS_TOUCH_COMPILE_UNUSED_DRIVERS || ESP_PANEL_DRIVERS_TOUCH_USE_ST1633
        #define ESP_PANEL_DRIVERS_TOUCH_ENABLE_ST1633  (1)
    #else
        #define ESP_PANEL_DRIVERS_TOUCH_ENABLE_ST1633  (0)
    #endif
#endif

#ifndef ESP_PANEL_DRIVERS_TOUCH_ENABLE_ST7123
    #if ESP_PANEL_DRIVERS_TOUCH_COMPILE_UNUSED_DRIVERS || ESP_PANEL_DRIVERS_TOUCH_USE_ST7123
        #define ESP_PANEL_DRIVERS_TOUCH_ENABLE_ST7123  (1)
    #else
        #define ESP_PANEL_DRIVERS_TOUCH_ENABLE_ST7123  (0)
    #endif
#endif

#ifndef ESP_PANEL_DRIVERS_TOUCH_ENABLE_STMPE610
    #if ESP_PANEL_DRIVERS_TOUCH_COMPILE_UNUSED_DRIVERS || ESP_PANEL_DRIVERS_TOUCH_USE_STMPE610
        #define ESP_PANEL_DRIVERS_TOUCH_ENABLE_STMPE610  (1)
    #else
        #define ESP_PANEL_DRIVERS_TOUCH_ENABLE_STMPE610  (0)
    #endif
#endif

#ifndef ESP_PANEL_DRIVERS_TOUCH_ENABLE_TT21100
    #if ESP_PANEL_DRIVERS_TOUCH_COMPILE_UNUSED_DRIVERS || ESP_PANEL_DRIVERS_TOUCH_USE_TT21100
        #define ESP_PANEL_DRIVERS_TOUCH_ENABLE_TT21100  (1)
    #else
        #define ESP_PANEL_DRIVERS_TOUCH_ENABLE_TT21100  (0)
    #endif
#endif

#ifndef ESP_PANEL_DRIVERS_TOUCH_ENABLE_XPT2046
    #if ESP_PANEL_DRIVERS_TOUCH_COMPILE_UNUSED_DRIVERS || ESP_PANEL_DRIVERS_TOUCH_USE_XPT2046
        #define ESP_PANEL_DRIVERS_TOUCH_ENABLE_XPT2046  (1)
    #else
        #define ESP_PANEL_DRIVERS_TOUCH_ENABLE_XPT2046  (0)
    #endif
#endif

// *INDENT-ON*
