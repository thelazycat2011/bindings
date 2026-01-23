#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCMenuItemToggler.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_activeItem
		#define GEODE_STATICS_activeItem
		GEODE_AS_STATIC_FUNCTION(activeItem) 
	#endif

	#ifndef GEODE_STATICS_getDontToggle
		#define GEODE_STATICS_getDontToggle
		GEODE_AS_STATIC_FUNCTION(getDontToggle) 
	#endif

	#ifndef GEODE_STATICS_getIsActive
		#define GEODE_STATICS_getIsActive
		GEODE_AS_STATIC_FUNCTION(getIsActive) 
	#endif

	#ifndef GEODE_STATICS_getNormalButton
		#define GEODE_STATICS_getNormalButton
		GEODE_AS_STATIC_FUNCTION(getNormalButton) 
	#endif

	#ifndef GEODE_STATICS_getSelectedButton
		#define GEODE_STATICS_getSelectedButton
		GEODE_AS_STATIC_FUNCTION(getSelectedButton) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_normalTouch
		#define GEODE_STATICS_normalTouch
		GEODE_AS_STATIC_FUNCTION(normalTouch) 
	#endif

	#ifndef GEODE_STATICS_selectedTouch
		#define GEODE_STATICS_selectedTouch
		GEODE_AS_STATIC_FUNCTION(selectedTouch) 
	#endif

	#ifndef GEODE_STATICS_setDontToggle
		#define GEODE_STATICS_setDontToggle
		GEODE_AS_STATIC_FUNCTION(setDontToggle) 
	#endif

	#ifndef GEODE_STATICS_setSizeMult
		#define GEODE_STATICS_setSizeMult
		GEODE_AS_STATIC_FUNCTION(setSizeMult) 
	#endif

	#ifndef GEODE_STATICS_toggle
		#define GEODE_STATICS_toggle
		GEODE_AS_STATIC_FUNCTION(toggle) 
	#endif

	#ifndef GEODE_STATICS_activate
		#define GEODE_STATICS_activate
		GEODE_AS_STATIC_FUNCTION(activate) 
	#endif

	#ifndef GEODE_STATICS_selected
		#define GEODE_STATICS_selected
		GEODE_AS_STATIC_FUNCTION(selected) 
	#endif

	#ifndef GEODE_STATICS_unselected
		#define GEODE_STATICS_unselected
		GEODE_AS_STATIC_FUNCTION(unselected) 
	#endif

	#ifndef GEODE_STATICS_setEnabled
		#define GEODE_STATICS_setEnabled
		GEODE_AS_STATIC_FUNCTION(setEnabled) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activeItem
		#define GEODE_CONCEPT_CHECK_activeItem
		GEODE_CONCEPT_FUNCTION_CHECK(activeItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDontToggle
		#define GEODE_CONCEPT_CHECK_getDontToggle
		GEODE_CONCEPT_FUNCTION_CHECK(getDontToggle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIsActive
		#define GEODE_CONCEPT_CHECK_getIsActive
		GEODE_CONCEPT_FUNCTION_CHECK(getIsActive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNormalButton
		#define GEODE_CONCEPT_CHECK_getNormalButton
		GEODE_CONCEPT_FUNCTION_CHECK(getNormalButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSelectedButton
		#define GEODE_CONCEPT_CHECK_getSelectedButton
		GEODE_CONCEPT_FUNCTION_CHECK(getSelectedButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_normalTouch
		#define GEODE_CONCEPT_CHECK_normalTouch
		GEODE_CONCEPT_FUNCTION_CHECK(normalTouch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectedTouch
		#define GEODE_CONCEPT_CHECK_selectedTouch
		GEODE_CONCEPT_FUNCTION_CHECK(selectedTouch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDontToggle
		#define GEODE_CONCEPT_CHECK_setDontToggle
		GEODE_CONCEPT_FUNCTION_CHECK(setDontToggle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSizeMult
		#define GEODE_CONCEPT_CHECK_setSizeMult
		GEODE_CONCEPT_FUNCTION_CHECK(setSizeMult) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggle
		#define GEODE_CONCEPT_CHECK_toggle
		GEODE_CONCEPT_FUNCTION_CHECK(toggle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activate
		#define GEODE_CONCEPT_CHECK_activate
		GEODE_CONCEPT_FUNCTION_CHECK(activate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selected
		#define GEODE_CONCEPT_CHECK_selected
		GEODE_CONCEPT_FUNCTION_CHECK(selected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unselected
		#define GEODE_CONCEPT_CHECK_unselected
		GEODE_CONCEPT_FUNCTION_CHECK(unselected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setEnabled
		#define GEODE_CONCEPT_CHECK_setEnabled
		GEODE_CONCEPT_FUNCTION_CHECK(setEnabled) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCMenuItemToggler> : ModifyBase<ModifyDerive<Der, CCMenuItemToggler>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCMenuItemToggler>>;
		using ModifyBase<ModifyDerive<Der, CCMenuItemToggler>>::ModifyBase;
		using Base = CCMenuItemToggler;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCMenuItemToggler, create, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCMenuItemToggler, activeItem, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCMenuItemToggler, getDontToggle, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCMenuItemToggler, getIsActive, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCMenuItemToggler, getNormalButton, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCMenuItemToggler, getSelectedButton, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCMenuItemToggler, init, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCMenuItemToggler, normalTouch, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCMenuItemToggler, selectedTouch, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCMenuItemToggler, setDontToggle, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCMenuItemToggler, setSizeMult, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCMenuItemToggler, toggle, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCMenuItemToggler, activate, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCMenuItemToggler, selected, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCMenuItemToggler, unselected, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCMenuItemToggler, setEnabled, bool)
		}
	};
}
