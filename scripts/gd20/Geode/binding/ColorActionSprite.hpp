#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ColorActionSprite {
public:
    static constexpr auto CLASS_NAME = "ColorActionSprite";

    /**
     * @note[short] Android
     */
    static ColorActionSprite* create();

    /**
     * @note[short] Android
     */
    TodoReturn getActiveColor();

    /**
     * @note[short] Android
     */
    TodoReturn getQueuedColorChange();

    /**
     * @note[short] Android
     */
    void setActiveColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] Android
     */
    void setQueuedColorChange(cocos2d::ccColor3B p0);

    /**
     * @note[short] Android
     */
    virtual bool init();
};
