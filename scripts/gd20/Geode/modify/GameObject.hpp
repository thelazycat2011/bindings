#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GameObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_activatedByPlayer
		#define GEODE_STATICS_activatedByPlayer
		GEODE_AS_STATIC_FUNCTION(activatedByPlayer) 
	#endif

	#ifndef GEODE_STATICS_addColorSprite
		#define GEODE_STATICS_addColorSprite
		GEODE_AS_STATIC_FUNCTION(addColorSprite) 
	#endif

	#ifndef GEODE_STATICS_addColorSpriteToParent
		#define GEODE_STATICS_addColorSpriteToParent
		GEODE_AS_STATIC_FUNCTION(addColorSpriteToParent) 
	#endif

	#ifndef GEODE_STATICS_addCustomBlackChild
		#define GEODE_STATICS_addCustomBlackChild
		GEODE_AS_STATIC_FUNCTION(addCustomBlackChild) 
	#endif

	#ifndef GEODE_STATICS_addCustomChild
		#define GEODE_STATICS_addCustomChild
		GEODE_AS_STATIC_FUNCTION(addCustomChild) 
	#endif

	#ifndef GEODE_STATICS_addCustomColorChild
		#define GEODE_STATICS_addCustomColorChild
		GEODE_AS_STATIC_FUNCTION(addCustomColorChild) 
	#endif

	#ifndef GEODE_STATICS_addGlow
		#define GEODE_STATICS_addGlow
		GEODE_AS_STATIC_FUNCTION(addGlow) 
	#endif

	#ifndef GEODE_STATICS_addInternalChild
		#define GEODE_STATICS_addInternalChild
		GEODE_AS_STATIC_FUNCTION(addInternalChild) 
	#endif

	#ifndef GEODE_STATICS_addInternalCustomColorChild
		#define GEODE_STATICS_addInternalCustomColorChild
		GEODE_AS_STATIC_FUNCTION(addInternalCustomColorChild) 
	#endif

	#ifndef GEODE_STATICS_addInternalGlowChild
		#define GEODE_STATICS_addInternalGlowChild
		GEODE_AS_STATIC_FUNCTION(addInternalGlowChild) 
	#endif

	#ifndef GEODE_STATICS_addToTempOffset
		#define GEODE_STATICS_addToTempOffset
		GEODE_AS_STATIC_FUNCTION(addToTempOffset) 
	#endif

	#ifndef GEODE_STATICS_calculateOrientedBox
		#define GEODE_STATICS_calculateOrientedBox
		GEODE_AS_STATIC_FUNCTION(calculateOrientedBox) 
	#endif

	#ifndef GEODE_STATICS_calculateSpawnXPos
		#define GEODE_STATICS_calculateSpawnXPos
		GEODE_AS_STATIC_FUNCTION(calculateSpawnXPos) 
	#endif

	#ifndef GEODE_STATICS_canChangeCustomColor
		#define GEODE_STATICS_canChangeCustomColor
		GEODE_AS_STATIC_FUNCTION(canChangeCustomColor) 
	#endif

	#ifndef GEODE_STATICS_canChangeMainColor
		#define GEODE_STATICS_canChangeMainColor
		GEODE_AS_STATIC_FUNCTION(canChangeMainColor) 
	#endif

	#ifndef GEODE_STATICS_canChangeSecondaryColor
		#define GEODE_STATICS_canChangeSecondaryColor
		GEODE_AS_STATIC_FUNCTION(canChangeSecondaryColor) 
	#endif

	#ifndef GEODE_STATICS_canRotateFree
		#define GEODE_STATICS_canRotateFree
		GEODE_AS_STATIC_FUNCTION(canRotateFree) 
	#endif

	#ifndef GEODE_STATICS_colorForMode
		#define GEODE_STATICS_colorForMode
		GEODE_AS_STATIC_FUNCTION(colorForMode) 
	#endif

	#ifndef GEODE_STATICS_commonSetup
		#define GEODE_STATICS_commonSetup
		GEODE_AS_STATIC_FUNCTION(commonSetup) 
	#endif

	#ifndef GEODE_STATICS_copyGroups
		#define GEODE_STATICS_copyGroups
		GEODE_AS_STATIC_FUNCTION(copyGroups) 
	#endif

	#ifndef GEODE_STATICS_createAndAddParticle
		#define GEODE_STATICS_createAndAddParticle
		GEODE_AS_STATIC_FUNCTION(createAndAddParticle) 
	#endif

	#ifndef GEODE_STATICS_createGlow
		#define GEODE_STATICS_createGlow
		GEODE_AS_STATIC_FUNCTION(createGlow) 
	#endif

	#ifndef GEODE_STATICS_createGroupContainer
		#define GEODE_STATICS_createGroupContainer
		GEODE_AS_STATIC_FUNCTION(createGroupContainer) 
	#endif

	#ifndef GEODE_STATICS_createRotateAction
		#define GEODE_STATICS_createRotateAction
		GEODE_AS_STATIC_FUNCTION(createRotateAction) 
	#endif

	#ifndef GEODE_STATICS_createSpriteColor
		#define GEODE_STATICS_createSpriteColor
		GEODE_AS_STATIC_FUNCTION(createSpriteColor) 
	#endif

	#ifndef GEODE_STATICS_createWithFrame
		#define GEODE_STATICS_createWithFrame
		GEODE_AS_STATIC_FUNCTION(createWithFrame) 
	#endif

	#ifndef GEODE_STATICS_createWithKey
		#define GEODE_STATICS_createWithKey
		GEODE_AS_STATIC_FUNCTION(createWithKey) 
	#endif

	#ifndef GEODE_STATICS_createWithTexture
		#define GEODE_STATICS_createWithTexture
		GEODE_AS_STATIC_FUNCTION(createWithTexture) 
	#endif

	#ifndef GEODE_STATICS_customObjectSetup
		#define GEODE_STATICS_customObjectSetup
		GEODE_AS_STATIC_FUNCTION(customObjectSetup) 
	#endif

	#ifndef GEODE_STATICS_customScaleMod
		#define GEODE_STATICS_customScaleMod
		GEODE_AS_STATIC_FUNCTION(customScaleMod) 
	#endif

	#ifndef GEODE_STATICS_deselectObject
		#define GEODE_STATICS_deselectObject
		GEODE_AS_STATIC_FUNCTION(deselectObject) 
	#endif

	#ifndef GEODE_STATICS_destroyObject
		#define GEODE_STATICS_destroyObject
		GEODE_AS_STATIC_FUNCTION(destroyObject) 
	#endif

	#ifndef GEODE_STATICS_determineSlopeDirection
		#define GEODE_STATICS_determineSlopeDirection
		GEODE_AS_STATIC_FUNCTION(determineSlopeDirection) 
	#endif

	#ifndef GEODE_STATICS_dontCountTowardsLimit
		#define GEODE_STATICS_dontCountTowardsLimit
		GEODE_AS_STATIC_FUNCTION(dontCountTowardsLimit) 
	#endif

	#ifndef GEODE_STATICS_duplicateAttributes
		#define GEODE_STATICS_duplicateAttributes
		GEODE_AS_STATIC_FUNCTION(duplicateAttributes) 
	#endif

	#ifndef GEODE_STATICS_duplicateColorMode
		#define GEODE_STATICS_duplicateColorMode
		GEODE_AS_STATIC_FUNCTION(duplicateColorMode) 
	#endif

	#ifndef GEODE_STATICS_duplicateValues
		#define GEODE_STATICS_duplicateValues
		GEODE_AS_STATIC_FUNCTION(duplicateValues) 
	#endif

	#ifndef GEODE_STATICS_editorColorForCustomMode
		#define GEODE_STATICS_editorColorForCustomMode
		GEODE_AS_STATIC_FUNCTION(editorColorForCustomMode) 
	#endif

	#ifndef GEODE_STATICS_editorColorForMode
		#define GEODE_STATICS_editorColorForMode
		GEODE_AS_STATIC_FUNCTION(editorColorForMode) 
	#endif

	#ifndef GEODE_STATICS_getActiveColorForMode
		#define GEODE_STATICS_getActiveColorForMode
		GEODE_AS_STATIC_FUNCTION(getActiveColorForMode) 
	#endif

	#ifndef GEODE_STATICS_getAddedToBlend
		#define GEODE_STATICS_getAddedToBlend
		GEODE_AS_STATIC_FUNCTION(getAddedToBlend) 
	#endif

	#ifndef GEODE_STATICS_getAddToBatch2
		#define GEODE_STATICS_getAddToBatch2
		GEODE_AS_STATIC_FUNCTION(getAddToBatch2) 
	#endif

	#ifndef GEODE_STATICS_getBallFrame
		#define GEODE_STATICS_getBallFrame
		GEODE_AS_STATIC_FUNCTION(getBallFrame) 
	#endif

	#ifndef GEODE_STATICS_getBoxOffset
		#define GEODE_STATICS_getBoxOffset
		GEODE_AS_STATIC_FUNCTION(getBoxOffset) 
	#endif

	#ifndef GEODE_STATICS_getColorFrame
		#define GEODE_STATICS_getColorFrame
		GEODE_AS_STATIC_FUNCTION(getColorFrame) 
	#endif

	#ifndef GEODE_STATICS_getColorIndex
		#define GEODE_STATICS_getColorIndex
		GEODE_AS_STATIC_FUNCTION(getColorIndex) 
	#endif

	#ifndef GEODE_STATICS_getColorManager
		#define GEODE_STATICS_getColorManager
		GEODE_AS_STATIC_FUNCTION(getColorManager) 
	#endif

	#ifndef GEODE_STATICS_getColorOnTop
		#define GEODE_STATICS_getColorOnTop
		GEODE_AS_STATIC_FUNCTION(getColorOnTop) 
	#endif

	#ifndef GEODE_STATICS_getColorSprite
		#define GEODE_STATICS_getColorSprite
		GEODE_AS_STATIC_FUNCTION(getColorSprite) 
	#endif

	#ifndef GEODE_STATICS_getCustomAudioScale
		#define GEODE_STATICS_getCustomAudioScale
		GEODE_AS_STATIC_FUNCTION(getCustomAudioScale) 
	#endif

	#ifndef GEODE_STATICS_getCustomColorIdx
		#define GEODE_STATICS_getCustomColorIdx
		GEODE_AS_STATIC_FUNCTION(getCustomColorIdx) 
	#endif

	#ifndef GEODE_STATICS_getCustomDontFade
		#define GEODE_STATICS_getCustomDontFade
		GEODE_AS_STATIC_FUNCTION(getCustomDontFade) 
	#endif

	#ifndef GEODE_STATICS_getCustomHitBox
		#define GEODE_STATICS_getCustomHitBox
		GEODE_AS_STATIC_FUNCTION(getCustomHitBox) 
	#endif

	#ifndef GEODE_STATICS_getCustomObjectZ
		#define GEODE_STATICS_getCustomObjectZ
		GEODE_AS_STATIC_FUNCTION(getCustomObjectZ) 
	#endif

	#ifndef GEODE_STATICS_getCustomScale
		#define GEODE_STATICS_getCustomScale
		GEODE_AS_STATIC_FUNCTION(getCustomScale) 
	#endif

	#ifndef GEODE_STATICS_getCustomZLayer
		#define GEODE_STATICS_getCustomZLayer
		GEODE_AS_STATIC_FUNCTION(getCustomZLayer) 
	#endif

	#ifndef GEODE_STATICS_getDamaging
		#define GEODE_STATICS_getDamaging
		GEODE_AS_STATIC_FUNCTION(getDamaging) 
	#endif

	#ifndef GEODE_STATICS_getDidUpdateLastPosition
		#define GEODE_STATICS_getDidUpdateLastPosition
		GEODE_AS_STATIC_FUNCTION(getDidUpdateLastPosition) 
	#endif

	#ifndef GEODE_STATICS_getDontApplyEffect
		#define GEODE_STATICS_getDontApplyEffect
		GEODE_AS_STATIC_FUNCTION(getDontApplyEffect) 
	#endif

	#ifndef GEODE_STATICS_getDontApplyFade
		#define GEODE_STATICS_getDontApplyFade
		GEODE_AS_STATIC_FUNCTION(getDontApplyFade) 
	#endif

	#ifndef GEODE_STATICS_getDontFade
		#define GEODE_STATICS_getDontFade
		GEODE_AS_STATIC_FUNCTION(getDontFade) 
	#endif

	#ifndef GEODE_STATICS_getDontFadeTinted
		#define GEODE_STATICS_getDontFadeTinted
		GEODE_AS_STATIC_FUNCTION(getDontFadeTinted) 
	#endif

	#ifndef GEODE_STATICS_getDontTransform
		#define GEODE_STATICS_getDontTransform
		GEODE_AS_STATIC_FUNCTION(getDontTransform) 
	#endif

	#ifndef GEODE_STATICS_getEditorCustomScale
		#define GEODE_STATICS_getEditorCustomScale
		GEODE_AS_STATIC_FUNCTION(getEditorCustomScale) 
	#endif

	#ifndef GEODE_STATICS_getEditorLayerID
		#define GEODE_STATICS_getEditorLayerID
		GEODE_AS_STATIC_FUNCTION(getEditorLayerID) 
	#endif

	#ifndef GEODE_STATICS_getEditorLayerID2
		#define GEODE_STATICS_getEditorLayerID2
		GEODE_AS_STATIC_FUNCTION(getEditorLayerID2) 
	#endif

	#ifndef GEODE_STATICS_getEditorSelected
		#define GEODE_STATICS_getEditorSelected
		GEODE_AS_STATIC_FUNCTION(getEditorSelected) 
	#endif

	#ifndef GEODE_STATICS_getEditorSelectIdx
		#define GEODE_STATICS_getEditorSelectIdx
		GEODE_AS_STATIC_FUNCTION(getEditorSelectIdx) 
	#endif

	#ifndef GEODE_STATICS_getEnterAngle
		#define GEODE_STATICS_getEnterAngle
		GEODE_AS_STATIC_FUNCTION(getEnterAngle) 
	#endif

	#ifndef GEODE_STATICS_getEnterEffect
		#define GEODE_STATICS_getEnterEffect
		GEODE_AS_STATIC_FUNCTION(getEnterEffect) 
	#endif

	#ifndef GEODE_STATICS_getFadeInPosOffset
		#define GEODE_STATICS_getFadeInPosOffset
		GEODE_AS_STATIC_FUNCTION(getFadeInPosOffset) 
	#endif

	#ifndef GEODE_STATICS_getFrame
		#define GEODE_STATICS_getFrame
		GEODE_AS_STATIC_FUNCTION(getFrame) 
	#endif

	#ifndef GEODE_STATICS_getGlowFrame
		#define GEODE_STATICS_getGlowFrame
		GEODE_AS_STATIC_FUNCTION(getGlowFrame) 
	#endif

	#ifndef GEODE_STATICS_getGlowOpacityMod
		#define GEODE_STATICS_getGlowOpacityMod
		GEODE_AS_STATIC_FUNCTION(getGlowOpacityMod) 
	#endif

	#ifndef GEODE_STATICS_getGlowUseBGColor
		#define GEODE_STATICS_getGlowUseBGColor
		GEODE_AS_STATIC_FUNCTION(getGlowUseBGColor) 
	#endif

	#ifndef GEODE_STATICS_getGroupCount
		#define GEODE_STATICS_getGroupCount
		GEODE_AS_STATIC_FUNCTION(getGroupCount) 
	#endif

	#ifndef GEODE_STATICS_getGroupDisabled
		#define GEODE_STATICS_getGroupDisabled
		GEODE_AS_STATIC_FUNCTION(getGroupDisabled) 
	#endif

	#ifndef GEODE_STATICS_getGroupDisabledCount
		#define GEODE_STATICS_getGroupDisabledCount
		GEODE_AS_STATIC_FUNCTION(getGroupDisabledCount) 
	#endif

	#ifndef GEODE_STATICS_getGroupID
		#define GEODE_STATICS_getGroupID
		GEODE_AS_STATIC_FUNCTION(getGroupID) 
	#endif

	#ifndef GEODE_STATICS_getGroupString
		#define GEODE_STATICS_getGroupString
		GEODE_AS_STATIC_FUNCTION(getGroupString) 
	#endif

	#ifndef GEODE_STATICS_getGroupUpdated
		#define GEODE_STATICS_getGroupUpdated
		GEODE_AS_STATIC_FUNCTION(getGroupUpdated) 
	#endif

	#ifndef GEODE_STATICS_getHasCustomChildren
		#define GEODE_STATICS_getHasCustomChildren
		GEODE_AS_STATIC_FUNCTION(getHasCustomChildren) 
	#endif

	#ifndef GEODE_STATICS_getIgnoreScreenCheck
		#define GEODE_STATICS_getIgnoreScreenCheck
		GEODE_AS_STATIC_FUNCTION(getIgnoreScreenCheck) 
	#endif

	#ifndef GEODE_STATICS_getInvisibleMode
		#define GEODE_STATICS_getInvisibleMode
		GEODE_AS_STATIC_FUNCTION(getInvisibleMode) 
	#endif

	#ifndef GEODE_STATICS_getIsAnimated
		#define GEODE_STATICS_getIsAnimated
		GEODE_AS_STATIC_FUNCTION(getIsAnimated) 
	#endif

	#ifndef GEODE_STATICS_getIsDetailColorObject
		#define GEODE_STATICS_getIsDetailColorObject
		GEODE_AS_STATIC_FUNCTION(getIsDetailColorObject) 
	#endif

	#ifndef GEODE_STATICS_getIsGroupParent
		#define GEODE_STATICS_getIsGroupParent
		GEODE_AS_STATIC_FUNCTION(getIsGroupParent) 
	#endif

	#ifndef GEODE_STATICS_getIsInvisible
		#define GEODE_STATICS_getIsInvisible
		GEODE_AS_STATIC_FUNCTION(getIsInvisible) 
	#endif

	#ifndef GEODE_STATICS_getIsOriented
		#define GEODE_STATICS_getIsOriented
		GEODE_AS_STATIC_FUNCTION(getIsOriented) 
	#endif

	#ifndef GEODE_STATICS_getIsRotated
		#define GEODE_STATICS_getIsRotated
		GEODE_AS_STATIC_FUNCTION(getIsRotated) 
	#endif

	#ifndef GEODE_STATICS_getIsSelected
		#define GEODE_STATICS_getIsSelected
		GEODE_AS_STATIC_FUNCTION(getIsSelected) 
	#endif

	#ifndef GEODE_STATICS_getIsTintObject
		#define GEODE_STATICS_getIsTintObject
		GEODE_AS_STATIC_FUNCTION(getIsTintObject) 
	#endif

	#ifndef GEODE_STATICS_getIsTriggerSaved
		#define GEODE_STATICS_getIsTriggerSaved
		GEODE_AS_STATIC_FUNCTION(getIsTriggerSaved) 
	#endif

	#ifndef GEODE_STATICS_getLastPosition
		#define GEODE_STATICS_getLastPosition
		GEODE_AS_STATIC_FUNCTION(getLastPosition) 
	#endif

	#ifndef GEODE_STATICS_getLockColorAsChild
		#define GEODE_STATICS_getLockColorAsChild
		GEODE_AS_STATIC_FUNCTION(getLockColorAsChild) 
	#endif

	#ifndef GEODE_STATICS_getM_ID
		#define GEODE_STATICS_getM_ID
		GEODE_AS_STATIC_FUNCTION(getM_ID) 
	#endif

	#ifndef GEODE_STATICS_getMainBlend
		#define GEODE_STATICS_getMainBlend
		GEODE_AS_STATIC_FUNCTION(getMainBlend) 
	#endif

	#ifndef GEODE_STATICS_getMainColor
		#define GEODE_STATICS_getMainColor
		GEODE_AS_STATIC_FUNCTION(getMainColor) 
	#endif

	#ifndef GEODE_STATICS_getMainColorBlack
		#define GEODE_STATICS_getMainColorBlack
		GEODE_AS_STATIC_FUNCTION(getMainColorBlack) 
	#endif

	#ifndef GEODE_STATICS_getMainColorMode
		#define GEODE_STATICS_getMainColorMode
		GEODE_AS_STATIC_FUNCTION(getMainColorMode) 
	#endif

	#ifndef GEODE_STATICS_getMaxAudioScale
		#define GEODE_STATICS_getMaxAudioScale
		GEODE_AS_STATIC_FUNCTION(getMaxAudioScale) 
	#endif

	#ifndef GEODE_STATICS_getMinAudioScale
		#define GEODE_STATICS_getMinAudioScale
		GEODE_AS_STATIC_FUNCTION(getMinAudioScale) 
	#endif

	#ifndef GEODE_STATICS_getNeedsReorder
		#define GEODE_STATICS_getNeedsReorder
		GEODE_AS_STATIC_FUNCTION(getNeedsReorder) 
	#endif

	#ifndef GEODE_STATICS_getNeedsUpdateColor
		#define GEODE_STATICS_getNeedsUpdateColor
		GEODE_AS_STATIC_FUNCTION(getNeedsUpdateColor) 
	#endif

	#ifndef GEODE_STATICS_getObjectClass
		#define GEODE_STATICS_getObjectClass
		GEODE_AS_STATIC_FUNCTION(getObjectClass) 
	#endif

	#ifndef GEODE_STATICS_getObjectID
		#define GEODE_STATICS_getObjectID
		GEODE_AS_STATIC_FUNCTION(getObjectID) 
	#endif

	#ifndef GEODE_STATICS_getObjectKey
		#define GEODE_STATICS_getObjectKey
		GEODE_AS_STATIC_FUNCTION(getObjectKey) 
	#endif

	#ifndef GEODE_STATICS_getObjectRadius
		#define GEODE_STATICS_getObjectRadius
		GEODE_AS_STATIC_FUNCTION(getObjectRadius) 
	#endif

	#ifndef GEODE_STATICS_getObjectRectDirty
		#define GEODE_STATICS_getObjectRectDirty
		GEODE_AS_STATIC_FUNCTION(getObjectRectDirty) 
	#endif

	#ifndef GEODE_STATICS_getObjectZ
		#define GEODE_STATICS_getObjectZ
		GEODE_AS_STATIC_FUNCTION(getObjectZ) 
	#endif

	#ifndef GEODE_STATICS_getObjectZLayer
		#define GEODE_STATICS_getObjectZLayer
		GEODE_AS_STATIC_FUNCTION(getObjectZLayer) 
	#endif

	#ifndef GEODE_STATICS_getObjectZOrder
		#define GEODE_STATICS_getObjectZOrder
		GEODE_AS_STATIC_FUNCTION(getObjectZOrder) 
	#endif

	#ifndef GEODE_STATICS_getOrientedRectDirty
		#define GEODE_STATICS_getOrientedRectDirty
		GEODE_AS_STATIC_FUNCTION(getOrientedRectDirty) 
	#endif

	#ifndef GEODE_STATICS_getOuterObjectRect
		#define GEODE_STATICS_getOuterObjectRect
		GEODE_AS_STATIC_FUNCTION(getOuterObjectRect) 
	#endif

	#ifndef GEODE_STATICS_getParentMode
		#define GEODE_STATICS_getParentMode
		GEODE_AS_STATIC_FUNCTION(getParentMode) 
	#endif

	#ifndef GEODE_STATICS_getRadius
		#define GEODE_STATICS_getRadius
		GEODE_AS_STATIC_FUNCTION(getRadius) 
	#endif

	#ifndef GEODE_STATICS_getRectOffset
		#define GEODE_STATICS_getRectOffset
		GEODE_AS_STATIC_FUNCTION(getRectOffset) 
	#endif

	#ifndef GEODE_STATICS_getRelativeSpriteColor
		#define GEODE_STATICS_getRelativeSpriteColor
		GEODE_AS_STATIC_FUNCTION(getRelativeSpriteColor) 
	#endif

	#ifndef GEODE_STATICS_getSavedMainColorMode
		#define GEODE_STATICS_getSavedMainColorMode
		GEODE_AS_STATIC_FUNCTION(getSavedMainColorMode) 
	#endif

	#ifndef GEODE_STATICS_getSavedSecondaryColorMode
		#define GEODE_STATICS_getSavedSecondaryColorMode
		GEODE_AS_STATIC_FUNCTION(getSavedSecondaryColorMode) 
	#endif

	#ifndef GEODE_STATICS_getSaveString
		#define GEODE_STATICS_getSaveString
		GEODE_AS_STATIC_FUNCTION(getSaveString) 
	#endif

	#ifndef GEODE_STATICS_getScaleModX
		#define GEODE_STATICS_getScaleModX
		GEODE_AS_STATIC_FUNCTION(getScaleModX) 
	#endif

	#ifndef GEODE_STATICS_getScaleModY
		#define GEODE_STATICS_getScaleModY
		GEODE_AS_STATIC_FUNCTION(getScaleModY) 
	#endif

	#ifndef GEODE_STATICS_getSecondaryBlend
		#define GEODE_STATICS_getSecondaryBlend
		GEODE_AS_STATIC_FUNCTION(getSecondaryBlend) 
	#endif

	#ifndef GEODE_STATICS_getSecondaryColor
		#define GEODE_STATICS_getSecondaryColor
		GEODE_AS_STATIC_FUNCTION(getSecondaryColor) 
	#endif

	#ifndef GEODE_STATICS_getSecondaryColorBlack
		#define GEODE_STATICS_getSecondaryColorBlack
		GEODE_AS_STATIC_FUNCTION(getSecondaryColorBlack) 
	#endif

	#ifndef GEODE_STATICS_getSecondaryColorMode
		#define GEODE_STATICS_getSecondaryColorMode
		GEODE_AS_STATIC_FUNCTION(getSecondaryColorMode) 
	#endif

	#ifndef GEODE_STATICS_getSectionIdx
		#define GEODE_STATICS_getSectionIdx
		GEODE_AS_STATIC_FUNCTION(getSectionIdx) 
	#endif

	#ifndef GEODE_STATICS_getShouldHide
		#define GEODE_STATICS_getShouldHide
		GEODE_AS_STATIC_FUNCTION(getShouldHide) 
	#endif

	#ifndef GEODE_STATICS_getSlopeAngle
		#define GEODE_STATICS_getSlopeAngle
		GEODE_AS_STATIC_FUNCTION(getSlopeAngle) 
	#endif

	#ifndef GEODE_STATICS_getSlopeType
		#define GEODE_STATICS_getSlopeType
		GEODE_AS_STATIC_FUNCTION(getSlopeType) 
	#endif

	#ifndef GEODE_STATICS_getSpawnedByTrigger
		#define GEODE_STATICS_getSpawnedByTrigger
		GEODE_AS_STATIC_FUNCTION(getSpawnedByTrigger) 
	#endif

	#ifndef GEODE_STATICS_getSpawnXPos
		#define GEODE_STATICS_getSpawnXPos
		GEODE_AS_STATIC_FUNCTION(getSpawnXPos) 
	#endif

	#ifndef GEODE_STATICS_getSpriteColor01
		#define GEODE_STATICS_getSpriteColor01
		GEODE_AS_STATIC_FUNCTION(getSpriteColor01) 
	#endif

	#ifndef GEODE_STATICS_getSpriteColor02
		#define GEODE_STATICS_getSpriteColor02
		GEODE_AS_STATIC_FUNCTION(getSpriteColor02) 
	#endif

	#ifndef GEODE_STATICS_getStartFlipX
		#define GEODE_STATICS_getStartFlipX
		GEODE_AS_STATIC_FUNCTION(getStartFlipX) 
	#endif

	#ifndef GEODE_STATICS_getStartFlipY
		#define GEODE_STATICS_getStartFlipY
		GEODE_AS_STATIC_FUNCTION(getStartFlipY) 
	#endif

	#ifndef GEODE_STATICS_getStartPos
		#define GEODE_STATICS_getStartPos
		GEODE_AS_STATIC_FUNCTION(getStartPos) 
	#endif

	#ifndef GEODE_STATICS_getStartRotation
		#define GEODE_STATICS_getStartRotation
		GEODE_AS_STATIC_FUNCTION(getStartRotation) 
	#endif

	#ifndef GEODE_STATICS_getStartScaleX
		#define GEODE_STATICS_getStartScaleX
		GEODE_AS_STATIC_FUNCTION(getStartScaleX) 
	#endif

	#ifndef GEODE_STATICS_getStartScaleY
		#define GEODE_STATICS_getStartScaleY
		GEODE_AS_STATIC_FUNCTION(getStartScaleY) 
	#endif

	#ifndef GEODE_STATICS_getStateVar
		#define GEODE_STATICS_getStateVar
		GEODE_AS_STATIC_FUNCTION(getStateVar) 
	#endif

	#ifndef GEODE_STATICS_getStoredPosition
		#define GEODE_STATICS_getStoredPosition
		GEODE_AS_STATIC_FUNCTION(getStoredPosition) 
	#endif

	#ifndef GEODE_STATICS_getTextBlockString
		#define GEODE_STATICS_getTextBlockString
		GEODE_AS_STATIC_FUNCTION(getTextBlockString) 
	#endif

	#ifndef GEODE_STATICS_getTouchTriggered
		#define GEODE_STATICS_getTouchTriggered
		GEODE_AS_STATIC_FUNCTION(getTouchTriggered) 
	#endif

	#ifndef GEODE_STATICS_getType
		#define GEODE_STATICS_getType
		GEODE_AS_STATIC_FUNCTION(getType) 
	#endif

	#ifndef GEODE_STATICS_getUniqueID
		#define GEODE_STATICS_getUniqueID
		GEODE_AS_STATIC_FUNCTION(getUniqueID) 
	#endif

	#ifndef GEODE_STATICS_getUpdateLastPos
		#define GEODE_STATICS_getUpdateLastPos
		GEODE_AS_STATIC_FUNCTION(getUpdateLastPos) 
	#endif

	#ifndef GEODE_STATICS_getUpSlope
		#define GEODE_STATICS_getUpSlope
		GEODE_AS_STATIC_FUNCTION(getUpSlope) 
	#endif

	#ifndef GEODE_STATICS_getUseAudioScale
		#define GEODE_STATICS_getUseAudioScale
		GEODE_AS_STATIC_FUNCTION(getUseAudioScale) 
	#endif

	#ifndef GEODE_STATICS_getUseCustomContentSize
		#define GEODE_STATICS_getUseCustomContentSize
		GEODE_AS_STATIC_FUNCTION(getUseCustomContentSize) 
	#endif

	#ifndef GEODE_STATICS_getUseCustomEditorHitbox
		#define GEODE_STATICS_getUseCustomEditorHitbox
		GEODE_AS_STATIC_FUNCTION(getUseCustomEditorHitbox) 
	#endif

	#ifndef GEODE_STATICS_getUseSpecialLight
		#define GEODE_STATICS_getUseSpecialLight
		GEODE_AS_STATIC_FUNCTION(getUseSpecialLight) 
	#endif

	#ifndef GEODE_STATICS_getWasSelected
		#define GEODE_STATICS_getWasSelected
		GEODE_AS_STATIC_FUNCTION(getWasSelected) 
	#endif

	#ifndef GEODE_STATICS_getZLayer
		#define GEODE_STATICS_getZLayer
		GEODE_AS_STATIC_FUNCTION(getZLayer) 
	#endif

	#ifndef GEODE_STATICS_groupColor
		#define GEODE_STATICS_groupColor
		GEODE_AS_STATIC_FUNCTION(groupColor) 
	#endif

	#ifndef GEODE_STATICS_groupOpacityMod
		#define GEODE_STATICS_groupOpacityMod
		GEODE_AS_STATIC_FUNCTION(groupOpacityMod) 
	#endif

	#ifndef GEODE_STATICS_groupWasDisabled
		#define GEODE_STATICS_groupWasDisabled
		GEODE_AS_STATIC_FUNCTION(groupWasDisabled) 
	#endif

	#ifndef GEODE_STATICS_groupWasEnabled
		#define GEODE_STATICS_groupWasEnabled
		GEODE_AS_STATIC_FUNCTION(groupWasEnabled) 
	#endif

	#ifndef GEODE_STATICS_hasBeenActivatedByPlayer
		#define GEODE_STATICS_hasBeenActivatedByPlayer
		GEODE_AS_STATIC_FUNCTION(hasBeenActivatedByPlayer) 
	#endif

	#ifndef GEODE_STATICS_hasSecondaryColor
		#define GEODE_STATICS_hasSecondaryColor
		GEODE_AS_STATIC_FUNCTION(hasSecondaryColor) 
	#endif

	#ifndef GEODE_STATICS_ignoreFade
		#define GEODE_STATICS_ignoreFade
		GEODE_AS_STATIC_FUNCTION(ignoreFade) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_isColorObject
		#define GEODE_STATICS_isColorObject
		GEODE_AS_STATIC_FUNCTION(isColorObject) 
	#endif

	#ifndef GEODE_STATICS_isColorTrigger
		#define GEODE_STATICS_isColorTrigger
		GEODE_AS_STATIC_FUNCTION(isColorTrigger) 
	#endif

	#ifndef GEODE_STATICS_isFacingDown
		#define GEODE_STATICS_isFacingDown
		GEODE_AS_STATIC_FUNCTION(isFacingDown) 
	#endif

	#ifndef GEODE_STATICS_isSpawnableTrigger
		#define GEODE_STATICS_isSpawnableTrigger
		GEODE_AS_STATIC_FUNCTION(isSpawnableTrigger) 
	#endif

	#ifndef GEODE_STATICS_isSpecialObject
		#define GEODE_STATICS_isSpecialObject
		GEODE_AS_STATIC_FUNCTION(isSpecialObject) 
	#endif

	#ifndef GEODE_STATICS_isTrigger
		#define GEODE_STATICS_isTrigger
		GEODE_AS_STATIC_FUNCTION(isTrigger) 
	#endif

	#ifndef GEODE_STATICS_loadGroupsFromString
		#define GEODE_STATICS_loadGroupsFromString
		GEODE_AS_STATIC_FUNCTION(loadGroupsFromString) 
	#endif

	#ifndef GEODE_STATICS_objectFromString
		#define GEODE_STATICS_objectFromString
		GEODE_AS_STATIC_FUNCTION(objectFromString) 
	#endif

	#ifndef GEODE_STATICS_opacityModForMode
		#define GEODE_STATICS_opacityModForMode
		GEODE_AS_STATIC_FUNCTION(opacityModForMode) 
	#endif

	#ifndef GEODE_STATICS_parentForZLayer
		#define GEODE_STATICS_parentForZLayer
		GEODE_AS_STATIC_FUNCTION(parentForZLayer) 
	#endif

	#ifndef GEODE_STATICS_perspectiveColorFrame
		#define GEODE_STATICS_perspectiveColorFrame
		GEODE_AS_STATIC_FUNCTION(perspectiveColorFrame) 
	#endif

	#ifndef GEODE_STATICS_perspectiveFrame
		#define GEODE_STATICS_perspectiveFrame
		GEODE_AS_STATIC_FUNCTION(perspectiveFrame) 
	#endif

	#ifndef GEODE_STATICS_playShineEffect
		#define GEODE_STATICS_playShineEffect
		GEODE_AS_STATIC_FUNCTION(playShineEffect) 
	#endif

	#ifndef GEODE_STATICS_powerOffObject
		#define GEODE_STATICS_powerOffObject
		GEODE_AS_STATIC_FUNCTION(powerOffObject) 
	#endif

	#ifndef GEODE_STATICS_powerOnObject
		#define GEODE_STATICS_powerOnObject
		GEODE_AS_STATIC_FUNCTION(powerOnObject) 
	#endif

	#ifndef GEODE_STATICS_quickUpdatePosition
		#define GEODE_STATICS_quickUpdatePosition
		GEODE_AS_STATIC_FUNCTION(quickUpdatePosition) 
	#endif

	#ifndef GEODE_STATICS_removeColorSprite
		#define GEODE_STATICS_removeColorSprite
		GEODE_AS_STATIC_FUNCTION(removeColorSprite) 
	#endif

	#ifndef GEODE_STATICS_removeGlow
		#define GEODE_STATICS_removeGlow
		GEODE_AS_STATIC_FUNCTION(removeGlow) 
	#endif

	#ifndef GEODE_STATICS_reorderColorSprite
		#define GEODE_STATICS_reorderColorSprite
		GEODE_AS_STATIC_FUNCTION(reorderColorSprite) 
	#endif

	#ifndef GEODE_STATICS_resetGroupDisabled
		#define GEODE_STATICS_resetGroupDisabled
		GEODE_AS_STATIC_FUNCTION(resetGroupDisabled) 
	#endif

	#ifndef GEODE_STATICS_resetMainColorMode
		#define GEODE_STATICS_resetMainColorMode
		GEODE_AS_STATIC_FUNCTION(resetMainColorMode) 
	#endif

	#ifndef GEODE_STATICS_resetSecondaryColorMode
		#define GEODE_STATICS_resetSecondaryColorMode
		GEODE_AS_STATIC_FUNCTION(resetSecondaryColorMode) 
	#endif

	#ifndef GEODE_STATICS_setAddToBatch2
		#define GEODE_STATICS_setAddToBatch2
		GEODE_AS_STATIC_FUNCTION(setAddToBatch2) 
	#endif

	#ifndef GEODE_STATICS_setColorManager
		#define GEODE_STATICS_setColorManager
		GEODE_AS_STATIC_FUNCTION(setColorManager) 
	#endif

	#ifndef GEODE_STATICS_setColorOnTop
		#define GEODE_STATICS_setColorOnTop
		GEODE_AS_STATIC_FUNCTION(setColorOnTop) 
	#endif

	#ifndef GEODE_STATICS_setCustomColorIdx
		#define GEODE_STATICS_setCustomColorIdx
		GEODE_AS_STATIC_FUNCTION(setCustomColorIdx) 
	#endif

	#ifndef GEODE_STATICS_setCustomDontFade
		#define GEODE_STATICS_setCustomDontFade
		GEODE_AS_STATIC_FUNCTION(setCustomDontFade) 
	#endif

	#ifndef GEODE_STATICS_setCustomHitBox
		#define GEODE_STATICS_setCustomHitBox
		GEODE_AS_STATIC_FUNCTION(setCustomHitBox) 
	#endif

	#ifndef GEODE_STATICS_setCustomObjectZ
		#define GEODE_STATICS_setCustomObjectZ
		GEODE_AS_STATIC_FUNCTION(setCustomObjectZ) 
	#endif

	#ifndef GEODE_STATICS_setCustomScale
		#define GEODE_STATICS_setCustomScale
		GEODE_AS_STATIC_FUNCTION(setCustomScale) 
	#endif

	#ifndef GEODE_STATICS_setCustomZLayer
		#define GEODE_STATICS_setCustomZLayer
		GEODE_AS_STATIC_FUNCTION(setCustomZLayer) 
	#endif

	#ifndef GEODE_STATICS_setDefaultMainColorMode
		#define GEODE_STATICS_setDefaultMainColorMode
		GEODE_AS_STATIC_FUNCTION(setDefaultMainColorMode) 
	#endif

	#ifndef GEODE_STATICS_setDefaultSecondaryColorMode
		#define GEODE_STATICS_setDefaultSecondaryColorMode
		GEODE_AS_STATIC_FUNCTION(setDefaultSecondaryColorMode) 
	#endif

	#ifndef GEODE_STATICS_setDidUpdateLastPosition
		#define GEODE_STATICS_setDidUpdateLastPosition
		GEODE_AS_STATIC_FUNCTION(setDidUpdateLastPosition) 
	#endif

	#ifndef GEODE_STATICS_setDontApplyEffect
		#define GEODE_STATICS_setDontApplyEffect
		GEODE_AS_STATIC_FUNCTION(setDontApplyEffect) 
	#endif

	#ifndef GEODE_STATICS_setDontApplyFade
		#define GEODE_STATICS_setDontApplyFade
		GEODE_AS_STATIC_FUNCTION(setDontApplyFade) 
	#endif

	#ifndef GEODE_STATICS_setDontFade
		#define GEODE_STATICS_setDontFade
		GEODE_AS_STATIC_FUNCTION(setDontFade) 
	#endif

	#ifndef GEODE_STATICS_setDontFadeTinted
		#define GEODE_STATICS_setDontFadeTinted
		GEODE_AS_STATIC_FUNCTION(setDontFadeTinted) 
	#endif

	#ifndef GEODE_STATICS_setDontTransform
		#define GEODE_STATICS_setDontTransform
		GEODE_AS_STATIC_FUNCTION(setDontTransform) 
	#endif

	#ifndef GEODE_STATICS_setEditorCustomScale
		#define GEODE_STATICS_setEditorCustomScale
		GEODE_AS_STATIC_FUNCTION(setEditorCustomScale) 
	#endif

	#ifndef GEODE_STATICS_setEditorLayerID
		#define GEODE_STATICS_setEditorLayerID
		GEODE_AS_STATIC_FUNCTION(setEditorLayerID) 
	#endif

	#ifndef GEODE_STATICS_setEditorLayerID2
		#define GEODE_STATICS_setEditorLayerID2
		GEODE_AS_STATIC_FUNCTION(setEditorLayerID2) 
	#endif

	#ifndef GEODE_STATICS_setEditorSelected
		#define GEODE_STATICS_setEditorSelected
		GEODE_AS_STATIC_FUNCTION(setEditorSelected) 
	#endif

	#ifndef GEODE_STATICS_setEditorSelectIdx
		#define GEODE_STATICS_setEditorSelectIdx
		GEODE_AS_STATIC_FUNCTION(setEditorSelectIdx) 
	#endif

	#ifndef GEODE_STATICS_setEnterAngle
		#define GEODE_STATICS_setEnterAngle
		GEODE_AS_STATIC_FUNCTION(setEnterAngle) 
	#endif

	#ifndef GEODE_STATICS_setEnterEffect
		#define GEODE_STATICS_setEnterEffect
		GEODE_AS_STATIC_FUNCTION(setEnterEffect) 
	#endif

	#ifndef GEODE_STATICS_setFadeInPosOffset
		#define GEODE_STATICS_setFadeInPosOffset
		GEODE_AS_STATIC_FUNCTION(setFadeInPosOffset) 
	#endif

	#ifndef GEODE_STATICS_setGlowOpacity
		#define GEODE_STATICS_setGlowOpacity
		GEODE_AS_STATIC_FUNCTION(setGlowOpacity) 
	#endif

	#ifndef GEODE_STATICS_setGlowOpacityMod
		#define GEODE_STATICS_setGlowOpacityMod
		GEODE_AS_STATIC_FUNCTION(setGlowOpacityMod) 
	#endif

	#ifndef GEODE_STATICS_setGroupUpdated
		#define GEODE_STATICS_setGroupUpdated
		GEODE_AS_STATIC_FUNCTION(setGroupUpdated) 
	#endif

	#ifndef GEODE_STATICS_setHasCustomChildren
		#define GEODE_STATICS_setHasCustomChildren
		GEODE_AS_STATIC_FUNCTION(setHasCustomChildren) 
	#endif

	#ifndef GEODE_STATICS_setHasSyncedAnimation
		#define GEODE_STATICS_setHasSyncedAnimation
		GEODE_AS_STATIC_FUNCTION(setHasSyncedAnimation) 
	#endif

	#ifndef GEODE_STATICS_setIgnoreScreenCheck
		#define GEODE_STATICS_setIgnoreScreenCheck
		GEODE_AS_STATIC_FUNCTION(setIgnoreScreenCheck) 
	#endif

	#ifndef GEODE_STATICS_setIsGroupParent
		#define GEODE_STATICS_setIsGroupParent
		GEODE_AS_STATIC_FUNCTION(setIsGroupParent) 
	#endif

	#ifndef GEODE_STATICS_setIsSelected
		#define GEODE_STATICS_setIsSelected
		GEODE_AS_STATIC_FUNCTION(setIsSelected) 
	#endif

	#ifndef GEODE_STATICS_setIsTintObject
		#define GEODE_STATICS_setIsTintObject
		GEODE_AS_STATIC_FUNCTION(setIsTintObject) 
	#endif

	#ifndef GEODE_STATICS_setLastPosition
		#define GEODE_STATICS_setLastPosition
		GEODE_AS_STATIC_FUNCTION(setLastPosition) 
	#endif

	#ifndef GEODE_STATICS_setLockColorAsChild
		#define GEODE_STATICS_setLockColorAsChild
		GEODE_AS_STATIC_FUNCTION(setLockColorAsChild) 
	#endif

	#ifndef GEODE_STATICS_setM_ID
		#define GEODE_STATICS_setM_ID
		GEODE_AS_STATIC_FUNCTION(setM_ID) 
	#endif

	#ifndef GEODE_STATICS_setMainColorMode
		#define GEODE_STATICS_setMainColorMode
		GEODE_AS_STATIC_FUNCTION(setMainColorMode) 
	#endif

	#ifndef GEODE_STATICS_setMyAction
		#define GEODE_STATICS_setMyAction
		GEODE_AS_STATIC_FUNCTION(setMyAction) 
	#endif

	#ifndef GEODE_STATICS_setNeedsReorder
		#define GEODE_STATICS_setNeedsReorder
		GEODE_AS_STATIC_FUNCTION(setNeedsReorder) 
	#endif

	#ifndef GEODE_STATICS_setNeedsUpdateColor
		#define GEODE_STATICS_setNeedsUpdateColor
		GEODE_AS_STATIC_FUNCTION(setNeedsUpdateColor) 
	#endif

	#ifndef GEODE_STATICS_setObjectClass
		#define GEODE_STATICS_setObjectClass
		GEODE_AS_STATIC_FUNCTION(setObjectClass) 
	#endif

	#ifndef GEODE_STATICS_setObjectID
		#define GEODE_STATICS_setObjectID
		GEODE_AS_STATIC_FUNCTION(setObjectID) 
	#endif

	#ifndef GEODE_STATICS_setObjectKey
		#define GEODE_STATICS_setObjectKey
		GEODE_AS_STATIC_FUNCTION(setObjectKey) 
	#endif

	#ifndef GEODE_STATICS_setObjectZ
		#define GEODE_STATICS_setObjectZ
		GEODE_AS_STATIC_FUNCTION(setObjectZ) 
	#endif

	#ifndef GEODE_STATICS_setScaleModX
		#define GEODE_STATICS_setScaleModX
		GEODE_AS_STATIC_FUNCTION(setScaleModX) 
	#endif

	#ifndef GEODE_STATICS_setScaleModY
		#define GEODE_STATICS_setScaleModY
		GEODE_AS_STATIC_FUNCTION(setScaleModY) 
	#endif

	#ifndef GEODE_STATICS_setSecondaryColorMode
		#define GEODE_STATICS_setSecondaryColorMode
		GEODE_AS_STATIC_FUNCTION(setSecondaryColorMode) 
	#endif

	#ifndef GEODE_STATICS_setSectionIdx
		#define GEODE_STATICS_setSectionIdx
		GEODE_AS_STATIC_FUNCTION(setSectionIdx) 
	#endif

	#ifndef GEODE_STATICS_setShouldHide
		#define GEODE_STATICS_setShouldHide
		GEODE_AS_STATIC_FUNCTION(setShouldHide) 
	#endif

	#ifndef GEODE_STATICS_setSpawnedByTrigger
		#define GEODE_STATICS_setSpawnedByTrigger
		GEODE_AS_STATIC_FUNCTION(setSpawnedByTrigger) 
	#endif

	#ifndef GEODE_STATICS_setStartFlipX
		#define GEODE_STATICS_setStartFlipX
		GEODE_AS_STATIC_FUNCTION(setStartFlipX) 
	#endif

	#ifndef GEODE_STATICS_setStartFlipY
		#define GEODE_STATICS_setStartFlipY
		GEODE_AS_STATIC_FUNCTION(setStartFlipY) 
	#endif

	#ifndef GEODE_STATICS_setStartRotation
		#define GEODE_STATICS_setStartRotation
		GEODE_AS_STATIC_FUNCTION(setStartRotation) 
	#endif

	#ifndef GEODE_STATICS_setStartScaleX
		#define GEODE_STATICS_setStartScaleX
		GEODE_AS_STATIC_FUNCTION(setStartScaleX) 
	#endif

	#ifndef GEODE_STATICS_setStartScaleY
		#define GEODE_STATICS_setStartScaleY
		GEODE_AS_STATIC_FUNCTION(setStartScaleY) 
	#endif

	#ifndef GEODE_STATICS_setStateVar
		#define GEODE_STATICS_setStateVar
		GEODE_AS_STATIC_FUNCTION(setStateVar) 
	#endif

	#ifndef GEODE_STATICS_setStoredPosition
		#define GEODE_STATICS_setStoredPosition
		GEODE_AS_STATIC_FUNCTION(setStoredPosition) 
	#endif

	#ifndef GEODE_STATICS_setTempOffset
		#define GEODE_STATICS_setTempOffset
		GEODE_AS_STATIC_FUNCTION(setTempOffset) 
	#endif

	#ifndef GEODE_STATICS_setTextBlockString
		#define GEODE_STATICS_setTextBlockString
		GEODE_AS_STATIC_FUNCTION(setTextBlockString) 
	#endif

	#ifndef GEODE_STATICS_setTouchTriggered
		#define GEODE_STATICS_setTouchTriggered
		GEODE_AS_STATIC_FUNCTION(setTouchTriggered) 
	#endif

	#ifndef GEODE_STATICS_setUniqueID
		#define GEODE_STATICS_setUniqueID
		GEODE_AS_STATIC_FUNCTION(setUniqueID) 
	#endif

	#ifndef GEODE_STATICS_setupCoinAnimation
		#define GEODE_STATICS_setupCoinAnimation
		GEODE_AS_STATIC_FUNCTION(setupCoinAnimation) 
	#endif

	#ifndef GEODE_STATICS_setupCoinArt
		#define GEODE_STATICS_setupCoinArt
		GEODE_AS_STATIC_FUNCTION(setupCoinArt) 
	#endif

	#ifndef GEODE_STATICS_setupColorSprite
		#define GEODE_STATICS_setupColorSprite
		GEODE_AS_STATIC_FUNCTION(setupColorSprite) 
	#endif

	#ifndef GEODE_STATICS_setupCustomSprites
		#define GEODE_STATICS_setupCustomSprites
		GEODE_AS_STATIC_FUNCTION(setupCustomSprites) 
	#endif

	#ifndef GEODE_STATICS_setUpdateLastPos
		#define GEODE_STATICS_setUpdateLastPos
		GEODE_AS_STATIC_FUNCTION(setUpdateLastPos) 
	#endif

	#ifndef GEODE_STATICS_setUseAudioScale
		#define GEODE_STATICS_setUseAudioScale
		GEODE_AS_STATIC_FUNCTION(setUseAudioScale) 
	#endif

	#ifndef GEODE_STATICS_setUseCustomContentSize
		#define GEODE_STATICS_setUseCustomContentSize
		GEODE_AS_STATIC_FUNCTION(setUseCustomContentSize) 
	#endif

	#ifndef GEODE_STATICS_setUseCustomEditorHitbox
		#define GEODE_STATICS_setUseCustomEditorHitbox
		GEODE_AS_STATIC_FUNCTION(setUseCustomEditorHitbox) 
	#endif

	#ifndef GEODE_STATICS_setWasSelected
		#define GEODE_STATICS_setWasSelected
		GEODE_AS_STATIC_FUNCTION(setWasSelected) 
	#endif

	#ifndef GEODE_STATICS_setZLayer
		#define GEODE_STATICS_setZLayer
		GEODE_AS_STATIC_FUNCTION(setZLayer) 
	#endif

	#ifndef GEODE_STATICS_shouldBlendColor
		#define GEODE_STATICS_shouldBlendColor
		GEODE_AS_STATIC_FUNCTION(shouldBlendColor) 
	#endif

	#ifndef GEODE_STATICS_shouldNotSave
		#define GEODE_STATICS_shouldNotSave
		GEODE_AS_STATIC_FUNCTION(shouldNotSave) 
	#endif

	#ifndef GEODE_STATICS_slopeFloorTop
		#define GEODE_STATICS_slopeFloorTop
		GEODE_AS_STATIC_FUNCTION(slopeFloorTop) 
	#endif

	#ifndef GEODE_STATICS_slopeWallLeft
		#define GEODE_STATICS_slopeWallLeft
		GEODE_AS_STATIC_FUNCTION(slopeWallLeft) 
	#endif

	#ifndef GEODE_STATICS_slopeYPos
		#define GEODE_STATICS_slopeYPos
		GEODE_AS_STATIC_FUNCTION(slopeYPos) 
	#endif

	#ifndef GEODE_STATICS_triggerActivated
		#define GEODE_STATICS_triggerActivated
		GEODE_AS_STATIC_FUNCTION(triggerActivated) 
	#endif

	#ifndef GEODE_STATICS_triggerObject
		#define GEODE_STATICS_triggerObject
		GEODE_AS_STATIC_FUNCTION(triggerObject) 
	#endif

	#ifndef GEODE_STATICS_updateCustomScale
		#define GEODE_STATICS_updateCustomScale
		GEODE_AS_STATIC_FUNCTION(updateCustomScale) 
	#endif

	#ifndef GEODE_STATICS_updateMainColor
		#define GEODE_STATICS_updateMainColor
		GEODE_AS_STATIC_FUNCTION(updateMainColor) 
	#endif

	#ifndef GEODE_STATICS_updateObjectEditorColor
		#define GEODE_STATICS_updateObjectEditorColor
		GEODE_AS_STATIC_FUNCTION(updateObjectEditorColor) 
	#endif

	#ifndef GEODE_STATICS_updateSecondaryColor
		#define GEODE_STATICS_updateSecondaryColor
		GEODE_AS_STATIC_FUNCTION(updateSecondaryColor) 
	#endif

	#ifndef GEODE_STATICS_updateStartPos
		#define GEODE_STATICS_updateStartPos
		GEODE_AS_STATIC_FUNCTION(updateStartPos) 
	#endif

	#ifndef GEODE_STATICS_updateState
		#define GEODE_STATICS_updateState
		GEODE_AS_STATIC_FUNCTION(updateState) 
	#endif

	#ifndef GEODE_STATICS_updateSyncedAnimation
		#define GEODE_STATICS_updateSyncedAnimation
		GEODE_AS_STATIC_FUNCTION(updateSyncedAnimation) 
	#endif

	#ifndef GEODE_STATICS_updateTextObject
		#define GEODE_STATICS_updateTextObject
		GEODE_AS_STATIC_FUNCTION(updateTextObject) 
	#endif

	#ifndef GEODE_STATICS_waitingForActivation
		#define GEODE_STATICS_waitingForActivation
		GEODE_AS_STATIC_FUNCTION(waitingForActivation) 
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

	#ifndef GEODE_STATICS_initWithTexture
		#define GEODE_STATICS_initWithTexture
		GEODE_AS_STATIC_FUNCTION(initWithTexture) 
	#endif

	#ifndef GEODE_STATICS_setChildColor
		#define GEODE_STATICS_setChildColor
		GEODE_AS_STATIC_FUNCTION(setChildColor) 
	#endif

	#ifndef GEODE_STATICS_setFlipX
		#define GEODE_STATICS_setFlipX
		GEODE_AS_STATIC_FUNCTION(setFlipX) 
	#endif

	#ifndef GEODE_STATICS_setFlipY
		#define GEODE_STATICS_setFlipY
		GEODE_AS_STATIC_FUNCTION(setFlipY) 
	#endif

	#ifndef GEODE_STATICS_customSetup
		#define GEODE_STATICS_customSetup
		GEODE_AS_STATIC_FUNCTION(customSetup) 
	#endif

	#ifndef GEODE_STATICS_addMainSpriteToParent
		#define GEODE_STATICS_addMainSpriteToParent
		GEODE_AS_STATIC_FUNCTION(addMainSpriteToParent) 
	#endif

	#ifndef GEODE_STATICS_resetObject
		#define GEODE_STATICS_resetObject
		GEODE_AS_STATIC_FUNCTION(resetObject) 
	#endif

	#ifndef GEODE_STATICS_activateObject
		#define GEODE_STATICS_activateObject
		GEODE_AS_STATIC_FUNCTION(activateObject) 
	#endif

	#ifndef GEODE_STATICS_deactivateObject
		#define GEODE_STATICS_deactivateObject
		GEODE_AS_STATIC_FUNCTION(deactivateObject) 
	#endif

	#ifndef GEODE_STATICS_getObjectRect
		#define GEODE_STATICS_getObjectRect
		GEODE_AS_STATIC_FUNCTION(getObjectRect) 
	#endif

	#ifndef GEODE_STATICS_getObjectRect2
		#define GEODE_STATICS_getObjectRect2
		GEODE_AS_STATIC_FUNCTION(getObjectRect2) 
	#endif

	#ifndef GEODE_STATICS_getObjectTextureRect
		#define GEODE_STATICS_getObjectTextureRect
		GEODE_AS_STATIC_FUNCTION(getObjectTextureRect) 
	#endif

	#ifndef GEODE_STATICS_getRealPosition
		#define GEODE_STATICS_getRealPosition
		GEODE_AS_STATIC_FUNCTION(getRealPosition) 
	#endif

	#ifndef GEODE_STATICS_setStartPos
		#define GEODE_STATICS_setStartPos
		GEODE_AS_STATIC_FUNCTION(setStartPos) 
	#endif

	#ifndef GEODE_STATICS_updateStartValues
		#define GEODE_STATICS_updateStartValues
		GEODE_AS_STATIC_FUNCTION(updateStartValues) 
	#endif

	#ifndef GEODE_STATICS_isFlipX
		#define GEODE_STATICS_isFlipX
		GEODE_AS_STATIC_FUNCTION(isFlipX) 
	#endif

	#ifndef GEODE_STATICS_isFlipY
		#define GEODE_STATICS_isFlipY
		GEODE_AS_STATIC_FUNCTION(isFlipY) 
	#endif

	#ifndef GEODE_STATICS_setRScaleX
		#define GEODE_STATICS_setRScaleX
		GEODE_AS_STATIC_FUNCTION(setRScaleX) 
	#endif

	#ifndef GEODE_STATICS_setRScaleY
		#define GEODE_STATICS_setRScaleY
		GEODE_AS_STATIC_FUNCTION(setRScaleY) 
	#endif

	#ifndef GEODE_STATICS_setRScale
		#define GEODE_STATICS_setRScale
		GEODE_AS_STATIC_FUNCTION(setRScale) 
	#endif

	#ifndef GEODE_STATICS_getRScaleX
		#define GEODE_STATICS_getRScaleX
		GEODE_AS_STATIC_FUNCTION(getRScaleX) 
	#endif

	#ifndef GEODE_STATICS_getRScaleY
		#define GEODE_STATICS_getRScaleY
		GEODE_AS_STATIC_FUNCTION(getRScaleY) 
	#endif

	#ifndef GEODE_STATICS_setObjectColor
		#define GEODE_STATICS_setObjectColor
		GEODE_AS_STATIC_FUNCTION(setObjectColor) 
	#endif

	#ifndef GEODE_STATICS_setGlowColor
		#define GEODE_STATICS_setGlowColor
		GEODE_AS_STATIC_FUNCTION(setGlowColor) 
	#endif

	#ifndef GEODE_STATICS_selectObject
		#define GEODE_STATICS_selectObject
		GEODE_AS_STATIC_FUNCTION(selectObject) 
	#endif

	#ifndef GEODE_STATICS_hasBeenActivated
		#define GEODE_STATICS_hasBeenActivated
		GEODE_AS_STATIC_FUNCTION(hasBeenActivated) 
	#endif

	#ifndef GEODE_STATICS_getOrientedBox
		#define GEODE_STATICS_getOrientedBox
		GEODE_AS_STATIC_FUNCTION(getOrientedBox) 
	#endif

	#ifndef GEODE_STATICS_updateOrientedBox
		#define GEODE_STATICS_updateOrientedBox
		GEODE_AS_STATIC_FUNCTION(updateOrientedBox) 
	#endif

	#ifndef GEODE_STATICS_addToGroup
		#define GEODE_STATICS_addToGroup
		GEODE_AS_STATIC_FUNCTION(addToGroup) 
	#endif

	#ifndef GEODE_STATICS_removeFromGroup
		#define GEODE_STATICS_removeFromGroup
		GEODE_AS_STATIC_FUNCTION(removeFromGroup) 
	#endif

	#ifndef GEODE_STATICS_saveActiveColors
		#define GEODE_STATICS_saveActiveColors
		GEODE_AS_STATIC_FUNCTION(saveActiveColors) 
	#endif

	#ifndef GEODE_STATICS_spawnXPosition
		#define GEODE_STATICS_spawnXPosition
		GEODE_AS_STATIC_FUNCTION(spawnXPosition) 
	#endif

	#ifndef GEODE_STATICS_updateParticleColor
		#define GEODE_STATICS_updateParticleColor
		GEODE_AS_STATIC_FUNCTION(updateParticleColor) 
	#endif

	#ifndef GEODE_STATICS_getHasSyncedAnimation
		#define GEODE_STATICS_getHasSyncedAnimation
		GEODE_AS_STATIC_FUNCTION(getHasSyncedAnimation) 
	#endif

	#ifndef GEODE_STATICS_setObjectRectDirty
		#define GEODE_STATICS_setObjectRectDirty
		GEODE_AS_STATIC_FUNCTION(setObjectRectDirty) 
	#endif

	#ifndef GEODE_STATICS_setOrientedRectDirty
		#define GEODE_STATICS_setOrientedRectDirty
		GEODE_AS_STATIC_FUNCTION(setOrientedRectDirty) 
	#endif

	#ifndef GEODE_STATICS_setType
		#define GEODE_STATICS_setType
		GEODE_AS_STATIC_FUNCTION(setType) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_activatedByPlayer
		#define GEODE_CONCEPT_CHECK_activatedByPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(activatedByPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addColorSprite
		#define GEODE_CONCEPT_CHECK_addColorSprite
		GEODE_CONCEPT_FUNCTION_CHECK(addColorSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addColorSpriteToParent
		#define GEODE_CONCEPT_CHECK_addColorSpriteToParent
		GEODE_CONCEPT_FUNCTION_CHECK(addColorSpriteToParent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addCustomBlackChild
		#define GEODE_CONCEPT_CHECK_addCustomBlackChild
		GEODE_CONCEPT_FUNCTION_CHECK(addCustomBlackChild) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addCustomChild
		#define GEODE_CONCEPT_CHECK_addCustomChild
		GEODE_CONCEPT_FUNCTION_CHECK(addCustomChild) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addCustomColorChild
		#define GEODE_CONCEPT_CHECK_addCustomColorChild
		GEODE_CONCEPT_FUNCTION_CHECK(addCustomColorChild) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addGlow
		#define GEODE_CONCEPT_CHECK_addGlow
		GEODE_CONCEPT_FUNCTION_CHECK(addGlow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addInternalChild
		#define GEODE_CONCEPT_CHECK_addInternalChild
		GEODE_CONCEPT_FUNCTION_CHECK(addInternalChild) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addInternalCustomColorChild
		#define GEODE_CONCEPT_CHECK_addInternalCustomColorChild
		GEODE_CONCEPT_FUNCTION_CHECK(addInternalCustomColorChild) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addInternalGlowChild
		#define GEODE_CONCEPT_CHECK_addInternalGlowChild
		GEODE_CONCEPT_FUNCTION_CHECK(addInternalGlowChild) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToTempOffset
		#define GEODE_CONCEPT_CHECK_addToTempOffset
		GEODE_CONCEPT_FUNCTION_CHECK(addToTempOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_calculateOrientedBox
		#define GEODE_CONCEPT_CHECK_calculateOrientedBox
		GEODE_CONCEPT_FUNCTION_CHECK(calculateOrientedBox) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_calculateSpawnXPos
		#define GEODE_CONCEPT_CHECK_calculateSpawnXPos
		GEODE_CONCEPT_FUNCTION_CHECK(calculateSpawnXPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canChangeCustomColor
		#define GEODE_CONCEPT_CHECK_canChangeCustomColor
		GEODE_CONCEPT_FUNCTION_CHECK(canChangeCustomColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canChangeMainColor
		#define GEODE_CONCEPT_CHECK_canChangeMainColor
		GEODE_CONCEPT_FUNCTION_CHECK(canChangeMainColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canChangeSecondaryColor
		#define GEODE_CONCEPT_CHECK_canChangeSecondaryColor
		GEODE_CONCEPT_FUNCTION_CHECK(canChangeSecondaryColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canRotateFree
		#define GEODE_CONCEPT_CHECK_canRotateFree
		GEODE_CONCEPT_FUNCTION_CHECK(canRotateFree) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_colorForMode
		#define GEODE_CONCEPT_CHECK_colorForMode
		GEODE_CONCEPT_FUNCTION_CHECK(colorForMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_commonSetup
		#define GEODE_CONCEPT_CHECK_commonSetup
		GEODE_CONCEPT_FUNCTION_CHECK(commonSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_copyGroups
		#define GEODE_CONCEPT_CHECK_copyGroups
		GEODE_CONCEPT_FUNCTION_CHECK(copyGroups) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createAndAddParticle
		#define GEODE_CONCEPT_CHECK_createAndAddParticle
		GEODE_CONCEPT_FUNCTION_CHECK(createAndAddParticle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createGlow
		#define GEODE_CONCEPT_CHECK_createGlow
		GEODE_CONCEPT_FUNCTION_CHECK(createGlow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createGroupContainer
		#define GEODE_CONCEPT_CHECK_createGroupContainer
		GEODE_CONCEPT_FUNCTION_CHECK(createGroupContainer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createRotateAction
		#define GEODE_CONCEPT_CHECK_createRotateAction
		GEODE_CONCEPT_FUNCTION_CHECK(createRotateAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createSpriteColor
		#define GEODE_CONCEPT_CHECK_createSpriteColor
		GEODE_CONCEPT_FUNCTION_CHECK(createSpriteColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithFrame
		#define GEODE_CONCEPT_CHECK_createWithFrame
		GEODE_CONCEPT_FUNCTION_CHECK(createWithFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithKey
		#define GEODE_CONCEPT_CHECK_createWithKey
		GEODE_CONCEPT_FUNCTION_CHECK(createWithKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithTexture
		#define GEODE_CONCEPT_CHECK_createWithTexture
		GEODE_CONCEPT_FUNCTION_CHECK(createWithTexture) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_customObjectSetup
		#define GEODE_CONCEPT_CHECK_customObjectSetup
		GEODE_CONCEPT_FUNCTION_CHECK(customObjectSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_customScaleMod
		#define GEODE_CONCEPT_CHECK_customScaleMod
		GEODE_CONCEPT_FUNCTION_CHECK(customScaleMod) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deselectObject
		#define GEODE_CONCEPT_CHECK_deselectObject
		GEODE_CONCEPT_FUNCTION_CHECK(deselectObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_destroyObject
		#define GEODE_CONCEPT_CHECK_destroyObject
		GEODE_CONCEPT_FUNCTION_CHECK(destroyObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_determineSlopeDirection
		#define GEODE_CONCEPT_CHECK_determineSlopeDirection
		GEODE_CONCEPT_FUNCTION_CHECK(determineSlopeDirection) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dontCountTowardsLimit
		#define GEODE_CONCEPT_CHECK_dontCountTowardsLimit
		GEODE_CONCEPT_FUNCTION_CHECK(dontCountTowardsLimit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_duplicateAttributes
		#define GEODE_CONCEPT_CHECK_duplicateAttributes
		GEODE_CONCEPT_FUNCTION_CHECK(duplicateAttributes) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_duplicateColorMode
		#define GEODE_CONCEPT_CHECK_duplicateColorMode
		GEODE_CONCEPT_FUNCTION_CHECK(duplicateColorMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_duplicateValues
		#define GEODE_CONCEPT_CHECK_duplicateValues
		GEODE_CONCEPT_FUNCTION_CHECK(duplicateValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_editorColorForCustomMode
		#define GEODE_CONCEPT_CHECK_editorColorForCustomMode
		GEODE_CONCEPT_FUNCTION_CHECK(editorColorForCustomMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_editorColorForMode
		#define GEODE_CONCEPT_CHECK_editorColorForMode
		GEODE_CONCEPT_FUNCTION_CHECK(editorColorForMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getActiveColorForMode
		#define GEODE_CONCEPT_CHECK_getActiveColorForMode
		GEODE_CONCEPT_FUNCTION_CHECK(getActiveColorForMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAddedToBlend
		#define GEODE_CONCEPT_CHECK_getAddedToBlend
		GEODE_CONCEPT_FUNCTION_CHECK(getAddedToBlend) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAddToBatch2
		#define GEODE_CONCEPT_CHECK_getAddToBatch2
		GEODE_CONCEPT_FUNCTION_CHECK(getAddToBatch2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBallFrame
		#define GEODE_CONCEPT_CHECK_getBallFrame
		GEODE_CONCEPT_FUNCTION_CHECK(getBallFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBoxOffset
		#define GEODE_CONCEPT_CHECK_getBoxOffset
		GEODE_CONCEPT_FUNCTION_CHECK(getBoxOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getColorFrame
		#define GEODE_CONCEPT_CHECK_getColorFrame
		GEODE_CONCEPT_FUNCTION_CHECK(getColorFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getColorIndex
		#define GEODE_CONCEPT_CHECK_getColorIndex
		GEODE_CONCEPT_FUNCTION_CHECK(getColorIndex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getColorManager
		#define GEODE_CONCEPT_CHECK_getColorManager
		GEODE_CONCEPT_FUNCTION_CHECK(getColorManager) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getColorOnTop
		#define GEODE_CONCEPT_CHECK_getColorOnTop
		GEODE_CONCEPT_FUNCTION_CHECK(getColorOnTop) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getColorSprite
		#define GEODE_CONCEPT_CHECK_getColorSprite
		GEODE_CONCEPT_FUNCTION_CHECK(getColorSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCustomAudioScale
		#define GEODE_CONCEPT_CHECK_getCustomAudioScale
		GEODE_CONCEPT_FUNCTION_CHECK(getCustomAudioScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCustomColorIdx
		#define GEODE_CONCEPT_CHECK_getCustomColorIdx
		GEODE_CONCEPT_FUNCTION_CHECK(getCustomColorIdx) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCustomDontFade
		#define GEODE_CONCEPT_CHECK_getCustomDontFade
		GEODE_CONCEPT_FUNCTION_CHECK(getCustomDontFade) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCustomHitBox
		#define GEODE_CONCEPT_CHECK_getCustomHitBox
		GEODE_CONCEPT_FUNCTION_CHECK(getCustomHitBox) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCustomObjectZ
		#define GEODE_CONCEPT_CHECK_getCustomObjectZ
		GEODE_CONCEPT_FUNCTION_CHECK(getCustomObjectZ) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCustomScale
		#define GEODE_CONCEPT_CHECK_getCustomScale
		GEODE_CONCEPT_FUNCTION_CHECK(getCustomScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCustomZLayer
		#define GEODE_CONCEPT_CHECK_getCustomZLayer
		GEODE_CONCEPT_FUNCTION_CHECK(getCustomZLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDamaging
		#define GEODE_CONCEPT_CHECK_getDamaging
		GEODE_CONCEPT_FUNCTION_CHECK(getDamaging) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDidUpdateLastPosition
		#define GEODE_CONCEPT_CHECK_getDidUpdateLastPosition
		GEODE_CONCEPT_FUNCTION_CHECK(getDidUpdateLastPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDontApplyEffect
		#define GEODE_CONCEPT_CHECK_getDontApplyEffect
		GEODE_CONCEPT_FUNCTION_CHECK(getDontApplyEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDontApplyFade
		#define GEODE_CONCEPT_CHECK_getDontApplyFade
		GEODE_CONCEPT_FUNCTION_CHECK(getDontApplyFade) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDontFade
		#define GEODE_CONCEPT_CHECK_getDontFade
		GEODE_CONCEPT_FUNCTION_CHECK(getDontFade) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDontFadeTinted
		#define GEODE_CONCEPT_CHECK_getDontFadeTinted
		GEODE_CONCEPT_FUNCTION_CHECK(getDontFadeTinted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDontTransform
		#define GEODE_CONCEPT_CHECK_getDontTransform
		GEODE_CONCEPT_FUNCTION_CHECK(getDontTransform) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEditorCustomScale
		#define GEODE_CONCEPT_CHECK_getEditorCustomScale
		GEODE_CONCEPT_FUNCTION_CHECK(getEditorCustomScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEditorLayerID
		#define GEODE_CONCEPT_CHECK_getEditorLayerID
		GEODE_CONCEPT_FUNCTION_CHECK(getEditorLayerID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEditorLayerID2
		#define GEODE_CONCEPT_CHECK_getEditorLayerID2
		GEODE_CONCEPT_FUNCTION_CHECK(getEditorLayerID2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEditorSelected
		#define GEODE_CONCEPT_CHECK_getEditorSelected
		GEODE_CONCEPT_FUNCTION_CHECK(getEditorSelected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEditorSelectIdx
		#define GEODE_CONCEPT_CHECK_getEditorSelectIdx
		GEODE_CONCEPT_FUNCTION_CHECK(getEditorSelectIdx) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEnterAngle
		#define GEODE_CONCEPT_CHECK_getEnterAngle
		GEODE_CONCEPT_FUNCTION_CHECK(getEnterAngle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEnterEffect
		#define GEODE_CONCEPT_CHECK_getEnterEffect
		GEODE_CONCEPT_FUNCTION_CHECK(getEnterEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFadeInPosOffset
		#define GEODE_CONCEPT_CHECK_getFadeInPosOffset
		GEODE_CONCEPT_FUNCTION_CHECK(getFadeInPosOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFrame
		#define GEODE_CONCEPT_CHECK_getFrame
		GEODE_CONCEPT_FUNCTION_CHECK(getFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGlowFrame
		#define GEODE_CONCEPT_CHECK_getGlowFrame
		GEODE_CONCEPT_FUNCTION_CHECK(getGlowFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGlowOpacityMod
		#define GEODE_CONCEPT_CHECK_getGlowOpacityMod
		GEODE_CONCEPT_FUNCTION_CHECK(getGlowOpacityMod) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGlowUseBGColor
		#define GEODE_CONCEPT_CHECK_getGlowUseBGColor
		GEODE_CONCEPT_FUNCTION_CHECK(getGlowUseBGColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGroupCount
		#define GEODE_CONCEPT_CHECK_getGroupCount
		GEODE_CONCEPT_FUNCTION_CHECK(getGroupCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGroupDisabled
		#define GEODE_CONCEPT_CHECK_getGroupDisabled
		GEODE_CONCEPT_FUNCTION_CHECK(getGroupDisabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGroupDisabledCount
		#define GEODE_CONCEPT_CHECK_getGroupDisabledCount
		GEODE_CONCEPT_FUNCTION_CHECK(getGroupDisabledCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGroupID
		#define GEODE_CONCEPT_CHECK_getGroupID
		GEODE_CONCEPT_FUNCTION_CHECK(getGroupID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGroupString
		#define GEODE_CONCEPT_CHECK_getGroupString
		GEODE_CONCEPT_FUNCTION_CHECK(getGroupString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGroupUpdated
		#define GEODE_CONCEPT_CHECK_getGroupUpdated
		GEODE_CONCEPT_FUNCTION_CHECK(getGroupUpdated) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getHasCustomChildren
		#define GEODE_CONCEPT_CHECK_getHasCustomChildren
		GEODE_CONCEPT_FUNCTION_CHECK(getHasCustomChildren) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIgnoreScreenCheck
		#define GEODE_CONCEPT_CHECK_getIgnoreScreenCheck
		GEODE_CONCEPT_FUNCTION_CHECK(getIgnoreScreenCheck) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getInvisibleMode
		#define GEODE_CONCEPT_CHECK_getInvisibleMode
		GEODE_CONCEPT_FUNCTION_CHECK(getInvisibleMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIsAnimated
		#define GEODE_CONCEPT_CHECK_getIsAnimated
		GEODE_CONCEPT_FUNCTION_CHECK(getIsAnimated) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIsDetailColorObject
		#define GEODE_CONCEPT_CHECK_getIsDetailColorObject
		GEODE_CONCEPT_FUNCTION_CHECK(getIsDetailColorObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIsGroupParent
		#define GEODE_CONCEPT_CHECK_getIsGroupParent
		GEODE_CONCEPT_FUNCTION_CHECK(getIsGroupParent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIsInvisible
		#define GEODE_CONCEPT_CHECK_getIsInvisible
		GEODE_CONCEPT_FUNCTION_CHECK(getIsInvisible) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIsOriented
		#define GEODE_CONCEPT_CHECK_getIsOriented
		GEODE_CONCEPT_FUNCTION_CHECK(getIsOriented) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIsRotated
		#define GEODE_CONCEPT_CHECK_getIsRotated
		GEODE_CONCEPT_FUNCTION_CHECK(getIsRotated) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIsSelected
		#define GEODE_CONCEPT_CHECK_getIsSelected
		GEODE_CONCEPT_FUNCTION_CHECK(getIsSelected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIsTintObject
		#define GEODE_CONCEPT_CHECK_getIsTintObject
		GEODE_CONCEPT_FUNCTION_CHECK(getIsTintObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIsTriggerSaved
		#define GEODE_CONCEPT_CHECK_getIsTriggerSaved
		GEODE_CONCEPT_FUNCTION_CHECK(getIsTriggerSaved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLastPosition
		#define GEODE_CONCEPT_CHECK_getLastPosition
		GEODE_CONCEPT_FUNCTION_CHECK(getLastPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLockColorAsChild
		#define GEODE_CONCEPT_CHECK_getLockColorAsChild
		GEODE_CONCEPT_FUNCTION_CHECK(getLockColorAsChild) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getM_ID
		#define GEODE_CONCEPT_CHECK_getM_ID
		GEODE_CONCEPT_FUNCTION_CHECK(getM_ID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMainBlend
		#define GEODE_CONCEPT_CHECK_getMainBlend
		GEODE_CONCEPT_FUNCTION_CHECK(getMainBlend) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMainColor
		#define GEODE_CONCEPT_CHECK_getMainColor
		GEODE_CONCEPT_FUNCTION_CHECK(getMainColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMainColorBlack
		#define GEODE_CONCEPT_CHECK_getMainColorBlack
		GEODE_CONCEPT_FUNCTION_CHECK(getMainColorBlack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMainColorMode
		#define GEODE_CONCEPT_CHECK_getMainColorMode
		GEODE_CONCEPT_FUNCTION_CHECK(getMainColorMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMaxAudioScale
		#define GEODE_CONCEPT_CHECK_getMaxAudioScale
		GEODE_CONCEPT_FUNCTION_CHECK(getMaxAudioScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMinAudioScale
		#define GEODE_CONCEPT_CHECK_getMinAudioScale
		GEODE_CONCEPT_FUNCTION_CHECK(getMinAudioScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNeedsReorder
		#define GEODE_CONCEPT_CHECK_getNeedsReorder
		GEODE_CONCEPT_FUNCTION_CHECK(getNeedsReorder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNeedsUpdateColor
		#define GEODE_CONCEPT_CHECK_getNeedsUpdateColor
		GEODE_CONCEPT_FUNCTION_CHECK(getNeedsUpdateColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getObjectClass
		#define GEODE_CONCEPT_CHECK_getObjectClass
		GEODE_CONCEPT_FUNCTION_CHECK(getObjectClass) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getObjectID
		#define GEODE_CONCEPT_CHECK_getObjectID
		GEODE_CONCEPT_FUNCTION_CHECK(getObjectID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getObjectKey
		#define GEODE_CONCEPT_CHECK_getObjectKey
		GEODE_CONCEPT_FUNCTION_CHECK(getObjectKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getObjectRadius
		#define GEODE_CONCEPT_CHECK_getObjectRadius
		GEODE_CONCEPT_FUNCTION_CHECK(getObjectRadius) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getObjectRectDirty
		#define GEODE_CONCEPT_CHECK_getObjectRectDirty
		GEODE_CONCEPT_FUNCTION_CHECK(getObjectRectDirty) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getObjectZ
		#define GEODE_CONCEPT_CHECK_getObjectZ
		GEODE_CONCEPT_FUNCTION_CHECK(getObjectZ) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getObjectZLayer
		#define GEODE_CONCEPT_CHECK_getObjectZLayer
		GEODE_CONCEPT_FUNCTION_CHECK(getObjectZLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getObjectZOrder
		#define GEODE_CONCEPT_CHECK_getObjectZOrder
		GEODE_CONCEPT_FUNCTION_CHECK(getObjectZOrder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOrientedRectDirty
		#define GEODE_CONCEPT_CHECK_getOrientedRectDirty
		GEODE_CONCEPT_FUNCTION_CHECK(getOrientedRectDirty) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOuterObjectRect
		#define GEODE_CONCEPT_CHECK_getOuterObjectRect
		GEODE_CONCEPT_FUNCTION_CHECK(getOuterObjectRect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getParentMode
		#define GEODE_CONCEPT_CHECK_getParentMode
		GEODE_CONCEPT_FUNCTION_CHECK(getParentMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRadius
		#define GEODE_CONCEPT_CHECK_getRadius
		GEODE_CONCEPT_FUNCTION_CHECK(getRadius) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRectOffset
		#define GEODE_CONCEPT_CHECK_getRectOffset
		GEODE_CONCEPT_FUNCTION_CHECK(getRectOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRelativeSpriteColor
		#define GEODE_CONCEPT_CHECK_getRelativeSpriteColor
		GEODE_CONCEPT_FUNCTION_CHECK(getRelativeSpriteColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSavedMainColorMode
		#define GEODE_CONCEPT_CHECK_getSavedMainColorMode
		GEODE_CONCEPT_FUNCTION_CHECK(getSavedMainColorMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSavedSecondaryColorMode
		#define GEODE_CONCEPT_CHECK_getSavedSecondaryColorMode
		GEODE_CONCEPT_FUNCTION_CHECK(getSavedSecondaryColorMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSaveString
		#define GEODE_CONCEPT_CHECK_getSaveString
		GEODE_CONCEPT_FUNCTION_CHECK(getSaveString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getScaleModX
		#define GEODE_CONCEPT_CHECK_getScaleModX
		GEODE_CONCEPT_FUNCTION_CHECK(getScaleModX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getScaleModY
		#define GEODE_CONCEPT_CHECK_getScaleModY
		GEODE_CONCEPT_FUNCTION_CHECK(getScaleModY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSecondaryBlend
		#define GEODE_CONCEPT_CHECK_getSecondaryBlend
		GEODE_CONCEPT_FUNCTION_CHECK(getSecondaryBlend) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSecondaryColor
		#define GEODE_CONCEPT_CHECK_getSecondaryColor
		GEODE_CONCEPT_FUNCTION_CHECK(getSecondaryColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSecondaryColorBlack
		#define GEODE_CONCEPT_CHECK_getSecondaryColorBlack
		GEODE_CONCEPT_FUNCTION_CHECK(getSecondaryColorBlack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSecondaryColorMode
		#define GEODE_CONCEPT_CHECK_getSecondaryColorMode
		GEODE_CONCEPT_FUNCTION_CHECK(getSecondaryColorMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSectionIdx
		#define GEODE_CONCEPT_CHECK_getSectionIdx
		GEODE_CONCEPT_FUNCTION_CHECK(getSectionIdx) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getShouldHide
		#define GEODE_CONCEPT_CHECK_getShouldHide
		GEODE_CONCEPT_FUNCTION_CHECK(getShouldHide) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSlopeAngle
		#define GEODE_CONCEPT_CHECK_getSlopeAngle
		GEODE_CONCEPT_FUNCTION_CHECK(getSlopeAngle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSlopeType
		#define GEODE_CONCEPT_CHECK_getSlopeType
		GEODE_CONCEPT_FUNCTION_CHECK(getSlopeType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSpawnedByTrigger
		#define GEODE_CONCEPT_CHECK_getSpawnedByTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(getSpawnedByTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSpawnXPos
		#define GEODE_CONCEPT_CHECK_getSpawnXPos
		GEODE_CONCEPT_FUNCTION_CHECK(getSpawnXPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSpriteColor01
		#define GEODE_CONCEPT_CHECK_getSpriteColor01
		GEODE_CONCEPT_FUNCTION_CHECK(getSpriteColor01) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSpriteColor02
		#define GEODE_CONCEPT_CHECK_getSpriteColor02
		GEODE_CONCEPT_FUNCTION_CHECK(getSpriteColor02) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStartFlipX
		#define GEODE_CONCEPT_CHECK_getStartFlipX
		GEODE_CONCEPT_FUNCTION_CHECK(getStartFlipX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStartFlipY
		#define GEODE_CONCEPT_CHECK_getStartFlipY
		GEODE_CONCEPT_FUNCTION_CHECK(getStartFlipY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStartPos
		#define GEODE_CONCEPT_CHECK_getStartPos
		GEODE_CONCEPT_FUNCTION_CHECK(getStartPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStartRotation
		#define GEODE_CONCEPT_CHECK_getStartRotation
		GEODE_CONCEPT_FUNCTION_CHECK(getStartRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStartScaleX
		#define GEODE_CONCEPT_CHECK_getStartScaleX
		GEODE_CONCEPT_FUNCTION_CHECK(getStartScaleX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStartScaleY
		#define GEODE_CONCEPT_CHECK_getStartScaleY
		GEODE_CONCEPT_FUNCTION_CHECK(getStartScaleY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStateVar
		#define GEODE_CONCEPT_CHECK_getStateVar
		GEODE_CONCEPT_FUNCTION_CHECK(getStateVar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStoredPosition
		#define GEODE_CONCEPT_CHECK_getStoredPosition
		GEODE_CONCEPT_FUNCTION_CHECK(getStoredPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTextBlockString
		#define GEODE_CONCEPT_CHECK_getTextBlockString
		GEODE_CONCEPT_FUNCTION_CHECK(getTextBlockString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTouchTriggered
		#define GEODE_CONCEPT_CHECK_getTouchTriggered
		GEODE_CONCEPT_FUNCTION_CHECK(getTouchTriggered) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getType
		#define GEODE_CONCEPT_CHECK_getType
		GEODE_CONCEPT_FUNCTION_CHECK(getType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUniqueID
		#define GEODE_CONCEPT_CHECK_getUniqueID
		GEODE_CONCEPT_FUNCTION_CHECK(getUniqueID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUpdateLastPos
		#define GEODE_CONCEPT_CHECK_getUpdateLastPos
		GEODE_CONCEPT_FUNCTION_CHECK(getUpdateLastPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUpSlope
		#define GEODE_CONCEPT_CHECK_getUpSlope
		GEODE_CONCEPT_FUNCTION_CHECK(getUpSlope) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUseAudioScale
		#define GEODE_CONCEPT_CHECK_getUseAudioScale
		GEODE_CONCEPT_FUNCTION_CHECK(getUseAudioScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUseCustomContentSize
		#define GEODE_CONCEPT_CHECK_getUseCustomContentSize
		GEODE_CONCEPT_FUNCTION_CHECK(getUseCustomContentSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUseCustomEditorHitbox
		#define GEODE_CONCEPT_CHECK_getUseCustomEditorHitbox
		GEODE_CONCEPT_FUNCTION_CHECK(getUseCustomEditorHitbox) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUseSpecialLight
		#define GEODE_CONCEPT_CHECK_getUseSpecialLight
		GEODE_CONCEPT_FUNCTION_CHECK(getUseSpecialLight) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getWasSelected
		#define GEODE_CONCEPT_CHECK_getWasSelected
		GEODE_CONCEPT_FUNCTION_CHECK(getWasSelected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getZLayer
		#define GEODE_CONCEPT_CHECK_getZLayer
		GEODE_CONCEPT_FUNCTION_CHECK(getZLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_groupColor
		#define GEODE_CONCEPT_CHECK_groupColor
		GEODE_CONCEPT_FUNCTION_CHECK(groupColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_groupOpacityMod
		#define GEODE_CONCEPT_CHECK_groupOpacityMod
		GEODE_CONCEPT_FUNCTION_CHECK(groupOpacityMod) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_groupWasDisabled
		#define GEODE_CONCEPT_CHECK_groupWasDisabled
		GEODE_CONCEPT_FUNCTION_CHECK(groupWasDisabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_groupWasEnabled
		#define GEODE_CONCEPT_CHECK_groupWasEnabled
		GEODE_CONCEPT_FUNCTION_CHECK(groupWasEnabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasBeenActivatedByPlayer
		#define GEODE_CONCEPT_CHECK_hasBeenActivatedByPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(hasBeenActivatedByPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasSecondaryColor
		#define GEODE_CONCEPT_CHECK_hasSecondaryColor
		GEODE_CONCEPT_FUNCTION_CHECK(hasSecondaryColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ignoreFade
		#define GEODE_CONCEPT_CHECK_ignoreFade
		GEODE_CONCEPT_FUNCTION_CHECK(ignoreFade) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isColorObject
		#define GEODE_CONCEPT_CHECK_isColorObject
		GEODE_CONCEPT_FUNCTION_CHECK(isColorObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isColorTrigger
		#define GEODE_CONCEPT_CHECK_isColorTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(isColorTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isFacingDown
		#define GEODE_CONCEPT_CHECK_isFacingDown
		GEODE_CONCEPT_FUNCTION_CHECK(isFacingDown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isSpawnableTrigger
		#define GEODE_CONCEPT_CHECK_isSpawnableTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(isSpawnableTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isSpecialObject
		#define GEODE_CONCEPT_CHECK_isSpecialObject
		GEODE_CONCEPT_FUNCTION_CHECK(isSpecialObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isTrigger
		#define GEODE_CONCEPT_CHECK_isTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(isTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadGroupsFromString
		#define GEODE_CONCEPT_CHECK_loadGroupsFromString
		GEODE_CONCEPT_FUNCTION_CHECK(loadGroupsFromString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_objectFromString
		#define GEODE_CONCEPT_CHECK_objectFromString
		GEODE_CONCEPT_FUNCTION_CHECK(objectFromString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_opacityModForMode
		#define GEODE_CONCEPT_CHECK_opacityModForMode
		GEODE_CONCEPT_FUNCTION_CHECK(opacityModForMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_parentForZLayer
		#define GEODE_CONCEPT_CHECK_parentForZLayer
		GEODE_CONCEPT_FUNCTION_CHECK(parentForZLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_perspectiveColorFrame
		#define GEODE_CONCEPT_CHECK_perspectiveColorFrame
		GEODE_CONCEPT_FUNCTION_CHECK(perspectiveColorFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_perspectiveFrame
		#define GEODE_CONCEPT_CHECK_perspectiveFrame
		GEODE_CONCEPT_FUNCTION_CHECK(perspectiveFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playShineEffect
		#define GEODE_CONCEPT_CHECK_playShineEffect
		GEODE_CONCEPT_FUNCTION_CHECK(playShineEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_powerOffObject
		#define GEODE_CONCEPT_CHECK_powerOffObject
		GEODE_CONCEPT_FUNCTION_CHECK(powerOffObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_powerOnObject
		#define GEODE_CONCEPT_CHECK_powerOnObject
		GEODE_CONCEPT_FUNCTION_CHECK(powerOnObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_quickUpdatePosition
		#define GEODE_CONCEPT_CHECK_quickUpdatePosition
		GEODE_CONCEPT_FUNCTION_CHECK(quickUpdatePosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeColorSprite
		#define GEODE_CONCEPT_CHECK_removeColorSprite
		GEODE_CONCEPT_FUNCTION_CHECK(removeColorSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeGlow
		#define GEODE_CONCEPT_CHECK_removeGlow
		GEODE_CONCEPT_FUNCTION_CHECK(removeGlow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reorderColorSprite
		#define GEODE_CONCEPT_CHECK_reorderColorSprite
		GEODE_CONCEPT_FUNCTION_CHECK(reorderColorSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetGroupDisabled
		#define GEODE_CONCEPT_CHECK_resetGroupDisabled
		GEODE_CONCEPT_FUNCTION_CHECK(resetGroupDisabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetMainColorMode
		#define GEODE_CONCEPT_CHECK_resetMainColorMode
		GEODE_CONCEPT_FUNCTION_CHECK(resetMainColorMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetSecondaryColorMode
		#define GEODE_CONCEPT_CHECK_resetSecondaryColorMode
		GEODE_CONCEPT_FUNCTION_CHECK(resetSecondaryColorMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setAddToBatch2
		#define GEODE_CONCEPT_CHECK_setAddToBatch2
		GEODE_CONCEPT_FUNCTION_CHECK(setAddToBatch2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setColorManager
		#define GEODE_CONCEPT_CHECK_setColorManager
		GEODE_CONCEPT_FUNCTION_CHECK(setColorManager) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setColorOnTop
		#define GEODE_CONCEPT_CHECK_setColorOnTop
		GEODE_CONCEPT_FUNCTION_CHECK(setColorOnTop) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCustomColorIdx
		#define GEODE_CONCEPT_CHECK_setCustomColorIdx
		GEODE_CONCEPT_FUNCTION_CHECK(setCustomColorIdx) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCustomDontFade
		#define GEODE_CONCEPT_CHECK_setCustomDontFade
		GEODE_CONCEPT_FUNCTION_CHECK(setCustomDontFade) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCustomHitBox
		#define GEODE_CONCEPT_CHECK_setCustomHitBox
		GEODE_CONCEPT_FUNCTION_CHECK(setCustomHitBox) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCustomObjectZ
		#define GEODE_CONCEPT_CHECK_setCustomObjectZ
		GEODE_CONCEPT_FUNCTION_CHECK(setCustomObjectZ) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCustomScale
		#define GEODE_CONCEPT_CHECK_setCustomScale
		GEODE_CONCEPT_FUNCTION_CHECK(setCustomScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCustomZLayer
		#define GEODE_CONCEPT_CHECK_setCustomZLayer
		GEODE_CONCEPT_FUNCTION_CHECK(setCustomZLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDefaultMainColorMode
		#define GEODE_CONCEPT_CHECK_setDefaultMainColorMode
		GEODE_CONCEPT_FUNCTION_CHECK(setDefaultMainColorMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDefaultSecondaryColorMode
		#define GEODE_CONCEPT_CHECK_setDefaultSecondaryColorMode
		GEODE_CONCEPT_FUNCTION_CHECK(setDefaultSecondaryColorMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDidUpdateLastPosition
		#define GEODE_CONCEPT_CHECK_setDidUpdateLastPosition
		GEODE_CONCEPT_FUNCTION_CHECK(setDidUpdateLastPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDontApplyEffect
		#define GEODE_CONCEPT_CHECK_setDontApplyEffect
		GEODE_CONCEPT_FUNCTION_CHECK(setDontApplyEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDontApplyFade
		#define GEODE_CONCEPT_CHECK_setDontApplyFade
		GEODE_CONCEPT_FUNCTION_CHECK(setDontApplyFade) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDontFade
		#define GEODE_CONCEPT_CHECK_setDontFade
		GEODE_CONCEPT_FUNCTION_CHECK(setDontFade) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDontFadeTinted
		#define GEODE_CONCEPT_CHECK_setDontFadeTinted
		GEODE_CONCEPT_FUNCTION_CHECK(setDontFadeTinted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDontTransform
		#define GEODE_CONCEPT_CHECK_setDontTransform
		GEODE_CONCEPT_FUNCTION_CHECK(setDontTransform) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setEditorCustomScale
		#define GEODE_CONCEPT_CHECK_setEditorCustomScale
		GEODE_CONCEPT_FUNCTION_CHECK(setEditorCustomScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setEditorLayerID
		#define GEODE_CONCEPT_CHECK_setEditorLayerID
		GEODE_CONCEPT_FUNCTION_CHECK(setEditorLayerID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setEditorLayerID2
		#define GEODE_CONCEPT_CHECK_setEditorLayerID2
		GEODE_CONCEPT_FUNCTION_CHECK(setEditorLayerID2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setEditorSelected
		#define GEODE_CONCEPT_CHECK_setEditorSelected
		GEODE_CONCEPT_FUNCTION_CHECK(setEditorSelected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setEditorSelectIdx
		#define GEODE_CONCEPT_CHECK_setEditorSelectIdx
		GEODE_CONCEPT_FUNCTION_CHECK(setEditorSelectIdx) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setEnterAngle
		#define GEODE_CONCEPT_CHECK_setEnterAngle
		GEODE_CONCEPT_FUNCTION_CHECK(setEnterAngle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setEnterEffect
		#define GEODE_CONCEPT_CHECK_setEnterEffect
		GEODE_CONCEPT_FUNCTION_CHECK(setEnterEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFadeInPosOffset
		#define GEODE_CONCEPT_CHECK_setFadeInPosOffset
		GEODE_CONCEPT_FUNCTION_CHECK(setFadeInPosOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setGlowOpacity
		#define GEODE_CONCEPT_CHECK_setGlowOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(setGlowOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setGlowOpacityMod
		#define GEODE_CONCEPT_CHECK_setGlowOpacityMod
		GEODE_CONCEPT_FUNCTION_CHECK(setGlowOpacityMod) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setGroupUpdated
		#define GEODE_CONCEPT_CHECK_setGroupUpdated
		GEODE_CONCEPT_FUNCTION_CHECK(setGroupUpdated) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setHasCustomChildren
		#define GEODE_CONCEPT_CHECK_setHasCustomChildren
		GEODE_CONCEPT_FUNCTION_CHECK(setHasCustomChildren) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setHasSyncedAnimation
		#define GEODE_CONCEPT_CHECK_setHasSyncedAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(setHasSyncedAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIgnoreScreenCheck
		#define GEODE_CONCEPT_CHECK_setIgnoreScreenCheck
		GEODE_CONCEPT_FUNCTION_CHECK(setIgnoreScreenCheck) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIsGroupParent
		#define GEODE_CONCEPT_CHECK_setIsGroupParent
		GEODE_CONCEPT_FUNCTION_CHECK(setIsGroupParent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIsSelected
		#define GEODE_CONCEPT_CHECK_setIsSelected
		GEODE_CONCEPT_FUNCTION_CHECK(setIsSelected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIsTintObject
		#define GEODE_CONCEPT_CHECK_setIsTintObject
		GEODE_CONCEPT_FUNCTION_CHECK(setIsTintObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLastPosition
		#define GEODE_CONCEPT_CHECK_setLastPosition
		GEODE_CONCEPT_FUNCTION_CHECK(setLastPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLockColorAsChild
		#define GEODE_CONCEPT_CHECK_setLockColorAsChild
		GEODE_CONCEPT_FUNCTION_CHECK(setLockColorAsChild) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setM_ID
		#define GEODE_CONCEPT_CHECK_setM_ID
		GEODE_CONCEPT_FUNCTION_CHECK(setM_ID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMainColorMode
		#define GEODE_CONCEPT_CHECK_setMainColorMode
		GEODE_CONCEPT_FUNCTION_CHECK(setMainColorMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMyAction
		#define GEODE_CONCEPT_CHECK_setMyAction
		GEODE_CONCEPT_FUNCTION_CHECK(setMyAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setNeedsReorder
		#define GEODE_CONCEPT_CHECK_setNeedsReorder
		GEODE_CONCEPT_FUNCTION_CHECK(setNeedsReorder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setNeedsUpdateColor
		#define GEODE_CONCEPT_CHECK_setNeedsUpdateColor
		GEODE_CONCEPT_FUNCTION_CHECK(setNeedsUpdateColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setObjectClass
		#define GEODE_CONCEPT_CHECK_setObjectClass
		GEODE_CONCEPT_FUNCTION_CHECK(setObjectClass) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setObjectID
		#define GEODE_CONCEPT_CHECK_setObjectID
		GEODE_CONCEPT_FUNCTION_CHECK(setObjectID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setObjectKey
		#define GEODE_CONCEPT_CHECK_setObjectKey
		GEODE_CONCEPT_FUNCTION_CHECK(setObjectKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setObjectZ
		#define GEODE_CONCEPT_CHECK_setObjectZ
		GEODE_CONCEPT_FUNCTION_CHECK(setObjectZ) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setScaleModX
		#define GEODE_CONCEPT_CHECK_setScaleModX
		GEODE_CONCEPT_FUNCTION_CHECK(setScaleModX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setScaleModY
		#define GEODE_CONCEPT_CHECK_setScaleModY
		GEODE_CONCEPT_FUNCTION_CHECK(setScaleModY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSecondaryColorMode
		#define GEODE_CONCEPT_CHECK_setSecondaryColorMode
		GEODE_CONCEPT_FUNCTION_CHECK(setSecondaryColorMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSectionIdx
		#define GEODE_CONCEPT_CHECK_setSectionIdx
		GEODE_CONCEPT_FUNCTION_CHECK(setSectionIdx) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setShouldHide
		#define GEODE_CONCEPT_CHECK_setShouldHide
		GEODE_CONCEPT_FUNCTION_CHECK(setShouldHide) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSpawnedByTrigger
		#define GEODE_CONCEPT_CHECK_setSpawnedByTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(setSpawnedByTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStartFlipX
		#define GEODE_CONCEPT_CHECK_setStartFlipX
		GEODE_CONCEPT_FUNCTION_CHECK(setStartFlipX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStartFlipY
		#define GEODE_CONCEPT_CHECK_setStartFlipY
		GEODE_CONCEPT_FUNCTION_CHECK(setStartFlipY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStartRotation
		#define GEODE_CONCEPT_CHECK_setStartRotation
		GEODE_CONCEPT_FUNCTION_CHECK(setStartRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStartScaleX
		#define GEODE_CONCEPT_CHECK_setStartScaleX
		GEODE_CONCEPT_FUNCTION_CHECK(setStartScaleX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStartScaleY
		#define GEODE_CONCEPT_CHECK_setStartScaleY
		GEODE_CONCEPT_FUNCTION_CHECK(setStartScaleY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStateVar
		#define GEODE_CONCEPT_CHECK_setStateVar
		GEODE_CONCEPT_FUNCTION_CHECK(setStateVar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStoredPosition
		#define GEODE_CONCEPT_CHECK_setStoredPosition
		GEODE_CONCEPT_FUNCTION_CHECK(setStoredPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTempOffset
		#define GEODE_CONCEPT_CHECK_setTempOffset
		GEODE_CONCEPT_FUNCTION_CHECK(setTempOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTextBlockString
		#define GEODE_CONCEPT_CHECK_setTextBlockString
		GEODE_CONCEPT_FUNCTION_CHECK(setTextBlockString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTouchTriggered
		#define GEODE_CONCEPT_CHECK_setTouchTriggered
		GEODE_CONCEPT_FUNCTION_CHECK(setTouchTriggered) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUniqueID
		#define GEODE_CONCEPT_CHECK_setUniqueID
		GEODE_CONCEPT_FUNCTION_CHECK(setUniqueID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupCoinAnimation
		#define GEODE_CONCEPT_CHECK_setupCoinAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(setupCoinAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupCoinArt
		#define GEODE_CONCEPT_CHECK_setupCoinArt
		GEODE_CONCEPT_FUNCTION_CHECK(setupCoinArt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupColorSprite
		#define GEODE_CONCEPT_CHECK_setupColorSprite
		GEODE_CONCEPT_FUNCTION_CHECK(setupColorSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupCustomSprites
		#define GEODE_CONCEPT_CHECK_setupCustomSprites
		GEODE_CONCEPT_FUNCTION_CHECK(setupCustomSprites) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUpdateLastPos
		#define GEODE_CONCEPT_CHECK_setUpdateLastPos
		GEODE_CONCEPT_FUNCTION_CHECK(setUpdateLastPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUseAudioScale
		#define GEODE_CONCEPT_CHECK_setUseAudioScale
		GEODE_CONCEPT_FUNCTION_CHECK(setUseAudioScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUseCustomContentSize
		#define GEODE_CONCEPT_CHECK_setUseCustomContentSize
		GEODE_CONCEPT_FUNCTION_CHECK(setUseCustomContentSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUseCustomEditorHitbox
		#define GEODE_CONCEPT_CHECK_setUseCustomEditorHitbox
		GEODE_CONCEPT_FUNCTION_CHECK(setUseCustomEditorHitbox) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setWasSelected
		#define GEODE_CONCEPT_CHECK_setWasSelected
		GEODE_CONCEPT_FUNCTION_CHECK(setWasSelected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setZLayer
		#define GEODE_CONCEPT_CHECK_setZLayer
		GEODE_CONCEPT_FUNCTION_CHECK(setZLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldBlendColor
		#define GEODE_CONCEPT_CHECK_shouldBlendColor
		GEODE_CONCEPT_FUNCTION_CHECK(shouldBlendColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldNotSave
		#define GEODE_CONCEPT_CHECK_shouldNotSave
		GEODE_CONCEPT_FUNCTION_CHECK(shouldNotSave) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_slopeFloorTop
		#define GEODE_CONCEPT_CHECK_slopeFloorTop
		GEODE_CONCEPT_FUNCTION_CHECK(slopeFloorTop) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_slopeWallLeft
		#define GEODE_CONCEPT_CHECK_slopeWallLeft
		GEODE_CONCEPT_FUNCTION_CHECK(slopeWallLeft) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_slopeYPos
		#define GEODE_CONCEPT_CHECK_slopeYPos
		GEODE_CONCEPT_FUNCTION_CHECK(slopeYPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerActivated
		#define GEODE_CONCEPT_CHECK_triggerActivated
		GEODE_CONCEPT_FUNCTION_CHECK(triggerActivated) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerObject
		#define GEODE_CONCEPT_CHECK_triggerObject
		GEODE_CONCEPT_FUNCTION_CHECK(triggerObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCustomScale
		#define GEODE_CONCEPT_CHECK_updateCustomScale
		GEODE_CONCEPT_FUNCTION_CHECK(updateCustomScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateMainColor
		#define GEODE_CONCEPT_CHECK_updateMainColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateMainColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateObjectEditorColor
		#define GEODE_CONCEPT_CHECK_updateObjectEditorColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateObjectEditorColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSecondaryColor
		#define GEODE_CONCEPT_CHECK_updateSecondaryColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateSecondaryColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateStartPos
		#define GEODE_CONCEPT_CHECK_updateStartPos
		GEODE_CONCEPT_FUNCTION_CHECK(updateStartPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateState
		#define GEODE_CONCEPT_CHECK_updateState
		GEODE_CONCEPT_FUNCTION_CHECK(updateState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSyncedAnimation
		#define GEODE_CONCEPT_CHECK_updateSyncedAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(updateSyncedAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTextObject
		#define GEODE_CONCEPT_CHECK_updateTextObject
		GEODE_CONCEPT_FUNCTION_CHECK(updateTextObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_waitingForActivation
		#define GEODE_CONCEPT_CHECK_waitingForActivation
		GEODE_CONCEPT_FUNCTION_CHECK(waitingForActivation) 
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

	#ifndef GEODE_CONCEPT_CHECK_initWithTexture
		#define GEODE_CONCEPT_CHECK_initWithTexture
		GEODE_CONCEPT_FUNCTION_CHECK(initWithTexture) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setChildColor
		#define GEODE_CONCEPT_CHECK_setChildColor
		GEODE_CONCEPT_FUNCTION_CHECK(setChildColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFlipX
		#define GEODE_CONCEPT_CHECK_setFlipX
		GEODE_CONCEPT_FUNCTION_CHECK(setFlipX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFlipY
		#define GEODE_CONCEPT_CHECK_setFlipY
		GEODE_CONCEPT_FUNCTION_CHECK(setFlipY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_customSetup
		#define GEODE_CONCEPT_CHECK_customSetup
		GEODE_CONCEPT_FUNCTION_CHECK(customSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addMainSpriteToParent
		#define GEODE_CONCEPT_CHECK_addMainSpriteToParent
		GEODE_CONCEPT_FUNCTION_CHECK(addMainSpriteToParent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetObject
		#define GEODE_CONCEPT_CHECK_resetObject
		GEODE_CONCEPT_FUNCTION_CHECK(resetObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activateObject
		#define GEODE_CONCEPT_CHECK_activateObject
		GEODE_CONCEPT_FUNCTION_CHECK(activateObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deactivateObject
		#define GEODE_CONCEPT_CHECK_deactivateObject
		GEODE_CONCEPT_FUNCTION_CHECK(deactivateObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getObjectRect
		#define GEODE_CONCEPT_CHECK_getObjectRect
		GEODE_CONCEPT_FUNCTION_CHECK(getObjectRect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getObjectRect2
		#define GEODE_CONCEPT_CHECK_getObjectRect2
		GEODE_CONCEPT_FUNCTION_CHECK(getObjectRect2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getObjectTextureRect
		#define GEODE_CONCEPT_CHECK_getObjectTextureRect
		GEODE_CONCEPT_FUNCTION_CHECK(getObjectTextureRect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRealPosition
		#define GEODE_CONCEPT_CHECK_getRealPosition
		GEODE_CONCEPT_FUNCTION_CHECK(getRealPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStartPos
		#define GEODE_CONCEPT_CHECK_setStartPos
		GEODE_CONCEPT_FUNCTION_CHECK(setStartPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateStartValues
		#define GEODE_CONCEPT_CHECK_updateStartValues
		GEODE_CONCEPT_FUNCTION_CHECK(updateStartValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isFlipX
		#define GEODE_CONCEPT_CHECK_isFlipX
		GEODE_CONCEPT_FUNCTION_CHECK(isFlipX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isFlipY
		#define GEODE_CONCEPT_CHECK_isFlipY
		GEODE_CONCEPT_FUNCTION_CHECK(isFlipY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRScaleX
		#define GEODE_CONCEPT_CHECK_setRScaleX
		GEODE_CONCEPT_FUNCTION_CHECK(setRScaleX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRScaleY
		#define GEODE_CONCEPT_CHECK_setRScaleY
		GEODE_CONCEPT_FUNCTION_CHECK(setRScaleY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRScale
		#define GEODE_CONCEPT_CHECK_setRScale
		GEODE_CONCEPT_FUNCTION_CHECK(setRScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRScaleX
		#define GEODE_CONCEPT_CHECK_getRScaleX
		GEODE_CONCEPT_FUNCTION_CHECK(getRScaleX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRScaleY
		#define GEODE_CONCEPT_CHECK_getRScaleY
		GEODE_CONCEPT_FUNCTION_CHECK(getRScaleY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setObjectColor
		#define GEODE_CONCEPT_CHECK_setObjectColor
		GEODE_CONCEPT_FUNCTION_CHECK(setObjectColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setGlowColor
		#define GEODE_CONCEPT_CHECK_setGlowColor
		GEODE_CONCEPT_FUNCTION_CHECK(setGlowColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectObject
		#define GEODE_CONCEPT_CHECK_selectObject
		GEODE_CONCEPT_FUNCTION_CHECK(selectObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasBeenActivated
		#define GEODE_CONCEPT_CHECK_hasBeenActivated
		GEODE_CONCEPT_FUNCTION_CHECK(hasBeenActivated) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOrientedBox
		#define GEODE_CONCEPT_CHECK_getOrientedBox
		GEODE_CONCEPT_FUNCTION_CHECK(getOrientedBox) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateOrientedBox
		#define GEODE_CONCEPT_CHECK_updateOrientedBox
		GEODE_CONCEPT_FUNCTION_CHECK(updateOrientedBox) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToGroup
		#define GEODE_CONCEPT_CHECK_addToGroup
		GEODE_CONCEPT_FUNCTION_CHECK(addToGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeFromGroup
		#define GEODE_CONCEPT_CHECK_removeFromGroup
		GEODE_CONCEPT_FUNCTION_CHECK(removeFromGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveActiveColors
		#define GEODE_CONCEPT_CHECK_saveActiveColors
		GEODE_CONCEPT_FUNCTION_CHECK(saveActiveColors) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spawnXPosition
		#define GEODE_CONCEPT_CHECK_spawnXPosition
		GEODE_CONCEPT_FUNCTION_CHECK(spawnXPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateParticleColor
		#define GEODE_CONCEPT_CHECK_updateParticleColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateParticleColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getHasSyncedAnimation
		#define GEODE_CONCEPT_CHECK_getHasSyncedAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(getHasSyncedAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setObjectRectDirty
		#define GEODE_CONCEPT_CHECK_setObjectRectDirty
		GEODE_CONCEPT_FUNCTION_CHECK(setObjectRectDirty) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOrientedRectDirty
		#define GEODE_CONCEPT_CHECK_setOrientedRectDirty
		GEODE_CONCEPT_FUNCTION_CHECK(setOrientedRectDirty) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setType
		#define GEODE_CONCEPT_CHECK_setType
		GEODE_CONCEPT_FUNCTION_CHECK(setType) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GameObject> : ModifyBase<ModifyDerive<Der, GameObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GameObject>>;
		using ModifyBase<ModifyDerive<Der, GameObject>>::ModifyBase;
		using Base = GameObject;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, activatedByPlayer, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, addColorSprite, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, addColorSpriteToParent, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, addCustomBlackChild, gd::string, float, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, addCustomChild, gd::string, cocos2d::CCPoint, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, addCustomColorChild, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, addGlow, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, addInternalChild, cocos2d::CCSprite*, gd::string, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, addInternalCustomColorChild, gd::string, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, addInternalGlowChild, gd::string, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, addToTempOffset, float, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, calculateOrientedBox, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, calculateSpawnXPos, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, canChangeCustomColor, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, canChangeMainColor, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, canChangeSecondaryColor, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, canRotateFree, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, colorForMode, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, commonSetup, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, copyGroups, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, createAndAddParticle, int, char const*, int, cocos2d::tCCPositionType)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, createGlow, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, createGroupContainer, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, createRotateAction, float, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, createSpriteColor, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, createWithFrame, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, createWithKey, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, createWithTexture, cocos2d::CCTexture2D*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, customObjectSetup, gd::map<gd::string, gd::string>*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, customScaleMod, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, deselectObject, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, destroyObject, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, determineSlopeDirection, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, dontCountTowardsLimit, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, duplicateAttributes, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, duplicateColorMode, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, duplicateValues, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, editorColorForCustomMode, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, editorColorForMode, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getActiveColorForMode, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getAddedToBlend, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getAddToBatch2, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getBallFrame, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getBoxOffset, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getColorFrame, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getColorIndex, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getColorManager, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getColorOnTop, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getColorSprite, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getCustomAudioScale, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getCustomColorIdx, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getCustomDontFade, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getCustomHitBox, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getCustomObjectZ, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getCustomScale, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getCustomZLayer, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getDamaging, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getDidUpdateLastPosition, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getDontApplyEffect, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getDontApplyFade, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getDontFade, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getDontFadeTinted, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getDontTransform, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getEditorCustomScale, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getEditorLayerID, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getEditorLayerID2, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getEditorSelected, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getEditorSelectIdx, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getEnterAngle, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getEnterEffect, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getFadeInPosOffset, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getFrame, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getGlowFrame, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getGlowOpacityMod, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getGlowUseBGColor, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getGroupCount, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getGroupDisabled, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getGroupDisabledCount, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getGroupID, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getGroupString, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getGroupUpdated, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getHasCustomChildren, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getIgnoreScreenCheck, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getInvisibleMode, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getIsAnimated, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getIsDetailColorObject, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getIsGroupParent, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getIsInvisible, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getIsOriented, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getIsRotated, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getIsSelected, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getIsTintObject, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getIsTriggerSaved, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getLastPosition, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getLockColorAsChild, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getM_ID, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getMainBlend, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getMainColor, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getMainColorBlack, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getMainColorMode, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getMaxAudioScale, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getMinAudioScale, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getNeedsReorder, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getNeedsUpdateColor, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getObjectClass, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getObjectID, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getObjectKey, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getObjectRadius, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getObjectRectDirty, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getObjectZ, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getObjectZLayer, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getObjectZOrder, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getOrientedRectDirty, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getOuterObjectRect, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getParentMode, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getRadius, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getRectOffset, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getRelativeSpriteColor, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getSavedMainColorMode, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getSavedSecondaryColorMode, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getSaveString, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getScaleModX, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getScaleModY, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getSecondaryBlend, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getSecondaryColor, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getSecondaryColorBlack, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getSecondaryColorMode, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getSectionIdx, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getShouldHide, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getSlopeAngle, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getSlopeType, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getSpawnedByTrigger, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getSpawnXPos, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getSpriteColor01, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getSpriteColor02, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getStartFlipX, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getStartFlipY, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getStartPos, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getStartRotation, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getStartScaleX, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getStartScaleY, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getStateVar, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getStoredPosition, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getTextBlockString, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getTouchTriggered, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getType, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getUniqueID, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getUpdateLastPos, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getUpSlope, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getUseAudioScale, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getUseCustomContentSize, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getUseCustomEditorHitbox, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getUseSpecialLight, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getWasSelected, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getZLayer, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, groupColor, cocos2d::ccColor3B const&, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, groupOpacityMod, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, groupWasDisabled, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, groupWasEnabled, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, hasBeenActivatedByPlayer, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, hasSecondaryColor, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, ignoreFade, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, init, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, isColorObject, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, isColorTrigger, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, isFacingDown, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, isSpawnableTrigger, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, isSpecialObject, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, isTrigger, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, loadGroupsFromString, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, objectFromString, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, opacityModForMode, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, parentForZLayer, int, bool, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, perspectiveColorFrame, char const*, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, perspectiveFrame, char const*, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, playShineEffect, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, powerOffObject, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, powerOnObject, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, quickUpdatePosition, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, removeColorSprite, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, removeGlow, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, reorderColorSprite, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, resetGroupDisabled, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, resetMainColorMode, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, resetSecondaryColorMode, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setAddToBatch2, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setColorManager, GJEffectManager*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setColorOnTop, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setCustomColorIdx, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setCustomDontFade, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setCustomHitBox, cocos2d::CCSize)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setCustomObjectZ, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setCustomScale, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setCustomZLayer, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setDefaultMainColorMode, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setDefaultSecondaryColorMode, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setDidUpdateLastPosition, bool const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setDontApplyEffect, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setDontApplyFade, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setDontFade, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setDontFadeTinted, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setDontTransform, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setEditorCustomScale, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setEditorLayerID, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setEditorLayerID2, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setEditorSelected, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setEditorSelectIdx, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setEnterAngle, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setEnterEffect, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setFadeInPosOffset, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setGlowOpacity, unsigned char)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setGlowOpacityMod, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setGroupUpdated, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setHasCustomChildren, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setHasSyncedAnimation, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setIgnoreScreenCheck, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setIsGroupParent, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setIsSelected, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setIsTintObject, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setLastPosition, cocos2d::CCPoint const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setLockColorAsChild, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setM_ID, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setMainColorMode, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setMyAction, cocos2d::CCAction*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setNeedsReorder, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setNeedsUpdateColor, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setObjectClass, GameObjectClass)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setObjectID, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setObjectKey, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setObjectZ, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setScaleModX, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setScaleModY, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setSecondaryColorMode, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setSectionIdx, int const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setShouldHide, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setSpawnedByTrigger, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setStartFlipX, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setStartFlipY, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setStartRotation, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setStartScaleX, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setStartScaleY, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setStateVar, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setStoredPosition, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setTempOffset, float, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setTextBlockString, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setTouchTriggered, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setUniqueID, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setupCoinAnimation, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setupCoinArt, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setupColorSprite, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setupCustomSprites, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setUpdateLastPos, bool const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setUseAudioScale, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setUseCustomContentSize, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setUseCustomEditorHitbox, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setWasSelected, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setZLayer, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, shouldBlendColor, GJSpriteColor*, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, shouldNotSave, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, slopeFloorTop, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, slopeWallLeft, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, slopeYPos, cocos2d::CCRect)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, slopeYPos, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, slopeYPos, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, triggerActivated, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, triggerObject, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, updateCustomScale, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, updateMainColor, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, updateObjectEditorColor, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, updateSecondaryColor, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, updateStartPos, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, updateState, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, updateSyncedAnimation, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, updateTextObject, gd::string, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, waitingForActivation, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, update, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setScaleX, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setScaleY, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setScale, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setPosition, cocos2d::CCPoint const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setVisible, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setRotation, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setOpacity, unsigned char)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, initWithTexture, cocos2d::CCTexture2D*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setChildColor, cocos2d::ccColor3B const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setFlipX, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setFlipY, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, customSetup, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, addMainSpriteToParent, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, resetObject, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, activateObject, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, deactivateObject, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getObjectRect, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getObjectRect, float, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getObjectRect2, float, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getObjectTextureRect, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getRealPosition, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setStartPos, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, updateStartValues, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, isFlipX, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, isFlipY, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setRScaleX, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setRScaleY, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setRScale, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getRScaleX, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getRScaleY, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setObjectColor, cocos2d::ccColor3B const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setGlowColor, cocos2d::ccColor3B const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, selectObject, cocos2d::ccColor3B)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, hasBeenActivated, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getOrientedBox, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, updateOrientedBox, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, updateMainColor, cocos2d::ccColor3B const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, updateSecondaryColor, cocos2d::ccColor3B const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, addToGroup, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, removeFromGroup, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, saveActiveColors, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, spawnXPosition, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, updateParticleColor, cocos2d::ccColor3B const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getHasSyncedAnimation, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setObjectRectDirty, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setOrientedRectDirty, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, setType, GameObjectType)
		}
	};
}
