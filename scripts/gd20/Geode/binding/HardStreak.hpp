#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class HardStreak {
public:
    static constexpr auto CLASS_NAME = "HardStreak";

    /**
     * @note[short] Android
     */
    static HardStreak* create();

    /**
     * @note[short] Android
     */
    TodoReturn addPoint(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    TodoReturn clearBehindXPos(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn firstSetup();

    /**
     * @note[short] Android
     */
    TodoReturn getDisableDual();

    /**
     * @note[short] Android
     */
    TodoReturn getEndPoint();

    /**
     * @note[short] Android
     */
    TodoReturn getStrokeScale();

    /**
     * @note[short] Android
     */
    TodoReturn getStrokeScaleMod();

    /**
     * @note[short] Android
     */
    TodoReturn normalizeAngle(double p0);

    /**
     * @note[short] Android
     */
    TodoReturn quadCornerOffset(cocos2d::CCPoint p0, cocos2d::CCPoint p1, float p2);

    /**
     * @note[short] Android
     */
    TodoReturn reset();

    /**
     * @note[short] Android
     */
    TodoReturn resumeStroke();

    /**
     * @note[short] Android
     */
    void setDisableDual(bool p0);

    /**
     * @note[short] Android
     */
    void setEndPoint(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    void setStrokeScale(float p0);

    /**
     * @note[short] Android
     */
    void setStrokeScaleMod(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn stopStroke();

    /**
     * @note[short] Android
     */
    TodoReturn updateStroke(float p0);

    /**
     * @note[short] Android
     */
    virtual bool init();
};
