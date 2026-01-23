#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class LevelEditorLayer {
public:
    static constexpr auto CLASS_NAME = "LevelEditorLayer";

    /**
     * @note[short] Android
     */
    static LevelEditorLayer* create(GJGameLevel* p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn addObjectFromString(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn addObjectsRecursiveFromArray(cocos2d::CCArray* p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn addSpecial(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn addToGroup(GameObject* p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn addToGroup(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn addToRedoList(UndoObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn addToUndoList(UndoObject* p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn animateInDualGround(GameObject* p0, float p1, bool p2);

    /**
     * @note[short] Android
     */
    TodoReturn breakApartTextObject(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn calculateColorValues(EffectGameObject* p0, EffectGameObject* p1, int p2, float p3, ColorActionSprite* p4, GJEffectManager* p5);

    /**
     * @note[short] Android
     */
    TodoReturn canPasteState();

    /**
     * @note[short] Android
     */
    TodoReturn checkCollisions(PlayerObject* p0, float p1);

    /**
     * @note[short] Android
     */
    TodoReturn checkSpawnObjects();

    /**
     * @note[short] Android
     */
    TodoReturn copyObjectState(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn createBackground();

    /**
     * @note[short] Android
     */
    TodoReturn createGroundLayer();

    /**
     * @note[short] Android
     */
    TodoReturn createObject(int p0, cocos2d::CCPoint p1, bool p2);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn createObjectsFromSetup(gd::string p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn createObjectsFromString(gd::string p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn dirtifyTriggers();

    /**
     * @note[short] Android
     */
    TodoReturn enterDualMode(GameObject* p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn fastUpdateDisabledGroups();

    /**
     * @note[short] Android
     */
    TodoReturn flipGravity(PlayerObject* p0, bool p1, bool p2);

    /**
     * @note[short] Android
     */
    TodoReturn fullUpdateDisabledGroups();

    /**
     * @note[short] Android
     */
    TodoReturn getAllObjects();

    /**
     * @note[short] Android
     */
    TodoReturn getClkTimer();

    /**
     * @note[short] Android
     */
    TodoReturn getCoinCount();

    /**
     * @note[short] Android
     */
    TodoReturn getDontApplyLayerFilter();

    /**
     * @note[short] Android
     */
    TodoReturn getDualMode();

    /**
     * @note[short] Android
     */
    TodoReturn getGridLayer();

    /**
     * @note[short] Android
     */
    TodoReturn getGridPos(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    TodoReturn getGroundHeightForMode(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getGroup(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getGroupIDFilter();

    /**
     * @note[short] Android
     */
    TodoReturn getLastObjectX();

    /**
     * @note[short] Android
     */
    TodoReturn getLevel();

    /**
     * @note[short] Android
     */
    TodoReturn getLevelDistance();

    /**
     * @note[short] Android
     */
    TodoReturn getLevelString();

    /**
     * @note[short] Android
     */
    TodoReturn getMaxPortalY();

    /**
     * @note[short] Android
     */
    TodoReturn getMinPortalY();

    /**
     * @note[short] Android
     */
    TodoReturn getNextColorChannel();

    /**
     * @note[short] Android
     */
    TodoReturn getNextFreeGroupID();

    /**
     * @note[short] Android
     */
    TodoReturn getObjectCount();

    /**
     * @note[short] Android
     */
    TodoReturn getObjectRect(GameObject* p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn getOldLevelString();

    /**
     * @note[short] Android
     */
    TodoReturn getOtherPlayer(PlayerObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getPlayerState();

    /**
     * @note[short] Android
     */
    TodoReturn getRelativeOffset(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getSectionCount();

    /**
     * @note[short] Android
     */
    TodoReturn getUILayer();

    /**
     * @note[short] Android
     */
    TodoReturn handleAction(bool p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Android
     */
    TodoReturn hasAction(bool p0);

    /**
     * @note[short] Android
     */
    bool init(GJGameLevel* p0);

    /**
     * @note[short] Android
     */
    TodoReturn objectAtPosition(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    TodoReturn objectIntersectsCircle(GameObject* p0, GameObject* p1);

    /**
     * @note[short] Android
     */
    TodoReturn objectMoved(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn objectsAtPosition(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    TodoReturn objectsInRect(cocos2d::CCRect p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn onPausePlaytest();

    /**
     * @note[short] Android
     */
    TodoReturn onPlaytest();

    /**
     * @note[short] Android
     */
    TodoReturn onResumePlaytest();

    /**
     * @note[short] Android
     */
    TodoReturn onStopPlaytest();

    /**
     * @note[short] Android
     */
    TodoReturn pasteAtributeState(GameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Android
     */
    TodoReturn pasteColorState(GameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Android
     */
    TodoReturn playerWillSwitchMode(PlayerObject* p0, GameObject* p1);

    /**
     * @note[short] Android
     */
    TodoReturn playMusic();

    /**
     * @note[short] Android
     */
    TodoReturn preloadMoveActions();

    /**
     * @note[short] Android
     */
    TodoReturn processLoadedMoveActions();

    /**
     * @note[short] Android
     */
    TodoReturn processMoveActionsStep();

    /**
     * @note[short] Android
     */
    TodoReturn pushButton(int p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn recreateGroups();

    /**
     * @note[short] Android
     */
    TodoReturn redoLastAction();

    /**
     * @note[short] Android
     */
    TodoReturn releaseButton(int p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn removeAllObjects();

    /**
     * @note[short] Android
     */
    TodoReturn removeAllObjectsOfType(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn removeBackground();

    /**
     * @note[short] Android
     */
    TodoReturn removeFromGroup(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn removeGroundLayer();

    /**
     * @note[short] Android
     */
    TodoReturn removeObject(GameObject* p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn removeObjectFromSection(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn removePlayer2();

    /**
     * @note[short] Android
     */
    TodoReturn removeSpecial(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn reorderObjectSection(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn resetMovingObjects();

    /**
     * @note[short] Android
     */
    TodoReturn resetObjectVector();

    /**
     * @note[short] Android
     */
    TodoReturn resetUnusedColorChannels();

    /**
     * @note[short] Android
     */
    TodoReturn rotationForSlopeNearObject(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn scene(GJGameLevel* p0);

    /**
     * @note[short] Android
     */
    TodoReturn sectionForPos(float p0);

    /**
     * @note[short] Android
     */
    void setDontApplyLayerFilter(bool p0);

    /**
     * @note[short] Android
     */
    void setGroupIDFilter(int p0);

    /**
     * @note[short] Android
     */
    void setObjectCount(int p0);

    /**
     * @note[short] Android
     */
    void setStartPosObject(StartPosObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn setupLevelStart(LevelSettingsObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn shouldBlend(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn sortBatchnodeChildren(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn spawnGroup(int p0, float p1);

    /**
     * @note[short] Android
     */
    TodoReturn spawnPlayer2();

    /**
     * @note[short] Android
     */
    TodoReturn switchToFlyMode(PlayerObject* p0, GameObject* p1, bool p2, int p3);

    /**
     * @note[short] Android
     */
    TodoReturn switchToRobotMode(PlayerObject* p0, GameObject* p1, bool p2);

    /**
     * @note[short] Android
     */
    TodoReturn switchToRollMode(PlayerObject* p0, GameObject* p1, bool p2);

    /**
     * @note[short] Android
     */
    TodoReturn timeForXPos(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn toggleDualMode(GameObject* p0, bool p1, PlayerObject* p2, bool p3);

    /**
     * @note[short] Android
     */
    TodoReturn toggleGrid(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn toggleGround(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn triggerMoveCommand(EffectGameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn typeExistsAtPosition(int p0, cocos2d::CCPoint p1, bool p2, bool p3, float p4);

    /**
     * @note[short] Android
     */
    TodoReturn undoLastAction();

    /**
     * @note[short] Android
     */
    TodoReturn updateDualGround(PlayerObject* p0, int p1, bool p2);

    /**
     * @note[short] Android
     */
    TodoReturn updateEditorMode();

    /**
     * @note[short] Android
     */
    TodoReturn updateGameObjects();

    /**
     * @note[short] Android
     */
    TodoReturn updateGround(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateGroundWidth();

    /**
     * @note[short] Android
     */
    TodoReturn updateLevelColors();

    /**
     * @note[short] Android
     */
    TodoReturn updateLevelFont(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateOBB2(cocos2d::CCRect p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateTimeMod(float p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn validGroup(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn willSwitchToMode(int p0, PlayerObject* p1);

    /**
     * @note[short] Android
     */
    virtual void update(float p0);

    /**
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] Android
     */
    virtual TodoReturn updateVisibility(float p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn addToSection(GameObject* p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn removeFromGroup(GameObject* p0, int p1);

    /**
     * @note[short] Android
     */
    virtual TodoReturn levelSettingsUpdated();
};
