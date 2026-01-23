#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJColorSetupLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_colorSelectClosed
		#define GEODE_STATICS_colorSelectClosed
		GEODE_AS_STATIC_FUNCTION(colorSelectClosed) 
	#endif

	#ifndef GEODE_STATICS_getCloseOnSelect
		#define GEODE_STATICS_getCloseOnSelect
		GEODE_AS_STATIC_FUNCTION(getCloseOnSelect) 
	#endif

	#ifndef GEODE_STATICS_getDelegate
		#define GEODE_STATICS_getDelegate
		GEODE_AS_STATIC_FUNCTION(getDelegate) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onColor
		#define GEODE_STATICS_onColor
		GEODE_AS_STATIC_FUNCTION(onColor) 
	#endif

	#ifndef GEODE_STATICS_onPage
		#define GEODE_STATICS_onPage
		GEODE_AS_STATIC_FUNCTION(onPage) 
	#endif

	#ifndef GEODE_STATICS_setCloseOnSelect
		#define GEODE_STATICS_setCloseOnSelect
		GEODE_AS_STATIC_FUNCTION(setCloseOnSelect) 
	#endif

	#ifndef GEODE_STATICS_setDelegate
		#define GEODE_STATICS_setDelegate
		GEODE_AS_STATIC_FUNCTION(setDelegate) 
	#endif

	#ifndef GEODE_STATICS_showPage
		#define GEODE_STATICS_showPage
		GEODE_AS_STATIC_FUNCTION(showPage) 
	#endif

	#ifndef GEODE_STATICS_updateSpriteColor
		#define GEODE_STATICS_updateSpriteColor
		GEODE_AS_STATIC_FUNCTION(updateSpriteColor) 
	#endif

	#ifndef GEODE_STATICS_updateSpriteColors
		#define GEODE_STATICS_updateSpriteColors
		GEODE_AS_STATIC_FUNCTION(updateSpriteColors) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_colorSelectClosed
		#define GEODE_CONCEPT_CHECK_colorSelectClosed
		GEODE_CONCEPT_FUNCTION_CHECK(colorSelectClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCloseOnSelect
		#define GEODE_CONCEPT_CHECK_getCloseOnSelect
		GEODE_CONCEPT_FUNCTION_CHECK(getCloseOnSelect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDelegate
		#define GEODE_CONCEPT_CHECK_getDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(getDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onColor
		#define GEODE_CONCEPT_CHECK_onColor
		GEODE_CONCEPT_FUNCTION_CHECK(onColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPage
		#define GEODE_CONCEPT_CHECK_onPage
		GEODE_CONCEPT_FUNCTION_CHECK(onPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCloseOnSelect
		#define GEODE_CONCEPT_CHECK_setCloseOnSelect
		GEODE_CONCEPT_FUNCTION_CHECK(setCloseOnSelect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDelegate
		#define GEODE_CONCEPT_CHECK_setDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(setDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showPage
		#define GEODE_CONCEPT_CHECK_showPage
		GEODE_CONCEPT_FUNCTION_CHECK(showPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSpriteColor
		#define GEODE_CONCEPT_CHECK_updateSpriteColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateSpriteColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSpriteColors
		#define GEODE_CONCEPT_CHECK_updateSpriteColors
		GEODE_CONCEPT_FUNCTION_CHECK(updateSpriteColors) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJColorSetupLayer> : ModifyBase<ModifyDerive<Der, GJColorSetupLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJColorSetupLayer>>;
		using ModifyBase<ModifyDerive<Der, GJColorSetupLayer>>::ModifyBase;
		using Base = GJColorSetupLayer;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJColorSetupLayer, create, LevelSettingsObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJColorSetupLayer, colorSelectClosed, ColorSelectPopup*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJColorSetupLayer, getCloseOnSelect, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJColorSetupLayer, getDelegate, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJColorSetupLayer, init, LevelSettingsObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJColorSetupLayer, onClose, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJColorSetupLayer, onColor, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJColorSetupLayer, onPage, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJColorSetupLayer, setCloseOnSelect, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJColorSetupLayer, setDelegate, ColorSetupDelegate*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJColorSetupLayer, showPage, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJColorSetupLayer, updateSpriteColor, ColorChannelSprite*, cocos2d::CCLabelBMFont*, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJColorSetupLayer, updateSpriteColors, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJColorSetupLayer, keyBackClicked, )
		}
	};
}
