#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CustomizeObjectLayer {
public:
    static constexpr auto CLASS_NAME = "CustomizeObjectLayer";

    /**
     * @note[short] Android
     */
    static CustomizeObjectLayer* create(GameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Android
     */
    TodoReturn colorSelectClosed(ColorSelectPopup* p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4);

    /**
     * @note[short] Android
     */
    TodoReturn determineStartValues();

    /**
     * @note[short] Android
     */
    TodoReturn getActiveMode(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn getButtonByTag(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getHSV();

    /**
     * @note[short] Android
     */
    TodoReturn highlightSelected(ButtonSprite* p0);

    /**
     * @note[short] Android
     */
    bool init(GameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Android
     */
    void onBreakApart(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onBrowse(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onClear(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onCopy(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onEditColor(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onHSV(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onNextColorChannel(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPaste(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSelectColor(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSelectMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onUpdateCustomColor(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn toggleVisible();

    /**
     * @note[short] Android
     */
    TodoReturn updateChannelLabel(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateColorSprite();

    /**
     * @note[short] Android
     */
    TodoReturn updateCurrentSelection();

    /**
     * @note[short] Android
     */
    TodoReturn updateCustomColorLabels();

    /**
     * @note[short] Android
     */
    TodoReturn updateHSVButtons();

    /**
     * @note[short] Android
     */
    TodoReturn updateSelected(int p0);

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
    virtual TodoReturn hsvPopupClosed(HSVWidgetPopup* p0, cocos2d::ccHSVValue p1);

    /**
     * @note[short] Android
     */
    virtual TodoReturn colorSetupClosed(int p0);
};
