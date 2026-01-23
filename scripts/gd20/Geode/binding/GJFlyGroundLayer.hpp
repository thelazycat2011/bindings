#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJFlyGroundLayer {
public:
    static constexpr auto CLASS_NAME = "GJFlyGroundLayer";

    /**
     * @note[short] Android
     */
    static GJFlyGroundLayer* create();

    /**
     * @note[short] Android
     */
    virtual bool init();
};
