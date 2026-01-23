#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SpeedObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getSpeedMod
		#define GEODE_STATICS_getSpeedMod
		GEODE_AS_STATIC_FUNCTION(getSpeedMod) 
	#endif

	#ifndef GEODE_STATICS_getXPos
		#define GEODE_STATICS_getXPos
		GEODE_AS_STATIC_FUNCTION(getXPos) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setSource
		#define GEODE_STATICS_setSource
		GEODE_AS_STATIC_FUNCTION(setSource) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSpeedMod
		#define GEODE_CONCEPT_CHECK_getSpeedMod
		GEODE_CONCEPT_FUNCTION_CHECK(getSpeedMod) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getXPos
		#define GEODE_CONCEPT_CHECK_getXPos
		GEODE_CONCEPT_FUNCTION_CHECK(getXPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSource
		#define GEODE_CONCEPT_CHECK_setSource
		GEODE_CONCEPT_FUNCTION_CHECK(setSource) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SpeedObject> : ModifyBase<ModifyDerive<Der, SpeedObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SpeedObject>>;
		using ModifyBase<ModifyDerive<Der, SpeedObject>>::ModifyBase;
		using Base = SpeedObject;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SpeedObject, create, int, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SpeedObject, getSpeedMod, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SpeedObject, getXPos, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SpeedObject, init, int, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SpeedObject, setSource, GameObject*)
		}
	};
}
