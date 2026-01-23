#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/PlayerObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_activateStreak
		#define GEODE_STATICS_activateStreak
		GEODE_AS_STATIC_FUNCTION(activateStreak) 
	#endif

	#ifndef GEODE_STATICS_addAllParticles
		#define GEODE_STATICS_addAllParticles
		GEODE_AS_STATIC_FUNCTION(addAllParticles) 
	#endif

	#ifndef GEODE_STATICS_boostPlayer
		#define GEODE_STATICS_boostPlayer
		GEODE_AS_STATIC_FUNCTION(boostPlayer) 
	#endif

	#ifndef GEODE_STATICS_buttonDown
		#define GEODE_STATICS_buttonDown
		GEODE_AS_STATIC_FUNCTION(buttonDown) 
	#endif

	#ifndef GEODE_STATICS_checkSnapJumpToObject
		#define GEODE_STATICS_checkSnapJumpToObject
		GEODE_AS_STATIC_FUNCTION(checkSnapJumpToObject) 
	#endif

	#ifndef GEODE_STATICS_collidedWithObject
		#define GEODE_STATICS_collidedWithObject
		GEODE_AS_STATIC_FUNCTION(collidedWithObject) 
	#endif

	#ifndef GEODE_STATICS_collidedWithSlope
		#define GEODE_STATICS_collidedWithSlope
		GEODE_AS_STATIC_FUNCTION(collidedWithSlope) 
	#endif

	#ifndef GEODE_STATICS_convertToClosestRotation
		#define GEODE_STATICS_convertToClosestRotation
		GEODE_AS_STATIC_FUNCTION(convertToClosestRotation) 
	#endif

	#ifndef GEODE_STATICS_copyAttributes
		#define GEODE_STATICS_copyAttributes
		GEODE_AS_STATIC_FUNCTION(copyAttributes) 
	#endif

	#ifndef GEODE_STATICS_deactivateParticle
		#define GEODE_STATICS_deactivateParticle
		GEODE_AS_STATIC_FUNCTION(deactivateParticle) 
	#endif

	#ifndef GEODE_STATICS_deactivateStreak
		#define GEODE_STATICS_deactivateStreak
		GEODE_AS_STATIC_FUNCTION(deactivateStreak) 
	#endif

	#ifndef GEODE_STATICS_fadeOutStreak2
		#define GEODE_STATICS_fadeOutStreak2
		GEODE_AS_STATIC_FUNCTION(fadeOutStreak2) 
	#endif

	#ifndef GEODE_STATICS_flipGravity
		#define GEODE_STATICS_flipGravity
		GEODE_AS_STATIC_FUNCTION(flipGravity) 
	#endif

	#ifndef GEODE_STATICS_flipMod
		#define GEODE_STATICS_flipMod
		GEODE_AS_STATIC_FUNCTION(flipMod) 
	#endif

	#ifndef GEODE_STATICS_getAudioScale
		#define GEODE_STATICS_getAudioScale
		GEODE_AS_STATIC_FUNCTION(getAudioScale) 
	#endif

	#ifndef GEODE_STATICS_getBirdMode
		#define GEODE_STATICS_getBirdMode
		GEODE_AS_STATIC_FUNCTION(getBirdMode) 
	#endif

	#ifndef GEODE_STATICS_getCanJump
		#define GEODE_STATICS_getCanJump
		GEODE_AS_STATIC_FUNCTION(getCanJump) 
	#endif

	#ifndef GEODE_STATICS_getClkTimer
		#define GEODE_STATICS_getClkTimer
		GEODE_AS_STATIC_FUNCTION(getClkTimer) 
	#endif

	#ifndef GEODE_STATICS_getCurrentIcon
		#define GEODE_STATICS_getCurrentIcon
		GEODE_AS_STATIC_FUNCTION(getCurrentIcon) 
	#endif

	#ifndef GEODE_STATICS_getDartMode
		#define GEODE_STATICS_getDartMode
		GEODE_AS_STATIC_FUNCTION(getDartMode) 
	#endif

	#ifndef GEODE_STATICS_getDidStick
		#define GEODE_STATICS_getDidStick
		GEODE_AS_STATIC_FUNCTION(getDidStick) 
	#endif

	#ifndef GEODE_STATICS_getDisableEffects
		#define GEODE_STATICS_getDisableEffects
		GEODE_AS_STATIC_FUNCTION(getDisableEffects) 
	#endif

	#ifndef GEODE_STATICS_getDualMode
		#define GEODE_STATICS_getDualMode
		GEODE_AS_STATIC_FUNCTION(getDualMode) 
	#endif

	#ifndef GEODE_STATICS_getFlyMode
		#define GEODE_STATICS_getFlyMode
		GEODE_AS_STATIC_FUNCTION(getFlyMode) 
	#endif

	#ifndef GEODE_STATICS_getGameLayer
		#define GEODE_STATICS_getGameLayer
		GEODE_AS_STATIC_FUNCTION(getGameLayer) 
	#endif

	#ifndef GEODE_STATICS_getGlowColor1
		#define GEODE_STATICS_getGlowColor1
		GEODE_AS_STATIC_FUNCTION(getGlowColor1) 
	#endif

	#ifndef GEODE_STATICS_getGlowColor2
		#define GEODE_STATICS_getGlowColor2
		GEODE_AS_STATIC_FUNCTION(getGlowColor2) 
	#endif

	#ifndef GEODE_STATICS_getGravityFlipped
		#define GEODE_STATICS_getGravityFlipped
		GEODE_AS_STATIC_FUNCTION(getGravityFlipped) 
	#endif

	#ifndef GEODE_STATICS_getGroundHeight
		#define GEODE_STATICS_getGroundHeight
		GEODE_AS_STATIC_FUNCTION(getGroundHeight) 
	#endif

	#ifndef GEODE_STATICS_getHasJumped
		#define GEODE_STATICS_getHasJumped
		GEODE_AS_STATIC_FUNCTION(getHasJumped) 
	#endif

	#ifndef GEODE_STATICS_getHasRingJumped
		#define GEODE_STATICS_getHasRingJumped
		GEODE_AS_STATIC_FUNCTION(getHasRingJumped) 
	#endif

	#ifndef GEODE_STATICS_getIsDead
		#define GEODE_STATICS_getIsDead
		GEODE_AS_STATIC_FUNCTION(getIsDead) 
	#endif

	#ifndef GEODE_STATICS_getIsJumping
		#define GEODE_STATICS_getIsJumping
		GEODE_AS_STATIC_FUNCTION(getIsJumping) 
	#endif

	#ifndef GEODE_STATICS_getIsLocked
		#define GEODE_STATICS_getIsLocked
		GEODE_AS_STATIC_FUNCTION(getIsLocked) 
	#endif

	#ifndef GEODE_STATICS_getIsSecondPlayer
		#define GEODE_STATICS_getIsSecondPlayer
		GEODE_AS_STATIC_FUNCTION(getIsSecondPlayer) 
	#endif

	#ifndef GEODE_STATICS_getLastGroundObject
		#define GEODE_STATICS_getLastGroundObject
		GEODE_AS_STATIC_FUNCTION(getLastGroundObject) 
	#endif

	#ifndef GEODE_STATICS_getLastGroundPos
		#define GEODE_STATICS_getLastGroundPos
		GEODE_AS_STATIC_FUNCTION(getLastGroundPos) 
	#endif

	#ifndef GEODE_STATICS_getLastP
		#define GEODE_STATICS_getLastP
		GEODE_AS_STATIC_FUNCTION(getLastP) 
	#endif

	#ifndef GEODE_STATICS_getLastYVel
		#define GEODE_STATICS_getLastYVel
		GEODE_AS_STATIC_FUNCTION(getLastYVel) 
	#endif

	#ifndef GEODE_STATICS_getModifiedSlopeYVel
		#define GEODE_STATICS_getModifiedSlopeYVel
		GEODE_AS_STATIC_FUNCTION(getModifiedSlopeYVel) 
	#endif

	#ifndef GEODE_STATICS_getOnGround
		#define GEODE_STATICS_getOnGround
		GEODE_AS_STATIC_FUNCTION(getOnGround) 
	#endif

	#ifndef GEODE_STATICS_getOnSlope
		#define GEODE_STATICS_getOnSlope
		GEODE_AS_STATIC_FUNCTION(getOnSlope) 
	#endif

	#ifndef GEODE_STATICS_getPlayerScale
		#define GEODE_STATICS_getPlayerScale
		GEODE_AS_STATIC_FUNCTION(getPlayerScale) 
	#endif

	#ifndef GEODE_STATICS_getPlayerXVelocity
		#define GEODE_STATICS_getPlayerXVelocity
		GEODE_AS_STATIC_FUNCTION(getPlayerXVelocity) 
	#endif

	#ifndef GEODE_STATICS_getPortalObject
		#define GEODE_STATICS_getPortalObject
		GEODE_AS_STATIC_FUNCTION(getPortalObject) 
	#endif

	#ifndef GEODE_STATICS_getPortalP
		#define GEODE_STATICS_getPortalP
		GEODE_AS_STATIC_FUNCTION(getPortalP) 
	#endif

	#ifndef GEODE_STATICS_getRealPlayerPos
		#define GEODE_STATICS_getRealPlayerPos
		GEODE_AS_STATIC_FUNCTION(getRealPlayerPos) 
	#endif

	#ifndef GEODE_STATICS_getRobotMode
		#define GEODE_STATICS_getRobotMode
		GEODE_AS_STATIC_FUNCTION(getRobotMode) 
	#endif

	#ifndef GEODE_STATICS_getRollMode
		#define GEODE_STATICS_getRollMode
		GEODE_AS_STATIC_FUNCTION(getRollMode) 
	#endif

	#ifndef GEODE_STATICS_getSecondColor
		#define GEODE_STATICS_getSecondColor
		GEODE_AS_STATIC_FUNCTION(getSecondColor) 
	#endif

	#ifndef GEODE_STATICS_getSlopeYVel
		#define GEODE_STATICS_getSlopeYVel
		GEODE_AS_STATIC_FUNCTION(getSlopeYVel) 
	#endif

	#ifndef GEODE_STATICS_getTimeMod
		#define GEODE_STATICS_getTimeMod
		GEODE_AS_STATIC_FUNCTION(getTimeMod) 
	#endif

	#ifndef GEODE_STATICS_getTookDamage
		#define GEODE_STATICS_getTookDamage
		GEODE_AS_STATIC_FUNCTION(getTookDamage) 
	#endif

	#ifndef GEODE_STATICS_getTouchedRing
		#define GEODE_STATICS_getTouchedRing
		GEODE_AS_STATIC_FUNCTION(getTouchedRing) 
	#endif

	#ifndef GEODE_STATICS_getUpKeyDown
		#define GEODE_STATICS_getUpKeyDown
		GEODE_AS_STATIC_FUNCTION(getUpKeyDown) 
	#endif

	#ifndef GEODE_STATICS_getUpKeyPressed
		#define GEODE_STATICS_getUpKeyPressed
		GEODE_AS_STATIC_FUNCTION(getUpKeyPressed) 
	#endif

	#ifndef GEODE_STATICS_getWasOnSlope
		#define GEODE_STATICS_getWasOnSlope
		GEODE_AS_STATIC_FUNCTION(getWasOnSlope) 
	#endif

	#ifndef GEODE_STATICS_getYVelocity
		#define GEODE_STATICS_getYVelocity
		GEODE_AS_STATIC_FUNCTION(getYVelocity) 
	#endif

	#ifndef GEODE_STATICS_gravityDown
		#define GEODE_STATICS_gravityDown
		GEODE_AS_STATIC_FUNCTION(gravityDown) 
	#endif

	#ifndef GEODE_STATICS_gravityUp
		#define GEODE_STATICS_gravityUp
		GEODE_AS_STATIC_FUNCTION(gravityUp) 
	#endif

	#ifndef GEODE_STATICS_hardFlipGravity
		#define GEODE_STATICS_hardFlipGravity
		GEODE_AS_STATIC_FUNCTION(hardFlipGravity) 
	#endif

	#ifndef GEODE_STATICS_hitGround
		#define GEODE_STATICS_hitGround
		GEODE_AS_STATIC_FUNCTION(hitGround) 
	#endif

	#ifndef GEODE_STATICS_incrementJumps
		#define GEODE_STATICS_incrementJumps
		GEODE_AS_STATIC_FUNCTION(incrementJumps) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_isBoostValid
		#define GEODE_STATICS_isBoostValid
		GEODE_AS_STATIC_FUNCTION(isBoostValid) 
	#endif

	#ifndef GEODE_STATICS_isFlying
		#define GEODE_STATICS_isFlying
		GEODE_AS_STATIC_FUNCTION(isFlying) 
	#endif

	#ifndef GEODE_STATICS_isSafeFlip
		#define GEODE_STATICS_isSafeFlip
		GEODE_AS_STATIC_FUNCTION(isSafeFlip) 
	#endif

	#ifndef GEODE_STATICS_isSafeMode
		#define GEODE_STATICS_isSafeMode
		GEODE_AS_STATIC_FUNCTION(isSafeMode) 
	#endif

	#ifndef GEODE_STATICS_levelFlipFinished
		#define GEODE_STATICS_levelFlipFinished
		GEODE_AS_STATIC_FUNCTION(levelFlipFinished) 
	#endif

	#ifndef GEODE_STATICS_levelFlipping
		#define GEODE_STATICS_levelFlipping
		GEODE_AS_STATIC_FUNCTION(levelFlipping) 
	#endif

	#ifndef GEODE_STATICS_levelWillFlip
		#define GEODE_STATICS_levelWillFlip
		GEODE_AS_STATIC_FUNCTION(levelWillFlip) 
	#endif

	#ifndef GEODE_STATICS_loadFromCheckpoint
		#define GEODE_STATICS_loadFromCheckpoint
		GEODE_AS_STATIC_FUNCTION(loadFromCheckpoint) 
	#endif

	#ifndef GEODE_STATICS_lockPlayer
		#define GEODE_STATICS_lockPlayer
		GEODE_AS_STATIC_FUNCTION(lockPlayer) 
	#endif

	#ifndef GEODE_STATICS_logValues
		#define GEODE_STATICS_logValues
		GEODE_AS_STATIC_FUNCTION(logValues) 
	#endif

	#ifndef GEODE_STATICS_placeStreakPoint
		#define GEODE_STATICS_placeStreakPoint
		GEODE_AS_STATIC_FUNCTION(placeStreakPoint) 
	#endif

	#ifndef GEODE_STATICS_playBurstEffect
		#define GEODE_STATICS_playBurstEffect
		GEODE_AS_STATIC_FUNCTION(playBurstEffect) 
	#endif

	#ifndef GEODE_STATICS_playerDestroyed
		#define GEODE_STATICS_playerDestroyed
		GEODE_AS_STATIC_FUNCTION(playerDestroyed) 
	#endif

	#ifndef GEODE_STATICS_playerIsFalling
		#define GEODE_STATICS_playerIsFalling
		GEODE_AS_STATIC_FUNCTION(playerIsFalling) 
	#endif

	#ifndef GEODE_STATICS_playerTeleported
		#define GEODE_STATICS_playerTeleported
		GEODE_AS_STATIC_FUNCTION(playerTeleported) 
	#endif

	#ifndef GEODE_STATICS_postCollision
		#define GEODE_STATICS_postCollision
		GEODE_AS_STATIC_FUNCTION(postCollision) 
	#endif

	#ifndef GEODE_STATICS_preCollision
		#define GEODE_STATICS_preCollision
		GEODE_AS_STATIC_FUNCTION(preCollision) 
	#endif

	#ifndef GEODE_STATICS_preSlopeCollision
		#define GEODE_STATICS_preSlopeCollision
		GEODE_AS_STATIC_FUNCTION(preSlopeCollision) 
	#endif

	#ifndef GEODE_STATICS_propellPlayer
		#define GEODE_STATICS_propellPlayer
		GEODE_AS_STATIC_FUNCTION(propellPlayer) 
	#endif

	#ifndef GEODE_STATICS_pushButton
		#define GEODE_STATICS_pushButton
		GEODE_AS_STATIC_FUNCTION(pushButton) 
	#endif

	#ifndef GEODE_STATICS_pushDown
		#define GEODE_STATICS_pushDown
		GEODE_AS_STATIC_FUNCTION(pushDown) 
	#endif

	#ifndef GEODE_STATICS_pushPlayer
		#define GEODE_STATICS_pushPlayer
		GEODE_AS_STATIC_FUNCTION(pushPlayer) 
	#endif

	#ifndef GEODE_STATICS_releaseButton
		#define GEODE_STATICS_releaseButton
		GEODE_AS_STATIC_FUNCTION(releaseButton) 
	#endif

	#ifndef GEODE_STATICS_removeAllParticles
		#define GEODE_STATICS_removeAllParticles
		GEODE_AS_STATIC_FUNCTION(removeAllParticles) 
	#endif

	#ifndef GEODE_STATICS_removePendingCheckpoint
		#define GEODE_STATICS_removePendingCheckpoint
		GEODE_AS_STATIC_FUNCTION(removePendingCheckpoint) 
	#endif

	#ifndef GEODE_STATICS_resetAllParticles
		#define GEODE_STATICS_resetAllParticles
		GEODE_AS_STATIC_FUNCTION(resetAllParticles) 
	#endif

	#ifndef GEODE_STATICS_resetCollisionLog
		#define GEODE_STATICS_resetCollisionLog
		GEODE_AS_STATIC_FUNCTION(resetCollisionLog) 
	#endif

	#ifndef GEODE_STATICS_resetPlayerIcon
		#define GEODE_STATICS_resetPlayerIcon
		GEODE_AS_STATIC_FUNCTION(resetPlayerIcon) 
	#endif

	#ifndef GEODE_STATICS_resetStreak
		#define GEODE_STATICS_resetStreak
		GEODE_AS_STATIC_FUNCTION(resetStreak) 
	#endif

	#ifndef GEODE_STATICS_ringJump
		#define GEODE_STATICS_ringJump
		GEODE_AS_STATIC_FUNCTION(ringJump) 
	#endif

	#ifndef GEODE_STATICS_runBallRotation
		#define GEODE_STATICS_runBallRotation
		GEODE_AS_STATIC_FUNCTION(runBallRotation) 
	#endif

	#ifndef GEODE_STATICS_runBallRotation2
		#define GEODE_STATICS_runBallRotation2
		GEODE_AS_STATIC_FUNCTION(runBallRotation2) 
	#endif

	#ifndef GEODE_STATICS_runNormalRotation
		#define GEODE_STATICS_runNormalRotation
		GEODE_AS_STATIC_FUNCTION(runNormalRotation) 
	#endif

	#ifndef GEODE_STATICS_runRotateAction
		#define GEODE_STATICS_runRotateAction
		GEODE_AS_STATIC_FUNCTION(runRotateAction) 
	#endif

	#ifndef GEODE_STATICS_saveToCheckpoint
		#define GEODE_STATICS_saveToCheckpoint
		GEODE_AS_STATIC_FUNCTION(saveToCheckpoint) 
	#endif

	#ifndef GEODE_STATICS_setAudioScale
		#define GEODE_STATICS_setAudioScale
		GEODE_AS_STATIC_FUNCTION(setAudioScale) 
	#endif

	#ifndef GEODE_STATICS_setClkTimer
		#define GEODE_STATICS_setClkTimer
		GEODE_AS_STATIC_FUNCTION(setClkTimer) 
	#endif

	#ifndef GEODE_STATICS_setDisableEffects
		#define GEODE_STATICS_setDisableEffects
		GEODE_AS_STATIC_FUNCTION(setDisableEffects) 
	#endif

	#ifndef GEODE_STATICS_setDualMode
		#define GEODE_STATICS_setDualMode
		GEODE_AS_STATIC_FUNCTION(setDualMode) 
	#endif

	#ifndef GEODE_STATICS_setGameLayer
		#define GEODE_STATICS_setGameLayer
		GEODE_AS_STATIC_FUNCTION(setGameLayer) 
	#endif

	#ifndef GEODE_STATICS_setGroundHeight
		#define GEODE_STATICS_setGroundHeight
		GEODE_AS_STATIC_FUNCTION(setGroundHeight) 
	#endif

	#ifndef GEODE_STATICS_setIsSecondPlayer
		#define GEODE_STATICS_setIsSecondPlayer
		GEODE_AS_STATIC_FUNCTION(setIsSecondPlayer) 
	#endif

	#ifndef GEODE_STATICS_setLastGroundPos
		#define GEODE_STATICS_setLastGroundPos
		GEODE_AS_STATIC_FUNCTION(setLastGroundPos) 
	#endif

	#ifndef GEODE_STATICS_setLastP
		#define GEODE_STATICS_setLastP
		GEODE_AS_STATIC_FUNCTION(setLastP) 
	#endif

	#ifndef GEODE_STATICS_setOnGround
		#define GEODE_STATICS_setOnGround
		GEODE_AS_STATIC_FUNCTION(setOnGround) 
	#endif

	#ifndef GEODE_STATICS_setOnSlope
		#define GEODE_STATICS_setOnSlope
		GEODE_AS_STATIC_FUNCTION(setOnSlope) 
	#endif

	#ifndef GEODE_STATICS_setPortalObject
		#define GEODE_STATICS_setPortalObject
		GEODE_AS_STATIC_FUNCTION(setPortalObject) 
	#endif

	#ifndef GEODE_STATICS_setPortalP
		#define GEODE_STATICS_setPortalP
		GEODE_AS_STATIC_FUNCTION(setPortalP) 
	#endif

	#ifndef GEODE_STATICS_setRealPlayerPos
		#define GEODE_STATICS_setRealPlayerPos
		GEODE_AS_STATIC_FUNCTION(setRealPlayerPos) 
	#endif

	#ifndef GEODE_STATICS_setSecondColor
		#define GEODE_STATICS_setSecondColor
		GEODE_AS_STATIC_FUNCTION(setSecondColor) 
	#endif

	#ifndef GEODE_STATICS_setTookDamage
		#define GEODE_STATICS_setTookDamage
		GEODE_AS_STATIC_FUNCTION(setTookDamage) 
	#endif

	#ifndef GEODE_STATICS_setTouchedRing
		#define GEODE_STATICS_setTouchedRing
		GEODE_AS_STATIC_FUNCTION(setTouchedRing) 
	#endif

	#ifndef GEODE_STATICS_setupStreak
		#define GEODE_STATICS_setupStreak
		GEODE_AS_STATIC_FUNCTION(setupStreak) 
	#endif

	#ifndef GEODE_STATICS_setWasOnSlope
		#define GEODE_STATICS_setWasOnSlope
		GEODE_AS_STATIC_FUNCTION(setWasOnSlope) 
	#endif

	#ifndef GEODE_STATICS_spawnCircle
		#define GEODE_STATICS_spawnCircle
		GEODE_AS_STATIC_FUNCTION(spawnCircle) 
	#endif

	#ifndef GEODE_STATICS_spawnDualCircle
		#define GEODE_STATICS_spawnDualCircle
		GEODE_AS_STATIC_FUNCTION(spawnDualCircle) 
	#endif

	#ifndef GEODE_STATICS_spawnFromPlayer
		#define GEODE_STATICS_spawnFromPlayer
		GEODE_AS_STATIC_FUNCTION(spawnFromPlayer) 
	#endif

	#ifndef GEODE_STATICS_spawnPortalCircle
		#define GEODE_STATICS_spawnPortalCircle
		GEODE_AS_STATIC_FUNCTION(spawnPortalCircle) 
	#endif

	#ifndef GEODE_STATICS_spawnScaleCircle
		#define GEODE_STATICS_spawnScaleCircle
		GEODE_AS_STATIC_FUNCTION(spawnScaleCircle) 
	#endif

	#ifndef GEODE_STATICS_specialGroundHit
		#define GEODE_STATICS_specialGroundHit
		GEODE_AS_STATIC_FUNCTION(specialGroundHit) 
	#endif

	#ifndef GEODE_STATICS_speedDown
		#define GEODE_STATICS_speedDown
		GEODE_AS_STATIC_FUNCTION(speedDown) 
	#endif

	#ifndef GEODE_STATICS_speedUp
		#define GEODE_STATICS_speedUp
		GEODE_AS_STATIC_FUNCTION(speedUp) 
	#endif

	#ifndef GEODE_STATICS_stopBurstEffect
		#define GEODE_STATICS_stopBurstEffect
		GEODE_AS_STATIC_FUNCTION(stopBurstEffect) 
	#endif

	#ifndef GEODE_STATICS_stopRotation
		#define GEODE_STATICS_stopRotation
		GEODE_AS_STATIC_FUNCTION(stopRotation) 
	#endif

	#ifndef GEODE_STATICS_storeCollision
		#define GEODE_STATICS_storeCollision
		GEODE_AS_STATIC_FUNCTION(storeCollision) 
	#endif

	#ifndef GEODE_STATICS_switchedToMode
		#define GEODE_STATICS_switchedToMode
		GEODE_AS_STATIC_FUNCTION(switchedToMode) 
	#endif

	#ifndef GEODE_STATICS_testForMoving
		#define GEODE_STATICS_testForMoving
		GEODE_AS_STATIC_FUNCTION(testForMoving) 
	#endif

	#ifndef GEODE_STATICS_toggleBirdMode
		#define GEODE_STATICS_toggleBirdMode
		GEODE_AS_STATIC_FUNCTION(toggleBirdMode) 
	#endif

	#ifndef GEODE_STATICS_toggleDartMode
		#define GEODE_STATICS_toggleDartMode
		GEODE_AS_STATIC_FUNCTION(toggleDartMode) 
	#endif

	#ifndef GEODE_STATICS_toggleFlyMode
		#define GEODE_STATICS_toggleFlyMode
		GEODE_AS_STATIC_FUNCTION(toggleFlyMode) 
	#endif

	#ifndef GEODE_STATICS_toggleGhostEffect
		#define GEODE_STATICS_toggleGhostEffect
		GEODE_AS_STATIC_FUNCTION(toggleGhostEffect) 
	#endif

	#ifndef GEODE_STATICS_togglePlayerScale
		#define GEODE_STATICS_togglePlayerScale
		GEODE_AS_STATIC_FUNCTION(togglePlayerScale) 
	#endif

	#ifndef GEODE_STATICS_toggleRobotMode
		#define GEODE_STATICS_toggleRobotMode
		GEODE_AS_STATIC_FUNCTION(toggleRobotMode) 
	#endif

	#ifndef GEODE_STATICS_toggleRollMode
		#define GEODE_STATICS_toggleRollMode
		GEODE_AS_STATIC_FUNCTION(toggleRollMode) 
	#endif

	#ifndef GEODE_STATICS_touchedObject
		#define GEODE_STATICS_touchedObject
		GEODE_AS_STATIC_FUNCTION(touchedObject) 
	#endif

	#ifndef GEODE_STATICS_tryPlaceCheckpoint
		#define GEODE_STATICS_tryPlaceCheckpoint
		GEODE_AS_STATIC_FUNCTION(tryPlaceCheckpoint) 
	#endif

	#ifndef GEODE_STATICS_updateCheckpointTest
		#define GEODE_STATICS_updateCheckpointTest
		GEODE_AS_STATIC_FUNCTION(updateCheckpointTest) 
	#endif

	#ifndef GEODE_STATICS_updateCollide
		#define GEODE_STATICS_updateCollide
		GEODE_AS_STATIC_FUNCTION(updateCollide) 
	#endif

	#ifndef GEODE_STATICS_updateCollideBottom
		#define GEODE_STATICS_updateCollideBottom
		GEODE_AS_STATIC_FUNCTION(updateCollideBottom) 
	#endif

	#ifndef GEODE_STATICS_updateCollideTop
		#define GEODE_STATICS_updateCollideTop
		GEODE_AS_STATIC_FUNCTION(updateCollideTop) 
	#endif

	#ifndef GEODE_STATICS_updateGlowColor
		#define GEODE_STATICS_updateGlowColor
		GEODE_AS_STATIC_FUNCTION(updateGlowColor) 
	#endif

	#ifndef GEODE_STATICS_updateJump
		#define GEODE_STATICS_updateJump
		GEODE_AS_STATIC_FUNCTION(updateJump) 
	#endif

	#ifndef GEODE_STATICS_updatePlayerBirdFrame
		#define GEODE_STATICS_updatePlayerBirdFrame
		GEODE_AS_STATIC_FUNCTION(updatePlayerBirdFrame) 
	#endif

	#ifndef GEODE_STATICS_updatePlayerDartFrame
		#define GEODE_STATICS_updatePlayerDartFrame
		GEODE_AS_STATIC_FUNCTION(updatePlayerDartFrame) 
	#endif

	#ifndef GEODE_STATICS_updatePlayerFrame
		#define GEODE_STATICS_updatePlayerFrame
		GEODE_AS_STATIC_FUNCTION(updatePlayerFrame) 
	#endif

	#ifndef GEODE_STATICS_updatePlayerGlow
		#define GEODE_STATICS_updatePlayerGlow
		GEODE_AS_STATIC_FUNCTION(updatePlayerGlow) 
	#endif

	#ifndef GEODE_STATICS_updatePlayerRobotFrame
		#define GEODE_STATICS_updatePlayerRobotFrame
		GEODE_AS_STATIC_FUNCTION(updatePlayerRobotFrame) 
	#endif

	#ifndef GEODE_STATICS_updatePlayerRollFrame
		#define GEODE_STATICS_updatePlayerRollFrame
		GEODE_AS_STATIC_FUNCTION(updatePlayerRollFrame) 
	#endif

	#ifndef GEODE_STATICS_updatePlayerScale
		#define GEODE_STATICS_updatePlayerScale
		GEODE_AS_STATIC_FUNCTION(updatePlayerScale) 
	#endif

	#ifndef GEODE_STATICS_updatePlayerShipFrame
		#define GEODE_STATICS_updatePlayerShipFrame
		GEODE_AS_STATIC_FUNCTION(updatePlayerShipFrame) 
	#endif

	#ifndef GEODE_STATICS_updateRobotAnimationSpeed
		#define GEODE_STATICS_updateRobotAnimationSpeed
		GEODE_AS_STATIC_FUNCTION(updateRobotAnimationSpeed) 
	#endif

	#ifndef GEODE_STATICS_updateRotation
		#define GEODE_STATICS_updateRotation
		GEODE_AS_STATIC_FUNCTION(updateRotation) 
	#endif

	#ifndef GEODE_STATICS_updateShipRotation
		#define GEODE_STATICS_updateShipRotation
		GEODE_AS_STATIC_FUNCTION(updateShipRotation) 
	#endif

	#ifndef GEODE_STATICS_updateSlopeRotation
		#define GEODE_STATICS_updateSlopeRotation
		GEODE_AS_STATIC_FUNCTION(updateSlopeRotation) 
	#endif

	#ifndef GEODE_STATICS_updateSlopeYVelocity
		#define GEODE_STATICS_updateSlopeYVelocity
		GEODE_AS_STATIC_FUNCTION(updateSlopeYVelocity) 
	#endif

	#ifndef GEODE_STATICS_updateTimeMod
		#define GEODE_STATICS_updateTimeMod
		GEODE_AS_STATIC_FUNCTION(updateTimeMod) 
	#endif

	#ifndef GEODE_STATICS_yStartDown
		#define GEODE_STATICS_yStartDown
		GEODE_AS_STATIC_FUNCTION(yStartDown) 
	#endif

	#ifndef GEODE_STATICS_yStartUp
		#define GEODE_STATICS_yStartUp
		GEODE_AS_STATIC_FUNCTION(yStartUp) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

	#ifndef GEODE_STATICS_setScaleX
		#define GEODE_STATICS_setScaleX
		GEODE_AS_STATIC_FUNCTION(setScaleX) 
	#endif

	#ifndef GEODE_STATICS_setScaleY
		#define GEODE_STATICS_setScaleY
		GEODE_AS_STATIC_FUNCTION(setScaleY) 
	#endif

	#ifndef GEODE_STATICS_setScale
		#define GEODE_STATICS_setScale
		GEODE_AS_STATIC_FUNCTION(setScale) 
	#endif

	#ifndef GEODE_STATICS_setPosition
		#define GEODE_STATICS_setPosition
		GEODE_AS_STATIC_FUNCTION(setPosition) 
	#endif

	#ifndef GEODE_STATICS_setVisible
		#define GEODE_STATICS_setVisible
		GEODE_AS_STATIC_FUNCTION(setVisible) 
	#endif

	#ifndef GEODE_STATICS_setRotation
		#define GEODE_STATICS_setRotation
		GEODE_AS_STATIC_FUNCTION(setRotation) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_setColor
		#define GEODE_STATICS_setColor
		GEODE_AS_STATIC_FUNCTION(setColor) 
	#endif

	#ifndef GEODE_STATICS_setFlipX
		#define GEODE_STATICS_setFlipX
		GEODE_AS_STATIC_FUNCTION(setFlipX) 
	#endif

	#ifndef GEODE_STATICS_setFlipY
		#define GEODE_STATICS_setFlipY
		GEODE_AS_STATIC_FUNCTION(setFlipY) 
	#endif

	#ifndef GEODE_STATICS_resetObject
		#define GEODE_STATICS_resetObject
		GEODE_AS_STATIC_FUNCTION(resetObject) 
	#endif

	#ifndef GEODE_STATICS_getRealPosition
		#define GEODE_STATICS_getRealPosition
		GEODE_AS_STATIC_FUNCTION(getRealPosition) 
	#endif

	#ifndef GEODE_STATICS_getOrientedBox
		#define GEODE_STATICS_getOrientedBox
		GEODE_AS_STATIC_FUNCTION(getOrientedBox) 
	#endif

	#ifndef GEODE_STATICS_animationFinished
		#define GEODE_STATICS_animationFinished
		GEODE_AS_STATIC_FUNCTION(animationFinished) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activateStreak
		#define GEODE_CONCEPT_CHECK_activateStreak
		GEODE_CONCEPT_FUNCTION_CHECK(activateStreak) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addAllParticles
		#define GEODE_CONCEPT_CHECK_addAllParticles
		GEODE_CONCEPT_FUNCTION_CHECK(addAllParticles) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_boostPlayer
		#define GEODE_CONCEPT_CHECK_boostPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(boostPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_buttonDown
		#define GEODE_CONCEPT_CHECK_buttonDown
		GEODE_CONCEPT_FUNCTION_CHECK(buttonDown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkSnapJumpToObject
		#define GEODE_CONCEPT_CHECK_checkSnapJumpToObject
		GEODE_CONCEPT_FUNCTION_CHECK(checkSnapJumpToObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_collidedWithObject
		#define GEODE_CONCEPT_CHECK_collidedWithObject
		GEODE_CONCEPT_FUNCTION_CHECK(collidedWithObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_collidedWithSlope
		#define GEODE_CONCEPT_CHECK_collidedWithSlope
		GEODE_CONCEPT_FUNCTION_CHECK(collidedWithSlope) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_convertToClosestRotation
		#define GEODE_CONCEPT_CHECK_convertToClosestRotation
		GEODE_CONCEPT_FUNCTION_CHECK(convertToClosestRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_copyAttributes
		#define GEODE_CONCEPT_CHECK_copyAttributes
		GEODE_CONCEPT_FUNCTION_CHECK(copyAttributes) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deactivateParticle
		#define GEODE_CONCEPT_CHECK_deactivateParticle
		GEODE_CONCEPT_FUNCTION_CHECK(deactivateParticle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deactivateStreak
		#define GEODE_CONCEPT_CHECK_deactivateStreak
		GEODE_CONCEPT_FUNCTION_CHECK(deactivateStreak) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fadeOutStreak2
		#define GEODE_CONCEPT_CHECK_fadeOutStreak2
		GEODE_CONCEPT_FUNCTION_CHECK(fadeOutStreak2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_flipGravity
		#define GEODE_CONCEPT_CHECK_flipGravity
		GEODE_CONCEPT_FUNCTION_CHECK(flipGravity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_flipMod
		#define GEODE_CONCEPT_CHECK_flipMod
		GEODE_CONCEPT_FUNCTION_CHECK(flipMod) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAudioScale
		#define GEODE_CONCEPT_CHECK_getAudioScale
		GEODE_CONCEPT_FUNCTION_CHECK(getAudioScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBirdMode
		#define GEODE_CONCEPT_CHECK_getBirdMode
		GEODE_CONCEPT_FUNCTION_CHECK(getBirdMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCanJump
		#define GEODE_CONCEPT_CHECK_getCanJump
		GEODE_CONCEPT_FUNCTION_CHECK(getCanJump) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getClkTimer
		#define GEODE_CONCEPT_CHECK_getClkTimer
		GEODE_CONCEPT_FUNCTION_CHECK(getClkTimer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCurrentIcon
		#define GEODE_CONCEPT_CHECK_getCurrentIcon
		GEODE_CONCEPT_FUNCTION_CHECK(getCurrentIcon) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDartMode
		#define GEODE_CONCEPT_CHECK_getDartMode
		GEODE_CONCEPT_FUNCTION_CHECK(getDartMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDidStick
		#define GEODE_CONCEPT_CHECK_getDidStick
		GEODE_CONCEPT_FUNCTION_CHECK(getDidStick) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDisableEffects
		#define GEODE_CONCEPT_CHECK_getDisableEffects
		GEODE_CONCEPT_FUNCTION_CHECK(getDisableEffects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDualMode
		#define GEODE_CONCEPT_CHECK_getDualMode
		GEODE_CONCEPT_FUNCTION_CHECK(getDualMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFlyMode
		#define GEODE_CONCEPT_CHECK_getFlyMode
		GEODE_CONCEPT_FUNCTION_CHECK(getFlyMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGameLayer
		#define GEODE_CONCEPT_CHECK_getGameLayer
		GEODE_CONCEPT_FUNCTION_CHECK(getGameLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGlowColor1
		#define GEODE_CONCEPT_CHECK_getGlowColor1
		GEODE_CONCEPT_FUNCTION_CHECK(getGlowColor1) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGlowColor2
		#define GEODE_CONCEPT_CHECK_getGlowColor2
		GEODE_CONCEPT_FUNCTION_CHECK(getGlowColor2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGravityFlipped
		#define GEODE_CONCEPT_CHECK_getGravityFlipped
		GEODE_CONCEPT_FUNCTION_CHECK(getGravityFlipped) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGroundHeight
		#define GEODE_CONCEPT_CHECK_getGroundHeight
		GEODE_CONCEPT_FUNCTION_CHECK(getGroundHeight) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getHasJumped
		#define GEODE_CONCEPT_CHECK_getHasJumped
		GEODE_CONCEPT_FUNCTION_CHECK(getHasJumped) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getHasRingJumped
		#define GEODE_CONCEPT_CHECK_getHasRingJumped
		GEODE_CONCEPT_FUNCTION_CHECK(getHasRingJumped) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIsDead
		#define GEODE_CONCEPT_CHECK_getIsDead
		GEODE_CONCEPT_FUNCTION_CHECK(getIsDead) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIsJumping
		#define GEODE_CONCEPT_CHECK_getIsJumping
		GEODE_CONCEPT_FUNCTION_CHECK(getIsJumping) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIsLocked
		#define GEODE_CONCEPT_CHECK_getIsLocked
		GEODE_CONCEPT_FUNCTION_CHECK(getIsLocked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIsSecondPlayer
		#define GEODE_CONCEPT_CHECK_getIsSecondPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(getIsSecondPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLastGroundObject
		#define GEODE_CONCEPT_CHECK_getLastGroundObject
		GEODE_CONCEPT_FUNCTION_CHECK(getLastGroundObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLastGroundPos
		#define GEODE_CONCEPT_CHECK_getLastGroundPos
		GEODE_CONCEPT_FUNCTION_CHECK(getLastGroundPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLastP
		#define GEODE_CONCEPT_CHECK_getLastP
		GEODE_CONCEPT_FUNCTION_CHECK(getLastP) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLastYVel
		#define GEODE_CONCEPT_CHECK_getLastYVel
		GEODE_CONCEPT_FUNCTION_CHECK(getLastYVel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getModifiedSlopeYVel
		#define GEODE_CONCEPT_CHECK_getModifiedSlopeYVel
		GEODE_CONCEPT_FUNCTION_CHECK(getModifiedSlopeYVel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOnGround
		#define GEODE_CONCEPT_CHECK_getOnGround
		GEODE_CONCEPT_FUNCTION_CHECK(getOnGround) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOnSlope
		#define GEODE_CONCEPT_CHECK_getOnSlope
		GEODE_CONCEPT_FUNCTION_CHECK(getOnSlope) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPlayerScale
		#define GEODE_CONCEPT_CHECK_getPlayerScale
		GEODE_CONCEPT_FUNCTION_CHECK(getPlayerScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPlayerXVelocity
		#define GEODE_CONCEPT_CHECK_getPlayerXVelocity
		GEODE_CONCEPT_FUNCTION_CHECK(getPlayerXVelocity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPortalObject
		#define GEODE_CONCEPT_CHECK_getPortalObject
		GEODE_CONCEPT_FUNCTION_CHECK(getPortalObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPortalP
		#define GEODE_CONCEPT_CHECK_getPortalP
		GEODE_CONCEPT_FUNCTION_CHECK(getPortalP) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRealPlayerPos
		#define GEODE_CONCEPT_CHECK_getRealPlayerPos
		GEODE_CONCEPT_FUNCTION_CHECK(getRealPlayerPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRobotMode
		#define GEODE_CONCEPT_CHECK_getRobotMode
		GEODE_CONCEPT_FUNCTION_CHECK(getRobotMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRollMode
		#define GEODE_CONCEPT_CHECK_getRollMode
		GEODE_CONCEPT_FUNCTION_CHECK(getRollMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSecondColor
		#define GEODE_CONCEPT_CHECK_getSecondColor
		GEODE_CONCEPT_FUNCTION_CHECK(getSecondColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSlopeYVel
		#define GEODE_CONCEPT_CHECK_getSlopeYVel
		GEODE_CONCEPT_FUNCTION_CHECK(getSlopeYVel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTimeMod
		#define GEODE_CONCEPT_CHECK_getTimeMod
		GEODE_CONCEPT_FUNCTION_CHECK(getTimeMod) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTookDamage
		#define GEODE_CONCEPT_CHECK_getTookDamage
		GEODE_CONCEPT_FUNCTION_CHECK(getTookDamage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTouchedRing
		#define GEODE_CONCEPT_CHECK_getTouchedRing
		GEODE_CONCEPT_FUNCTION_CHECK(getTouchedRing) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUpKeyDown
		#define GEODE_CONCEPT_CHECK_getUpKeyDown
		GEODE_CONCEPT_FUNCTION_CHECK(getUpKeyDown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUpKeyPressed
		#define GEODE_CONCEPT_CHECK_getUpKeyPressed
		GEODE_CONCEPT_FUNCTION_CHECK(getUpKeyPressed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getWasOnSlope
		#define GEODE_CONCEPT_CHECK_getWasOnSlope
		GEODE_CONCEPT_FUNCTION_CHECK(getWasOnSlope) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getYVelocity
		#define GEODE_CONCEPT_CHECK_getYVelocity
		GEODE_CONCEPT_FUNCTION_CHECK(getYVelocity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_gravityDown
		#define GEODE_CONCEPT_CHECK_gravityDown
		GEODE_CONCEPT_FUNCTION_CHECK(gravityDown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_gravityUp
		#define GEODE_CONCEPT_CHECK_gravityUp
		GEODE_CONCEPT_FUNCTION_CHECK(gravityUp) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hardFlipGravity
		#define GEODE_CONCEPT_CHECK_hardFlipGravity
		GEODE_CONCEPT_FUNCTION_CHECK(hardFlipGravity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hitGround
		#define GEODE_CONCEPT_CHECK_hitGround
		GEODE_CONCEPT_FUNCTION_CHECK(hitGround) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_incrementJumps
		#define GEODE_CONCEPT_CHECK_incrementJumps
		GEODE_CONCEPT_FUNCTION_CHECK(incrementJumps) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isBoostValid
		#define GEODE_CONCEPT_CHECK_isBoostValid
		GEODE_CONCEPT_FUNCTION_CHECK(isBoostValid) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isFlying
		#define GEODE_CONCEPT_CHECK_isFlying
		GEODE_CONCEPT_FUNCTION_CHECK(isFlying) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isSafeFlip
		#define GEODE_CONCEPT_CHECK_isSafeFlip
		GEODE_CONCEPT_FUNCTION_CHECK(isSafeFlip) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isSafeMode
		#define GEODE_CONCEPT_CHECK_isSafeMode
		GEODE_CONCEPT_FUNCTION_CHECK(isSafeMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_levelFlipFinished
		#define GEODE_CONCEPT_CHECK_levelFlipFinished
		GEODE_CONCEPT_FUNCTION_CHECK(levelFlipFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_levelFlipping
		#define GEODE_CONCEPT_CHECK_levelFlipping
		GEODE_CONCEPT_FUNCTION_CHECK(levelFlipping) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_levelWillFlip
		#define GEODE_CONCEPT_CHECK_levelWillFlip
		GEODE_CONCEPT_FUNCTION_CHECK(levelWillFlip) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadFromCheckpoint
		#define GEODE_CONCEPT_CHECK_loadFromCheckpoint
		GEODE_CONCEPT_FUNCTION_CHECK(loadFromCheckpoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_lockPlayer
		#define GEODE_CONCEPT_CHECK_lockPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(lockPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_logValues
		#define GEODE_CONCEPT_CHECK_logValues
		GEODE_CONCEPT_FUNCTION_CHECK(logValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_placeStreakPoint
		#define GEODE_CONCEPT_CHECK_placeStreakPoint
		GEODE_CONCEPT_FUNCTION_CHECK(placeStreakPoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playBurstEffect
		#define GEODE_CONCEPT_CHECK_playBurstEffect
		GEODE_CONCEPT_FUNCTION_CHECK(playBurstEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playerDestroyed
		#define GEODE_CONCEPT_CHECK_playerDestroyed
		GEODE_CONCEPT_FUNCTION_CHECK(playerDestroyed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playerIsFalling
		#define GEODE_CONCEPT_CHECK_playerIsFalling
		GEODE_CONCEPT_FUNCTION_CHECK(playerIsFalling) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playerTeleported
		#define GEODE_CONCEPT_CHECK_playerTeleported
		GEODE_CONCEPT_FUNCTION_CHECK(playerTeleported) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_postCollision
		#define GEODE_CONCEPT_CHECK_postCollision
		GEODE_CONCEPT_FUNCTION_CHECK(postCollision) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_preCollision
		#define GEODE_CONCEPT_CHECK_preCollision
		GEODE_CONCEPT_FUNCTION_CHECK(preCollision) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_preSlopeCollision
		#define GEODE_CONCEPT_CHECK_preSlopeCollision
		GEODE_CONCEPT_FUNCTION_CHECK(preSlopeCollision) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_propellPlayer
		#define GEODE_CONCEPT_CHECK_propellPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(propellPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pushButton
		#define GEODE_CONCEPT_CHECK_pushButton
		GEODE_CONCEPT_FUNCTION_CHECK(pushButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pushDown
		#define GEODE_CONCEPT_CHECK_pushDown
		GEODE_CONCEPT_FUNCTION_CHECK(pushDown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pushPlayer
		#define GEODE_CONCEPT_CHECK_pushPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(pushPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_releaseButton
		#define GEODE_CONCEPT_CHECK_releaseButton
		GEODE_CONCEPT_FUNCTION_CHECK(releaseButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeAllParticles
		#define GEODE_CONCEPT_CHECK_removeAllParticles
		GEODE_CONCEPT_FUNCTION_CHECK(removeAllParticles) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removePendingCheckpoint
		#define GEODE_CONCEPT_CHECK_removePendingCheckpoint
		GEODE_CONCEPT_FUNCTION_CHECK(removePendingCheckpoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetAllParticles
		#define GEODE_CONCEPT_CHECK_resetAllParticles
		GEODE_CONCEPT_FUNCTION_CHECK(resetAllParticles) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetCollisionLog
		#define GEODE_CONCEPT_CHECK_resetCollisionLog
		GEODE_CONCEPT_FUNCTION_CHECK(resetCollisionLog) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetPlayerIcon
		#define GEODE_CONCEPT_CHECK_resetPlayerIcon
		GEODE_CONCEPT_FUNCTION_CHECK(resetPlayerIcon) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetStreak
		#define GEODE_CONCEPT_CHECK_resetStreak
		GEODE_CONCEPT_FUNCTION_CHECK(resetStreak) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ringJump
		#define GEODE_CONCEPT_CHECK_ringJump
		GEODE_CONCEPT_FUNCTION_CHECK(ringJump) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_runBallRotation
		#define GEODE_CONCEPT_CHECK_runBallRotation
		GEODE_CONCEPT_FUNCTION_CHECK(runBallRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_runBallRotation2
		#define GEODE_CONCEPT_CHECK_runBallRotation2
		GEODE_CONCEPT_FUNCTION_CHECK(runBallRotation2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_runNormalRotation
		#define GEODE_CONCEPT_CHECK_runNormalRotation
		GEODE_CONCEPT_FUNCTION_CHECK(runNormalRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_runRotateAction
		#define GEODE_CONCEPT_CHECK_runRotateAction
		GEODE_CONCEPT_FUNCTION_CHECK(runRotateAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveToCheckpoint
		#define GEODE_CONCEPT_CHECK_saveToCheckpoint
		GEODE_CONCEPT_FUNCTION_CHECK(saveToCheckpoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setAudioScale
		#define GEODE_CONCEPT_CHECK_setAudioScale
		GEODE_CONCEPT_FUNCTION_CHECK(setAudioScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setClkTimer
		#define GEODE_CONCEPT_CHECK_setClkTimer
		GEODE_CONCEPT_FUNCTION_CHECK(setClkTimer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDisableEffects
		#define GEODE_CONCEPT_CHECK_setDisableEffects
		GEODE_CONCEPT_FUNCTION_CHECK(setDisableEffects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDualMode
		#define GEODE_CONCEPT_CHECK_setDualMode
		GEODE_CONCEPT_FUNCTION_CHECK(setDualMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setGameLayer
		#define GEODE_CONCEPT_CHECK_setGameLayer
		GEODE_CONCEPT_FUNCTION_CHECK(setGameLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setGroundHeight
		#define GEODE_CONCEPT_CHECK_setGroundHeight
		GEODE_CONCEPT_FUNCTION_CHECK(setGroundHeight) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIsSecondPlayer
		#define GEODE_CONCEPT_CHECK_setIsSecondPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(setIsSecondPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLastGroundPos
		#define GEODE_CONCEPT_CHECK_setLastGroundPos
		GEODE_CONCEPT_FUNCTION_CHECK(setLastGroundPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLastP
		#define GEODE_CONCEPT_CHECK_setLastP
		GEODE_CONCEPT_FUNCTION_CHECK(setLastP) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOnGround
		#define GEODE_CONCEPT_CHECK_setOnGround
		GEODE_CONCEPT_FUNCTION_CHECK(setOnGround) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOnSlope
		#define GEODE_CONCEPT_CHECK_setOnSlope
		GEODE_CONCEPT_FUNCTION_CHECK(setOnSlope) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPortalObject
		#define GEODE_CONCEPT_CHECK_setPortalObject
		GEODE_CONCEPT_FUNCTION_CHECK(setPortalObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPortalP
		#define GEODE_CONCEPT_CHECK_setPortalP
		GEODE_CONCEPT_FUNCTION_CHECK(setPortalP) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRealPlayerPos
		#define GEODE_CONCEPT_CHECK_setRealPlayerPos
		GEODE_CONCEPT_FUNCTION_CHECK(setRealPlayerPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSecondColor
		#define GEODE_CONCEPT_CHECK_setSecondColor
		GEODE_CONCEPT_FUNCTION_CHECK(setSecondColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTookDamage
		#define GEODE_CONCEPT_CHECK_setTookDamage
		GEODE_CONCEPT_FUNCTION_CHECK(setTookDamage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTouchedRing
		#define GEODE_CONCEPT_CHECK_setTouchedRing
		GEODE_CONCEPT_FUNCTION_CHECK(setTouchedRing) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupStreak
		#define GEODE_CONCEPT_CHECK_setupStreak
		GEODE_CONCEPT_FUNCTION_CHECK(setupStreak) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setWasOnSlope
		#define GEODE_CONCEPT_CHECK_setWasOnSlope
		GEODE_CONCEPT_FUNCTION_CHECK(setWasOnSlope) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spawnCircle
		#define GEODE_CONCEPT_CHECK_spawnCircle
		GEODE_CONCEPT_FUNCTION_CHECK(spawnCircle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spawnDualCircle
		#define GEODE_CONCEPT_CHECK_spawnDualCircle
		GEODE_CONCEPT_FUNCTION_CHECK(spawnDualCircle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spawnFromPlayer
		#define GEODE_CONCEPT_CHECK_spawnFromPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(spawnFromPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spawnPortalCircle
		#define GEODE_CONCEPT_CHECK_spawnPortalCircle
		GEODE_CONCEPT_FUNCTION_CHECK(spawnPortalCircle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spawnScaleCircle
		#define GEODE_CONCEPT_CHECK_spawnScaleCircle
		GEODE_CONCEPT_FUNCTION_CHECK(spawnScaleCircle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_specialGroundHit
		#define GEODE_CONCEPT_CHECK_specialGroundHit
		GEODE_CONCEPT_FUNCTION_CHECK(specialGroundHit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_speedDown
		#define GEODE_CONCEPT_CHECK_speedDown
		GEODE_CONCEPT_FUNCTION_CHECK(speedDown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_speedUp
		#define GEODE_CONCEPT_CHECK_speedUp
		GEODE_CONCEPT_FUNCTION_CHECK(speedUp) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopBurstEffect
		#define GEODE_CONCEPT_CHECK_stopBurstEffect
		GEODE_CONCEPT_FUNCTION_CHECK(stopBurstEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopRotation
		#define GEODE_CONCEPT_CHECK_stopRotation
		GEODE_CONCEPT_FUNCTION_CHECK(stopRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeCollision
		#define GEODE_CONCEPT_CHECK_storeCollision
		GEODE_CONCEPT_FUNCTION_CHECK(storeCollision) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_switchedToMode
		#define GEODE_CONCEPT_CHECK_switchedToMode
		GEODE_CONCEPT_FUNCTION_CHECK(switchedToMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_testForMoving
		#define GEODE_CONCEPT_CHECK_testForMoving
		GEODE_CONCEPT_FUNCTION_CHECK(testForMoving) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleBirdMode
		#define GEODE_CONCEPT_CHECK_toggleBirdMode
		GEODE_CONCEPT_FUNCTION_CHECK(toggleBirdMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleDartMode
		#define GEODE_CONCEPT_CHECK_toggleDartMode
		GEODE_CONCEPT_FUNCTION_CHECK(toggleDartMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleFlyMode
		#define GEODE_CONCEPT_CHECK_toggleFlyMode
		GEODE_CONCEPT_FUNCTION_CHECK(toggleFlyMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleGhostEffect
		#define GEODE_CONCEPT_CHECK_toggleGhostEffect
		GEODE_CONCEPT_FUNCTION_CHECK(toggleGhostEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_togglePlayerScale
		#define GEODE_CONCEPT_CHECK_togglePlayerScale
		GEODE_CONCEPT_FUNCTION_CHECK(togglePlayerScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleRobotMode
		#define GEODE_CONCEPT_CHECK_toggleRobotMode
		GEODE_CONCEPT_FUNCTION_CHECK(toggleRobotMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleRollMode
		#define GEODE_CONCEPT_CHECK_toggleRollMode
		GEODE_CONCEPT_FUNCTION_CHECK(toggleRollMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_touchedObject
		#define GEODE_CONCEPT_CHECK_touchedObject
		GEODE_CONCEPT_FUNCTION_CHECK(touchedObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryPlaceCheckpoint
		#define GEODE_CONCEPT_CHECK_tryPlaceCheckpoint
		GEODE_CONCEPT_FUNCTION_CHECK(tryPlaceCheckpoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCheckpointTest
		#define GEODE_CONCEPT_CHECK_updateCheckpointTest
		GEODE_CONCEPT_FUNCTION_CHECK(updateCheckpointTest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCollide
		#define GEODE_CONCEPT_CHECK_updateCollide
		GEODE_CONCEPT_FUNCTION_CHECK(updateCollide) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCollideBottom
		#define GEODE_CONCEPT_CHECK_updateCollideBottom
		GEODE_CONCEPT_FUNCTION_CHECK(updateCollideBottom) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCollideTop
		#define GEODE_CONCEPT_CHECK_updateCollideTop
		GEODE_CONCEPT_FUNCTION_CHECK(updateCollideTop) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateGlowColor
		#define GEODE_CONCEPT_CHECK_updateGlowColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateGlowColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateJump
		#define GEODE_CONCEPT_CHECK_updateJump
		GEODE_CONCEPT_FUNCTION_CHECK(updateJump) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePlayerBirdFrame
		#define GEODE_CONCEPT_CHECK_updatePlayerBirdFrame
		GEODE_CONCEPT_FUNCTION_CHECK(updatePlayerBirdFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePlayerDartFrame
		#define GEODE_CONCEPT_CHECK_updatePlayerDartFrame
		GEODE_CONCEPT_FUNCTION_CHECK(updatePlayerDartFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePlayerFrame
		#define GEODE_CONCEPT_CHECK_updatePlayerFrame
		GEODE_CONCEPT_FUNCTION_CHECK(updatePlayerFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePlayerGlow
		#define GEODE_CONCEPT_CHECK_updatePlayerGlow
		GEODE_CONCEPT_FUNCTION_CHECK(updatePlayerGlow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePlayerRobotFrame
		#define GEODE_CONCEPT_CHECK_updatePlayerRobotFrame
		GEODE_CONCEPT_FUNCTION_CHECK(updatePlayerRobotFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePlayerRollFrame
		#define GEODE_CONCEPT_CHECK_updatePlayerRollFrame
		GEODE_CONCEPT_FUNCTION_CHECK(updatePlayerRollFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePlayerScale
		#define GEODE_CONCEPT_CHECK_updatePlayerScale
		GEODE_CONCEPT_FUNCTION_CHECK(updatePlayerScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePlayerShipFrame
		#define GEODE_CONCEPT_CHECK_updatePlayerShipFrame
		GEODE_CONCEPT_FUNCTION_CHECK(updatePlayerShipFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateRobotAnimationSpeed
		#define GEODE_CONCEPT_CHECK_updateRobotAnimationSpeed
		GEODE_CONCEPT_FUNCTION_CHECK(updateRobotAnimationSpeed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateRotation
		#define GEODE_CONCEPT_CHECK_updateRotation
		GEODE_CONCEPT_FUNCTION_CHECK(updateRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateShipRotation
		#define GEODE_CONCEPT_CHECK_updateShipRotation
		GEODE_CONCEPT_FUNCTION_CHECK(updateShipRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSlopeRotation
		#define GEODE_CONCEPT_CHECK_updateSlopeRotation
		GEODE_CONCEPT_FUNCTION_CHECK(updateSlopeRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSlopeYVelocity
		#define GEODE_CONCEPT_CHECK_updateSlopeYVelocity
		GEODE_CONCEPT_FUNCTION_CHECK(updateSlopeYVelocity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTimeMod
		#define GEODE_CONCEPT_CHECK_updateTimeMod
		GEODE_CONCEPT_FUNCTION_CHECK(updateTimeMod) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_yStartDown
		#define GEODE_CONCEPT_CHECK_yStartDown
		GEODE_CONCEPT_FUNCTION_CHECK(yStartDown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_yStartUp
		#define GEODE_CONCEPT_CHECK_yStartUp
		GEODE_CONCEPT_FUNCTION_CHECK(yStartUp) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_update
		#define GEODE_CONCEPT_CHECK_update
		GEODE_CONCEPT_FUNCTION_CHECK(update) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setScaleX
		#define GEODE_CONCEPT_CHECK_setScaleX
		GEODE_CONCEPT_FUNCTION_CHECK(setScaleX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setScaleY
		#define GEODE_CONCEPT_CHECK_setScaleY
		GEODE_CONCEPT_FUNCTION_CHECK(setScaleY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setScale
		#define GEODE_CONCEPT_CHECK_setScale
		GEODE_CONCEPT_FUNCTION_CHECK(setScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPosition
		#define GEODE_CONCEPT_CHECK_setPosition
		GEODE_CONCEPT_FUNCTION_CHECK(setPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setVisible
		#define GEODE_CONCEPT_CHECK_setVisible
		GEODE_CONCEPT_FUNCTION_CHECK(setVisible) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRotation
		#define GEODE_CONCEPT_CHECK_setRotation
		GEODE_CONCEPT_FUNCTION_CHECK(setRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOpacity
		#define GEODE_CONCEPT_CHECK_setOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(setOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setColor
		#define GEODE_CONCEPT_CHECK_setColor
		GEODE_CONCEPT_FUNCTION_CHECK(setColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFlipX
		#define GEODE_CONCEPT_CHECK_setFlipX
		GEODE_CONCEPT_FUNCTION_CHECK(setFlipX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFlipY
		#define GEODE_CONCEPT_CHECK_setFlipY
		GEODE_CONCEPT_FUNCTION_CHECK(setFlipY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetObject
		#define GEODE_CONCEPT_CHECK_resetObject
		GEODE_CONCEPT_FUNCTION_CHECK(resetObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRealPosition
		#define GEODE_CONCEPT_CHECK_getRealPosition
		GEODE_CONCEPT_FUNCTION_CHECK(getRealPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOrientedBox
		#define GEODE_CONCEPT_CHECK_getOrientedBox
		GEODE_CONCEPT_FUNCTION_CHECK(getOrientedBox) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_animationFinished
		#define GEODE_CONCEPT_CHECK_animationFinished
		GEODE_CONCEPT_FUNCTION_CHECK(animationFinished) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, PlayerObject> : ModifyBase<ModifyDerive<Der, PlayerObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, PlayerObject>>;
		using ModifyBase<ModifyDerive<Der, PlayerObject>>::ModifyBase;
		using Base = PlayerObject;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, create, int, int, cocos2d::CCLayer*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, activateStreak, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, addAllParticles, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, boostPlayer, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, buttonDown, PlayerButton)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, checkSnapJumpToObject, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, collidedWithObject, float, GameObject*, cocos2d::CCRect)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, collidedWithObject, float, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, collidedWithSlope, float, GameObject*, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, convertToClosestRotation, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, copyAttributes, PlayerObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, deactivateParticle, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, deactivateStreak, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, fadeOutStreak2, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, flipGravity, bool, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, flipMod, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, getAudioScale, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, getBirdMode, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, getCanJump, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, getClkTimer, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, getCurrentIcon, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, getDartMode, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, getDidStick, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, getDisableEffects, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, getDualMode, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, getFlyMode, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, getGameLayer, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, getGlowColor1, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, getGlowColor2, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, getGravityFlipped, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, getGroundHeight, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, getHasJumped, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, getHasRingJumped, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, getIsDead, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, getIsJumping, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, getIsLocked, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, getIsSecondPlayer, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, getLastGroundObject, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, getLastGroundPos, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, getLastP, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, getLastYVel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, getModifiedSlopeYVel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, getOnGround, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, getOnSlope, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, getPlayerScale, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, getPlayerXVelocity, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, getPortalObject, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, getPortalP, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, getRealPlayerPos, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, getRobotMode, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, getRollMode, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, getSecondColor, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, getSlopeYVel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, getTimeMod, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, getTookDamage, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, getTouchedRing, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, getUpKeyDown, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, getUpKeyPressed, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, getWasOnSlope, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, getYVelocity, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, gravityDown, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, gravityUp, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, hardFlipGravity, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, hitGround, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, incrementJumps, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, init, int, int, cocos2d::CCLayer*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, isBoostValid, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, isFlying, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, isSafeFlip, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, isSafeMode, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, levelFlipFinished, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, levelFlipping, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, levelWillFlip, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, loadFromCheckpoint, PlayerCheckpoint*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, lockPlayer, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, logValues, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, placeStreakPoint, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, playBurstEffect, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, playerDestroyed, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, playerIsFalling, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, playerTeleported, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, postCollision, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, preCollision, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, preSlopeCollision, float, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, propellPlayer, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, pushButton, PlayerButton)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, pushDown, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, pushPlayer, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, releaseButton, PlayerButton)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, removeAllParticles, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, removePendingCheckpoint, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, resetAllParticles, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, resetCollisionLog, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, resetPlayerIcon, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, resetStreak, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, ringJump, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, runBallRotation, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, runBallRotation2, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, runNormalRotation, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, runRotateAction, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, saveToCheckpoint, PlayerCheckpoint*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, setAudioScale, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, setClkTimer, double)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, setDisableEffects, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, setDualMode, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, setGameLayer, cocos2d::CCLayer*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, setGroundHeight, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, setIsSecondPlayer, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, setLastGroundPos, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, setLastP, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, setOnGround, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, setOnSlope, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, setPortalObject, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, setPortalP, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, setRealPlayerPos, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, setSecondColor, cocos2d::ccColor3B const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, setTookDamage, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, setTouchedRing, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, setupStreak, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, setWasOnSlope, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, spawnCircle, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, spawnDualCircle, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, spawnFromPlayer, PlayerObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, spawnPortalCircle, cocos2d::ccColor3B, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, spawnScaleCircle, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, specialGroundHit, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, speedDown, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, speedUp, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, stopBurstEffect, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, stopRotation, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, storeCollision, bool, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, switchedToMode, GameObjectType)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, testForMoving, float, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, toggleBirdMode, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, toggleDartMode, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, toggleFlyMode, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, toggleGhostEffect, GhostType)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, togglePlayerScale, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, toggleRobotMode, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, toggleRollMode, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, touchedObject, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, tryPlaceCheckpoint, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, updateCheckpointTest, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, updateCollide, bool, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, updateCollideBottom, float, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, updateCollideTop, float, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, updateGlowColor, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, updateJump, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, updatePlayerBirdFrame, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, updatePlayerDartFrame, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, updatePlayerFrame, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, updatePlayerGlow, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, updatePlayerRobotFrame, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, updatePlayerRollFrame, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, updatePlayerScale, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, updatePlayerShipFrame, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, updateRobotAnimationSpeed, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, updateRotation, float, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, updateRotation, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, updateShipRotation, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, updateSlopeRotation, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, updateSlopeYVelocity, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, updateTimeMod, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, yStartDown, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, yStartUp, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, update, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, setScaleX, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, setScaleY, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, setScale, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, setPosition, cocos2d::CCPoint const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, setVisible, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, setRotation, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, setOpacity, unsigned char)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, setColor, cocos2d::ccColor3B const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, setFlipX, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, setFlipY, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, resetObject, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, getRealPosition, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, getOrientedBox, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerObject, animationFinished, char const*)
		}
	};
}
