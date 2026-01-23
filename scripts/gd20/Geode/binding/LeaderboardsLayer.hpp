#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class LeaderboardsLayer {
public:
    static constexpr auto CLASS_NAME = "LeaderboardsLayer";

    /**
     * @note[short] Android
     */
    static LeaderboardsLayer* create(LeaderboardState p0);

    /**
     * @note[short] Android
     */
    bool init(LeaderboardState p0);

    /**
     * @note[short] Android
     */
    bool isCorrect(char const* p0);

    /**
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onCreators(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onGlobal(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onTop(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onWeek(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn refreshTabs();

    /**
     * @note[short] Android
     */
    TodoReturn scene(LeaderboardState p0);

    /**
     * @note[short] Android
     */
    TodoReturn selectLeaderboard(LeaderboardState p0);

    /**
     * @note[short] Android
     */
    TodoReturn setupLevelBrowser(cocos2d::CCArray* p0);

    /**
     * @note[short] Android
     */
    TodoReturn setupTabs();

    /**
     * @note[short] Android
     */
    TodoReturn toggleTabButtons();

    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Android
     */
    virtual TodoReturn updateUserScoreFinished();

    /**
     * @note[short] Android
     */
    virtual TodoReturn updateUserScoreFailed();

    /**
     * @note[short] Android
     */
    virtual TodoReturn loadLeaderboardFinished(cocos2d::CCArray* p0, char const* p1);

    /**
     * @note[short] Android
     */
    virtual TodoReturn loadLeaderboardFailed(char const* p0);
};
