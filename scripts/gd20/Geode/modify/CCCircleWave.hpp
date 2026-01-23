#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCCircleWave.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_baseSetup
		#define GEODE_STATICS_baseSetup
		GEODE_AS_STATIC_FUNCTION(baseSetup) 
	#endif

	#ifndef GEODE_STATICS_followObject
		#define GEODE_STATICS_followObject
		GEODE_AS_STATIC_FUNCTION(followObject) 
	#endif

	#ifndef GEODE_STATICS_getBlendAdditive
		#define GEODE_STATICS_getBlendAdditive
		GEODE_AS_STATIC_FUNCTION(getBlendAdditive) 
	#endif

	#ifndef GEODE_STATICS_getCircleMode
		#define GEODE_STATICS_getCircleMode
		GEODE_AS_STATIC_FUNCTION(getCircleMode) 
	#endif

	#ifndef GEODE_STATICS_getColor
		#define GEODE_STATICS_getColor
		GEODE_AS_STATIC_FUNCTION(getColor) 
	#endif

	#ifndef GEODE_STATICS_getDelegate
		#define GEODE_STATICS_getDelegate
		GEODE_AS_STATIC_FUNCTION(getDelegate) 
	#endif

	#ifndef GEODE_STATICS_getLineWidth
		#define GEODE_STATICS_getLineWidth
		GEODE_AS_STATIC_FUNCTION(getLineWidth) 
	#endif

	#ifndef GEODE_STATICS_getOpacity
		#define GEODE_STATICS_getOpacity
		GEODE_AS_STATIC_FUNCTION(getOpacity) 
	#endif

	#ifndef GEODE_STATICS_getOpacityMod
		#define GEODE_STATICS_getOpacityMod
		GEODE_AS_STATIC_FUNCTION(getOpacityMod) 
	#endif

	#ifndef GEODE_STATICS_getRadius
		#define GEODE_STATICS_getRadius
		GEODE_AS_STATIC_FUNCTION(getRadius) 
	#endif

	#ifndef GEODE_STATICS_getWidth
		#define GEODE_STATICS_getWidth
		GEODE_AS_STATIC_FUNCTION(getWidth) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setBlendAdditive
		#define GEODE_STATICS_setBlendAdditive
		GEODE_AS_STATIC_FUNCTION(setBlendAdditive) 
	#endif

	#ifndef GEODE_STATICS_setCircleMode
		#define GEODE_STATICS_setCircleMode
		GEODE_AS_STATIC_FUNCTION(setCircleMode) 
	#endif

	#ifndef GEODE_STATICS_setColor
		#define GEODE_STATICS_setColor
		GEODE_AS_STATIC_FUNCTION(setColor) 
	#endif

	#ifndef GEODE_STATICS_setDelegate
		#define GEODE_STATICS_setDelegate
		GEODE_AS_STATIC_FUNCTION(setDelegate) 
	#endif

	#ifndef GEODE_STATICS_setLineWidth
		#define GEODE_STATICS_setLineWidth
		GEODE_AS_STATIC_FUNCTION(setLineWidth) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_setOpacityMod
		#define GEODE_STATICS_setOpacityMod
		GEODE_AS_STATIC_FUNCTION(setOpacityMod) 
	#endif

	#ifndef GEODE_STATICS_setPosition
		#define GEODE_STATICS_setPosition
		GEODE_AS_STATIC_FUNCTION(setPosition) 
	#endif

	#ifndef GEODE_STATICS_setRadius
		#define GEODE_STATICS_setRadius
		GEODE_AS_STATIC_FUNCTION(setRadius) 
	#endif

	#ifndef GEODE_STATICS_setWidth
		#define GEODE_STATICS_setWidth
		GEODE_AS_STATIC_FUNCTION(setWidth) 
	#endif

	#ifndef GEODE_STATICS_updatePosition
		#define GEODE_STATICS_updatePosition
		GEODE_AS_STATIC_FUNCTION(updatePosition) 
	#endif

	#ifndef GEODE_STATICS_getPosition
		#define GEODE_STATICS_getPosition
		GEODE_AS_STATIC_FUNCTION(getPosition) 
	#endif

	#ifndef GEODE_STATICS_removeMeAndCleanup
		#define GEODE_STATICS_removeMeAndCleanup
		GEODE_AS_STATIC_FUNCTION(removeMeAndCleanup) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_updateTweenAction
		#define GEODE_STATICS_updateTweenAction
		GEODE_AS_STATIC_FUNCTION(updateTweenAction) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_baseSetup
		#define GEODE_CONCEPT_CHECK_baseSetup
		GEODE_CONCEPT_FUNCTION_CHECK(baseSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_followObject
		#define GEODE_CONCEPT_CHECK_followObject
		GEODE_CONCEPT_FUNCTION_CHECK(followObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBlendAdditive
		#define GEODE_CONCEPT_CHECK_getBlendAdditive
		GEODE_CONCEPT_FUNCTION_CHECK(getBlendAdditive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCircleMode
		#define GEODE_CONCEPT_CHECK_getCircleMode
		GEODE_CONCEPT_FUNCTION_CHECK(getCircleMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getColor
		#define GEODE_CONCEPT_CHECK_getColor
		GEODE_CONCEPT_FUNCTION_CHECK(getColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDelegate
		#define GEODE_CONCEPT_CHECK_getDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(getDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLineWidth
		#define GEODE_CONCEPT_CHECK_getLineWidth
		GEODE_CONCEPT_FUNCTION_CHECK(getLineWidth) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOpacity
		#define GEODE_CONCEPT_CHECK_getOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(getOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOpacityMod
		#define GEODE_CONCEPT_CHECK_getOpacityMod
		GEODE_CONCEPT_FUNCTION_CHECK(getOpacityMod) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRadius
		#define GEODE_CONCEPT_CHECK_getRadius
		GEODE_CONCEPT_FUNCTION_CHECK(getRadius) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getWidth
		#define GEODE_CONCEPT_CHECK_getWidth
		GEODE_CONCEPT_FUNCTION_CHECK(getWidth) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setBlendAdditive
		#define GEODE_CONCEPT_CHECK_setBlendAdditive
		GEODE_CONCEPT_FUNCTION_CHECK(setBlendAdditive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCircleMode
		#define GEODE_CONCEPT_CHECK_setCircleMode
		GEODE_CONCEPT_FUNCTION_CHECK(setCircleMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setColor
		#define GEODE_CONCEPT_CHECK_setColor
		GEODE_CONCEPT_FUNCTION_CHECK(setColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDelegate
		#define GEODE_CONCEPT_CHECK_setDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(setDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLineWidth
		#define GEODE_CONCEPT_CHECK_setLineWidth
		GEODE_CONCEPT_FUNCTION_CHECK(setLineWidth) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOpacity
		#define GEODE_CONCEPT_CHECK_setOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(setOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOpacityMod
		#define GEODE_CONCEPT_CHECK_setOpacityMod
		GEODE_CONCEPT_FUNCTION_CHECK(setOpacityMod) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPosition
		#define GEODE_CONCEPT_CHECK_setPosition
		GEODE_CONCEPT_FUNCTION_CHECK(setPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRadius
		#define GEODE_CONCEPT_CHECK_setRadius
		GEODE_CONCEPT_FUNCTION_CHECK(setRadius) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setWidth
		#define GEODE_CONCEPT_CHECK_setWidth
		GEODE_CONCEPT_FUNCTION_CHECK(setWidth) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePosition
		#define GEODE_CONCEPT_CHECK_updatePosition
		GEODE_CONCEPT_FUNCTION_CHECK(updatePosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPosition
		#define GEODE_CONCEPT_CHECK_getPosition
		GEODE_CONCEPT_FUNCTION_CHECK(getPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeMeAndCleanup
		#define GEODE_CONCEPT_CHECK_removeMeAndCleanup
		GEODE_CONCEPT_FUNCTION_CHECK(removeMeAndCleanup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTweenAction
		#define GEODE_CONCEPT_CHECK_updateTweenAction
		GEODE_CONCEPT_FUNCTION_CHECK(updateTweenAction) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCCircleWave> : ModifyBase<ModifyDerive<Der, CCCircleWave>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCCircleWave>>;
		using ModifyBase<ModifyDerive<Der, CCCircleWave>>::ModifyBase;
		using Base = CCCircleWave;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCCircleWave, create, float, float, float, bool, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCCircleWave, create, float, float, float, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCCircleWave, baseSetup, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCCircleWave, followObject, cocos2d::CCNode*, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCCircleWave, getBlendAdditive, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCCircleWave, getCircleMode, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCCircleWave, getColor, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCCircleWave, getDelegate, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCCircleWave, getLineWidth, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCCircleWave, getOpacity, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCCircleWave, getOpacityMod, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCCircleWave, getRadius, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCCircleWave, getWidth, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCCircleWave, init, float, float, float, bool, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCCircleWave, setBlendAdditive, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCCircleWave, setCircleMode, CircleMode)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCCircleWave, setColor, cocos2d::ccColor3B)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCCircleWave, setDelegate, CCCircleWaveDelegate*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCCircleWave, setLineWidth, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCCircleWave, setOpacity, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCCircleWave, setOpacityMod, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCCircleWave, setPosition, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCCircleWave, setRadius, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCCircleWave, setWidth, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCCircleWave, updatePosition, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCCircleWave, getPosition, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCCircleWave, removeMeAndCleanup, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCCircleWave, draw, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCCircleWave, updateTweenAction, float, char const*)
		}
	};
}
