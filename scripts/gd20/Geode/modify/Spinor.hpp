#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/Spinor.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_slerp
		#define GEODE_STATICS_slerp
		GEODE_AS_STATIC_FUNCTION(slerp) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_slerp
		#define GEODE_CONCEPT_CHECK_slerp
		GEODE_CONCEPT_FUNCTION_CHECK(slerp) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, Spinor> : ModifyBase<ModifyDerive<Der, Spinor>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, Spinor>>;
		using ModifyBase<ModifyDerive<Der, Spinor>>::ModifyBase;
		using Base = Spinor;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(Spinor, slerp, Spinor const&, Spinor const&, float)
		}
	};
}
