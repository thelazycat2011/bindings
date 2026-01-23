#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GaragePage.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_listButtonBarSwitchedPage
		#define GEODE_STATICS_listButtonBarSwitchedPage
		GEODE_AS_STATIC_FUNCTION(listButtonBarSwitchedPage) 
	#endif

	#ifndef GEODE_STATICS_onGlow
		#define GEODE_STATICS_onGlow
		GEODE_AS_STATIC_FUNCTION(onGlow) 
	#endif

	#ifndef GEODE_STATICS_onSelect
		#define GEODE_STATICS_onSelect
		GEODE_AS_STATIC_FUNCTION(onSelect) 
	#endif

	#ifndef GEODE_STATICS_updateSelect
		#define GEODE_STATICS_updateSelect
		GEODE_AS_STATIC_FUNCTION(updateSelect) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_listButtonBarSwitchedPage
		#define GEODE_CONCEPT_CHECK_listButtonBarSwitchedPage
		GEODE_CONCEPT_FUNCTION_CHECK(listButtonBarSwitchedPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGlow
		#define GEODE_CONCEPT_CHECK_onGlow
		GEODE_CONCEPT_FUNCTION_CHECK(onGlow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelect
		#define GEODE_CONCEPT_CHECK_onSelect
		GEODE_CONCEPT_FUNCTION_CHECK(onSelect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSelect
		#define GEODE_CONCEPT_CHECK_updateSelect
		GEODE_CONCEPT_FUNCTION_CHECK(updateSelect) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GaragePage> : ModifyBase<ModifyDerive<Der, GaragePage>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GaragePage>>;
		using ModifyBase<ModifyDerive<Der, GaragePage>>::ModifyBase;
		using Base = GaragePage;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GaragePage, create, IconType, GJGarageLayer*, cocos2d::SEL_MenuHandler)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GaragePage, init, IconType, GJGarageLayer*, cocos2d::SEL_MenuHandler)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GaragePage, listButtonBarSwitchedPage, ListButtonBar*, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GaragePage, onGlow, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GaragePage, onSelect, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GaragePage, updateSelect, cocos2d::CCNode*)
		}
	};
}
