#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class AchievementNotifier {
public:
    static constexpr auto CLASS_NAME = "AchievementNotifier";

    /**
     * @note[short] Android
     */
    static AchievementNotifier* sharedState();

    /**
     * @note[short] Android
     */
    TodoReturn achievementDisplayFinished();

    /**
     * @note[short] Android
     */
    TodoReturn notifyAchievement(char const* p0, char const* p1, char const* p2);

    /**
     * @note[short] Android
     */
    TodoReturn showNextAchievement();

    /**
     * @note[short] Android
     */
    void willSwitchToScene(cocos2d::CCScene* p0);

    /**
     * @note[short] Android
     */
    virtual bool init();
};
