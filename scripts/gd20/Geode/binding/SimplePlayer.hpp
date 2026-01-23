#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SimplePlayer {
public:
    static constexpr auto CLASS_NAME = "SimplePlayer";

    /**
     * @note[short] Android
     */
    static SimplePlayer* create(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getSpecial();

    /**
     * @note[short] Android
     */
    TodoReturn getUseGlow();

    /**
     * @note[short] Android
     */
    bool init(int p0);

    /**
     * @note[short] Android
     */
    void setFrames(char const* p0, char const* p1, char const* p2, char const* p3);

    /**
     * @note[short] Android
     */
    void setSecondColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] Android
     */
    void setSpecial(int p0);

    /**
     * @note[short] Android
     */
    void setUseGlow(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateColors();

    /**
     * @note[short] Android
     */
    TodoReturn updatePlayerFrame(int p0, IconType p1);

    /**
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);

    /**
     * @note[short] Android
     */
    virtual void setColor(cocos2d::ccColor3B const& p0);
};
