#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CheckpointObject {
public:
    static constexpr auto CLASS_NAME = "CheckpointObject";

    /**
     * @note[short] Android
     */
    static CheckpointObject* create();

    /**
     * @note[short] Android
     */
    TodoReturn getActiveEnterEffect();

    /**
     * @note[short] Android
     */
    TodoReturn getCameraPos();

    /**
     * @note[short] Android
     */
    TodoReturn getColorAction(ColorAction* p0, cocos2d::ccColor3B p1);

    /**
     * @note[short] Android
     */
    TodoReturn getColorManagerState();

    /**
     * @note[short] Android
     */
    TodoReturn getDualMode();

    /**
     * @note[short] Android
     */
    TodoReturn getIsFlipped();

    /**
     * @note[short] Android
     */
    TodoReturn getObject();

    /**
     * @note[short] Android
     */
    TodoReturn getPlayerCheck01();

    /**
     * @note[short] Android
     */
    TodoReturn getPlayerCheck02();

    /**
     * @note[short] Android
     */
    TodoReturn getPortalObject();

    /**
     * @note[short] Android
     */
    TodoReturn getTimeStamp();

    /**
     * @note[short] Android
     */
    void setActiveEnterEffect(EnterEffect p0);

    /**
     * @note[short] Android
     */
    void setCameraPos(cocos2d::CCPoint p0);

    /**
     * @note[short] Android: Rebinded
     */
    void setColorManagerState(gd::string p0);

    /**
     * @note[short] Android
     */
    void setDualMode(bool p0);

    /**
     * @note[short] Android
     */
    void setIsFlipped(bool p0);

    /**
     * @note[short] Android
     */
    void setObject(GameObject* p0);

    /**
     * @note[short] Android
     */
    void setPlayerCheck01(PlayerCheckpoint* p0);

    /**
     * @note[short] Android
     */
    void setPlayerCheck02(PlayerCheckpoint* p0);

    /**
     * @note[short] Android
     */
    void setPortalObject(GameObject* p0);

    /**
     * @note[short] Android
     */
    void setTimeStamp(double p0);

    /**
     * @note[short] Android
     */
    virtual bool init();
};
