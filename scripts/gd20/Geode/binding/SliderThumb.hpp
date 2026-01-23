#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SliderThumb {
public:
    static constexpr auto CLASS_NAME = "SliderThumb";

    /**
     * @note[short] Android
     */
    static SliderThumb* create(cocos2d::CCNode* p0, cocos2d::SEL_MenuHandler p1, char const* p2, char const* p3);

    /**
     * @note[short] Android
     */
    TodoReturn getValue();

    /**
     * @note[short] Android
     */
    bool init(cocos2d::CCNode* p0, cocos2d::SEL_MenuHandler p1, char const* p2, char const* p3);

    /**
     * @note[short] Android
     */
    void setValue(float p0);
};
