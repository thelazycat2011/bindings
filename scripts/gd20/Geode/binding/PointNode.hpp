#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class PointNode {
public:
    static constexpr auto CLASS_NAME = "PointNode";

    /**
     * @note[short] Android
     */
    static PointNode* create(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    TodoReturn getPoint();

    /**
     * @note[short] Android
     */
    bool init(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    void setPoint(cocos2d::CCPoint p0);
};
