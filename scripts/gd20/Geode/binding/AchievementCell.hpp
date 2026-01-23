#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class AchievementCell {
public:
    static constexpr auto CLASS_NAME = "AchievementCell";

    /**
     * @note[short] Android: Rebinded
     */
     AchievementCell(char const* p0, float p1, float p2);

    /**
     * @note[short] Android
     */
    TodoReturn loadFromDict(cocos2d::CCDictionary* p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateBGColor(int p0);

    /**
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Android
     */
    virtual void draw();
};
