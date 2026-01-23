#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJBaseGameLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_calculateColorValues
		#define GEODE_STATICS_calculateColorValues
		GEODE_AS_STATIC_FUNCTION(calculateColorValues) 
	#endif

	#ifndef GEODE_STATICS_calculateOpacityValues
		#define GEODE_STATICS_calculateOpacityValues
		GEODE_AS_STATIC_FUNCTION(calculateOpacityValues) 
	#endif

	#ifndef GEODE_STATICS_createTextLayers
		#define GEODE_STATICS_createTextLayers
		GEODE_AS_STATIC_FUNCTION(createTextLayers) 
	#endif

	#ifndef GEODE_STATICS_flipGravity
		#define GEODE_STATICS_flipGravity
		GEODE_AS_STATIC_FUNCTION(flipGravity) 
	#endif

	#ifndef GEODE_STATICS_generateToggleData
		#define GEODE_STATICS_generateToggleData
		GEODE_AS_STATIC_FUNCTION(generateToggleData) 
	#endif

	#ifndef GEODE_STATICS_getBatchNode
		#define GEODE_STATICS_getBatchNode
		GEODE_AS_STATIC_FUNCTION(getBatchNode) 
	#endif

	#ifndef GEODE_STATICS_getBatchNodeAdd
		#define GEODE_STATICS_getBatchNodeAdd
		GEODE_AS_STATIC_FUNCTION(getBatchNodeAdd) 
	#endif

	#ifndef GEODE_STATICS_getBatchNodeAddBottom
		#define GEODE_STATICS_getBatchNodeAddBottom
		GEODE_AS_STATIC_FUNCTION(getBatchNodeAddBottom) 
	#endif

	#ifndef GEODE_STATICS_getBatchNodeAddBottom2
		#define GEODE_STATICS_getBatchNodeAddBottom2
		GEODE_AS_STATIC_FUNCTION(getBatchNodeAddBottom2) 
	#endif

	#ifndef GEODE_STATICS_getBatchNodeAddBottom2Glow
		#define GEODE_STATICS_getBatchNodeAddBottom2Glow
		GEODE_AS_STATIC_FUNCTION(getBatchNodeAddBottom2Glow) 
	#endif

	#ifndef GEODE_STATICS_getBatchNodeAddBottomGlow
		#define GEODE_STATICS_getBatchNodeAddBottomGlow
		GEODE_AS_STATIC_FUNCTION(getBatchNodeAddBottomGlow) 
	#endif

	#ifndef GEODE_STATICS_getBatchNodeAddGlow
		#define GEODE_STATICS_getBatchNodeAddGlow
		GEODE_AS_STATIC_FUNCTION(getBatchNodeAddGlow) 
	#endif

	#ifndef GEODE_STATICS_getBatchNodeAddMid
		#define GEODE_STATICS_getBatchNodeAddMid
		GEODE_AS_STATIC_FUNCTION(getBatchNodeAddMid) 
	#endif

	#ifndef GEODE_STATICS_getBatchNodeAddMidGlow
		#define GEODE_STATICS_getBatchNodeAddMidGlow
		GEODE_AS_STATIC_FUNCTION(getBatchNodeAddMidGlow) 
	#endif

	#ifndef GEODE_STATICS_getBatchNodeAddPlayer
		#define GEODE_STATICS_getBatchNodeAddPlayer
		GEODE_AS_STATIC_FUNCTION(getBatchNodeAddPlayer) 
	#endif

	#ifndef GEODE_STATICS_getBatchNodeAddText
		#define GEODE_STATICS_getBatchNodeAddText
		GEODE_AS_STATIC_FUNCTION(getBatchNodeAddText) 
	#endif

	#ifndef GEODE_STATICS_getBatchNodeAddTop
		#define GEODE_STATICS_getBatchNodeAddTop
		GEODE_AS_STATIC_FUNCTION(getBatchNodeAddTop) 
	#endif

	#ifndef GEODE_STATICS_getBatchNodeBottom
		#define GEODE_STATICS_getBatchNodeBottom
		GEODE_AS_STATIC_FUNCTION(getBatchNodeBottom) 
	#endif

	#ifndef GEODE_STATICS_getBatchNodeBottom2
		#define GEODE_STATICS_getBatchNodeBottom2
		GEODE_AS_STATIC_FUNCTION(getBatchNodeBottom2) 
	#endif

	#ifndef GEODE_STATICS_getBatchNodePlayer
		#define GEODE_STATICS_getBatchNodePlayer
		GEODE_AS_STATIC_FUNCTION(getBatchNodePlayer) 
	#endif

	#ifndef GEODE_STATICS_getBatchNodeText
		#define GEODE_STATICS_getBatchNodeText
		GEODE_AS_STATIC_FUNCTION(getBatchNodeText) 
	#endif

	#ifndef GEODE_STATICS_getCapacityString
		#define GEODE_STATICS_getCapacityString
		GEODE_AS_STATIC_FUNCTION(getCapacityString) 
	#endif

	#ifndef GEODE_STATICS_getEffectBatchNode
		#define GEODE_STATICS_getEffectBatchNode
		GEODE_AS_STATIC_FUNCTION(getEffectBatchNode) 
	#endif

	#ifndef GEODE_STATICS_getEffectBatchNodeAdd
		#define GEODE_STATICS_getEffectBatchNodeAdd
		GEODE_AS_STATIC_FUNCTION(getEffectBatchNodeAdd) 
	#endif

	#ifndef GEODE_STATICS_getGameLayer
		#define GEODE_STATICS_getGameLayer
		GEODE_AS_STATIC_FUNCTION(getGameLayer) 
	#endif

	#ifndef GEODE_STATICS_getLevelSettings
		#define GEODE_STATICS_getLevelSettings
		GEODE_AS_STATIC_FUNCTION(getLevelSettings) 
	#endif

	#ifndef GEODE_STATICS_getPlayer
		#define GEODE_STATICS_getPlayer
		GEODE_AS_STATIC_FUNCTION(getPlayer) 
	#endif

	#ifndef GEODE_STATICS_getPlayer2
		#define GEODE_STATICS_getPlayer2
		GEODE_AS_STATIC_FUNCTION(getPlayer2) 
	#endif

	#ifndef GEODE_STATICS_getToggleDataDirty
		#define GEODE_STATICS_getToggleDataDirty
		GEODE_AS_STATIC_FUNCTION(getToggleDataDirty) 
	#endif

	#ifndef GEODE_STATICS_isGroupDisabledForObject
		#define GEODE_STATICS_isGroupDisabledForObject
		GEODE_AS_STATIC_FUNCTION(isGroupDisabledForObject) 
	#endif

	#ifndef GEODE_STATICS_isGroupDisabledForObjectFull
		#define GEODE_STATICS_isGroupDisabledForObjectFull
		GEODE_AS_STATIC_FUNCTION(isGroupDisabledForObjectFull) 
	#endif

	#ifndef GEODE_STATICS_parentForZLayer
		#define GEODE_STATICS_parentForZLayer
		GEODE_AS_STATIC_FUNCTION(parentForZLayer) 
	#endif

	#ifndef GEODE_STATICS_processColorObject
		#define GEODE_STATICS_processColorObject
		GEODE_AS_STATIC_FUNCTION(processColorObject) 
	#endif

	#ifndef GEODE_STATICS_processOpacityObject
		#define GEODE_STATICS_processOpacityObject
		GEODE_AS_STATIC_FUNCTION(processOpacityObject) 
	#endif

	#ifndef GEODE_STATICS_setToggleDataDirty
		#define GEODE_STATICS_setToggleDataDirty
		GEODE_AS_STATIC_FUNCTION(setToggleDataDirty) 
	#endif

	#ifndef GEODE_STATICS_setupLayers
		#define GEODE_STATICS_setupLayers
		GEODE_AS_STATIC_FUNCTION(setupLayers) 
	#endif

	#ifndef GEODE_STATICS_timeForXPos
		#define GEODE_STATICS_timeForXPos
		GEODE_AS_STATIC_FUNCTION(timeForXPos) 
	#endif

	#ifndef GEODE_STATICS_updateLayerCapacity
		#define GEODE_STATICS_updateLayerCapacity
		GEODE_AS_STATIC_FUNCTION(updateLayerCapacity) 
	#endif

	#ifndef GEODE_STATICS_updateLegacyLayerCapacity
		#define GEODE_STATICS_updateLegacyLayerCapacity
		GEODE_AS_STATIC_FUNCTION(updateLegacyLayerCapacity) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_calculateColorValues
		#define GEODE_CONCEPT_CHECK_calculateColorValues
		GEODE_CONCEPT_FUNCTION_CHECK(calculateColorValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_calculateOpacityValues
		#define GEODE_CONCEPT_CHECK_calculateOpacityValues
		GEODE_CONCEPT_FUNCTION_CHECK(calculateOpacityValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createTextLayers
		#define GEODE_CONCEPT_CHECK_createTextLayers
		GEODE_CONCEPT_FUNCTION_CHECK(createTextLayers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_flipGravity
		#define GEODE_CONCEPT_CHECK_flipGravity
		GEODE_CONCEPT_FUNCTION_CHECK(flipGravity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_generateToggleData
		#define GEODE_CONCEPT_CHECK_generateToggleData
		GEODE_CONCEPT_FUNCTION_CHECK(generateToggleData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBatchNode
		#define GEODE_CONCEPT_CHECK_getBatchNode
		GEODE_CONCEPT_FUNCTION_CHECK(getBatchNode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBatchNodeAdd
		#define GEODE_CONCEPT_CHECK_getBatchNodeAdd
		GEODE_CONCEPT_FUNCTION_CHECK(getBatchNodeAdd) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBatchNodeAddBottom
		#define GEODE_CONCEPT_CHECK_getBatchNodeAddBottom
		GEODE_CONCEPT_FUNCTION_CHECK(getBatchNodeAddBottom) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBatchNodeAddBottom2
		#define GEODE_CONCEPT_CHECK_getBatchNodeAddBottom2
		GEODE_CONCEPT_FUNCTION_CHECK(getBatchNodeAddBottom2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBatchNodeAddBottom2Glow
		#define GEODE_CONCEPT_CHECK_getBatchNodeAddBottom2Glow
		GEODE_CONCEPT_FUNCTION_CHECK(getBatchNodeAddBottom2Glow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBatchNodeAddBottomGlow
		#define GEODE_CONCEPT_CHECK_getBatchNodeAddBottomGlow
		GEODE_CONCEPT_FUNCTION_CHECK(getBatchNodeAddBottomGlow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBatchNodeAddGlow
		#define GEODE_CONCEPT_CHECK_getBatchNodeAddGlow
		GEODE_CONCEPT_FUNCTION_CHECK(getBatchNodeAddGlow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBatchNodeAddMid
		#define GEODE_CONCEPT_CHECK_getBatchNodeAddMid
		GEODE_CONCEPT_FUNCTION_CHECK(getBatchNodeAddMid) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBatchNodeAddMidGlow
		#define GEODE_CONCEPT_CHECK_getBatchNodeAddMidGlow
		GEODE_CONCEPT_FUNCTION_CHECK(getBatchNodeAddMidGlow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBatchNodeAddPlayer
		#define GEODE_CONCEPT_CHECK_getBatchNodeAddPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(getBatchNodeAddPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBatchNodeAddText
		#define GEODE_CONCEPT_CHECK_getBatchNodeAddText
		GEODE_CONCEPT_FUNCTION_CHECK(getBatchNodeAddText) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBatchNodeAddTop
		#define GEODE_CONCEPT_CHECK_getBatchNodeAddTop
		GEODE_CONCEPT_FUNCTION_CHECK(getBatchNodeAddTop) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBatchNodeBottom
		#define GEODE_CONCEPT_CHECK_getBatchNodeBottom
		GEODE_CONCEPT_FUNCTION_CHECK(getBatchNodeBottom) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBatchNodeBottom2
		#define GEODE_CONCEPT_CHECK_getBatchNodeBottom2
		GEODE_CONCEPT_FUNCTION_CHECK(getBatchNodeBottom2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBatchNodePlayer
		#define GEODE_CONCEPT_CHECK_getBatchNodePlayer
		GEODE_CONCEPT_FUNCTION_CHECK(getBatchNodePlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBatchNodeText
		#define GEODE_CONCEPT_CHECK_getBatchNodeText
		GEODE_CONCEPT_FUNCTION_CHECK(getBatchNodeText) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCapacityString
		#define GEODE_CONCEPT_CHECK_getCapacityString
		GEODE_CONCEPT_FUNCTION_CHECK(getCapacityString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEffectBatchNode
		#define GEODE_CONCEPT_CHECK_getEffectBatchNode
		GEODE_CONCEPT_FUNCTION_CHECK(getEffectBatchNode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEffectBatchNodeAdd
		#define GEODE_CONCEPT_CHECK_getEffectBatchNodeAdd
		GEODE_CONCEPT_FUNCTION_CHECK(getEffectBatchNodeAdd) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGameLayer
		#define GEODE_CONCEPT_CHECK_getGameLayer
		GEODE_CONCEPT_FUNCTION_CHECK(getGameLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLevelSettings
		#define GEODE_CONCEPT_CHECK_getLevelSettings
		GEODE_CONCEPT_FUNCTION_CHECK(getLevelSettings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPlayer
		#define GEODE_CONCEPT_CHECK_getPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(getPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPlayer2
		#define GEODE_CONCEPT_CHECK_getPlayer2
		GEODE_CONCEPT_FUNCTION_CHECK(getPlayer2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getToggleDataDirty
		#define GEODE_CONCEPT_CHECK_getToggleDataDirty
		GEODE_CONCEPT_FUNCTION_CHECK(getToggleDataDirty) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isGroupDisabledForObject
		#define GEODE_CONCEPT_CHECK_isGroupDisabledForObject
		GEODE_CONCEPT_FUNCTION_CHECK(isGroupDisabledForObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isGroupDisabledForObjectFull
		#define GEODE_CONCEPT_CHECK_isGroupDisabledForObjectFull
		GEODE_CONCEPT_FUNCTION_CHECK(isGroupDisabledForObjectFull) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_parentForZLayer
		#define GEODE_CONCEPT_CHECK_parentForZLayer
		GEODE_CONCEPT_FUNCTION_CHECK(parentForZLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processColorObject
		#define GEODE_CONCEPT_CHECK_processColorObject
		GEODE_CONCEPT_FUNCTION_CHECK(processColorObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processOpacityObject
		#define GEODE_CONCEPT_CHECK_processOpacityObject
		GEODE_CONCEPT_FUNCTION_CHECK(processOpacityObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setToggleDataDirty
		#define GEODE_CONCEPT_CHECK_setToggleDataDirty
		GEODE_CONCEPT_FUNCTION_CHECK(setToggleDataDirty) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupLayers
		#define GEODE_CONCEPT_CHECK_setupLayers
		GEODE_CONCEPT_FUNCTION_CHECK(setupLayers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_timeForXPos
		#define GEODE_CONCEPT_CHECK_timeForXPos
		GEODE_CONCEPT_FUNCTION_CHECK(timeForXPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLayerCapacity
		#define GEODE_CONCEPT_CHECK_updateLayerCapacity
		GEODE_CONCEPT_FUNCTION_CHECK(updateLayerCapacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLegacyLayerCapacity
		#define GEODE_CONCEPT_CHECK_updateLegacyLayerCapacity
		GEODE_CONCEPT_FUNCTION_CHECK(updateLegacyLayerCapacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pure_virtual_00a5fb9c
		#define GEODE_CONCEPT_CHECK_pure_virtual_00a5fb9c
		GEODE_CONCEPT_FUNCTION_CHECK(pure_virtual_00a5fb9c) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pure_virtual_00a5fba0
		#define GEODE_CONCEPT_CHECK_pure_virtual_00a5fba0
		GEODE_CONCEPT_FUNCTION_CHECK(pure_virtual_00a5fba0) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pure_virtual_00a5fba4
		#define GEODE_CONCEPT_CHECK_pure_virtual_00a5fba4
		GEODE_CONCEPT_FUNCTION_CHECK(pure_virtual_00a5fba4) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJBaseGameLayer> : ModifyBase<ModifyDerive<Der, GJBaseGameLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJBaseGameLayer>>;
		using ModifyBase<ModifyDerive<Der, GJBaseGameLayer>>::ModifyBase;
		using Base = GJBaseGameLayer;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, calculateColorValues, EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, calculateOpacityValues, EffectGameObject*, EffectGameObject*, float, GJEffectManager*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, createTextLayers, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, flipGravity, PlayerObject*, bool, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, generateToggleData, cocos2d::CCArray*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, getBatchNode, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, getBatchNodeAdd, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, getBatchNodeAddBottom, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, getBatchNodeAddBottom2, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, getBatchNodeAddBottom2Glow, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, getBatchNodeAddBottomGlow, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, getBatchNodeAddGlow, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, getBatchNodeAddMid, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, getBatchNodeAddMidGlow, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, getBatchNodeAddPlayer, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, getBatchNodeAddText, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, getBatchNodeAddTop, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, getBatchNodeBottom, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, getBatchNodeBottom2, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, getBatchNodePlayer, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, getBatchNodeText, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, getCapacityString, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, getEffectBatchNode, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, getEffectBatchNodeAdd, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, getGameLayer, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, getLevelSettings, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, getPlayer, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, getPlayer2, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, getToggleDataDirty, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, isGroupDisabledForObject, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, isGroupDisabledForObjectFull, GameObject*, cocos2d::CCArray*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, parentForZLayer, int, bool, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, processColorObject, EffectGameObject*, int, cocos2d::CCDictionary*, float, GJEffectManager*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, processOpacityObject, EffectGameObject*, cocos2d::CCDictionary*, float, GJEffectManager*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, setToggleDataDirty, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, setupLayers, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, timeForXPos, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, updateLayerCapacity, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, updateLegacyLayerCapacity, int, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, pure_virtual_00a5fb9c, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, pure_virtual_00a5fba0, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, pure_virtual_00a5fba4, )
		}
	};
}
