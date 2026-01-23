#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SpawnTriggerDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_spawnGroup
		#define GEODE_STATICS_spawnGroup
		GEODE_AS_STATIC_FUNCTION(spawnGroup) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_spawnGroup
		#define GEODE_CONCEPT_CHECK_spawnGroup
		GEODE_CONCEPT_FUNCTION_CHECK(spawnGroup) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SpawnTriggerDelegate> : ModifyBase<ModifyDerive<Der, SpawnTriggerDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SpawnTriggerDelegate>>;
		using ModifyBase<ModifyDerive<Der, SpawnTriggerDelegate>>::ModifyBase;
		using Base = SpawnTriggerDelegate;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SpawnTriggerDelegate, spawnGroup, int)
		}
	};
}
