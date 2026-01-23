#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCAnimatedSprite.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_cleanupSprite
		#define GEODE_STATICS_cleanupSprite
		GEODE_AS_STATIC_FUNCTION(cleanupSprite) 
	#endif

	#ifndef GEODE_STATICS_createWithType
		#define GEODE_STATICS_createWithType
		GEODE_AS_STATIC_FUNCTION(createWithType) 
	#endif

	#ifndef GEODE_STATICS_getActiveSpriteMode
		#define GEODE_STATICS_getActiveSpriteMode
		GEODE_AS_STATIC_FUNCTION(getActiveSpriteMode) 
	#endif

	#ifndef GEODE_STATICS_getActiveTween
		#define GEODE_STATICS_getActiveTween
		GEODE_AS_STATIC_FUNCTION(getActiveTween) 
	#endif

	#ifndef GEODE_STATICS_getAnimatedSprite
		#define GEODE_STATICS_getAnimatedSprite
		GEODE_AS_STATIC_FUNCTION(getAnimatedSprite) 
	#endif

	#ifndef GEODE_STATICS_getAnimManager
		#define GEODE_STATICS_getAnimManager
		GEODE_AS_STATIC_FUNCTION(getAnimManager) 
	#endif

	#ifndef GEODE_STATICS_getDefaultAnimation
		#define GEODE_STATICS_getDefaultAnimation
		GEODE_AS_STATIC_FUNCTION(getDefaultAnimation) 
	#endif

	#ifndef GEODE_STATICS_getDelegate
		#define GEODE_STATICS_getDelegate
		GEODE_AS_STATIC_FUNCTION(getDelegate) 
	#endif

	#ifndef GEODE_STATICS_getNormalSprite
		#define GEODE_STATICS_getNormalSprite
		GEODE_AS_STATIC_FUNCTION(getNormalSprite) 
	#endif

	#ifndef GEODE_STATICS_getSprite
		#define GEODE_STATICS_getSprite
		GEODE_AS_STATIC_FUNCTION(getSprite) 
	#endif

	#ifndef GEODE_STATICS_initWithType
		#define GEODE_STATICS_initWithType
		GEODE_AS_STATIC_FUNCTION(initWithType) 
	#endif

	#ifndef GEODE_STATICS_loadType
		#define GEODE_STATICS_loadType
		GEODE_AS_STATIC_FUNCTION(loadType) 
	#endif

	#ifndef GEODE_STATICS_runAnimation
		#define GEODE_STATICS_runAnimation
		GEODE_AS_STATIC_FUNCTION(runAnimation) 
	#endif

	#ifndef GEODE_STATICS_runAnimationForced
		#define GEODE_STATICS_runAnimationForced
		GEODE_AS_STATIC_FUNCTION(runAnimationForced) 
	#endif

	#ifndef GEODE_STATICS_setAnimatedSprite
		#define GEODE_STATICS_setAnimatedSprite
		GEODE_AS_STATIC_FUNCTION(setAnimatedSprite) 
	#endif

	#ifndef GEODE_STATICS_setColor
		#define GEODE_STATICS_setColor
		GEODE_AS_STATIC_FUNCTION(setColor) 
	#endif

	#ifndef GEODE_STATICS_setDefaultAnimation
		#define GEODE_STATICS_setDefaultAnimation
		GEODE_AS_STATIC_FUNCTION(setDefaultAnimation) 
	#endif

	#ifndef GEODE_STATICS_setDelegate
		#define GEODE_STATICS_setDelegate
		GEODE_AS_STATIC_FUNCTION(setDelegate) 
	#endif

	#ifndef GEODE_STATICS_setNormalSprite
		#define GEODE_STATICS_setNormalSprite
		GEODE_AS_STATIC_FUNCTION(setNormalSprite) 
	#endif

	#ifndef GEODE_STATICS_setSprite
		#define GEODE_STATICS_setSprite
		GEODE_AS_STATIC_FUNCTION(setSprite) 
	#endif

	#ifndef GEODE_STATICS_switchToMode
		#define GEODE_STATICS_switchToMode
		GEODE_AS_STATIC_FUNCTION(switchToMode) 
	#endif

	#ifndef GEODE_STATICS_tweenToAnimation
		#define GEODE_STATICS_tweenToAnimation
		GEODE_AS_STATIC_FUNCTION(tweenToAnimation) 
	#endif

	#ifndef GEODE_STATICS_tweenToAnimationFinished
		#define GEODE_STATICS_tweenToAnimationFinished
		GEODE_AS_STATIC_FUNCTION(tweenToAnimationFinished) 
	#endif

	#ifndef GEODE_STATICS_willPlayAnimation
		#define GEODE_STATICS_willPlayAnimation
		GEODE_AS_STATIC_FUNCTION(willPlayAnimation) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_animationFinished
		#define GEODE_STATICS_animationFinished
		GEODE_AS_STATIC_FUNCTION(animationFinished) 
	#endif

	#ifndef GEODE_STATICS_animationFinishedO
		#define GEODE_STATICS_animationFinishedO
		GEODE_AS_STATIC_FUNCTION(animationFinishedO) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_cleanupSprite
		#define GEODE_CONCEPT_CHECK_cleanupSprite
		GEODE_CONCEPT_FUNCTION_CHECK(cleanupSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithType
		#define GEODE_CONCEPT_CHECK_createWithType
		GEODE_CONCEPT_FUNCTION_CHECK(createWithType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getActiveSpriteMode
		#define GEODE_CONCEPT_CHECK_getActiveSpriteMode
		GEODE_CONCEPT_FUNCTION_CHECK(getActiveSpriteMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getActiveTween
		#define GEODE_CONCEPT_CHECK_getActiveTween
		GEODE_CONCEPT_FUNCTION_CHECK(getActiveTween) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAnimatedSprite
		#define GEODE_CONCEPT_CHECK_getAnimatedSprite
		GEODE_CONCEPT_FUNCTION_CHECK(getAnimatedSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAnimManager
		#define GEODE_CONCEPT_CHECK_getAnimManager
		GEODE_CONCEPT_FUNCTION_CHECK(getAnimManager) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDefaultAnimation
		#define GEODE_CONCEPT_CHECK_getDefaultAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(getDefaultAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDelegate
		#define GEODE_CONCEPT_CHECK_getDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(getDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNormalSprite
		#define GEODE_CONCEPT_CHECK_getNormalSprite
		GEODE_CONCEPT_FUNCTION_CHECK(getNormalSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSprite
		#define GEODE_CONCEPT_CHECK_getSprite
		GEODE_CONCEPT_FUNCTION_CHECK(getSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithType
		#define GEODE_CONCEPT_CHECK_initWithType
		GEODE_CONCEPT_FUNCTION_CHECK(initWithType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadType
		#define GEODE_CONCEPT_CHECK_loadType
		GEODE_CONCEPT_FUNCTION_CHECK(loadType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_runAnimation
		#define GEODE_CONCEPT_CHECK_runAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(runAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_runAnimationForced
		#define GEODE_CONCEPT_CHECK_runAnimationForced
		GEODE_CONCEPT_FUNCTION_CHECK(runAnimationForced) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setAnimatedSprite
		#define GEODE_CONCEPT_CHECK_setAnimatedSprite
		GEODE_CONCEPT_FUNCTION_CHECK(setAnimatedSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setColor
		#define GEODE_CONCEPT_CHECK_setColor
		GEODE_CONCEPT_FUNCTION_CHECK(setColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDefaultAnimation
		#define GEODE_CONCEPT_CHECK_setDefaultAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(setDefaultAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDelegate
		#define GEODE_CONCEPT_CHECK_setDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(setDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setNormalSprite
		#define GEODE_CONCEPT_CHECK_setNormalSprite
		GEODE_CONCEPT_FUNCTION_CHECK(setNormalSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSprite
		#define GEODE_CONCEPT_CHECK_setSprite
		GEODE_CONCEPT_FUNCTION_CHECK(setSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_switchToMode
		#define GEODE_CONCEPT_CHECK_switchToMode
		GEODE_CONCEPT_FUNCTION_CHECK(switchToMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tweenToAnimation
		#define GEODE_CONCEPT_CHECK_tweenToAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(tweenToAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tweenToAnimationFinished
		#define GEODE_CONCEPT_CHECK_tweenToAnimationFinished
		GEODE_CONCEPT_FUNCTION_CHECK(tweenToAnimationFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_willPlayAnimation
		#define GEODE_CONCEPT_CHECK_willPlayAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(willPlayAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOpacity
		#define GEODE_CONCEPT_CHECK_setOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(setOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_animationFinished
		#define GEODE_CONCEPT_CHECK_animationFinished
		GEODE_CONCEPT_FUNCTION_CHECK(animationFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_animationFinishedO
		#define GEODE_CONCEPT_CHECK_animationFinishedO
		GEODE_CONCEPT_FUNCTION_CHECK(animationFinishedO) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCAnimatedSprite> : ModifyBase<ModifyDerive<Der, CCAnimatedSprite>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCAnimatedSprite>>;
		using ModifyBase<ModifyDerive<Der, CCAnimatedSprite>>::ModifyBase;
		using Base = CCAnimatedSprite;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCAnimatedSprite, cleanupSprite, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCAnimatedSprite, createWithType, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCAnimatedSprite, getActiveSpriteMode, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCAnimatedSprite, getActiveTween, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCAnimatedSprite, getAnimatedSprite, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCAnimatedSprite, getAnimManager, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCAnimatedSprite, getDefaultAnimation, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCAnimatedSprite, getDelegate, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCAnimatedSprite, getNormalSprite, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCAnimatedSprite, getSprite, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCAnimatedSprite, initWithType, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCAnimatedSprite, loadType, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCAnimatedSprite, runAnimation, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCAnimatedSprite, runAnimationForced, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCAnimatedSprite, setAnimatedSprite, CCPartAnimSprite*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCAnimatedSprite, setColor, cocos2d::ccColor3B)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCAnimatedSprite, setDefaultAnimation, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCAnimatedSprite, setDelegate, AnimatedSpriteDelegate*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCAnimatedSprite, setNormalSprite, cocos2d::CCSprite*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCAnimatedSprite, setSprite, cocos2d::CCSprite*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCAnimatedSprite, switchToMode, spriteMode)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCAnimatedSprite, tweenToAnimation, gd::string, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCAnimatedSprite, tweenToAnimationFinished, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCAnimatedSprite, willPlayAnimation, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCAnimatedSprite, setOpacity, unsigned char)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCAnimatedSprite, animationFinished, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCAnimatedSprite, animationFinishedO, cocos2d::CCObject*)
		}
	};
}
