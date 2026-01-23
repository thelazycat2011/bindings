#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJRobotSprite {
public:
    static constexpr auto CLASS_NAME = "GJRobotSprite";

    /**
     * @note[short] Android
     */
    static GJRobotSprite* create();

    /**
     * @note[short] Android
     */
    TodoReturn getFireBoostSprite();

    /**
     * @note[short] Android
     */
    TodoReturn getHeadSprite();

    /**
     * @note[short] Android
     */
    TodoReturn hideGlow();

    /**
     * @note[short] Android
     */
    TodoReturn showGlow();

    /**
     * @note[short] Android
     */
    TodoReturn updateColor01(cocos2d::ccColor3B p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateColor02(cocos2d::ccColor3B p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateColors();

    /**
     * @note[short] Android
     */
    TodoReturn updateFrame(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateGlowColor(cocos2d::ccColor3B p0, bool p1);

    /**
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);
};
