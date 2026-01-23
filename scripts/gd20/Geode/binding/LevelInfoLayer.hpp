#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class LevelInfoLayer {
public:
    static constexpr auto CLASS_NAME = "LevelInfoLayer";

    /**
     * @note[short] Android
     */
    static LevelInfoLayer* create(GJGameLevel* p0);

    /**
     * @note[short] Android
     */
    TodoReturn confirmClone(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn confirmDelete(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn confirmOwnerDelete(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn downloadLevel();

    /**
     * @note[short] Android
     */
    TodoReturn incrementDislikes();

    /**
     * @note[short] Android
     */
    TodoReturn incrementLikes();

    /**
     * @note[short] Android
     */
    bool init(GJGameLevel* p0);

    /**
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onClone(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onFeatured(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onLevelInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onLike(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onOwnerDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPlayReplay(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onRate(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onRateStars(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onRateStarsMod(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn playStep2();

    /**
     * @note[short] Android
     */
    TodoReturn playStep3();

    /**
     * @note[short] Android
     */
    TodoReturn scene(GJGameLevel* p0);

    /**
     * @note[short] Android
     */
    TodoReturn setupLevelInfo();

    /**
     * @note[short] Android
     */
    TodoReturn setupProgressBars();

    /**
     * @note[short] Android
     */
    TodoReturn shouldDownloadLevel();

    /**
     * @note[short] Android
     */
    TodoReturn showSongWarning();

    /**
     * @note[short] Android
     */
    TodoReturn showUpdateAlert(UpdateResponse p0);

    /**
     * @note[short] Android
     */
    TodoReturn tryCloneLevel(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateLabelValues();

    /**
     * @note[short] Android
     */
    TodoReturn updateSideButtons();

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
    virtual TodoReturn numberInputClosed(NumberInputLayer* p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn levelDownloadFinished(GJGameLevel* p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn levelDownloadFailed(int p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn levelUpdateFinished(GJGameLevel* p0, UpdateResponse p1);

    /**
     * @note[short] Android
     */
    virtual TodoReturn levelUpdateFailed(int p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn levelDeleteFinished(int p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn levelDeleteFailed(int p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn rateLevelClosed();

    /**
     * @note[short] Android
     */
    virtual TodoReturn likedItem(LikeItemType p0, int p1, bool p2);

    /**
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
};
