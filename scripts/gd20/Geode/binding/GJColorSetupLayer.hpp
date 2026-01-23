#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJColorSetupLayer {
public:
    static constexpr auto CLASS_NAME = "GJColorSetupLayer";

    /**
     * @note[short] Android
     */
    static GJColorSetupLayer* create(LevelSettingsObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn colorSelectClosed(ColorSelectPopup* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getCloseOnSelect();

    /**
     * @note[short] Android
     */
    TodoReturn getDelegate();

    /**
     * @note[short] Android
     */
    bool init(LevelSettingsObject* p0);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onColor(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void setCloseOnSelect(bool p0);

    /**
     * @note[short] Android
     */
    void setDelegate(ColorSetupDelegate* p0);

    /**
     * @note[short] Android
     */
    TodoReturn showPage(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateSpriteColor(ColorChannelSprite* p0, cocos2d::CCLabelBMFont* p1, int p2);

    /**
     * @note[short] Android
     */
    TodoReturn updateSpriteColors();

    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();
};
