#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class StatsObject {
public:
    static constexpr auto CLASS_NAME = "StatsObject";

    /**
     * @note[short] Android
     */
    static StatsObject* create(char const* p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn getKey();

    /**
     * @note[short] Android
     */
    TodoReturn getValue();

    /**
     * @note[short] Android
     */
    bool init(char const* p0, int p1);
};
