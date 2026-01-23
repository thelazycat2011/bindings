#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class PulseEffectAction {
public:
    static constexpr auto CLASS_NAME = "PulseEffectAction";

    /**
     * @note[short] Android
     */
    static PulseEffectAction* create(float p0, float p1, float p2, PulseEffectType p3, int p4, cocos2d::ccColor3B p5, cocos2d::ccHSVValue p6, int p7, bool p8, bool p9);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn createFromString(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn getCopyColorIdx();

    /**
     * @note[short] Android
     */
    TodoReturn getDeltaTime();

    /**
     * @note[short] Android
     */
    TodoReturn getGroupMainOnly();

    /**
     * @note[short] Android
     */
    TodoReturn getGroupSecondaryOnly();

    /**
     * @note[short] Android
     */
    TodoReturn getHSVValue();

    /**
     * @note[short] Android
     */
    TodoReturn getSaveString();

    /**
     * @note[short] Android
     */
    TodoReturn getTargetColor();

    /**
     * @note[short] Android
     */
    TodoReturn getTargetID();

    /**
     * @note[short] Android
     */
    TodoReturn getType();

    /**
     * @note[short] Android
     */
    TodoReturn getValue();

    /**
     * @note[short] Android
     */
    bool init(float p0, float p1, float p2, PulseEffectType p3, int p4, cocos2d::ccColor3B p5, cocos2d::ccHSVValue p6, int p7, bool p8, bool p9);

    /**
     * @note[short] Android
     */
    bool isFinished();

    /**
     * @note[short] Android
     */
    void setDeltaTime(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn step(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn valueForDelta(float p0, float p1, float p2, float p3);
};
