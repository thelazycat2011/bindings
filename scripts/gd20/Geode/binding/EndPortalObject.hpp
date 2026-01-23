#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class EndPortalObject {
public:
    static constexpr auto CLASS_NAME = "EndPortalObject";

    /**
     * @note[short] Android
     */
    static EndPortalObject* create();

    /**
     * @note[short] Android
     */
    TodoReturn calculateSpawnXPos();

    /**
     * @note[short] Android
     */
    TodoReturn triggerObject();

    /**
     * @note[short] Android
     */
    TodoReturn updateColors(cocos2d::ccColor3B p0);

    /**
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& p0);

    /**
     * @note[short] Android
     */
    virtual void setVisible(bool p0);
};
