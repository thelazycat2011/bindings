#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ProfilePage {
public:
    static constexpr auto CLASS_NAME = "ProfilePage";

    /**
     * @note[short] Android
     */
    static ProfilePage* create(int p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn blockUser();

    /**
     * @note[short] Android
     */
    TodoReturn commentUploadFailed(int p0);

    /**
     * @note[short] Android
     */
    bool init(int p0, bool p1);

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
    TodoReturn loadPageFromUserInfo(GJUserScore* p0);

    /**
     * @note[short] Android
     */
    void onBlockUser(cocos2d::CCObject* sender);

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
    void onFollow(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onFriend(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onFriends(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onMessages(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onMyLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onRequests(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSendMessage(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onYouTube(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn setupComments();

    /**
     * @note[short] Android
     */
    TodoReturn setupCommentsBrowser(cocos2d::CCArray* p0);

    /**
     * @note[short] Android
     */
    TodoReturn showNoAccountError();

    /**
     * @note[short] Android
     */
    TodoReturn toggleMainPageVisibility(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateLevelsLabel();

    /**
     * @note[short] Android
     */
    TodoReturn updatePageArrows();

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
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

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
    virtual TodoReturn getUserInfoFinished(GJUserScore* p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn getUserInfoFailed(int p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn userInfoChanged(GJUserScore* p0);

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
    virtual TodoReturn commentDeleteFailed(int p0, int p1);

    /**
     * @note[short] Android
     */
    virtual TodoReturn onClosePopup(UploadActionPopup* p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn uploadActionFinished(int p0, int p1);

    /**
     * @note[short] Android
     */
    virtual TodoReturn uploadActionFailed(int p0, int p1);
};
