#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class UploadPopup {
public:
    static constexpr auto CLASS_NAME = "UploadPopup";

    /**
     * @note[short] Android
     */
    static UploadPopup* create(GJGameLevel* p0);

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
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onReturnToLevel(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Android
     */
    virtual TodoReturn show();

    /**
     * @note[short] Android
     */
    virtual TodoReturn levelUploadFinished(GJGameLevel* p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn levelUploadFailed(GJGameLevel* p0);
};
