#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SetupPulsePopup {
public:
    static constexpr auto CLASS_NAME = "SetupPulsePopup";

    /**
     * @note[short] Android
     */
    static SetupPulsePopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Android
     */
    TodoReturn closeColorSelect(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getColorValue();

    /**
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Android
     */
    void onCopy(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onGroupMainOnly(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onGroupSecondaryOnly(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPaste(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSelectPulseMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSelectSpecialColor(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSelectSpecialTargetID(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSelectTargetMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSpawnedByTrigger(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onTouchTriggered(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onUpdateCopyColor(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onUpdateCustomColor(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn selectColor(cocos2d::ccColor3B p0);

    /**
     * @note[short] Android
     */
    TodoReturn sliderChanged(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateColorValue();

    /**
     * @note[short] Android
     */
    TodoReturn updateCopyColor();

    /**
     * @note[short] Android
     */
    TodoReturn updateCopyColorTextInputLabel();

    /**
     * @note[short] Android
     */
    TodoReturn updateEditorLabel();

    /**
     * @note[short] Android
     */
    TodoReturn updateFadeInLabel(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateFadeInTime();

    /**
     * @note[short] Android
     */
    TodoReturn updateFadeOutLabel(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateFadeOutTime();

    /**
     * @note[short] Android
     */
    TodoReturn updateGroupMainOnly();

    /**
     * @note[short] Android
     */
    TodoReturn updateGroupSecondaryOnly();

    /**
     * @note[short] Android
     */
    TodoReturn updateHoldLabel(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateHoldTime();

    /**
     * @note[short] Android
     */
    TodoReturn updateHSVValue();

    /**
     * @note[short] Android
     */
    TodoReturn updatePulseMode();

    /**
     * @note[short] Android
     */
    TodoReturn updatePulseTargetType();

    /**
     * @note[short] Android
     */
    TodoReturn updateSpawnedByTrigger();

    /**
     * @note[short] Android
     */
    TodoReturn updateTargetID();

    /**
     * @note[short] Android
     */
    TodoReturn updateTextInputLabel();

    /**
     * @note[short] Android
     */
    TodoReturn updateTouchTriggered();

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
    virtual TodoReturn determineStartValues();

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
    virtual TodoReturn textInputShouldOffset(CCTextInputNode* p0, float p1);

    /**
     * @note[short] Android
     */
    virtual TodoReturn textInputReturn(CCTextInputNode* p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn colorValueChanged(cocos2d::ccColor3B p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn textInputOpened(CCTextInputNode* p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn colorSelectClosed(GJSpecialColorSelect* p0, int p1);
};
