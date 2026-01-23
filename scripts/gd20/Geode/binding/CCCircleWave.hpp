#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCCircleWave {
public:
    static constexpr auto CLASS_NAME = "CCCircleWave";

    /**
     * @note[short] Android
     */
    static CCCircleWave* create(float p0, float p1, float p2, bool p3, bool p4);

    /**
     * @note[short] Android
     */
    static CCCircleWave* create(float p0, float p1, float p2, bool p3);

    /**
     * @note[short] Android
     */
    TodoReturn baseSetup(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn followObject(cocos2d::CCNode* p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn getBlendAdditive();

    /**
     * @note[short] Android
     */
    TodoReturn getCircleMode();

    /**
     * @note[short] Android
     */
    TodoReturn getColor();

    /**
     * @note[short] Android
     */
    TodoReturn getDelegate();

    /**
     * @note[short] Android
     */
    TodoReturn getLineWidth();

    /**
     * @note[short] Android
     */
    TodoReturn getOpacity();

    /**
     * @note[short] Android
     */
    TodoReturn getOpacityMod();

    /**
     * @note[short] Android
     */
    TodoReturn getRadius();

    /**
     * @note[short] Android
     */
    TodoReturn getWidth();

    /**
     * @note[short] Android
     */
    bool init(float p0, float p1, float p2, bool p3, bool p4);

    /**
     * @note[short] Android
     */
    void setBlendAdditive(bool p0);

    /**
     * @note[short] Android
     */
    void setCircleMode(CircleMode p0);

    /**
     * @note[short] Android
     */
    void setColor(cocos2d::ccColor3B p0);

    /**
     * @note[short] Android
     */
    void setDelegate(CCCircleWaveDelegate* p0);

    /**
     * @note[short] Android
     */
    void setLineWidth(int p0);

    /**
     * @note[short] Android
     */
    void setOpacity(float p0);

    /**
     * @note[short] Android
     */
    void setOpacityMod(float p0);

    /**
     * @note[short] Android
     */
    void setPosition(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    void setRadius(float p0);

    /**
     * @note[short] Android
     */
    void setWidth(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn updatePosition(float p0);

    /**
     * @note[short] Android
     */
    virtual cocos2d::CCPoint const& getPosition();

    /**
     * @note[short] Android
     */
    virtual void removeMeAndCleanup();

    /**
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] Android
     */
    virtual void updateTweenAction(float p0, char const* p1);
};
