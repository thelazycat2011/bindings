#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <fmod.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, FMOD::System> : ModifyBase<ModifyDerive<Der, FMOD::System>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FMOD::System>>;
		using ModifyBase<ModifyDerive<Der, FMOD::System>>::ModifyBase;
		using Base = FMOD::System;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, unsigned int, void*>::func(&FMOD::System::init)), Thiscall, FMOD::System, init, int, unsigned int, void*)
		}
	};
}
