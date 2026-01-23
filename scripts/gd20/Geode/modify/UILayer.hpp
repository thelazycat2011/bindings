#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/UILayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_disableMenu
		#define GEODE_STATICS_disableMenu
		GEODE_AS_STATIC_FUNCTION(disableMenu) 
	#endif

	#ifndef GEODE_STATICS_enableMenu
		#define GEODE_STATICS_enableMenu
		GEODE_AS_STATIC_FUNCTION(enableMenu) 
	#endif

	#ifndef GEODE_STATICS_getClkTimer
		#define GEODE_STATICS_getClkTimer
		GEODE_AS_STATIC_FUNCTION(getClkTimer) 
	#endif

	#ifndef GEODE_STATICS_onCheck
		#define GEODE_STATICS_onCheck
		GEODE_AS_STATIC_FUNCTION(onCheck) 
	#endif

	#ifndef GEODE_STATICS_onDeleteCheck
		#define GEODE_STATICS_onDeleteCheck
		GEODE_AS_STATIC_FUNCTION(onDeleteCheck) 
	#endif

	#ifndef GEODE_STATICS_onPause
		#define GEODE_STATICS_onPause
		GEODE_AS_STATIC_FUNCTION(onPause) 
	#endif

	#ifndef GEODE_STATICS_pCommand
		#define GEODE_STATICS_pCommand
		GEODE_AS_STATIC_FUNCTION(pCommand) 
	#endif

	#ifndef GEODE_STATICS_toggleCheckpointsMenu
		#define GEODE_STATICS_toggleCheckpointsMenu
		GEODE_AS_STATIC_FUNCTION(toggleCheckpointsMenu) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
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

	#ifndef GEODE_STATICS_keyUp
		#define GEODE_STATICS_keyUp
		GEODE_AS_STATIC_FUNCTION(keyUp) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_disableMenu
		#define GEODE_CONCEPT_CHECK_disableMenu
		GEODE_CONCEPT_FUNCTION_CHECK(disableMenu) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_enableMenu
		#define GEODE_CONCEPT_CHECK_enableMenu
		GEODE_CONCEPT_FUNCTION_CHECK(enableMenu) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getClkTimer
		#define GEODE_CONCEPT_CHECK_getClkTimer
		GEODE_CONCEPT_FUNCTION_CHECK(getClkTimer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCheck
		#define GEODE_CONCEPT_CHECK_onCheck
		GEODE_CONCEPT_FUNCTION_CHECK(onCheck) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeleteCheck
		#define GEODE_CONCEPT_CHECK_onDeleteCheck
		GEODE_CONCEPT_FUNCTION_CHECK(onDeleteCheck) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPause
		#define GEODE_CONCEPT_CHECK_onPause
		GEODE_CONCEPT_FUNCTION_CHECK(onPause) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pCommand
		#define GEODE_CONCEPT_CHECK_pCommand
		GEODE_CONCEPT_FUNCTION_CHECK(pCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleCheckpointsMenu
		#define GEODE_CONCEPT_CHECK_toggleCheckpointsMenu
		GEODE_CONCEPT_FUNCTION_CHECK(toggleCheckpointsMenu) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
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

	#ifndef GEODE_CONCEPT_CHECK_keyUp
		#define GEODE_CONCEPT_CHECK_keyUp
		GEODE_CONCEPT_FUNCTION_CHECK(keyUp) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, UILayer> : ModifyBase<ModifyDerive<Der, UILayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, UILayer>>;
		using ModifyBase<ModifyDerive<Der, UILayer>>::ModifyBase;
		using Base = UILayer;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(UILayer, create, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(UILayer, disableMenu, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(UILayer, enableMenu, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(UILayer, getClkTimer, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(UILayer, onCheck, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(UILayer, onDeleteCheck, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(UILayer, onPause, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(UILayer, pCommand, cocos2d::CCNode*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(UILayer, toggleCheckpointsMenu, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(UILayer, init, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(UILayer, draw, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(UILayer, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(UILayer, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(UILayer, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(UILayer, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(UILayer, registerWithTouchDispatcher, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(UILayer, keyBackClicked, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(UILayer, keyDown, cocos2d::enumKeyCodes)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(UILayer, keyUp, cocos2d::enumKeyCodes)
		}
	};
}
