#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ButtonSprite.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getBGImage
		#define GEODE_STATICS_getBGImage
		GEODE_AS_STATIC_FUNCTION(getBGImage) 
	#endif

	#ifndef GEODE_STATICS_getBGSprite
		#define GEODE_STATICS_getBGSprite
		GEODE_AS_STATIC_FUNCTION(getBGSprite) 
	#endif

	#ifndef GEODE_STATICS_getBtnLabel
		#define GEODE_STATICS_getBtnLabel
		GEODE_AS_STATIC_FUNCTION(getBtnLabel) 
	#endif

	#ifndef GEODE_STATICS_getBtnSprite
		#define GEODE_STATICS_getBtnSprite
		GEODE_AS_STATIC_FUNCTION(getBtnSprite) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setColor
		#define GEODE_STATICS_setColor
		GEODE_AS_STATIC_FUNCTION(setColor) 
	#endif

	#ifndef GEODE_STATICS_setString
		#define GEODE_STATICS_setString
		GEODE_AS_STATIC_FUNCTION(setString) 
	#endif

	#ifndef GEODE_STATICS_updateBGImage
		#define GEODE_STATICS_updateBGImage
		GEODE_AS_STATIC_FUNCTION(updateBGImage) 
	#endif

	#ifndef GEODE_STATICS_updateSpriteBGSize
		#define GEODE_STATICS_updateSpriteBGSize
		GEODE_AS_STATIC_FUNCTION(updateSpriteBGSize) 
	#endif

	#ifndef GEODE_STATICS_updateSpriteOffset
		#define GEODE_STATICS_updateSpriteOffset
		GEODE_AS_STATIC_FUNCTION(updateSpriteOffset) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBGImage
		#define GEODE_CONCEPT_CHECK_getBGImage
		GEODE_CONCEPT_FUNCTION_CHECK(getBGImage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBGSprite
		#define GEODE_CONCEPT_CHECK_getBGSprite
		GEODE_CONCEPT_FUNCTION_CHECK(getBGSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBtnLabel
		#define GEODE_CONCEPT_CHECK_getBtnLabel
		GEODE_CONCEPT_FUNCTION_CHECK(getBtnLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBtnSprite
		#define GEODE_CONCEPT_CHECK_getBtnSprite
		GEODE_CONCEPT_FUNCTION_CHECK(getBtnSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setColor
		#define GEODE_CONCEPT_CHECK_setColor
		GEODE_CONCEPT_FUNCTION_CHECK(setColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setString
		#define GEODE_CONCEPT_CHECK_setString
		GEODE_CONCEPT_FUNCTION_CHECK(setString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateBGImage
		#define GEODE_CONCEPT_CHECK_updateBGImage
		GEODE_CONCEPT_FUNCTION_CHECK(updateBGImage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSpriteBGSize
		#define GEODE_CONCEPT_CHECK_updateSpriteBGSize
		GEODE_CONCEPT_FUNCTION_CHECK(updateSpriteBGSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSpriteOffset
		#define GEODE_CONCEPT_CHECK_updateSpriteOffset
		GEODE_CONCEPT_FUNCTION_CHECK(updateSpriteOffset) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ButtonSprite> : ModifyBase<ModifyDerive<Der, ButtonSprite>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ButtonSprite>>;
		using ModifyBase<ModifyDerive<Der, ButtonSprite>>::ModifyBase;
		using Base = ButtonSprite;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ButtonSprite, create, char const*, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ButtonSprite, create, char const*, int, int, float, bool, char const*, char const*, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ButtonSprite, create, char const*, int, int, float, bool, char const*, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ButtonSprite, create, char const*, int, int, float, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ButtonSprite, create, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ButtonSprite, create, cocos2d::CCSprite*, int, int, float, float, bool, char const*, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ButtonSprite, create, cocos2d::CCSprite*, int, int, float, float, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ButtonSprite, create, cocos2d::CCSprite*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ButtonSprite, getBGImage, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ButtonSprite, getBGSprite, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ButtonSprite, getBtnLabel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ButtonSprite, getBtnSprite, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ButtonSprite, init, char const*, int, int, float, bool, char const*, char const*, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ButtonSprite, init, cocos2d::CCSprite*, int, int, float, float, bool, char const*, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ButtonSprite, setColor, cocos2d::ccColor3B)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ButtonSprite, setString, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ButtonSprite, updateBGImage, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ButtonSprite, updateSpriteBGSize, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ButtonSprite, updateSpriteOffset, cocos2d::CCPoint)
		}
	};
}
