#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJMoveCommandLayer {
public:
    static constexpr auto CLASS_NAME = "GJMoveCommandLayer";

    /**
     * @note[short] Android
     */
    static GJMoveCommandLayer* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Android
     */
    TodoReturn determineStartValues();

    /**
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Android
     */
    TodoReturn keyBackClicked();

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onEasing(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onLockPlayerX(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onLockPlayerY(cocos2d::CCObject* sender);

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
    void onUpdateGroupID(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn posFromSliderValue(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn sliderChanged(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn sliderValueFromPos(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn sliderXChanged(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn sliderYChanged(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] Android
     */
    TodoReturn textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] Android
     */
    TodoReturn textInputReturn(CCTextInputNode* p0);

    /**
     * @note[short] Android
     */
    TodoReturn textInputShouldOffset(CCTextInputNode* p0, float p1);

    /**
     * @note[short] Android
     */
    TodoReturn updateDuration();

    /**
     * @note[short] Android
     */
    TodoReturn updateDurLabel(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateEasingLabel();

    /**
     * @note[short] Android
     */
    TodoReturn updateEditorLabel();

    /**
     * @note[short] Android
     */
    TodoReturn updateMoveCommandEasing();

    /**
     * @note[short] Android
     */
    TodoReturn updateMoveCommandPosX();

    /**
     * @note[short] Android
     */
    TodoReturn updateMoveCommandPosY();

    /**
     * @note[short] Android
     */
    TodoReturn updateSpawnedByTrigger();

    /**
     * @note[short] Android
     */
    TodoReturn updateTargetGroupID();

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
    TodoReturn updateValueXLabel();

    /**
     * @note[short] Android
     */
    TodoReturn updateValueYLabel();
};
