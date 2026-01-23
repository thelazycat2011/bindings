#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/sha1.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_calc
		#define GEODE_STATICS_calc
		GEODE_AS_STATIC_FUNCTION(calc) 
	#endif

	#ifndef GEODE_STATICS_toHexString
		#define GEODE_STATICS_toHexString
		GEODE_AS_STATIC_FUNCTION(toHexString) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_calc
		#define GEODE_CONCEPT_CHECK_calc
		GEODE_CONCEPT_FUNCTION_CHECK(calc) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toHexString
		#define GEODE_CONCEPT_CHECK_toHexString
		GEODE_CONCEPT_FUNCTION_CHECK(toHexString) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, sha1> : ModifyBase<ModifyDerive<Der, sha1>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, sha1>>;
		using ModifyBase<ModifyDerive<Der, sha1>>::ModifyBase;
		using Base = sha1;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(sha1, calc, void const*, int, unsigned char*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(sha1, toHexString, unsigned char const*, char*)
		}
	};
}
