#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ColorSelectPopup {
public:
    static constexpr auto CLASS_NAME = "ColorSelectPopup";

    /**
     * @note[short] Android
     */
    static ColorSelectPopup* create(ColorAction* p0);

    /**
     * @note[short] Android
     */
    static ColorSelectPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1, ColorAction* p2);

    /**
     * @note[short] Android
     */
    static ColorSelectPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Android
     */
    TodoReturn closeColorSelect(cocos2d::CCObject* p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4);

    /**
     * @note[short] Android
     */
    TodoReturn getAction();

    /**
     * @note[short] Android
     */
    TodoReturn getColorValue();

    /**
     * @note[short] Android
     */
    TodoReturn getCustom();

    /**
     * @note[short] Android
     */
    TodoReturn getCustom2();

    /**
     * @note[short] Android
     */
    TodoReturn getDelegate();

    /**
     * @note[short] Android
     */
    TodoReturn getDuration();

    /**
     * @note[short] Android
     */
    TodoReturn getTargetOpacity();

    /**
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1, ColorAction* p2);

    /**
     * @note[short] Android
     */
    void onCopy(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onCopyOpacity(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPaste(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPlayerColor1(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPlayerColor2(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSelectSpecialColor(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSpawnedByTrigger(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onTintGround(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleHSVMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleTintMode(cocos2d::CCObject* sender);

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
    void setDelegate(ColorSelectDelegate* p0);

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
    TodoReturn updateCustomColorIdx();

    /**
     * @note[short] Android
     */
    TodoReturn updateDuration();

    /**
     * @note[short] Android
     */
    TodoReturn updateDurLabel();

    /**
     * @note[short] Android
     */
    TodoReturn updateEditorLabel();

    /**
     * @note[short] Android
     */
    TodoReturn updateHSVMode();

    /**
     * @note[short] Android
     */
    TodoReturn updateHSVValue();

    /**
     * @note[short] Android
     */
    TodoReturn updateOpacity();

    /**
     * @note[short] Android
     */
    TodoReturn updateOpacityLabel();

    /**
     * @note[short] Android
     */
    TodoReturn updateSpawnedByTrigger();

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
    virtual TodoReturn colorSelectClosed(GJSpecialColorSelect* p0, int p1);
};
