#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJSpriteColor.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getBaseOpacityMod
		#define GEODE_STATICS_getBaseOpacityMod
		GEODE_AS_STATIC_FUNCTION(getBaseOpacityMod) 
	#endif

	#ifndef GEODE_STATICS_getColorMode
		#define GEODE_STATICS_getColorMode
		GEODE_AS_STATIC_FUNCTION(getColorMode) 
	#endif

	#ifndef GEODE_STATICS_getCustomBlend
		#define GEODE_STATICS_getCustomBlend
		GEODE_AS_STATIC_FUNCTION(getCustomBlend) 
	#endif

	#ifndef GEODE_STATICS_getCustomColor
		#define GEODE_STATICS_getCustomColor
		GEODE_AS_STATIC_FUNCTION(getCustomColor) 
	#endif

	#ifndef GEODE_STATICS_getCustomColorMode
		#define GEODE_STATICS_getCustomColorMode
		GEODE_AS_STATIC_FUNCTION(getCustomColorMode) 
	#endif

	#ifndef GEODE_STATICS_getCustomOpacityMod
		#define GEODE_STATICS_getCustomOpacityMod
		GEODE_AS_STATIC_FUNCTION(getCustomOpacityMod) 
	#endif

	#ifndef GEODE_STATICS_getDefaultColorMode
		#define GEODE_STATICS_getDefaultColorMode
		GEODE_AS_STATIC_FUNCTION(getDefaultColorMode) 
	#endif

	#ifndef GEODE_STATICS_getEnableHSV
		#define GEODE_STATICS_getEnableHSV
		GEODE_AS_STATIC_FUNCTION(getEnableHSV) 
	#endif

	#ifndef GEODE_STATICS_getHSVValue
		#define GEODE_STATICS_getHSVValue
		GEODE_AS_STATIC_FUNCTION(getHSVValue) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_resetCustomColorMode
		#define GEODE_STATICS_resetCustomColorMode
		GEODE_AS_STATIC_FUNCTION(resetCustomColorMode) 
	#endif

	#ifndef GEODE_STATICS_setBaseOpacityMod
		#define GEODE_STATICS_setBaseOpacityMod
		GEODE_AS_STATIC_FUNCTION(setBaseOpacityMod) 
	#endif

	#ifndef GEODE_STATICS_setCustomBlend
		#define GEODE_STATICS_setCustomBlend
		GEODE_AS_STATIC_FUNCTION(setCustomBlend) 
	#endif

	#ifndef GEODE_STATICS_setCustomColor
		#define GEODE_STATICS_setCustomColor
		GEODE_AS_STATIC_FUNCTION(setCustomColor) 
	#endif

	#ifndef GEODE_STATICS_setCustomColorMode
		#define GEODE_STATICS_setCustomColorMode
		GEODE_AS_STATIC_FUNCTION(setCustomColorMode) 
	#endif

	#ifndef GEODE_STATICS_setCustomOpacityMod
		#define GEODE_STATICS_setCustomOpacityMod
		GEODE_AS_STATIC_FUNCTION(setCustomOpacityMod) 
	#endif

	#ifndef GEODE_STATICS_setDefaultColorMode
		#define GEODE_STATICS_setDefaultColorMode
		GEODE_AS_STATIC_FUNCTION(setDefaultColorMode) 
	#endif

	#ifndef GEODE_STATICS_setEnableHSV
		#define GEODE_STATICS_setEnableHSV
		GEODE_AS_STATIC_FUNCTION(setEnableHSV) 
	#endif

	#ifndef GEODE_STATICS_setHSVValue
		#define GEODE_STATICS_setHSVValue
		GEODE_AS_STATIC_FUNCTION(setHSVValue) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBaseOpacityMod
		#define GEODE_CONCEPT_CHECK_getBaseOpacityMod
		GEODE_CONCEPT_FUNCTION_CHECK(getBaseOpacityMod) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getColorMode
		#define GEODE_CONCEPT_CHECK_getColorMode
		GEODE_CONCEPT_FUNCTION_CHECK(getColorMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCustomBlend
		#define GEODE_CONCEPT_CHECK_getCustomBlend
		GEODE_CONCEPT_FUNCTION_CHECK(getCustomBlend) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCustomColor
		#define GEODE_CONCEPT_CHECK_getCustomColor
		GEODE_CONCEPT_FUNCTION_CHECK(getCustomColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCustomColorMode
		#define GEODE_CONCEPT_CHECK_getCustomColorMode
		GEODE_CONCEPT_FUNCTION_CHECK(getCustomColorMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCustomOpacityMod
		#define GEODE_CONCEPT_CHECK_getCustomOpacityMod
		GEODE_CONCEPT_FUNCTION_CHECK(getCustomOpacityMod) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDefaultColorMode
		#define GEODE_CONCEPT_CHECK_getDefaultColorMode
		GEODE_CONCEPT_FUNCTION_CHECK(getDefaultColorMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEnableHSV
		#define GEODE_CONCEPT_CHECK_getEnableHSV
		GEODE_CONCEPT_FUNCTION_CHECK(getEnableHSV) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getHSVValue
		#define GEODE_CONCEPT_CHECK_getHSVValue
		GEODE_CONCEPT_FUNCTION_CHECK(getHSVValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetCustomColorMode
		#define GEODE_CONCEPT_CHECK_resetCustomColorMode
		GEODE_CONCEPT_FUNCTION_CHECK(resetCustomColorMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setBaseOpacityMod
		#define GEODE_CONCEPT_CHECK_setBaseOpacityMod
		GEODE_CONCEPT_FUNCTION_CHECK(setBaseOpacityMod) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCustomBlend
		#define GEODE_CONCEPT_CHECK_setCustomBlend
		GEODE_CONCEPT_FUNCTION_CHECK(setCustomBlend) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCustomColor
		#define GEODE_CONCEPT_CHECK_setCustomColor
		GEODE_CONCEPT_FUNCTION_CHECK(setCustomColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCustomColorMode
		#define GEODE_CONCEPT_CHECK_setCustomColorMode
		GEODE_CONCEPT_FUNCTION_CHECK(setCustomColorMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCustomOpacityMod
		#define GEODE_CONCEPT_CHECK_setCustomOpacityMod
		GEODE_CONCEPT_FUNCTION_CHECK(setCustomOpacityMod) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDefaultColorMode
		#define GEODE_CONCEPT_CHECK_setDefaultColorMode
		GEODE_CONCEPT_FUNCTION_CHECK(setDefaultColorMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setEnableHSV
		#define GEODE_CONCEPT_CHECK_setEnableHSV
		GEODE_CONCEPT_FUNCTION_CHECK(setEnableHSV) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setHSVValue
		#define GEODE_CONCEPT_CHECK_setHSVValue
		GEODE_CONCEPT_FUNCTION_CHECK(setHSVValue) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJSpriteColor> : ModifyBase<ModifyDerive<Der, GJSpriteColor>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJSpriteColor>>;
		using ModifyBase<ModifyDerive<Der, GJSpriteColor>>::ModifyBase;
		using Base = GJSpriteColor;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSpriteColor, create, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSpriteColor, getBaseOpacityMod, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSpriteColor, getColorMode, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSpriteColor, getCustomBlend, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSpriteColor, getCustomColor, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSpriteColor, getCustomColorMode, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSpriteColor, getCustomOpacityMod, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSpriteColor, getDefaultColorMode, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSpriteColor, getEnableHSV, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSpriteColor, getHSVValue, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSpriteColor, init, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSpriteColor, resetCustomColorMode, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSpriteColor, setBaseOpacityMod, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSpriteColor, setCustomBlend, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSpriteColor, setCustomColor, cocos2d::ccColor3B)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSpriteColor, setCustomColorMode, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSpriteColor, setCustomOpacityMod, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSpriteColor, setDefaultColorMode, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSpriteColor, setEnableHSV, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSpriteColor, setHSVValue, cocos2d::ccHSVValue)
		}
	};
}
