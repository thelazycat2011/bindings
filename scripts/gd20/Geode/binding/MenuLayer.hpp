#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class MenuLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "MenuLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MenuLayer, cocos2d::CCLayer)

    /**
     * @note[short] Android
     */
    TodoReturn endGame();

    /**
     * @note[short] Android
     */
    TodoReturn node();

    /**
     * @note[short] Android
     */
    void onAchievements(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onCreator(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onEveryplay(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onFacebook(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onFullVersion(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onGameCenter(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onGarage(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onGooglePlayGames(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x11e230
     * @note[short] Android
     */
    void onMoreGames(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onMyProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onNewgrounds(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn onOptionsInstant();

    /**
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onQuit(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onRobTop(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onStats(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onTrailer(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onTwitter(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onYouTube(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn openOptions(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn scene(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn showGCQuestion();

    /**
     * @note[short] Android
     */
    TodoReturn showPirateMessage();

    /**
     * @note[short] Android
     */
    TodoReturn syncPlatformAchievements(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn tryShowAd(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateUserProfileButton();

    /**
     * @note[short] Android
     */
    TodoReturn willClose();

    /**
     * @note[short] Windows: 0x11cf60
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
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn googlePlaySignedIn();

    /**
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
};
