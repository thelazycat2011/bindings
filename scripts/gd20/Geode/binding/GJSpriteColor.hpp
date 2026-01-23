#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJSpriteColor {
public:
    static constexpr auto CLASS_NAME = "GJSpriteColor";

    /**
     * @note[short] Android
     */
    static GJSpriteColor* create();

    /**
     * @note[short] Android
     */
    TodoReturn getBaseOpacityMod();

    /**
     * @note[short] Android
     */
    TodoReturn getColorMode();

    /**
     * @note[short] Android
     */
    TodoReturn getCustomBlend();

    /**
     * @note[short] Android
     */
    TodoReturn getCustomColor();

    /**
     * @note[short] Android
     */
    TodoReturn getCustomColorMode();

    /**
     * @note[short] Android
     */
    TodoReturn getCustomOpacityMod();

    /**
     * @note[short] Android
     */
    TodoReturn getDefaultColorMode();

    /**
     * @note[short] Android
     */
    TodoReturn getEnableHSV();

    /**
     * @note[short] Android
     */
    TodoReturn getHSVValue();

    /**
     * @note[short] Android
     */
    bool init();

    /**
     * @note[short] Android
     */
    TodoReturn resetCustomColorMode();

    /**
     * @note[short] Android
     */
    void setBaseOpacityMod(float p0);

    /**
     * @note[short] Android
     */
    void setCustomBlend(bool p0);

    /**
     * @note[short] Android
     */
    void setCustomColor(cocos2d::ccColor3B p0);

    /**
     * @note[short] Android
     */
    void setCustomColorMode(int p0);

    /**
     * @note[short] Android
     */
    void setCustomOpacityMod(float p0);

    /**
     * @note[short] Android
     */
    void setDefaultColorMode(int p0);

    /**
     * @note[short] Android
     */
    void setEnableHSV(bool p0);

    /**
     * @note[short] Android
     */
    void setHSVValue(cocos2d::ccHSVValue p0);
};
