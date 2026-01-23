#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CustomSongDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_pure_virtual_00a3cd80
		#define GEODE_CONCEPT_CHECK_pure_virtual_00a3cd80
		GEODE_CONCEPT_FUNCTION_CHECK(pure_virtual_00a3cd80) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pure_virtual_00a3cd84
		#define GEODE_CONCEPT_CHECK_pure_virtual_00a3cd84
		GEODE_CONCEPT_FUNCTION_CHECK(pure_virtual_00a3cd84) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CustomSongDelegate> : ModifyBase<ModifyDerive<Der, CustomSongDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CustomSongDelegate>>;
		using ModifyBase<ModifyDerive<Der, CustomSongDelegate>>::ModifyBase;
		using Base = CustomSongDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CustomSongDelegate, pure_virtual_00a3cd80, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CustomSongDelegate, pure_virtual_00a3cd84, )
		}
	};
}
