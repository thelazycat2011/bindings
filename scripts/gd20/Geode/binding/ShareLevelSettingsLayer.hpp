#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ShareLevelSettingsLayer {
public:
    static constexpr auto CLASS_NAME = "ShareLevelSettingsLayer";

    /**
     * @note[short] Android
     */
    static ShareLevelSettingsLayer* create(GJGameLevel* p0);

    /**
     * @note[short] Android
     */
    bool init(GJGameLevel* p0);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onCopyable(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onEditPassword(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPassword(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn updateSettingsState();

    /**
     * @note[short] Android
     */
    virtual TodoReturn numberInputClosed(NumberInputLayer* p0);

    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();
};
