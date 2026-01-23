#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SpawnTriggerAction.hpp>
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

	#ifndef GEODE_STATICS_getDelayTime
		#define GEODE_STATICS_getDelayTime
		GEODE_AS_STATIC_FUNCTION(getDelayTime) 
	#endif

	#ifndef GEODE_STATICS_getDeltaTime
		#define GEODE_STATICS_getDeltaTime
		GEODE_AS_STATIC_FUNCTION(getDeltaTime) 
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

	#ifndef GEODE_STATICS_isFinished
		#define GEODE_STATICS_isFinished
		GEODE_AS_STATIC_FUNCTION(isFinished) 
	#endif

	#ifndef GEODE_STATICS_setDelayTime
		#define GEODE_STATICS_setDelayTime
		GEODE_AS_STATIC_FUNCTION(setDelayTime) 
	#endif

	#ifndef GEODE_STATICS_setDeltaTime
		#define GEODE_STATICS_setDeltaTime
		GEODE_AS_STATIC_FUNCTION(setDeltaTime) 
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

	#ifndef GEODE_CONCEPT_CHECK_getDelayTime
		#define GEODE_CONCEPT_CHECK_getDelayTime
		GEODE_CONCEPT_FUNCTION_CHECK(getDelayTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDeltaTime
		#define GEODE_CONCEPT_CHECK_getDeltaTime
		GEODE_CONCEPT_FUNCTION_CHECK(getDeltaTime) 
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

	#ifndef GEODE_CONCEPT_CHECK_isFinished
		#define GEODE_CONCEPT_CHECK_isFinished
		GEODE_CONCEPT_FUNCTION_CHECK(isFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDelayTime
		#define GEODE_CONCEPT_CHECK_setDelayTime
		GEODE_CONCEPT_FUNCTION_CHECK(setDelayTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDeltaTime
		#define GEODE_CONCEPT_CHECK_setDeltaTime
		GEODE_CONCEPT_FUNCTION_CHECK(setDeltaTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_step
		#define GEODE_CONCEPT_CHECK_step
		GEODE_CONCEPT_FUNCTION_CHECK(step) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SpawnTriggerAction> : ModifyBase<ModifyDerive<Der, SpawnTriggerAction>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SpawnTriggerAction>>;
		using ModifyBase<ModifyDerive<Der, SpawnTriggerAction>>::ModifyBase;
		using Base = SpawnTriggerAction;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SpawnTriggerAction, create, float, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SpawnTriggerAction, createFromString, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SpawnTriggerAction, getDelayTime, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SpawnTriggerAction, getDeltaTime, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SpawnTriggerAction, getSaveString, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SpawnTriggerAction, getTargetID, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SpawnTriggerAction, init, float, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SpawnTriggerAction, isFinished, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SpawnTriggerAction, setDelayTime, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SpawnTriggerAction, setDeltaTime, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SpawnTriggerAction, step, float)
		}
	};
}
