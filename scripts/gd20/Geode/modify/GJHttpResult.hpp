#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJHttpResult.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getRequestTag
		#define GEODE_STATICS_getRequestTag
		GEODE_AS_STATIC_FUNCTION(getRequestTag) 
	#endif

	#ifndef GEODE_STATICS_getResult
		#define GEODE_STATICS_getResult
		GEODE_AS_STATIC_FUNCTION(getResult) 
	#endif

	#ifndef GEODE_STATICS_getSuccess
		#define GEODE_STATICS_getSuccess
		GEODE_AS_STATIC_FUNCTION(getSuccess) 
	#endif

	#ifndef GEODE_STATICS_getType
		#define GEODE_STATICS_getType
		GEODE_AS_STATIC_FUNCTION(getType) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setRequestTag
		#define GEODE_STATICS_setRequestTag
		GEODE_AS_STATIC_FUNCTION(setRequestTag) 
	#endif

	#ifndef GEODE_STATICS_setResult
		#define GEODE_STATICS_setResult
		GEODE_AS_STATIC_FUNCTION(setResult) 
	#endif

	#ifndef GEODE_STATICS_setSuccess
		#define GEODE_STATICS_setSuccess
		GEODE_AS_STATIC_FUNCTION(setSuccess) 
	#endif

	#ifndef GEODE_STATICS_setType
		#define GEODE_STATICS_setType
		GEODE_AS_STATIC_FUNCTION(setType) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRequestTag
		#define GEODE_CONCEPT_CHECK_getRequestTag
		GEODE_CONCEPT_FUNCTION_CHECK(getRequestTag) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getResult
		#define GEODE_CONCEPT_CHECK_getResult
		GEODE_CONCEPT_FUNCTION_CHECK(getResult) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSuccess
		#define GEODE_CONCEPT_CHECK_getSuccess
		GEODE_CONCEPT_FUNCTION_CHECK(getSuccess) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getType
		#define GEODE_CONCEPT_CHECK_getType
		GEODE_CONCEPT_FUNCTION_CHECK(getType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRequestTag
		#define GEODE_CONCEPT_CHECK_setRequestTag
		GEODE_CONCEPT_FUNCTION_CHECK(setRequestTag) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setResult
		#define GEODE_CONCEPT_CHECK_setResult
		GEODE_CONCEPT_FUNCTION_CHECK(setResult) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSuccess
		#define GEODE_CONCEPT_CHECK_setSuccess
		GEODE_CONCEPT_FUNCTION_CHECK(setSuccess) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setType
		#define GEODE_CONCEPT_CHECK_setType
		GEODE_CONCEPT_FUNCTION_CHECK(setType) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJHttpResult> : ModifyBase<ModifyDerive<Der, GJHttpResult>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJHttpResult>>;
		using ModifyBase<ModifyDerive<Der, GJHttpResult>>::ModifyBase;
		using Base = GJHttpResult;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJHttpResult, create, bool, gd::string, gd::string, GJHttpType)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJHttpResult, getRequestTag, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJHttpResult, getResult, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJHttpResult, getSuccess, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJHttpResult, getType, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJHttpResult, init, bool, gd::string, gd::string, GJHttpType)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJHttpResult, setRequestTag, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJHttpResult, setResult, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJHttpResult, setSuccess, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJHttpResult, setType, GJHttpType)
		}
	};
}
