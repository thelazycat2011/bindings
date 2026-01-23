#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SelectArtLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getDelegate
		#define GEODE_STATICS_getDelegate
		GEODE_AS_STATIC_FUNCTION(getDelegate) 
	#endif

	#ifndef GEODE_STATICS_getSelected
		#define GEODE_STATICS_getSelected
		GEODE_AS_STATIC_FUNCTION(getSelected) 
	#endif

	#ifndef GEODE_STATICS_getSelectedCustom
		#define GEODE_STATICS_getSelectedCustom
		GEODE_AS_STATIC_FUNCTION(getSelectedCustom) 
	#endif

	#ifndef GEODE_STATICS_getType
		#define GEODE_STATICS_getType
		GEODE_AS_STATIC_FUNCTION(getType) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onSelectCustom
		#define GEODE_STATICS_onSelectCustom
		GEODE_AS_STATIC_FUNCTION(onSelectCustom) 
	#endif

	#ifndef GEODE_STATICS_selectArt
		#define GEODE_STATICS_selectArt
		GEODE_AS_STATIC_FUNCTION(selectArt) 
	#endif

	#ifndef GEODE_STATICS_setDelegate
		#define GEODE_STATICS_setDelegate
		GEODE_AS_STATIC_FUNCTION(setDelegate) 
	#endif

	#ifndef GEODE_STATICS_updateSelectedCustom
		#define GEODE_STATICS_updateSelectedCustom
		GEODE_AS_STATIC_FUNCTION(updateSelectedCustom) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDelegate
		#define GEODE_CONCEPT_CHECK_getDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(getDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSelected
		#define GEODE_CONCEPT_CHECK_getSelected
		GEODE_CONCEPT_FUNCTION_CHECK(getSelected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSelectedCustom
		#define GEODE_CONCEPT_CHECK_getSelectedCustom
		GEODE_CONCEPT_FUNCTION_CHECK(getSelectedCustom) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getType
		#define GEODE_CONCEPT_CHECK_getType
		GEODE_CONCEPT_FUNCTION_CHECK(getType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectCustom
		#define GEODE_CONCEPT_CHECK_onSelectCustom
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectCustom) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectArt
		#define GEODE_CONCEPT_CHECK_selectArt
		GEODE_CONCEPT_FUNCTION_CHECK(selectArt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDelegate
		#define GEODE_CONCEPT_CHECK_setDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(setDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSelectedCustom
		#define GEODE_CONCEPT_CHECK_updateSelectedCustom
		GEODE_CONCEPT_FUNCTION_CHECK(updateSelectedCustom) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SelectArtLayer> : ModifyBase<ModifyDerive<Der, SelectArtLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SelectArtLayer>>;
		using ModifyBase<ModifyDerive<Der, SelectArtLayer>>::ModifyBase;
		using Base = SelectArtLayer;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SelectArtLayer, create, SelectArtType)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SelectArtLayer, getDelegate, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SelectArtLayer, getSelected, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SelectArtLayer, getSelectedCustom, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SelectArtLayer, getType, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SelectArtLayer, init, SelectArtType)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SelectArtLayer, onClose, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SelectArtLayer, onSelectCustom, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SelectArtLayer, selectArt, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SelectArtLayer, setDelegate, SelectArtDelegate*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SelectArtLayer, updateSelectedCustom, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SelectArtLayer, keyBackClicked, )
		}
	};
}
