#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCLightFlash.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_cleanupFlash
		#define GEODE_STATICS_cleanupFlash
		GEODE_AS_STATIC_FUNCTION(cleanupFlash) 
	#endif

	#ifndef GEODE_STATICS_fadeAndRemove
		#define GEODE_STATICS_fadeAndRemove
		GEODE_AS_STATIC_FUNCTION(fadeAndRemove) 
	#endif

	#ifndef GEODE_STATICS_getFlashP
		#define GEODE_STATICS_getFlashP
		GEODE_AS_STATIC_FUNCTION(getFlashP) 
	#endif

	#ifndef GEODE_STATICS_getFlashZ
		#define GEODE_STATICS_getFlashZ
		GEODE_AS_STATIC_FUNCTION(getFlashZ) 
	#endif

	#ifndef GEODE_STATICS_playEffect
		#define GEODE_STATICS_playEffect
		GEODE_AS_STATIC_FUNCTION(playEffect) 
	#endif

	#ifndef GEODE_STATICS_removeLights
		#define GEODE_STATICS_removeLights
		GEODE_AS_STATIC_FUNCTION(removeLights) 
	#endif

	#ifndef GEODE_STATICS_setFlashP
		#define GEODE_STATICS_setFlashP
		GEODE_AS_STATIC_FUNCTION(setFlashP) 
	#endif

	#ifndef GEODE_STATICS_setFlashZ
		#define GEODE_STATICS_setFlashZ
		GEODE_AS_STATIC_FUNCTION(setFlashZ) 
	#endif

	#ifndef GEODE_STATICS_showFlash
		#define GEODE_STATICS_showFlash
		GEODE_AS_STATIC_FUNCTION(showFlash) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_cleanupFlash
		#define GEODE_CONCEPT_CHECK_cleanupFlash
		GEODE_CONCEPT_FUNCTION_CHECK(cleanupFlash) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fadeAndRemove
		#define GEODE_CONCEPT_CHECK_fadeAndRemove
		GEODE_CONCEPT_FUNCTION_CHECK(fadeAndRemove) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFlashP
		#define GEODE_CONCEPT_CHECK_getFlashP
		GEODE_CONCEPT_FUNCTION_CHECK(getFlashP) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFlashZ
		#define GEODE_CONCEPT_CHECK_getFlashZ
		GEODE_CONCEPT_FUNCTION_CHECK(getFlashZ) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playEffect
		#define GEODE_CONCEPT_CHECK_playEffect
		GEODE_CONCEPT_FUNCTION_CHECK(playEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeLights
		#define GEODE_CONCEPT_CHECK_removeLights
		GEODE_CONCEPT_FUNCTION_CHECK(removeLights) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFlashP
		#define GEODE_CONCEPT_CHECK_setFlashP
		GEODE_CONCEPT_FUNCTION_CHECK(setFlashP) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFlashZ
		#define GEODE_CONCEPT_CHECK_setFlashZ
		GEODE_CONCEPT_FUNCTION_CHECK(setFlashZ) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showFlash
		#define GEODE_CONCEPT_CHECK_showFlash
		GEODE_CONCEPT_FUNCTION_CHECK(showFlash) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCLightFlash> : ModifyBase<ModifyDerive<Der, CCLightFlash>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCLightFlash>>;
		using ModifyBase<ModifyDerive<Der, CCLightFlash>>::ModifyBase;
		using Base = CCLightFlash;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCLightFlash, create, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCLightFlash, cleanupFlash, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCLightFlash, fadeAndRemove, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCLightFlash, getFlashP, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCLightFlash, getFlashZ, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCLightFlash, playEffect, cocos2d::CCPoint, cocos2d::ccColor3B, float, float, float, float, float, float, float, float, float, float, float, float, float, float, int, bool, bool, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCLightFlash, removeLights, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCLightFlash, setFlashP, cocos2d::CCNode*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCLightFlash, setFlashZ, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCLightFlash, showFlash, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCLightFlash, init, )
		}
	};
}
