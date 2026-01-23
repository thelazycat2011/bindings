#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class OpacityEffectAction {
public:
    static constexpr auto CLASS_NAME = "OpacityEffectAction";

    /**
     * @note[short] Android
     */
    static OpacityEffectAction* create(float p0, float p1, float p2, int p3);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn createFromString(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn getDeltaTime();

    /**
     * @note[short] Android
     */
    TodoReturn getOpacity();

    /**
     * @note[short] Android
     */
    TodoReturn getSaveString();

    /**
     * @note[short] Android
     */
    TodoReturn getTargetID();

    /**
     * @note[short] Android
     */
    bool init(float p0, float p1, float p2, int p3);

    /**
     * @note[short] Android
     */
    void setDeltaTime(float p0);

    /**
     * @note[short] Android
     */
    void setTargetID(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn step(float p0);
};
