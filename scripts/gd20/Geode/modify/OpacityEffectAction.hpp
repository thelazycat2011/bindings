#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/OpacityEffectAction.hpp>
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

	#ifndef GEODE_STATICS_getDeltaTime
		#define GEODE_STATICS_getDeltaTime
		GEODE_AS_STATIC_FUNCTION(getDeltaTime) 
	#endif

	#ifndef GEODE_STATICS_getOpacity
		#define GEODE_STATICS_getOpacity
		GEODE_AS_STATIC_FUNCTION(getOpacity) 
	#endif

	#ifndef GEODE_STATICS_getSaveString
		#define GEODE_STATICS_getSaveString
		GEODE_AS_STATIC_FUNCTION(getSaveString) 
	#endif

	#ifndef GEODE_STATICS_getTargetID
		#define GEODE_STATICS_getTargetID
		GEODE_AS_STATIC_FUNCTION(getTargetID) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setDeltaTime
		#define GEODE_STATICS_setDeltaTime
		GEODE_AS_STATIC_FUNCTION(setDeltaTime) 
	#endif

	#ifndef GEODE_STATICS_setTargetID
		#define GEODE_STATICS_setTargetID
		GEODE_AS_STATIC_FUNCTION(setTargetID) 
	#endif

	#ifndef GEODE_STATICS_step
		#define GEODE_STATICS_step
		GEODE_AS_STATIC_FUNCTION(step) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createFromString
		#define GEODE_CONCEPT_CHECK_createFromString
		GEODE_CONCEPT_FUNCTION_CHECK(createFromString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDeltaTime
		#define GEODE_CONCEPT_CHECK_getDeltaTime
		GEODE_CONCEPT_FUNCTION_CHECK(getDeltaTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOpacity
		#define GEODE_CONCEPT_CHECK_getOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(getOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSaveString
		#define GEODE_CONCEPT_CHECK_getSaveString
		GEODE_CONCEPT_FUNCTION_CHECK(getSaveString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTargetID
		#define GEODE_CONCEPT_CHECK_getTargetID
		GEODE_CONCEPT_FUNCTION_CHECK(getTargetID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDeltaTime
		#define GEODE_CONCEPT_CHECK_setDeltaTime
		GEODE_CONCEPT_FUNCTION_CHECK(setDeltaTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTargetID
		#define GEODE_CONCEPT_CHECK_setTargetID
		GEODE_CONCEPT_FUNCTION_CHECK(setTargetID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_step
		#define GEODE_CONCEPT_CHECK_step
		GEODE_CONCEPT_FUNCTION_CHECK(step) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, OpacityEffectAction> : ModifyBase<ModifyDerive<Der, OpacityEffectAction>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, OpacityEffectAction>>;
		using ModifyBase<ModifyDerive<Der, OpacityEffectAction>>::ModifyBase;
		using Base = OpacityEffectAction;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(OpacityEffectAction, create, float, float, float, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(OpacityEffectAction, createFromString, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(OpacityEffectAction, getDeltaTime, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(OpacityEffectAction, getOpacity, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(OpacityEffectAction, getSaveString, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(OpacityEffectAction, getTargetID, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(OpacityEffectAction, init, float, float, float, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(OpacityEffectAction, setDeltaTime, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(OpacityEffectAction, setTargetID, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(OpacityEffectAction, step, float)
		}
	};
}
