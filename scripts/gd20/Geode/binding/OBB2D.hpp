#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class OBB2D {
public:
    static constexpr auto CLASS_NAME = "OBB2D";

    /**
     * @note[short] Android
     */
    static OBB2D* create(cocos2d::CCPoint p0, float p1, float p2, float p3);

    /**
     * @note[short] Android
     */
    TodoReturn calculateWithCenter(cocos2d::CCPoint p0, float p1, float p2, float p3);

    /**
     * @note[short] Android
     */
    TodoReturn computeAxes();

    /**
     * @note[short] Android
     */
    TodoReturn getBoundingRect();

    /**
     * @note[short] Android
     */
    bool init(cocos2d::CCPoint p0, float p1, float p2, float p3);

    /**
     * @note[short] Android
     */
    TodoReturn orderCorners();

    /**
     * @note[short] Android
     */
    TodoReturn overlaps(OBB2D* p0);

    /**
     * @note[short] Android
     */
    TodoReturn overlaps1Way(OBB2D* p0);
};
