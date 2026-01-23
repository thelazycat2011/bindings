#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCContentLayer {
public:
    static constexpr auto CLASS_NAME = "CCContentLayer";

    /**
     * @note[short] Android
     */
    static CCContentLayer* create(cocos2d::ccColor4B const& p0, float p1, float p2);

    /**
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& p0);
};
