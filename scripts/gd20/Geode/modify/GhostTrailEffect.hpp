#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GhostTrailEffect.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_doBlendAdditive
		#define GEODE_STATICS_doBlendAdditive
		GEODE_AS_STATIC_FUNCTION(doBlendAdditive) 
	#endif

	#ifndef GEODE_STATICS_getBlendFunc
		#define GEODE_STATICS_getBlendFunc
		GEODE_AS_STATIC_FUNCTION(getBlendFunc) 
	#endif

	#ifndef GEODE_STATICS_getDelegate
		#define GEODE_STATICS_getDelegate
		GEODE_AS_STATIC_FUNCTION(getDelegate) 
	#endif

	#ifndef GEODE_STATICS_getGhostColor
		#define GEODE_STATICS_getGhostColor
		GEODE_AS_STATIC_FUNCTION(getGhostColor) 
	#endif

	#ifndef GEODE_STATICS_getInternalOffset
		#define GEODE_STATICS_getInternalOffset
		GEODE_AS_STATIC_FUNCTION(getInternalOffset) 
	#endif

	#ifndef GEODE_STATICS_getPosTarget
		#define GEODE_STATICS_getPosTarget
		GEODE_AS_STATIC_FUNCTION(getPosTarget) 
	#endif

	#ifndef GEODE_STATICS_getPTarget
		#define GEODE_STATICS_getPTarget
		GEODE_AS_STATIC_FUNCTION(getPTarget) 
	#endif

	#ifndef GEODE_STATICS_getScaleMod
		#define GEODE_STATICS_getScaleMod
		GEODE_AS_STATIC_FUNCTION(getScaleMod) 
	#endif

	#ifndef GEODE_STATICS_getStartAlpha
		#define GEODE_STATICS_getStartAlpha
		GEODE_AS_STATIC_FUNCTION(getStartAlpha) 
	#endif

	#ifndef GEODE_STATICS_getTarget
		#define GEODE_STATICS_getTarget
		GEODE_AS_STATIC_FUNCTION(getTarget) 
	#endif

	#ifndef GEODE_STATICS_getUsePosScale
		#define GEODE_STATICS_getUsePosScale
		GEODE_AS_STATIC_FUNCTION(getUsePosScale) 
	#endif

	#ifndef GEODE_STATICS_runWithTarget
		#define GEODE_STATICS_runWithTarget
		GEODE_AS_STATIC_FUNCTION(runWithTarget) 
	#endif

	#ifndef GEODE_STATICS_setBlendFunc
		#define GEODE_STATICS_setBlendFunc
		GEODE_AS_STATIC_FUNCTION(setBlendFunc) 
	#endif

	#ifndef GEODE_STATICS_setDelegate
		#define GEODE_STATICS_setDelegate
		GEODE_AS_STATIC_FUNCTION(setDelegate) 
	#endif

	#ifndef GEODE_STATICS_setGhostColor
		#define GEODE_STATICS_setGhostColor
		GEODE_AS_STATIC_FUNCTION(setGhostColor) 
	#endif

	#ifndef GEODE_STATICS_setInternalOffset
		#define GEODE_STATICS_setInternalOffset
		GEODE_AS_STATIC_FUNCTION(setInternalOffset) 
	#endif

	#ifndef GEODE_STATICS_setPosTarget
		#define GEODE_STATICS_setPosTarget
		GEODE_AS_STATIC_FUNCTION(setPosTarget) 
	#endif

	#ifndef GEODE_STATICS_setPTarget
		#define GEODE_STATICS_setPTarget
		GEODE_AS_STATIC_FUNCTION(setPTarget) 
	#endif

	#ifndef GEODE_STATICS_setScaleMod
		#define GEODE_STATICS_setScaleMod
		GEODE_AS_STATIC_FUNCTION(setScaleMod) 
	#endif

	#ifndef GEODE_STATICS_setStartAlpha
		#define GEODE_STATICS_setStartAlpha
		GEODE_AS_STATIC_FUNCTION(setStartAlpha) 
	#endif

	#ifndef GEODE_STATICS_setTarget
		#define GEODE_STATICS_setTarget
		GEODE_AS_STATIC_FUNCTION(setTarget) 
	#endif

	#ifndef GEODE_STATICS_setUsePosScale
		#define GEODE_STATICS_setUsePosScale
		GEODE_AS_STATIC_FUNCTION(setUsePosScale) 
	#endif

	#ifndef GEODE_STATICS_stopTrail
		#define GEODE_STATICS_stopTrail
		GEODE_AS_STATIC_FUNCTION(stopTrail) 
	#endif

	#ifndef GEODE_STATICS_trailSnapshot
		#define GEODE_STATICS_trailSnapshot
		GEODE_AS_STATIC_FUNCTION(trailSnapshot) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_doBlendAdditive
		#define GEODE_CONCEPT_CHECK_doBlendAdditive
		GEODE_CONCEPT_FUNCTION_CHECK(doBlendAdditive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBlendFunc
		#define GEODE_CONCEPT_CHECK_getBlendFunc
		GEODE_CONCEPT_FUNCTION_CHECK(getBlendFunc) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDelegate
		#define GEODE_CONCEPT_CHECK_getDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(getDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGhostColor
		#define GEODE_CONCEPT_CHECK_getGhostColor
		GEODE_CONCEPT_FUNCTION_CHECK(getGhostColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getInternalOffset
		#define GEODE_CONCEPT_CHECK_getInternalOffset
		GEODE_CONCEPT_FUNCTION_CHECK(getInternalOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPosTarget
		#define GEODE_CONCEPT_CHECK_getPosTarget
		GEODE_CONCEPT_FUNCTION_CHECK(getPosTarget) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPTarget
		#define GEODE_CONCEPT_CHECK_getPTarget
		GEODE_CONCEPT_FUNCTION_CHECK(getPTarget) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getScaleMod
		#define GEODE_CONCEPT_CHECK_getScaleMod
		GEODE_CONCEPT_FUNCTION_CHECK(getScaleMod) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStartAlpha
		#define GEODE_CONCEPT_CHECK_getStartAlpha
		GEODE_CONCEPT_FUNCTION_CHECK(getStartAlpha) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTarget
		#define GEODE_CONCEPT_CHECK_getTarget
		GEODE_CONCEPT_FUNCTION_CHECK(getTarget) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUsePosScale
		#define GEODE_CONCEPT_CHECK_getUsePosScale
		GEODE_CONCEPT_FUNCTION_CHECK(getUsePosScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_runWithTarget
		#define GEODE_CONCEPT_CHECK_runWithTarget
		GEODE_CONCEPT_FUNCTION_CHECK(runWithTarget) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setBlendFunc
		#define GEODE_CONCEPT_CHECK_setBlendFunc
		GEODE_CONCEPT_FUNCTION_CHECK(setBlendFunc) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDelegate
		#define GEODE_CONCEPT_CHECK_setDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(setDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setGhostColor
		#define GEODE_CONCEPT_CHECK_setGhostColor
		GEODE_CONCEPT_FUNCTION_CHECK(setGhostColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setInternalOffset
		#define GEODE_CONCEPT_CHECK_setInternalOffset
		GEODE_CONCEPT_FUNCTION_CHECK(setInternalOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPosTarget
		#define GEODE_CONCEPT_CHECK_setPosTarget
		GEODE_CONCEPT_FUNCTION_CHECK(setPosTarget) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPTarget
		#define GEODE_CONCEPT_CHECK_setPTarget
		GEODE_CONCEPT_FUNCTION_CHECK(setPTarget) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setScaleMod
		#define GEODE_CONCEPT_CHECK_setScaleMod
		GEODE_CONCEPT_FUNCTION_CHECK(setScaleMod) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStartAlpha
		#define GEODE_CONCEPT_CHECK_setStartAlpha
		GEODE_CONCEPT_FUNCTION_CHECK(setStartAlpha) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTarget
		#define GEODE_CONCEPT_CHECK_setTarget
		GEODE_CONCEPT_FUNCTION_CHECK(setTarget) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUsePosScale
		#define GEODE_CONCEPT_CHECK_setUsePosScale
		GEODE_CONCEPT_FUNCTION_CHECK(setUsePosScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopTrail
		#define GEODE_CONCEPT_CHECK_stopTrail
		GEODE_CONCEPT_FUNCTION_CHECK(stopTrail) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_trailSnapshot
		#define GEODE_CONCEPT_CHECK_trailSnapshot
		GEODE_CONCEPT_FUNCTION_CHECK(trailSnapshot) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GhostTrailEffect> : ModifyBase<ModifyDerive<Der, GhostTrailEffect>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GhostTrailEffect>>;
		using ModifyBase<ModifyDerive<Der, GhostTrailEffect>>::ModifyBase;
		using Base = GhostTrailEffect;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GhostTrailEffect, create, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GhostTrailEffect, doBlendAdditive, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GhostTrailEffect, getBlendFunc, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GhostTrailEffect, getDelegate, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GhostTrailEffect, getGhostColor, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GhostTrailEffect, getInternalOffset, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GhostTrailEffect, getPosTarget, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GhostTrailEffect, getPTarget, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GhostTrailEffect, getScaleMod, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GhostTrailEffect, getStartAlpha, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GhostTrailEffect, getTarget, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GhostTrailEffect, getUsePosScale, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GhostTrailEffect, runWithTarget, cocos2d::CCSprite*, float, float, float, float, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GhostTrailEffect, setBlendFunc, cocos2d::_ccBlendFunc)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GhostTrailEffect, setDelegate, GhostTrailDelegate*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GhostTrailEffect, setGhostColor, cocos2d::ccColor3B)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GhostTrailEffect, setInternalOffset, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GhostTrailEffect, setPosTarget, cocos2d::CCSprite*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GhostTrailEffect, setPTarget, cocos2d::CCNode*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GhostTrailEffect, setScaleMod, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GhostTrailEffect, setStartAlpha, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GhostTrailEffect, setTarget, cocos2d::CCSprite*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GhostTrailEffect, setUsePosScale, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GhostTrailEffect, stopTrail, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GhostTrailEffect, trailSnapshot, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GhostTrailEffect, init, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GhostTrailEffect, draw, )
		}
	};
}
