#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SpriteDescription.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_createDescription
		#define GEODE_STATICS_createDescription
		GEODE_AS_STATIC_FUNCTION(createDescription) 
	#endif

	#ifndef GEODE_STATICS_getTransformValues
		#define GEODE_STATICS_getTransformValues
		GEODE_AS_STATIC_FUNCTION(getTransformValues) 
	#endif

	#ifndef GEODE_STATICS_initDescription
		#define GEODE_STATICS_initDescription
		GEODE_AS_STATIC_FUNCTION(initDescription) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_createDescription
		#define GEODE_CONCEPT_CHECK_createDescription
		GEODE_CONCEPT_FUNCTION_CHECK(createDescription) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTransformValues
		#define GEODE_CONCEPT_CHECK_getTransformValues
		GEODE_CONCEPT_FUNCTION_CHECK(getTransformValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initDescription
		#define GEODE_CONCEPT_CHECK_initDescription
		GEODE_CONCEPT_FUNCTION_CHECK(initDescription) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SpriteDescription> : ModifyBase<ModifyDerive<Der, SpriteDescription>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SpriteDescription>>;
		using ModifyBase<ModifyDerive<Der, SpriteDescription>>::ModifyBase;
		using Base = SpriteDescription;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SpriteDescription, createDescription, cocos2d::CCDictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SpriteDescription, createDescription, DS_Dictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SpriteDescription, getTransformValues, frameValues*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SpriteDescription, initDescription, cocos2d::CCDictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SpriteDescription, initDescription, DS_Dictionary*)
		}
	};
}
