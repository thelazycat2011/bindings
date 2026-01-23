#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/FLAlertLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getBtn1
		#define GEODE_STATICS_getBtn1
		GEODE_AS_STATIC_FUNCTION(getBtn1) 
	#endif

	#ifndef GEODE_STATICS_getBtn2
		#define GEODE_STATICS_getBtn2
		GEODE_AS_STATIC_FUNCTION(getBtn2) 
	#endif

	#ifndef GEODE_STATICS_getInternalLayer
		#define GEODE_STATICS_getInternalLayer
		GEODE_AS_STATIC_FUNCTION(getInternalLayer) 
	#endif

	#ifndef GEODE_STATICS_getPParent
		#define GEODE_STATICS_getPParent
		GEODE_AS_STATIC_FUNCTION(getPParent) 
	#endif

	#ifndef GEODE_STATICS_getReverseKeyBack
		#define GEODE_STATICS_getReverseKeyBack
		GEODE_AS_STATIC_FUNCTION(getReverseKeyBack) 
	#endif

	#ifndef GEODE_STATICS_getShowInstant
		#define GEODE_STATICS_getShowInstant
		GEODE_AS_STATIC_FUNCTION(getShowInstant) 
	#endif

	#ifndef GEODE_STATICS_getTargetScene
		#define GEODE_STATICS_getTargetScene
		GEODE_AS_STATIC_FUNCTION(getTargetScene) 
	#endif

	#ifndef GEODE_STATICS_getZValue
		#define GEODE_STATICS_getZValue
		GEODE_AS_STATIC_FUNCTION(getZValue) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onBtn1
		#define GEODE_STATICS_onBtn1
		GEODE_AS_STATIC_FUNCTION(onBtn1) 
	#endif

	#ifndef GEODE_STATICS_onBtn2
		#define GEODE_STATICS_onBtn2
		GEODE_AS_STATIC_FUNCTION(onBtn2) 
	#endif

	#ifndef GEODE_STATICS_setBtn1
		#define GEODE_STATICS_setBtn1
		GEODE_AS_STATIC_FUNCTION(setBtn1) 
	#endif

	#ifndef GEODE_STATICS_setBtn2
		#define GEODE_STATICS_setBtn2
		GEODE_AS_STATIC_FUNCTION(setBtn2) 
	#endif

	#ifndef GEODE_STATICS_setPParent
		#define GEODE_STATICS_setPParent
		GEODE_AS_STATIC_FUNCTION(setPParent) 
	#endif

	#ifndef GEODE_STATICS_setReverseKeyBack
		#define GEODE_STATICS_setReverseKeyBack
		GEODE_AS_STATIC_FUNCTION(setReverseKeyBack) 
	#endif

	#ifndef GEODE_STATICS_setShowInstant
		#define GEODE_STATICS_setShowInstant
		GEODE_AS_STATIC_FUNCTION(setShowInstant) 
	#endif

	#ifndef GEODE_STATICS_setTargetScene
		#define GEODE_STATICS_setTargetScene
		GEODE_AS_STATIC_FUNCTION(setTargetScene) 
	#endif

	#ifndef GEODE_STATICS_setZValue
		#define GEODE_STATICS_setZValue
		GEODE_AS_STATIC_FUNCTION(setZValue) 
	#endif

	#ifndef GEODE_STATICS_onEnter
		#define GEODE_STATICS_onEnter
		GEODE_AS_STATIC_FUNCTION(onEnter) 
	#endif

	#ifndef GEODE_STATICS_ccTouchBegan
		#define GEODE_STATICS_ccTouchBegan
		GEODE_AS_STATIC_FUNCTION(ccTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_ccTouchMoved
		#define GEODE_STATICS_ccTouchMoved
		GEODE_AS_STATIC_FUNCTION(ccTouchMoved) 
	#endif

	#ifndef GEODE_STATICS_ccTouchEnded
		#define GEODE_STATICS_ccTouchEnded
		GEODE_AS_STATIC_FUNCTION(ccTouchEnded) 
	#endif

	#ifndef GEODE_STATICS_ccTouchCancelled
		#define GEODE_STATICS_ccTouchCancelled
		GEODE_AS_STATIC_FUNCTION(ccTouchCancelled) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_keyDown
		#define GEODE_STATICS_keyDown
		GEODE_AS_STATIC_FUNCTION(keyDown) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBtn1
		#define GEODE_CONCEPT_CHECK_getBtn1
		GEODE_CONCEPT_FUNCTION_CHECK(getBtn1) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBtn2
		#define GEODE_CONCEPT_CHECK_getBtn2
		GEODE_CONCEPT_FUNCTION_CHECK(getBtn2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getInternalLayer
		#define GEODE_CONCEPT_CHECK_getInternalLayer
		GEODE_CONCEPT_FUNCTION_CHECK(getInternalLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPParent
		#define GEODE_CONCEPT_CHECK_getPParent
		GEODE_CONCEPT_FUNCTION_CHECK(getPParent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getReverseKeyBack
		#define GEODE_CONCEPT_CHECK_getReverseKeyBack
		GEODE_CONCEPT_FUNCTION_CHECK(getReverseKeyBack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getShowInstant
		#define GEODE_CONCEPT_CHECK_getShowInstant
		GEODE_CONCEPT_FUNCTION_CHECK(getShowInstant) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTargetScene
		#define GEODE_CONCEPT_CHECK_getTargetScene
		GEODE_CONCEPT_FUNCTION_CHECK(getTargetScene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getZValue
		#define GEODE_CONCEPT_CHECK_getZValue
		GEODE_CONCEPT_FUNCTION_CHECK(getZValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBtn1
		#define GEODE_CONCEPT_CHECK_onBtn1
		GEODE_CONCEPT_FUNCTION_CHECK(onBtn1) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBtn2
		#define GEODE_CONCEPT_CHECK_onBtn2
		GEODE_CONCEPT_FUNCTION_CHECK(onBtn2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setBtn1
		#define GEODE_CONCEPT_CHECK_setBtn1
		GEODE_CONCEPT_FUNCTION_CHECK(setBtn1) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setBtn2
		#define GEODE_CONCEPT_CHECK_setBtn2
		GEODE_CONCEPT_FUNCTION_CHECK(setBtn2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPParent
		#define GEODE_CONCEPT_CHECK_setPParent
		GEODE_CONCEPT_FUNCTION_CHECK(setPParent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setReverseKeyBack
		#define GEODE_CONCEPT_CHECK_setReverseKeyBack
		GEODE_CONCEPT_FUNCTION_CHECK(setReverseKeyBack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setShowInstant
		#define GEODE_CONCEPT_CHECK_setShowInstant
		GEODE_CONCEPT_FUNCTION_CHECK(setShowInstant) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTargetScene
		#define GEODE_CONCEPT_CHECK_setTargetScene
		GEODE_CONCEPT_FUNCTION_CHECK(setTargetScene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setZValue
		#define GEODE_CONCEPT_CHECK_setZValue
		GEODE_CONCEPT_FUNCTION_CHECK(setZValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEnter
		#define GEODE_CONCEPT_CHECK_onEnter
		GEODE_CONCEPT_FUNCTION_CHECK(onEnter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchBegan
		#define GEODE_CONCEPT_CHECK_ccTouchBegan
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchBegan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchMoved
		#define GEODE_CONCEPT_CHECK_ccTouchMoved
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchMoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchEnded
		#define GEODE_CONCEPT_CHECK_ccTouchEnded
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchEnded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchCancelled
		#define GEODE_CONCEPT_CHECK_ccTouchCancelled
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchCancelled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		#define GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		GEODE_CONCEPT_FUNCTION_CHECK(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyDown
		#define GEODE_CONCEPT_CHECK_keyDown
		GEODE_CONCEPT_FUNCTION_CHECK(keyDown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_show
		#define GEODE_CONCEPT_CHECK_show
		GEODE_CONCEPT_FUNCTION_CHECK(show) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, FLAlertLayer> : ModifyBase<ModifyDerive<Der, FLAlertLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FLAlertLayer>>;
		using ModifyBase<ModifyDerive<Der, FLAlertLayer>>::ModifyBase;
		using Base = FLAlertLayer;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FLAlertLayer, create, FLAlertLayerProtocol*, char const*, gd::string, char const*, char const*, float, bool, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FLAlertLayer, create, FLAlertLayerProtocol*, char const*, gd::string, char const*, char const*, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FLAlertLayer, create, FLAlertLayerProtocol*, char const*, gd::string, char const*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FLAlertLayer, create, char const*, gd::string, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FLAlertLayer, getBtn1, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FLAlertLayer, getBtn2, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FLAlertLayer, getInternalLayer, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FLAlertLayer, getPParent, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FLAlertLayer, getReverseKeyBack, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FLAlertLayer, getShowInstant, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FLAlertLayer, getTargetScene, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FLAlertLayer, getZValue, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FLAlertLayer, init, FLAlertLayerProtocol*, char const*, gd::string, char const*, char const*, float, bool, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FLAlertLayer, onBtn1, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FLAlertLayer, onBtn2, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FLAlertLayer, setBtn1, ButtonSprite*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FLAlertLayer, setBtn2, ButtonSprite*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FLAlertLayer, setPParent, FLAlertLayerProtocol*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FLAlertLayer, setReverseKeyBack, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FLAlertLayer, setShowInstant, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FLAlertLayer, setTargetScene, cocos2d::CCNode*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FLAlertLayer, setZValue, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FLAlertLayer, onEnter, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FLAlertLayer, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FLAlertLayer, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FLAlertLayer, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FLAlertLayer, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FLAlertLayer, registerWithTouchDispatcher, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FLAlertLayer, keyBackClicked, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FLAlertLayer, keyDown, cocos2d::enumKeyCodes)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FLAlertLayer, show, )
		}
	};
}
