#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJScaleControlDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_scaleChanged
		#define GEODE_STATICS_scaleChanged
		GEODE_AS_STATIC_FUNCTION(scaleChanged) 
	#endif

	#ifndef GEODE_STATICS_scaleChangeBegin
		#define GEODE_STATICS_scaleChangeBegin
		GEODE_AS_STATIC_FUNCTION(scaleChangeBegin) 
	#endif

	#ifndef GEODE_STATICS_scaleChangeEnded
		#define GEODE_STATICS_scaleChangeEnded
		GEODE_AS_STATIC_FUNCTION(scaleChangeEnded) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_scaleChanged
		#define GEODE_CONCEPT_CHECK_scaleChanged
		GEODE_CONCEPT_FUNCTION_CHECK(scaleChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scaleChangeBegin
		#define GEODE_CONCEPT_CHECK_scaleChangeBegin
		GEODE_CONCEPT_FUNCTION_CHECK(scaleChangeBegin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scaleChangeEnded
		#define GEODE_CONCEPT_CHECK_scaleChangeEnded
		GEODE_CONCEPT_FUNCTION_CHECK(scaleChangeEnded) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJScaleControlDelegate> : ModifyBase<ModifyDerive<Der, GJScaleControlDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJScaleControlDelegate>>;
		using ModifyBase<ModifyDerive<Der, GJScaleControlDelegate>>::ModifyBase;
		using Base = GJScaleControlDelegate;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJScaleControlDelegate, scaleChanged, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJScaleControlDelegate, scaleChangeBegin, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJScaleControlDelegate, scaleChangeEnded, )
		}
	};
}
