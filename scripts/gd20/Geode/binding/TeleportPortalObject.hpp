#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class TeleportPortalObject {
public:
    static constexpr auto CLASS_NAME = "TeleportPortalObject";

    /**
     * @note[short] Android
     */
    static TeleportPortalObject* create(char const* p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn customObjectSetup(gd::map<gd::string, gd::string>* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getLockX();

    /**
     * @note[short] Android
     */
    TodoReturn getPortalTargetY();

    /**
     * @note[short] Android
     */
    TodoReturn getSaveString();

    /**
     * @note[short] Android
     */
    TodoReturn getSmoothEase();

    /**
     * @note[short] Android
     */
    TodoReturn getTargetPortal();

    /**
     * @note[short] Android
     */
    TodoReturn getTeleportXOff(cocos2d::CCNode* p0);

    /**
     * @note[short] Android
     */
    bool init(char const* p0);

    /**
     * @note[short] Android
     */
    void setLockX(bool p0);

    /**
     * @note[short] Android
     */
    void setPortalTargetY(float p0);

    /**
     * @note[short] Android
     */
    void setPositionOverride(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    void setSmoothEase(bool p0);

    /**
     * @note[short] Android
     */
    void setStartPosOverride(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    void setTargetPortal(TeleportPortalObject* p0);

    /**
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& p0);

    /**
     * @note[short] Android
     */
    virtual void setRotation(float p0);

    /**
     * @note[short] Android
     */
    virtual void setStartPos(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn addToGroup(int p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn removeFromGroup(int p0);

    /**
     * @note[short] Android
     */
    virtual void setRotation2(float p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn addToGroup2(int p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn removeFromGroup2(int p0);
};
