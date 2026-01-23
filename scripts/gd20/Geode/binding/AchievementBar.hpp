#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class AchievementBar {
public:
    static constexpr auto CLASS_NAME = "AchievementBar";

    /**
     * @note[short] Android
     */
    static AchievementBar* create(char const* p0, char const* p1, char const* p2);

    /**
     * @note[short] Android
     */
    TodoReturn getTargetScene();

    /**
     * @note[short] Android
     */
    bool init(char const* p0, char const* p1, char const* p2);

    /**
     * @note[short] Android
     */
    void setTargetScene(cocos2d::CCNode* p0);

    /**
     * @note[short] Android
     */
    TodoReturn show();
};
