#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCMoveCNode {
public:
    static constexpr auto CLASS_NAME = "CCMoveCNode";

    /**
     * @note[short] Android
     */
    static CCMoveCNode* create();

    /**
     * @note[short] Android
     */
    bool init();
};
