#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJMessagePopup {
public:
    static constexpr auto CLASS_NAME = "GJMessagePopup";

    /**
     * @note[short] Android
     */
    static GJMessagePopup* create(GJUserMessage* p0);

    /**
     * @note[short] Android
     */
    TodoReturn blockUser();

    /**
     * @note[short] Android
     */
    bool init(GJUserMessage* p0);

    /**
     * @note[short] Android
     */
    TodoReturn loadFromGJMessage(GJUserMessage* p0);

    /**
     * @note[short] Android
     */
    void onBlock(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onRemove(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onReply(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Android
     */
    virtual TodoReturn downloadMessageFinished(GJUserMessage* p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn downloadMessageFailed(int p0);

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
