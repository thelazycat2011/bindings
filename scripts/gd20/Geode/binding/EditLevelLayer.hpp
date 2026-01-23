#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class EditLevelLayer {
public:
    static constexpr auto CLASS_NAME = "EditLevelLayer";

    /**
     * @note[short] Android
     */
    static EditLevelLayer* create(GJGameLevel* p0);

    /**
     * @note[short] Android
     */
    TodoReturn closeTextInputs();

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
    TodoReturn confirmMoveToTop(cocos2d::CCObject* p0);

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
    TodoReturn onClone();

    /**
     * @note[short] Android
     */
    TodoReturn onDelete();

    /**
     * @note[short] Android
     */
    void onEdit(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onHelp(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onLevelInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn onMoveToTop();

    /**
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onShare(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onTest(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onUpdateDescription(cocos2d::CCObject* sender);

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
    TodoReturn updateDescText(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn verifyLevelName();

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
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

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
    virtual TodoReturn uploadActionFinished(int p0, int p1);

    /**
     * @note[short] Android
     */
    virtual TodoReturn uploadActionFailed(int p0, int p1);

    /**
     * @note[short] Android
     */
    virtual TodoReturn onClosePopup(UploadActionPopup* p0);
};
