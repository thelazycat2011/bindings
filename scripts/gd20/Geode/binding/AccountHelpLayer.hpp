#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class AccountHelpLayer {
public:
    static constexpr auto CLASS_NAME = "AccountHelpLayer";

    /**
     * @note[short] Android
     */
    static AccountHelpLayer* create();

    /**
     * @note[short] Android
     */
    TodoReturn doUnlink();

    /**
     * @note[short] Android
     */
    TodoReturn exitLayer();

    /**
     * @note[short] Android
     */
    void onAccountManagement(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onReLogin(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onUnlink(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn updatePage();

    /**
     * @note[short] Android
     */
    TodoReturn verifyUnlink();

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
    virtual TodoReturn accountStatusChanged();

    /**
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
};
