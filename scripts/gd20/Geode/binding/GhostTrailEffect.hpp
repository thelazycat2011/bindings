#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GhostTrailEffect {
public:
    static constexpr auto CLASS_NAME = "GhostTrailEffect";

    /**
     * @note[short] Android
     */
    static GhostTrailEffect* create();

    /**
     * @note[short] Android
     */
    TodoReturn doBlendAdditive();

    /**
     * @note[short] Android
     */
    TodoReturn getBlendFunc();

    /**
     * @note[short] Android
     */
    TodoReturn getDelegate();

    /**
     * @note[short] Android
     */
    TodoReturn getGhostColor();

    /**
     * @note[short] Android
     */
    TodoReturn getInternalOffset();

    /**
     * @note[short] Android
     */
    TodoReturn getPosTarget();

    /**
     * @note[short] Android
     */
    TodoReturn getPTarget();

    /**
     * @note[short] Android
     */
    TodoReturn getScaleMod();

    /**
     * @note[short] Android
     */
    TodoReturn getStartAlpha();

    /**
     * @note[short] Android
     */
    TodoReturn getTarget();

    /**
     * @note[short] Android
     */
    TodoReturn getUsePosScale();

    /**
     * @note[short] Android
     */
    TodoReturn runWithTarget(cocos2d::CCSprite* p0, float p1, float p2, float p3, float p4, bool p5);

    /**
     * @note[short] Android
     */
    void setBlendFunc(cocos2d::_ccBlendFunc p0);

    /**
     * @note[short] Android
     */
    void setDelegate(GhostTrailDelegate* p0);

    /**
     * @note[short] Android
     */
    void setGhostColor(cocos2d::ccColor3B p0);

    /**
     * @note[short] Android
     */
    void setInternalOffset(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    void setPosTarget(cocos2d::CCSprite* p0);

    /**
     * @note[short] Android
     */
    void setPTarget(cocos2d::CCNode* p0);

    /**
     * @note[short] Android
     */
    void setScaleMod(float p0);

    /**
     * @note[short] Android
     */
    void setStartAlpha(float p0);

    /**
     * @note[short] Android
     */
    void setTarget(cocos2d::CCSprite* p0);

    /**
     * @note[short] Android
     */
    void setUsePosScale(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn stopTrail();

    /**
     * @note[short] Android
     */
    TodoReturn trailSnapshot(float p0);

    /**
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Android
     */
    virtual void draw();
};
