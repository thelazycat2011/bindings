#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class HSVWidgetPopup {
public:
    static constexpr auto CLASS_NAME = "HSVWidgetPopup";

    /**
     * @note[short] Android: Rebinded
     */
    static HSVWidgetPopup* create(cocos2d::ccHSVValue p0, HSVWidgetPopupDelegate* p1, gd::string p2);

    /**
     * @note[short] Android: Rebinded
     */
    bool init(cocos2d::ccHSVValue p0, HSVWidgetPopupDelegate* p1, gd::string p2);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();
};
