#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJBaseGameLayer {
public:
    static constexpr auto CLASS_NAME = "GJBaseGameLayer";

    /**
     * @note[short] Android
     */
    TodoReturn calculateColorValues(EffectGameObject* p0, EffectGameObject* p1, int p2, float p3, ColorActionSprite* p4, GJEffectManager* p5);

    /**
     * @note[short] Android
     */
    TodoReturn calculateOpacityValues(EffectGameObject* p0, EffectGameObject* p1, float p2, GJEffectManager* p3);

    /**
     * @note[short] Android
     */
    TodoReturn createTextLayers();

    /**
     * @note[short] Android
     */
    TodoReturn flipGravity(PlayerObject* p0, bool p1, bool p2);

    /**
     * @note[short] Android
     */
    TodoReturn generateToggleData(cocos2d::CCArray* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getBatchNode();

    /**
     * @note[short] Android
     */
    TodoReturn getBatchNodeAdd();

    /**
     * @note[short] Android
     */
    TodoReturn getBatchNodeAddBottom();

    /**
     * @note[short] Android
     */
    TodoReturn getBatchNodeAddBottom2();

    /**
     * @note[short] Android
     */
    TodoReturn getBatchNodeAddBottom2Glow();

    /**
     * @note[short] Android
     */
    TodoReturn getBatchNodeAddBottomGlow();

    /**
     * @note[short] Android
     */
    TodoReturn getBatchNodeAddGlow();

    /**
     * @note[short] Android
     */
    TodoReturn getBatchNodeAddMid();

    /**
     * @note[short] Android
     */
    TodoReturn getBatchNodeAddMidGlow();

    /**
     * @note[short] Android
     */
    TodoReturn getBatchNodeAddPlayer();

    /**
     * @note[short] Android
     */
    TodoReturn getBatchNodeAddText();

    /**
     * @note[short] Android
     */
    TodoReturn getBatchNodeAddTop();

    /**
     * @note[short] Android
     */
    TodoReturn getBatchNodeBottom();

    /**
     * @note[short] Android
     */
    TodoReturn getBatchNodeBottom2();

    /**
     * @note[short] Android
     */
    TodoReturn getBatchNodePlayer();

    /**
     * @note[short] Android
     */
    TodoReturn getBatchNodeText();

    /**
     * @note[short] Android
     */
    TodoReturn getCapacityString();

    /**
     * @note[short] Android
     */
    TodoReturn getEffectBatchNode();

    /**
     * @note[short] Android
     */
    TodoReturn getEffectBatchNodeAdd();

    /**
     * @note[short] Android
     */
    TodoReturn getGameLayer();

    /**
     * @note[short] Android
     */
    TodoReturn getLevelSettings();

    /**
     * @note[short] Android
     */
    TodoReturn getPlayer();

    /**
     * @note[short] Android
     */
    TodoReturn getPlayer2();

    /**
     * @note[short] Android
     */
    TodoReturn getToggleDataDirty();

    /**
     * @note[short] Android
     */
    bool isGroupDisabledForObject(GameObject* p0);

    /**
     * @note[short] Android
     */
    bool isGroupDisabledForObjectFull(GameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Android
     */
    TodoReturn parentForZLayer(int p0, bool p1, int p2);

    /**
     * @note[short] Android
     */
    TodoReturn processColorObject(EffectGameObject* p0, int p1, cocos2d::CCDictionary* p2, float p3, GJEffectManager* p4);

    /**
     * @note[short] Android
     */
    TodoReturn processOpacityObject(EffectGameObject* p0, cocos2d::CCDictionary* p1, float p2, GJEffectManager* p3);

    /**
     * @note[short] Android
     */
    void setToggleDataDirty(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn setupLayers();

    /**
     * @note[short] Android
     */
    TodoReturn timeForXPos(float p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn updateLayerCapacity(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateLegacyLayerCapacity(int p0, int p1, int p2, int p3);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual TodoReturn pure_virtual_00a5fb9c();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual TodoReturn pure_virtual_00a5fba0();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual TodoReturn pure_virtual_00a5fba4();
};
