#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCTextInputNode.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_forceOffset
		#define GEODE_STATICS_forceOffset
		GEODE_AS_STATIC_FUNCTION(forceOffset) 
	#endif

	#ifndef GEODE_STATICS_getCharLimit
		#define GEODE_STATICS_getCharLimit
		GEODE_AS_STATIC_FUNCTION(getCharLimit) 
	#endif

	#ifndef GEODE_STATICS_getClearAtZero
		#define GEODE_STATICS_getClearAtZero
		GEODE_AS_STATIC_FUNCTION(getClearAtZero) 
	#endif

	#ifndef GEODE_STATICS_getDelegate
		#define GEODE_STATICS_getDelegate
		GEODE_AS_STATIC_FUNCTION(getDelegate) 
	#endif

	#ifndef GEODE_STATICS_getForceOffset
		#define GEODE_STATICS_getForceOffset
		GEODE_AS_STATIC_FUNCTION(getForceOffset) 
	#endif

	#ifndef GEODE_STATICS_getIsPassword
		#define GEODE_STATICS_getIsPassword
		GEODE_AS_STATIC_FUNCTION(getIsPassword) 
	#endif

	#ifndef GEODE_STATICS_getLabel
		#define GEODE_STATICS_getLabel
		GEODE_AS_STATIC_FUNCTION(getLabel) 
	#endif

	#ifndef GEODE_STATICS_getProfanityFilter
		#define GEODE_STATICS_getProfanityFilter
		GEODE_AS_STATIC_FUNCTION(getProfanityFilter) 
	#endif

	#ifndef GEODE_STATICS_getString
		#define GEODE_STATICS_getString
		GEODE_AS_STATIC_FUNCTION(getString) 
	#endif

	#ifndef GEODE_STATICS_getTextField
		#define GEODE_STATICS_getTextField
		GEODE_AS_STATIC_FUNCTION(getTextField) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onTextFieldInsertText
		#define GEODE_STATICS_onTextFieldInsertText
		GEODE_AS_STATIC_FUNCTION(onTextFieldInsertText) 
	#endif

	#ifndef GEODE_STATICS_refreshLabel
		#define GEODE_STATICS_refreshLabel
		GEODE_AS_STATIC_FUNCTION(refreshLabel) 
	#endif

	#ifndef GEODE_STATICS_setAllowedChars
		#define GEODE_STATICS_setAllowedChars
		GEODE_AS_STATIC_FUNCTION(setAllowedChars) 
	#endif

	#ifndef GEODE_STATICS_setCharLimit
		#define GEODE_STATICS_setCharLimit
		GEODE_AS_STATIC_FUNCTION(setCharLimit) 
	#endif

	#ifndef GEODE_STATICS_setClearAtZero
		#define GEODE_STATICS_setClearAtZero
		GEODE_AS_STATIC_FUNCTION(setClearAtZero) 
	#endif

	#ifndef GEODE_STATICS_setDelegate
		#define GEODE_STATICS_setDelegate
		GEODE_AS_STATIC_FUNCTION(setDelegate) 
	#endif

	#ifndef GEODE_STATICS_setForceOffset
		#define GEODE_STATICS_setForceOffset
		GEODE_AS_STATIC_FUNCTION(setForceOffset) 
	#endif

	#ifndef GEODE_STATICS_setIsPassword
		#define GEODE_STATICS_setIsPassword
		GEODE_AS_STATIC_FUNCTION(setIsPassword) 
	#endif

	#ifndef GEODE_STATICS_setLabelNormalColor
		#define GEODE_STATICS_setLabelNormalColor
		GEODE_AS_STATIC_FUNCTION(setLabelNormalColor) 
	#endif

	#ifndef GEODE_STATICS_setLabelPlaceholderColor
		#define GEODE_STATICS_setLabelPlaceholderColor
		GEODE_AS_STATIC_FUNCTION(setLabelPlaceholderColor) 
	#endif

	#ifndef GEODE_STATICS_setLabelPlaceholderScale
		#define GEODE_STATICS_setLabelPlaceholderScale
		GEODE_AS_STATIC_FUNCTION(setLabelPlaceholderScale) 
	#endif

	#ifndef GEODE_STATICS_setMaxLabelScale
		#define GEODE_STATICS_setMaxLabelScale
		GEODE_AS_STATIC_FUNCTION(setMaxLabelScale) 
	#endif

	#ifndef GEODE_STATICS_setMaxLabelWidth
		#define GEODE_STATICS_setMaxLabelWidth
		GEODE_AS_STATIC_FUNCTION(setMaxLabelWidth) 
	#endif

	#ifndef GEODE_STATICS_setProfanityFilter
		#define GEODE_STATICS_setProfanityFilter
		GEODE_AS_STATIC_FUNCTION(setProfanityFilter) 
	#endif

	#ifndef GEODE_STATICS_setString
		#define GEODE_STATICS_setString
		GEODE_AS_STATIC_FUNCTION(setString) 
	#endif

	#ifndef GEODE_STATICS_updateBlinkLabel
		#define GEODE_STATICS_updateBlinkLabel
		GEODE_AS_STATIC_FUNCTION(updateBlinkLabel) 
	#endif

	#ifndef GEODE_STATICS_updateLabel
		#define GEODE_STATICS_updateLabel
		GEODE_AS_STATIC_FUNCTION(updateLabel) 
	#endif

	#ifndef GEODE_STATICS_visit
		#define GEODE_STATICS_visit
		GEODE_AS_STATIC_FUNCTION(visit) 
	#endif

	#ifndef GEODE_STATICS_ccTouchBegan
		#define GEODE_STATICS_ccTouchBegan
		GEODE_AS_STATIC_FUNCTION(ccTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_ccTouchMoved
		#define GEODE_STATICS_ccTouchMoved
		GEODE_AS_STATIC_FUNCTION(ccTouchMoved) 
	#endif

	#ifndef GEODE_STATICS_ccTouchEnded
		#define GEODE_STATICS_ccTouchEnded
		GEODE_AS_STATIC_FUNCTION(ccTouchEnded) 
	#endif

	#ifndef GEODE_STATICS_ccTouchCancelled
		#define GEODE_STATICS_ccTouchCancelled
		GEODE_AS_STATIC_FUNCTION(ccTouchCancelled) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_onClickTrackNode
		#define GEODE_STATICS_onClickTrackNode
		GEODE_AS_STATIC_FUNCTION(onClickTrackNode) 
	#endif

	#ifndef GEODE_STATICS_keyboardWillShow
		#define GEODE_STATICS_keyboardWillShow
		GEODE_AS_STATIC_FUNCTION(keyboardWillShow) 
	#endif

	#ifndef GEODE_STATICS_keyboardWillHide
		#define GEODE_STATICS_keyboardWillHide
		GEODE_AS_STATIC_FUNCTION(keyboardWillHide) 
	#endif

	#ifndef GEODE_STATICS_onTextFieldAttachWithIME
		#define GEODE_STATICS_onTextFieldAttachWithIME
		GEODE_AS_STATIC_FUNCTION(onTextFieldAttachWithIME) 
	#endif

	#ifndef GEODE_STATICS_onTextFieldDetachWithIME
		#define GEODE_STATICS_onTextFieldDetachWithIME
		GEODE_AS_STATIC_FUNCTION(onTextFieldDetachWithIME) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_forceOffset
		#define GEODE_CONCEPT_CHECK_forceOffset
		GEODE_CONCEPT_FUNCTION_CHECK(forceOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCharLimit
		#define GEODE_CONCEPT_CHECK_getCharLimit
		GEODE_CONCEPT_FUNCTION_CHECK(getCharLimit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getClearAtZero
		#define GEODE_CONCEPT_CHECK_getClearAtZero
		GEODE_CONCEPT_FUNCTION_CHECK(getClearAtZero) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDelegate
		#define GEODE_CONCEPT_CHECK_getDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(getDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getForceOffset
		#define GEODE_CONCEPT_CHECK_getForceOffset
		GEODE_CONCEPT_FUNCTION_CHECK(getForceOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIsPassword
		#define GEODE_CONCEPT_CHECK_getIsPassword
		GEODE_CONCEPT_FUNCTION_CHECK(getIsPassword) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLabel
		#define GEODE_CONCEPT_CHECK_getLabel
		GEODE_CONCEPT_FUNCTION_CHECK(getLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getProfanityFilter
		#define GEODE_CONCEPT_CHECK_getProfanityFilter
		GEODE_CONCEPT_FUNCTION_CHECK(getProfanityFilter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getString
		#define GEODE_CONCEPT_CHECK_getString
		GEODE_CONCEPT_FUNCTION_CHECK(getString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTextField
		#define GEODE_CONCEPT_CHECK_getTextField
		GEODE_CONCEPT_FUNCTION_CHECK(getTextField) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTextFieldInsertText
		#define GEODE_CONCEPT_CHECK_onTextFieldInsertText
		GEODE_CONCEPT_FUNCTION_CHECK(onTextFieldInsertText) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshLabel
		#define GEODE_CONCEPT_CHECK_refreshLabel
		GEODE_CONCEPT_FUNCTION_CHECK(refreshLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setAllowedChars
		#define GEODE_CONCEPT_CHECK_setAllowedChars
		GEODE_CONCEPT_FUNCTION_CHECK(setAllowedChars) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCharLimit
		#define GEODE_CONCEPT_CHECK_setCharLimit
		GEODE_CONCEPT_FUNCTION_CHECK(setCharLimit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setClearAtZero
		#define GEODE_CONCEPT_CHECK_setClearAtZero
		GEODE_CONCEPT_FUNCTION_CHECK(setClearAtZero) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDelegate
		#define GEODE_CONCEPT_CHECK_setDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(setDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setForceOffset
		#define GEODE_CONCEPT_CHECK_setForceOffset
		GEODE_CONCEPT_FUNCTION_CHECK(setForceOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIsPassword
		#define GEODE_CONCEPT_CHECK_setIsPassword
		GEODE_CONCEPT_FUNCTION_CHECK(setIsPassword) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLabelNormalColor
		#define GEODE_CONCEPT_CHECK_setLabelNormalColor
		GEODE_CONCEPT_FUNCTION_CHECK(setLabelNormalColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLabelPlaceholderColor
		#define GEODE_CONCEPT_CHECK_setLabelPlaceholderColor
		GEODE_CONCEPT_FUNCTION_CHECK(setLabelPlaceholderColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLabelPlaceholderScale
		#define GEODE_CONCEPT_CHECK_setLabelPlaceholderScale
		GEODE_CONCEPT_FUNCTION_CHECK(setLabelPlaceholderScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMaxLabelScale
		#define GEODE_CONCEPT_CHECK_setMaxLabelScale
		GEODE_CONCEPT_FUNCTION_CHECK(setMaxLabelScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMaxLabelWidth
		#define GEODE_CONCEPT_CHECK_setMaxLabelWidth
		GEODE_CONCEPT_FUNCTION_CHECK(setMaxLabelWidth) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setProfanityFilter
		#define GEODE_CONCEPT_CHECK_setProfanityFilter
		GEODE_CONCEPT_FUNCTION_CHECK(setProfanityFilter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setString
		#define GEODE_CONCEPT_CHECK_setString
		GEODE_CONCEPT_FUNCTION_CHECK(setString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateBlinkLabel
		#define GEODE_CONCEPT_CHECK_updateBlinkLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateBlinkLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLabel
		#define GEODE_CONCEPT_CHECK_updateLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_visit
		#define GEODE_CONCEPT_CHECK_visit
		GEODE_CONCEPT_FUNCTION_CHECK(visit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchBegan
		#define GEODE_CONCEPT_CHECK_ccTouchBegan
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchBegan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchMoved
		#define GEODE_CONCEPT_CHECK_ccTouchMoved
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchMoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchEnded
		#define GEODE_CONCEPT_CHECK_ccTouchEnded
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchEnded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchCancelled
		#define GEODE_CONCEPT_CHECK_ccTouchCancelled
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchCancelled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		#define GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		GEODE_CONCEPT_FUNCTION_CHECK(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClickTrackNode
		#define GEODE_CONCEPT_CHECK_onClickTrackNode
		GEODE_CONCEPT_FUNCTION_CHECK(onClickTrackNode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyboardWillShow
		#define GEODE_CONCEPT_CHECK_keyboardWillShow
		GEODE_CONCEPT_FUNCTION_CHECK(keyboardWillShow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyboardWillHide
		#define GEODE_CONCEPT_CHECK_keyboardWillHide
		GEODE_CONCEPT_FUNCTION_CHECK(keyboardWillHide) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTextFieldAttachWithIME
		#define GEODE_CONCEPT_CHECK_onTextFieldAttachWithIME
		GEODE_CONCEPT_FUNCTION_CHECK(onTextFieldAttachWithIME) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTextFieldDetachWithIME
		#define GEODE_CONCEPT_CHECK_onTextFieldDetachWithIME
		GEODE_CONCEPT_FUNCTION_CHECK(onTextFieldDetachWithIME) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCTextInputNode> : ModifyBase<ModifyDerive<Der, CCTextInputNode>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCTextInputNode>>;
		using ModifyBase<ModifyDerive<Der, CCTextInputNode>>::ModifyBase;
		using Base = CCTextInputNode;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, create, float, float, char const*, char const*, int, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, forceOffset, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, getCharLimit, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, getClearAtZero, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, getDelegate, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, getForceOffset, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, getIsPassword, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, getLabel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, getProfanityFilter, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, getString, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, getTextField, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, init, float, float, char const*, char const*, int, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, onTextFieldInsertText, cocos2d::CCTextFieldTTF*, char const*, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, refreshLabel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, setAllowedChars, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, setCharLimit, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, setClearAtZero, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, setDelegate, TextInputDelegate*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, setForceOffset, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, setIsPassword, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, setLabelNormalColor, cocos2d::ccColor3B)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, setLabelPlaceholderColor, cocos2d::ccColor3B)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, setLabelPlaceholderScale, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, setMaxLabelScale, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, setMaxLabelWidth, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, setProfanityFilter, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, setString, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, updateBlinkLabel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, updateLabel, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, visit, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, registerWithTouchDispatcher, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, textChanged, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, onClickTrackNode, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, keyboardWillShow, cocos2d::CCIMEKeyboardNotificationInfo&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, keyboardWillHide, cocos2d::CCIMEKeyboardNotificationInfo&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, onTextFieldAttachWithIME, cocos2d::CCTextFieldTTF*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, onTextFieldDetachWithIME, cocos2d::CCTextFieldTTF*)
		}
	};
}
