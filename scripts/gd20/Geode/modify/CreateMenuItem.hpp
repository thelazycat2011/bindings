#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CreateMenuItem.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getObjectFrame
		#define GEODE_STATICS_getObjectFrame
		GEODE_AS_STATIC_FUNCTION(getObjectFrame) 
	#endif

	#ifndef GEODE_STATICS_getObjectKey
		#define GEODE_STATICS_getObjectKey
		GEODE_AS_STATIC_FUNCTION(getObjectKey) 
	#endif

	#ifndef GEODE_STATICS_getPage
		#define GEODE_STATICS_getPage
		GEODE_AS_STATIC_FUNCTION(getPage) 
	#endif

	#ifndef GEODE_STATICS_getTab
		#define GEODE_STATICS_getTab
		GEODE_AS_STATIC_FUNCTION(getTab) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setObjectFrame
		#define GEODE_STATICS_setObjectFrame
		GEODE_AS_STATIC_FUNCTION(setObjectFrame) 
	#endif

	#ifndef GEODE_STATICS_setObjectKey
		#define GEODE_STATICS_setObjectKey
		GEODE_AS_STATIC_FUNCTION(setObjectKey) 
	#endif

	#ifndef GEODE_STATICS_setPage
		#define GEODE_STATICS_setPage
		GEODE_AS_STATIC_FUNCTION(setPage) 
	#endif

	#ifndef GEODE_STATICS_setTab
		#define GEODE_STATICS_setTab
		GEODE_AS_STATIC_FUNCTION(setTab) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getObjectFrame
		#define GEODE_CONCEPT_CHECK_getObjectFrame
		GEODE_CONCEPT_FUNCTION_CHECK(getObjectFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getObjectKey
		#define GEODE_CONCEPT_CHECK_getObjectKey
		GEODE_CONCEPT_FUNCTION_CHECK(getObjectKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPage
		#define GEODE_CONCEPT_CHECK_getPage
		GEODE_CONCEPT_FUNCTION_CHECK(getPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTab
		#define GEODE_CONCEPT_CHECK_getTab
		GEODE_CONCEPT_FUNCTION_CHECK(getTab) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setObjectFrame
		#define GEODE_CONCEPT_CHECK_setObjectFrame
		GEODE_CONCEPT_FUNCTION_CHECK(setObjectFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setObjectKey
		#define GEODE_CONCEPT_CHECK_setObjectKey
		GEODE_CONCEPT_FUNCTION_CHECK(setObjectKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPage
		#define GEODE_CONCEPT_CHECK_setPage
		GEODE_CONCEPT_FUNCTION_CHECK(setPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTab
		#define GEODE_CONCEPT_CHECK_setTab
		GEODE_CONCEPT_FUNCTION_CHECK(setTab) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CreateMenuItem> : ModifyBase<ModifyDerive<Der, CreateMenuItem>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CreateMenuItem>>;
		using ModifyBase<ModifyDerive<Der, CreateMenuItem>>::ModifyBase;
		using Base = CreateMenuItem;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CreateMenuItem, create, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CreateMenuItem, getObjectFrame, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CreateMenuItem, getObjectKey, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CreateMenuItem, getPage, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CreateMenuItem, getTab, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CreateMenuItem, init, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CreateMenuItem, setObjectFrame, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CreateMenuItem, setObjectKey, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CreateMenuItem, setPage, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CreateMenuItem, setTab, int)
		}
	};
}
