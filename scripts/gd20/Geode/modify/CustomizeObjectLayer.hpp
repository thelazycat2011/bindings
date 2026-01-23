#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CustomizeObjectLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_colorSelectClosed
		#define GEODE_STATICS_colorSelectClosed
		GEODE_AS_STATIC_FUNCTION(colorSelectClosed) 
	#endif

	#ifndef GEODE_STATICS_createToggleButton
		#define GEODE_STATICS_createToggleButton
		GEODE_AS_STATIC_FUNCTION(createToggleButton) 
	#endif

	#ifndef GEODE_STATICS_determineStartValues
		#define GEODE_STATICS_determineStartValues
		GEODE_AS_STATIC_FUNCTION(determineStartValues) 
	#endif

	#ifndef GEODE_STATICS_getActiveMode
		#define GEODE_STATICS_getActiveMode
		GEODE_AS_STATIC_FUNCTION(getActiveMode) 
	#endif

	#ifndef GEODE_STATICS_getButtonByTag
		#define GEODE_STATICS_getButtonByTag
		GEODE_AS_STATIC_FUNCTION(getButtonByTag) 
	#endif

	#ifndef GEODE_STATICS_getHSV
		#define GEODE_STATICS_getHSV
		GEODE_AS_STATIC_FUNCTION(getHSV) 
	#endif

	#ifndef GEODE_STATICS_highlightSelected
		#define GEODE_STATICS_highlightSelected
		GEODE_AS_STATIC_FUNCTION(highlightSelected) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onBreakApart
		#define GEODE_STATICS_onBreakApart
		GEODE_AS_STATIC_FUNCTION(onBreakApart) 
	#endif

	#ifndef GEODE_STATICS_onBrowse
		#define GEODE_STATICS_onBrowse
		GEODE_AS_STATIC_FUNCTION(onBrowse) 
	#endif

	#ifndef GEODE_STATICS_onClear
		#define GEODE_STATICS_onClear
		GEODE_AS_STATIC_FUNCTION(onClear) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onCopy
		#define GEODE_STATICS_onCopy
		GEODE_AS_STATIC_FUNCTION(onCopy) 
	#endif

	#ifndef GEODE_STATICS_onEditColor
		#define GEODE_STATICS_onEditColor
		GEODE_AS_STATIC_FUNCTION(onEditColor) 
	#endif

	#ifndef GEODE_STATICS_onHSV
		#define GEODE_STATICS_onHSV
		GEODE_AS_STATIC_FUNCTION(onHSV) 
	#endif

	#ifndef GEODE_STATICS_onNextColorChannel
		#define GEODE_STATICS_onNextColorChannel
		GEODE_AS_STATIC_FUNCTION(onNextColorChannel) 
	#endif

	#ifndef GEODE_STATICS_onPaste
		#define GEODE_STATICS_onPaste
		GEODE_AS_STATIC_FUNCTION(onPaste) 
	#endif

	#ifndef GEODE_STATICS_onSelectColor
		#define GEODE_STATICS_onSelectColor
		GEODE_AS_STATIC_FUNCTION(onSelectColor) 
	#endif

	#ifndef GEODE_STATICS_onSelectMode
		#define GEODE_STATICS_onSelectMode
		GEODE_AS_STATIC_FUNCTION(onSelectMode) 
	#endif

	#ifndef GEODE_STATICS_onUpdateCustomColor
		#define GEODE_STATICS_onUpdateCustomColor
		GEODE_AS_STATIC_FUNCTION(onUpdateCustomColor) 
	#endif

	#ifndef GEODE_STATICS_toggleVisible
		#define GEODE_STATICS_toggleVisible
		GEODE_AS_STATIC_FUNCTION(toggleVisible) 
	#endif

	#ifndef GEODE_STATICS_updateChannelLabel
		#define GEODE_STATICS_updateChannelLabel
		GEODE_AS_STATIC_FUNCTION(updateChannelLabel) 
	#endif

	#ifndef GEODE_STATICS_updateColorSprite
		#define GEODE_STATICS_updateColorSprite
		GEODE_AS_STATIC_FUNCTION(updateColorSprite) 
	#endif

	#ifndef GEODE_STATICS_updateCurrentSelection
		#define GEODE_STATICS_updateCurrentSelection
		GEODE_AS_STATIC_FUNCTION(updateCurrentSelection) 
	#endif

	#ifndef GEODE_STATICS_updateCustomColorLabels
		#define GEODE_STATICS_updateCustomColorLabels
		GEODE_AS_STATIC_FUNCTION(updateCustomColorLabels) 
	#endif

	#ifndef GEODE_STATICS_updateHSVButtons
		#define GEODE_STATICS_updateHSVButtons
		GEODE_AS_STATIC_FUNCTION(updateHSVButtons) 
	#endif

	#ifndef GEODE_STATICS_updateSelected
		#define GEODE_STATICS_updateSelected
		GEODE_AS_STATIC_FUNCTION(updateSelected) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_textInputOpened
		#define GEODE_STATICS_textInputOpened
		GEODE_AS_STATIC_FUNCTION(textInputOpened) 
	#endif

	#ifndef GEODE_STATICS_textInputClosed
		#define GEODE_STATICS_textInputClosed
		GEODE_AS_STATIC_FUNCTION(textInputClosed) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_hsvPopupClosed
		#define GEODE_STATICS_hsvPopupClosed
		GEODE_AS_STATIC_FUNCTION(hsvPopupClosed) 
	#endif

	#ifndef GEODE_STATICS_colorSetupClosed
		#define GEODE_STATICS_colorSetupClosed
		GEODE_AS_STATIC_FUNCTION(colorSetupClosed) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_colorSelectClosed
		#define GEODE_CONCEPT_CHECK_colorSelectClosed
		GEODE_CONCEPT_FUNCTION_CHECK(colorSelectClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createToggleButton
		#define GEODE_CONCEPT_CHECK_createToggleButton
		GEODE_CONCEPT_FUNCTION_CHECK(createToggleButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_determineStartValues
		#define GEODE_CONCEPT_CHECK_determineStartValues
		GEODE_CONCEPT_FUNCTION_CHECK(determineStartValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getActiveMode
		#define GEODE_CONCEPT_CHECK_getActiveMode
		GEODE_CONCEPT_FUNCTION_CHECK(getActiveMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getButtonByTag
		#define GEODE_CONCEPT_CHECK_getButtonByTag
		GEODE_CONCEPT_FUNCTION_CHECK(getButtonByTag) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getHSV
		#define GEODE_CONCEPT_CHECK_getHSV
		GEODE_CONCEPT_FUNCTION_CHECK(getHSV) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_highlightSelected
		#define GEODE_CONCEPT_CHECK_highlightSelected
		GEODE_CONCEPT_FUNCTION_CHECK(highlightSelected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBreakApart
		#define GEODE_CONCEPT_CHECK_onBreakApart
		GEODE_CONCEPT_FUNCTION_CHECK(onBreakApart) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBrowse
		#define GEODE_CONCEPT_CHECK_onBrowse
		GEODE_CONCEPT_FUNCTION_CHECK(onBrowse) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClear
		#define GEODE_CONCEPT_CHECK_onClear
		GEODE_CONCEPT_FUNCTION_CHECK(onClear) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCopy
		#define GEODE_CONCEPT_CHECK_onCopy
		GEODE_CONCEPT_FUNCTION_CHECK(onCopy) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEditColor
		#define GEODE_CONCEPT_CHECK_onEditColor
		GEODE_CONCEPT_FUNCTION_CHECK(onEditColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onHSV
		#define GEODE_CONCEPT_CHECK_onHSV
		GEODE_CONCEPT_FUNCTION_CHECK(onHSV) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNextColorChannel
		#define GEODE_CONCEPT_CHECK_onNextColorChannel
		GEODE_CONCEPT_FUNCTION_CHECK(onNextColorChannel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPaste
		#define GEODE_CONCEPT_CHECK_onPaste
		GEODE_CONCEPT_FUNCTION_CHECK(onPaste) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectColor
		#define GEODE_CONCEPT_CHECK_onSelectColor
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectMode
		#define GEODE_CONCEPT_CHECK_onSelectMode
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUpdateCustomColor
		#define GEODE_CONCEPT_CHECK_onUpdateCustomColor
		GEODE_CONCEPT_FUNCTION_CHECK(onUpdateCustomColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleVisible
		#define GEODE_CONCEPT_CHECK_toggleVisible
		GEODE_CONCEPT_FUNCTION_CHECK(toggleVisible) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateChannelLabel
		#define GEODE_CONCEPT_CHECK_updateChannelLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateChannelLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateColorSprite
		#define GEODE_CONCEPT_CHECK_updateColorSprite
		GEODE_CONCEPT_FUNCTION_CHECK(updateColorSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCurrentSelection
		#define GEODE_CONCEPT_CHECK_updateCurrentSelection
		GEODE_CONCEPT_FUNCTION_CHECK(updateCurrentSelection) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCustomColorLabels
		#define GEODE_CONCEPT_CHECK_updateCustomColorLabels
		GEODE_CONCEPT_FUNCTION_CHECK(updateCustomColorLabels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateHSVButtons
		#define GEODE_CONCEPT_CHECK_updateHSVButtons
		GEODE_CONCEPT_FUNCTION_CHECK(updateHSVButtons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSelected
		#define GEODE_CONCEPT_CHECK_updateSelected
		GEODE_CONCEPT_FUNCTION_CHECK(updateSelected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputOpened
		#define GEODE_CONCEPT_CHECK_textInputOpened
		GEODE_CONCEPT_FUNCTION_CHECK(textInputOpened) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputClosed
		#define GEODE_CONCEPT_CHECK_textInputClosed
		GEODE_CONCEPT_FUNCTION_CHECK(textInputClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hsvPopupClosed
		#define GEODE_CONCEPT_CHECK_hsvPopupClosed
		GEODE_CONCEPT_FUNCTION_CHECK(hsvPopupClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_colorSetupClosed
		#define GEODE_CONCEPT_CHECK_colorSetupClosed
		GEODE_CONCEPT_FUNCTION_CHECK(colorSetupClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CustomizeObjectLayer> : ModifyBase<ModifyDerive<Der, CustomizeObjectLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CustomizeObjectLayer>>;
		using ModifyBase<ModifyDerive<Der, CustomizeObjectLayer>>::ModifyBase;
		using Base = CustomizeObjectLayer;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomizeObjectLayer, create, GameObject*, cocos2d::CCArray*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomizeObjectLayer, colorSelectClosed, ColorSelectPopup*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomizeObjectLayer, createToggleButton, gd::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomizeObjectLayer, determineStartValues, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomizeObjectLayer, getActiveMode, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomizeObjectLayer, getButtonByTag, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomizeObjectLayer, getHSV, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomizeObjectLayer, highlightSelected, ButtonSprite*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomizeObjectLayer, init, GameObject*, cocos2d::CCArray*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomizeObjectLayer, onBreakApart, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomizeObjectLayer, onBrowse, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomizeObjectLayer, onClear, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomizeObjectLayer, onClose, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomizeObjectLayer, onCopy, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomizeObjectLayer, onEditColor, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomizeObjectLayer, onHSV, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomizeObjectLayer, onNextColorChannel, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomizeObjectLayer, onPaste, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomizeObjectLayer, onSelectColor, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomizeObjectLayer, onSelectMode, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomizeObjectLayer, onUpdateCustomColor, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomizeObjectLayer, toggleVisible, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomizeObjectLayer, updateChannelLabel, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomizeObjectLayer, updateColorSprite, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomizeObjectLayer, updateCurrentSelection, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomizeObjectLayer, updateCustomColorLabels, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomizeObjectLayer, updateHSVButtons, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomizeObjectLayer, updateSelected, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomizeObjectLayer, keyBackClicked, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomizeObjectLayer, textInputOpened, CCTextInputNode*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomizeObjectLayer, textInputClosed, CCTextInputNode*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomizeObjectLayer, textChanged, CCTextInputNode*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomizeObjectLayer, hsvPopupClosed, HSVWidgetPopup*, cocos2d::ccHSVValue)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomizeObjectLayer, colorSetupClosed, int)
		}
	};
}
