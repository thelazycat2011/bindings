#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SupportLayer {
public:
    static constexpr auto CLASS_NAME = "SupportLayer";

    /**
     * @note[short] Android
     */
    static SupportLayer* create();

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4);

    /**
     * @note[short] Android
     */
    TodoReturn exitLayer();

    /**
     * @note[short] Android
     */
    void onCocos2d(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onEmail(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onFAQ(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onLowDetail(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onRequestAccess(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onRestore(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onRobTop(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn sendSupportMail();

    /**
     * @note[short] Android
     */
    virtual TodoReturn customSetup();

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

    /**
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
};
