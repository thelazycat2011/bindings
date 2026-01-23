#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class InfoLayer {
public:
    static constexpr auto CLASS_NAME = "InfoLayer";

    /**
     * @note[short] Android
     */
    static InfoLayer* create(GJGameLevel* p0);

    /**
     * @note[short] Android
     */
    TodoReturn commentUploadFailed(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn confirmReport(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getSpriteButton(char const* p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2, float p3);

    /**
     * @note[short] Android
     */
    bool init(GJGameLevel* p0);

    /**
     * @note[short] Android
     */
    bool isCorrect(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn loadPage(int p0);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onComment(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onGetComments(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onLevelInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onMore(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onOriginal(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn setupCommentsBrowser(cocos2d::CCArray* p0);

    /**
     * @note[short] Android
     */
    TodoReturn setupLevelInfo();

    /**
     * @note[short] Android
     */
    TodoReturn toggleCommentMode(cocos2d::CCNode* p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateCommentModeButtons();

    /**
     * @note[short] Android
     */
    TodoReturn updateLevelsLabel();

    /**
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Android
     */
    virtual TodoReturn show();

    /**
     * @note[short] Android
     */
    virtual TodoReturn loadCommentsFinished(cocos2d::CCArray* p0, char const* p1);

    /**
     * @note[short] Android
     */
    virtual TodoReturn loadCommentsFailed(char const* p0);

    /**
     * @note[short] Android: Rebinded
     */
    virtual TodoReturn setupPageInfo(gd::string p0, char const* p1);

    /**
     * @note[short] Android
     */
    virtual TodoReturn commentUploadFinished(int p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn updateUserScoreFinished();

    /**
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
};
