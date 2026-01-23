#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class PlayerCheckpoint {
public:
    static constexpr auto CLASS_NAME = "PlayerCheckpoint";

    /**
     * @note[short] Android
     */
    static PlayerCheckpoint* create();

    /**
     * @note[short] Android
     */
    TodoReturn getBirdMode();

    /**
     * @note[short] Android
     */
    TodoReturn getCanJump();

    /**
     * @note[short] Android
     */
    TodoReturn getDartMode();

    /**
     * @note[short] Android
     */
    TodoReturn getFlipGravity();

    /**
     * @note[short] Android
     */
    TodoReturn getFlyMode();

    /**
     * @note[short] Android
     */
    TodoReturn getGhostType();

    /**
     * @note[short] Android
     */
    TodoReturn getIsScaled();

    /**
     * @note[short] Android
     */
    TodoReturn getPlayerPos();

    /**
     * @note[short] Android
     */
    TodoReturn getPlayerYVel();

    /**
     * @note[short] Android
     */
    TodoReturn getRobotMode();

    /**
     * @note[short] Android
     */
    TodoReturn getRollMode();

    /**
     * @note[short] Android
     */
    TodoReturn getTimeMod();

    /**
     * @note[short] Android
     */
    void setBirdMode(bool p0);

    /**
     * @note[short] Android
     */
    void setCanJump(bool p0);

    /**
     * @note[short] Android
     */
    void setDartMode(bool p0);

    /**
     * @note[short] Android
     */
    void setFlipGravity(bool p0);

    /**
     * @note[short] Android
     */
    void setFlyMode(bool p0);

    /**
     * @note[short] Android
     */
    void setGhostType(int p0);

    /**
     * @note[short] Android
     */
    void setIsScaled(bool p0);

    /**
     * @note[short] Android
     */
    void setPlayerPos(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    void setPlayerYVel(float p0);

    /**
     * @note[short] Android
     */
    void setRobotMode(bool p0);

    /**
     * @note[short] Android
     */
    void setRollMode(bool p0);

    /**
     * @note[short] Android
     */
    void setTimeMod(float p0);

    /**
     * @note[short] Android
     */
    virtual bool init();
};
