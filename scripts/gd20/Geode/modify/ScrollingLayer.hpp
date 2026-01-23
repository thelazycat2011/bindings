#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ScrollingLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getInternalLayer
		#define GEODE_STATICS_getInternalLayer
		GEODE_AS_STATIC_FUNCTION(getInternalLayer) 
	#endif

	#ifndef GEODE_STATICS_getScaleParent
		#define GEODE_STATICS_getScaleParent
		GEODE_AS_STATIC_FUNCTION(getScaleParent) 
	#endif

	#ifndef GEODE_STATICS_getViewRect
		#define GEODE_STATICS_getViewRect
		GEODE_AS_STATIC_FUNCTION(getViewRect) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setScaleParent
		#define GEODE_STATICS_setScaleParent
		GEODE_AS_STATIC_FUNCTION(setScaleParent) 
	#endif

	#ifndef GEODE_STATICS_setStartOffset
		#define GEODE_STATICS_setStartOffset
		GEODE_AS_STATIC_FUNCTION(setStartOffset) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_visit
		#define GEODE_STATICS_visit
		GEODE_AS_STATIC_FUNCTION(visit) 
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

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getInternalLayer
		#define GEODE_CONCEPT_CHECK_getInternalLayer
		GEODE_CONCEPT_FUNCTION_CHECK(getInternalLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getScaleParent
		#define GEODE_CONCEPT_CHECK_getScaleParent
		GEODE_CONCEPT_FUNCTION_CHECK(getScaleParent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getViewRect
		#define GEODE_CONCEPT_CHECK_getViewRect
		GEODE_CONCEPT_FUNCTION_CHECK(getViewRect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setScaleParent
		#define GEODE_CONCEPT_CHECK_setScaleParent
		GEODE_CONCEPT_FUNCTION_CHECK(setScaleParent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStartOffset
		#define GEODE_CONCEPT_CHECK_setStartOffset
		GEODE_CONCEPT_FUNCTION_CHECK(setStartOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_visit
		#define GEODE_CONCEPT_CHECK_visit
		GEODE_CONCEPT_FUNCTION_CHECK(visit) 
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


	template<class Der>
	struct ModifyDerive<Der, ScrollingLayer> : ModifyBase<ModifyDerive<Der, ScrollingLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ScrollingLayer>>;
		using ModifyBase<ModifyDerive<Der, ScrollingLayer>>::ModifyBase;
		using Base = ScrollingLayer;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ScrollingLayer, create, cocos2d::CCSize, cocos2d::CCPoint, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ScrollingLayer, getInternalLayer, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ScrollingLayer, getScaleParent, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ScrollingLayer, getViewRect, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ScrollingLayer, init, cocos2d::CCSize, cocos2d::CCPoint, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ScrollingLayer, setScaleParent, cocos2d::CCNode*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ScrollingLayer, setStartOffset, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ScrollingLayer, draw, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ScrollingLayer, visit, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ScrollingLayer, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ScrollingLayer, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ScrollingLayer, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ScrollingLayer, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
		}
	};
}
