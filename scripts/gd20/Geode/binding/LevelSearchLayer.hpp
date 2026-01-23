#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class LevelSearchLayer {
public:
    static constexpr auto CLASS_NAME = "LevelSearchLayer";

    /**
     * @note[short] Android
     */
    static LevelSearchLayer* create();

    /**
     * @note[short] Android
     */
    TodoReturn checkDiff(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn checkTime(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn clearFilters();

    /**
     * @note[short] Android
     */
    TodoReturn confirmClearFilters(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getDiffKey(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getLevelLenKey();

    /**
     * @note[short] Android
     */
    TodoReturn getSearchDiffKey();

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn getSearchObject(SearchType p0, gd::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn getTimeKey(int p0);

    /**
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onFollowed(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onFriends(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onLatestStars(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onMagic(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onMoreOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onMostDownloaded(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onMostLikes(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onMostRecent(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSearchUser(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onStarAward(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onTrending(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn scene();

    /**
     * @note[short] Android
     */
    TodoReturn toggleDifficulty(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn toggleDifficultyNum(int p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn toggleStar(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn toggleTime(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn toggleTimeNum(int p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn updateSearchLabel(char const* p0);

    /**
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Android
     */
    virtual TodoReturn textInputOpened(CCTextInputNode* p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
};
