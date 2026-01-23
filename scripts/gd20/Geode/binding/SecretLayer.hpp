#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SecretLayer {
public:
    static constexpr auto CLASS_NAME = "SecretLayer";

    /**
     * @note[short] Android
     */
    static SecretLayer* create();

    /**
     * @note[short] Android
     */
    TodoReturn getBasicMessage();

    /**
     * @note[short] Android
     */
    TodoReturn getMessage();

    /**
     * @note[short] Android
     */
    TodoReturn getThreadMessage();

    /**
     * @note[short] Android
     */
    TodoReturn nodeWithTag(int p0);

    /**
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSubmit(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn playCoinEffect();

    /**
     * @note[short] Android
     */
    TodoReturn scene();

    /**
     * @note[short] Android
     */
    TodoReturn selectAThread();

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn updateMessageLabel(gd::string p0);

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
