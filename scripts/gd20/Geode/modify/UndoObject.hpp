#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/UndoObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createWithArray
		#define GEODE_STATICS_createWithArray
		GEODE_AS_STATIC_FUNCTION(createWithArray) 
	#endif

	#ifndef GEODE_STATICS_createWithTransformObjects
		#define GEODE_STATICS_createWithTransformObjects
		GEODE_AS_STATIC_FUNCTION(createWithTransformObjects) 
	#endif

	#ifndef GEODE_STATICS_getCommand
		#define GEODE_STATICS_getCommand
		GEODE_AS_STATIC_FUNCTION(getCommand) 
	#endif

	#ifndef GEODE_STATICS_getIsLinked
		#define GEODE_STATICS_getIsLinked
		GEODE_AS_STATIC_FUNCTION(getIsLinked) 
	#endif

	#ifndef GEODE_STATICS_getObject
		#define GEODE_STATICS_getObject
		GEODE_AS_STATIC_FUNCTION(getObject) 
	#endif

	#ifndef GEODE_STATICS_getObjects
		#define GEODE_STATICS_getObjects
		GEODE_AS_STATIC_FUNCTION(getObjects) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_initWithTransformObjects
		#define GEODE_STATICS_initWithTransformObjects
		GEODE_AS_STATIC_FUNCTION(initWithTransformObjects) 
	#endif

	#ifndef GEODE_STATICS_setIsLinked
		#define GEODE_STATICS_setIsLinked
		GEODE_AS_STATIC_FUNCTION(setIsLinked) 
	#endif

	#ifndef GEODE_STATICS_setObjects
		#define GEODE_STATICS_setObjects
		GEODE_AS_STATIC_FUNCTION(setObjects) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithArray
		#define GEODE_CONCEPT_CHECK_createWithArray
		GEODE_CONCEPT_FUNCTION_CHECK(createWithArray) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithTransformObjects
		#define GEODE_CONCEPT_CHECK_createWithTransformObjects
		GEODE_CONCEPT_FUNCTION_CHECK(createWithTransformObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCommand
		#define GEODE_CONCEPT_CHECK_getCommand
		GEODE_CONCEPT_FUNCTION_CHECK(getCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIsLinked
		#define GEODE_CONCEPT_CHECK_getIsLinked
		GEODE_CONCEPT_FUNCTION_CHECK(getIsLinked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getObject
		#define GEODE_CONCEPT_CHECK_getObject
		GEODE_CONCEPT_FUNCTION_CHECK(getObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getObjects
		#define GEODE_CONCEPT_CHECK_getObjects
		GEODE_CONCEPT_FUNCTION_CHECK(getObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithTransformObjects
		#define GEODE_CONCEPT_CHECK_initWithTransformObjects
		GEODE_CONCEPT_FUNCTION_CHECK(initWithTransformObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIsLinked
		#define GEODE_CONCEPT_CHECK_setIsLinked
		GEODE_CONCEPT_FUNCTION_CHECK(setIsLinked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setObjects
		#define GEODE_CONCEPT_CHECK_setObjects
		GEODE_CONCEPT_FUNCTION_CHECK(setObjects) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, UndoObject> : ModifyBase<ModifyDerive<Der, UndoObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, UndoObject>>;
		using ModifyBase<ModifyDerive<Der, UndoObject>>::ModifyBase;
		using Base = UndoObject;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(UndoObject, create, GameObject*, UndoCommand)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(UndoObject, createWithArray, cocos2d::CCArray*, UndoCommand)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(UndoObject, createWithTransformObjects, cocos2d::CCArray*, UndoCommand)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(UndoObject, getCommand, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(UndoObject, getIsLinked, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(UndoObject, getObject, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(UndoObject, getObjects, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(UndoObject, init, cocos2d::CCArray*, UndoCommand)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(UndoObject, init, GameObject*, UndoCommand)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(UndoObject, initWithTransformObjects, cocos2d::CCArray*, UndoCommand)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(UndoObject, setIsLinked, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(UndoObject, setObjects, cocos2d::CCArray*)
		}
	};
}
