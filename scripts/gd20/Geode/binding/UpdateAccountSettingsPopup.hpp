#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class UpdateAccountSettingsPopup {
public:
    static constexpr auto CLASS_NAME = "UpdateAccountSettingsPopup";

    /**
     * @note[short] Android: Rebinded
     */
    static UpdateAccountSettingsPopup* create(GJAccountSettingsLayer* p0, int p1, int p2, gd::string p3);

    /**
     * @note[short] Android: Rebinded
     */
    bool init(GJAccountSettingsLayer* p0, int p1, int p2, gd::string p3);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Android
     */
    virtual TodoReturn updateSettingsFinished();

    /**
     * @note[short] Android
     */
    virtual TodoReturn updateSettingsFailed();
};
