#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/PulseEffectAction.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createFromString
		#define GEODE_STATICS_createFromString
		GEODE_AS_STATIC_FUNCTION(createFromString) 
	#endif

	#ifndef GEODE_STATICS_getCopyColorIdx
		#define GEODE_STATICS_getCopyColorIdx
		GEODE_AS_STATIC_FUNCTION(getCopyColorIdx) 
	#endif

	#ifndef GEODE_STATICS_getDeltaTime
		#define GEODE_STATICS_getDeltaTime
		GEODE_AS_STATIC_FUNCTION(getDeltaTime) 
	#endif

	#ifndef GEODE_STATICS_getGroupMainOnly
		#define GEODE_STATICS_getGroupMainOnly
		GEODE_AS_STATIC_FUNCTION(getGroupMainOnly) 
	#endif

	#ifndef GEODE_STATICS_getGroupSecondaryOnly
		#define GEODE_STATICS_getGroupSecondaryOnly
		GEODE_AS_STATIC_FUNCTION(getGroupSecondaryOnly) 
	#endif

	#ifndef GEODE_STATICS_getHSVValue
		#define GEODE_STATICS_getHSVValue
		GEODE_AS_STATIC_FUNCTION(getHSVValue) 
	#endif

	#ifndef GEODE_STATICS_getSaveString
		#define GEODE_STATICS_getSaveString
		GEODE_AS_STATIC_FUNCTION(getSaveString) 
	#endif

	#ifndef GEODE_STATICS_getTargetColor
		#define GEODE_STATICS_getTargetColor
		GEODE_AS_STATIC_FUNCTION(getTargetColor) 
	#endif

	#ifndef GEODE_STATICS_getTargetID
		#define GEODE_STATICS_getTargetID
		GEODE_AS_STATIC_FUNCTION(getTargetID) 
	#endif

	#ifndef GEODE_STATICS_getType
		#define GEODE_STATICS_getType
		GEODE_AS_STATIC_FUNCTION(getType) 
	#endif

	#ifndef GEODE_STATICS_getValue
		#define GEODE_STATICS_getValue
		GEODE_AS_STATIC_FUNCTION(getValue) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_isFinished
		#define GEODE_STATICS_isFinished
		GEODE_AS_STATIC_FUNCTION(isFinished) 
	#endif

	#ifndef GEODE_STATICS_setDeltaTime
		#define GEODE_STATICS_setDeltaTime
		GEODE_AS_STATIC_FUNCTION(setDeltaTime) 
	#endif

	#ifndef GEODE_STATICS_step
		#define GEODE_STATICS_step
		GEODE_AS_STATIC_FUNCTION(step) 
	#endif

	#ifndef GEODE_STATICS_valueForDelta
		#define GEODE_STATICS_valueForDelta
		GEODE_AS_STATIC_FUNCTION(valueForDelta) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createFromString
		#define GEODE_CONCEPT_CHECK_createFromString
		GEODE_CONCEPT_FUNCTION_CHECK(createFromString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCopyColorIdx
		#define GEODE_CONCEPT_CHECK_getCopyColorIdx
		GEODE_CONCEPT_FUNCTION_CHECK(getCopyColorIdx) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDeltaTime
		#define GEODE_CONCEPT_CHECK_getDeltaTime
		GEODE_CONCEPT_FUNCTION_CHECK(getDeltaTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGroupMainOnly
		#define GEODE_CONCEPT_CHECK_getGroupMainOnly
		GEODE_CONCEPT_FUNCTION_CHECK(getGroupMainOnly) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGroupSecondaryOnly
		#define GEODE_CONCEPT_CHECK_getGroupSecondaryOnly
		GEODE_CONCEPT_FUNCTION_CHECK(getGroupSecondaryOnly) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getHSVValue
		#define GEODE_CONCEPT_CHECK_getHSVValue
		GEODE_CONCEPT_FUNCTION_CHECK(getHSVValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSaveString
		#define GEODE_CONCEPT_CHECK_getSaveString
		GEODE_CONCEPT_FUNCTION_CHECK(getSaveString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTargetColor
		#define GEODE_CONCEPT_CHECK_getTargetColor
		GEODE_CONCEPT_FUNCTION_CHECK(getTargetColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTargetID
		#define GEODE_CONCEPT_CHECK_getTargetID
		GEODE_CONCEPT_FUNCTION_CHECK(getTargetID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getType
		#define GEODE_CONCEPT_CHECK_getType
		GEODE_CONCEPT_FUNCTION_CHECK(getType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getValue
		#define GEODE_CONCEPT_CHECK_getValue
		GEODE_CONCEPT_FUNCTION_CHECK(getValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isFinished
		#define GEODE_CONCEPT_CHECK_isFinished
		GEODE_CONCEPT_FUNCTION_CHECK(isFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDeltaTime
		#define GEODE_CONCEPT_CHECK_setDeltaTime
		GEODE_CONCEPT_FUNCTION_CHECK(setDeltaTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_step
		#define GEODE_CONCEPT_CHECK_step
		GEODE_CONCEPT_FUNCTION_CHECK(step) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_valueForDelta
		#define GEODE_CONCEPT_CHECK_valueForDelta
		GEODE_CONCEPT_FUNCTION_CHECK(valueForDelta) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, PulseEffectAction> : ModifyBase<ModifyDerive<Der, PulseEffectAction>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, PulseEffectAction>>;
		using ModifyBase<ModifyDerive<Der, PulseEffectAction>>::ModifyBase;
		using Base = PulseEffectAction;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PulseEffectAction, create, float, float, float, PulseEffectType, int, cocos2d::ccColor3B, cocos2d::ccHSVValue, int, bool, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PulseEffectAction, createFromString, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PulseEffectAction, getCopyColorIdx, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PulseEffectAction, getDeltaTime, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PulseEffectAction, getGroupMainOnly, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PulseEffectAction, getGroupSecondaryOnly, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PulseEffectAction, getHSVValue, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PulseEffectAction, getSaveString, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PulseEffectAction, getTargetColor, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PulseEffectAction, getTargetID, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PulseEffectAction, getType, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PulseEffectAction, getValue, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PulseEffectAction, init, float, float, float, PulseEffectType, int, cocos2d::ccColor3B, cocos2d::ccHSVValue, int, bool, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PulseEffectAction, isFinished, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PulseEffectAction, setDeltaTime, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PulseEffectAction, step, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PulseEffectAction, valueForDelta, float, float, float, float)
		}
	};
}
