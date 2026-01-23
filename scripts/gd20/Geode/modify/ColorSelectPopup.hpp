#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ColorSelectPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_closeColorSelect
		#define GEODE_STATICS_closeColorSelect
		GEODE_AS_STATIC_FUNCTION(closeColorSelect) 
	#endif

	#ifndef GEODE_STATICS_createToggleButton
		#define GEODE_STATICS_createToggleButton
		GEODE_AS_STATIC_FUNCTION(createToggleButton) 
	#endif

	#ifndef GEODE_STATICS_getAction
		#define GEODE_STATICS_getAction
		GEODE_AS_STATIC_FUNCTION(getAction) 
	#endif

	#ifndef GEODE_STATICS_getColorValue
		#define GEODE_STATICS_getColorValue
		GEODE_AS_STATIC_FUNCTION(getColorValue) 
	#endif

	#ifndef GEODE_STATICS_getCustom
		#define GEODE_STATICS_getCustom
		GEODE_AS_STATIC_FUNCTION(getCustom) 
	#endif

	#ifndef GEODE_STATICS_getCustom2
		#define GEODE_STATICS_getCustom2
		GEODE_AS_STATIC_FUNCTION(getCustom2) 
	#endif

	#ifndef GEODE_STATICS_getDelegate
		#define GEODE_STATICS_getDelegate
		GEODE_AS_STATIC_FUNCTION(getDelegate) 
	#endif

	#ifndef GEODE_STATICS_getDuration
		#define GEODE_STATICS_getDuration
		GEODE_AS_STATIC_FUNCTION(getDuration) 
	#endif

	#ifndef GEODE_STATICS_getTargetOpacity
		#define GEODE_STATICS_getTargetOpacity
		GEODE_AS_STATIC_FUNCTION(getTargetOpacity) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onCopy
		#define GEODE_STATICS_onCopy
		GEODE_AS_STATIC_FUNCTION(onCopy) 
	#endif

	#ifndef GEODE_STATICS_onCopyOpacity
		#define GEODE_STATICS_onCopyOpacity
		GEODE_AS_STATIC_FUNCTION(onCopyOpacity) 
	#endif

	#ifndef GEODE_STATICS_onPaste
		#define GEODE_STATICS_onPaste
		GEODE_AS_STATIC_FUNCTION(onPaste) 
	#endif

	#ifndef GEODE_STATICS_onPlayerColor1
		#define GEODE_STATICS_onPlayerColor1
		GEODE_AS_STATIC_FUNCTION(onPlayerColor1) 
	#endif

	#ifndef GEODE_STATICS_onPlayerColor2
		#define GEODE_STATICS_onPlayerColor2
		GEODE_AS_STATIC_FUNCTION(onPlayerColor2) 
	#endif

	#ifndef GEODE_STATICS_onSelectSpecialColor
		#define GEODE_STATICS_onSelectSpecialColor
		GEODE_AS_STATIC_FUNCTION(onSelectSpecialColor) 
	#endif

	#ifndef GEODE_STATICS_onSpawnedByTrigger
		#define GEODE_STATICS_onSpawnedByTrigger
		GEODE_AS_STATIC_FUNCTION(onSpawnedByTrigger) 
	#endif

	#ifndef GEODE_STATICS_onTintGround
		#define GEODE_STATICS_onTintGround
		GEODE_AS_STATIC_FUNCTION(onTintGround) 
	#endif

	#ifndef GEODE_STATICS_onToggleHSVMode
		#define GEODE_STATICS_onToggleHSVMode
		GEODE_AS_STATIC_FUNCTION(onToggleHSVMode) 
	#endif

	#ifndef GEODE_STATICS_onToggleTintMode
		#define GEODE_STATICS_onToggleTintMode
		GEODE_AS_STATIC_FUNCTION(onToggleTintMode) 
	#endif

	#ifndef GEODE_STATICS_onTouchTriggered
		#define GEODE_STATICS_onTouchTriggered
		GEODE_AS_STATIC_FUNCTION(onTouchTriggered) 
	#endif

	#ifndef GEODE_STATICS_onUpdateCopyColor
		#define GEODE_STATICS_onUpdateCopyColor
		GEODE_AS_STATIC_FUNCTION(onUpdateCopyColor) 
	#endif

	#ifndef GEODE_STATICS_onUpdateCustomColor
		#define GEODE_STATICS_onUpdateCustomColor
		GEODE_AS_STATIC_FUNCTION(onUpdateCustomColor) 
	#endif

	#ifndef GEODE_STATICS_selectColor
		#define GEODE_STATICS_selectColor
		GEODE_AS_STATIC_FUNCTION(selectColor) 
	#endif

	#ifndef GEODE_STATICS_setDelegate
		#define GEODE_STATICS_setDelegate
		GEODE_AS_STATIC_FUNCTION(setDelegate) 
	#endif

	#ifndef GEODE_STATICS_sliderChanged
		#define GEODE_STATICS_sliderChanged
		GEODE_AS_STATIC_FUNCTION(sliderChanged) 
	#endif

	#ifndef GEODE_STATICS_updateColorValue
		#define GEODE_STATICS_updateColorValue
		GEODE_AS_STATIC_FUNCTION(updateColorValue) 
	#endif

	#ifndef GEODE_STATICS_updateCopyColor
		#define GEODE_STATICS_updateCopyColor
		GEODE_AS_STATIC_FUNCTION(updateCopyColor) 
	#endif

	#ifndef GEODE_STATICS_updateCopyColorTextInputLabel
		#define GEODE_STATICS_updateCopyColorTextInputLabel
		GEODE_AS_STATIC_FUNCTION(updateCopyColorTextInputLabel) 
	#endif

	#ifndef GEODE_STATICS_updateCustomColorIdx
		#define GEODE_STATICS_updateCustomColorIdx
		GEODE_AS_STATIC_FUNCTION(updateCustomColorIdx) 
	#endif

	#ifndef GEODE_STATICS_updateDuration
		#define GEODE_STATICS_updateDuration
		GEODE_AS_STATIC_FUNCTION(updateDuration) 
	#endif

	#ifndef GEODE_STATICS_updateDurLabel
		#define GEODE_STATICS_updateDurLabel
		GEODE_AS_STATIC_FUNCTION(updateDurLabel) 
	#endif

	#ifndef GEODE_STATICS_updateEditorLabel
		#define GEODE_STATICS_updateEditorLabel
		GEODE_AS_STATIC_FUNCTION(updateEditorLabel) 
	#endif

	#ifndef GEODE_STATICS_updateHSVMode
		#define GEODE_STATICS_updateHSVMode
		GEODE_AS_STATIC_FUNCTION(updateHSVMode) 
	#endif

	#ifndef GEODE_STATICS_updateHSVValue
		#define GEODE_STATICS_updateHSVValue
		GEODE_AS_STATIC_FUNCTION(updateHSVValue) 
	#endif

	#ifndef GEODE_STATICS_updateOpacity
		#define GEODE_STATICS_updateOpacity
		GEODE_AS_STATIC_FUNCTION(updateOpacity) 
	#endif

	#ifndef GEODE_STATICS_updateOpacityLabel
		#define GEODE_STATICS_updateOpacityLabel
		GEODE_AS_STATIC_FUNCTION(updateOpacityLabel) 
	#endif

	#ifndef GEODE_STATICS_updateSpawnedByTrigger
		#define GEODE_STATICS_updateSpawnedByTrigger
		GEODE_AS_STATIC_FUNCTION(updateSpawnedByTrigger) 
	#endif

	#ifndef GEODE_STATICS_updateTextInputLabel
		#define GEODE_STATICS_updateTextInputLabel
		GEODE_AS_STATIC_FUNCTION(updateTextInputLabel) 
	#endif

	#ifndef GEODE_STATICS_updateTouchTriggered
		#define GEODE_STATICS_updateTouchTriggered
		GEODE_AS_STATIC_FUNCTION(updateTouchTriggered) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_determineStartValues
		#define GEODE_STATICS_determineStartValues
		GEODE_AS_STATIC_FUNCTION(determineStartValues) 
	#endif

	#ifndef GEODE_STATICS_textInputClosed
		#define GEODE_STATICS_textInputClosed
		GEODE_AS_STATIC_FUNCTION(textInputClosed) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_textInputShouldOffset
		#define GEODE_STATICS_textInputShouldOffset
		GEODE_AS_STATIC_FUNCTION(textInputShouldOffset) 
	#endif

	#ifndef GEODE_STATICS_textInputReturn
		#define GEODE_STATICS_textInputReturn
		GEODE_AS_STATIC_FUNCTION(textInputReturn) 
	#endif

	#ifndef GEODE_STATICS_colorValueChanged
		#define GEODE_STATICS_colorValueChanged
		GEODE_AS_STATIC_FUNCTION(colorValueChanged) 
	#endif

	#ifndef GEODE_STATICS_colorSelectClosed
		#define GEODE_STATICS_colorSelectClosed
		GEODE_AS_STATIC_FUNCTION(colorSelectClosed) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_closeColorSelect
		#define GEODE_CONCEPT_CHECK_closeColorSelect
		GEODE_CONCEPT_FUNCTION_CHECK(closeColorSelect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createToggleButton
		#define GEODE_CONCEPT_CHECK_createToggleButton
		GEODE_CONCEPT_FUNCTION_CHECK(createToggleButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAction
		#define GEODE_CONCEPT_CHECK_getAction
		GEODE_CONCEPT_FUNCTION_CHECK(getAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getColorValue
		#define GEODE_CONCEPT_CHECK_getColorValue
		GEODE_CONCEPT_FUNCTION_CHECK(getColorValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCustom
		#define GEODE_CONCEPT_CHECK_getCustom
		GEODE_CONCEPT_FUNCTION_CHECK(getCustom) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCustom2
		#define GEODE_CONCEPT_CHECK_getCustom2
		GEODE_CONCEPT_FUNCTION_CHECK(getCustom2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDelegate
		#define GEODE_CONCEPT_CHECK_getDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(getDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDuration
		#define GEODE_CONCEPT_CHECK_getDuration
		GEODE_CONCEPT_FUNCTION_CHECK(getDuration) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTargetOpacity
		#define GEODE_CONCEPT_CHECK_getTargetOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(getTargetOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCopy
		#define GEODE_CONCEPT_CHECK_onCopy
		GEODE_CONCEPT_FUNCTION_CHECK(onCopy) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCopyOpacity
		#define GEODE_CONCEPT_CHECK_onCopyOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(onCopyOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPaste
		#define GEODE_CONCEPT_CHECK_onPaste
		GEODE_CONCEPT_FUNCTION_CHECK(onPaste) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPlayerColor1
		#define GEODE_CONCEPT_CHECK_onPlayerColor1
		GEODE_CONCEPT_FUNCTION_CHECK(onPlayerColor1) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPlayerColor2
		#define GEODE_CONCEPT_CHECK_onPlayerColor2
		GEODE_CONCEPT_FUNCTION_CHECK(onPlayerColor2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectSpecialColor
		#define GEODE_CONCEPT_CHECK_onSelectSpecialColor
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectSpecialColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSpawnedByTrigger
		#define GEODE_CONCEPT_CHECK_onSpawnedByTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(onSpawnedByTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTintGround
		#define GEODE_CONCEPT_CHECK_onTintGround
		GEODE_CONCEPT_FUNCTION_CHECK(onTintGround) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleHSVMode
		#define GEODE_CONCEPT_CHECK_onToggleHSVMode
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleHSVMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleTintMode
		#define GEODE_CONCEPT_CHECK_onToggleTintMode
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleTintMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTouchTriggered
		#define GEODE_CONCEPT_CHECK_onTouchTriggered
		GEODE_CONCEPT_FUNCTION_CHECK(onTouchTriggered) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUpdateCopyColor
		#define GEODE_CONCEPT_CHECK_onUpdateCopyColor
		GEODE_CONCEPT_FUNCTION_CHECK(onUpdateCopyColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUpdateCustomColor
		#define GEODE_CONCEPT_CHECK_onUpdateCustomColor
		GEODE_CONCEPT_FUNCTION_CHECK(onUpdateCustomColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectColor
		#define GEODE_CONCEPT_CHECK_selectColor
		GEODE_CONCEPT_FUNCTION_CHECK(selectColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDelegate
		#define GEODE_CONCEPT_CHECK_setDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(setDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sliderChanged
		#define GEODE_CONCEPT_CHECK_sliderChanged
		GEODE_CONCEPT_FUNCTION_CHECK(sliderChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateColorValue
		#define GEODE_CONCEPT_CHECK_updateColorValue
		GEODE_CONCEPT_FUNCTION_CHECK(updateColorValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCopyColor
		#define GEODE_CONCEPT_CHECK_updateCopyColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateCopyColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCopyColorTextInputLabel
		#define GEODE_CONCEPT_CHECK_updateCopyColorTextInputLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateCopyColorTextInputLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCustomColorIdx
		#define GEODE_CONCEPT_CHECK_updateCustomColorIdx
		GEODE_CONCEPT_FUNCTION_CHECK(updateCustomColorIdx) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDuration
		#define GEODE_CONCEPT_CHECK_updateDuration
		GEODE_CONCEPT_FUNCTION_CHECK(updateDuration) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDurLabel
		#define GEODE_CONCEPT_CHECK_updateDurLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateDurLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateEditorLabel
		#define GEODE_CONCEPT_CHECK_updateEditorLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateEditorLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateHSVMode
		#define GEODE_CONCEPT_CHECK_updateHSVMode
		GEODE_CONCEPT_FUNCTION_CHECK(updateHSVMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateHSVValue
		#define GEODE_CONCEPT_CHECK_updateHSVValue
		GEODE_CONCEPT_FUNCTION_CHECK(updateHSVValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateOpacity
		#define GEODE_CONCEPT_CHECK_updateOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(updateOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateOpacityLabel
		#define GEODE_CONCEPT_CHECK_updateOpacityLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateOpacityLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSpawnedByTrigger
		#define GEODE_CONCEPT_CHECK_updateSpawnedByTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(updateSpawnedByTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTextInputLabel
		#define GEODE_CONCEPT_CHECK_updateTextInputLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateTextInputLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTouchTriggered
		#define GEODE_CONCEPT_CHECK_updateTouchTriggered
		GEODE_CONCEPT_FUNCTION_CHECK(updateTouchTriggered) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_show
		#define GEODE_CONCEPT_CHECK_show
		GEODE_CONCEPT_FUNCTION_CHECK(show) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_determineStartValues
		#define GEODE_CONCEPT_CHECK_determineStartValues
		GEODE_CONCEPT_FUNCTION_CHECK(determineStartValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputClosed
		#define GEODE_CONCEPT_CHECK_textInputClosed
		GEODE_CONCEPT_FUNCTION_CHECK(textInputClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputShouldOffset
		#define GEODE_CONCEPT_CHECK_textInputShouldOffset
		GEODE_CONCEPT_FUNCTION_CHECK(textInputShouldOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputReturn
		#define GEODE_CONCEPT_CHECK_textInputReturn
		GEODE_CONCEPT_FUNCTION_CHECK(textInputReturn) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_colorValueChanged
		#define GEODE_CONCEPT_CHECK_colorValueChanged
		GEODE_CONCEPT_FUNCTION_CHECK(colorValueChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_colorSelectClosed
		#define GEODE_CONCEPT_CHECK_colorSelectClosed
		GEODE_CONCEPT_FUNCTION_CHECK(colorSelectClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ColorSelectPopup> : ModifyBase<ModifyDerive<Der, ColorSelectPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ColorSelectPopup>>;
		using ModifyBase<ModifyDerive<Der, ColorSelectPopup>>::ModifyBase;
		using Base = ColorSelectPopup;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorSelectPopup, create, ColorAction*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorSelectPopup, create, EffectGameObject*, cocos2d::CCArray*, ColorAction*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorSelectPopup, create, EffectGameObject*, cocos2d::CCArray*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorSelectPopup, closeColorSelect, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorSelectPopup, createToggleButton, gd::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorSelectPopup, getAction, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorSelectPopup, getColorValue, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorSelectPopup, getCustom, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorSelectPopup, getCustom2, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorSelectPopup, getDelegate, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorSelectPopup, getDuration, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorSelectPopup, getTargetOpacity, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorSelectPopup, init, EffectGameObject*, cocos2d::CCArray*, ColorAction*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorSelectPopup, onCopy, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorSelectPopup, onCopyOpacity, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorSelectPopup, onPaste, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorSelectPopup, onPlayerColor1, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorSelectPopup, onPlayerColor2, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorSelectPopup, onSelectSpecialColor, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorSelectPopup, onSpawnedByTrigger, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorSelectPopup, onTintGround, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorSelectPopup, onToggleHSVMode, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorSelectPopup, onToggleTintMode, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorSelectPopup, onTouchTriggered, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorSelectPopup, onUpdateCopyColor, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorSelectPopup, onUpdateCustomColor, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorSelectPopup, selectColor, cocos2d::ccColor3B)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorSelectPopup, setDelegate, ColorSelectDelegate*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorSelectPopup, sliderChanged, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorSelectPopup, updateColorValue, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorSelectPopup, updateCopyColor, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorSelectPopup, updateCopyColorTextInputLabel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorSelectPopup, updateCustomColorIdx, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorSelectPopup, updateDuration, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorSelectPopup, updateDurLabel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorSelectPopup, updateEditorLabel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorSelectPopup, updateHSVMode, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorSelectPopup, updateHSVValue, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorSelectPopup, updateOpacity, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorSelectPopup, updateOpacityLabel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorSelectPopup, updateSpawnedByTrigger, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorSelectPopup, updateTextInputLabel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorSelectPopup, updateTouchTriggered, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorSelectPopup, keyBackClicked, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorSelectPopup, show, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorSelectPopup, determineStartValues, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorSelectPopup, textInputClosed, CCTextInputNode*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorSelectPopup, textChanged, CCTextInputNode*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorSelectPopup, textInputShouldOffset, CCTextInputNode*, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorSelectPopup, textInputReturn, CCTextInputNode*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorSelectPopup, colorValueChanged, cocos2d::ccColor3B)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorSelectPopup, colorSelectClosed, GJSpecialColorSelect*, int)
		}
	};
}
