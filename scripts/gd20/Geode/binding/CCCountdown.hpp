#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCCountdown {
public:
    static constexpr auto CLASS_NAME = "CCCountdown";

    /**
     * @note[short] Android
     */
    static CCCountdown* create();

    /**
     * @note[short] Android
     */
    TodoReturn lapFinished();

    /**
     * @note[short] Android
     */
    TodoReturn startTimerWithSeconds(float p0, cocos2d::SEL_CallFunc p1, cocos2d::CCNode* p2);

    /**
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);
};
