#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GameStatsManager {
public:
    static constexpr auto CLASS_NAME = "GameStatsManager";

    /**
     * @note[short] Android
     */
    static GameStatsManager* sharedState();

    /**
     * @note[short] Android
     */
    TodoReturn checkAchievement(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn checkCoinAchievement(GJGameLevel* p0);

    /**
     * @note[short] Android
     */
    TodoReturn checkCoinsForLevel(GJGameLevel* p0);

    /**
     * @note[short] Android
     */
    TodoReturn completedDemonLevel(GJGameLevel* p0);

    /**
     * @note[short] Android
     */
    TodoReturn completedLevel(GJGameLevel* p0);

    /**
     * @note[short] Android
     */
    TodoReturn completedMapPack(GJMapPack* p0);

    /**
     * @note[short] Android
     */
    TodoReturn completedStarLevel(GJGameLevel* p0);

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
    TodoReturn getCollectedCoinsForLevel(GJGameLevel* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getCompletedLevels();

    /**
     * @note[short] Android
     */
    TodoReturn getCompletedMapPacks();

    /**
     * @note[short] Android
     */
    TodoReturn getDemonLevelKey(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getLevelKey(GJGameLevel* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getLevelKey(int p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn getLiteAchievements();

    /**
     * @note[short] Android
     */
    TodoReturn getMapPackKey(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getPendingUserCoinsDict();

    /**
     * @note[short] Android
     */
    TodoReturn getRandomContainer();

    /**
     * @note[short] Android
     */
    TodoReturn getStarLevelKey(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getStat(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getUniqueItemKey(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getUserCoinsDict();

    /**
     * @note[short] Android
     */
    TodoReturn getValueDict();

    /**
     * @note[short] Android
     */
    TodoReturn hasCompletedDemonLevel(GJGameLevel* p0);

    /**
     * @note[short] Android
     */
    TodoReturn hasCompletedLevel(GJGameLevel* p0);

    /**
     * @note[short] Android
     */
    TodoReturn hasCompletedMapPack(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn hasCompletedOnlineLevel(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn hasCompletedStarLevel(GJGameLevel* p0);

    /**
     * @note[short] Android
     */
    TodoReturn hasPendingUserCoin(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn hasUniqueItem(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn hasUserCoin(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn incrementStat(char const* p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn incrementStat(char const* p0);

    /**
     * @note[short] Android: Rebinded
     */
    bool isLiteUnlockable(gd::string p0);

    /**
     * @note[short] Android: Rebinded
     */
    bool isUniqueItem(gd::string p0);

    /**
     * @note[short] Android: Rebinded
     */
    bool isUniqueValid(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn logCoins();

    /**
     * @note[short] Android
     */
    TodoReturn markLevelAsCompletedAndClaimed(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn recountUserCoins(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn resetPreSync();

    /**
     * @note[short] Android
     */
    TodoReturn resetUserCoins();

    /**
     * @note[short] Android
     */
    TodoReturn restorePostSync();

    /**
     * @note[short] Android
     */
    void setCompletedLevels(cocos2d::CCDictionary* p0);

    /**
     * @note[short] Android
     */
    void setPendingUserCoinsDict(cocos2d::CCDictionary* p0);

    /**
     * @note[short] Android
     */
    void setRandomContainer(cocos2d::CCDictionary* p0);

    /**
     * @note[short] Android
     */
    void setStarsForMapPack(int p0, int p1);

    /**
     * @note[short] Android
     */
    void setStat(char const* p0, int p1);

    /**
     * @note[short] Android
     */
    void setStatIfHigher(char const* p0, int p1);

    /**
     * @note[short] Android
     */
    void setUserCoinsDict(cocos2d::CCDictionary* p0);

    /**
     * @note[short] Android
     */
    void setValueDict(cocos2d::CCDictionary* p0);

    /**
     * @note[short] Android
     */
    TodoReturn starsForMapPack(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn storePendingUserCoin(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn storeUniqueItem(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn storeUserCoin(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn tempClear();

    /**
     * @note[short] Android
     */
    TodoReturn uncompleteLevel(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn verifyUserCoins();

    /**
     * @note[short] Android
     */
    virtual bool init();
};
