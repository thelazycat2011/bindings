#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class AccountRegisterLayer {
public:
    static constexpr auto CLASS_NAME = "AccountRegisterLayer";

    /**
     * @note[short] Android
     */
    static AccountRegisterLayer* create();

    /**
     * @note[short] Android
     */
    TodoReturn createTextBackground(cocos2d::CCPoint p0, cocos2d::CCSize p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn createTextInput(cocos2d::CCPoint p0, cocos2d::CCSize p1, gd::string p2, int p3);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn createTextLabel(cocos2d::CCPoint p0, gd::string p1, cocos2d::CCSize p2);

    /**
     * @note[short] Android
     */
    TodoReturn disableNodes();

    /**
     * @note[short] Android
     */
    TodoReturn hideLoadingUI();

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSubmit(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn resetLabel(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn resetLabels();

    /**
     * @note[short] Android
     */
    TodoReturn showLoadingUI();

    /**
     * @note[short] Android
     */
    TodoReturn toggleUI(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateLabel(AccountError p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn validEmail(gd::string p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn validPassword(gd::string p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn validUser(gd::string p0);

    /**
     * @note[short] Android
     */
    virtual bool init();

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
    virtual TodoReturn textInputShouldOffset(CCTextInputNode* p0, float p1);

    /**
     * @note[short] Android
     */
    virtual TodoReturn textInputReturn(CCTextInputNode* p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn allowTextInput(CCTextInputNode* p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn registerAccountFinished();

    /**
     * @note[short] Android
     */
    virtual TodoReturn registerAccountFailed(AccountError p0);
};
