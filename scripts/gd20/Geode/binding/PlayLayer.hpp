#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class PlayLayer {
public:
    static constexpr auto CLASS_NAME = "PlayLayer";

    /**
     * @note[short] Android
     */
    static PlayLayer* create(GJGameLevel* p0);

    /**
     * @note[short] Android
     */
    TodoReturn addCircle(CCCircleWave* p0);

    /**
     * @note[short] Android
     */
    TodoReturn addObject(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn addToGroup(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn addToSpeedObjects(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn animateInDualGround(GameObject* p0, float p1, bool p2);

    /**
     * @note[short] Android
     */
    TodoReturn animateInGround(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn animateOutGround(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn animateOutGroundFinished();

    /**
     * @note[short] Android
     */
    TodoReturn applyEnterEffect(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn calculateColorValues(EffectGameObject* p0, EffectGameObject* p1, int p2, float p3, ColorActionSprite* p4, GJEffectManager* p5);

    /**
     * @note[short] Android
     */
    TodoReturn cameraMoveX(float p0, float p1, float p2);

    /**
     * @note[short] Android
     */
    TodoReturn cameraMoveY(float p0, float p1, float p2);

    /**
     * @note[short] Android
     */
    TodoReturn checkCollisions(PlayerObject* p0, float p1);

    /**
     * @note[short] Android
     */
    TodoReturn checkSpawnObjects();

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn claimParticle(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn clearPickedUpItems();

    /**
     * @note[short] Android
     */
    TodoReturn colorObject(int p0, cocos2d::ccColor3B p1);

    /**
     * @note[short] Android
     */
    TodoReturn createCheckpoint();

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn createObjectsFromSetup(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn createParticle(int p0, char const* p1, int p2, cocos2d::tCCPositionType p3);

    /**
     * @note[short] Android
     */
    TodoReturn delayedResetLevel();

    /**
     * @note[short] Android
     */
    TodoReturn destroyPlayer(PlayerObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn enterDualMode(GameObject* p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn exitAirMode();

    /**
     * @note[short] Android
     */
    TodoReturn exitBirdMode(PlayerObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn exitDartMode(PlayerObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn exitFlyMode(PlayerObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn exitRobotMode(PlayerObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn exitRollMode(PlayerObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn flipFinished();

    /**
     * @note[short] Android
     */
    TodoReturn flipGravity(PlayerObject* p0, bool p1, bool p2);

    /**
     * @note[short] Android
     */
    TodoReturn flipObjects();

    /**
     * @note[short] Android
     */
    TodoReturn fullReset();

    /**
     * @note[short] Android
     */
    TodoReturn getAttempts();

    /**
     * @note[short] Android
     */
    TodoReturn getBigActionContainer();

    /**
     * @note[short] Android
     */
    TodoReturn getCameraPortal();

    /**
     * @note[short] Android
     */
    TodoReturn getCameraPos();

    /**
     * @note[short] Android
     */
    TodoReturn getCleanReset();

    /**
     * @note[short] Android
     */
    TodoReturn getClkTimer();

    /**
     * @note[short] Android
     */
    TodoReturn getColorManager();

    /**
     * @note[short] Android
     */
    TodoReturn getDidAwardStars();

    /**
     * @note[short] Android
     */
    TodoReturn getDidJump();

    /**
     * @note[short] Android
     */
    TodoReturn getDualMode();

    /**
     * @note[short] Android
     */
    TodoReturn getDualModeCamera();

    /**
     * @note[short] Android
     */
    TodoReturn getEndTriggered();

    /**
     * @note[short] Android
     */
    TodoReturn getFlipValue();

    /**
     * @note[short] Android
     */
    TodoReturn getForcePlaybackControl();

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
    TodoReturn getIsFlipped();

    /**
     * @note[short] Android
     */
    TodoReturn getIsResetting();

    /**
     * @note[short] Android
     */
    TodoReturn getJumps();

    /**
     * @note[short] Android
     */
    TodoReturn getLastCheckpoint();

    /**
     * @note[short] Android
     */
    TodoReturn getLastRunPercent();

    /**
     * @note[short] Android
     */
    TodoReturn getLevel();

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
    TodoReturn getOtherPlayer(PlayerObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getParticleKey(int p0, char const* p1, int p2, cocos2d::tCCPositionType p3);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn getParticleKey2(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn getPlaybackMode();

    /**
     * @note[short] Android
     */
    TodoReturn getPracticeMode();

    /**
     * @note[short] Android
     */
    TodoReturn getRelativeMod(cocos2d::CCPoint p0, float p1, float p2, float p3);

    /**
     * @note[short] Android
     */
    TodoReturn getResetFlipObjects();

    /**
     * @note[short] Android
     */
    TodoReturn getResetQueued();

    /**
     * @note[short] Android
     */
    TodoReturn getResetTriggered();

    /**
     * @note[short] Android
     */
    TodoReturn getShouldRestartAfterStopped();

    /**
     * @note[short] Android
     */
    TodoReturn getShowingEndLayer();

    /**
     * @note[short] Android
     */
    TodoReturn getStartPos();

    /**
     * @note[short] Android
     */
    TodoReturn getTempMilliTime();

    /**
     * @note[short] Android
     */
    TodoReturn getTestMode();

    /**
     * @note[short] Android
     */
    TodoReturn getUILayer();

    /**
     * @note[short] Android
     */
    TodoReturn gravityEffectFinished();

    /**
     * @note[short] Android
     */
    TodoReturn hasItem(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn hasUniqueCoin(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn incrementJumps();

    /**
     * @note[short] Android
     */
    bool init(GJGameLevel* p0);

    /**
     * @note[short] Android
     */
    bool isFlipping();

    /**
     * @note[short] Android
     */
    TodoReturn levelComplete();

    /**
     * @note[short] Android
     */
    TodoReturn lightningFlash(cocos2d::CCPoint p0, cocos2d::ccColor3B p1);

    /**
     * @note[short] Android
     */
    TodoReturn lightningFlash(cocos2d::CCPoint p0, cocos2d::CCPoint p1, cocos2d::ccColor3B p2, float p3, float p4, int p5);

    /**
     * @note[short] Android
     */
    TodoReturn loadDefaultColors();

    /**
     * @note[short] Android
     */
    TodoReturn loadLastCheckpoint();

    /**
     * @note[short] Android
     */
    TodoReturn markCheckpoint();

    /**
     * @note[short] Android
     */
    TodoReturn moveCameraToPos(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    TodoReturn objectIntersectsCircle(GameObject* p0, GameObject* p1);

    /**
     * @note[short] Android
     */
    TodoReturn onQuit();

    /**
     * @note[short] Android
     */
    TodoReturn pauseGame(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn pickupItem(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn playEndAnimationToPos(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    TodoReturn playerWillSwitchMode(PlayerObject* p0, GameObject* p1);

    /**
     * @note[short] Android
     */
    TodoReturn playExitDualEffect(PlayerObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn playFlashEffect(float p0, int p1, float p2);

    /**
     * @note[short] Android
     */
    TodoReturn playSpeedParticle(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn preloadActions();

    /**
     * @note[short] Android
     */
    TodoReturn preloadMoveActions();

    /**
     * @note[short] Android
     */
    TodoReturn processItems();

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
    TodoReturn recordAction(bool p0, PlayerObject* p1);

    /**
     * @note[short] Android
     */
    TodoReturn registerActiveObject(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn registerStateObject(GameObject* p0);

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
    TodoReturn removeFromGroup(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn removeLastCheckpoint();

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
    TodoReturn reorderObjectSection(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn resetLevel();

    /**
     * @note[short] Android
     */
    TodoReturn resume();

    /**
     * @note[short] Android
     */
    TodoReturn resumeAndRestart();

    /**
     * @note[short] Android
     */
    TodoReturn saveRecordAction(bool p0, PlayerObject* p1);

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
    void setActiveEnterEffect(EnterEffect p0);

    /**
     * @note[short] Android
     */
    void setCleanReset(bool p0);

    /**
     * @note[short] Android
     */
    void setEndTriggered(bool p0);

    /**
     * @note[short] Android
     */
    void setForcePlaybackControl(bool p0);

    /**
     * @note[short] Android
     */
    void setIsResetting(bool p0);

    /**
     * @note[short] Android
     */
    void setLastRunPercent(int p0);

    /**
     * @note[short] Android
     */
    void setPlaybackMode(bool p0);

    /**
     * @note[short] Android
     */
    void setResetQueued(bool p0);

    /**
     * @note[short] Android
     */
    void setShouldRestartAfterStopped(bool p0);

    /**
     * @note[short] Android
     */
    void setShowingEndLayer(bool p0);

    /**
     * @note[short] Android
     */
    void setStartPos(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    void setStartPosObject(StartPosObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn setupLevelStart(LevelSettingsObject* p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn setupReplay(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn shakeCamera(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn shouldBlend(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn showCompleteEffect();

    /**
     * @note[short] Android
     */
    TodoReturn showCompleteText();

    /**
     * @note[short] Android
     */
    TodoReturn showEndLayer();

    /**
     * @note[short] Android
     */
    TodoReturn showHint();

    /**
     * @note[short] Android
     */
    TodoReturn showNewBest();

    /**
     * @note[short] Android
     */
    TodoReturn showRetryLayer();

    /**
     * @note[short] Android
     */
    TodoReturn showTwoPlayerGuide();

    /**
     * @note[short] Android
     */
    TodoReturn sortGroups();

    /**
     * @note[short] Android
     */
    TodoReturn spawnCircle();

    /**
     * @note[short] Android
     */
    TodoReturn spawnFirework();

    /**
     * @note[short] Android
     */
    TodoReturn spawnGroup(int p0, float p1);

    /**
     * @note[short] Android
     */
    TodoReturn spawnGroup(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn spawnParticle(char const* p0, int p1, cocos2d::tCCPositionType p2, cocos2d::CCPoint p3);

    /**
     * @note[short] Android
     */
    TodoReturn spawnPlayer2();

    /**
     * @note[short] Android
     */
    TodoReturn startGame();

    /**
     * @note[short] Android
     */
    TodoReturn startMusic();

    /**
     * @note[short] Android
     */
    TodoReturn startRecording();

    /**
     * @note[short] Android
     */
    TodoReturn startRecordingDelayed();

    /**
     * @note[short] Android
     */
    TodoReturn stopCameraShake();

    /**
     * @note[short] Android
     */
    TodoReturn stopRecording();

    /**
     * @note[short] Android
     */
    TodoReturn storeCheckpoint(CheckpointObject* p0);

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
    TodoReturn timeForXPos2(float p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn toggleDualMode(GameObject* p0, bool p1, PlayerObject* p2, bool p3);

    /**
     * @note[short] Android
     */
    TodoReturn toggleFlipped(bool p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn toggleGhostEffect(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn toggleGroup(int p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn togglePracticeMode(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn tryStartRecord();

    /**
     * @note[short] Android
     */
    TodoReturn unclaimParticle(char const* p0, cocos2d::CCParticleSystemQuad* p1);

    /**
     * @note[short] Android
     */
    TodoReturn unregisterActiveObject(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn unregisterStateObject(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateAttempts();

    /**
     * @note[short] Android
     */
    TodoReturn updateCamera(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateColor(cocos2d::ccColor3B p0, float p1, int p2, bool p3, float p4, cocos2d::ccHSVValue p5, int p6, bool p7);

    /**
     * @note[short] Android
     */
    TodoReturn updateDualGround(PlayerObject* p0, int p1, bool p2);

    /**
     * @note[short] Android
     */
    TodoReturn updateEffectPositions();

    /**
     * @note[short] Android
     */
    TodoReturn updateLevelColors();

    /**
     * @note[short] Android
     */
    TodoReturn updateProgressbar();

    /**
     * @note[short] Android
     */
    TodoReturn updateReplay(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateTimeMod(float p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn updateVisibility();

    /**
     * @note[short] Android
     */
    TodoReturn visitWithColorFlash();

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
    virtual void onEnterTransitionDidFinish();

    /**
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] Android
     */
    virtual void visit();

    /**
     * @note[short] Android
     */
    virtual void updateTweenAction(float p0, char const* p1);

    /**
     * @note[short] Android
     */
    virtual TodoReturn toggleGlitter(bool p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn addToSection(GameObject* p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn playGravityEffect(bool p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn toggleProgressbar();

    /**
     * @note[short] Android
     */
    virtual TodoReturn circleWaveWillBeRemoved(CCCircleWave* p0);
};
