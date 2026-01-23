#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SliderTouchLogic.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getLiveDragging
		#define GEODE_STATICS_getLiveDragging
		GEODE_AS_STATIC_FUNCTION(getLiveDragging) 
	#endif

	#ifndef GEODE_STATICS_getSliderDelegate
		#define GEODE_STATICS_getSliderDelegate
		GEODE_AS_STATIC_FUNCTION(getSliderDelegate) 
	#endif

	#ifndef GEODE_STATICS_getThumb
		#define GEODE_STATICS_getThumb
		GEODE_AS_STATIC_FUNCTION(getThumb) 
	#endif

	#ifndef GEODE_STATICS_getTouchOffset
		#define GEODE_STATICS_getTouchOffset
		GEODE_AS_STATIC_FUNCTION(getTouchOffset) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setLiveDragging
		#define GEODE_STATICS_setLiveDragging
		GEODE_AS_STATIC_FUNCTION(setLiveDragging) 
	#endif

	#ifndef GEODE_STATICS_setSliderDelegate
		#define GEODE_STATICS_setSliderDelegate
		GEODE_AS_STATIC_FUNCTION(setSliderDelegate) 
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

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLiveDragging
		#define GEODE_CONCEPT_CHECK_getLiveDragging
		GEODE_CONCEPT_FUNCTION_CHECK(getLiveDragging) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSliderDelegate
		#define GEODE_CONCEPT_CHECK_getSliderDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(getSliderDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getThumb
		#define GEODE_CONCEPT_CHECK_getThumb
		GEODE_CONCEPT_FUNCTION_CHECK(getThumb) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTouchOffset
		#define GEODE_CONCEPT_CHECK_getTouchOffset
		GEODE_CONCEPT_FUNCTION_CHECK(getTouchOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLiveDragging
		#define GEODE_CONCEPT_CHECK_setLiveDragging
		GEODE_CONCEPT_FUNCTION_CHECK(setLiveDragging) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSliderDelegate
		#define GEODE_CONCEPT_CHECK_setSliderDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(setSliderDelegate) 
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

	#ifndef GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		#define GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		GEODE_CONCEPT_FUNCTION_CHECK(registerWithTouchDispatcher) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SliderTouchLogic> : ModifyBase<ModifyDerive<Der, SliderTouchLogic>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SliderTouchLogic>>;
		using ModifyBase<ModifyDerive<Der, SliderTouchLogic>>::ModifyBase;
		using Base = SliderTouchLogic;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SliderTouchLogic, create, cocos2d::CCNode*, cocos2d::SEL_MenuHandler, char const*, char const*, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SliderTouchLogic, getLiveDragging, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SliderTouchLogic, getSliderDelegate, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SliderTouchLogic, getThumb, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SliderTouchLogic, getTouchOffset, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SliderTouchLogic, init, cocos2d::CCNode*, cocos2d::SEL_MenuHandler, char const*, char const*, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SliderTouchLogic, setLiveDragging, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SliderTouchLogic, setSliderDelegate, Slider*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SliderTouchLogic, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SliderTouchLogic, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SliderTouchLogic, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SliderTouchLogic, registerWithTouchDispatcher, )
		}
	};
}
