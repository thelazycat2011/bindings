#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GaragePage {
public:
    static constexpr auto CLASS_NAME = "GaragePage";

    /**
     * @note[short] Android
     */
    static GaragePage* create(IconType p0, GJGarageLayer* p1, cocos2d::SEL_MenuHandler p2);

    /**
     * @note[short] Android
     */
    bool init(IconType p0, GJGarageLayer* p1, cocos2d::SEL_MenuHandler p2);

    /**
     * @note[short] Android
     */
    TodoReturn listButtonBarSwitchedPage(ListButtonBar* p0, int p1);

    /**
     * @note[short] Android
     */
    void onGlow(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSelect(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn updateSelect(cocos2d::CCNode* p0);
};
