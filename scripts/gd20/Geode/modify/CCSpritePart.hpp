#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCSpritePart.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createWithSpriteFrameName
		#define GEODE_STATICS_createWithSpriteFrameName
		GEODE_AS_STATIC_FUNCTION(createWithSpriteFrameName) 
	#endif

	#ifndef GEODE_STATICS_getActiveFrame
		#define GEODE_STATICS_getActiveFrame
		GEODE_AS_STATIC_FUNCTION(getActiveFrame) 
	#endif

	#ifndef GEODE_STATICS_getBeingUsed
		#define GEODE_STATICS_getBeingUsed
		GEODE_AS_STATIC_FUNCTION(getBeingUsed) 
	#endif

	#ifndef GEODE_STATICS_hideInactive
		#define GEODE_STATICS_hideInactive
		GEODE_AS_STATIC_FUNCTION(hideInactive) 
	#endif

	#ifndef GEODE_STATICS_resetTextureRect
		#define GEODE_STATICS_resetTextureRect
		GEODE_AS_STATIC_FUNCTION(resetTextureRect) 
	#endif

	#ifndef GEODE_STATICS_setActiveFrame
		#define GEODE_STATICS_setActiveFrame
		GEODE_AS_STATIC_FUNCTION(setActiveFrame) 
	#endif

	#ifndef GEODE_STATICS_setBeingUsed
		#define GEODE_STATICS_setBeingUsed
		GEODE_AS_STATIC_FUNCTION(setBeingUsed) 
	#endif

	#ifndef GEODE_STATICS_updateDisplayFrame
		#define GEODE_STATICS_updateDisplayFrame
		GEODE_AS_STATIC_FUNCTION(updateDisplayFrame) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithSpriteFrameName
		#define GEODE_CONCEPT_CHECK_createWithSpriteFrameName
		GEODE_CONCEPT_FUNCTION_CHECK(createWithSpriteFrameName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getActiveFrame
		#define GEODE_CONCEPT_CHECK_getActiveFrame
		GEODE_CONCEPT_FUNCTION_CHECK(getActiveFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBeingUsed
		#define GEODE_CONCEPT_CHECK_getBeingUsed
		GEODE_CONCEPT_FUNCTION_CHECK(getBeingUsed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hideInactive
		#define GEODE_CONCEPT_CHECK_hideInactive
		GEODE_CONCEPT_FUNCTION_CHECK(hideInactive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetTextureRect
		#define GEODE_CONCEPT_CHECK_resetTextureRect
		GEODE_CONCEPT_FUNCTION_CHECK(resetTextureRect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setActiveFrame
		#define GEODE_CONCEPT_CHECK_setActiveFrame
		GEODE_CONCEPT_FUNCTION_CHECK(setActiveFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setBeingUsed
		#define GEODE_CONCEPT_CHECK_setBeingUsed
		GEODE_CONCEPT_FUNCTION_CHECK(setBeingUsed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDisplayFrame
		#define GEODE_CONCEPT_CHECK_updateDisplayFrame
		GEODE_CONCEPT_FUNCTION_CHECK(updateDisplayFrame) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCSpritePart> : ModifyBase<ModifyDerive<Der, CCSpritePart>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCSpritePart>>;
		using ModifyBase<ModifyDerive<Der, CCSpritePart>>::ModifyBase;
		using Base = CCSpritePart;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCSpritePart, create, cocos2d::CCTexture2D*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCSpritePart, createWithSpriteFrameName, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCSpritePart, getActiveFrame, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCSpritePart, getBeingUsed, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCSpritePart, hideInactive, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCSpritePart, resetTextureRect, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCSpritePart, setActiveFrame, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCSpritePart, setBeingUsed, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCSpritePart, updateDisplayFrame, char const*)
		}
	};
}
