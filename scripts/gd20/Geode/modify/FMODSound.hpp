#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/FMODSound.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getSound
		#define GEODE_STATICS_getSound
		GEODE_AS_STATIC_FUNCTION(getSound) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setSound
		#define GEODE_STATICS_setSound
		GEODE_AS_STATIC_FUNCTION(setSound) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSound
		#define GEODE_CONCEPT_CHECK_getSound
		GEODE_CONCEPT_FUNCTION_CHECK(getSound) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSound
		#define GEODE_CONCEPT_CHECK_setSound
		GEODE_CONCEPT_FUNCTION_CHECK(setSound) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, FMODSound> : ModifyBase<ModifyDerive<Der, FMODSound>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FMODSound>>;
		using ModifyBase<ModifyDerive<Der, FMODSound>>::ModifyBase;
		using Base = FMODSound;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FMODSound, create, FMOD::Sound*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FMODSound, getSound, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FMODSound, init, FMOD::Sound*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FMODSound, setSound, FMOD::Sound*)
		}
	};
}
