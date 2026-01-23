#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class AccountLayer {
public:
    static constexpr auto CLASS_NAME = "AccountLayer";

    /**
     * @note[short] Android
     */
    static AccountLayer* create();

    /**
     * @note[short] Android
     */
    TodoReturn backupAccountFailed(BackupAccountError p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4);

    /**
     * @note[short] Android
     */
    TodoReturn doBackup();

    /**
     * @note[short] Android
     */
    TodoReturn doSync();

    /**
     * @note[short] Android
     */
    TodoReturn exitLayer();

    /**
     * @note[short] Android
     */
    TodoReturn hideLoadingUI();

    /**
     * @note[short] Android
     */
    void onBackup(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onHelp(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onLogin(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onMore(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onRegister(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSync(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn showLoadingUI();

    /**
     * @note[short] Android
     */
    TodoReturn syncAccountFailed(BackupAccountError p0);

    /**
     * @note[short] Android
     */
    TodoReturn toggleUI(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn updatePage();

    /**
     * @note[short] Android
     */
    virtual TodoReturn customSetup();

    /**
     * @note[short] Android
     */
    virtual TodoReturn layerHidden();

    /**
     * @note[short] Android
     */
    virtual TodoReturn backupAccountFinished();

    /**
     * @note[short] Android
     */
    virtual TodoReturn syncAccountFinished();

    /**
     * @note[short] Android
     */
    virtual TodoReturn accountStatusChanged();

    /**
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
};
