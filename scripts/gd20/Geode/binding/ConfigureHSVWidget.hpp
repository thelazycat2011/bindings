#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ConfigureHSVWidget {
public:
    static constexpr auto CLASS_NAME = "ConfigureHSVWidget";

    /**
     * @note[short] Android
     */
    static ConfigureHSVWidget* create(cocos2d::ccHSVValue p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn getHSVVal();

    /**
     * @note[short] Android
     */
    TodoReturn getIsMixed();

    /**
     * @note[short] Android
     */
    bool init(cocos2d::ccHSVValue p0, bool p1);

    /**
     * @note[short] Android
     */
    void onResetHSV(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleSConst(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleVConst(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn sliderChanged(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateLabels();
};
