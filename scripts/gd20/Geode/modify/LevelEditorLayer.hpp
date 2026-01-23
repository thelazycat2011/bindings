#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelEditorLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_addObjectFromString
		#define GEODE_STATICS_addObjectFromString
		GEODE_AS_STATIC_FUNCTION(addObjectFromString) 
	#endif

	#ifndef GEODE_STATICS_addObjectsRecursiveFromArray
		#define GEODE_STATICS_addObjectsRecursiveFromArray
		GEODE_AS_STATIC_FUNCTION(addObjectsRecursiveFromArray) 
	#endif

	#ifndef GEODE_STATICS_addSpecial
		#define GEODE_STATICS_addSpecial
		GEODE_AS_STATIC_FUNCTION(addSpecial) 
	#endif

	#ifndef GEODE_STATICS_addToGroup
		#define GEODE_STATICS_addToGroup
		GEODE_AS_STATIC_FUNCTION(addToGroup) 
	#endif

	#ifndef GEODE_STATICS_addToRedoList
		#define GEODE_STATICS_addToRedoList
		GEODE_AS_STATIC_FUNCTION(addToRedoList) 
	#endif

	#ifndef GEODE_STATICS_addToUndoList
		#define GEODE_STATICS_addToUndoList
		GEODE_AS_STATIC_FUNCTION(addToUndoList) 
	#endif

	#ifndef GEODE_STATICS_animateInDualGround
		#define GEODE_STATICS_animateInDualGround
		GEODE_AS_STATIC_FUNCTION(animateInDualGround) 
	#endif

	#ifndef GEODE_STATICS_breakApartTextObject
		#define GEODE_STATICS_breakApartTextObject
		GEODE_AS_STATIC_FUNCTION(breakApartTextObject) 
	#endif

	#ifndef GEODE_STATICS_calculateColorValues
		#define GEODE_STATICS_calculateColorValues
		GEODE_AS_STATIC_FUNCTION(calculateColorValues) 
	#endif

	#ifndef GEODE_STATICS_canPasteState
		#define GEODE_STATICS_canPasteState
		GEODE_AS_STATIC_FUNCTION(canPasteState) 
	#endif

	#ifndef GEODE_STATICS_checkCollisions
		#define GEODE_STATICS_checkCollisions
		GEODE_AS_STATIC_FUNCTION(checkCollisions) 
	#endif

	#ifndef GEODE_STATICS_checkSpawnObjects
		#define GEODE_STATICS_checkSpawnObjects
		GEODE_AS_STATIC_FUNCTION(checkSpawnObjects) 
	#endif

	#ifndef GEODE_STATICS_copyObjectState
		#define GEODE_STATICS_copyObjectState
		GEODE_AS_STATIC_FUNCTION(copyObjectState) 
	#endif

	#ifndef GEODE_STATICS_createBackground
		#define GEODE_STATICS_createBackground
		GEODE_AS_STATIC_FUNCTION(createBackground) 
	#endif

	#ifndef GEODE_STATICS_createGroundLayer
		#define GEODE_STATICS_createGroundLayer
		GEODE_AS_STATIC_FUNCTION(createGroundLayer) 
	#endif

	#ifndef GEODE_STATICS_createObject
		#define GEODE_STATICS_createObject
		GEODE_AS_STATIC_FUNCTION(createObject) 
	#endif

	#ifndef GEODE_STATICS_createObjectsFromSetup
		#define GEODE_STATICS_createObjectsFromSetup
		GEODE_AS_STATIC_FUNCTION(createObjectsFromSetup) 
	#endif

	#ifndef GEODE_STATICS_createObjectsFromString
		#define GEODE_STATICS_createObjectsFromString
		GEODE_AS_STATIC_FUNCTION(createObjectsFromString) 
	#endif

	#ifndef GEODE_STATICS_dirtifyTriggers
		#define GEODE_STATICS_dirtifyTriggers
		GEODE_AS_STATIC_FUNCTION(dirtifyTriggers) 
	#endif

	#ifndef GEODE_STATICS_enterDualMode
		#define GEODE_STATICS_enterDualMode
		GEODE_AS_STATIC_FUNCTION(enterDualMode) 
	#endif

	#ifndef GEODE_STATICS_fastUpdateDisabledGroups
		#define GEODE_STATICS_fastUpdateDisabledGroups
		GEODE_AS_STATIC_FUNCTION(fastUpdateDisabledGroups) 
	#endif

	#ifndef GEODE_STATICS_flipGravity
		#define GEODE_STATICS_flipGravity
		GEODE_AS_STATIC_FUNCTION(flipGravity) 
	#endif

	#ifndef GEODE_STATICS_fullUpdateDisabledGroups
		#define GEODE_STATICS_fullUpdateDisabledGroups
		GEODE_AS_STATIC_FUNCTION(fullUpdateDisabledGroups) 
	#endif

	#ifndef GEODE_STATICS_getAllObjects
		#define GEODE_STATICS_getAllObjects
		GEODE_AS_STATIC_FUNCTION(getAllObjects) 
	#endif

	#ifndef GEODE_STATICS_getClkTimer
		#define GEODE_STATICS_getClkTimer
		GEODE_AS_STATIC_FUNCTION(getClkTimer) 
	#endif

	#ifndef GEODE_STATICS_getCoinCount
		#define GEODE_STATICS_getCoinCount
		GEODE_AS_STATIC_FUNCTION(getCoinCount) 
	#endif

	#ifndef GEODE_STATICS_getDontApplyLayerFilter
		#define GEODE_STATICS_getDontApplyLayerFilter
		GEODE_AS_STATIC_FUNCTION(getDontApplyLayerFilter) 
	#endif

	#ifndef GEODE_STATICS_getDualMode
		#define GEODE_STATICS_getDualMode
		GEODE_AS_STATIC_FUNCTION(getDualMode) 
	#endif

	#ifndef GEODE_STATICS_getGridLayer
		#define GEODE_STATICS_getGridLayer
		GEODE_AS_STATIC_FUNCTION(getGridLayer) 
	#endif

	#ifndef GEODE_STATICS_getGridPos
		#define GEODE_STATICS_getGridPos
		GEODE_AS_STATIC_FUNCTION(getGridPos) 
	#endif

	#ifndef GEODE_STATICS_getGroundHeightForMode
		#define GEODE_STATICS_getGroundHeightForMode
		GEODE_AS_STATIC_FUNCTION(getGroundHeightForMode) 
	#endif

	#ifndef GEODE_STATICS_getGroup
		#define GEODE_STATICS_getGroup
		GEODE_AS_STATIC_FUNCTION(getGroup) 
	#endif

	#ifndef GEODE_STATICS_getGroupIDFilter
		#define GEODE_STATICS_getGroupIDFilter
		GEODE_AS_STATIC_FUNCTION(getGroupIDFilter) 
	#endif

	#ifndef GEODE_STATICS_getLastObjectX
		#define GEODE_STATICS_getLastObjectX
		GEODE_AS_STATIC_FUNCTION(getLastObjectX) 
	#endif

	#ifndef GEODE_STATICS_getLevel
		#define GEODE_STATICS_getLevel
		GEODE_AS_STATIC_FUNCTION(getLevel) 
	#endif

	#ifndef GEODE_STATICS_getLevelDistance
		#define GEODE_STATICS_getLevelDistance
		GEODE_AS_STATIC_FUNCTION(getLevelDistance) 
	#endif

	#ifndef GEODE_STATICS_getLevelString
		#define GEODE_STATICS_getLevelString
		GEODE_AS_STATIC_FUNCTION(getLevelString) 
	#endif

	#ifndef GEODE_STATICS_getMaxPortalY
		#define GEODE_STATICS_getMaxPortalY
		GEODE_AS_STATIC_FUNCTION(getMaxPortalY) 
	#endif

	#ifndef GEODE_STATICS_getMinPortalY
		#define GEODE_STATICS_getMinPortalY
		GEODE_AS_STATIC_FUNCTION(getMinPortalY) 
	#endif

	#ifndef GEODE_STATICS_getNextColorChannel
		#define GEODE_STATICS_getNextColorChannel
		GEODE_AS_STATIC_FUNCTION(getNextColorChannel) 
	#endif

	#ifndef GEODE_STATICS_getNextFreeGroupID
		#define GEODE_STATICS_getNextFreeGroupID
		GEODE_AS_STATIC_FUNCTION(getNextFreeGroupID) 
	#endif

	#ifndef GEODE_STATICS_getObjectCount
		#define GEODE_STATICS_getObjectCount
		GEODE_AS_STATIC_FUNCTION(getObjectCount) 
	#endif

	#ifndef GEODE_STATICS_getObjectRect
		#define GEODE_STATICS_getObjectRect
		GEODE_AS_STATIC_FUNCTION(getObjectRect) 
	#endif

	#ifndef GEODE_STATICS_getOldLevelString
		#define GEODE_STATICS_getOldLevelString
		GEODE_AS_STATIC_FUNCTION(getOldLevelString) 
	#endif

	#ifndef GEODE_STATICS_getOtherPlayer
		#define GEODE_STATICS_getOtherPlayer
		GEODE_AS_STATIC_FUNCTION(getOtherPlayer) 
	#endif

	#ifndef GEODE_STATICS_getPlayerState
		#define GEODE_STATICS_getPlayerState
		GEODE_AS_STATIC_FUNCTION(getPlayerState) 
	#endif

	#ifndef GEODE_STATICS_getRelativeOffset
		#define GEODE_STATICS_getRelativeOffset
		GEODE_AS_STATIC_FUNCTION(getRelativeOffset) 
	#endif

	#ifndef GEODE_STATICS_getSectionCount
		#define GEODE_STATICS_getSectionCount
		GEODE_AS_STATIC_FUNCTION(getSectionCount) 
	#endif

	#ifndef GEODE_STATICS_getUILayer
		#define GEODE_STATICS_getUILayer
		GEODE_AS_STATIC_FUNCTION(getUILayer) 
	#endif

	#ifndef GEODE_STATICS_handleAction
		#define GEODE_STATICS_handleAction
		GEODE_AS_STATIC_FUNCTION(handleAction) 
	#endif

	#ifndef GEODE_STATICS_hasAction
		#define GEODE_STATICS_hasAction
		GEODE_AS_STATIC_FUNCTION(hasAction) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_objectAtPosition
		#define GEODE_STATICS_objectAtPosition
		GEODE_AS_STATIC_FUNCTION(objectAtPosition) 
	#endif

	#ifndef GEODE_STATICS_objectIntersectsCircle
		#define GEODE_STATICS_objectIntersectsCircle
		GEODE_AS_STATIC_FUNCTION(objectIntersectsCircle) 
	#endif

	#ifndef GEODE_STATICS_objectMoved
		#define GEODE_STATICS_objectMoved
		GEODE_AS_STATIC_FUNCTION(objectMoved) 
	#endif

	#ifndef GEODE_STATICS_objectsAtPosition
		#define GEODE_STATICS_objectsAtPosition
		GEODE_AS_STATIC_FUNCTION(objectsAtPosition) 
	#endif

	#ifndef GEODE_STATICS_objectsInRect
		#define GEODE_STATICS_objectsInRect
		GEODE_AS_STATIC_FUNCTION(objectsInRect) 
	#endif

	#ifndef GEODE_STATICS_onPausePlaytest
		#define GEODE_STATICS_onPausePlaytest
		GEODE_AS_STATIC_FUNCTION(onPausePlaytest) 
	#endif

	#ifndef GEODE_STATICS_onPlaytest
		#define GEODE_STATICS_onPlaytest
		GEODE_AS_STATIC_FUNCTION(onPlaytest) 
	#endif

	#ifndef GEODE_STATICS_onResumePlaytest
		#define GEODE_STATICS_onResumePlaytest
		GEODE_AS_STATIC_FUNCTION(onResumePlaytest) 
	#endif

	#ifndef GEODE_STATICS_onStopPlaytest
		#define GEODE_STATICS_onStopPlaytest
		GEODE_AS_STATIC_FUNCTION(onStopPlaytest) 
	#endif

	#ifndef GEODE_STATICS_pasteAtributeState
		#define GEODE_STATICS_pasteAtributeState
		GEODE_AS_STATIC_FUNCTION(pasteAtributeState) 
	#endif

	#ifndef GEODE_STATICS_pasteColorState
		#define GEODE_STATICS_pasteColorState
		GEODE_AS_STATIC_FUNCTION(pasteColorState) 
	#endif

	#ifndef GEODE_STATICS_playerWillSwitchMode
		#define GEODE_STATICS_playerWillSwitchMode
		GEODE_AS_STATIC_FUNCTION(playerWillSwitchMode) 
	#endif

	#ifndef GEODE_STATICS_playMusic
		#define GEODE_STATICS_playMusic
		GEODE_AS_STATIC_FUNCTION(playMusic) 
	#endif

	#ifndef GEODE_STATICS_preloadMoveActions
		#define GEODE_STATICS_preloadMoveActions
		GEODE_AS_STATIC_FUNCTION(preloadMoveActions) 
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

	#ifndef GEODE_STATICS_recreateGroups
		#define GEODE_STATICS_recreateGroups
		GEODE_AS_STATIC_FUNCTION(recreateGroups) 
	#endif

	#ifndef GEODE_STATICS_redoLastAction
		#define GEODE_STATICS_redoLastAction
		GEODE_AS_STATIC_FUNCTION(redoLastAction) 
	#endif

	#ifndef GEODE_STATICS_releaseButton
		#define GEODE_STATICS_releaseButton
		GEODE_AS_STATIC_FUNCTION(releaseButton) 
	#endif

	#ifndef GEODE_STATICS_removeAllObjects
		#define GEODE_STATICS_removeAllObjects
		GEODE_AS_STATIC_FUNCTION(removeAllObjects) 
	#endif

	#ifndef GEODE_STATICS_removeAllObjectsOfType
		#define GEODE_STATICS_removeAllObjectsOfType
		GEODE_AS_STATIC_FUNCTION(removeAllObjectsOfType) 
	#endif

	#ifndef GEODE_STATICS_removeBackground
		#define GEODE_STATICS_removeBackground
		GEODE_AS_STATIC_FUNCTION(removeBackground) 
	#endif

	#ifndef GEODE_STATICS_removeFromGroup
		#define GEODE_STATICS_removeFromGroup
		GEODE_AS_STATIC_FUNCTION(removeFromGroup) 
	#endif

	#ifndef GEODE_STATICS_removeGroundLayer
		#define GEODE_STATICS_removeGroundLayer
		GEODE_AS_STATIC_FUNCTION(removeGroundLayer) 
	#endif

	#ifndef GEODE_STATICS_removeObject
		#define GEODE_STATICS_removeObject
		GEODE_AS_STATIC_FUNCTION(removeObject) 
	#endif

	#ifndef GEODE_STATICS_removeObjectFromSection
		#define GEODE_STATICS_removeObjectFromSection
		GEODE_AS_STATIC_FUNCTION(removeObjectFromSection) 
	#endif

	#ifndef GEODE_STATICS_removePlayer2
		#define GEODE_STATICS_removePlayer2
		GEODE_AS_STATIC_FUNCTION(removePlayer2) 
	#endif

	#ifndef GEODE_STATICS_removeSpecial
		#define GEODE_STATICS_removeSpecial
		GEODE_AS_STATIC_FUNCTION(removeSpecial) 
	#endif

	#ifndef GEODE_STATICS_reorderObjectSection
		#define GEODE_STATICS_reorderObjectSection
		GEODE_AS_STATIC_FUNCTION(reorderObjectSection) 
	#endif

	#ifndef GEODE_STATICS_resetMovingObjects
		#define GEODE_STATICS_resetMovingObjects
		GEODE_AS_STATIC_FUNCTION(resetMovingObjects) 
	#endif

	#ifndef GEODE_STATICS_resetObjectVector
		#define GEODE_STATICS_resetObjectVector
		GEODE_AS_STATIC_FUNCTION(resetObjectVector) 
	#endif

	#ifndef GEODE_STATICS_resetUnusedColorChannels
		#define GEODE_STATICS_resetUnusedColorChannels
		GEODE_AS_STATIC_FUNCTION(resetUnusedColorChannels) 
	#endif

	#ifndef GEODE_STATICS_rotationForSlopeNearObject
		#define GEODE_STATICS_rotationForSlopeNearObject
		GEODE_AS_STATIC_FUNCTION(rotationForSlopeNearObject) 
	#endif

	#ifndef GEODE_STATICS_scene
		#define GEODE_STATICS_scene
		GEODE_AS_STATIC_FUNCTION(scene) 
	#endif

	#ifndef GEODE_STATICS_sectionForPos
		#define GEODE_STATICS_sectionForPos
		GEODE_AS_STATIC_FUNCTION(sectionForPos) 
	#endif

	#ifndef GEODE_STATICS_setDontApplyLayerFilter
		#define GEODE_STATICS_setDontApplyLayerFilter
		GEODE_AS_STATIC_FUNCTION(setDontApplyLayerFilter) 
	#endif

	#ifndef GEODE_STATICS_setGroupIDFilter
		#define GEODE_STATICS_setGroupIDFilter
		GEODE_AS_STATIC_FUNCTION(setGroupIDFilter) 
	#endif

	#ifndef GEODE_STATICS_setObjectCount
		#define GEODE_STATICS_setObjectCount
		GEODE_AS_STATIC_FUNCTION(setObjectCount) 
	#endif

	#ifndef GEODE_STATICS_setStartPosObject
		#define GEODE_STATICS_setStartPosObject
		GEODE_AS_STATIC_FUNCTION(setStartPosObject) 
	#endif

	#ifndef GEODE_STATICS_setupLevelStart
		#define GEODE_STATICS_setupLevelStart
		GEODE_AS_STATIC_FUNCTION(setupLevelStart) 
	#endif

	#ifndef GEODE_STATICS_shouldBlend
		#define GEODE_STATICS_shouldBlend
		GEODE_AS_STATIC_FUNCTION(shouldBlend) 
	#endif

	#ifndef GEODE_STATICS_sortBatchnodeChildren
		#define GEODE_STATICS_sortBatchnodeChildren
		GEODE_AS_STATIC_FUNCTION(sortBatchnodeChildren) 
	#endif

	#ifndef GEODE_STATICS_spawnGroup
		#define GEODE_STATICS_spawnGroup
		GEODE_AS_STATIC_FUNCTION(spawnGroup) 
	#endif

	#ifndef GEODE_STATICS_spawnPlayer2
		#define GEODE_STATICS_spawnPlayer2
		GEODE_AS_STATIC_FUNCTION(spawnPlayer2) 
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

	#ifndef GEODE_STATICS_toggleDualMode
		#define GEODE_STATICS_toggleDualMode
		GEODE_AS_STATIC_FUNCTION(toggleDualMode) 
	#endif

	#ifndef GEODE_STATICS_toggleGrid
		#define GEODE_STATICS_toggleGrid
		GEODE_AS_STATIC_FUNCTION(toggleGrid) 
	#endif

	#ifndef GEODE_STATICS_toggleGround
		#define GEODE_STATICS_toggleGround
		GEODE_AS_STATIC_FUNCTION(toggleGround) 
	#endif

	#ifndef GEODE_STATICS_triggerMoveCommand
		#define GEODE_STATICS_triggerMoveCommand
		GEODE_AS_STATIC_FUNCTION(triggerMoveCommand) 
	#endif

	#ifndef GEODE_STATICS_typeExistsAtPosition
		#define GEODE_STATICS_typeExistsAtPosition
		GEODE_AS_STATIC_FUNCTION(typeExistsAtPosition) 
	#endif

	#ifndef GEODE_STATICS_undoLastAction
		#define GEODE_STATICS_undoLastAction
		GEODE_AS_STATIC_FUNCTION(undoLastAction) 
	#endif

	#ifndef GEODE_STATICS_updateDualGround
		#define GEODE_STATICS_updateDualGround
		GEODE_AS_STATIC_FUNCTION(updateDualGround) 
	#endif

	#ifndef GEODE_STATICS_updateEditorMode
		#define GEODE_STATICS_updateEditorMode
		GEODE_AS_STATIC_FUNCTION(updateEditorMode) 
	#endif

	#ifndef GEODE_STATICS_updateGameObjects
		#define GEODE_STATICS_updateGameObjects
		GEODE_AS_STATIC_FUNCTION(updateGameObjects) 
	#endif

	#ifndef GEODE_STATICS_updateGround
		#define GEODE_STATICS_updateGround
		GEODE_AS_STATIC_FUNCTION(updateGround) 
	#endif

	#ifndef GEODE_STATICS_updateGroundWidth
		#define GEODE_STATICS_updateGroundWidth
		GEODE_AS_STATIC_FUNCTION(updateGroundWidth) 
	#endif

	#ifndef GEODE_STATICS_updateLevelColors
		#define GEODE_STATICS_updateLevelColors
		GEODE_AS_STATIC_FUNCTION(updateLevelColors) 
	#endif

	#ifndef GEODE_STATICS_updateLevelFont
		#define GEODE_STATICS_updateLevelFont
		GEODE_AS_STATIC_FUNCTION(updateLevelFont) 
	#endif

	#ifndef GEODE_STATICS_updateOBB2
		#define GEODE_STATICS_updateOBB2
		GEODE_AS_STATIC_FUNCTION(updateOBB2) 
	#endif

	#ifndef GEODE_STATICS_updateTimeMod
		#define GEODE_STATICS_updateTimeMod
		GEODE_AS_STATIC_FUNCTION(updateTimeMod) 
	#endif

	#ifndef GEODE_STATICS_validGroup
		#define GEODE_STATICS_validGroup
		GEODE_AS_STATIC_FUNCTION(validGroup) 
	#endif

	#ifndef GEODE_STATICS_willSwitchToMode
		#define GEODE_STATICS_willSwitchToMode
		GEODE_AS_STATIC_FUNCTION(willSwitchToMode) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_updateVisibility
		#define GEODE_STATICS_updateVisibility
		GEODE_AS_STATIC_FUNCTION(updateVisibility) 
	#endif

	#ifndef GEODE_STATICS_addToSection
		#define GEODE_STATICS_addToSection
		GEODE_AS_STATIC_FUNCTION(addToSection) 
	#endif

	#ifndef GEODE_STATICS_levelSettingsUpdated
		#define GEODE_STATICS_levelSettingsUpdated
		GEODE_AS_STATIC_FUNCTION(levelSettingsUpdated) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addObjectFromString
		#define GEODE_CONCEPT_CHECK_addObjectFromString
		GEODE_CONCEPT_FUNCTION_CHECK(addObjectFromString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addObjectsRecursiveFromArray
		#define GEODE_CONCEPT_CHECK_addObjectsRecursiveFromArray
		GEODE_CONCEPT_FUNCTION_CHECK(addObjectsRecursiveFromArray) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addSpecial
		#define GEODE_CONCEPT_CHECK_addSpecial
		GEODE_CONCEPT_FUNCTION_CHECK(addSpecial) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToGroup
		#define GEODE_CONCEPT_CHECK_addToGroup
		GEODE_CONCEPT_FUNCTION_CHECK(addToGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToRedoList
		#define GEODE_CONCEPT_CHECK_addToRedoList
		GEODE_CONCEPT_FUNCTION_CHECK(addToRedoList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToUndoList
		#define GEODE_CONCEPT_CHECK_addToUndoList
		GEODE_CONCEPT_FUNCTION_CHECK(addToUndoList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_animateInDualGround
		#define GEODE_CONCEPT_CHECK_animateInDualGround
		GEODE_CONCEPT_FUNCTION_CHECK(animateInDualGround) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_breakApartTextObject
		#define GEODE_CONCEPT_CHECK_breakApartTextObject
		GEODE_CONCEPT_FUNCTION_CHECK(breakApartTextObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_calculateColorValues
		#define GEODE_CONCEPT_CHECK_calculateColorValues
		GEODE_CONCEPT_FUNCTION_CHECK(calculateColorValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canPasteState
		#define GEODE_CONCEPT_CHECK_canPasteState
		GEODE_CONCEPT_FUNCTION_CHECK(canPasteState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkCollisions
		#define GEODE_CONCEPT_CHECK_checkCollisions
		GEODE_CONCEPT_FUNCTION_CHECK(checkCollisions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkSpawnObjects
		#define GEODE_CONCEPT_CHECK_checkSpawnObjects
		GEODE_CONCEPT_FUNCTION_CHECK(checkSpawnObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_copyObjectState
		#define GEODE_CONCEPT_CHECK_copyObjectState
		GEODE_CONCEPT_FUNCTION_CHECK(copyObjectState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createBackground
		#define GEODE_CONCEPT_CHECK_createBackground
		GEODE_CONCEPT_FUNCTION_CHECK(createBackground) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createGroundLayer
		#define GEODE_CONCEPT_CHECK_createGroundLayer
		GEODE_CONCEPT_FUNCTION_CHECK(createGroundLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createObject
		#define GEODE_CONCEPT_CHECK_createObject
		GEODE_CONCEPT_FUNCTION_CHECK(createObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createObjectsFromSetup
		#define GEODE_CONCEPT_CHECK_createObjectsFromSetup
		GEODE_CONCEPT_FUNCTION_CHECK(createObjectsFromSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createObjectsFromString
		#define GEODE_CONCEPT_CHECK_createObjectsFromString
		GEODE_CONCEPT_FUNCTION_CHECK(createObjectsFromString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dirtifyTriggers
		#define GEODE_CONCEPT_CHECK_dirtifyTriggers
		GEODE_CONCEPT_FUNCTION_CHECK(dirtifyTriggers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_enterDualMode
		#define GEODE_CONCEPT_CHECK_enterDualMode
		GEODE_CONCEPT_FUNCTION_CHECK(enterDualMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fastUpdateDisabledGroups
		#define GEODE_CONCEPT_CHECK_fastUpdateDisabledGroups
		GEODE_CONCEPT_FUNCTION_CHECK(fastUpdateDisabledGroups) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_flipGravity
		#define GEODE_CONCEPT_CHECK_flipGravity
		GEODE_CONCEPT_FUNCTION_CHECK(flipGravity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fullUpdateDisabledGroups
		#define GEODE_CONCEPT_CHECK_fullUpdateDisabledGroups
		GEODE_CONCEPT_FUNCTION_CHECK(fullUpdateDisabledGroups) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAllObjects
		#define GEODE_CONCEPT_CHECK_getAllObjects
		GEODE_CONCEPT_FUNCTION_CHECK(getAllObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getClkTimer
		#define GEODE_CONCEPT_CHECK_getClkTimer
		GEODE_CONCEPT_FUNCTION_CHECK(getClkTimer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCoinCount
		#define GEODE_CONCEPT_CHECK_getCoinCount
		GEODE_CONCEPT_FUNCTION_CHECK(getCoinCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDontApplyLayerFilter
		#define GEODE_CONCEPT_CHECK_getDontApplyLayerFilter
		GEODE_CONCEPT_FUNCTION_CHECK(getDontApplyLayerFilter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDualMode
		#define GEODE_CONCEPT_CHECK_getDualMode
		GEODE_CONCEPT_FUNCTION_CHECK(getDualMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGridLayer
		#define GEODE_CONCEPT_CHECK_getGridLayer
		GEODE_CONCEPT_FUNCTION_CHECK(getGridLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGridPos
		#define GEODE_CONCEPT_CHECK_getGridPos
		GEODE_CONCEPT_FUNCTION_CHECK(getGridPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGroundHeightForMode
		#define GEODE_CONCEPT_CHECK_getGroundHeightForMode
		GEODE_CONCEPT_FUNCTION_CHECK(getGroundHeightForMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGroup
		#define GEODE_CONCEPT_CHECK_getGroup
		GEODE_CONCEPT_FUNCTION_CHECK(getGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGroupIDFilter
		#define GEODE_CONCEPT_CHECK_getGroupIDFilter
		GEODE_CONCEPT_FUNCTION_CHECK(getGroupIDFilter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLastObjectX
		#define GEODE_CONCEPT_CHECK_getLastObjectX
		GEODE_CONCEPT_FUNCTION_CHECK(getLastObjectX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLevel
		#define GEODE_CONCEPT_CHECK_getLevel
		GEODE_CONCEPT_FUNCTION_CHECK(getLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLevelDistance
		#define GEODE_CONCEPT_CHECK_getLevelDistance
		GEODE_CONCEPT_FUNCTION_CHECK(getLevelDistance) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLevelString
		#define GEODE_CONCEPT_CHECK_getLevelString
		GEODE_CONCEPT_FUNCTION_CHECK(getLevelString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMaxPortalY
		#define GEODE_CONCEPT_CHECK_getMaxPortalY
		GEODE_CONCEPT_FUNCTION_CHECK(getMaxPortalY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMinPortalY
		#define GEODE_CONCEPT_CHECK_getMinPortalY
		GEODE_CONCEPT_FUNCTION_CHECK(getMinPortalY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNextColorChannel
		#define GEODE_CONCEPT_CHECK_getNextColorChannel
		GEODE_CONCEPT_FUNCTION_CHECK(getNextColorChannel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNextFreeGroupID
		#define GEODE_CONCEPT_CHECK_getNextFreeGroupID
		GEODE_CONCEPT_FUNCTION_CHECK(getNextFreeGroupID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getObjectCount
		#define GEODE_CONCEPT_CHECK_getObjectCount
		GEODE_CONCEPT_FUNCTION_CHECK(getObjectCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getObjectRect
		#define GEODE_CONCEPT_CHECK_getObjectRect
		GEODE_CONCEPT_FUNCTION_CHECK(getObjectRect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOldLevelString
		#define GEODE_CONCEPT_CHECK_getOldLevelString
		GEODE_CONCEPT_FUNCTION_CHECK(getOldLevelString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOtherPlayer
		#define GEODE_CONCEPT_CHECK_getOtherPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(getOtherPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPlayerState
		#define GEODE_CONCEPT_CHECK_getPlayerState
		GEODE_CONCEPT_FUNCTION_CHECK(getPlayerState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRelativeOffset
		#define GEODE_CONCEPT_CHECK_getRelativeOffset
		GEODE_CONCEPT_FUNCTION_CHECK(getRelativeOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSectionCount
		#define GEODE_CONCEPT_CHECK_getSectionCount
		GEODE_CONCEPT_FUNCTION_CHECK(getSectionCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUILayer
		#define GEODE_CONCEPT_CHECK_getUILayer
		GEODE_CONCEPT_FUNCTION_CHECK(getUILayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleAction
		#define GEODE_CONCEPT_CHECK_handleAction
		GEODE_CONCEPT_FUNCTION_CHECK(handleAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasAction
		#define GEODE_CONCEPT_CHECK_hasAction
		GEODE_CONCEPT_FUNCTION_CHECK(hasAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_objectAtPosition
		#define GEODE_CONCEPT_CHECK_objectAtPosition
		GEODE_CONCEPT_FUNCTION_CHECK(objectAtPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_objectIntersectsCircle
		#define GEODE_CONCEPT_CHECK_objectIntersectsCircle
		GEODE_CONCEPT_FUNCTION_CHECK(objectIntersectsCircle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_objectMoved
		#define GEODE_CONCEPT_CHECK_objectMoved
		GEODE_CONCEPT_FUNCTION_CHECK(objectMoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_objectsAtPosition
		#define GEODE_CONCEPT_CHECK_objectsAtPosition
		GEODE_CONCEPT_FUNCTION_CHECK(objectsAtPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_objectsInRect
		#define GEODE_CONCEPT_CHECK_objectsInRect
		GEODE_CONCEPT_FUNCTION_CHECK(objectsInRect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPausePlaytest
		#define GEODE_CONCEPT_CHECK_onPausePlaytest
		GEODE_CONCEPT_FUNCTION_CHECK(onPausePlaytest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPlaytest
		#define GEODE_CONCEPT_CHECK_onPlaytest
		GEODE_CONCEPT_FUNCTION_CHECK(onPlaytest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onResumePlaytest
		#define GEODE_CONCEPT_CHECK_onResumePlaytest
		GEODE_CONCEPT_FUNCTION_CHECK(onResumePlaytest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onStopPlaytest
		#define GEODE_CONCEPT_CHECK_onStopPlaytest
		GEODE_CONCEPT_FUNCTION_CHECK(onStopPlaytest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pasteAtributeState
		#define GEODE_CONCEPT_CHECK_pasteAtributeState
		GEODE_CONCEPT_FUNCTION_CHECK(pasteAtributeState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pasteColorState
		#define GEODE_CONCEPT_CHECK_pasteColorState
		GEODE_CONCEPT_FUNCTION_CHECK(pasteColorState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playerWillSwitchMode
		#define GEODE_CONCEPT_CHECK_playerWillSwitchMode
		GEODE_CONCEPT_FUNCTION_CHECK(playerWillSwitchMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playMusic
		#define GEODE_CONCEPT_CHECK_playMusic
		GEODE_CONCEPT_FUNCTION_CHECK(playMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_preloadMoveActions
		#define GEODE_CONCEPT_CHECK_preloadMoveActions
		GEODE_CONCEPT_FUNCTION_CHECK(preloadMoveActions) 
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

	#ifndef GEODE_CONCEPT_CHECK_recreateGroups
		#define GEODE_CONCEPT_CHECK_recreateGroups
		GEODE_CONCEPT_FUNCTION_CHECK(recreateGroups) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_redoLastAction
		#define GEODE_CONCEPT_CHECK_redoLastAction
		GEODE_CONCEPT_FUNCTION_CHECK(redoLastAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_releaseButton
		#define GEODE_CONCEPT_CHECK_releaseButton
		GEODE_CONCEPT_FUNCTION_CHECK(releaseButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeAllObjects
		#define GEODE_CONCEPT_CHECK_removeAllObjects
		GEODE_CONCEPT_FUNCTION_CHECK(removeAllObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeAllObjectsOfType
		#define GEODE_CONCEPT_CHECK_removeAllObjectsOfType
		GEODE_CONCEPT_FUNCTION_CHECK(removeAllObjectsOfType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeBackground
		#define GEODE_CONCEPT_CHECK_removeBackground
		GEODE_CONCEPT_FUNCTION_CHECK(removeBackground) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeFromGroup
		#define GEODE_CONCEPT_CHECK_removeFromGroup
		GEODE_CONCEPT_FUNCTION_CHECK(removeFromGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeGroundLayer
		#define GEODE_CONCEPT_CHECK_removeGroundLayer
		GEODE_CONCEPT_FUNCTION_CHECK(removeGroundLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeObject
		#define GEODE_CONCEPT_CHECK_removeObject
		GEODE_CONCEPT_FUNCTION_CHECK(removeObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeObjectFromSection
		#define GEODE_CONCEPT_CHECK_removeObjectFromSection
		GEODE_CONCEPT_FUNCTION_CHECK(removeObjectFromSection) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removePlayer2
		#define GEODE_CONCEPT_CHECK_removePlayer2
		GEODE_CONCEPT_FUNCTION_CHECK(removePlayer2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeSpecial
		#define GEODE_CONCEPT_CHECK_removeSpecial
		GEODE_CONCEPT_FUNCTION_CHECK(removeSpecial) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reorderObjectSection
		#define GEODE_CONCEPT_CHECK_reorderObjectSection
		GEODE_CONCEPT_FUNCTION_CHECK(reorderObjectSection) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetMovingObjects
		#define GEODE_CONCEPT_CHECK_resetMovingObjects
		GEODE_CONCEPT_FUNCTION_CHECK(resetMovingObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetObjectVector
		#define GEODE_CONCEPT_CHECK_resetObjectVector
		GEODE_CONCEPT_FUNCTION_CHECK(resetObjectVector) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetUnusedColorChannels
		#define GEODE_CONCEPT_CHECK_resetUnusedColorChannels
		GEODE_CONCEPT_FUNCTION_CHECK(resetUnusedColorChannels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rotationForSlopeNearObject
		#define GEODE_CONCEPT_CHECK_rotationForSlopeNearObject
		GEODE_CONCEPT_FUNCTION_CHECK(rotationForSlopeNearObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scene
		#define GEODE_CONCEPT_CHECK_scene
		GEODE_CONCEPT_FUNCTION_CHECK(scene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sectionForPos
		#define GEODE_CONCEPT_CHECK_sectionForPos
		GEODE_CONCEPT_FUNCTION_CHECK(sectionForPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDontApplyLayerFilter
		#define GEODE_CONCEPT_CHECK_setDontApplyLayerFilter
		GEODE_CONCEPT_FUNCTION_CHECK(setDontApplyLayerFilter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setGroupIDFilter
		#define GEODE_CONCEPT_CHECK_setGroupIDFilter
		GEODE_CONCEPT_FUNCTION_CHECK(setGroupIDFilter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setObjectCount
		#define GEODE_CONCEPT_CHECK_setObjectCount
		GEODE_CONCEPT_FUNCTION_CHECK(setObjectCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStartPosObject
		#define GEODE_CONCEPT_CHECK_setStartPosObject
		GEODE_CONCEPT_FUNCTION_CHECK(setStartPosObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupLevelStart
		#define GEODE_CONCEPT_CHECK_setupLevelStart
		GEODE_CONCEPT_FUNCTION_CHECK(setupLevelStart) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldBlend
		#define GEODE_CONCEPT_CHECK_shouldBlend
		GEODE_CONCEPT_FUNCTION_CHECK(shouldBlend) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sortBatchnodeChildren
		#define GEODE_CONCEPT_CHECK_sortBatchnodeChildren
		GEODE_CONCEPT_FUNCTION_CHECK(sortBatchnodeChildren) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spawnGroup
		#define GEODE_CONCEPT_CHECK_spawnGroup
		GEODE_CONCEPT_FUNCTION_CHECK(spawnGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spawnPlayer2
		#define GEODE_CONCEPT_CHECK_spawnPlayer2
		GEODE_CONCEPT_FUNCTION_CHECK(spawnPlayer2) 
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

	#ifndef GEODE_CONCEPT_CHECK_toggleDualMode
		#define GEODE_CONCEPT_CHECK_toggleDualMode
		GEODE_CONCEPT_FUNCTION_CHECK(toggleDualMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleGrid
		#define GEODE_CONCEPT_CHECK_toggleGrid
		GEODE_CONCEPT_FUNCTION_CHECK(toggleGrid) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleGround
		#define GEODE_CONCEPT_CHECK_toggleGround
		GEODE_CONCEPT_FUNCTION_CHECK(toggleGround) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerMoveCommand
		#define GEODE_CONCEPT_CHECK_triggerMoveCommand
		GEODE_CONCEPT_FUNCTION_CHECK(triggerMoveCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_typeExistsAtPosition
		#define GEODE_CONCEPT_CHECK_typeExistsAtPosition
		GEODE_CONCEPT_FUNCTION_CHECK(typeExistsAtPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_undoLastAction
		#define GEODE_CONCEPT_CHECK_undoLastAction
		GEODE_CONCEPT_FUNCTION_CHECK(undoLastAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDualGround
		#define GEODE_CONCEPT_CHECK_updateDualGround
		GEODE_CONCEPT_FUNCTION_CHECK(updateDualGround) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateEditorMode
		#define GEODE_CONCEPT_CHECK_updateEditorMode
		GEODE_CONCEPT_FUNCTION_CHECK(updateEditorMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateGameObjects
		#define GEODE_CONCEPT_CHECK_updateGameObjects
		GEODE_CONCEPT_FUNCTION_CHECK(updateGameObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateGround
		#define GEODE_CONCEPT_CHECK_updateGround
		GEODE_CONCEPT_FUNCTION_CHECK(updateGround) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateGroundWidth
		#define GEODE_CONCEPT_CHECK_updateGroundWidth
		GEODE_CONCEPT_FUNCTION_CHECK(updateGroundWidth) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLevelColors
		#define GEODE_CONCEPT_CHECK_updateLevelColors
		GEODE_CONCEPT_FUNCTION_CHECK(updateLevelColors) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLevelFont
		#define GEODE_CONCEPT_CHECK_updateLevelFont
		GEODE_CONCEPT_FUNCTION_CHECK(updateLevelFont) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateOBB2
		#define GEODE_CONCEPT_CHECK_updateOBB2
		GEODE_CONCEPT_FUNCTION_CHECK(updateOBB2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTimeMod
		#define GEODE_CONCEPT_CHECK_updateTimeMod
		GEODE_CONCEPT_FUNCTION_CHECK(updateTimeMod) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_validGroup
		#define GEODE_CONCEPT_CHECK_validGroup
		GEODE_CONCEPT_FUNCTION_CHECK(validGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_willSwitchToMode
		#define GEODE_CONCEPT_CHECK_willSwitchToMode
		GEODE_CONCEPT_FUNCTION_CHECK(willSwitchToMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_update
		#define GEODE_CONCEPT_CHECK_update
		GEODE_CONCEPT_FUNCTION_CHECK(update) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateVisibility
		#define GEODE_CONCEPT_CHECK_updateVisibility
		GEODE_CONCEPT_FUNCTION_CHECK(updateVisibility) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToSection
		#define GEODE_CONCEPT_CHECK_addToSection
		GEODE_CONCEPT_FUNCTION_CHECK(addToSection) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_levelSettingsUpdated
		#define GEODE_CONCEPT_CHECK_levelSettingsUpdated
		GEODE_CONCEPT_FUNCTION_CHECK(levelSettingsUpdated) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelEditorLayer> : ModifyBase<ModifyDerive<Der, LevelEditorLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelEditorLayer>>;
		using ModifyBase<ModifyDerive<Der, LevelEditorLayer>>::ModifyBase;
		using Base = LevelEditorLayer;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, create, GJGameLevel*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, addObjectFromString, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, addObjectsRecursiveFromArray, cocos2d::CCArray*, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, addSpecial, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, addToGroup, GameObject*, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, addToGroup, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, addToRedoList, UndoObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, addToUndoList, UndoObject*, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, animateInDualGround, GameObject*, float, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, breakApartTextObject, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, calculateColorValues, EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, canPasteState, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, checkCollisions, PlayerObject*, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, checkSpawnObjects, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, copyObjectState, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, createBackground, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, createGroundLayer, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, createObject, int, cocos2d::CCPoint, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, createObjectsFromSetup, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, createObjectsFromString, gd::string, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, dirtifyTriggers, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, enterDualMode, GameObject*, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, fastUpdateDisabledGroups, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, flipGravity, PlayerObject*, bool, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, fullUpdateDisabledGroups, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, getAllObjects, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, getClkTimer, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, getCoinCount, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, getDontApplyLayerFilter, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, getDualMode, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, getGridLayer, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, getGridPos, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, getGroundHeightForMode, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, getGroup, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, getGroupIDFilter, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, getLastObjectX, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, getLevel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, getLevelDistance, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, getLevelString, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, getMaxPortalY, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, getMinPortalY, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, getNextColorChannel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, getNextFreeGroupID, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, getObjectCount, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, getObjectRect, GameObject*, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, getOldLevelString, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, getOtherPlayer, PlayerObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, getPlayerState, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, getRelativeOffset, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, getSectionCount, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, getUILayer, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, handleAction, bool, cocos2d::CCArray*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, hasAction, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, init, GJGameLevel*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, objectAtPosition, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, objectIntersectsCircle, GameObject*, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, objectMoved, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, objectsAtPosition, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, objectsInRect, cocos2d::CCRect, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, onPausePlaytest, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, onPlaytest, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, onResumePlaytest, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, onStopPlaytest, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, pasteAtributeState, GameObject*, cocos2d::CCArray*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, pasteColorState, GameObject*, cocos2d::CCArray*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, playerWillSwitchMode, PlayerObject*, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, playMusic, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, preloadMoveActions, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, processLoadedMoveActions, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, processMoveActionsStep, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, pushButton, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, recreateGroups, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, redoLastAction, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, releaseButton, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, removeAllObjects, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, removeAllObjectsOfType, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, removeBackground, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, removeFromGroup, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, removeGroundLayer, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, removeObject, GameObject*, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, removeObjectFromSection, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, removePlayer2, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, removeSpecial, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, reorderObjectSection, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, resetMovingObjects, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, resetObjectVector, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, resetUnusedColorChannels, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, rotationForSlopeNearObject, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, scene, GJGameLevel*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, sectionForPos, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, setDontApplyLayerFilter, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, setGroupIDFilter, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, setObjectCount, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, setStartPosObject, StartPosObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, setupLevelStart, LevelSettingsObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, shouldBlend, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, sortBatchnodeChildren, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, spawnGroup, int, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, spawnPlayer2, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, switchToFlyMode, PlayerObject*, GameObject*, bool, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, switchToRobotMode, PlayerObject*, GameObject*, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, switchToRollMode, PlayerObject*, GameObject*, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, timeForXPos, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, toggleDualMode, GameObject*, bool, PlayerObject*, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, toggleGrid, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, toggleGround, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, triggerMoveCommand, EffectGameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, typeExistsAtPosition, int, cocos2d::CCPoint, bool, bool, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, undoLastAction, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, updateDualGround, PlayerObject*, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, updateEditorMode, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, updateGameObjects, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, updateGround, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, updateGroundWidth, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, updateLevelColors, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, updateLevelFont, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, updateOBB2, cocos2d::CCRect)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, updateTimeMod, float, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, validGroup, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, willSwitchToMode, int, PlayerObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, update, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, draw, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, updateVisibility, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, addToSection, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, removeFromGroup, GameObject*, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelEditorLayer, levelSettingsUpdated, )
		}
	};
}
