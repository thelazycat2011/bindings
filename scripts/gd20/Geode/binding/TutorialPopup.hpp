#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class TutorialPopup {
public:
    static constexpr auto CLASS_NAME = "TutorialPopup";

    /**
     * @note[short] Android: Rebinded
     */
    static TutorialPopup* create(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn animateMenu();

    /**
     * @note[short] Android
     */
    TodoReturn closeTutorial(cocos2d::CCObject* p0);

    /**
     * @note[short] Android: Rebinded
     */
    bool init(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn registerForCallback(cocos2d::SEL_MenuHandler p0, cocos2d::CCNode* p1);

    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Android
     */
    virtual TodoReturn show();
};
