#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCMenuItemSpriteExtra.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getClickSound
		#define GEODE_STATICS_getClickSound
		GEODE_AS_STATIC_FUNCTION(getClickSound) 
	#endif

	#ifndef GEODE_STATICS_getDarkenClick
		#define GEODE_STATICS_getDarkenClick
		GEODE_AS_STATIC_FUNCTION(getDarkenClick) 
	#endif

	#ifndef GEODE_STATICS_getOriginalScale
		#define GEODE_STATICS_getOriginalScale
		GEODE_AS_STATIC_FUNCTION(getOriginalScale) 
	#endif

	#ifndef GEODE_STATICS_getScaleVar
		#define GEODE_STATICS_getScaleVar
		GEODE_AS_STATIC_FUNCTION(getScaleVar) 
	#endif

	#ifndef GEODE_STATICS_getShouldAnimate
		#define GEODE_STATICS_getShouldAnimate
		GEODE_AS_STATIC_FUNCTION(getShouldAnimate) 
	#endif

	#ifndef GEODE_STATICS_getVolume
		#define GEODE_STATICS_getVolume
		GEODE_AS_STATIC_FUNCTION(getVolume) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setClickSound
		#define GEODE_STATICS_setClickSound
		GEODE_AS_STATIC_FUNCTION(setClickSound) 
	#endif

	#ifndef GEODE_STATICS_setDarkenClick
		#define GEODE_STATICS_setDarkenClick
		GEODE_AS_STATIC_FUNCTION(setDarkenClick) 
	#endif

	#ifndef GEODE_STATICS_setOriginalScale
		#define GEODE_STATICS_setOriginalScale
		GEODE_AS_STATIC_FUNCTION(setOriginalScale) 
	#endif

	#ifndef GEODE_STATICS_setScaleVar
		#define GEODE_STATICS_setScaleVar
		GEODE_AS_STATIC_FUNCTION(setScaleVar) 
	#endif

	#ifndef GEODE_STATICS_setShouldAnimate
		#define GEODE_STATICS_setShouldAnimate
		GEODE_AS_STATIC_FUNCTION(setShouldAnimate) 
	#endif

	#ifndef GEODE_STATICS_setSizeMult
		#define GEODE_STATICS_setSizeMult
		GEODE_AS_STATIC_FUNCTION(setSizeMult) 
	#endif

	#ifndef GEODE_STATICS_setVolume
		#define GEODE_STATICS_setVolume
		GEODE_AS_STATIC_FUNCTION(setVolume) 
	#endif

	#ifndef GEODE_STATICS_activate
		#define GEODE_STATICS_activate
		GEODE_AS_STATIC_FUNCTION(activate) 
	#endif

	#ifndef GEODE_STATICS_selected
		#define GEODE_STATICS_selected
		GEODE_AS_STATIC_FUNCTION(selected) 
	#endif

	#ifndef GEODE_STATICS_unselected
		#define GEODE_STATICS_unselected
		GEODE_AS_STATIC_FUNCTION(unselected) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getClickSound
		#define GEODE_CONCEPT_CHECK_getClickSound
		GEODE_CONCEPT_FUNCTION_CHECK(getClickSound) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDarkenClick
		#define GEODE_CONCEPT_CHECK_getDarkenClick
		GEODE_CONCEPT_FUNCTION_CHECK(getDarkenClick) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOriginalScale
		#define GEODE_CONCEPT_CHECK_getOriginalScale
		GEODE_CONCEPT_FUNCTION_CHECK(getOriginalScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getScaleVar
		#define GEODE_CONCEPT_CHECK_getScaleVar
		GEODE_CONCEPT_FUNCTION_CHECK(getScaleVar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getShouldAnimate
		#define GEODE_CONCEPT_CHECK_getShouldAnimate
		GEODE_CONCEPT_FUNCTION_CHECK(getShouldAnimate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getVolume
		#define GEODE_CONCEPT_CHECK_getVolume
		GEODE_CONCEPT_FUNCTION_CHECK(getVolume) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setClickSound
		#define GEODE_CONCEPT_CHECK_setClickSound
		GEODE_CONCEPT_FUNCTION_CHECK(setClickSound) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDarkenClick
		#define GEODE_CONCEPT_CHECK_setDarkenClick
		GEODE_CONCEPT_FUNCTION_CHECK(setDarkenClick) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOriginalScale
		#define GEODE_CONCEPT_CHECK_setOriginalScale
		GEODE_CONCEPT_FUNCTION_CHECK(setOriginalScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setScaleVar
		#define GEODE_CONCEPT_CHECK_setScaleVar
		GEODE_CONCEPT_FUNCTION_CHECK(setScaleVar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setShouldAnimate
		#define GEODE_CONCEPT_CHECK_setShouldAnimate
		GEODE_CONCEPT_FUNCTION_CHECK(setShouldAnimate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSizeMult
		#define GEODE_CONCEPT_CHECK_setSizeMult
		GEODE_CONCEPT_FUNCTION_CHECK(setSizeMult) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setVolume
		#define GEODE_CONCEPT_CHECK_setVolume
		GEODE_CONCEPT_FUNCTION_CHECK(setVolume) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activate
		#define GEODE_CONCEPT_CHECK_activate
		GEODE_CONCEPT_FUNCTION_CHECK(activate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selected
		#define GEODE_CONCEPT_CHECK_selected
		GEODE_CONCEPT_FUNCTION_CHECK(selected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unselected
		#define GEODE_CONCEPT_CHECK_unselected
		GEODE_CONCEPT_FUNCTION_CHECK(unselected) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCMenuItemSpriteExtra> : ModifyBase<ModifyDerive<Der, CCMenuItemSpriteExtra>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCMenuItemSpriteExtra>>;
		using ModifyBase<ModifyDerive<Der, CCMenuItemSpriteExtra>>::ModifyBase;
		using Base = CCMenuItemSpriteExtra;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCMenuItemSpriteExtra, create, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCMenuItemSpriteExtra, create, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::SEL_MenuHandler)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCMenuItemSpriteExtra, getClickSound, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCMenuItemSpriteExtra, getDarkenClick, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCMenuItemSpriteExtra, getOriginalScale, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCMenuItemSpriteExtra, getScaleVar, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCMenuItemSpriteExtra, getShouldAnimate, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCMenuItemSpriteExtra, getVolume, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCMenuItemSpriteExtra, init, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCMenuItemSpriteExtra, setClickSound, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCMenuItemSpriteExtra, setDarkenClick, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCMenuItemSpriteExtra, setOriginalScale, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCMenuItemSpriteExtra, setScaleVar, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCMenuItemSpriteExtra, setShouldAnimate, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCMenuItemSpriteExtra, setSizeMult, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCMenuItemSpriteExtra, setVolume, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCMenuItemSpriteExtra, activate, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCMenuItemSpriteExtra, selected, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCMenuItemSpriteExtra, unselected, )
		}
	};
}
