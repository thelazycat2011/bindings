#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SpawnTriggerAction {
public:
    static constexpr auto CLASS_NAME = "SpawnTriggerAction";

    /**
     * @note[short] Android
     */
    static SpawnTriggerAction* create(float p0, int p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn createFromString(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn getDelayTime();

    /**
     * @note[short] Android
     */
    TodoReturn getDeltaTime();

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
    bool init(float p0, int p1);

    /**
     * @note[short] Android
     */
    bool isFinished();

    /**
     * @note[short] Android
     */
    void setDelayTime(float p0);

    /**
     * @note[short] Android
     */
    void setDeltaTime(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn step(float p0);
};
