#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/InheritanceNode.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getIndex
		#define GEODE_STATICS_getIndex
		GEODE_AS_STATIC_FUNCTION(getIndex) 
	#endif

	#ifndef GEODE_STATICS_getIsStart
		#define GEODE_STATICS_getIsStart
		GEODE_AS_STATIC_FUNCTION(getIsStart) 
	#endif

	#ifndef GEODE_STATICS_getTarget
		#define GEODE_STATICS_getTarget
		GEODE_AS_STATIC_FUNCTION(getTarget) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setIndex
		#define GEODE_STATICS_setIndex
		GEODE_AS_STATIC_FUNCTION(setIndex) 
	#endif

	#ifndef GEODE_STATICS_setIsStart
		#define GEODE_STATICS_setIsStart
		GEODE_AS_STATIC_FUNCTION(setIsStart) 
	#endif

	#ifndef GEODE_STATICS_setTarget
		#define GEODE_STATICS_setTarget
		GEODE_AS_STATIC_FUNCTION(setTarget) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIndex
		#define GEODE_CONCEPT_CHECK_getIndex
		GEODE_CONCEPT_FUNCTION_CHECK(getIndex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIsStart
		#define GEODE_CONCEPT_CHECK_getIsStart
		GEODE_CONCEPT_FUNCTION_CHECK(getIsStart) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTarget
		#define GEODE_CONCEPT_CHECK_getTarget
		GEODE_CONCEPT_FUNCTION_CHECK(getTarget) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIndex
		#define GEODE_CONCEPT_CHECK_setIndex
		GEODE_CONCEPT_FUNCTION_CHECK(setIndex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIsStart
		#define GEODE_CONCEPT_CHECK_setIsStart
		GEODE_CONCEPT_FUNCTION_CHECK(setIsStart) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTarget
		#define GEODE_CONCEPT_CHECK_setTarget
		GEODE_CONCEPT_FUNCTION_CHECK(setTarget) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, InheritanceNode> : ModifyBase<ModifyDerive<Der, InheritanceNode>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, InheritanceNode>>;
		using ModifyBase<ModifyDerive<Der, InheritanceNode>>::ModifyBase;
		using Base = InheritanceNode;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(InheritanceNode, create, int, InheritanceNode*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(InheritanceNode, getIndex, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(InheritanceNode, getIsStart, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(InheritanceNode, getTarget, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(InheritanceNode, init, int, InheritanceNode*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(InheritanceNode, setIndex, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(InheritanceNode, setIsStart, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(InheritanceNode, setTarget, InheritanceNode*)
		}
	};
}
