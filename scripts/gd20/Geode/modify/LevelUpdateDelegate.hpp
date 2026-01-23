#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelUpdateDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_levelUpdateFinished
		#define GEODE_STATICS_levelUpdateFinished
		GEODE_AS_STATIC_FUNCTION(levelUpdateFinished) 
	#endif

	#ifndef GEODE_STATICS_levelUpdateFailed
		#define GEODE_STATICS_levelUpdateFailed
		GEODE_AS_STATIC_FUNCTION(levelUpdateFailed) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_levelUpdateFinished
		#define GEODE_CONCEPT_CHECK_levelUpdateFinished
		GEODE_CONCEPT_FUNCTION_CHECK(levelUpdateFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_levelUpdateFailed
		#define GEODE_CONCEPT_CHECK_levelUpdateFailed
		GEODE_CONCEPT_FUNCTION_CHECK(levelUpdateFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelUpdateDelegate> : ModifyBase<ModifyDerive<Der, LevelUpdateDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelUpdateDelegate>>;
		using ModifyBase<ModifyDerive<Der, LevelUpdateDelegate>>::ModifyBase;
		using Base = LevelUpdateDelegate;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelUpdateDelegate, levelUpdateFinished, GJGameLevel*, UpdateResponse)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelUpdateDelegate, levelUpdateFailed, int)
		}
	};
}
