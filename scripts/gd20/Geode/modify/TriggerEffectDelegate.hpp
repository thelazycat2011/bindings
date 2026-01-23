#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/TriggerEffectDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_pure_virtual_00a3b958
		#define GEODE_CONCEPT_CHECK_pure_virtual_00a3b958
		GEODE_CONCEPT_FUNCTION_CHECK(pure_virtual_00a3b958) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pure_virtual_00a3b95c
		#define GEODE_CONCEPT_CHECK_pure_virtual_00a3b95c
		GEODE_CONCEPT_FUNCTION_CHECK(pure_virtual_00a3b95c) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pure_virtual_00a3b960
		#define GEODE_CONCEPT_CHECK_pure_virtual_00a3b960
		GEODE_CONCEPT_FUNCTION_CHECK(pure_virtual_00a3b960) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, TriggerEffectDelegate> : ModifyBase<ModifyDerive<Der, TriggerEffectDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, TriggerEffectDelegate>>;
		using ModifyBase<ModifyDerive<Der, TriggerEffectDelegate>>::ModifyBase;
		using Base = TriggerEffectDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TriggerEffectDelegate, pure_virtual_00a3b958, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TriggerEffectDelegate, pure_virtual_00a3b95c, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TriggerEffectDelegate, pure_virtual_00a3b960, )
		}
	};
}
