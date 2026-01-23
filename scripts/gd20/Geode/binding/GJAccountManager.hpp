#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJAccountManager {
public:
    static constexpr auto CLASS_NAME = "GJAccountManager";

    /**
     * @note[short] Android
     */
    static GJAccountManager* sharedState();

    /**
     * @note[short] Android
     */
    TodoReturn addDLToActive(char const* p0, cocos2d::CCObject* p1);

    /**
     * @note[short] Android
     */
    TodoReturn addDLToActive(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn backupAccount();

    /**
     * @note[short] Android
     */
    TodoReturn dataLoaded(DS_Dictionary* p0);

    /**
     * @note[short] Android
     */
    TodoReturn encodeDataTo(DS_Dictionary* p0);

    /**
     * @note[short] Android
     */
    TodoReturn firstSetup();

    /**
     * @note[short] Android
     */
    TodoReturn getAccountDelegate();

    /**
     * @note[short] Android
     */
    TodoReturn getAccountID();

    /**
     * @note[short] Android
     */
    TodoReturn getAccountPassword();

    /**
     * @note[short] Android
     */
    TodoReturn getAccountUserName();

    /**
     * @note[short] Android
     */
    TodoReturn getBackupDelegate();

    /**
     * @note[short] Android
     */
    TodoReturn getDLObject(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getGJP();

    /**
     * @note[short] Android
     */
    TodoReturn getLoginDelegate();

    /**
     * @note[short] Android
     */
    TodoReturn getRegisterDelegate();

    /**
     * @note[short] Android
     */
    TodoReturn getSettingsDelegate();

    /**
     * @note[short] Android
     */
    TodoReturn getSyncDelegate();

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn handleIt(bool p0, gd::string p1, gd::string p2, GJHttpType p3);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn handleItDelayed(bool p0, gd::string p1, gd::string p2, GJHttpType p3);

    /**
     * @note[short] Android
     */
    TodoReturn handleItND(cocos2d::CCNode* p0, void* p1);

    /**
     * @note[short] Android
     */
    bool isDLActive(char const* p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn linkToAccount(gd::string p0, gd::string p1, int p2, int p3);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn loginAccount(gd::string p0, gd::string p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn onBackupAccountCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn onLoginAccountCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn onRegisterAccountCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn onSyncAccountCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn onUpdateAccountSettingsCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn ProcessHttpRequest(gd::string p0, gd::string p1, gd::string p2, GJHttpType p3);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn registerAccount(gd::string p0, gd::string p1, gd::string p2);

    /**
     * @note[short] Android
     */
    TodoReturn removeDLFromActive(char const* p0);

    /**
     * @note[short] Android
     */
    void setAccountDelegate(GJAccountDelegate* p0);

    /**
     * @note[short] Android
     */
    void setBackupDelegate(GJAccountBackupDelegate* p0);

    /**
     * @note[short] Android
     */
    void setLoginDelegate(GJAccountLoginDelegate* p0);

    /**
     * @note[short] Android
     */
    void setRegisterDelegate(GJAccountRegisterDelegate* p0);

    /**
     * @note[short] Android
     */
    void setSettingsDelegate(GJAccountSettingsDelegate* p0);

    /**
     * @note[short] Android
     */
    void setSyncDelegate(GJAccountSyncDelegate* p0);

    /**
     * @note[short] Android
     */
    TodoReturn syncAccount();

    /**
     * @note[short] Android
     */
    TodoReturn unlinkFromAccount();

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn updateAccountSettings(int p0, int p1, gd::string p2);

    /**
     * @note[short] Android
     */
    virtual bool init();
};
