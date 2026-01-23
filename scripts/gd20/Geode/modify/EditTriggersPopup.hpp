#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EditTriggersPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createToggleButton
		#define GEODE_STATICS_createToggleButton
		GEODE_AS_STATIC_FUNCTION(createToggleButton) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onSpawnedByTrigger
		#define GEODE_STATICS_onSpawnedByTrigger
		GEODE_AS_STATIC_FUNCTION(onSpawnedByTrigger) 
	#endif

	#ifndef GEODE_STATICS_onTouchTriggered
		#define GEODE_STATICS_onTouchTriggered
		GEODE_AS_STATIC_FUNCTION(onTouchTriggered) 
	#endif

	#ifndef GEODE_STATICS_updateSpawnedByTrigger
		#define GEODE_STATICS_updateSpawnedByTrigger
		GEODE_AS_STATIC_FUNCTION(updateSpawnedByTrigger) 
	#endif

	#ifndef GEODE_STATICS_updateTouchTriggered
		#define GEODE_STATICS_updateTouchTriggered
		GEODE_AS_STATIC_FUNCTION(updateTouchTriggered) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_determineStartValues
		#define GEODE_STATICS_determineStartValues
		GEODE_AS_STATIC_FUNCTION(determineStartValues) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createToggleButton
		#define GEODE_CONCEPT_CHECK_createToggleButton
		GEODE_CONCEPT_FUNCTION_CHECK(createToggleButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSpawnedByTrigger
		#define GEODE_CONCEPT_CHECK_onSpawnedByTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(onSpawnedByTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTouchTriggered
		#define GEODE_CONCEPT_CHECK_onTouchTriggered
		GEODE_CONCEPT_FUNCTION_CHECK(onTouchTriggered) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSpawnedByTrigger
		#define GEODE_CONCEPT_CHECK_updateSpawnedByTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(updateSpawnedByTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTouchTriggered
		#define GEODE_CONCEPT_CHECK_updateTouchTriggered
		GEODE_CONCEPT_FUNCTION_CHECK(updateTouchTriggered) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_show
		#define GEODE_CONCEPT_CHECK_show
		GEODE_CONCEPT_FUNCTION_CHECK(show) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_determineStartValues
		#define GEODE_CONCEPT_CHECK_determineStartValues
		GEODE_CONCEPT_FUNCTION_CHECK(determineStartValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EditTriggersPopup> : ModifyBase<ModifyDerive<Der, EditTriggersPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EditTriggersPopup>>;
		using ModifyBase<ModifyDerive<Der, EditTriggersPopup>>::ModifyBase;
		using Base = EditTriggersPopup;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditTriggersPopup, create, EffectGameObject*, cocos2d::CCArray*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditTriggersPopup, createToggleButton, gd::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditTriggersPopup, init, EffectGameObject*, cocos2d::CCArray*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditTriggersPopup, onSpawnedByTrigger, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditTriggersPopup, onTouchTriggered, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditTriggersPopup, updateSpawnedByTrigger, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditTriggersPopup, updateTouchTriggered, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditTriggersPopup, keyBackClicked, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditTriggersPopup, show, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditTriggersPopup, determineStartValues, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditTriggersPopup, onClose, cocos2d::CCObject*)
		}
	};
}
