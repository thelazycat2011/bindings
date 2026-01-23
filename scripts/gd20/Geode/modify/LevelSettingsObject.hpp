#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelSettingsObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getBGIdx
		#define GEODE_STATICS_getBGIdx
		GEODE_AS_STATIC_FUNCTION(getBGIdx) 
	#endif

	#ifndef GEODE_STATICS_getColorManager
		#define GEODE_STATICS_getColorManager
		GEODE_AS_STATIC_FUNCTION(getColorManager) 
	#endif

	#ifndef GEODE_STATICS_getFadeIn
		#define GEODE_STATICS_getFadeIn
		GEODE_AS_STATIC_FUNCTION(getFadeIn) 
	#endif

	#ifndef GEODE_STATICS_getFadeOut
		#define GEODE_STATICS_getFadeOut
		GEODE_AS_STATIC_FUNCTION(getFadeOut) 
	#endif

	#ifndef GEODE_STATICS_getFontIdx
		#define GEODE_STATICS_getFontIdx
		GEODE_AS_STATIC_FUNCTION(getFontIdx) 
	#endif

	#ifndef GEODE_STATICS_getGIdx
		#define GEODE_STATICS_getGIdx
		GEODE_AS_STATIC_FUNCTION(getGIdx) 
	#endif

	#ifndef GEODE_STATICS_getGLineIdx
		#define GEODE_STATICS_getGLineIdx
		GEODE_AS_STATIC_FUNCTION(getGLineIdx) 
	#endif

	#ifndef GEODE_STATICS_getGravityFlipped
		#define GEODE_STATICS_getGravityFlipped
		GEODE_AS_STATIC_FUNCTION(getGravityFlipped) 
	#endif

	#ifndef GEODE_STATICS_getIsLimited
		#define GEODE_STATICS_getIsLimited
		GEODE_AS_STATIC_FUNCTION(getIsLimited) 
	#endif

	#ifndef GEODE_STATICS_getLastColorPage
		#define GEODE_STATICS_getLastColorPage
		GEODE_AS_STATIC_FUNCTION(getLastColorPage) 
	#endif

	#ifndef GEODE_STATICS_getLevel
		#define GEODE_STATICS_getLevel
		GEODE_AS_STATIC_FUNCTION(getLevel) 
	#endif

	#ifndef GEODE_STATICS_getSaveString
		#define GEODE_STATICS_getSaveString
		GEODE_AS_STATIC_FUNCTION(getSaveString) 
	#endif

	#ifndef GEODE_STATICS_getSongChanged
		#define GEODE_STATICS_getSongChanged
		GEODE_AS_STATIC_FUNCTION(getSongChanged) 
	#endif

	#ifndef GEODE_STATICS_getSongOffset
		#define GEODE_STATICS_getSongOffset
		GEODE_AS_STATIC_FUNCTION(getSongOffset) 
	#endif

	#ifndef GEODE_STATICS_getSongString
		#define GEODE_STATICS_getSongString
		GEODE_AS_STATIC_FUNCTION(getSongString) 
	#endif

	#ifndef GEODE_STATICS_getStartDualMode
		#define GEODE_STATICS_getStartDualMode
		GEODE_AS_STATIC_FUNCTION(getStartDualMode) 
	#endif

	#ifndef GEODE_STATICS_getStartMiniMode
		#define GEODE_STATICS_getStartMiniMode
		GEODE_AS_STATIC_FUNCTION(getStartMiniMode) 
	#endif

	#ifndef GEODE_STATICS_getStartMode
		#define GEODE_STATICS_getStartMode
		GEODE_AS_STATIC_FUNCTION(getStartMode) 
	#endif

	#ifndef GEODE_STATICS_getStartSpeed
		#define GEODE_STATICS_getStartSpeed
		GEODE_AS_STATIC_FUNCTION(getStartSpeed) 
	#endif

	#ifndef GEODE_STATICS_getTwoPlayerMode
		#define GEODE_STATICS_getTwoPlayerMode
		GEODE_AS_STATIC_FUNCTION(getTwoPlayerMode) 
	#endif

	#ifndef GEODE_STATICS_objectFromDict
		#define GEODE_STATICS_objectFromDict
		GEODE_AS_STATIC_FUNCTION(objectFromDict) 
	#endif

	#ifndef GEODE_STATICS_objectFromString
		#define GEODE_STATICS_objectFromString
		GEODE_AS_STATIC_FUNCTION(objectFromString) 
	#endif

	#ifndef GEODE_STATICS_offsetMusic
		#define GEODE_STATICS_offsetMusic
		GEODE_AS_STATIC_FUNCTION(offsetMusic) 
	#endif

	#ifndef GEODE_STATICS_setBGIdx
		#define GEODE_STATICS_setBGIdx
		GEODE_AS_STATIC_FUNCTION(setBGIdx) 
	#endif

	#ifndef GEODE_STATICS_setColorManager
		#define GEODE_STATICS_setColorManager
		GEODE_AS_STATIC_FUNCTION(setColorManager) 
	#endif

	#ifndef GEODE_STATICS_setFadeIn
		#define GEODE_STATICS_setFadeIn
		GEODE_AS_STATIC_FUNCTION(setFadeIn) 
	#endif

	#ifndef GEODE_STATICS_setFadeOut
		#define GEODE_STATICS_setFadeOut
		GEODE_AS_STATIC_FUNCTION(setFadeOut) 
	#endif

	#ifndef GEODE_STATICS_setFontIdx
		#define GEODE_STATICS_setFontIdx
		GEODE_AS_STATIC_FUNCTION(setFontIdx) 
	#endif

	#ifndef GEODE_STATICS_setGIdx
		#define GEODE_STATICS_setGIdx
		GEODE_AS_STATIC_FUNCTION(setGIdx) 
	#endif

	#ifndef GEODE_STATICS_setGLineIdx
		#define GEODE_STATICS_setGLineIdx
		GEODE_AS_STATIC_FUNCTION(setGLineIdx) 
	#endif

	#ifndef GEODE_STATICS_setGravityFlipped
		#define GEODE_STATICS_setGravityFlipped
		GEODE_AS_STATIC_FUNCTION(setGravityFlipped) 
	#endif

	#ifndef GEODE_STATICS_setIsLimited
		#define GEODE_STATICS_setIsLimited
		GEODE_AS_STATIC_FUNCTION(setIsLimited) 
	#endif

	#ifndef GEODE_STATICS_setLastColorPage
		#define GEODE_STATICS_setLastColorPage
		GEODE_AS_STATIC_FUNCTION(setLastColorPage) 
	#endif

	#ifndef GEODE_STATICS_setLevel
		#define GEODE_STATICS_setLevel
		GEODE_AS_STATIC_FUNCTION(setLevel) 
	#endif

	#ifndef GEODE_STATICS_setSongChanged
		#define GEODE_STATICS_setSongChanged
		GEODE_AS_STATIC_FUNCTION(setSongChanged) 
	#endif

	#ifndef GEODE_STATICS_setSongOffset
		#define GEODE_STATICS_setSongOffset
		GEODE_AS_STATIC_FUNCTION(setSongOffset) 
	#endif

	#ifndef GEODE_STATICS_setSongString
		#define GEODE_STATICS_setSongString
		GEODE_AS_STATIC_FUNCTION(setSongString) 
	#endif

	#ifndef GEODE_STATICS_setStartDualMode
		#define GEODE_STATICS_setStartDualMode
		GEODE_AS_STATIC_FUNCTION(setStartDualMode) 
	#endif

	#ifndef GEODE_STATICS_setStartMiniMode
		#define GEODE_STATICS_setStartMiniMode
		GEODE_AS_STATIC_FUNCTION(setStartMiniMode) 
	#endif

	#ifndef GEODE_STATICS_setStartMode
		#define GEODE_STATICS_setStartMode
		GEODE_AS_STATIC_FUNCTION(setStartMode) 
	#endif

	#ifndef GEODE_STATICS_setStartSpeed
		#define GEODE_STATICS_setStartSpeed
		GEODE_AS_STATIC_FUNCTION(setStartSpeed) 
	#endif

	#ifndef GEODE_STATICS_setTwoPlayerMode
		#define GEODE_STATICS_setTwoPlayerMode
		GEODE_AS_STATIC_FUNCTION(setTwoPlayerMode) 
	#endif

	#ifndef GEODE_STATICS_setupColorsFromLegacyMode
		#define GEODE_STATICS_setupColorsFromLegacyMode
		GEODE_AS_STATIC_FUNCTION(setupColorsFromLegacyMode) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBGIdx
		#define GEODE_CONCEPT_CHECK_getBGIdx
		GEODE_CONCEPT_FUNCTION_CHECK(getBGIdx) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getColorManager
		#define GEODE_CONCEPT_CHECK_getColorManager
		GEODE_CONCEPT_FUNCTION_CHECK(getColorManager) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFadeIn
		#define GEODE_CONCEPT_CHECK_getFadeIn
		GEODE_CONCEPT_FUNCTION_CHECK(getFadeIn) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFadeOut
		#define GEODE_CONCEPT_CHECK_getFadeOut
		GEODE_CONCEPT_FUNCTION_CHECK(getFadeOut) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFontIdx
		#define GEODE_CONCEPT_CHECK_getFontIdx
		GEODE_CONCEPT_FUNCTION_CHECK(getFontIdx) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGIdx
		#define GEODE_CONCEPT_CHECK_getGIdx
		GEODE_CONCEPT_FUNCTION_CHECK(getGIdx) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGLineIdx
		#define GEODE_CONCEPT_CHECK_getGLineIdx
		GEODE_CONCEPT_FUNCTION_CHECK(getGLineIdx) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGravityFlipped
		#define GEODE_CONCEPT_CHECK_getGravityFlipped
		GEODE_CONCEPT_FUNCTION_CHECK(getGravityFlipped) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIsLimited
		#define GEODE_CONCEPT_CHECK_getIsLimited
		GEODE_CONCEPT_FUNCTION_CHECK(getIsLimited) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLastColorPage
		#define GEODE_CONCEPT_CHECK_getLastColorPage
		GEODE_CONCEPT_FUNCTION_CHECK(getLastColorPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLevel
		#define GEODE_CONCEPT_CHECK_getLevel
		GEODE_CONCEPT_FUNCTION_CHECK(getLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSaveString
		#define GEODE_CONCEPT_CHECK_getSaveString
		GEODE_CONCEPT_FUNCTION_CHECK(getSaveString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSongChanged
		#define GEODE_CONCEPT_CHECK_getSongChanged
		GEODE_CONCEPT_FUNCTION_CHECK(getSongChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSongOffset
		#define GEODE_CONCEPT_CHECK_getSongOffset
		GEODE_CONCEPT_FUNCTION_CHECK(getSongOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSongString
		#define GEODE_CONCEPT_CHECK_getSongString
		GEODE_CONCEPT_FUNCTION_CHECK(getSongString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStartDualMode
		#define GEODE_CONCEPT_CHECK_getStartDualMode
		GEODE_CONCEPT_FUNCTION_CHECK(getStartDualMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStartMiniMode
		#define GEODE_CONCEPT_CHECK_getStartMiniMode
		GEODE_CONCEPT_FUNCTION_CHECK(getStartMiniMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStartMode
		#define GEODE_CONCEPT_CHECK_getStartMode
		GEODE_CONCEPT_FUNCTION_CHECK(getStartMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStartSpeed
		#define GEODE_CONCEPT_CHECK_getStartSpeed
		GEODE_CONCEPT_FUNCTION_CHECK(getStartSpeed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTwoPlayerMode
		#define GEODE_CONCEPT_CHECK_getTwoPlayerMode
		GEODE_CONCEPT_FUNCTION_CHECK(getTwoPlayerMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_objectFromDict
		#define GEODE_CONCEPT_CHECK_objectFromDict
		GEODE_CONCEPT_FUNCTION_CHECK(objectFromDict) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_objectFromString
		#define GEODE_CONCEPT_CHECK_objectFromString
		GEODE_CONCEPT_FUNCTION_CHECK(objectFromString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_offsetMusic
		#define GEODE_CONCEPT_CHECK_offsetMusic
		GEODE_CONCEPT_FUNCTION_CHECK(offsetMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setBGIdx
		#define GEODE_CONCEPT_CHECK_setBGIdx
		GEODE_CONCEPT_FUNCTION_CHECK(setBGIdx) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setColorManager
		#define GEODE_CONCEPT_CHECK_setColorManager
		GEODE_CONCEPT_FUNCTION_CHECK(setColorManager) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFadeIn
		#define GEODE_CONCEPT_CHECK_setFadeIn
		GEODE_CONCEPT_FUNCTION_CHECK(setFadeIn) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFadeOut
		#define GEODE_CONCEPT_CHECK_setFadeOut
		GEODE_CONCEPT_FUNCTION_CHECK(setFadeOut) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFontIdx
		#define GEODE_CONCEPT_CHECK_setFontIdx
		GEODE_CONCEPT_FUNCTION_CHECK(setFontIdx) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setGIdx
		#define GEODE_CONCEPT_CHECK_setGIdx
		GEODE_CONCEPT_FUNCTION_CHECK(setGIdx) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setGLineIdx
		#define GEODE_CONCEPT_CHECK_setGLineIdx
		GEODE_CONCEPT_FUNCTION_CHECK(setGLineIdx) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setGravityFlipped
		#define GEODE_CONCEPT_CHECK_setGravityFlipped
		GEODE_CONCEPT_FUNCTION_CHECK(setGravityFlipped) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIsLimited
		#define GEODE_CONCEPT_CHECK_setIsLimited
		GEODE_CONCEPT_FUNCTION_CHECK(setIsLimited) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLastColorPage
		#define GEODE_CONCEPT_CHECK_setLastColorPage
		GEODE_CONCEPT_FUNCTION_CHECK(setLastColorPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLevel
		#define GEODE_CONCEPT_CHECK_setLevel
		GEODE_CONCEPT_FUNCTION_CHECK(setLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSongChanged
		#define GEODE_CONCEPT_CHECK_setSongChanged
		GEODE_CONCEPT_FUNCTION_CHECK(setSongChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSongOffset
		#define GEODE_CONCEPT_CHECK_setSongOffset
		GEODE_CONCEPT_FUNCTION_CHECK(setSongOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSongString
		#define GEODE_CONCEPT_CHECK_setSongString
		GEODE_CONCEPT_FUNCTION_CHECK(setSongString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStartDualMode
		#define GEODE_CONCEPT_CHECK_setStartDualMode
		GEODE_CONCEPT_FUNCTION_CHECK(setStartDualMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStartMiniMode
		#define GEODE_CONCEPT_CHECK_setStartMiniMode
		GEODE_CONCEPT_FUNCTION_CHECK(setStartMiniMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStartMode
		#define GEODE_CONCEPT_CHECK_setStartMode
		GEODE_CONCEPT_FUNCTION_CHECK(setStartMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStartSpeed
		#define GEODE_CONCEPT_CHECK_setStartSpeed
		GEODE_CONCEPT_FUNCTION_CHECK(setStartSpeed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTwoPlayerMode
		#define GEODE_CONCEPT_CHECK_setTwoPlayerMode
		GEODE_CONCEPT_FUNCTION_CHECK(setTwoPlayerMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupColorsFromLegacyMode
		#define GEODE_CONCEPT_CHECK_setupColorsFromLegacyMode
		GEODE_CONCEPT_FUNCTION_CHECK(setupColorsFromLegacyMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelSettingsObject> : ModifyBase<ModifyDerive<Der, LevelSettingsObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelSettingsObject>>;
		using ModifyBase<ModifyDerive<Der, LevelSettingsObject>>::ModifyBase;
		using Base = LevelSettingsObject;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsObject, create, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsObject, getBGIdx, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsObject, getColorManager, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsObject, getFadeIn, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsObject, getFadeOut, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsObject, getFontIdx, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsObject, getGIdx, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsObject, getGLineIdx, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsObject, getGravityFlipped, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsObject, getIsLimited, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsObject, getLastColorPage, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsObject, getLevel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsObject, getSaveString, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsObject, getSongChanged, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsObject, getSongOffset, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsObject, getSongString, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsObject, getStartDualMode, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsObject, getStartMiniMode, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsObject, getStartMode, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsObject, getStartSpeed, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsObject, getTwoPlayerMode, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsObject, objectFromDict, cocos2d::CCDictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsObject, objectFromString, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsObject, offsetMusic, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsObject, setBGIdx, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsObject, setColorManager, GJEffectManager*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsObject, setFadeIn, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsObject, setFadeOut, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsObject, setFontIdx, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsObject, setGIdx, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsObject, setGLineIdx, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsObject, setGravityFlipped, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsObject, setIsLimited, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsObject, setLastColorPage, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsObject, setLevel, GJGameLevel*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsObject, setSongChanged, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsObject, setSongOffset, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsObject, setSongString, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsObject, setStartDualMode, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsObject, setStartMiniMode, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsObject, setStartMode, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsObject, setStartSpeed, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsObject, setTwoPlayerMode, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsObject, setupColorsFromLegacyMode, cocos2d::CCDictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsObject, init, )
		}
	};
}
