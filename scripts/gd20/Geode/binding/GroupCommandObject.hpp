#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GroupCommandObject {
public:
    static constexpr auto CLASS_NAME = "GroupCommandObject";

    /**
     * @note[short] Android
     */
    static GroupCommandObject* create();

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn createFromString(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn easeToText(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getDeltaTime();

    /**
     * @note[short] Android
     */
    TodoReturn getDeltaValue();

    /**
     * @note[short] Android
     */
    TodoReturn getDuration();

    /**
     * @note[short] Android
     */
    TodoReturn getEasedAction(cocos2d::CCActionInterval* p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn getEasing();

    /**
     * @note[short] Android
     */
    TodoReturn getIsFinished();

    /**
     * @note[short] Android
     */
    TodoReturn getLastRound();

    /**
     * @note[short] Android
     */
    TodoReturn getLockX();

    /**
     * @note[short] Android
     */
    TodoReturn getLockY();

    /**
     * @note[short] Android
     */
    TodoReturn getSaveString();

    /**
     * @note[short] Android
     */
    TodoReturn getTarget();

    /**
     * @note[short] Android
     */
    TodoReturn getTargetGroupID();

    /**
     * @note[short] Android
     */
    TodoReturn getTotalValue();

    /**
     * @note[short] Android
     */
    TodoReturn getValue();

    /**
     * @note[short] Android
     */
    bool init();

    /**
     * @note[short] Android
     */
    TodoReturn resetDelta();

    /**
     * @note[short] Android
     */
    TodoReturn runMoveCommand(cocos2d::CCPoint p0, float p1, int p2, bool p3, bool p4);

    /**
     * @note[short] Android
     */
    void setDeltaTime(float p0);

    /**
     * @note[short] Android
     */
    void setDeltaValue(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    void setDuration(float p0);

    /**
     * @note[short] Android
     */
    void setEasing(int p0);

    /**
     * @note[short] Android
     */
    void setIsFinished(bool p0);

    /**
     * @note[short] Android
     */
    void setLastRound(bool p0);

    /**
     * @note[short] Android
     */
    void setLockX(bool p0);

    /**
     * @note[short] Android
     */
    void setLockY(bool p0);

    /**
     * @note[short] Android
     */
    void setTarget(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    void setTargetGroupID(int p0);

    /**
     * @note[short] Android
     */
    void setTotalValue(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    void setValue(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    TodoReturn step(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateTweenAction(float p0, char const* p1);
};
