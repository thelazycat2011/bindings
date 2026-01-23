#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJEffectManager {
public:
    static constexpr auto CLASS_NAME = "GJEffectManager";

    /**
     * @note[short] Android
     */
    static GJEffectManager* create();

    /**
     * @note[short] Android
     */
    TodoReturn activeColorForIndex(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn activeOpacityForIndex(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn addAllInheritedColorActions(cocos2d::CCArray* p0);

    /**
     * @note[short] Android
     */
    TodoReturn addGroupPulseEffect(PulseEffectAction* p0);

    /**
     * @note[short] Android
     */
    TodoReturn calculateBaseActiveColors();

    /**
     * @note[short] Android
     */
    TodoReturn calculateInheritedColor(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn calculateLightBGColor(cocos2d::ccColor3B p0);

    /**
     * @note[short] Android
     */
    TodoReturn colorExists(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn colorForEffect(cocos2d::ccColor3B p0, cocos2d::ccHSVValue p1);

    /**
     * @note[short] Android
     */
    TodoReturn colorForGroupID(int p0, cocos2d::ccColor3B const& p1, bool p2);

    /**
     * @note[short] Android
     */
    TodoReturn colorForIndex(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn colorForPulseEffect(cocos2d::ccColor3B const& p0, PulseEffectAction* p1);

    /**
     * @note[short] Android
     */
    TodoReturn createMoveCommand(cocos2d::CCPoint p0, int p1, float p2, int p3, bool p4, bool p5);

    /**
     * @note[short] Android
     */
    TodoReturn getAllColorActions();

    /**
     * @note[short] Android
     */
    TodoReturn getAllColorSprites();

    /**
     * @note[short] Android
     */
    TodoReturn getAllDisabledGroups();

    /**
     * @note[short] Android
     */
    TodoReturn getClkTimer();

    /**
     * @note[short] Android
     */
    TodoReturn getColorAction(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getColorSprite(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getCurrentStateString();

    /**
     * @note[short] Android
     */
    TodoReturn getDeltaMoveActionsDict();

    /**
     * @note[short] Android
     */
    TodoReturn getLoadedMoveOffset();

    /**
     * @note[short] Android
     */
    TodoReturn getMixedColor(cocos2d::ccColor3B p0, cocos2d::ccColor3B p1, float p2);

    /**
     * @note[short] Android
     */
    TodoReturn getPlayerXVelocity();

    /**
     * @note[short] Android
     */
    TodoReturn getPlayerYVelocity();

    /**
     * @note[short] Android
     */
    TodoReturn getSaveString();

    /**
     * @note[short] Android
     */
    TodoReturn getSpawnDelegate();

    /**
     * @note[short] Android
     */
    TodoReturn hasBeenTriggered(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn hasPulseEffectForGroupID(int p0);

    /**
     * @note[short] Android
     */
    bool isGroupEnabled(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn keyForGroupIDColor(int p0, cocos2d::ccColor3B const& p1, bool p2);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn loadState(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn opacityForIndex(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn opacityModForGroup(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn prepareMoveActions(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn processColors();

    /**
     * @note[short] Android
     */
    TodoReturn processCopyColorPulseActions();

    /**
     * @note[short] Android
     */
    TodoReturn processInheritedColors();

    /**
     * @note[short] Android
     */
    TodoReturn processPulseActions();

    /**
     * @note[short] Android
     */
    TodoReturn removeAllPulseActions();

    /**
     * @note[short] Android
     */
    TodoReturn removeColorAction(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn reset();

    /**
     * @note[short] Android
     */
    TodoReturn resetColorCache();

    /**
     * @note[short] Android
     */
    TodoReturn resetEffects();

    /**
     * @note[short] Android
     */
    TodoReturn resetMoveActions();

    /**
     * @note[short] Android
     */
    TodoReturn resetToggledGroups();

    /**
     * @note[short] Android
     */
    TodoReturn resetTriggeredIDs();

    /**
     * @note[short] Android
     */
    TodoReturn runOpacityActionOnGroup(int p0, float p1, float p2);

    /**
     * @note[short] Android
     */
    TodoReturn runPulseEffect(int p0, bool p1, float p2, float p3, float p4, PulseEffectType p5, cocos2d::ccColor3B p6, cocos2d::ccHSVValue p7, int p8, bool p9, bool p10);

    /**
     * @note[short] Android
     */
    void setClkTimer(float p0);

    /**
     * @note[short] Android
     */
    void setColorAction(ColorAction* p0, int p1);

    /**
     * @note[short] Android
     */
    void setPlayerXVelocity(float p0);

    /**
     * @note[short] Android
     */
    void setPlayerYVelocity(float p0);

    /**
     * @note[short] Android
     */
    void setSpawnDelegate(SpawnTriggerDelegate* p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn setupFromString(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn shouldBlend(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn spawnGroup(int p0, float p1);

    /**
     * @note[short] Android
     */
    TodoReturn storeTriggeredID(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn toggleGroup(int p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn traverseInheritanceChain(InheritanceNode* p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateActiveOpacityEffects();

    /**
     * @note[short] Android
     */
    TodoReturn updateColorEffects(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateColors(cocos2d::ccColor3B p0, cocos2d::ccColor3B p1);

    /**
     * @note[short] Android
     */
    TodoReturn updateEffects(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateOpacityEffects(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn updatePulseEffects(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateSpawnTriggers(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn wouldCreateLoop(InheritanceNode* p0, int p1);

    /**
     * @note[short] Android
     */
    virtual bool init();
};
