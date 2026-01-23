#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJEffectManager.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_activeColorForIndex
		#define GEODE_STATICS_activeColorForIndex
		GEODE_AS_STATIC_FUNCTION(activeColorForIndex) 
	#endif

	#ifndef GEODE_STATICS_activeOpacityForIndex
		#define GEODE_STATICS_activeOpacityForIndex
		GEODE_AS_STATIC_FUNCTION(activeOpacityForIndex) 
	#endif

	#ifndef GEODE_STATICS_addAllInheritedColorActions
		#define GEODE_STATICS_addAllInheritedColorActions
		GEODE_AS_STATIC_FUNCTION(addAllInheritedColorActions) 
	#endif

	#ifndef GEODE_STATICS_addGroupPulseEffect
		#define GEODE_STATICS_addGroupPulseEffect
		GEODE_AS_STATIC_FUNCTION(addGroupPulseEffect) 
	#endif

	#ifndef GEODE_STATICS_calculateBaseActiveColors
		#define GEODE_STATICS_calculateBaseActiveColors
		GEODE_AS_STATIC_FUNCTION(calculateBaseActiveColors) 
	#endif

	#ifndef GEODE_STATICS_calculateInheritedColor
		#define GEODE_STATICS_calculateInheritedColor
		GEODE_AS_STATIC_FUNCTION(calculateInheritedColor) 
	#endif

	#ifndef GEODE_STATICS_calculateLightBGColor
		#define GEODE_STATICS_calculateLightBGColor
		GEODE_AS_STATIC_FUNCTION(calculateLightBGColor) 
	#endif

	#ifndef GEODE_STATICS_colorExists
		#define GEODE_STATICS_colorExists
		GEODE_AS_STATIC_FUNCTION(colorExists) 
	#endif

	#ifndef GEODE_STATICS_colorForEffect
		#define GEODE_STATICS_colorForEffect
		GEODE_AS_STATIC_FUNCTION(colorForEffect) 
	#endif

	#ifndef GEODE_STATICS_colorForGroupID
		#define GEODE_STATICS_colorForGroupID
		GEODE_AS_STATIC_FUNCTION(colorForGroupID) 
	#endif

	#ifndef GEODE_STATICS_colorForIndex
		#define GEODE_STATICS_colorForIndex
		GEODE_AS_STATIC_FUNCTION(colorForIndex) 
	#endif

	#ifndef GEODE_STATICS_colorForPulseEffect
		#define GEODE_STATICS_colorForPulseEffect
		GEODE_AS_STATIC_FUNCTION(colorForPulseEffect) 
	#endif

	#ifndef GEODE_STATICS_createMoveCommand
		#define GEODE_STATICS_createMoveCommand
		GEODE_AS_STATIC_FUNCTION(createMoveCommand) 
	#endif

	#ifndef GEODE_STATICS_getAllColorActions
		#define GEODE_STATICS_getAllColorActions
		GEODE_AS_STATIC_FUNCTION(getAllColorActions) 
	#endif

	#ifndef GEODE_STATICS_getAllColorSprites
		#define GEODE_STATICS_getAllColorSprites
		GEODE_AS_STATIC_FUNCTION(getAllColorSprites) 
	#endif

	#ifndef GEODE_STATICS_getAllDisabledGroups
		#define GEODE_STATICS_getAllDisabledGroups
		GEODE_AS_STATIC_FUNCTION(getAllDisabledGroups) 
	#endif

	#ifndef GEODE_STATICS_getClkTimer
		#define GEODE_STATICS_getClkTimer
		GEODE_AS_STATIC_FUNCTION(getClkTimer) 
	#endif

	#ifndef GEODE_STATICS_getColorAction
		#define GEODE_STATICS_getColorAction
		GEODE_AS_STATIC_FUNCTION(getColorAction) 
	#endif

	#ifndef GEODE_STATICS_getColorSprite
		#define GEODE_STATICS_getColorSprite
		GEODE_AS_STATIC_FUNCTION(getColorSprite) 
	#endif

	#ifndef GEODE_STATICS_getCurrentStateString
		#define GEODE_STATICS_getCurrentStateString
		GEODE_AS_STATIC_FUNCTION(getCurrentStateString) 
	#endif

	#ifndef GEODE_STATICS_getDeltaMoveActionsDict
		#define GEODE_STATICS_getDeltaMoveActionsDict
		GEODE_AS_STATIC_FUNCTION(getDeltaMoveActionsDict) 
	#endif

	#ifndef GEODE_STATICS_getLoadedMoveOffset
		#define GEODE_STATICS_getLoadedMoveOffset
		GEODE_AS_STATIC_FUNCTION(getLoadedMoveOffset) 
	#endif

	#ifndef GEODE_STATICS_getMixedColor
		#define GEODE_STATICS_getMixedColor
		GEODE_AS_STATIC_FUNCTION(getMixedColor) 
	#endif

	#ifndef GEODE_STATICS_getPlayerXVelocity
		#define GEODE_STATICS_getPlayerXVelocity
		GEODE_AS_STATIC_FUNCTION(getPlayerXVelocity) 
	#endif

	#ifndef GEODE_STATICS_getPlayerYVelocity
		#define GEODE_STATICS_getPlayerYVelocity
		GEODE_AS_STATIC_FUNCTION(getPlayerYVelocity) 
	#endif

	#ifndef GEODE_STATICS_getSaveString
		#define GEODE_STATICS_getSaveString
		GEODE_AS_STATIC_FUNCTION(getSaveString) 
	#endif

	#ifndef GEODE_STATICS_getSpawnDelegate
		#define GEODE_STATICS_getSpawnDelegate
		GEODE_AS_STATIC_FUNCTION(getSpawnDelegate) 
	#endif

	#ifndef GEODE_STATICS_hasBeenTriggered
		#define GEODE_STATICS_hasBeenTriggered
		GEODE_AS_STATIC_FUNCTION(hasBeenTriggered) 
	#endif

	#ifndef GEODE_STATICS_hasPulseEffectForGroupID
		#define GEODE_STATICS_hasPulseEffectForGroupID
		GEODE_AS_STATIC_FUNCTION(hasPulseEffectForGroupID) 
	#endif

	#ifndef GEODE_STATICS_isGroupEnabled
		#define GEODE_STATICS_isGroupEnabled
		GEODE_AS_STATIC_FUNCTION(isGroupEnabled) 
	#endif

	#ifndef GEODE_STATICS_keyForGroupIDColor
		#define GEODE_STATICS_keyForGroupIDColor
		GEODE_AS_STATIC_FUNCTION(keyForGroupIDColor) 
	#endif

	#ifndef GEODE_STATICS_loadState
		#define GEODE_STATICS_loadState
		GEODE_AS_STATIC_FUNCTION(loadState) 
	#endif

	#ifndef GEODE_STATICS_opacityForIndex
		#define GEODE_STATICS_opacityForIndex
		GEODE_AS_STATIC_FUNCTION(opacityForIndex) 
	#endif

	#ifndef GEODE_STATICS_opacityModForGroup
		#define GEODE_STATICS_opacityModForGroup
		GEODE_AS_STATIC_FUNCTION(opacityModForGroup) 
	#endif

	#ifndef GEODE_STATICS_prepareMoveActions
		#define GEODE_STATICS_prepareMoveActions
		GEODE_AS_STATIC_FUNCTION(prepareMoveActions) 
	#endif

	#ifndef GEODE_STATICS_processColors
		#define GEODE_STATICS_processColors
		GEODE_AS_STATIC_FUNCTION(processColors) 
	#endif

	#ifndef GEODE_STATICS_processCopyColorPulseActions
		#define GEODE_STATICS_processCopyColorPulseActions
		GEODE_AS_STATIC_FUNCTION(processCopyColorPulseActions) 
	#endif

	#ifndef GEODE_STATICS_processInheritedColors
		#define GEODE_STATICS_processInheritedColors
		GEODE_AS_STATIC_FUNCTION(processInheritedColors) 
	#endif

	#ifndef GEODE_STATICS_processPulseActions
		#define GEODE_STATICS_processPulseActions
		GEODE_AS_STATIC_FUNCTION(processPulseActions) 
	#endif

	#ifndef GEODE_STATICS_removeAllPulseActions
		#define GEODE_STATICS_removeAllPulseActions
		GEODE_AS_STATIC_FUNCTION(removeAllPulseActions) 
	#endif

	#ifndef GEODE_STATICS_removeColorAction
		#define GEODE_STATICS_removeColorAction
		GEODE_AS_STATIC_FUNCTION(removeColorAction) 
	#endif

	#ifndef GEODE_STATICS_reset
		#define GEODE_STATICS_reset
		GEODE_AS_STATIC_FUNCTION(reset) 
	#endif

	#ifndef GEODE_STATICS_resetColorCache
		#define GEODE_STATICS_resetColorCache
		GEODE_AS_STATIC_FUNCTION(resetColorCache) 
	#endif

	#ifndef GEODE_STATICS_resetEffects
		#define GEODE_STATICS_resetEffects
		GEODE_AS_STATIC_FUNCTION(resetEffects) 
	#endif

	#ifndef GEODE_STATICS_resetMoveActions
		#define GEODE_STATICS_resetMoveActions
		GEODE_AS_STATIC_FUNCTION(resetMoveActions) 
	#endif

	#ifndef GEODE_STATICS_resetToggledGroups
		#define GEODE_STATICS_resetToggledGroups
		GEODE_AS_STATIC_FUNCTION(resetToggledGroups) 
	#endif

	#ifndef GEODE_STATICS_resetTriggeredIDs
		#define GEODE_STATICS_resetTriggeredIDs
		GEODE_AS_STATIC_FUNCTION(resetTriggeredIDs) 
	#endif

	#ifndef GEODE_STATICS_runOpacityActionOnGroup
		#define GEODE_STATICS_runOpacityActionOnGroup
		GEODE_AS_STATIC_FUNCTION(runOpacityActionOnGroup) 
	#endif

	#ifndef GEODE_STATICS_runPulseEffect
		#define GEODE_STATICS_runPulseEffect
		GEODE_AS_STATIC_FUNCTION(runPulseEffect) 
	#endif

	#ifndef GEODE_STATICS_setClkTimer
		#define GEODE_STATICS_setClkTimer
		GEODE_AS_STATIC_FUNCTION(setClkTimer) 
	#endif

	#ifndef GEODE_STATICS_setColorAction
		#define GEODE_STATICS_setColorAction
		GEODE_AS_STATIC_FUNCTION(setColorAction) 
	#endif

	#ifndef GEODE_STATICS_setPlayerXVelocity
		#define GEODE_STATICS_setPlayerXVelocity
		GEODE_AS_STATIC_FUNCTION(setPlayerXVelocity) 
	#endif

	#ifndef GEODE_STATICS_setPlayerYVelocity
		#define GEODE_STATICS_setPlayerYVelocity
		GEODE_AS_STATIC_FUNCTION(setPlayerYVelocity) 
	#endif

	#ifndef GEODE_STATICS_setSpawnDelegate
		#define GEODE_STATICS_setSpawnDelegate
		GEODE_AS_STATIC_FUNCTION(setSpawnDelegate) 
	#endif

	#ifndef GEODE_STATICS_setupFromString
		#define GEODE_STATICS_setupFromString
		GEODE_AS_STATIC_FUNCTION(setupFromString) 
	#endif

	#ifndef GEODE_STATICS_shouldBlend
		#define GEODE_STATICS_shouldBlend
		GEODE_AS_STATIC_FUNCTION(shouldBlend) 
	#endif

	#ifndef GEODE_STATICS_spawnGroup
		#define GEODE_STATICS_spawnGroup
		GEODE_AS_STATIC_FUNCTION(spawnGroup) 
	#endif

	#ifndef GEODE_STATICS_storeTriggeredID
		#define GEODE_STATICS_storeTriggeredID
		GEODE_AS_STATIC_FUNCTION(storeTriggeredID) 
	#endif

	#ifndef GEODE_STATICS_toggleGroup
		#define GEODE_STATICS_toggleGroup
		GEODE_AS_STATIC_FUNCTION(toggleGroup) 
	#endif

	#ifndef GEODE_STATICS_traverseInheritanceChain
		#define GEODE_STATICS_traverseInheritanceChain
		GEODE_AS_STATIC_FUNCTION(traverseInheritanceChain) 
	#endif

	#ifndef GEODE_STATICS_updateActiveOpacityEffects
		#define GEODE_STATICS_updateActiveOpacityEffects
		GEODE_AS_STATIC_FUNCTION(updateActiveOpacityEffects) 
	#endif

	#ifndef GEODE_STATICS_updateColorEffects
		#define GEODE_STATICS_updateColorEffects
		GEODE_AS_STATIC_FUNCTION(updateColorEffects) 
	#endif

	#ifndef GEODE_STATICS_updateColors
		#define GEODE_STATICS_updateColors
		GEODE_AS_STATIC_FUNCTION(updateColors) 
	#endif

	#ifndef GEODE_STATICS_updateEffects
		#define GEODE_STATICS_updateEffects
		GEODE_AS_STATIC_FUNCTION(updateEffects) 
	#endif

	#ifndef GEODE_STATICS_updateOpacityEffects
		#define GEODE_STATICS_updateOpacityEffects
		GEODE_AS_STATIC_FUNCTION(updateOpacityEffects) 
	#endif

	#ifndef GEODE_STATICS_updatePulseEffects
		#define GEODE_STATICS_updatePulseEffects
		GEODE_AS_STATIC_FUNCTION(updatePulseEffects) 
	#endif

	#ifndef GEODE_STATICS_updateSpawnTriggers
		#define GEODE_STATICS_updateSpawnTriggers
		GEODE_AS_STATIC_FUNCTION(updateSpawnTriggers) 
	#endif

	#ifndef GEODE_STATICS_wouldCreateLoop
		#define GEODE_STATICS_wouldCreateLoop
		GEODE_AS_STATIC_FUNCTION(wouldCreateLoop) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activeColorForIndex
		#define GEODE_CONCEPT_CHECK_activeColorForIndex
		GEODE_CONCEPT_FUNCTION_CHECK(activeColorForIndex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activeOpacityForIndex
		#define GEODE_CONCEPT_CHECK_activeOpacityForIndex
		GEODE_CONCEPT_FUNCTION_CHECK(activeOpacityForIndex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addAllInheritedColorActions
		#define GEODE_CONCEPT_CHECK_addAllInheritedColorActions
		GEODE_CONCEPT_FUNCTION_CHECK(addAllInheritedColorActions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addGroupPulseEffect
		#define GEODE_CONCEPT_CHECK_addGroupPulseEffect
		GEODE_CONCEPT_FUNCTION_CHECK(addGroupPulseEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_calculateBaseActiveColors
		#define GEODE_CONCEPT_CHECK_calculateBaseActiveColors
		GEODE_CONCEPT_FUNCTION_CHECK(calculateBaseActiveColors) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_calculateInheritedColor
		#define GEODE_CONCEPT_CHECK_calculateInheritedColor
		GEODE_CONCEPT_FUNCTION_CHECK(calculateInheritedColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_calculateLightBGColor
		#define GEODE_CONCEPT_CHECK_calculateLightBGColor
		GEODE_CONCEPT_FUNCTION_CHECK(calculateLightBGColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_colorExists
		#define GEODE_CONCEPT_CHECK_colorExists
		GEODE_CONCEPT_FUNCTION_CHECK(colorExists) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_colorForEffect
		#define GEODE_CONCEPT_CHECK_colorForEffect
		GEODE_CONCEPT_FUNCTION_CHECK(colorForEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_colorForGroupID
		#define GEODE_CONCEPT_CHECK_colorForGroupID
		GEODE_CONCEPT_FUNCTION_CHECK(colorForGroupID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_colorForIndex
		#define GEODE_CONCEPT_CHECK_colorForIndex
		GEODE_CONCEPT_FUNCTION_CHECK(colorForIndex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_colorForPulseEffect
		#define GEODE_CONCEPT_CHECK_colorForPulseEffect
		GEODE_CONCEPT_FUNCTION_CHECK(colorForPulseEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createMoveCommand
		#define GEODE_CONCEPT_CHECK_createMoveCommand
		GEODE_CONCEPT_FUNCTION_CHECK(createMoveCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAllColorActions
		#define GEODE_CONCEPT_CHECK_getAllColorActions
		GEODE_CONCEPT_FUNCTION_CHECK(getAllColorActions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAllColorSprites
		#define GEODE_CONCEPT_CHECK_getAllColorSprites
		GEODE_CONCEPT_FUNCTION_CHECK(getAllColorSprites) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAllDisabledGroups
		#define GEODE_CONCEPT_CHECK_getAllDisabledGroups
		GEODE_CONCEPT_FUNCTION_CHECK(getAllDisabledGroups) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getClkTimer
		#define GEODE_CONCEPT_CHECK_getClkTimer
		GEODE_CONCEPT_FUNCTION_CHECK(getClkTimer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getColorAction
		#define GEODE_CONCEPT_CHECK_getColorAction
		GEODE_CONCEPT_FUNCTION_CHECK(getColorAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getColorSprite
		#define GEODE_CONCEPT_CHECK_getColorSprite
		GEODE_CONCEPT_FUNCTION_CHECK(getColorSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCurrentStateString
		#define GEODE_CONCEPT_CHECK_getCurrentStateString
		GEODE_CONCEPT_FUNCTION_CHECK(getCurrentStateString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDeltaMoveActionsDict
		#define GEODE_CONCEPT_CHECK_getDeltaMoveActionsDict
		GEODE_CONCEPT_FUNCTION_CHECK(getDeltaMoveActionsDict) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLoadedMoveOffset
		#define GEODE_CONCEPT_CHECK_getLoadedMoveOffset
		GEODE_CONCEPT_FUNCTION_CHECK(getLoadedMoveOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMixedColor
		#define GEODE_CONCEPT_CHECK_getMixedColor
		GEODE_CONCEPT_FUNCTION_CHECK(getMixedColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPlayerXVelocity
		#define GEODE_CONCEPT_CHECK_getPlayerXVelocity
		GEODE_CONCEPT_FUNCTION_CHECK(getPlayerXVelocity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPlayerYVelocity
		#define GEODE_CONCEPT_CHECK_getPlayerYVelocity
		GEODE_CONCEPT_FUNCTION_CHECK(getPlayerYVelocity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSaveString
		#define GEODE_CONCEPT_CHECK_getSaveString
		GEODE_CONCEPT_FUNCTION_CHECK(getSaveString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSpawnDelegate
		#define GEODE_CONCEPT_CHECK_getSpawnDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(getSpawnDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasBeenTriggered
		#define GEODE_CONCEPT_CHECK_hasBeenTriggered
		GEODE_CONCEPT_FUNCTION_CHECK(hasBeenTriggered) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasPulseEffectForGroupID
		#define GEODE_CONCEPT_CHECK_hasPulseEffectForGroupID
		GEODE_CONCEPT_FUNCTION_CHECK(hasPulseEffectForGroupID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isGroupEnabled
		#define GEODE_CONCEPT_CHECK_isGroupEnabled
		GEODE_CONCEPT_FUNCTION_CHECK(isGroupEnabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyForGroupIDColor
		#define GEODE_CONCEPT_CHECK_keyForGroupIDColor
		GEODE_CONCEPT_FUNCTION_CHECK(keyForGroupIDColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadState
		#define GEODE_CONCEPT_CHECK_loadState
		GEODE_CONCEPT_FUNCTION_CHECK(loadState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_opacityForIndex
		#define GEODE_CONCEPT_CHECK_opacityForIndex
		GEODE_CONCEPT_FUNCTION_CHECK(opacityForIndex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_opacityModForGroup
		#define GEODE_CONCEPT_CHECK_opacityModForGroup
		GEODE_CONCEPT_FUNCTION_CHECK(opacityModForGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_prepareMoveActions
		#define GEODE_CONCEPT_CHECK_prepareMoveActions
		GEODE_CONCEPT_FUNCTION_CHECK(prepareMoveActions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processColors
		#define GEODE_CONCEPT_CHECK_processColors
		GEODE_CONCEPT_FUNCTION_CHECK(processColors) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processCopyColorPulseActions
		#define GEODE_CONCEPT_CHECK_processCopyColorPulseActions
		GEODE_CONCEPT_FUNCTION_CHECK(processCopyColorPulseActions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processInheritedColors
		#define GEODE_CONCEPT_CHECK_processInheritedColors
		GEODE_CONCEPT_FUNCTION_CHECK(processInheritedColors) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processPulseActions
		#define GEODE_CONCEPT_CHECK_processPulseActions
		GEODE_CONCEPT_FUNCTION_CHECK(processPulseActions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeAllPulseActions
		#define GEODE_CONCEPT_CHECK_removeAllPulseActions
		GEODE_CONCEPT_FUNCTION_CHECK(removeAllPulseActions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeColorAction
		#define GEODE_CONCEPT_CHECK_removeColorAction
		GEODE_CONCEPT_FUNCTION_CHECK(removeColorAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reset
		#define GEODE_CONCEPT_CHECK_reset
		GEODE_CONCEPT_FUNCTION_CHECK(reset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetColorCache
		#define GEODE_CONCEPT_CHECK_resetColorCache
		GEODE_CONCEPT_FUNCTION_CHECK(resetColorCache) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetEffects
		#define GEODE_CONCEPT_CHECK_resetEffects
		GEODE_CONCEPT_FUNCTION_CHECK(resetEffects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetMoveActions
		#define GEODE_CONCEPT_CHECK_resetMoveActions
		GEODE_CONCEPT_FUNCTION_CHECK(resetMoveActions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetToggledGroups
		#define GEODE_CONCEPT_CHECK_resetToggledGroups
		GEODE_CONCEPT_FUNCTION_CHECK(resetToggledGroups) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetTriggeredIDs
		#define GEODE_CONCEPT_CHECK_resetTriggeredIDs
		GEODE_CONCEPT_FUNCTION_CHECK(resetTriggeredIDs) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_runOpacityActionOnGroup
		#define GEODE_CONCEPT_CHECK_runOpacityActionOnGroup
		GEODE_CONCEPT_FUNCTION_CHECK(runOpacityActionOnGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_runPulseEffect
		#define GEODE_CONCEPT_CHECK_runPulseEffect
		GEODE_CONCEPT_FUNCTION_CHECK(runPulseEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setClkTimer
		#define GEODE_CONCEPT_CHECK_setClkTimer
		GEODE_CONCEPT_FUNCTION_CHECK(setClkTimer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setColorAction
		#define GEODE_CONCEPT_CHECK_setColorAction
		GEODE_CONCEPT_FUNCTION_CHECK(setColorAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPlayerXVelocity
		#define GEODE_CONCEPT_CHECK_setPlayerXVelocity
		GEODE_CONCEPT_FUNCTION_CHECK(setPlayerXVelocity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPlayerYVelocity
		#define GEODE_CONCEPT_CHECK_setPlayerYVelocity
		GEODE_CONCEPT_FUNCTION_CHECK(setPlayerYVelocity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSpawnDelegate
		#define GEODE_CONCEPT_CHECK_setSpawnDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(setSpawnDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupFromString
		#define GEODE_CONCEPT_CHECK_setupFromString
		GEODE_CONCEPT_FUNCTION_CHECK(setupFromString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldBlend
		#define GEODE_CONCEPT_CHECK_shouldBlend
		GEODE_CONCEPT_FUNCTION_CHECK(shouldBlend) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spawnGroup
		#define GEODE_CONCEPT_CHECK_spawnGroup
		GEODE_CONCEPT_FUNCTION_CHECK(spawnGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeTriggeredID
		#define GEODE_CONCEPT_CHECK_storeTriggeredID
		GEODE_CONCEPT_FUNCTION_CHECK(storeTriggeredID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleGroup
		#define GEODE_CONCEPT_CHECK_toggleGroup
		GEODE_CONCEPT_FUNCTION_CHECK(toggleGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_traverseInheritanceChain
		#define GEODE_CONCEPT_CHECK_traverseInheritanceChain
		GEODE_CONCEPT_FUNCTION_CHECK(traverseInheritanceChain) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateActiveOpacityEffects
		#define GEODE_CONCEPT_CHECK_updateActiveOpacityEffects
		GEODE_CONCEPT_FUNCTION_CHECK(updateActiveOpacityEffects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateColorEffects
		#define GEODE_CONCEPT_CHECK_updateColorEffects
		GEODE_CONCEPT_FUNCTION_CHECK(updateColorEffects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateColors
		#define GEODE_CONCEPT_CHECK_updateColors
		GEODE_CONCEPT_FUNCTION_CHECK(updateColors) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateEffects
		#define GEODE_CONCEPT_CHECK_updateEffects
		GEODE_CONCEPT_FUNCTION_CHECK(updateEffects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateOpacityEffects
		#define GEODE_CONCEPT_CHECK_updateOpacityEffects
		GEODE_CONCEPT_FUNCTION_CHECK(updateOpacityEffects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePulseEffects
		#define GEODE_CONCEPT_CHECK_updatePulseEffects
		GEODE_CONCEPT_FUNCTION_CHECK(updatePulseEffects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSpawnTriggers
		#define GEODE_CONCEPT_CHECK_updateSpawnTriggers
		GEODE_CONCEPT_FUNCTION_CHECK(updateSpawnTriggers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_wouldCreateLoop
		#define GEODE_CONCEPT_CHECK_wouldCreateLoop
		GEODE_CONCEPT_FUNCTION_CHECK(wouldCreateLoop) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJEffectManager> : ModifyBase<ModifyDerive<Der, GJEffectManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJEffectManager>>;
		using ModifyBase<ModifyDerive<Der, GJEffectManager>>::ModifyBase;
		using Base = GJEffectManager;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, create, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, activeColorForIndex, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, activeOpacityForIndex, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, addAllInheritedColorActions, cocos2d::CCArray*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, addGroupPulseEffect, PulseEffectAction*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, calculateBaseActiveColors, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, calculateInheritedColor, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, calculateLightBGColor, cocos2d::ccColor3B)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, colorExists, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, colorForEffect, cocos2d::ccColor3B, cocos2d::ccHSVValue)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, colorForGroupID, int, cocos2d::ccColor3B const&, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, colorForIndex, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, colorForPulseEffect, cocos2d::ccColor3B const&, PulseEffectAction*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, createMoveCommand, cocos2d::CCPoint, int, float, int, bool, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, getAllColorActions, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, getAllColorSprites, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, getAllDisabledGroups, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, getClkTimer, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, getColorAction, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, getColorSprite, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, getCurrentStateString, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, getDeltaMoveActionsDict, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, getLoadedMoveOffset, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, getMixedColor, cocos2d::ccColor3B, cocos2d::ccColor3B, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, getPlayerXVelocity, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, getPlayerYVelocity, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, getSaveString, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, getSpawnDelegate, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, hasBeenTriggered, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, hasPulseEffectForGroupID, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, isGroupEnabled, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, keyForGroupIDColor, int, cocos2d::ccColor3B const&, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, loadState, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, opacityForIndex, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, opacityModForGroup, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, prepareMoveActions, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, processColors, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, processCopyColorPulseActions, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, processInheritedColors, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, processPulseActions, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, removeAllPulseActions, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, removeColorAction, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, reset, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, resetColorCache, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, resetEffects, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, resetMoveActions, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, resetToggledGroups, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, resetTriggeredIDs, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, runOpacityActionOnGroup, int, float, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, runPulseEffect, int, bool, float, float, float, PulseEffectType, cocos2d::ccColor3B, cocos2d::ccHSVValue, int, bool, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, setClkTimer, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, setColorAction, ColorAction*, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, setPlayerXVelocity, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, setPlayerYVelocity, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, setSpawnDelegate, SpawnTriggerDelegate*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, setupFromString, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, shouldBlend, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, spawnGroup, int, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, storeTriggeredID, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, toggleGroup, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, traverseInheritanceChain, InheritanceNode*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, updateActiveOpacityEffects, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, updateColorEffects, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, updateColors, cocos2d::ccColor3B, cocos2d::ccColor3B)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, updateEffects, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, updateOpacityEffects, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, updatePulseEffects, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, updateSpawnTriggers, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, wouldCreateLoop, InheritanceNode*, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, init, )
		}
	};
}
