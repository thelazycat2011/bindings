#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class FRequestProfilePage {
public:
    static constexpr auto CLASS_NAME = "FRequestProfilePage";

    /**
     * @note[short] Android
     */
    static FRequestProfilePage* create(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn deleteSelected();

    /**
     * @note[short] Android
     */
    bool init(bool p0);

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
    void onDeleteSelected(cocos2d::CCObject* sender);

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
    void onSentRequests(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleAllObjects(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn setupCommentsBrowser(cocos2d::CCArray* p0);

    /**
     * @note[short] Android
     */
    TodoReturn untoggleAll();

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
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

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

    /**
     * @note[short] Android
     */
    virtual TodoReturn loadFRequestsFinished(cocos2d::CCArray* p0, char const* p1);

    /**
     * @note[short] Android
     */
    virtual TodoReturn loadFRequestsFailed(char const* p0, GJErrorCode p1);

    /**
     * @note[short] Android: Rebinded
     */
    virtual TodoReturn setupPageInfo(gd::string p0, char const* p1);

    /**
     * @note[short] Android
     */
    virtual TodoReturn forceReloadRequests(bool p0);
};
