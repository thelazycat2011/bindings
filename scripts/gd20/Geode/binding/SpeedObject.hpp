#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SpeedObject {
public:
    static constexpr auto CLASS_NAME = "SpeedObject";

    /**
     * @note[short] Android
     */
    static SpeedObject* create(int p0, float p1);

    /**
     * @note[short] Android
     */
    TodoReturn getSpeedMod();

    /**
     * @note[short] Android
     */
    TodoReturn getXPos();

    /**
     * @note[short] Android
     */
    bool init(int p0, float p1);

    /**
     * @note[short] Android
     */
    void setSource(GameObject* p0);
};
