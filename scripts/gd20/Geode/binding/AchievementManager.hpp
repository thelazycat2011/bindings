#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class AchievementManager {
public:
    static constexpr auto CLASS_NAME = "AchievementManager";

    /**
     * @note[short] Android
     */
    static AchievementManager* sharedState();

    /**
     * @note[short] Android
     */
    TodoReturn areAchievementsEarned(cocos2d::CCArray* p0);

    /**
     * @note[short] Android
     */
    TodoReturn checkAchFromUnlock(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn dataLoaded(DS_Dictionary* p0);

    /**
     * @note[short] Android
     */
    TodoReturn encodeDataTo(DS_Dictionary* p0);

    /**
     * @note[short] Android
     */
    TodoReturn firstSetup();

    /**
     * @note[short] Android
     */
    TodoReturn getAchievementRewardDict();

    /**
     * @note[short] Android
     */
    TodoReturn getAchievementsWithID(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getAllAchievements();

    /**
     * @note[short] Android
     */
    TodoReturn getAllAchievementsSorted();

    /**
     * @note[short] Android
     */
    TodoReturn getDontNotifyAch();

    /**
     * @note[short] Android
     */
    TodoReturn getReportedAchievements();

    /**
     * @note[short] Android
     */
    bool isAchievementEarned(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn notifyAchievementWithID(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn percentageForCount(int p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn percentForAchievement(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn reportAchievementWithID(char const* p0, int p1, bool p2);

    /**
     * @note[short] Android
     */
    TodoReturn reportPlatformAchievementWithID(char const* p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn resetAchievement(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn resetAchievements();

    /**
     * @note[short] Android
     */
    void setDontNotifyAch(bool p0);

    /**
     * @note[short] Android
     */
    void setReportedAchievements(cocos2d::CCDictionary* p0);

    /**
     * @note[short] Android
     */
    TodoReturn setup();

    /**
     * @note[short] Android
     */
    virtual bool init();
};
