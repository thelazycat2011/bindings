#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class StatsLayer {
public:
    static constexpr auto CLASS_NAME = "StatsLayer";

    /**
     * @note[short] Android
     */
    static StatsLayer* create();

    /**
     * @note[short] Android
     */
    virtual TodoReturn customSetup();
};
