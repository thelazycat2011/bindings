#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EffectGameObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_customObjectSetup
		#define GEODE_STATICS_customObjectSetup
		GEODE_AS_STATIC_FUNCTION(customObjectSetup) 
	#endif

	#ifndef GEODE_STATICS_getCopyColorIdx
		#define GEODE_STATICS_getCopyColorIdx
		GEODE_AS_STATIC_FUNCTION(getCopyColorIdx) 
	#endif

	#ifndef GEODE_STATICS_getCopyOpacity
		#define GEODE_STATICS_getCopyOpacity
		GEODE_AS_STATIC_FUNCTION(getCopyOpacity) 
	#endif

	#ifndef GEODE_STATICS_getCopyPlayerColor1
		#define GEODE_STATICS_getCopyPlayerColor1
		GEODE_AS_STATIC_FUNCTION(getCopyPlayerColor1) 
	#endif

	#ifndef GEODE_STATICS_getCopyPlayerColor2
		#define GEODE_STATICS_getCopyPlayerColor2
		GEODE_AS_STATIC_FUNCTION(getCopyPlayerColor2) 
	#endif

	#ifndef GEODE_STATICS_getCustomColorBlend
		#define GEODE_STATICS_getCustomColorBlend
		GEODE_AS_STATIC_FUNCTION(getCustomColorBlend) 
	#endif

	#ifndef GEODE_STATICS_getEffectDuration
		#define GEODE_STATICS_getEffectDuration
		GEODE_AS_STATIC_FUNCTION(getEffectDuration) 
	#endif

	#ifndef GEODE_STATICS_getEffectOrder
		#define GEODE_STATICS_getEffectOrder
		GEODE_AS_STATIC_FUNCTION(getEffectOrder) 
	#endif

	#ifndef GEODE_STATICS_getEffectSpawnPos
		#define GEODE_STATICS_getEffectSpawnPos
		GEODE_AS_STATIC_FUNCTION(getEffectSpawnPos) 
	#endif

	#ifndef GEODE_STATICS_getEnableGroup
		#define GEODE_STATICS_getEnableGroup
		GEODE_AS_STATIC_FUNCTION(getEnableGroup) 
	#endif

	#ifndef GEODE_STATICS_getFadeInTime
		#define GEODE_STATICS_getFadeInTime
		GEODE_AS_STATIC_FUNCTION(getFadeInTime) 
	#endif

	#ifndef GEODE_STATICS_getFadeOutTime
		#define GEODE_STATICS_getFadeOutTime
		GEODE_AS_STATIC_FUNCTION(getFadeOutTime) 
	#endif

	#ifndef GEODE_STATICS_getFromColor
		#define GEODE_STATICS_getFromColor
		GEODE_AS_STATIC_FUNCTION(getFromColor) 
	#endif

	#ifndef GEODE_STATICS_getFromOpacity
		#define GEODE_STATICS_getFromOpacity
		GEODE_AS_STATIC_FUNCTION(getFromOpacity) 
	#endif

	#ifndef GEODE_STATICS_getGroupMainOnly
		#define GEODE_STATICS_getGroupMainOnly
		GEODE_AS_STATIC_FUNCTION(getGroupMainOnly) 
	#endif

	#ifndef GEODE_STATICS_getGroupSecondaryOnly
		#define GEODE_STATICS_getGroupSecondaryOnly
		GEODE_AS_STATIC_FUNCTION(getGroupSecondaryOnly) 
	#endif

	#ifndef GEODE_STATICS_getHoldTime
		#define GEODE_STATICS_getHoldTime
		GEODE_AS_STATIC_FUNCTION(getHoldTime) 
	#endif

	#ifndef GEODE_STATICS_getHSVValue
		#define GEODE_STATICS_getHSVValue
		GEODE_AS_STATIC_FUNCTION(getHSVValue) 
	#endif

	#ifndef GEODE_STATICS_getMoveCommandEasing
		#define GEODE_STATICS_getMoveCommandEasing
		GEODE_AS_STATIC_FUNCTION(getMoveCommandEasing) 
	#endif

	#ifndef GEODE_STATICS_getMoveCommandPos
		#define GEODE_STATICS_getMoveCommandPos
		GEODE_AS_STATIC_FUNCTION(getMoveCommandPos) 
	#endif

	#ifndef GEODE_STATICS_getMoveLockX
		#define GEODE_STATICS_getMoveLockX
		GEODE_AS_STATIC_FUNCTION(getMoveLockX) 
	#endif

	#ifndef GEODE_STATICS_getMoveLockY
		#define GEODE_STATICS_getMoveLockY
		GEODE_AS_STATIC_FUNCTION(getMoveLockY) 
	#endif

	#ifndef GEODE_STATICS_getNextObject
		#define GEODE_STATICS_getNextObject
		GEODE_AS_STATIC_FUNCTION(getNextObject) 
	#endif

	#ifndef GEODE_STATICS_getPulseMode
		#define GEODE_STATICS_getPulseMode
		GEODE_AS_STATIC_FUNCTION(getPulseMode) 
	#endif

	#ifndef GEODE_STATICS_getPulseTargetType
		#define GEODE_STATICS_getPulseTargetType
		GEODE_AS_STATIC_FUNCTION(getPulseTargetType) 
	#endif

	#ifndef GEODE_STATICS_getSaveString
		#define GEODE_STATICS_getSaveString
		GEODE_AS_STATIC_FUNCTION(getSaveString) 
	#endif

	#ifndef GEODE_STATICS_getSpawnDelay
		#define GEODE_STATICS_getSpawnDelay
		GEODE_AS_STATIC_FUNCTION(getSpawnDelay) 
	#endif

	#ifndef GEODE_STATICS_getStartTime
		#define GEODE_STATICS_getStartTime
		GEODE_AS_STATIC_FUNCTION(getStartTime) 
	#endif

	#ifndef GEODE_STATICS_getTargetColorIndex
		#define GEODE_STATICS_getTargetColorIndex
		GEODE_AS_STATIC_FUNCTION(getTargetColorIndex) 
	#endif

	#ifndef GEODE_STATICS_getTargetID
		#define GEODE_STATICS_getTargetID
		GEODE_AS_STATIC_FUNCTION(getTargetID) 
	#endif

	#ifndef GEODE_STATICS_getTargetOpacity
		#define GEODE_STATICS_getTargetOpacity
		GEODE_AS_STATIC_FUNCTION(getTargetOpacity) 
	#endif

	#ifndef GEODE_STATICS_getTintColor
		#define GEODE_STATICS_getTintColor
		GEODE_AS_STATIC_FUNCTION(getTintColor) 
	#endif

	#ifndef GEODE_STATICS_getTintGround
		#define GEODE_STATICS_getTintGround
		GEODE_AS_STATIC_FUNCTION(getTintGround) 
	#endif

	#ifndef GEODE_STATICS_getToColor
		#define GEODE_STATICS_getToColor
		GEODE_AS_STATIC_FUNCTION(getToColor) 
	#endif

	#ifndef GEODE_STATICS_getToOpacity
		#define GEODE_STATICS_getToOpacity
		GEODE_AS_STATIC_FUNCTION(getToOpacity) 
	#endif

	#ifndef GEODE_STATICS_getWasProcessed
		#define GEODE_STATICS_getWasProcessed
		GEODE_AS_STATIC_FUNCTION(getWasProcessed) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setCopyColorIdx
		#define GEODE_STATICS_setCopyColorIdx
		GEODE_AS_STATIC_FUNCTION(setCopyColorIdx) 
	#endif

	#ifndef GEODE_STATICS_setCopyOpacity
		#define GEODE_STATICS_setCopyOpacity
		GEODE_AS_STATIC_FUNCTION(setCopyOpacity) 
	#endif

	#ifndef GEODE_STATICS_setCopyPlayerColor1
		#define GEODE_STATICS_setCopyPlayerColor1
		GEODE_AS_STATIC_FUNCTION(setCopyPlayerColor1) 
	#endif

	#ifndef GEODE_STATICS_setCopyPlayerColor2
		#define GEODE_STATICS_setCopyPlayerColor2
		GEODE_AS_STATIC_FUNCTION(setCopyPlayerColor2) 
	#endif

	#ifndef GEODE_STATICS_setCustomColorBlend
		#define GEODE_STATICS_setCustomColorBlend
		GEODE_AS_STATIC_FUNCTION(setCustomColorBlend) 
	#endif

	#ifndef GEODE_STATICS_setEffectDuration
		#define GEODE_STATICS_setEffectDuration
		GEODE_AS_STATIC_FUNCTION(setEffectDuration) 
	#endif

	#ifndef GEODE_STATICS_setEffectOrder
		#define GEODE_STATICS_setEffectOrder
		GEODE_AS_STATIC_FUNCTION(setEffectOrder) 
	#endif

	#ifndef GEODE_STATICS_setEffectSpawnPos
		#define GEODE_STATICS_setEffectSpawnPos
		GEODE_AS_STATIC_FUNCTION(setEffectSpawnPos) 
	#endif

	#ifndef GEODE_STATICS_setEnableGroup
		#define GEODE_STATICS_setEnableGroup
		GEODE_AS_STATIC_FUNCTION(setEnableGroup) 
	#endif

	#ifndef GEODE_STATICS_setFadeInTime
		#define GEODE_STATICS_setFadeInTime
		GEODE_AS_STATIC_FUNCTION(setFadeInTime) 
	#endif

	#ifndef GEODE_STATICS_setFadeOutTime
		#define GEODE_STATICS_setFadeOutTime
		GEODE_AS_STATIC_FUNCTION(setFadeOutTime) 
	#endif

	#ifndef GEODE_STATICS_setFromColor
		#define GEODE_STATICS_setFromColor
		GEODE_AS_STATIC_FUNCTION(setFromColor) 
	#endif

	#ifndef GEODE_STATICS_setFromOpacity
		#define GEODE_STATICS_setFromOpacity
		GEODE_AS_STATIC_FUNCTION(setFromOpacity) 
	#endif

	#ifndef GEODE_STATICS_setGroupMainOnly
		#define GEODE_STATICS_setGroupMainOnly
		GEODE_AS_STATIC_FUNCTION(setGroupMainOnly) 
	#endif

	#ifndef GEODE_STATICS_setGroupSecondaryOnly
		#define GEODE_STATICS_setGroupSecondaryOnly
		GEODE_AS_STATIC_FUNCTION(setGroupSecondaryOnly) 
	#endif

	#ifndef GEODE_STATICS_setHoldTime
		#define GEODE_STATICS_setHoldTime
		GEODE_AS_STATIC_FUNCTION(setHoldTime) 
	#endif

	#ifndef GEODE_STATICS_setHSVValue
		#define GEODE_STATICS_setHSVValue
		GEODE_AS_STATIC_FUNCTION(setHSVValue) 
	#endif

	#ifndef GEODE_STATICS_setMoveCommandEasing
		#define GEODE_STATICS_setMoveCommandEasing
		GEODE_AS_STATIC_FUNCTION(setMoveCommandEasing) 
	#endif

	#ifndef GEODE_STATICS_setMoveCommandPos
		#define GEODE_STATICS_setMoveCommandPos
		GEODE_AS_STATIC_FUNCTION(setMoveCommandPos) 
	#endif

	#ifndef GEODE_STATICS_setMoveLockX
		#define GEODE_STATICS_setMoveLockX
		GEODE_AS_STATIC_FUNCTION(setMoveLockX) 
	#endif

	#ifndef GEODE_STATICS_setMoveLockY
		#define GEODE_STATICS_setMoveLockY
		GEODE_AS_STATIC_FUNCTION(setMoveLockY) 
	#endif

	#ifndef GEODE_STATICS_setNextObject
		#define GEODE_STATICS_setNextObject
		GEODE_AS_STATIC_FUNCTION(setNextObject) 
	#endif

	#ifndef GEODE_STATICS_setPulseMode
		#define GEODE_STATICS_setPulseMode
		GEODE_AS_STATIC_FUNCTION(setPulseMode) 
	#endif

	#ifndef GEODE_STATICS_setPulseTargetType
		#define GEODE_STATICS_setPulseTargetType
		GEODE_AS_STATIC_FUNCTION(setPulseTargetType) 
	#endif

	#ifndef GEODE_STATICS_setSpawnDelay
		#define GEODE_STATICS_setSpawnDelay
		GEODE_AS_STATIC_FUNCTION(setSpawnDelay) 
	#endif

	#ifndef GEODE_STATICS_setStartTime
		#define GEODE_STATICS_setStartTime
		GEODE_AS_STATIC_FUNCTION(setStartTime) 
	#endif

	#ifndef GEODE_STATICS_setTargetID
		#define GEODE_STATICS_setTargetID
		GEODE_AS_STATIC_FUNCTION(setTargetID) 
	#endif

	#ifndef GEODE_STATICS_setTargetOpacity
		#define GEODE_STATICS_setTargetOpacity
		GEODE_AS_STATIC_FUNCTION(setTargetOpacity) 
	#endif

	#ifndef GEODE_STATICS_setTintColor
		#define GEODE_STATICS_setTintColor
		GEODE_AS_STATIC_FUNCTION(setTintColor) 
	#endif

	#ifndef GEODE_STATICS_setTintGround
		#define GEODE_STATICS_setTintGround
		GEODE_AS_STATIC_FUNCTION(setTintGround) 
	#endif

	#ifndef GEODE_STATICS_setToColor
		#define GEODE_STATICS_setToColor
		GEODE_AS_STATIC_FUNCTION(setToColor) 
	#endif

	#ifndef GEODE_STATICS_setToOpacity
		#define GEODE_STATICS_setToOpacity
		GEODE_AS_STATIC_FUNCTION(setToOpacity) 
	#endif

	#ifndef GEODE_STATICS_setWasProcessed
		#define GEODE_STATICS_setWasProcessed
		GEODE_AS_STATIC_FUNCTION(setWasProcessed) 
	#endif

	#ifndef GEODE_STATICS_triggerObject
		#define GEODE_STATICS_triggerObject
		GEODE_AS_STATIC_FUNCTION(triggerObject) 
	#endif

	#ifndef GEODE_STATICS_updateSpecialColor
		#define GEODE_STATICS_updateSpecialColor
		GEODE_AS_STATIC_FUNCTION(updateSpecialColor) 
	#endif

	#ifndef GEODE_STATICS_customSetup
		#define GEODE_STATICS_customSetup
		GEODE_AS_STATIC_FUNCTION(customSetup) 
	#endif

	#ifndef GEODE_STATICS_spawnXPosition
		#define GEODE_STATICS_spawnXPosition
		GEODE_AS_STATIC_FUNCTION(spawnXPosition) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_customObjectSetup
		#define GEODE_CONCEPT_CHECK_customObjectSetup
		GEODE_CONCEPT_FUNCTION_CHECK(customObjectSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCopyColorIdx
		#define GEODE_CONCEPT_CHECK_getCopyColorIdx
		GEODE_CONCEPT_FUNCTION_CHECK(getCopyColorIdx) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCopyOpacity
		#define GEODE_CONCEPT_CHECK_getCopyOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(getCopyOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCopyPlayerColor1
		#define GEODE_CONCEPT_CHECK_getCopyPlayerColor1
		GEODE_CONCEPT_FUNCTION_CHECK(getCopyPlayerColor1) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCopyPlayerColor2
		#define GEODE_CONCEPT_CHECK_getCopyPlayerColor2
		GEODE_CONCEPT_FUNCTION_CHECK(getCopyPlayerColor2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCustomColorBlend
		#define GEODE_CONCEPT_CHECK_getCustomColorBlend
		GEODE_CONCEPT_FUNCTION_CHECK(getCustomColorBlend) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEffectDuration
		#define GEODE_CONCEPT_CHECK_getEffectDuration
		GEODE_CONCEPT_FUNCTION_CHECK(getEffectDuration) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEffectOrder
		#define GEODE_CONCEPT_CHECK_getEffectOrder
		GEODE_CONCEPT_FUNCTION_CHECK(getEffectOrder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEffectSpawnPos
		#define GEODE_CONCEPT_CHECK_getEffectSpawnPos
		GEODE_CONCEPT_FUNCTION_CHECK(getEffectSpawnPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEnableGroup
		#define GEODE_CONCEPT_CHECK_getEnableGroup
		GEODE_CONCEPT_FUNCTION_CHECK(getEnableGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFadeInTime
		#define GEODE_CONCEPT_CHECK_getFadeInTime
		GEODE_CONCEPT_FUNCTION_CHECK(getFadeInTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFadeOutTime
		#define GEODE_CONCEPT_CHECK_getFadeOutTime
		GEODE_CONCEPT_FUNCTION_CHECK(getFadeOutTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFromColor
		#define GEODE_CONCEPT_CHECK_getFromColor
		GEODE_CONCEPT_FUNCTION_CHECK(getFromColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFromOpacity
		#define GEODE_CONCEPT_CHECK_getFromOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(getFromOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGroupMainOnly
		#define GEODE_CONCEPT_CHECK_getGroupMainOnly
		GEODE_CONCEPT_FUNCTION_CHECK(getGroupMainOnly) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGroupSecondaryOnly
		#define GEODE_CONCEPT_CHECK_getGroupSecondaryOnly
		GEODE_CONCEPT_FUNCTION_CHECK(getGroupSecondaryOnly) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getHoldTime
		#define GEODE_CONCEPT_CHECK_getHoldTime
		GEODE_CONCEPT_FUNCTION_CHECK(getHoldTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getHSVValue
		#define GEODE_CONCEPT_CHECK_getHSVValue
		GEODE_CONCEPT_FUNCTION_CHECK(getHSVValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMoveCommandEasing
		#define GEODE_CONCEPT_CHECK_getMoveCommandEasing
		GEODE_CONCEPT_FUNCTION_CHECK(getMoveCommandEasing) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMoveCommandPos
		#define GEODE_CONCEPT_CHECK_getMoveCommandPos
		GEODE_CONCEPT_FUNCTION_CHECK(getMoveCommandPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMoveLockX
		#define GEODE_CONCEPT_CHECK_getMoveLockX
		GEODE_CONCEPT_FUNCTION_CHECK(getMoveLockX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMoveLockY
		#define GEODE_CONCEPT_CHECK_getMoveLockY
		GEODE_CONCEPT_FUNCTION_CHECK(getMoveLockY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNextObject
		#define GEODE_CONCEPT_CHECK_getNextObject
		GEODE_CONCEPT_FUNCTION_CHECK(getNextObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPulseMode
		#define GEODE_CONCEPT_CHECK_getPulseMode
		GEODE_CONCEPT_FUNCTION_CHECK(getPulseMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPulseTargetType
		#define GEODE_CONCEPT_CHECK_getPulseTargetType
		GEODE_CONCEPT_FUNCTION_CHECK(getPulseTargetType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSaveString
		#define GEODE_CONCEPT_CHECK_getSaveString
		GEODE_CONCEPT_FUNCTION_CHECK(getSaveString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSpawnDelay
		#define GEODE_CONCEPT_CHECK_getSpawnDelay
		GEODE_CONCEPT_FUNCTION_CHECK(getSpawnDelay) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStartTime
		#define GEODE_CONCEPT_CHECK_getStartTime
		GEODE_CONCEPT_FUNCTION_CHECK(getStartTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTargetColorIndex
		#define GEODE_CONCEPT_CHECK_getTargetColorIndex
		GEODE_CONCEPT_FUNCTION_CHECK(getTargetColorIndex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTargetID
		#define GEODE_CONCEPT_CHECK_getTargetID
		GEODE_CONCEPT_FUNCTION_CHECK(getTargetID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTargetOpacity
		#define GEODE_CONCEPT_CHECK_getTargetOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(getTargetOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTintColor
		#define GEODE_CONCEPT_CHECK_getTintColor
		GEODE_CONCEPT_FUNCTION_CHECK(getTintColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTintGround
		#define GEODE_CONCEPT_CHECK_getTintGround
		GEODE_CONCEPT_FUNCTION_CHECK(getTintGround) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getToColor
		#define GEODE_CONCEPT_CHECK_getToColor
		GEODE_CONCEPT_FUNCTION_CHECK(getToColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getToOpacity
		#define GEODE_CONCEPT_CHECK_getToOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(getToOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getWasProcessed
		#define GEODE_CONCEPT_CHECK_getWasProcessed
		GEODE_CONCEPT_FUNCTION_CHECK(getWasProcessed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCopyColorIdx
		#define GEODE_CONCEPT_CHECK_setCopyColorIdx
		GEODE_CONCEPT_FUNCTION_CHECK(setCopyColorIdx) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCopyOpacity
		#define GEODE_CONCEPT_CHECK_setCopyOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(setCopyOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCopyPlayerColor1
		#define GEODE_CONCEPT_CHECK_setCopyPlayerColor1
		GEODE_CONCEPT_FUNCTION_CHECK(setCopyPlayerColor1) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCopyPlayerColor2
		#define GEODE_CONCEPT_CHECK_setCopyPlayerColor2
		GEODE_CONCEPT_FUNCTION_CHECK(setCopyPlayerColor2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCustomColorBlend
		#define GEODE_CONCEPT_CHECK_setCustomColorBlend
		GEODE_CONCEPT_FUNCTION_CHECK(setCustomColorBlend) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setEffectDuration
		#define GEODE_CONCEPT_CHECK_setEffectDuration
		GEODE_CONCEPT_FUNCTION_CHECK(setEffectDuration) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setEffectOrder
		#define GEODE_CONCEPT_CHECK_setEffectOrder
		GEODE_CONCEPT_FUNCTION_CHECK(setEffectOrder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setEffectSpawnPos
		#define GEODE_CONCEPT_CHECK_setEffectSpawnPos
		GEODE_CONCEPT_FUNCTION_CHECK(setEffectSpawnPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setEnableGroup
		#define GEODE_CONCEPT_CHECK_setEnableGroup
		GEODE_CONCEPT_FUNCTION_CHECK(setEnableGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFadeInTime
		#define GEODE_CONCEPT_CHECK_setFadeInTime
		GEODE_CONCEPT_FUNCTION_CHECK(setFadeInTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFadeOutTime
		#define GEODE_CONCEPT_CHECK_setFadeOutTime
		GEODE_CONCEPT_FUNCTION_CHECK(setFadeOutTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFromColor
		#define GEODE_CONCEPT_CHECK_setFromColor
		GEODE_CONCEPT_FUNCTION_CHECK(setFromColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFromOpacity
		#define GEODE_CONCEPT_CHECK_setFromOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(setFromOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setGroupMainOnly
		#define GEODE_CONCEPT_CHECK_setGroupMainOnly
		GEODE_CONCEPT_FUNCTION_CHECK(setGroupMainOnly) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setGroupSecondaryOnly
		#define GEODE_CONCEPT_CHECK_setGroupSecondaryOnly
		GEODE_CONCEPT_FUNCTION_CHECK(setGroupSecondaryOnly) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setHoldTime
		#define GEODE_CONCEPT_CHECK_setHoldTime
		GEODE_CONCEPT_FUNCTION_CHECK(setHoldTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setHSVValue
		#define GEODE_CONCEPT_CHECK_setHSVValue
		GEODE_CONCEPT_FUNCTION_CHECK(setHSVValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMoveCommandEasing
		#define GEODE_CONCEPT_CHECK_setMoveCommandEasing
		GEODE_CONCEPT_FUNCTION_CHECK(setMoveCommandEasing) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMoveCommandPos
		#define GEODE_CONCEPT_CHECK_setMoveCommandPos
		GEODE_CONCEPT_FUNCTION_CHECK(setMoveCommandPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMoveLockX
		#define GEODE_CONCEPT_CHECK_setMoveLockX
		GEODE_CONCEPT_FUNCTION_CHECK(setMoveLockX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMoveLockY
		#define GEODE_CONCEPT_CHECK_setMoveLockY
		GEODE_CONCEPT_FUNCTION_CHECK(setMoveLockY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setNextObject
		#define GEODE_CONCEPT_CHECK_setNextObject
		GEODE_CONCEPT_FUNCTION_CHECK(setNextObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPulseMode
		#define GEODE_CONCEPT_CHECK_setPulseMode
		GEODE_CONCEPT_FUNCTION_CHECK(setPulseMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPulseTargetType
		#define GEODE_CONCEPT_CHECK_setPulseTargetType
		GEODE_CONCEPT_FUNCTION_CHECK(setPulseTargetType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSpawnDelay
		#define GEODE_CONCEPT_CHECK_setSpawnDelay
		GEODE_CONCEPT_FUNCTION_CHECK(setSpawnDelay) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStartTime
		#define GEODE_CONCEPT_CHECK_setStartTime
		GEODE_CONCEPT_FUNCTION_CHECK(setStartTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTargetID
		#define GEODE_CONCEPT_CHECK_setTargetID
		GEODE_CONCEPT_FUNCTION_CHECK(setTargetID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTargetOpacity
		#define GEODE_CONCEPT_CHECK_setTargetOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(setTargetOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTintColor
		#define GEODE_CONCEPT_CHECK_setTintColor
		GEODE_CONCEPT_FUNCTION_CHECK(setTintColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTintGround
		#define GEODE_CONCEPT_CHECK_setTintGround
		GEODE_CONCEPT_FUNCTION_CHECK(setTintGround) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setToColor
		#define GEODE_CONCEPT_CHECK_setToColor
		GEODE_CONCEPT_FUNCTION_CHECK(setToColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setToOpacity
		#define GEODE_CONCEPT_CHECK_setToOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(setToOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setWasProcessed
		#define GEODE_CONCEPT_CHECK_setWasProcessed
		GEODE_CONCEPT_FUNCTION_CHECK(setWasProcessed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerObject
		#define GEODE_CONCEPT_CHECK_triggerObject
		GEODE_CONCEPT_FUNCTION_CHECK(triggerObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSpecialColor
		#define GEODE_CONCEPT_CHECK_updateSpecialColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateSpecialColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_customSetup
		#define GEODE_CONCEPT_CHECK_customSetup
		GEODE_CONCEPT_FUNCTION_CHECK(customSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spawnXPosition
		#define GEODE_CONCEPT_CHECK_spawnXPosition
		GEODE_CONCEPT_FUNCTION_CHECK(spawnXPosition) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EffectGameObject> : ModifyBase<ModifyDerive<Der, EffectGameObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EffectGameObject>>;
		using ModifyBase<ModifyDerive<Der, EffectGameObject>>::ModifyBase;
		using Base = EffectGameObject;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, create, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, customObjectSetup, gd::map<gd::string, gd::string>*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, getCopyColorIdx, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, getCopyOpacity, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, getCopyPlayerColor1, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, getCopyPlayerColor2, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, getCustomColorBlend, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, getEffectDuration, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, getEffectOrder, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, getEffectSpawnPos, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, getEnableGroup, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, getFadeInTime, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, getFadeOutTime, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, getFromColor, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, getFromOpacity, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, getGroupMainOnly, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, getGroupSecondaryOnly, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, getHoldTime, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, getHSVValue, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, getMoveCommandEasing, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, getMoveCommandPos, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, getMoveLockX, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, getMoveLockY, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, getNextObject, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, getPulseMode, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, getPulseTargetType, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, getSaveString, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, getSpawnDelay, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, getStartTime, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, getTargetColorIndex, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, getTargetID, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, getTargetOpacity, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, getTintColor, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, getTintGround, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, getToColor, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, getToOpacity, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, getWasProcessed, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, init, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, setCopyColorIdx, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, setCopyOpacity, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, setCopyPlayerColor1, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, setCopyPlayerColor2, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, setCustomColorBlend, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, setEffectDuration, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, setEffectOrder, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, setEffectSpawnPos, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, setEnableGroup, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, setFadeInTime, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, setFadeOutTime, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, setFromColor, cocos2d::ccColor3B)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, setFromOpacity, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, setGroupMainOnly, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, setGroupSecondaryOnly, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, setHoldTime, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, setHSVValue, cocos2d::ccHSVValue)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, setMoveCommandEasing, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, setMoveCommandPos, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, setMoveLockX, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, setMoveLockY, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, setNextObject, EffectGameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, setPulseMode, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, setPulseTargetType, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, setSpawnDelay, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, setStartTime, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, setTargetID, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, setTargetOpacity, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, setTintColor, cocos2d::ccColor3B)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, setTintGround, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, setToColor, cocos2d::ccColor3B)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, setToOpacity, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, setWasProcessed, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, triggerObject, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, updateSpecialColor, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, customSetup, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, spawnXPosition, )
		}
	};
}
