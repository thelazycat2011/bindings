#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ColorAction.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getBlend
		#define GEODE_STATICS_getBlend
		GEODE_AS_STATIC_FUNCTION(getBlend) 
	#endif

	#ifndef GEODE_STATICS_getCopy
		#define GEODE_STATICS_getCopy
		GEODE_AS_STATIC_FUNCTION(getCopy) 
	#endif

	#ifndef GEODE_STATICS_getCopyOpacity
		#define GEODE_STATICS_getCopyOpacity
		GEODE_AS_STATIC_FUNCTION(getCopyOpacity) 
	#endif

	#ifndef GEODE_STATICS_getCurrentColor
		#define GEODE_STATICS_getCurrentColor
		GEODE_AS_STATIC_FUNCTION(getCurrentColor) 
	#endif

	#ifndef GEODE_STATICS_getCurrentOpacity
		#define GEODE_STATICS_getCurrentOpacity
		GEODE_AS_STATIC_FUNCTION(getCurrentOpacity) 
	#endif

	#ifndef GEODE_STATICS_getCustom
		#define GEODE_STATICS_getCustom
		GEODE_AS_STATIC_FUNCTION(getCustom) 
	#endif

	#ifndef GEODE_STATICS_getDeltaTime
		#define GEODE_STATICS_getDeltaTime
		GEODE_AS_STATIC_FUNCTION(getDeltaTime) 
	#endif

	#ifndef GEODE_STATICS_getDidProcess
		#define GEODE_STATICS_getDidProcess
		GEODE_AS_STATIC_FUNCTION(getDidProcess) 
	#endif

	#ifndef GEODE_STATICS_getDuration
		#define GEODE_STATICS_getDuration
		GEODE_AS_STATIC_FUNCTION(getDuration) 
	#endif

	#ifndef GEODE_STATICS_getFromColor
		#define GEODE_STATICS_getFromColor
		GEODE_AS_STATIC_FUNCTION(getFromColor) 
	#endif

	#ifndef GEODE_STATICS_getFromOpacity
		#define GEODE_STATICS_getFromOpacity
		GEODE_AS_STATIC_FUNCTION(getFromOpacity) 
	#endif

	#ifndef GEODE_STATICS_getHSVValue
		#define GEODE_STATICS_getHSVValue
		GEODE_AS_STATIC_FUNCTION(getHSVValue) 
	#endif

	#ifndef GEODE_STATICS_getIgnore
		#define GEODE_STATICS_getIgnore
		GEODE_AS_STATIC_FUNCTION(getIgnore) 
	#endif

	#ifndef GEODE_STATICS_getIgnoreCopyColor
		#define GEODE_STATICS_getIgnoreCopyColor
		GEODE_AS_STATIC_FUNCTION(getIgnoreCopyColor) 
	#endif

	#ifndef GEODE_STATICS_getIndex
		#define GEODE_STATICS_getIndex
		GEODE_AS_STATIC_FUNCTION(getIndex) 
	#endif

	#ifndef GEODE_STATICS_getInheritColorIndex
		#define GEODE_STATICS_getInheritColorIndex
		GEODE_AS_STATIC_FUNCTION(getInheritColorIndex) 
	#endif

	#ifndef GEODE_STATICS_getSaveString
		#define GEODE_STATICS_getSaveString
		GEODE_AS_STATIC_FUNCTION(getSaveString) 
	#endif

	#ifndef GEODE_STATICS_getToColor
		#define GEODE_STATICS_getToColor
		GEODE_AS_STATIC_FUNCTION(getToColor) 
	#endif

	#ifndef GEODE_STATICS_getToOpacity
		#define GEODE_STATICS_getToOpacity
		GEODE_AS_STATIC_FUNCTION(getToOpacity) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_resetAction
		#define GEODE_STATICS_resetAction
		GEODE_AS_STATIC_FUNCTION(resetAction) 
	#endif

	#ifndef GEODE_STATICS_setBlend
		#define GEODE_STATICS_setBlend
		GEODE_AS_STATIC_FUNCTION(setBlend) 
	#endif

	#ifndef GEODE_STATICS_setCopyOpacity
		#define GEODE_STATICS_setCopyOpacity
		GEODE_AS_STATIC_FUNCTION(setCopyOpacity) 
	#endif

	#ifndef GEODE_STATICS_setCurrentColor
		#define GEODE_STATICS_setCurrentColor
		GEODE_AS_STATIC_FUNCTION(setCurrentColor) 
	#endif

	#ifndef GEODE_STATICS_setCurrentOpacity
		#define GEODE_STATICS_setCurrentOpacity
		GEODE_AS_STATIC_FUNCTION(setCurrentOpacity) 
	#endif

	#ifndef GEODE_STATICS_setCustom
		#define GEODE_STATICS_setCustom
		GEODE_AS_STATIC_FUNCTION(setCustom) 
	#endif

	#ifndef GEODE_STATICS_setDeltaTime
		#define GEODE_STATICS_setDeltaTime
		GEODE_AS_STATIC_FUNCTION(setDeltaTime) 
	#endif

	#ifndef GEODE_STATICS_setDidProcess
		#define GEODE_STATICS_setDidProcess
		GEODE_AS_STATIC_FUNCTION(setDidProcess) 
	#endif

	#ifndef GEODE_STATICS_setDuration
		#define GEODE_STATICS_setDuration
		GEODE_AS_STATIC_FUNCTION(setDuration) 
	#endif

	#ifndef GEODE_STATICS_setFromColor
		#define GEODE_STATICS_setFromColor
		GEODE_AS_STATIC_FUNCTION(setFromColor) 
	#endif

	#ifndef GEODE_STATICS_setFromOpacity
		#define GEODE_STATICS_setFromOpacity
		GEODE_AS_STATIC_FUNCTION(setFromOpacity) 
	#endif

	#ifndef GEODE_STATICS_setHSVValue
		#define GEODE_STATICS_setHSVValue
		GEODE_AS_STATIC_FUNCTION(setHSVValue) 
	#endif

	#ifndef GEODE_STATICS_setIgnore
		#define GEODE_STATICS_setIgnore
		GEODE_AS_STATIC_FUNCTION(setIgnore) 
	#endif

	#ifndef GEODE_STATICS_setIgnoreCopyColor
		#define GEODE_STATICS_setIgnoreCopyColor
		GEODE_AS_STATIC_FUNCTION(setIgnoreCopyColor) 
	#endif

	#ifndef GEODE_STATICS_setIndex
		#define GEODE_STATICS_setIndex
		GEODE_AS_STATIC_FUNCTION(setIndex) 
	#endif

	#ifndef GEODE_STATICS_setInheritColorIndex
		#define GEODE_STATICS_setInheritColorIndex
		GEODE_AS_STATIC_FUNCTION(setInheritColorIndex) 
	#endif

	#ifndef GEODE_STATICS_setToColor
		#define GEODE_STATICS_setToColor
		GEODE_AS_STATIC_FUNCTION(setToColor) 
	#endif

	#ifndef GEODE_STATICS_setToOpacity
		#define GEODE_STATICS_setToOpacity
		GEODE_AS_STATIC_FUNCTION(setToOpacity) 
	#endif

	#ifndef GEODE_STATICS_setupFromDict
		#define GEODE_STATICS_setupFromDict
		GEODE_AS_STATIC_FUNCTION(setupFromDict) 
	#endif

	#ifndef GEODE_STATICS_setupFromString
		#define GEODE_STATICS_setupFromString
		GEODE_AS_STATIC_FUNCTION(setupFromString) 
	#endif

	#ifndef GEODE_STATICS_step
		#define GEODE_STATICS_step
		GEODE_AS_STATIC_FUNCTION(step) 
	#endif

	#ifndef GEODE_STATICS_updateCustomColor
		#define GEODE_STATICS_updateCustomColor
		GEODE_AS_STATIC_FUNCTION(updateCustomColor) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBlend
		#define GEODE_CONCEPT_CHECK_getBlend
		GEODE_CONCEPT_FUNCTION_CHECK(getBlend) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCopy
		#define GEODE_CONCEPT_CHECK_getCopy
		GEODE_CONCEPT_FUNCTION_CHECK(getCopy) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCopyOpacity
		#define GEODE_CONCEPT_CHECK_getCopyOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(getCopyOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCurrentColor
		#define GEODE_CONCEPT_CHECK_getCurrentColor
		GEODE_CONCEPT_FUNCTION_CHECK(getCurrentColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCurrentOpacity
		#define GEODE_CONCEPT_CHECK_getCurrentOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(getCurrentOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCustom
		#define GEODE_CONCEPT_CHECK_getCustom
		GEODE_CONCEPT_FUNCTION_CHECK(getCustom) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDeltaTime
		#define GEODE_CONCEPT_CHECK_getDeltaTime
		GEODE_CONCEPT_FUNCTION_CHECK(getDeltaTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDidProcess
		#define GEODE_CONCEPT_CHECK_getDidProcess
		GEODE_CONCEPT_FUNCTION_CHECK(getDidProcess) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDuration
		#define GEODE_CONCEPT_CHECK_getDuration
		GEODE_CONCEPT_FUNCTION_CHECK(getDuration) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFromColor
		#define GEODE_CONCEPT_CHECK_getFromColor
		GEODE_CONCEPT_FUNCTION_CHECK(getFromColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFromOpacity
		#define GEODE_CONCEPT_CHECK_getFromOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(getFromOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getHSVValue
		#define GEODE_CONCEPT_CHECK_getHSVValue
		GEODE_CONCEPT_FUNCTION_CHECK(getHSVValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIgnore
		#define GEODE_CONCEPT_CHECK_getIgnore
		GEODE_CONCEPT_FUNCTION_CHECK(getIgnore) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIgnoreCopyColor
		#define GEODE_CONCEPT_CHECK_getIgnoreCopyColor
		GEODE_CONCEPT_FUNCTION_CHECK(getIgnoreCopyColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIndex
		#define GEODE_CONCEPT_CHECK_getIndex
		GEODE_CONCEPT_FUNCTION_CHECK(getIndex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getInheritColorIndex
		#define GEODE_CONCEPT_CHECK_getInheritColorIndex
		GEODE_CONCEPT_FUNCTION_CHECK(getInheritColorIndex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSaveString
		#define GEODE_CONCEPT_CHECK_getSaveString
		GEODE_CONCEPT_FUNCTION_CHECK(getSaveString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getToColor
		#define GEODE_CONCEPT_CHECK_getToColor
		GEODE_CONCEPT_FUNCTION_CHECK(getToColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getToOpacity
		#define GEODE_CONCEPT_CHECK_getToOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(getToOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetAction
		#define GEODE_CONCEPT_CHECK_resetAction
		GEODE_CONCEPT_FUNCTION_CHECK(resetAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setBlend
		#define GEODE_CONCEPT_CHECK_setBlend
		GEODE_CONCEPT_FUNCTION_CHECK(setBlend) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCopyOpacity
		#define GEODE_CONCEPT_CHECK_setCopyOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(setCopyOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCurrentColor
		#define GEODE_CONCEPT_CHECK_setCurrentColor
		GEODE_CONCEPT_FUNCTION_CHECK(setCurrentColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCurrentOpacity
		#define GEODE_CONCEPT_CHECK_setCurrentOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(setCurrentOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCustom
		#define GEODE_CONCEPT_CHECK_setCustom
		GEODE_CONCEPT_FUNCTION_CHECK(setCustom) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDeltaTime
		#define GEODE_CONCEPT_CHECK_setDeltaTime
		GEODE_CONCEPT_FUNCTION_CHECK(setDeltaTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDidProcess
		#define GEODE_CONCEPT_CHECK_setDidProcess
		GEODE_CONCEPT_FUNCTION_CHECK(setDidProcess) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDuration
		#define GEODE_CONCEPT_CHECK_setDuration
		GEODE_CONCEPT_FUNCTION_CHECK(setDuration) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFromColor
		#define GEODE_CONCEPT_CHECK_setFromColor
		GEODE_CONCEPT_FUNCTION_CHECK(setFromColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFromOpacity
		#define GEODE_CONCEPT_CHECK_setFromOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(setFromOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setHSVValue
		#define GEODE_CONCEPT_CHECK_setHSVValue
		GEODE_CONCEPT_FUNCTION_CHECK(setHSVValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIgnore
		#define GEODE_CONCEPT_CHECK_setIgnore
		GEODE_CONCEPT_FUNCTION_CHECK(setIgnore) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIgnoreCopyColor
		#define GEODE_CONCEPT_CHECK_setIgnoreCopyColor
		GEODE_CONCEPT_FUNCTION_CHECK(setIgnoreCopyColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIndex
		#define GEODE_CONCEPT_CHECK_setIndex
		GEODE_CONCEPT_FUNCTION_CHECK(setIndex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setInheritColorIndex
		#define GEODE_CONCEPT_CHECK_setInheritColorIndex
		GEODE_CONCEPT_FUNCTION_CHECK(setInheritColorIndex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setToColor
		#define GEODE_CONCEPT_CHECK_setToColor
		GEODE_CONCEPT_FUNCTION_CHECK(setToColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setToOpacity
		#define GEODE_CONCEPT_CHECK_setToOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(setToOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupFromDict
		#define GEODE_CONCEPT_CHECK_setupFromDict
		GEODE_CONCEPT_FUNCTION_CHECK(setupFromDict) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupFromString
		#define GEODE_CONCEPT_CHECK_setupFromString
		GEODE_CONCEPT_FUNCTION_CHECK(setupFromString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_step
		#define GEODE_CONCEPT_CHECK_step
		GEODE_CONCEPT_FUNCTION_CHECK(step) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCustomColor
		#define GEODE_CONCEPT_CHECK_updateCustomColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateCustomColor) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ColorAction> : ModifyBase<ModifyDerive<Der, ColorAction>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ColorAction>>;
		using ModifyBase<ModifyDerive<Der, ColorAction>>::ModifyBase;
		using Base = ColorAction;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorAction, create, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorAction, create, cocos2d::ccColor3B, bool, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorAction, create, cocos2d::ccColor3B, cocos2d::ccColor3B, float, double, bool, int, float, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorAction, create, cocos2d::ccColor3B, cocos2d::ccColor3B, float, double, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorAction, getBlend, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorAction, getCopy, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorAction, getCopyOpacity, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorAction, getCurrentColor, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorAction, getCurrentOpacity, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorAction, getCustom, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorAction, getDeltaTime, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorAction, getDidProcess, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorAction, getDuration, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorAction, getFromColor, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorAction, getFromOpacity, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorAction, getHSVValue, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorAction, getIgnore, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorAction, getIgnoreCopyColor, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorAction, getIndex, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorAction, getInheritColorIndex, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorAction, getSaveString, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorAction, getToColor, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorAction, getToOpacity, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorAction, init, cocos2d::ccColor3B, cocos2d::ccColor3B, float, double, bool, int, float, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorAction, resetAction, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorAction, setBlend, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorAction, setCopyOpacity, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorAction, setCurrentColor, cocos2d::ccColor3B)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorAction, setCurrentOpacity, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorAction, setCustom, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorAction, setDeltaTime, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorAction, setDidProcess, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorAction, setDuration, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorAction, setFromColor, cocos2d::ccColor3B)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorAction, setFromOpacity, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorAction, setHSVValue, cocos2d::ccHSVValue)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorAction, setIgnore, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorAction, setIgnoreCopyColor, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorAction, setIndex, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorAction, setInheritColorIndex, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorAction, setToColor, cocos2d::ccColor3B)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorAction, setToOpacity, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorAction, setupFromDict, cocos2d::CCDictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorAction, setupFromString, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorAction, step, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorAction, updateCustomColor, cocos2d::ccColor3B, cocos2d::ccColor3B)
		}
	};
}
