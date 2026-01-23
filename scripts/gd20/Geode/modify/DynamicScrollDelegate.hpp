#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/DynamicScrollDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_pure_virtual_00a54a68
		#define GEODE_CONCEPT_CHECK_pure_virtual_00a54a68
		GEODE_CONCEPT_FUNCTION_CHECK(pure_virtual_00a54a68) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, DynamicScrollDelegate> : ModifyBase<ModifyDerive<Der, DynamicScrollDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, DynamicScrollDelegate>>;
		using ModifyBase<ModifyDerive<Der, DynamicScrollDelegate>>::ModifyBase;
		using Base = DynamicScrollDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(DynamicScrollDelegate, pure_virtual_00a54a68, )
		}
	};
}
