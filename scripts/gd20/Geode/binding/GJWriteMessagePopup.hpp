#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJWriteMessagePopup {
public:
    static constexpr auto CLASS_NAME = "GJWriteMessagePopup";

    /**
     * @note[short] Android
     */
    static GJWriteMessagePopup* create(int p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn closeMessagePopup(bool p0);

    /**
     * @note[short] Android
     */
    bool init(int p0, int p1);

    /**
     * @note[short] Android
     */
    void onClearBody(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSend(cocos2d::CCObject* sender);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn updateBody(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateCharCountLabel(int p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn updateSubject(gd::string p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn updateText(gd::string p0, int p1);

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
    virtual TodoReturn uploadMessageFinished(int p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn uploadMessageFailed(int p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn onClosePopup(UploadActionPopup* p0);

    /**
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Android
     */
    virtual TodoReturn textInputShouldOffset(CCTextInputNode* p0, float p1);

    /**
     * @note[short] Android
     */
    virtual TodoReturn textInputReturn(CCTextInputNode* p0);
};
