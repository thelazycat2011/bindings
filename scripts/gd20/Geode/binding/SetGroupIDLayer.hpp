#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SetGroupIDLayer {
public:
    static constexpr auto CLASS_NAME = "SetGroupIDLayer";

    /**
     * @note[short] Android
     */
    static SetGroupIDLayer* create(GameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Android
     */
    TodoReturn addGroupID(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn callRemoveFromGroup(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn determineStartValues();

    /**
     * @note[short] Android
     */
    TodoReturn getNextFreeGroupID();

    /**
     * @note[short] Android
     */
    bool init(GameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Android
     */
    void onAddGroup(cocos2d::CCObject* sender);

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
    void onDontFade(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onEditorLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onEditorLayer2(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onGroupID(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onNextGroupID1(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPaste(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onRemoveFromGroup(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSmoothEase(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleGroupParent(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onZLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onZOrder(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn removeGroupID(int p0);

    /**
     * @note[short] Android
     */
    void setNextFreeGroupID(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateEditorLabel();

    /**
     * @note[short] Android
     */
    TodoReturn updateEditorLabel2();

    /**
     * @note[short] Android
     */
    TodoReturn updateEditorLayerID();

    /**
     * @note[short] Android
     */
    TodoReturn updateEditorLayerID2();

    /**
     * @note[short] Android
     */
    TodoReturn updateGroupIDButtons();

    /**
     * @note[short] Android
     */
    TodoReturn updateGroupIDLabel();

    /**
     * @note[short] Android
     */
    TodoReturn updateZLayerButtons();

    /**
     * @note[short] Android
     */
    TodoReturn updateZOrder();

    /**
     * @note[short] Android
     */
    TodoReturn updateZOrderLabel();

    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Android
     */
    virtual TodoReturn textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);
};
