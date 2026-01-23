#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/NumberInputLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_deleteLast
		#define GEODE_STATICS_deleteLast
		GEODE_AS_STATIC_FUNCTION(deleteLast) 
	#endif

	#ifndef GEODE_STATICS_getDelegate
		#define GEODE_STATICS_getDelegate
		GEODE_AS_STATIC_FUNCTION(getDelegate) 
	#endif

	#ifndef GEODE_STATICS_getMaxNumbers
		#define GEODE_STATICS_getMaxNumbers
		GEODE_AS_STATIC_FUNCTION(getMaxNumbers) 
	#endif

	#ifndef GEODE_STATICS_getMinNumbers
		#define GEODE_STATICS_getMinNumbers
		GEODE_AS_STATIC_FUNCTION(getMinNumbers) 
	#endif

	#ifndef GEODE_STATICS_getNumberString
		#define GEODE_STATICS_getNumberString
		GEODE_AS_STATIC_FUNCTION(getNumberString) 
	#endif

	#ifndef GEODE_STATICS_inputNumber
		#define GEODE_STATICS_inputNumber
		GEODE_AS_STATIC_FUNCTION(inputNumber) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onDone
		#define GEODE_STATICS_onDone
		GEODE_AS_STATIC_FUNCTION(onDone) 
	#endif

	#ifndef GEODE_STATICS_onNumber
		#define GEODE_STATICS_onNumber
		GEODE_AS_STATIC_FUNCTION(onNumber) 
	#endif

	#ifndef GEODE_STATICS_setDelegate
		#define GEODE_STATICS_setDelegate
		GEODE_AS_STATIC_FUNCTION(setDelegate) 
	#endif

	#ifndef GEODE_STATICS_setMaxNumbers
		#define GEODE_STATICS_setMaxNumbers
		GEODE_AS_STATIC_FUNCTION(setMaxNumbers) 
	#endif

	#ifndef GEODE_STATICS_setMinNumbers
		#define GEODE_STATICS_setMinNumbers
		GEODE_AS_STATIC_FUNCTION(setMinNumbers) 
	#endif

	#ifndef GEODE_STATICS_updateNumberState
		#define GEODE_STATICS_updateNumberState
		GEODE_AS_STATIC_FUNCTION(updateNumberState) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteLast
		#define GEODE_CONCEPT_CHECK_deleteLast
		GEODE_CONCEPT_FUNCTION_CHECK(deleteLast) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDelegate
		#define GEODE_CONCEPT_CHECK_getDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(getDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMaxNumbers
		#define GEODE_CONCEPT_CHECK_getMaxNumbers
		GEODE_CONCEPT_FUNCTION_CHECK(getMaxNumbers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMinNumbers
		#define GEODE_CONCEPT_CHECK_getMinNumbers
		GEODE_CONCEPT_FUNCTION_CHECK(getMinNumbers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNumberString
		#define GEODE_CONCEPT_CHECK_getNumberString
		GEODE_CONCEPT_FUNCTION_CHECK(getNumberString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_inputNumber
		#define GEODE_CONCEPT_CHECK_inputNumber
		GEODE_CONCEPT_FUNCTION_CHECK(inputNumber) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDone
		#define GEODE_CONCEPT_CHECK_onDone
		GEODE_CONCEPT_FUNCTION_CHECK(onDone) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNumber
		#define GEODE_CONCEPT_CHECK_onNumber
		GEODE_CONCEPT_FUNCTION_CHECK(onNumber) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDelegate
		#define GEODE_CONCEPT_CHECK_setDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(setDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMaxNumbers
		#define GEODE_CONCEPT_CHECK_setMaxNumbers
		GEODE_CONCEPT_FUNCTION_CHECK(setMaxNumbers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMinNumbers
		#define GEODE_CONCEPT_CHECK_setMinNumbers
		GEODE_CONCEPT_FUNCTION_CHECK(setMinNumbers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateNumberState
		#define GEODE_CONCEPT_CHECK_updateNumberState
		GEODE_CONCEPT_FUNCTION_CHECK(updateNumberState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		#define GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		GEODE_CONCEPT_FUNCTION_CHECK(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, NumberInputLayer> : ModifyBase<ModifyDerive<Der, NumberInputLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, NumberInputLayer>>;
		using ModifyBase<ModifyDerive<Der, NumberInputLayer>>::ModifyBase;
		using Base = NumberInputLayer;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(NumberInputLayer, create, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(NumberInputLayer, deleteLast, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(NumberInputLayer, getDelegate, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(NumberInputLayer, getMaxNumbers, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(NumberInputLayer, getMinNumbers, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(NumberInputLayer, getNumberString, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(NumberInputLayer, inputNumber, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(NumberInputLayer, onClose, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(NumberInputLayer, onDone, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(NumberInputLayer, onNumber, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(NumberInputLayer, setDelegate, NumberInputDelegate*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(NumberInputLayer, setMaxNumbers, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(NumberInputLayer, setMinNumbers, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(NumberInputLayer, updateNumberState, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(NumberInputLayer, init, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(NumberInputLayer, registerWithTouchDispatcher, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(NumberInputLayer, keyBackClicked, )
		}
	};
}
