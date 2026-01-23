#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJMoveCommandLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_determineStartValues
		#define GEODE_STATICS_determineStartValues
		GEODE_AS_STATIC_FUNCTION(determineStartValues) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onEasing
		#define GEODE_STATICS_onEasing
		GEODE_AS_STATIC_FUNCTION(onEasing) 
	#endif

	#ifndef GEODE_STATICS_onLockPlayerX
		#define GEODE_STATICS_onLockPlayerX
		GEODE_AS_STATIC_FUNCTION(onLockPlayerX) 
	#endif

	#ifndef GEODE_STATICS_onLockPlayerY
		#define GEODE_STATICS_onLockPlayerY
		GEODE_AS_STATIC_FUNCTION(onLockPlayerY) 
	#endif

	#ifndef GEODE_STATICS_onSpawnedByTrigger
		#define GEODE_STATICS_onSpawnedByTrigger
		GEODE_AS_STATIC_FUNCTION(onSpawnedByTrigger) 
	#endif

	#ifndef GEODE_STATICS_onTouchTriggered
		#define GEODE_STATICS_onTouchTriggered
		GEODE_AS_STATIC_FUNCTION(onTouchTriggered) 
	#endif

	#ifndef GEODE_STATICS_onUpdateGroupID
		#define GEODE_STATICS_onUpdateGroupID
		GEODE_AS_STATIC_FUNCTION(onUpdateGroupID) 
	#endif

	#ifndef GEODE_STATICS_posFromSliderValue
		#define GEODE_STATICS_posFromSliderValue
		GEODE_AS_STATIC_FUNCTION(posFromSliderValue) 
	#endif

	#ifndef GEODE_STATICS_sliderChanged
		#define GEODE_STATICS_sliderChanged
		GEODE_AS_STATIC_FUNCTION(sliderChanged) 
	#endif

	#ifndef GEODE_STATICS_sliderValueFromPos
		#define GEODE_STATICS_sliderValueFromPos
		GEODE_AS_STATIC_FUNCTION(sliderValueFromPos) 
	#endif

	#ifndef GEODE_STATICS_sliderXChanged
		#define GEODE_STATICS_sliderXChanged
		GEODE_AS_STATIC_FUNCTION(sliderXChanged) 
	#endif

	#ifndef GEODE_STATICS_sliderYChanged
		#define GEODE_STATICS_sliderYChanged
		GEODE_AS_STATIC_FUNCTION(sliderYChanged) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_textInputClosed
		#define GEODE_STATICS_textInputClosed
		GEODE_AS_STATIC_FUNCTION(textInputClosed) 
	#endif

	#ifndef GEODE_STATICS_textInputReturn
		#define GEODE_STATICS_textInputReturn
		GEODE_AS_STATIC_FUNCTION(textInputReturn) 
	#endif

	#ifndef GEODE_STATICS_textInputShouldOffset
		#define GEODE_STATICS_textInputShouldOffset
		GEODE_AS_STATIC_FUNCTION(textInputShouldOffset) 
	#endif

	#ifndef GEODE_STATICS_updateDuration
		#define GEODE_STATICS_updateDuration
		GEODE_AS_STATIC_FUNCTION(updateDuration) 
	#endif

	#ifndef GEODE_STATICS_updateDurLabel
		#define GEODE_STATICS_updateDurLabel
		GEODE_AS_STATIC_FUNCTION(updateDurLabel) 
	#endif

	#ifndef GEODE_STATICS_updateEasingLabel
		#define GEODE_STATICS_updateEasingLabel
		GEODE_AS_STATIC_FUNCTION(updateEasingLabel) 
	#endif

	#ifndef GEODE_STATICS_updateEditorLabel
		#define GEODE_STATICS_updateEditorLabel
		GEODE_AS_STATIC_FUNCTION(updateEditorLabel) 
	#endif

	#ifndef GEODE_STATICS_updateMoveCommandEasing
		#define GEODE_STATICS_updateMoveCommandEasing
		GEODE_AS_STATIC_FUNCTION(updateMoveCommandEasing) 
	#endif

	#ifndef GEODE_STATICS_updateMoveCommandPosX
		#define GEODE_STATICS_updateMoveCommandPosX
		GEODE_AS_STATIC_FUNCTION(updateMoveCommandPosX) 
	#endif

	#ifndef GEODE_STATICS_updateMoveCommandPosY
		#define GEODE_STATICS_updateMoveCommandPosY
		GEODE_AS_STATIC_FUNCTION(updateMoveCommandPosY) 
	#endif

	#ifndef GEODE_STATICS_updateSpawnedByTrigger
		#define GEODE_STATICS_updateSpawnedByTrigger
		GEODE_AS_STATIC_FUNCTION(updateSpawnedByTrigger) 
	#endif

	#ifndef GEODE_STATICS_updateTargetGroupID
		#define GEODE_STATICS_updateTargetGroupID
		GEODE_AS_STATIC_FUNCTION(updateTargetGroupID) 
	#endif

	#ifndef GEODE_STATICS_updateTextInputLabel
		#define GEODE_STATICS_updateTextInputLabel
		GEODE_AS_STATIC_FUNCTION(updateTextInputLabel) 
	#endif

	#ifndef GEODE_STATICS_updateTouchTriggered
		#define GEODE_STATICS_updateTouchTriggered
		GEODE_AS_STATIC_FUNCTION(updateTouchTriggered) 
	#endif

	#ifndef GEODE_STATICS_updateValueXLabel
		#define GEODE_STATICS_updateValueXLabel
		GEODE_AS_STATIC_FUNCTION(updateValueXLabel) 
	#endif

	#ifndef GEODE_STATICS_updateValueYLabel
		#define GEODE_STATICS_updateValueYLabel
		GEODE_AS_STATIC_FUNCTION(updateValueYLabel) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_determineStartValues
		#define GEODE_CONCEPT_CHECK_determineStartValues
		GEODE_CONCEPT_FUNCTION_CHECK(determineStartValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEasing
		#define GEODE_CONCEPT_CHECK_onEasing
		GEODE_CONCEPT_FUNCTION_CHECK(onEasing) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onLockPlayerX
		#define GEODE_CONCEPT_CHECK_onLockPlayerX
		GEODE_CONCEPT_FUNCTION_CHECK(onLockPlayerX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onLockPlayerY
		#define GEODE_CONCEPT_CHECK_onLockPlayerY
		GEODE_CONCEPT_FUNCTION_CHECK(onLockPlayerY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSpawnedByTrigger
		#define GEODE_CONCEPT_CHECK_onSpawnedByTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(onSpawnedByTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTouchTriggered
		#define GEODE_CONCEPT_CHECK_onTouchTriggered
		GEODE_CONCEPT_FUNCTION_CHECK(onTouchTriggered) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUpdateGroupID
		#define GEODE_CONCEPT_CHECK_onUpdateGroupID
		GEODE_CONCEPT_FUNCTION_CHECK(onUpdateGroupID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_posFromSliderValue
		#define GEODE_CONCEPT_CHECK_posFromSliderValue
		GEODE_CONCEPT_FUNCTION_CHECK(posFromSliderValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sliderChanged
		#define GEODE_CONCEPT_CHECK_sliderChanged
		GEODE_CONCEPT_FUNCTION_CHECK(sliderChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sliderValueFromPos
		#define GEODE_CONCEPT_CHECK_sliderValueFromPos
		GEODE_CONCEPT_FUNCTION_CHECK(sliderValueFromPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sliderXChanged
		#define GEODE_CONCEPT_CHECK_sliderXChanged
		GEODE_CONCEPT_FUNCTION_CHECK(sliderXChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sliderYChanged
		#define GEODE_CONCEPT_CHECK_sliderYChanged
		GEODE_CONCEPT_FUNCTION_CHECK(sliderYChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputClosed
		#define GEODE_CONCEPT_CHECK_textInputClosed
		GEODE_CONCEPT_FUNCTION_CHECK(textInputClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputReturn
		#define GEODE_CONCEPT_CHECK_textInputReturn
		GEODE_CONCEPT_FUNCTION_CHECK(textInputReturn) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputShouldOffset
		#define GEODE_CONCEPT_CHECK_textInputShouldOffset
		GEODE_CONCEPT_FUNCTION_CHECK(textInputShouldOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDuration
		#define GEODE_CONCEPT_CHECK_updateDuration
		GEODE_CONCEPT_FUNCTION_CHECK(updateDuration) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDurLabel
		#define GEODE_CONCEPT_CHECK_updateDurLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateDurLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateEasingLabel
		#define GEODE_CONCEPT_CHECK_updateEasingLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateEasingLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateEditorLabel
		#define GEODE_CONCEPT_CHECK_updateEditorLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateEditorLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateMoveCommandEasing
		#define GEODE_CONCEPT_CHECK_updateMoveCommandEasing
		GEODE_CONCEPT_FUNCTION_CHECK(updateMoveCommandEasing) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateMoveCommandPosX
		#define GEODE_CONCEPT_CHECK_updateMoveCommandPosX
		GEODE_CONCEPT_FUNCTION_CHECK(updateMoveCommandPosX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateMoveCommandPosY
		#define GEODE_CONCEPT_CHECK_updateMoveCommandPosY
		GEODE_CONCEPT_FUNCTION_CHECK(updateMoveCommandPosY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSpawnedByTrigger
		#define GEODE_CONCEPT_CHECK_updateSpawnedByTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(updateSpawnedByTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTargetGroupID
		#define GEODE_CONCEPT_CHECK_updateTargetGroupID
		GEODE_CONCEPT_FUNCTION_CHECK(updateTargetGroupID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTextInputLabel
		#define GEODE_CONCEPT_CHECK_updateTextInputLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateTextInputLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTouchTriggered
		#define GEODE_CONCEPT_CHECK_updateTouchTriggered
		GEODE_CONCEPT_FUNCTION_CHECK(updateTouchTriggered) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateValueXLabel
		#define GEODE_CONCEPT_CHECK_updateValueXLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateValueXLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateValueYLabel
		#define GEODE_CONCEPT_CHECK_updateValueYLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateValueYLabel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJMoveCommandLayer> : ModifyBase<ModifyDerive<Der, GJMoveCommandLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJMoveCommandLayer>>;
		using ModifyBase<ModifyDerive<Der, GJMoveCommandLayer>>::ModifyBase;
		using Base = GJMoveCommandLayer;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMoveCommandLayer, create, EffectGameObject*, cocos2d::CCArray*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMoveCommandLayer, determineStartValues, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMoveCommandLayer, init, EffectGameObject*, cocos2d::CCArray*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMoveCommandLayer, keyBackClicked, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMoveCommandLayer, onClose, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMoveCommandLayer, onEasing, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMoveCommandLayer, onLockPlayerX, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMoveCommandLayer, onLockPlayerY, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMoveCommandLayer, onSpawnedByTrigger, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMoveCommandLayer, onTouchTriggered, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMoveCommandLayer, onUpdateGroupID, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMoveCommandLayer, posFromSliderValue, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMoveCommandLayer, sliderChanged, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMoveCommandLayer, sliderValueFromPos, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMoveCommandLayer, sliderXChanged, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMoveCommandLayer, sliderYChanged, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMoveCommandLayer, textChanged, CCTextInputNode*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMoveCommandLayer, textInputClosed, CCTextInputNode*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMoveCommandLayer, textInputReturn, CCTextInputNode*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMoveCommandLayer, textInputShouldOffset, CCTextInputNode*, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMoveCommandLayer, updateDuration, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMoveCommandLayer, updateDurLabel, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMoveCommandLayer, updateEasingLabel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMoveCommandLayer, updateEditorLabel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMoveCommandLayer, updateMoveCommandEasing, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMoveCommandLayer, updateMoveCommandPosX, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMoveCommandLayer, updateMoveCommandPosY, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMoveCommandLayer, updateSpawnedByTrigger, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMoveCommandLayer, updateTargetGroupID, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMoveCommandLayer, updateTextInputLabel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMoveCommandLayer, updateTouchTriggered, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMoveCommandLayer, updateValueXLabel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMoveCommandLayer, updateValueYLabel, )
		}
	};
}
