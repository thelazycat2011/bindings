#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LoadingCircle.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_fadeAndRemove
		#define GEODE_STATICS_fadeAndRemove
		GEODE_AS_STATIC_FUNCTION(fadeAndRemove) 
	#endif

	#ifndef GEODE_STATICS_getCircle
		#define GEODE_STATICS_getCircle
		GEODE_AS_STATIC_FUNCTION(getCircle) 
	#endif

	#ifndef GEODE_STATICS_getDarkOverlay
		#define GEODE_STATICS_getDarkOverlay
		GEODE_AS_STATIC_FUNCTION(getDarkOverlay) 
	#endif

	#ifndef GEODE_STATICS_getTargetScene
		#define GEODE_STATICS_getTargetScene
		GEODE_AS_STATIC_FUNCTION(getTargetScene) 
	#endif

	#ifndef GEODE_STATICS_setDarkOverlay
		#define GEODE_STATICS_setDarkOverlay
		GEODE_AS_STATIC_FUNCTION(setDarkOverlay) 
	#endif

	#ifndef GEODE_STATICS_setTargetScene
		#define GEODE_STATICS_setTargetScene
		GEODE_AS_STATIC_FUNCTION(setTargetScene) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
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

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fadeAndRemove
		#define GEODE_CONCEPT_CHECK_fadeAndRemove
		GEODE_CONCEPT_FUNCTION_CHECK(fadeAndRemove) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCircle
		#define GEODE_CONCEPT_CHECK_getCircle
		GEODE_CONCEPT_FUNCTION_CHECK(getCircle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDarkOverlay
		#define GEODE_CONCEPT_CHECK_getDarkOverlay
		GEODE_CONCEPT_FUNCTION_CHECK(getDarkOverlay) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTargetScene
		#define GEODE_CONCEPT_CHECK_getTargetScene
		GEODE_CONCEPT_FUNCTION_CHECK(getTargetScene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDarkOverlay
		#define GEODE_CONCEPT_CHECK_setDarkOverlay
		GEODE_CONCEPT_FUNCTION_CHECK(setDarkOverlay) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTargetScene
		#define GEODE_CONCEPT_CHECK_setTargetScene
		GEODE_CONCEPT_FUNCTION_CHECK(setTargetScene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_show
		#define GEODE_CONCEPT_CHECK_show
		GEODE_CONCEPT_FUNCTION_CHECK(show) 
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


	template<class Der>
	struct ModifyDerive<Der, LoadingCircle> : ModifyBase<ModifyDerive<Der, LoadingCircle>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LoadingCircle>>;
		using ModifyBase<ModifyDerive<Der, LoadingCircle>>::ModifyBase;
		using Base = LoadingCircle;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LoadingCircle, create, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LoadingCircle, fadeAndRemove, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LoadingCircle, getCircle, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LoadingCircle, getDarkOverlay, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LoadingCircle, getTargetScene, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LoadingCircle, setDarkOverlay, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LoadingCircle, setTargetScene, cocos2d::CCNode*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LoadingCircle, show, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LoadingCircle, init, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LoadingCircle, draw, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LoadingCircle, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LoadingCircle, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LoadingCircle, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LoadingCircle, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LoadingCircle, registerWithTouchDispatcher, )
		}
	};
}
