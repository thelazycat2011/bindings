#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/TextArea.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_colorAllCharactersTo
		#define GEODE_STATICS_colorAllCharactersTo
		GEODE_AS_STATIC_FUNCTION(colorAllCharactersTo) 
	#endif

	#ifndef GEODE_STATICS_fadeIn
		#define GEODE_STATICS_fadeIn
		GEODE_AS_STATIC_FUNCTION(fadeIn) 
	#endif

	#ifndef GEODE_STATICS_fadeOut
		#define GEODE_STATICS_fadeOut
		GEODE_AS_STATIC_FUNCTION(fadeOut) 
	#endif

	#ifndef GEODE_STATICS_fadeOutAndRemove
		#define GEODE_STATICS_fadeOutAndRemove
		GEODE_AS_STATIC_FUNCTION(fadeOutAndRemove) 
	#endif

	#ifndef GEODE_STATICS_finishFade
		#define GEODE_STATICS_finishFade
		GEODE_AS_STATIC_FUNCTION(finishFade) 
	#endif

	#ifndef GEODE_STATICS_getAlign
		#define GEODE_STATICS_getAlign
		GEODE_AS_STATIC_FUNCTION(getAlign) 
	#endif

	#ifndef GEODE_STATICS_getFadeInFinished
		#define GEODE_STATICS_getFadeInFinished
		GEODE_AS_STATIC_FUNCTION(getFadeInFinished) 
	#endif

	#ifndef GEODE_STATICS_getFontScale
		#define GEODE_STATICS_getFontScale
		GEODE_AS_STATIC_FUNCTION(getFontScale) 
	#endif

	#ifndef GEODE_STATICS_getLineSpace
		#define GEODE_STATICS_getLineSpace
		GEODE_AS_STATIC_FUNCTION(getLineSpace) 
	#endif

	#ifndef GEODE_STATICS_getMaxWidth
		#define GEODE_STATICS_getMaxWidth
		GEODE_AS_STATIC_FUNCTION(getMaxWidth) 
	#endif

	#ifndef GEODE_STATICS_getOnTimer
		#define GEODE_STATICS_getOnTimer
		GEODE_AS_STATIC_FUNCTION(getOnTimer) 
	#endif

	#ifndef GEODE_STATICS_getSizeWidth
		#define GEODE_STATICS_getSizeWidth
		GEODE_AS_STATIC_FUNCTION(getSizeWidth) 
	#endif

	#ifndef GEODE_STATICS_getTextHeight
		#define GEODE_STATICS_getTextHeight
		GEODE_AS_STATIC_FUNCTION(getTextHeight) 
	#endif

	#ifndef GEODE_STATICS_getTextPosition
		#define GEODE_STATICS_getTextPosition
		GEODE_AS_STATIC_FUNCTION(getTextPosition) 
	#endif

	#ifndef GEODE_STATICS_getTextWidth
		#define GEODE_STATICS_getTextWidth
		GEODE_AS_STATIC_FUNCTION(getTextWidth) 
	#endif

	#ifndef GEODE_STATICS_hideAll
		#define GEODE_STATICS_hideAll
		GEODE_AS_STATIC_FUNCTION(hideAll) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setAlign
		#define GEODE_STATICS_setAlign
		GEODE_AS_STATIC_FUNCTION(setAlign) 
	#endif

	#ifndef GEODE_STATICS_setFadeInFinished
		#define GEODE_STATICS_setFadeInFinished
		GEODE_AS_STATIC_FUNCTION(setFadeInFinished) 
	#endif

	#ifndef GEODE_STATICS_setFontScale
		#define GEODE_STATICS_setFontScale
		GEODE_AS_STATIC_FUNCTION(setFontScale) 
	#endif

	#ifndef GEODE_STATICS_setIgnoreColorCode
		#define GEODE_STATICS_setIgnoreColorCode
		GEODE_AS_STATIC_FUNCTION(setIgnoreColorCode) 
	#endif

	#ifndef GEODE_STATICS_setLineSpace
		#define GEODE_STATICS_setLineSpace
		GEODE_AS_STATIC_FUNCTION(setLineSpace) 
	#endif

	#ifndef GEODE_STATICS_setMaxWidth
		#define GEODE_STATICS_setMaxWidth
		GEODE_AS_STATIC_FUNCTION(setMaxWidth) 
	#endif

	#ifndef GEODE_STATICS_setOnTimer
		#define GEODE_STATICS_setOnTimer
		GEODE_AS_STATIC_FUNCTION(setOnTimer) 
	#endif

	#ifndef GEODE_STATICS_setString
		#define GEODE_STATICS_setString
		GEODE_AS_STATIC_FUNCTION(setString) 
	#endif

	#ifndef GEODE_STATICS_showAll
		#define GEODE_STATICS_showAll
		GEODE_AS_STATIC_FUNCTION(showAll) 
	#endif

	#ifndef GEODE_STATICS_stopAllCharacterActions
		#define GEODE_STATICS_stopAllCharacterActions
		GEODE_AS_STATIC_FUNCTION(stopAllCharacterActions) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_colorAllCharactersTo
		#define GEODE_CONCEPT_CHECK_colorAllCharactersTo
		GEODE_CONCEPT_FUNCTION_CHECK(colorAllCharactersTo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fadeIn
		#define GEODE_CONCEPT_CHECK_fadeIn
		GEODE_CONCEPT_FUNCTION_CHECK(fadeIn) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fadeOut
		#define GEODE_CONCEPT_CHECK_fadeOut
		GEODE_CONCEPT_FUNCTION_CHECK(fadeOut) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fadeOutAndRemove
		#define GEODE_CONCEPT_CHECK_fadeOutAndRemove
		GEODE_CONCEPT_FUNCTION_CHECK(fadeOutAndRemove) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_finishFade
		#define GEODE_CONCEPT_CHECK_finishFade
		GEODE_CONCEPT_FUNCTION_CHECK(finishFade) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAlign
		#define GEODE_CONCEPT_CHECK_getAlign
		GEODE_CONCEPT_FUNCTION_CHECK(getAlign) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFadeInFinished
		#define GEODE_CONCEPT_CHECK_getFadeInFinished
		GEODE_CONCEPT_FUNCTION_CHECK(getFadeInFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFontScale
		#define GEODE_CONCEPT_CHECK_getFontScale
		GEODE_CONCEPT_FUNCTION_CHECK(getFontScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLineSpace
		#define GEODE_CONCEPT_CHECK_getLineSpace
		GEODE_CONCEPT_FUNCTION_CHECK(getLineSpace) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMaxWidth
		#define GEODE_CONCEPT_CHECK_getMaxWidth
		GEODE_CONCEPT_FUNCTION_CHECK(getMaxWidth) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOnTimer
		#define GEODE_CONCEPT_CHECK_getOnTimer
		GEODE_CONCEPT_FUNCTION_CHECK(getOnTimer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSizeWidth
		#define GEODE_CONCEPT_CHECK_getSizeWidth
		GEODE_CONCEPT_FUNCTION_CHECK(getSizeWidth) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTextHeight
		#define GEODE_CONCEPT_CHECK_getTextHeight
		GEODE_CONCEPT_FUNCTION_CHECK(getTextHeight) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTextPosition
		#define GEODE_CONCEPT_CHECK_getTextPosition
		GEODE_CONCEPT_FUNCTION_CHECK(getTextPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTextWidth
		#define GEODE_CONCEPT_CHECK_getTextWidth
		GEODE_CONCEPT_FUNCTION_CHECK(getTextWidth) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hideAll
		#define GEODE_CONCEPT_CHECK_hideAll
		GEODE_CONCEPT_FUNCTION_CHECK(hideAll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setAlign
		#define GEODE_CONCEPT_CHECK_setAlign
		GEODE_CONCEPT_FUNCTION_CHECK(setAlign) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFadeInFinished
		#define GEODE_CONCEPT_CHECK_setFadeInFinished
		GEODE_CONCEPT_FUNCTION_CHECK(setFadeInFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFontScale
		#define GEODE_CONCEPT_CHECK_setFontScale
		GEODE_CONCEPT_FUNCTION_CHECK(setFontScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIgnoreColorCode
		#define GEODE_CONCEPT_CHECK_setIgnoreColorCode
		GEODE_CONCEPT_FUNCTION_CHECK(setIgnoreColorCode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLineSpace
		#define GEODE_CONCEPT_CHECK_setLineSpace
		GEODE_CONCEPT_FUNCTION_CHECK(setLineSpace) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMaxWidth
		#define GEODE_CONCEPT_CHECK_setMaxWidth
		GEODE_CONCEPT_FUNCTION_CHECK(setMaxWidth) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOnTimer
		#define GEODE_CONCEPT_CHECK_setOnTimer
		GEODE_CONCEPT_FUNCTION_CHECK(setOnTimer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setString
		#define GEODE_CONCEPT_CHECK_setString
		GEODE_CONCEPT_FUNCTION_CHECK(setString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showAll
		#define GEODE_CONCEPT_CHECK_showAll
		GEODE_CONCEPT_FUNCTION_CHECK(showAll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopAllCharacterActions
		#define GEODE_CONCEPT_CHECK_stopAllCharacterActions
		GEODE_CONCEPT_FUNCTION_CHECK(stopAllCharacterActions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOpacity
		#define GEODE_CONCEPT_CHECK_setOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(setOpacity) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, TextArea> : ModifyBase<ModifyDerive<Der, TextArea>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, TextArea>>;
		using ModifyBase<ModifyDerive<Der, TextArea>>::ModifyBase;
		using Base = TextArea;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TextArea, create, gd::string, char const*, float, float, cocos2d::CCPoint, float, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TextArea, colorAllCharactersTo, cocos2d::ccColor3B)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TextArea, fadeIn, float, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TextArea, fadeOut, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TextArea, fadeOutAndRemove, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TextArea, finishFade, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TextArea, getAlign, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TextArea, getFadeInFinished, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TextArea, getFontScale, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TextArea, getLineSpace, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TextArea, getMaxWidth, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TextArea, getOnTimer, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TextArea, getSizeWidth, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TextArea, getTextHeight, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TextArea, getTextPosition, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TextArea, getTextWidth, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TextArea, hideAll, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TextArea, init, gd::string, char const*, float, float, cocos2d::CCPoint, float, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TextArea, setAlign, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TextArea, setFadeInFinished, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TextArea, setFontScale, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TextArea, setIgnoreColorCode, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TextArea, setLineSpace, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TextArea, setMaxWidth, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TextArea, setOnTimer, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TextArea, setString, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TextArea, showAll, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TextArea, stopAllCharacterActions, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TextArea, draw, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TextArea, setOpacity, unsigned char)
		}
	};
}
