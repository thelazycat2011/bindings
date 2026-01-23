#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SimpleObject {
public:
    static constexpr auto CLASS_NAME = "SimpleObject";

    /**
     * @note[short] Android
     */
    static SimpleObject* create();

    /**
     * @note[short] Android
     */
    TodoReturn getColor();

    /**
     * @note[short] Android
     */
    bool init();

    /**
     * @note[short] Android
     */
    void setColor(cocos2d::ccColor3B p0);
};
