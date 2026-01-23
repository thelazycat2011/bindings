#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/PlayLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_addCircle
		#define GEODE_STATICS_addCircle
		GEODE_AS_STATIC_FUNCTION(addCircle) 
	#endif

	#ifndef GEODE_STATICS_addObject
		#define GEODE_STATICS_addObject
		GEODE_AS_STATIC_FUNCTION(addObject) 
	#endif

	#ifndef GEODE_STATICS_addToGroup
		#define GEODE_STATICS_addToGroup
		GEODE_AS_STATIC_FUNCTION(addToGroup) 
	#endif

	#ifndef GEODE_STATICS_addToSpeedObjects
		#define GEODE_STATICS_addToSpeedObjects
		GEODE_AS_STATIC_FUNCTION(addToSpeedObjects) 
	#endif

	#ifndef GEODE_STATICS_animateInDualGround
		#define GEODE_STATICS_animateInDualGround
		GEODE_AS_STATIC_FUNCTION(animateInDualGround) 
	#endif

	#ifndef GEODE_STATICS_animateInGround
		#define GEODE_STATICS_animateInGround
		GEODE_AS_STATIC_FUNCTION(animateInGround) 
	#endif

	#ifndef GEODE_STATICS_animateOutGround
		#define GEODE_STATICS_animateOutGround
		GEODE_AS_STATIC_FUNCTION(animateOutGround) 
	#endif

	#ifndef GEODE_STATICS_animateOutGroundFinished
		#define GEODE_STATICS_animateOutGroundFinished
		GEODE_AS_STATIC_FUNCTION(animateOutGroundFinished) 
	#endif

	#ifndef GEODE_STATICS_applyEnterEffect
		#define GEODE_STATICS_applyEnterEffect
		GEODE_AS_STATIC_FUNCTION(applyEnterEffect) 
	#endif

	#ifndef GEODE_STATICS_calculateColorValues
		#define GEODE_STATICS_calculateColorValues
		GEODE_AS_STATIC_FUNCTION(calculateColorValues) 
	#endif

	#ifndef GEODE_STATICS_cameraMoveX
		#define GEODE_STATICS_cameraMoveX
		GEODE_AS_STATIC_FUNCTION(cameraMoveX) 
	#endif

	#ifndef GEODE_STATICS_cameraMoveY
		#define GEODE_STATICS_cameraMoveY
		GEODE_AS_STATIC_FUNCTION(cameraMoveY) 
	#endif

	#ifndef GEODE_STATICS_checkCollisions
		#define GEODE_STATICS_checkCollisions
		GEODE_AS_STATIC_FUNCTION(checkCollisions) 
	#endif

	#ifndef GEODE_STATICS_checkSpawnObjects
		#define GEODE_STATICS_checkSpawnObjects
		GEODE_AS_STATIC_FUNCTION(checkSpawnObjects) 
	#endif

	#ifndef GEODE_STATICS_claimParticle
		#define GEODE_STATICS_claimParticle
		GEODE_AS_STATIC_FUNCTION(claimParticle) 
	#endif

	#ifndef GEODE_STATICS_clearPickedUpItems
		#define GEODE_STATICS_clearPickedUpItems
		GEODE_AS_STATIC_FUNCTION(clearPickedUpItems) 
	#endif

	#ifndef GEODE_STATICS_colorObject
		#define GEODE_STATICS_colorObject
		GEODE_AS_STATIC_FUNCTION(colorObject) 
	#endif

	#ifndef GEODE_STATICS_createCheckpoint
		#define GEODE_STATICS_createCheckpoint
		GEODE_AS_STATIC_FUNCTION(createCheckpoint) 
	#endif

	#ifndef GEODE_STATICS_createObjectsFromSetup
		#define GEODE_STATICS_createObjectsFromSetup
		GEODE_AS_STATIC_FUNCTION(createObjectsFromSetup) 
	#endif

	#ifndef GEODE_STATICS_createParticle
		#define GEODE_STATICS_createParticle
		GEODE_AS_STATIC_FUNCTION(createParticle) 
	#endif

	#ifndef GEODE_STATICS_delayedResetLevel
		#define GEODE_STATICS_delayedResetLevel
		GEODE_AS_STATIC_FUNCTION(delayedResetLevel) 
	#endif

	#ifndef GEODE_STATICS_destroyPlayer
		#define GEODE_STATICS_destroyPlayer
		GEODE_AS_STATIC_FUNCTION(destroyPlayer) 
	#endif

	#ifndef GEODE_STATICS_enterDualMode
		#define GEODE_STATICS_enterDualMode
		GEODE_AS_STATIC_FUNCTION(enterDualMode) 
	#endif

	#ifndef GEODE_STATICS_exitAirMode
		#define GEODE_STATICS_exitAirMode
		GEODE_AS_STATIC_FUNCTION(exitAirMode) 
	#endif

	#ifndef GEODE_STATICS_exitBirdMode
		#define GEODE_STATICS_exitBirdMode
		GEODE_AS_STATIC_FUNCTION(exitBirdMode) 
	#endif

	#ifndef GEODE_STATICS_exitDartMode
		#define GEODE_STATICS_exitDartMode
		GEODE_AS_STATIC_FUNCTION(exitDartMode) 
	#endif

	#ifndef GEODE_STATICS_exitFlyMode
		#define GEODE_STATICS_exitFlyMode
		GEODE_AS_STATIC_FUNCTION(exitFlyMode) 
	#endif

	#ifndef GEODE_STATICS_exitRobotMode
		#define GEODE_STATICS_exitRobotMode
		GEODE_AS_STATIC_FUNCTION(exitRobotMode) 
	#endif

	#ifndef GEODE_STATICS_exitRollMode
		#define GEODE_STATICS_exitRollMode
		GEODE_AS_STATIC_FUNCTION(exitRollMode) 
	#endif

	#ifndef GEODE_STATICS_flipFinished
		#define GEODE_STATICS_flipFinished
		GEODE_AS_STATIC_FUNCTION(flipFinished) 
	#endif

	#ifndef GEODE_STATICS_flipGravity
		#define GEODE_STATICS_flipGravity
		GEODE_AS_STATIC_FUNCTION(flipGravity) 
	#endif

	#ifndef GEODE_STATICS_flipObjects
		#define GEODE_STATICS_flipObjects
		GEODE_AS_STATIC_FUNCTION(flipObjects) 
	#endif

	#ifndef GEODE_STATICS_fullReset
		#define GEODE_STATICS_fullReset
		GEODE_AS_STATIC_FUNCTION(fullReset) 
	#endif

	#ifndef GEODE_STATICS_getAttempts
		#define GEODE_STATICS_getAttempts
		GEODE_AS_STATIC_FUNCTION(getAttempts) 
	#endif

	#ifndef GEODE_STATICS_getBigActionContainer
		#define GEODE_STATICS_getBigActionContainer
		GEODE_AS_STATIC_FUNCTION(getBigActionContainer) 
	#endif

	#ifndef GEODE_STATICS_getCameraPortal
		#define GEODE_STATICS_getCameraPortal
		GEODE_AS_STATIC_FUNCTION(getCameraPortal) 
	#endif

	#ifndef GEODE_STATICS_getCameraPos
		#define GEODE_STATICS_getCameraPos
		GEODE_AS_STATIC_FUNCTION(getCameraPos) 
	#endif

	#ifndef GEODE_STATICS_getCleanReset
		#define GEODE_STATICS_getCleanReset
		GEODE_AS_STATIC_FUNCTION(getCleanReset) 
	#endif

	#ifndef GEODE_STATICS_getClkTimer
		#define GEODE_STATICS_getClkTimer
		GEODE_AS_STATIC_FUNCTION(getClkTimer) 
	#endif

	#ifndef GEODE_STATICS_getColorManager
		#define GEODE_STATICS_getColorManager
		GEODE_AS_STATIC_FUNCTION(getColorManager) 
	#endif

	#ifndef GEODE_STATICS_getDidAwardStars
		#define GEODE_STATICS_getDidAwardStars
		GEODE_AS_STATIC_FUNCTION(getDidAwardStars) 
	#endif

	#ifndef GEODE_STATICS_getDidJump
		#define GEODE_STATICS_getDidJump
		GEODE_AS_STATIC_FUNCTION(getDidJump) 
	#endif

	#ifndef GEODE_STATICS_getDualMode
		#define GEODE_STATICS_getDualMode
		GEODE_AS_STATIC_FUNCTION(getDualMode) 
	#endif

	#ifndef GEODE_STATICS_getDualModeCamera
		#define GEODE_STATICS_getDualModeCamera
		GEODE_AS_STATIC_FUNCTION(getDualModeCamera) 
	#endif

	#ifndef GEODE_STATICS_getEndTriggered
		#define GEODE_STATICS_getEndTriggered
		GEODE_AS_STATIC_FUNCTION(getEndTriggered) 
	#endif

	#ifndef GEODE_STATICS_getFlipValue
		#define GEODE_STATICS_getFlipValue
		GEODE_AS_STATIC_FUNCTION(getFlipValue) 
	#endif

	#ifndef GEODE_STATICS_getForcePlaybackControl
		#define GEODE_STATICS_getForcePlaybackControl
		GEODE_AS_STATIC_FUNCTION(getForcePlaybackControl) 
	#endif

	#ifndef GEODE_STATICS_getGroundHeightForMode
		#define GEODE_STATICS_getGroundHeightForMode
		GEODE_AS_STATIC_FUNCTION(getGroundHeightForMode) 
	#endif

	#ifndef GEODE_STATICS_getGroup
		#define GEODE_STATICS_getGroup
		GEODE_AS_STATIC_FUNCTION(getGroup) 
	#endif

	#ifndef GEODE_STATICS_getIsFlipped
		#define GEODE_STATICS_getIsFlipped
		GEODE_AS_STATIC_FUNCTION(getIsFlipped) 
	#endif

	#ifndef GEODE_STATICS_getIsResetting
		#define GEODE_STATICS_getIsResetting
		GEODE_AS_STATIC_FUNCTION(getIsResetting) 
	#endif

	#ifndef GEODE_STATICS_getJumps
		#define GEODE_STATICS_getJumps
		GEODE_AS_STATIC_FUNCTION(getJumps) 
	#endif

	#ifndef GEODE_STATICS_getLastCheckpoint
		#define GEODE_STATICS_getLastCheckpoint
		GEODE_AS_STATIC_FUNCTION(getLastCheckpoint) 
	#endif

	#ifndef GEODE_STATICS_getLastRunPercent
		#define GEODE_STATICS_getLastRunPercent
		GEODE_AS_STATIC_FUNCTION(getLastRunPercent) 
	#endif

	#ifndef GEODE_STATICS_getLevel
		#define GEODE_STATICS_getLevel
		GEODE_AS_STATIC_FUNCTION(getLevel) 
	#endif

	#ifndef GEODE_STATICS_getMaxPortalY
		#define GEODE_STATICS_getMaxPortalY
		GEODE_AS_STATIC_FUNCTION(getMaxPortalY) 
	#endif

	#ifndef GEODE_STATICS_getMinPortalY
		#define GEODE_STATICS_getMinPortalY
		GEODE_AS_STATIC_FUNCTION(getMinPortalY) 
	#endif

	#ifndef GEODE_STATICS_getOtherPlayer
		#define GEODE_STATICS_getOtherPlayer
		GEODE_AS_STATIC_FUNCTION(getOtherPlayer) 
	#endif

	#ifndef GEODE_STATICS_getParticleKey
		#define GEODE_STATICS_getParticleKey
		GEODE_AS_STATIC_FUNCTION(getParticleKey) 
	#endif

	#ifndef GEODE_STATICS_getParticleKey2
		#define GEODE_STATICS_getParticleKey2
		GEODE_AS_STATIC_FUNCTION(getParticleKey2) 
	#endif

	#ifndef GEODE_STATICS_getPlaybackMode
		#define GEODE_STATICS_getPlaybackMode
		GEODE_AS_STATIC_FUNCTION(getPlaybackMode) 
	#endif

	#ifndef GEODE_STATICS_getPracticeMode
		#define GEODE_STATICS_getPracticeMode
		GEODE_AS_STATIC_FUNCTION(getPracticeMode) 
	#endif

	#ifndef GEODE_STATICS_getRelativeMod
		#define GEODE_STATICS_getRelativeMod
		GEODE_AS_STATIC_FUNCTION(getRelativeMod) 
	#endif

	#ifndef GEODE_STATICS_getResetFlipObjects
		#define GEODE_STATICS_getResetFlipObjects
		GEODE_AS_STATIC_FUNCTION(getResetFlipObjects) 
	#endif

	#ifndef GEODE_STATICS_getResetQueued
		#define GEODE_STATICS_getResetQueued
		GEODE_AS_STATIC_FUNCTION(getResetQueued) 
	#endif

	#ifndef GEODE_STATICS_getResetTriggered
		#define GEODE_STATICS_getResetTriggered
		GEODE_AS_STATIC_FUNCTION(getResetTriggered) 
	#endif

	#ifndef GEODE_STATICS_getShouldRestartAfterStopped
		#define GEODE_STATICS_getShouldRestartAfterStopped
		GEODE_AS_STATIC_FUNCTION(getShouldRestartAfterStopped) 
	#endif

	#ifndef GEODE_STATICS_getShowingEndLayer
		#define GEODE_STATICS_getShowingEndLayer
		GEODE_AS_STATIC_FUNCTION(getShowingEndLayer) 
	#endif

	#ifndef GEODE_STATICS_getStartPos
		#define GEODE_STATICS_getStartPos
		GEODE_AS_STATIC_FUNCTION(getStartPos) 
	#endif

	#ifndef GEODE_STATICS_getTempMilliTime
		#define GEODE_STATICS_getTempMilliTime
		GEODE_AS_STATIC_FUNCTION(getTempMilliTime) 
	#endif

	#ifndef GEODE_STATICS_getTestMode
		#define GEODE_STATICS_getTestMode
		GEODE_AS_STATIC_FUNCTION(getTestMode) 
	#endif

	#ifndef GEODE_STATICS_getUILayer
		#define GEODE_STATICS_getUILayer
		GEODE_AS_STATIC_FUNCTION(getUILayer) 
	#endif

	#ifndef GEODE_STATICS_gravityEffectFinished
		#define GEODE_STATICS_gravityEffectFinished
		GEODE_AS_STATIC_FUNCTION(gravityEffectFinished) 
	#endif

	#ifndef GEODE_STATICS_hasItem
		#define GEODE_STATICS_hasItem
		GEODE_AS_STATIC_FUNCTION(hasItem) 
	#endif

	#ifndef GEODE_STATICS_hasUniqueCoin
		#define GEODE_STATICS_hasUniqueCoin
		GEODE_AS_STATIC_FUNCTION(hasUniqueCoin) 
	#endif

	#ifndef GEODE_STATICS_incrementJumps
		#define GEODE_STATICS_incrementJumps
		GEODE_AS_STATIC_FUNCTION(incrementJumps) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_isFlipping
		#define GEODE_STATICS_isFlipping
		GEODE_AS_STATIC_FUNCTION(isFlipping) 
	#endif

	#ifndef GEODE_STATICS_levelComplete
		#define GEODE_STATICS_levelComplete
		GEODE_AS_STATIC_FUNCTION(levelComplete) 
	#endif

	#ifndef GEODE_STATICS_lightningFlash
		#define GEODE_STATICS_lightningFlash
		GEODE_AS_STATIC_FUNCTION(lightningFlash) 
	#endif

	#ifndef GEODE_STATICS_loadDefaultColors
		#define GEODE_STATICS_loadDefaultColors
		GEODE_AS_STATIC_FUNCTION(loadDefaultColors) 
	#endif

	#ifndef GEODE_STATICS_loadLastCheckpoint
		#define GEODE_STATICS_loadLastCheckpoint
		GEODE_AS_STATIC_FUNCTION(loadLastCheckpoint) 
	#endif

	#ifndef GEODE_STATICS_markCheckpoint
		#define GEODE_STATICS_markCheckpoint
		GEODE_AS_STATIC_FUNCTION(markCheckpoint) 
	#endif

	#ifndef GEODE_STATICS_moveCameraToPos
		#define GEODE_STATICS_moveCameraToPos
		GEODE_AS_STATIC_FUNCTION(moveCameraToPos) 
	#endif

	#ifndef GEODE_STATICS_objectIntersectsCircle
		#define GEODE_STATICS_objectIntersectsCircle
		GEODE_AS_STATIC_FUNCTION(objectIntersectsCircle) 
	#endif

	#ifndef GEODE_STATICS_onQuit
		#define GEODE_STATICS_onQuit
		GEODE_AS_STATIC_FUNCTION(onQuit) 
	#endif

	#ifndef GEODE_STATICS_pauseGame
		#define GEODE_STATICS_pauseGame
		GEODE_AS_STATIC_FUNCTION(pauseGame) 
	#endif

	#ifndef GEODE_STATICS_pickupItem
		#define GEODE_STATICS_pickupItem
		GEODE_AS_STATIC_FUNCTION(pickupItem) 
	#endif

	#ifndef GEODE_STATICS_playEndAnimationToPos
		#define GEODE_STATICS_playEndAnimationToPos
		GEODE_AS_STATIC_FUNCTION(playEndAnimationToPos) 
	#endif

	#ifndef GEODE_STATICS_playerWillSwitchMode
		#define GEODE_STATICS_playerWillSwitchMode
		GEODE_AS_STATIC_FUNCTION(playerWillSwitchMode) 
	#endif

	#ifndef GEODE_STATICS_playExitDualEffect
		#define GEODE_STATICS_playExitDualEffect
		GEODE_AS_STATIC_FUNCTION(playExitDualEffect) 
	#endif

	#ifndef GEODE_STATICS_playFlashEffect
		#define GEODE_STATICS_playFlashEffect
		GEODE_AS_STATIC_FUNCTION(playFlashEffect) 
	#endif

	#ifndef GEODE_STATICS_playSpeedParticle
		#define GEODE_STATICS_playSpeedParticle
		GEODE_AS_STATIC_FUNCTION(playSpeedParticle) 
	#endif

	#ifndef GEODE_STATICS_preloadActions
		#define GEODE_STATICS_preloadActions
		GEODE_AS_STATIC_FUNCTION(preloadActions) 
	#endif

	#ifndef GEODE_STATICS_preloadMoveActions
		#define GEODE_STATICS_preloadMoveActions
		GEODE_AS_STATIC_FUNCTION(preloadMoveActions) 
	#endif

	#ifndef GEODE_STATICS_processItems
		#define GEODE_STATICS_processItems
		GEODE_AS_STATIC_FUNCTION(processItems) 
	#endif

	#ifndef GEODE_STATICS_processLoadedMoveActions
		#define GEODE_STATICS_processLoadedMoveActions
		GEODE_AS_STATIC_FUNCTION(processLoadedMoveActions) 
	#endif

	#ifndef GEODE_STATICS_processMoveActionsStep
		#define GEODE_STATICS_processMoveActionsStep
		GEODE_AS_STATIC_FUNCTION(processMoveActionsStep) 
	#endif

	#ifndef GEODE_STATICS_pushButton
		#define GEODE_STATICS_pushButton
		GEODE_AS_STATIC_FUNCTION(pushButton) 
	#endif

	#ifndef GEODE_STATICS_recordAction
		#define GEODE_STATICS_recordAction
		GEODE_AS_STATIC_FUNCTION(recordAction) 
	#endif

	#ifndef GEODE_STATICS_registerActiveObject
		#define GEODE_STATICS_registerActiveObject
		GEODE_AS_STATIC_FUNCTION(registerActiveObject) 
	#endif

	#ifndef GEODE_STATICS_registerStateObject
		#define GEODE_STATICS_registerStateObject
		GEODE_AS_STATIC_FUNCTION(registerStateObject) 
	#endif

	#ifndef GEODE_STATICS_releaseButton
		#define GEODE_STATICS_releaseButton
		GEODE_AS_STATIC_FUNCTION(releaseButton) 
	#endif

	#ifndef GEODE_STATICS_removeAllObjects
		#define GEODE_STATICS_removeAllObjects
		GEODE_AS_STATIC_FUNCTION(removeAllObjects) 
	#endif

	#ifndef GEODE_STATICS_removeFromGroup
		#define GEODE_STATICS_removeFromGroup
		GEODE_AS_STATIC_FUNCTION(removeFromGroup) 
	#endif

	#ifndef GEODE_STATICS_removeLastCheckpoint
		#define GEODE_STATICS_removeLastCheckpoint
		GEODE_AS_STATIC_FUNCTION(removeLastCheckpoint) 
	#endif

	#ifndef GEODE_STATICS_removeObjectFromSection
		#define GEODE_STATICS_removeObjectFromSection
		GEODE_AS_STATIC_FUNCTION(removeObjectFromSection) 
	#endif

	#ifndef GEODE_STATICS_removePlayer2
		#define GEODE_STATICS_removePlayer2
		GEODE_AS_STATIC_FUNCTION(removePlayer2) 
	#endif

	#ifndef GEODE_STATICS_reorderObjectSection
		#define GEODE_STATICS_reorderObjectSection
		GEODE_AS_STATIC_FUNCTION(reorderObjectSection) 
	#endif

	#ifndef GEODE_STATICS_resetLevel
		#define GEODE_STATICS_resetLevel
		GEODE_AS_STATIC_FUNCTION(resetLevel) 
	#endif

	#ifndef GEODE_STATICS_resume
		#define GEODE_STATICS_resume
		GEODE_AS_STATIC_FUNCTION(resume) 
	#endif

	#ifndef GEODE_STATICS_resumeAndRestart
		#define GEODE_STATICS_resumeAndRestart
		GEODE_AS_STATIC_FUNCTION(resumeAndRestart) 
	#endif

	#ifndef GEODE_STATICS_saveRecordAction
		#define GEODE_STATICS_saveRecordAction
		GEODE_AS_STATIC_FUNCTION(saveRecordAction) 
	#endif

	#ifndef GEODE_STATICS_scene
		#define GEODE_STATICS_scene
		GEODE_AS_STATIC_FUNCTION(scene) 
	#endif

	#ifndef GEODE_STATICS_sectionForPos
		#define GEODE_STATICS_sectionForPos
		GEODE_AS_STATIC_FUNCTION(sectionForPos) 
	#endif

	#ifndef GEODE_STATICS_setActiveEnterEffect
		#define GEODE_STATICS_setActiveEnterEffect
		GEODE_AS_STATIC_FUNCTION(setActiveEnterEffect) 
	#endif

	#ifndef GEODE_STATICS_setCleanReset
		#define GEODE_STATICS_setCleanReset
		GEODE_AS_STATIC_FUNCTION(setCleanReset) 
	#endif

	#ifndef GEODE_STATICS_setEndTriggered
		#define GEODE_STATICS_setEndTriggered
		GEODE_AS_STATIC_FUNCTION(setEndTriggered) 
	#endif

	#ifndef GEODE_STATICS_setForcePlaybackControl
		#define GEODE_STATICS_setForcePlaybackControl
		GEODE_AS_STATIC_FUNCTION(setForcePlaybackControl) 
	#endif

	#ifndef GEODE_STATICS_setIsResetting
		#define GEODE_STATICS_setIsResetting
		GEODE_AS_STATIC_FUNCTION(setIsResetting) 
	#endif

	#ifndef GEODE_STATICS_setLastRunPercent
		#define GEODE_STATICS_setLastRunPercent
		GEODE_AS_STATIC_FUNCTION(setLastRunPercent) 
	#endif

	#ifndef GEODE_STATICS_setPlaybackMode
		#define GEODE_STATICS_setPlaybackMode
		GEODE_AS_STATIC_FUNCTION(setPlaybackMode) 
	#endif

	#ifndef GEODE_STATICS_setResetQueued
		#define GEODE_STATICS_setResetQueued
		GEODE_AS_STATIC_FUNCTION(setResetQueued) 
	#endif

	#ifndef GEODE_STATICS_setShouldRestartAfterStopped
		#define GEODE_STATICS_setShouldRestartAfterStopped
		GEODE_AS_STATIC_FUNCTION(setShouldRestartAfterStopped) 
	#endif

	#ifndef GEODE_STATICS_setShowingEndLayer
		#define GEODE_STATICS_setShowingEndLayer
		GEODE_AS_STATIC_FUNCTION(setShowingEndLayer) 
	#endif

	#ifndef GEODE_STATICS_setStartPos
		#define GEODE_STATICS_setStartPos
		GEODE_AS_STATIC_FUNCTION(setStartPos) 
	#endif

	#ifndef GEODE_STATICS_setStartPosObject
		#define GEODE_STATICS_setStartPosObject
		GEODE_AS_STATIC_FUNCTION(setStartPosObject) 
	#endif

	#ifndef GEODE_STATICS_setupLevelStart
		#define GEODE_STATICS_setupLevelStart
		GEODE_AS_STATIC_FUNCTION(setupLevelStart) 
	#endif

	#ifndef GEODE_STATICS_setupReplay
		#define GEODE_STATICS_setupReplay
		GEODE_AS_STATIC_FUNCTION(setupReplay) 
	#endif

	#ifndef GEODE_STATICS_shakeCamera
		#define GEODE_STATICS_shakeCamera
		GEODE_AS_STATIC_FUNCTION(shakeCamera) 
	#endif

	#ifndef GEODE_STATICS_shouldBlend
		#define GEODE_STATICS_shouldBlend
		GEODE_AS_STATIC_FUNCTION(shouldBlend) 
	#endif

	#ifndef GEODE_STATICS_showCompleteEffect
		#define GEODE_STATICS_showCompleteEffect
		GEODE_AS_STATIC_FUNCTION(showCompleteEffect) 
	#endif

	#ifndef GEODE_STATICS_showCompleteText
		#define GEODE_STATICS_showCompleteText
		GEODE_AS_STATIC_FUNCTION(showCompleteText) 
	#endif

	#ifndef GEODE_STATICS_showEndLayer
		#define GEODE_STATICS_showEndLayer
		GEODE_AS_STATIC_FUNCTION(showEndLayer) 
	#endif

	#ifndef GEODE_STATICS_showHint
		#define GEODE_STATICS_showHint
		GEODE_AS_STATIC_FUNCTION(showHint) 
	#endif

	#ifndef GEODE_STATICS_showNewBest
		#define GEODE_STATICS_showNewBest
		GEODE_AS_STATIC_FUNCTION(showNewBest) 
	#endif

	#ifndef GEODE_STATICS_showRetryLayer
		#define GEODE_STATICS_showRetryLayer
		GEODE_AS_STATIC_FUNCTION(showRetryLayer) 
	#endif

	#ifndef GEODE_STATICS_showTwoPlayerGuide
		#define GEODE_STATICS_showTwoPlayerGuide
		GEODE_AS_STATIC_FUNCTION(showTwoPlayerGuide) 
	#endif

	#ifndef GEODE_STATICS_sortGroups
		#define GEODE_STATICS_sortGroups
		GEODE_AS_STATIC_FUNCTION(sortGroups) 
	#endif

	#ifndef GEODE_STATICS_spawnCircle
		#define GEODE_STATICS_spawnCircle
		GEODE_AS_STATIC_FUNCTION(spawnCircle) 
	#endif

	#ifndef GEODE_STATICS_spawnFirework
		#define GEODE_STATICS_spawnFirework
		GEODE_AS_STATIC_FUNCTION(spawnFirework) 
	#endif

	#ifndef GEODE_STATICS_spawnGroup
		#define GEODE_STATICS_spawnGroup
		GEODE_AS_STATIC_FUNCTION(spawnGroup) 
	#endif

	#ifndef GEODE_STATICS_spawnParticle
		#define GEODE_STATICS_spawnParticle
		GEODE_AS_STATIC_FUNCTION(spawnParticle) 
	#endif

	#ifndef GEODE_STATICS_spawnPlayer2
		#define GEODE_STATICS_spawnPlayer2
		GEODE_AS_STATIC_FUNCTION(spawnPlayer2) 
	#endif

	#ifndef GEODE_STATICS_startGame
		#define GEODE_STATICS_startGame
		GEODE_AS_STATIC_FUNCTION(startGame) 
	#endif

	#ifndef GEODE_STATICS_startMusic
		#define GEODE_STATICS_startMusic
		GEODE_AS_STATIC_FUNCTION(startMusic) 
	#endif

	#ifndef GEODE_STATICS_startRecording
		#define GEODE_STATICS_startRecording
		GEODE_AS_STATIC_FUNCTION(startRecording) 
	#endif

	#ifndef GEODE_STATICS_startRecordingDelayed
		#define GEODE_STATICS_startRecordingDelayed
		GEODE_AS_STATIC_FUNCTION(startRecordingDelayed) 
	#endif

	#ifndef GEODE_STATICS_stopCameraShake
		#define GEODE_STATICS_stopCameraShake
		GEODE_AS_STATIC_FUNCTION(stopCameraShake) 
	#endif

	#ifndef GEODE_STATICS_stopRecording
		#define GEODE_STATICS_stopRecording
		GEODE_AS_STATIC_FUNCTION(stopRecording) 
	#endif

	#ifndef GEODE_STATICS_storeCheckpoint
		#define GEODE_STATICS_storeCheckpoint
		GEODE_AS_STATIC_FUNCTION(storeCheckpoint) 
	#endif

	#ifndef GEODE_STATICS_switchToFlyMode
		#define GEODE_STATICS_switchToFlyMode
		GEODE_AS_STATIC_FUNCTION(switchToFlyMode) 
	#endif

	#ifndef GEODE_STATICS_switchToRobotMode
		#define GEODE_STATICS_switchToRobotMode
		GEODE_AS_STATIC_FUNCTION(switchToRobotMode) 
	#endif

	#ifndef GEODE_STATICS_switchToRollMode
		#define GEODE_STATICS_switchToRollMode
		GEODE_AS_STATIC_FUNCTION(switchToRollMode) 
	#endif

	#ifndef GEODE_STATICS_timeForXPos
		#define GEODE_STATICS_timeForXPos
		GEODE_AS_STATIC_FUNCTION(timeForXPos) 
	#endif

	#ifndef GEODE_STATICS_timeForXPos2
		#define GEODE_STATICS_timeForXPos2
		GEODE_AS_STATIC_FUNCTION(timeForXPos2) 
	#endif

	#ifndef GEODE_STATICS_toggleDualMode
		#define GEODE_STATICS_toggleDualMode
		GEODE_AS_STATIC_FUNCTION(toggleDualMode) 
	#endif

	#ifndef GEODE_STATICS_toggleFlipped
		#define GEODE_STATICS_toggleFlipped
		GEODE_AS_STATIC_FUNCTION(toggleFlipped) 
	#endif

	#ifndef GEODE_STATICS_toggleGhostEffect
		#define GEODE_STATICS_toggleGhostEffect
		GEODE_AS_STATIC_FUNCTION(toggleGhostEffect) 
	#endif

	#ifndef GEODE_STATICS_toggleGroup
		#define GEODE_STATICS_toggleGroup
		GEODE_AS_STATIC_FUNCTION(toggleGroup) 
	#endif

	#ifndef GEODE_STATICS_togglePracticeMode
		#define GEODE_STATICS_togglePracticeMode
		GEODE_AS_STATIC_FUNCTION(togglePracticeMode) 
	#endif

	#ifndef GEODE_STATICS_tryStartRecord
		#define GEODE_STATICS_tryStartRecord
		GEODE_AS_STATIC_FUNCTION(tryStartRecord) 
	#endif

	#ifndef GEODE_STATICS_unclaimParticle
		#define GEODE_STATICS_unclaimParticle
		GEODE_AS_STATIC_FUNCTION(unclaimParticle) 
	#endif

	#ifndef GEODE_STATICS_unregisterActiveObject
		#define GEODE_STATICS_unregisterActiveObject
		GEODE_AS_STATIC_FUNCTION(unregisterActiveObject) 
	#endif

	#ifndef GEODE_STATICS_unregisterStateObject
		#define GEODE_STATICS_unregisterStateObject
		GEODE_AS_STATIC_FUNCTION(unregisterStateObject) 
	#endif

	#ifndef GEODE_STATICS_updateAttempts
		#define GEODE_STATICS_updateAttempts
		GEODE_AS_STATIC_FUNCTION(updateAttempts) 
	#endif

	#ifndef GEODE_STATICS_updateCamera
		#define GEODE_STATICS_updateCamera
		GEODE_AS_STATIC_FUNCTION(updateCamera) 
	#endif

	#ifndef GEODE_STATICS_updateColor
		#define GEODE_STATICS_updateColor
		GEODE_AS_STATIC_FUNCTION(updateColor) 
	#endif

	#ifndef GEODE_STATICS_updateDualGround
		#define GEODE_STATICS_updateDualGround
		GEODE_AS_STATIC_FUNCTION(updateDualGround) 
	#endif

	#ifndef GEODE_STATICS_updateEffectPositions
		#define GEODE_STATICS_updateEffectPositions
		GEODE_AS_STATIC_FUNCTION(updateEffectPositions) 
	#endif

	#ifndef GEODE_STATICS_updateLevelColors
		#define GEODE_STATICS_updateLevelColors
		GEODE_AS_STATIC_FUNCTION(updateLevelColors) 
	#endif

	#ifndef GEODE_STATICS_updateProgressbar
		#define GEODE_STATICS_updateProgressbar
		GEODE_AS_STATIC_FUNCTION(updateProgressbar) 
	#endif

	#ifndef GEODE_STATICS_updateReplay
		#define GEODE_STATICS_updateReplay
		GEODE_AS_STATIC_FUNCTION(updateReplay) 
	#endif

	#ifndef GEODE_STATICS_updateTimeMod
		#define GEODE_STATICS_updateTimeMod
		GEODE_AS_STATIC_FUNCTION(updateTimeMod) 
	#endif

	#ifndef GEODE_STATICS_updateVisibility
		#define GEODE_STATICS_updateVisibility
		GEODE_AS_STATIC_FUNCTION(updateVisibility) 
	#endif

	#ifndef GEODE_STATICS_visitWithColorFlash
		#define GEODE_STATICS_visitWithColorFlash
		GEODE_AS_STATIC_FUNCTION(visitWithColorFlash) 
	#endif

	#ifndef GEODE_STATICS_willSwitchToMode
		#define GEODE_STATICS_willSwitchToMode
		GEODE_AS_STATIC_FUNCTION(willSwitchToMode) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

	#ifndef GEODE_STATICS_onEnterTransitionDidFinish
		#define GEODE_STATICS_onEnterTransitionDidFinish
		GEODE_AS_STATIC_FUNCTION(onEnterTransitionDidFinish) 
	#endif

	#ifndef GEODE_STATICS_onExit
		#define GEODE_STATICS_onExit
		GEODE_AS_STATIC_FUNCTION(onExit) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_visit
		#define GEODE_STATICS_visit
		GEODE_AS_STATIC_FUNCTION(visit) 
	#endif

	#ifndef GEODE_STATICS_updateTweenAction
		#define GEODE_STATICS_updateTweenAction
		GEODE_AS_STATIC_FUNCTION(updateTweenAction) 
	#endif

	#ifndef GEODE_STATICS_toggleGlitter
		#define GEODE_STATICS_toggleGlitter
		GEODE_AS_STATIC_FUNCTION(toggleGlitter) 
	#endif

	#ifndef GEODE_STATICS_addToSection
		#define GEODE_STATICS_addToSection
		GEODE_AS_STATIC_FUNCTION(addToSection) 
	#endif

	#ifndef GEODE_STATICS_playGravityEffect
		#define GEODE_STATICS_playGravityEffect
		GEODE_AS_STATIC_FUNCTION(playGravityEffect) 
	#endif

	#ifndef GEODE_STATICS_toggleProgressbar
		#define GEODE_STATICS_toggleProgressbar
		GEODE_AS_STATIC_FUNCTION(toggleProgressbar) 
	#endif

	#ifndef GEODE_STATICS_circleWaveWillBeRemoved
		#define GEODE_STATICS_circleWaveWillBeRemoved
		GEODE_AS_STATIC_FUNCTION(circleWaveWillBeRemoved) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addCircle
		#define GEODE_CONCEPT_CHECK_addCircle
		GEODE_CONCEPT_FUNCTION_CHECK(addCircle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addObject
		#define GEODE_CONCEPT_CHECK_addObject
		GEODE_CONCEPT_FUNCTION_CHECK(addObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToGroup
		#define GEODE_CONCEPT_CHECK_addToGroup
		GEODE_CONCEPT_FUNCTION_CHECK(addToGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToSpeedObjects
		#define GEODE_CONCEPT_CHECK_addToSpeedObjects
		GEODE_CONCEPT_FUNCTION_CHECK(addToSpeedObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_animateInDualGround
		#define GEODE_CONCEPT_CHECK_animateInDualGround
		GEODE_CONCEPT_FUNCTION_CHECK(animateInDualGround) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_animateInGround
		#define GEODE_CONCEPT_CHECK_animateInGround
		GEODE_CONCEPT_FUNCTION_CHECK(animateInGround) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_animateOutGround
		#define GEODE_CONCEPT_CHECK_animateOutGround
		GEODE_CONCEPT_FUNCTION_CHECK(animateOutGround) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_animateOutGroundFinished
		#define GEODE_CONCEPT_CHECK_animateOutGroundFinished
		GEODE_CONCEPT_FUNCTION_CHECK(animateOutGroundFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applyEnterEffect
		#define GEODE_CONCEPT_CHECK_applyEnterEffect
		GEODE_CONCEPT_FUNCTION_CHECK(applyEnterEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_calculateColorValues
		#define GEODE_CONCEPT_CHECK_calculateColorValues
		GEODE_CONCEPT_FUNCTION_CHECK(calculateColorValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_cameraMoveX
		#define GEODE_CONCEPT_CHECK_cameraMoveX
		GEODE_CONCEPT_FUNCTION_CHECK(cameraMoveX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_cameraMoveY
		#define GEODE_CONCEPT_CHECK_cameraMoveY
		GEODE_CONCEPT_FUNCTION_CHECK(cameraMoveY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkCollisions
		#define GEODE_CONCEPT_CHECK_checkCollisions
		GEODE_CONCEPT_FUNCTION_CHECK(checkCollisions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkSpawnObjects
		#define GEODE_CONCEPT_CHECK_checkSpawnObjects
		GEODE_CONCEPT_FUNCTION_CHECK(checkSpawnObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_claimParticle
		#define GEODE_CONCEPT_CHECK_claimParticle
		GEODE_CONCEPT_FUNCTION_CHECK(claimParticle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clearPickedUpItems
		#define GEODE_CONCEPT_CHECK_clearPickedUpItems
		GEODE_CONCEPT_FUNCTION_CHECK(clearPickedUpItems) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_colorObject
		#define GEODE_CONCEPT_CHECK_colorObject
		GEODE_CONCEPT_FUNCTION_CHECK(colorObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createCheckpoint
		#define GEODE_CONCEPT_CHECK_createCheckpoint
		GEODE_CONCEPT_FUNCTION_CHECK(createCheckpoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createObjectsFromSetup
		#define GEODE_CONCEPT_CHECK_createObjectsFromSetup
		GEODE_CONCEPT_FUNCTION_CHECK(createObjectsFromSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createParticle
		#define GEODE_CONCEPT_CHECK_createParticle
		GEODE_CONCEPT_FUNCTION_CHECK(createParticle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_delayedResetLevel
		#define GEODE_CONCEPT_CHECK_delayedResetLevel
		GEODE_CONCEPT_FUNCTION_CHECK(delayedResetLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_destroyPlayer
		#define GEODE_CONCEPT_CHECK_destroyPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(destroyPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_enterDualMode
		#define GEODE_CONCEPT_CHECK_enterDualMode
		GEODE_CONCEPT_FUNCTION_CHECK(enterDualMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_exitAirMode
		#define GEODE_CONCEPT_CHECK_exitAirMode
		GEODE_CONCEPT_FUNCTION_CHECK(exitAirMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_exitBirdMode
		#define GEODE_CONCEPT_CHECK_exitBirdMode
		GEODE_CONCEPT_FUNCTION_CHECK(exitBirdMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_exitDartMode
		#define GEODE_CONCEPT_CHECK_exitDartMode
		GEODE_CONCEPT_FUNCTION_CHECK(exitDartMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_exitFlyMode
		#define GEODE_CONCEPT_CHECK_exitFlyMode
		GEODE_CONCEPT_FUNCTION_CHECK(exitFlyMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_exitRobotMode
		#define GEODE_CONCEPT_CHECK_exitRobotMode
		GEODE_CONCEPT_FUNCTION_CHECK(exitRobotMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_exitRollMode
		#define GEODE_CONCEPT_CHECK_exitRollMode
		GEODE_CONCEPT_FUNCTION_CHECK(exitRollMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_flipFinished
		#define GEODE_CONCEPT_CHECK_flipFinished
		GEODE_CONCEPT_FUNCTION_CHECK(flipFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_flipGravity
		#define GEODE_CONCEPT_CHECK_flipGravity
		GEODE_CONCEPT_FUNCTION_CHECK(flipGravity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_flipObjects
		#define GEODE_CONCEPT_CHECK_flipObjects
		GEODE_CONCEPT_FUNCTION_CHECK(flipObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fullReset
		#define GEODE_CONCEPT_CHECK_fullReset
		GEODE_CONCEPT_FUNCTION_CHECK(fullReset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAttempts
		#define GEODE_CONCEPT_CHECK_getAttempts
		GEODE_CONCEPT_FUNCTION_CHECK(getAttempts) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBigActionContainer
		#define GEODE_CONCEPT_CHECK_getBigActionContainer
		GEODE_CONCEPT_FUNCTION_CHECK(getBigActionContainer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCameraPortal
		#define GEODE_CONCEPT_CHECK_getCameraPortal
		GEODE_CONCEPT_FUNCTION_CHECK(getCameraPortal) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCameraPos
		#define GEODE_CONCEPT_CHECK_getCameraPos
		GEODE_CONCEPT_FUNCTION_CHECK(getCameraPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCleanReset
		#define GEODE_CONCEPT_CHECK_getCleanReset
		GEODE_CONCEPT_FUNCTION_CHECK(getCleanReset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getClkTimer
		#define GEODE_CONCEPT_CHECK_getClkTimer
		GEODE_CONCEPT_FUNCTION_CHECK(getClkTimer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getColorManager
		#define GEODE_CONCEPT_CHECK_getColorManager
		GEODE_CONCEPT_FUNCTION_CHECK(getColorManager) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDidAwardStars
		#define GEODE_CONCEPT_CHECK_getDidAwardStars
		GEODE_CONCEPT_FUNCTION_CHECK(getDidAwardStars) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDidJump
		#define GEODE_CONCEPT_CHECK_getDidJump
		GEODE_CONCEPT_FUNCTION_CHECK(getDidJump) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDualMode
		#define GEODE_CONCEPT_CHECK_getDualMode
		GEODE_CONCEPT_FUNCTION_CHECK(getDualMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDualModeCamera
		#define GEODE_CONCEPT_CHECK_getDualModeCamera
		GEODE_CONCEPT_FUNCTION_CHECK(getDualModeCamera) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEndTriggered
		#define GEODE_CONCEPT_CHECK_getEndTriggered
		GEODE_CONCEPT_FUNCTION_CHECK(getEndTriggered) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFlipValue
		#define GEODE_CONCEPT_CHECK_getFlipValue
		GEODE_CONCEPT_FUNCTION_CHECK(getFlipValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getForcePlaybackControl
		#define GEODE_CONCEPT_CHECK_getForcePlaybackControl
		GEODE_CONCEPT_FUNCTION_CHECK(getForcePlaybackControl) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGroundHeightForMode
		#define GEODE_CONCEPT_CHECK_getGroundHeightForMode
		GEODE_CONCEPT_FUNCTION_CHECK(getGroundHeightForMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGroup
		#define GEODE_CONCEPT_CHECK_getGroup
		GEODE_CONCEPT_FUNCTION_CHECK(getGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIsFlipped
		#define GEODE_CONCEPT_CHECK_getIsFlipped
		GEODE_CONCEPT_FUNCTION_CHECK(getIsFlipped) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIsResetting
		#define GEODE_CONCEPT_CHECK_getIsResetting
		GEODE_CONCEPT_FUNCTION_CHECK(getIsResetting) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getJumps
		#define GEODE_CONCEPT_CHECK_getJumps
		GEODE_CONCEPT_FUNCTION_CHECK(getJumps) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLastCheckpoint
		#define GEODE_CONCEPT_CHECK_getLastCheckpoint
		GEODE_CONCEPT_FUNCTION_CHECK(getLastCheckpoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLastRunPercent
		#define GEODE_CONCEPT_CHECK_getLastRunPercent
		GEODE_CONCEPT_FUNCTION_CHECK(getLastRunPercent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLevel
		#define GEODE_CONCEPT_CHECK_getLevel
		GEODE_CONCEPT_FUNCTION_CHECK(getLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMaxPortalY
		#define GEODE_CONCEPT_CHECK_getMaxPortalY
		GEODE_CONCEPT_FUNCTION_CHECK(getMaxPortalY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMinPortalY
		#define GEODE_CONCEPT_CHECK_getMinPortalY
		GEODE_CONCEPT_FUNCTION_CHECK(getMinPortalY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOtherPlayer
		#define GEODE_CONCEPT_CHECK_getOtherPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(getOtherPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getParticleKey
		#define GEODE_CONCEPT_CHECK_getParticleKey
		GEODE_CONCEPT_FUNCTION_CHECK(getParticleKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getParticleKey2
		#define GEODE_CONCEPT_CHECK_getParticleKey2
		GEODE_CONCEPT_FUNCTION_CHECK(getParticleKey2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPlaybackMode
		#define GEODE_CONCEPT_CHECK_getPlaybackMode
		GEODE_CONCEPT_FUNCTION_CHECK(getPlaybackMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPracticeMode
		#define GEODE_CONCEPT_CHECK_getPracticeMode
		GEODE_CONCEPT_FUNCTION_CHECK(getPracticeMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRelativeMod
		#define GEODE_CONCEPT_CHECK_getRelativeMod
		GEODE_CONCEPT_FUNCTION_CHECK(getRelativeMod) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getResetFlipObjects
		#define GEODE_CONCEPT_CHECK_getResetFlipObjects
		GEODE_CONCEPT_FUNCTION_CHECK(getResetFlipObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getResetQueued
		#define GEODE_CONCEPT_CHECK_getResetQueued
		GEODE_CONCEPT_FUNCTION_CHECK(getResetQueued) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getResetTriggered
		#define GEODE_CONCEPT_CHECK_getResetTriggered
		GEODE_CONCEPT_FUNCTION_CHECK(getResetTriggered) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getShouldRestartAfterStopped
		#define GEODE_CONCEPT_CHECK_getShouldRestartAfterStopped
		GEODE_CONCEPT_FUNCTION_CHECK(getShouldRestartAfterStopped) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getShowingEndLayer
		#define GEODE_CONCEPT_CHECK_getShowingEndLayer
		GEODE_CONCEPT_FUNCTION_CHECK(getShowingEndLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStartPos
		#define GEODE_CONCEPT_CHECK_getStartPos
		GEODE_CONCEPT_FUNCTION_CHECK(getStartPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTempMilliTime
		#define GEODE_CONCEPT_CHECK_getTempMilliTime
		GEODE_CONCEPT_FUNCTION_CHECK(getTempMilliTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTestMode
		#define GEODE_CONCEPT_CHECK_getTestMode
		GEODE_CONCEPT_FUNCTION_CHECK(getTestMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUILayer
		#define GEODE_CONCEPT_CHECK_getUILayer
		GEODE_CONCEPT_FUNCTION_CHECK(getUILayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_gravityEffectFinished
		#define GEODE_CONCEPT_CHECK_gravityEffectFinished
		GEODE_CONCEPT_FUNCTION_CHECK(gravityEffectFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasItem
		#define GEODE_CONCEPT_CHECK_hasItem
		GEODE_CONCEPT_FUNCTION_CHECK(hasItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasUniqueCoin
		#define GEODE_CONCEPT_CHECK_hasUniqueCoin
		GEODE_CONCEPT_FUNCTION_CHECK(hasUniqueCoin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_incrementJumps
		#define GEODE_CONCEPT_CHECK_incrementJumps
		GEODE_CONCEPT_FUNCTION_CHECK(incrementJumps) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isFlipping
		#define GEODE_CONCEPT_CHECK_isFlipping
		GEODE_CONCEPT_FUNCTION_CHECK(isFlipping) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_levelComplete
		#define GEODE_CONCEPT_CHECK_levelComplete
		GEODE_CONCEPT_FUNCTION_CHECK(levelComplete) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_lightningFlash
		#define GEODE_CONCEPT_CHECK_lightningFlash
		GEODE_CONCEPT_FUNCTION_CHECK(lightningFlash) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadDefaultColors
		#define GEODE_CONCEPT_CHECK_loadDefaultColors
		GEODE_CONCEPT_FUNCTION_CHECK(loadDefaultColors) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadLastCheckpoint
		#define GEODE_CONCEPT_CHECK_loadLastCheckpoint
		GEODE_CONCEPT_FUNCTION_CHECK(loadLastCheckpoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_markCheckpoint
		#define GEODE_CONCEPT_CHECK_markCheckpoint
		GEODE_CONCEPT_FUNCTION_CHECK(markCheckpoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_moveCameraToPos
		#define GEODE_CONCEPT_CHECK_moveCameraToPos
		GEODE_CONCEPT_FUNCTION_CHECK(moveCameraToPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_objectIntersectsCircle
		#define GEODE_CONCEPT_CHECK_objectIntersectsCircle
		GEODE_CONCEPT_FUNCTION_CHECK(objectIntersectsCircle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onQuit
		#define GEODE_CONCEPT_CHECK_onQuit
		GEODE_CONCEPT_FUNCTION_CHECK(onQuit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pauseGame
		#define GEODE_CONCEPT_CHECK_pauseGame
		GEODE_CONCEPT_FUNCTION_CHECK(pauseGame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pickupItem
		#define GEODE_CONCEPT_CHECK_pickupItem
		GEODE_CONCEPT_FUNCTION_CHECK(pickupItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playEndAnimationToPos
		#define GEODE_CONCEPT_CHECK_playEndAnimationToPos
		GEODE_CONCEPT_FUNCTION_CHECK(playEndAnimationToPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playerWillSwitchMode
		#define GEODE_CONCEPT_CHECK_playerWillSwitchMode
		GEODE_CONCEPT_FUNCTION_CHECK(playerWillSwitchMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playExitDualEffect
		#define GEODE_CONCEPT_CHECK_playExitDualEffect
		GEODE_CONCEPT_FUNCTION_CHECK(playExitDualEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playFlashEffect
		#define GEODE_CONCEPT_CHECK_playFlashEffect
		GEODE_CONCEPT_FUNCTION_CHECK(playFlashEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playSpeedParticle
		#define GEODE_CONCEPT_CHECK_playSpeedParticle
		GEODE_CONCEPT_FUNCTION_CHECK(playSpeedParticle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_preloadActions
		#define GEODE_CONCEPT_CHECK_preloadActions
		GEODE_CONCEPT_FUNCTION_CHECK(preloadActions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_preloadMoveActions
		#define GEODE_CONCEPT_CHECK_preloadMoveActions
		GEODE_CONCEPT_FUNCTION_CHECK(preloadMoveActions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processItems
		#define GEODE_CONCEPT_CHECK_processItems
		GEODE_CONCEPT_FUNCTION_CHECK(processItems) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processLoadedMoveActions
		#define GEODE_CONCEPT_CHECK_processLoadedMoveActions
		GEODE_CONCEPT_FUNCTION_CHECK(processLoadedMoveActions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processMoveActionsStep
		#define GEODE_CONCEPT_CHECK_processMoveActionsStep
		GEODE_CONCEPT_FUNCTION_CHECK(processMoveActionsStep) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pushButton
		#define GEODE_CONCEPT_CHECK_pushButton
		GEODE_CONCEPT_FUNCTION_CHECK(pushButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_recordAction
		#define GEODE_CONCEPT_CHECK_recordAction
		GEODE_CONCEPT_FUNCTION_CHECK(recordAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerActiveObject
		#define GEODE_CONCEPT_CHECK_registerActiveObject
		GEODE_CONCEPT_FUNCTION_CHECK(registerActiveObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerStateObject
		#define GEODE_CONCEPT_CHECK_registerStateObject
		GEODE_CONCEPT_FUNCTION_CHECK(registerStateObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_releaseButton
		#define GEODE_CONCEPT_CHECK_releaseButton
		GEODE_CONCEPT_FUNCTION_CHECK(releaseButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeAllObjects
		#define GEODE_CONCEPT_CHECK_removeAllObjects
		GEODE_CONCEPT_FUNCTION_CHECK(removeAllObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeFromGroup
		#define GEODE_CONCEPT_CHECK_removeFromGroup
		GEODE_CONCEPT_FUNCTION_CHECK(removeFromGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeLastCheckpoint
		#define GEODE_CONCEPT_CHECK_removeLastCheckpoint
		GEODE_CONCEPT_FUNCTION_CHECK(removeLastCheckpoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeObjectFromSection
		#define GEODE_CONCEPT_CHECK_removeObjectFromSection
		GEODE_CONCEPT_FUNCTION_CHECK(removeObjectFromSection) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removePlayer2
		#define GEODE_CONCEPT_CHECK_removePlayer2
		GEODE_CONCEPT_FUNCTION_CHECK(removePlayer2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reorderObjectSection
		#define GEODE_CONCEPT_CHECK_reorderObjectSection
		GEODE_CONCEPT_FUNCTION_CHECK(reorderObjectSection) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetLevel
		#define GEODE_CONCEPT_CHECK_resetLevel
		GEODE_CONCEPT_FUNCTION_CHECK(resetLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resume
		#define GEODE_CONCEPT_CHECK_resume
		GEODE_CONCEPT_FUNCTION_CHECK(resume) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resumeAndRestart
		#define GEODE_CONCEPT_CHECK_resumeAndRestart
		GEODE_CONCEPT_FUNCTION_CHECK(resumeAndRestart) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveRecordAction
		#define GEODE_CONCEPT_CHECK_saveRecordAction
		GEODE_CONCEPT_FUNCTION_CHECK(saveRecordAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scene
		#define GEODE_CONCEPT_CHECK_scene
		GEODE_CONCEPT_FUNCTION_CHECK(scene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sectionForPos
		#define GEODE_CONCEPT_CHECK_sectionForPos
		GEODE_CONCEPT_FUNCTION_CHECK(sectionForPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setActiveEnterEffect
		#define GEODE_CONCEPT_CHECK_setActiveEnterEffect
		GEODE_CONCEPT_FUNCTION_CHECK(setActiveEnterEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCleanReset
		#define GEODE_CONCEPT_CHECK_setCleanReset
		GEODE_CONCEPT_FUNCTION_CHECK(setCleanReset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setEndTriggered
		#define GEODE_CONCEPT_CHECK_setEndTriggered
		GEODE_CONCEPT_FUNCTION_CHECK(setEndTriggered) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setForcePlaybackControl
		#define GEODE_CONCEPT_CHECK_setForcePlaybackControl
		GEODE_CONCEPT_FUNCTION_CHECK(setForcePlaybackControl) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIsResetting
		#define GEODE_CONCEPT_CHECK_setIsResetting
		GEODE_CONCEPT_FUNCTION_CHECK(setIsResetting) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLastRunPercent
		#define GEODE_CONCEPT_CHECK_setLastRunPercent
		GEODE_CONCEPT_FUNCTION_CHECK(setLastRunPercent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPlaybackMode
		#define GEODE_CONCEPT_CHECK_setPlaybackMode
		GEODE_CONCEPT_FUNCTION_CHECK(setPlaybackMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setResetQueued
		#define GEODE_CONCEPT_CHECK_setResetQueued
		GEODE_CONCEPT_FUNCTION_CHECK(setResetQueued) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setShouldRestartAfterStopped
		#define GEODE_CONCEPT_CHECK_setShouldRestartAfterStopped
		GEODE_CONCEPT_FUNCTION_CHECK(setShouldRestartAfterStopped) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setShowingEndLayer
		#define GEODE_CONCEPT_CHECK_setShowingEndLayer
		GEODE_CONCEPT_FUNCTION_CHECK(setShowingEndLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStartPos
		#define GEODE_CONCEPT_CHECK_setStartPos
		GEODE_CONCEPT_FUNCTION_CHECK(setStartPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStartPosObject
		#define GEODE_CONCEPT_CHECK_setStartPosObject
		GEODE_CONCEPT_FUNCTION_CHECK(setStartPosObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupLevelStart
		#define GEODE_CONCEPT_CHECK_setupLevelStart
		GEODE_CONCEPT_FUNCTION_CHECK(setupLevelStart) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupReplay
		#define GEODE_CONCEPT_CHECK_setupReplay
		GEODE_CONCEPT_FUNCTION_CHECK(setupReplay) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shakeCamera
		#define GEODE_CONCEPT_CHECK_shakeCamera
		GEODE_CONCEPT_FUNCTION_CHECK(shakeCamera) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldBlend
		#define GEODE_CONCEPT_CHECK_shouldBlend
		GEODE_CONCEPT_FUNCTION_CHECK(shouldBlend) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showCompleteEffect
		#define GEODE_CONCEPT_CHECK_showCompleteEffect
		GEODE_CONCEPT_FUNCTION_CHECK(showCompleteEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showCompleteText
		#define GEODE_CONCEPT_CHECK_showCompleteText
		GEODE_CONCEPT_FUNCTION_CHECK(showCompleteText) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showEndLayer
		#define GEODE_CONCEPT_CHECK_showEndLayer
		GEODE_CONCEPT_FUNCTION_CHECK(showEndLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showHint
		#define GEODE_CONCEPT_CHECK_showHint
		GEODE_CONCEPT_FUNCTION_CHECK(showHint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showNewBest
		#define GEODE_CONCEPT_CHECK_showNewBest
		GEODE_CONCEPT_FUNCTION_CHECK(showNewBest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showRetryLayer
		#define GEODE_CONCEPT_CHECK_showRetryLayer
		GEODE_CONCEPT_FUNCTION_CHECK(showRetryLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showTwoPlayerGuide
		#define GEODE_CONCEPT_CHECK_showTwoPlayerGuide
		GEODE_CONCEPT_FUNCTION_CHECK(showTwoPlayerGuide) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sortGroups
		#define GEODE_CONCEPT_CHECK_sortGroups
		GEODE_CONCEPT_FUNCTION_CHECK(sortGroups) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spawnCircle
		#define GEODE_CONCEPT_CHECK_spawnCircle
		GEODE_CONCEPT_FUNCTION_CHECK(spawnCircle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spawnFirework
		#define GEODE_CONCEPT_CHECK_spawnFirework
		GEODE_CONCEPT_FUNCTION_CHECK(spawnFirework) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spawnGroup
		#define GEODE_CONCEPT_CHECK_spawnGroup
		GEODE_CONCEPT_FUNCTION_CHECK(spawnGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spawnParticle
		#define GEODE_CONCEPT_CHECK_spawnParticle
		GEODE_CONCEPT_FUNCTION_CHECK(spawnParticle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spawnPlayer2
		#define GEODE_CONCEPT_CHECK_spawnPlayer2
		GEODE_CONCEPT_FUNCTION_CHECK(spawnPlayer2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_startGame
		#define GEODE_CONCEPT_CHECK_startGame
		GEODE_CONCEPT_FUNCTION_CHECK(startGame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_startMusic
		#define GEODE_CONCEPT_CHECK_startMusic
		GEODE_CONCEPT_FUNCTION_CHECK(startMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_startRecording
		#define GEODE_CONCEPT_CHECK_startRecording
		GEODE_CONCEPT_FUNCTION_CHECK(startRecording) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_startRecordingDelayed
		#define GEODE_CONCEPT_CHECK_startRecordingDelayed
		GEODE_CONCEPT_FUNCTION_CHECK(startRecordingDelayed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopCameraShake
		#define GEODE_CONCEPT_CHECK_stopCameraShake
		GEODE_CONCEPT_FUNCTION_CHECK(stopCameraShake) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopRecording
		#define GEODE_CONCEPT_CHECK_stopRecording
		GEODE_CONCEPT_FUNCTION_CHECK(stopRecording) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeCheckpoint
		#define GEODE_CONCEPT_CHECK_storeCheckpoint
		GEODE_CONCEPT_FUNCTION_CHECK(storeCheckpoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_switchToFlyMode
		#define GEODE_CONCEPT_CHECK_switchToFlyMode
		GEODE_CONCEPT_FUNCTION_CHECK(switchToFlyMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_switchToRobotMode
		#define GEODE_CONCEPT_CHECK_switchToRobotMode
		GEODE_CONCEPT_FUNCTION_CHECK(switchToRobotMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_switchToRollMode
		#define GEODE_CONCEPT_CHECK_switchToRollMode
		GEODE_CONCEPT_FUNCTION_CHECK(switchToRollMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_timeForXPos
		#define GEODE_CONCEPT_CHECK_timeForXPos
		GEODE_CONCEPT_FUNCTION_CHECK(timeForXPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_timeForXPos2
		#define GEODE_CONCEPT_CHECK_timeForXPos2
		GEODE_CONCEPT_FUNCTION_CHECK(timeForXPos2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleDualMode
		#define GEODE_CONCEPT_CHECK_toggleDualMode
		GEODE_CONCEPT_FUNCTION_CHECK(toggleDualMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleFlipped
		#define GEODE_CONCEPT_CHECK_toggleFlipped
		GEODE_CONCEPT_FUNCTION_CHECK(toggleFlipped) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleGhostEffect
		#define GEODE_CONCEPT_CHECK_toggleGhostEffect
		GEODE_CONCEPT_FUNCTION_CHECK(toggleGhostEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleGroup
		#define GEODE_CONCEPT_CHECK_toggleGroup
		GEODE_CONCEPT_FUNCTION_CHECK(toggleGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_togglePracticeMode
		#define GEODE_CONCEPT_CHECK_togglePracticeMode
		GEODE_CONCEPT_FUNCTION_CHECK(togglePracticeMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryStartRecord
		#define GEODE_CONCEPT_CHECK_tryStartRecord
		GEODE_CONCEPT_FUNCTION_CHECK(tryStartRecord) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unclaimParticle
		#define GEODE_CONCEPT_CHECK_unclaimParticle
		GEODE_CONCEPT_FUNCTION_CHECK(unclaimParticle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unregisterActiveObject
		#define GEODE_CONCEPT_CHECK_unregisterActiveObject
		GEODE_CONCEPT_FUNCTION_CHECK(unregisterActiveObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unregisterStateObject
		#define GEODE_CONCEPT_CHECK_unregisterStateObject
		GEODE_CONCEPT_FUNCTION_CHECK(unregisterStateObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateAttempts
		#define GEODE_CONCEPT_CHECK_updateAttempts
		GEODE_CONCEPT_FUNCTION_CHECK(updateAttempts) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCamera
		#define GEODE_CONCEPT_CHECK_updateCamera
		GEODE_CONCEPT_FUNCTION_CHECK(updateCamera) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateColor
		#define GEODE_CONCEPT_CHECK_updateColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDualGround
		#define GEODE_CONCEPT_CHECK_updateDualGround
		GEODE_CONCEPT_FUNCTION_CHECK(updateDualGround) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateEffectPositions
		#define GEODE_CONCEPT_CHECK_updateEffectPositions
		GEODE_CONCEPT_FUNCTION_CHECK(updateEffectPositions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLevelColors
		#define GEODE_CONCEPT_CHECK_updateLevelColors
		GEODE_CONCEPT_FUNCTION_CHECK(updateLevelColors) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateProgressbar
		#define GEODE_CONCEPT_CHECK_updateProgressbar
		GEODE_CONCEPT_FUNCTION_CHECK(updateProgressbar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateReplay
		#define GEODE_CONCEPT_CHECK_updateReplay
		GEODE_CONCEPT_FUNCTION_CHECK(updateReplay) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTimeMod
		#define GEODE_CONCEPT_CHECK_updateTimeMod
		GEODE_CONCEPT_FUNCTION_CHECK(updateTimeMod) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateVisibility
		#define GEODE_CONCEPT_CHECK_updateVisibility
		GEODE_CONCEPT_FUNCTION_CHECK(updateVisibility) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_visitWithColorFlash
		#define GEODE_CONCEPT_CHECK_visitWithColorFlash
		GEODE_CONCEPT_FUNCTION_CHECK(visitWithColorFlash) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_willSwitchToMode
		#define GEODE_CONCEPT_CHECK_willSwitchToMode
		GEODE_CONCEPT_FUNCTION_CHECK(willSwitchToMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_update
		#define GEODE_CONCEPT_CHECK_update
		GEODE_CONCEPT_FUNCTION_CHECK(update) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEnterTransitionDidFinish
		#define GEODE_CONCEPT_CHECK_onEnterTransitionDidFinish
		GEODE_CONCEPT_FUNCTION_CHECK(onEnterTransitionDidFinish) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onExit
		#define GEODE_CONCEPT_CHECK_onExit
		GEODE_CONCEPT_FUNCTION_CHECK(onExit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_visit
		#define GEODE_CONCEPT_CHECK_visit
		GEODE_CONCEPT_FUNCTION_CHECK(visit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTweenAction
		#define GEODE_CONCEPT_CHECK_updateTweenAction
		GEODE_CONCEPT_FUNCTION_CHECK(updateTweenAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleGlitter
		#define GEODE_CONCEPT_CHECK_toggleGlitter
		GEODE_CONCEPT_FUNCTION_CHECK(toggleGlitter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToSection
		#define GEODE_CONCEPT_CHECK_addToSection
		GEODE_CONCEPT_FUNCTION_CHECK(addToSection) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playGravityEffect
		#define GEODE_CONCEPT_CHECK_playGravityEffect
		GEODE_CONCEPT_FUNCTION_CHECK(playGravityEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleProgressbar
		#define GEODE_CONCEPT_CHECK_toggleProgressbar
		GEODE_CONCEPT_FUNCTION_CHECK(toggleProgressbar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_circleWaveWillBeRemoved
		#define GEODE_CONCEPT_CHECK_circleWaveWillBeRemoved
		GEODE_CONCEPT_FUNCTION_CHECK(circleWaveWillBeRemoved) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, PlayLayer> : ModifyBase<ModifyDerive<Der, PlayLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, PlayLayer>>;
		using ModifyBase<ModifyDerive<Der, PlayLayer>>::ModifyBase;
		using Base = PlayLayer;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, create, GJGameLevel*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, addCircle, CCCircleWave*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, addObject, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, addToGroup, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, addToSpeedObjects, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, animateInDualGround, GameObject*, float, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, animateInGround, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, animateOutGround, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, animateOutGroundFinished, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, applyEnterEffect, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, calculateColorValues, EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, cameraMoveX, float, float, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, cameraMoveY, float, float, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, checkCollisions, PlayerObject*, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, checkSpawnObjects, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, claimParticle, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, clearPickedUpItems, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, colorObject, int, cocos2d::ccColor3B)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, createCheckpoint, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, createObjectsFromSetup, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, createParticle, int, char const*, int, cocos2d::tCCPositionType)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, delayedResetLevel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, destroyPlayer, PlayerObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, enterDualMode, GameObject*, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, exitAirMode, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, exitBirdMode, PlayerObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, exitDartMode, PlayerObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, exitFlyMode, PlayerObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, exitRobotMode, PlayerObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, exitRollMode, PlayerObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, flipFinished, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, flipGravity, PlayerObject*, bool, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, flipObjects, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, fullReset, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, getAttempts, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, getBigActionContainer, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, getCameraPortal, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, getCameraPos, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, getCleanReset, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, getClkTimer, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, getColorManager, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, getDidAwardStars, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, getDidJump, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, getDualMode, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, getDualModeCamera, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, getEndTriggered, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, getFlipValue, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, getForcePlaybackControl, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, getGroundHeightForMode, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, getGroup, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, getIsFlipped, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, getIsResetting, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, getJumps, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, getLastCheckpoint, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, getLastRunPercent, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, getLevel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, getMaxPortalY, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, getMinPortalY, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, getOtherPlayer, PlayerObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, getParticleKey, int, char const*, int, cocos2d::tCCPositionType)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, getParticleKey2, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, getPlaybackMode, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, getPracticeMode, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, getRelativeMod, cocos2d::CCPoint, float, float, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, getResetFlipObjects, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, getResetQueued, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, getResetTriggered, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, getShouldRestartAfterStopped, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, getShowingEndLayer, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, getStartPos, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, getTempMilliTime, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, getTestMode, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, getUILayer, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, gravityEffectFinished, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, hasItem, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, hasUniqueCoin, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, incrementJumps, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, init, GJGameLevel*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, isFlipping, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, levelComplete, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, lightningFlash, cocos2d::CCPoint, cocos2d::ccColor3B)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, lightningFlash, cocos2d::CCPoint, cocos2d::CCPoint, cocos2d::ccColor3B, float, float, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, loadDefaultColors, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, loadLastCheckpoint, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, markCheckpoint, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, moveCameraToPos, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, objectIntersectsCircle, GameObject*, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, onQuit, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, pauseGame, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, pickupItem, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, playEndAnimationToPos, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, playerWillSwitchMode, PlayerObject*, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, playExitDualEffect, PlayerObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, playFlashEffect, float, int, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, playSpeedParticle, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, preloadActions, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, preloadMoveActions, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, processItems, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, processLoadedMoveActions, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, processMoveActionsStep, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, pushButton, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, recordAction, bool, PlayerObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, registerActiveObject, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, registerStateObject, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, releaseButton, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, removeAllObjects, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, removeFromGroup, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, removeLastCheckpoint, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, removeObjectFromSection, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, removePlayer2, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, reorderObjectSection, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, resetLevel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, resume, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, resumeAndRestart, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, saveRecordAction, bool, PlayerObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, scene, GJGameLevel*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, sectionForPos, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, setActiveEnterEffect, EnterEffect)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, setCleanReset, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, setEndTriggered, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, setForcePlaybackControl, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, setIsResetting, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, setLastRunPercent, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, setPlaybackMode, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, setResetQueued, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, setShouldRestartAfterStopped, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, setShowingEndLayer, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, setStartPos, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, setStartPosObject, StartPosObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, setupLevelStart, LevelSettingsObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, setupReplay, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, shakeCamera, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, shouldBlend, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, showCompleteEffect, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, showCompleteText, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, showEndLayer, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, showHint, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, showNewBest, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, showRetryLayer, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, showTwoPlayerGuide, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, sortGroups, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, spawnCircle, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, spawnFirework, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, spawnGroup, int, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, spawnGroup, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, spawnParticle, char const*, int, cocos2d::tCCPositionType, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, spawnPlayer2, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, startGame, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, startMusic, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, startRecording, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, startRecordingDelayed, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, stopCameraShake, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, stopRecording, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, storeCheckpoint, CheckpointObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, switchToFlyMode, PlayerObject*, GameObject*, bool, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, switchToRobotMode, PlayerObject*, GameObject*, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, switchToRollMode, PlayerObject*, GameObject*, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, timeForXPos, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, timeForXPos2, float, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, toggleDualMode, GameObject*, bool, PlayerObject*, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, toggleFlipped, bool, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, toggleGhostEffect, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, toggleGroup, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, togglePracticeMode, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, tryStartRecord, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, unclaimParticle, char const*, cocos2d::CCParticleSystemQuad*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, unregisterActiveObject, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, unregisterStateObject, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, updateAttempts, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, updateCamera, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, updateColor, cocos2d::ccColor3B, float, int, bool, float, cocos2d::ccHSVValue, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, updateDualGround, PlayerObject*, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, updateEffectPositions, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, updateLevelColors, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, updateProgressbar, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, updateReplay, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, updateTimeMod, float, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, updateVisibility, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, visitWithColorFlash, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, willSwitchToMode, int, PlayerObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, update, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, onEnterTransitionDidFinish, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, onExit, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, draw, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, visit, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, updateTweenAction, float, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, toggleGlitter, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, addToSection, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, playGravityEffect, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, toggleProgressbar, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, circleWaveWillBeRemoved, CCCircleWave*)
		}
	};
}
