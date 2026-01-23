#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCLightStrip {
public:
    static constexpr auto CLASS_NAME = "CCLightStrip";

    /**
     * @note[short] Android
     */
    static CCLightStrip* create(float p0, float p1, float p2, float p3, float p4);

    /**
     * @note[short] Android
     */
    TodoReturn getColor();

    /**
     * @note[short] Android
     */
    TodoReturn getHeight();

    /**
     * @note[short] Android
     */
    TodoReturn getOpacity();

    /**
     * @note[short] Android
     */
    TodoReturn getWidth();

    /**
     * @note[short] Android
     */
    bool init(float p0, float p1, float p2, float p3, float p4);

    /**
     * @note[short] Android
     */
    void setColor(cocos2d::ccColor3B p0);

    /**
     * @note[short] Android
     */
    void setHeight(float p0);

    /**
     * @note[short] Android
     */
    void setOpacity(float p0);

    /**
     * @note[short] Android
     */
    void setWidth(float p0);

    /**
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] Android
     */
    virtual void updateTweenAction(float p0, char const* p1);
};
