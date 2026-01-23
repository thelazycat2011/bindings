#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class RingObject {
public:
    static constexpr auto CLASS_NAME = "RingObject";

    /**
     * @note[short] Android
     */
    static RingObject* create(char const* p0);

    /**
     * @note[short] Android
     */
    bool init(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn powerOnObject();

    /**
     * @note[short] Android
     */
    TodoReturn spawnCircle();

    /**
     * @note[short] Android
     */
    TodoReturn triggerActivated();

    /**
     * @note[short] Android
     */
    TodoReturn updateColors(cocos2d::ccColor3B p0);

    /**
     * @note[short] Android
     */
    virtual void setScale(float p0);

    /**
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& p0);

    /**
     * @note[short] Android
     */
    virtual void setVisible(bool p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn resetObject();

    /**
     * @note[short] Android
     */
    virtual void setRScale(float p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn powerOffObject();
};
