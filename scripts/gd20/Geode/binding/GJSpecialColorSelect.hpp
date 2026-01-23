#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJSpecialColorSelect {
public:
    static constexpr auto CLASS_NAME = "GJSpecialColorSelect";

    /**
     * @note[short] Android
     */
    static GJSpecialColorSelect* create(int p0, GJSpecialColorSelectDelegate* p1);

    /**
     * @note[short] Android
     */
    TodoReturn getButtonByTag(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn highlightSelected(ButtonSprite* p0);

    /**
     * @note[short] Android
     */
    bool init(int p0, GJSpecialColorSelectDelegate* p1);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSelectColor(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn textForColorIdx(int p0);

    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();
};
