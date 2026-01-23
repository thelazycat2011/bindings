#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetIDLayer.hpp>
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

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onDown
		#define GEODE_STATICS_onDown
		GEODE_AS_STATIC_FUNCTION(onDown) 
	#endif

	#ifndef GEODE_STATICS_onUp
		#define GEODE_STATICS_onUp
		GEODE_AS_STATIC_FUNCTION(onUp) 
	#endif

	#ifndef GEODE_STATICS_updateID
		#define GEODE_STATICS_updateID
		GEODE_AS_STATIC_FUNCTION(updateID) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDown
		#define GEODE_CONCEPT_CHECK_onDown
		GEODE_CONCEPT_FUNCTION_CHECK(onDown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUp
		#define GEODE_CONCEPT_CHECK_onUp
		GEODE_CONCEPT_FUNCTION_CHECK(onUp) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateID
		#define GEODE_CONCEPT_CHECK_updateID
		GEODE_CONCEPT_FUNCTION_CHECK(updateID) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetIDLayer> : ModifyBase<ModifyDerive<Der, SetIDLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetIDLayer>>;
		using ModifyBase<ModifyDerive<Der, SetIDLayer>>::ModifyBase;
		using Base = SetIDLayer;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetIDLayer, create, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetIDLayer, init, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetIDLayer, keyBackClicked, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetIDLayer, onClose, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetIDLayer, onDown, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetIDLayer, onUp, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetIDLayer, updateID, )
		}
	};
}
