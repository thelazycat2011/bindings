#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SimplePlayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getSpecial
		#define GEODE_STATICS_getSpecial
		GEODE_AS_STATIC_FUNCTION(getSpecial) 
	#endif

	#ifndef GEODE_STATICS_getUseGlow
		#define GEODE_STATICS_getUseGlow
		GEODE_AS_STATIC_FUNCTION(getUseGlow) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setFrames
		#define GEODE_STATICS_setFrames
		GEODE_AS_STATIC_FUNCTION(setFrames) 
	#endif

	#ifndef GEODE_STATICS_setSecondColor
		#define GEODE_STATICS_setSecondColor
		GEODE_AS_STATIC_FUNCTION(setSecondColor) 
	#endif

	#ifndef GEODE_STATICS_setSpecial
		#define GEODE_STATICS_setSpecial
		GEODE_AS_STATIC_FUNCTION(setSpecial) 
	#endif

	#ifndef GEODE_STATICS_setUseGlow
		#define GEODE_STATICS_setUseGlow
		GEODE_AS_STATIC_FUNCTION(setUseGlow) 
	#endif

	#ifndef GEODE_STATICS_updateColors
		#define GEODE_STATICS_updateColors
		GEODE_AS_STATIC_FUNCTION(updateColors) 
	#endif

	#ifndef GEODE_STATICS_updatePlayerFrame
		#define GEODE_STATICS_updatePlayerFrame
		GEODE_AS_STATIC_FUNCTION(updatePlayerFrame) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_setColor
		#define GEODE_STATICS_setColor
		GEODE_AS_STATIC_FUNCTION(setColor) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSpecial
		#define GEODE_CONCEPT_CHECK_getSpecial
		GEODE_CONCEPT_FUNCTION_CHECK(getSpecial) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUseGlow
		#define GEODE_CONCEPT_CHECK_getUseGlow
		GEODE_CONCEPT_FUNCTION_CHECK(getUseGlow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFrames
		#define GEODE_CONCEPT_CHECK_setFrames
		GEODE_CONCEPT_FUNCTION_CHECK(setFrames) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSecondColor
		#define GEODE_CONCEPT_CHECK_setSecondColor
		GEODE_CONCEPT_FUNCTION_CHECK(setSecondColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSpecial
		#define GEODE_CONCEPT_CHECK_setSpecial
		GEODE_CONCEPT_FUNCTION_CHECK(setSpecial) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUseGlow
		#define GEODE_CONCEPT_CHECK_setUseGlow
		GEODE_CONCEPT_FUNCTION_CHECK(setUseGlow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateColors
		#define GEODE_CONCEPT_CHECK_updateColors
		GEODE_CONCEPT_FUNCTION_CHECK(updateColors) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePlayerFrame
		#define GEODE_CONCEPT_CHECK_updatePlayerFrame
		GEODE_CONCEPT_FUNCTION_CHECK(updatePlayerFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOpacity
		#define GEODE_CONCEPT_CHECK_setOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(setOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setColor
		#define GEODE_CONCEPT_CHECK_setColor
		GEODE_CONCEPT_FUNCTION_CHECK(setColor) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SimplePlayer> : ModifyBase<ModifyDerive<Der, SimplePlayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SimplePlayer>>;
		using ModifyBase<ModifyDerive<Der, SimplePlayer>>::ModifyBase;
		using Base = SimplePlayer;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SimplePlayer, create, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SimplePlayer, getSpecial, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SimplePlayer, getUseGlow, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SimplePlayer, init, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SimplePlayer, setFrames, char const*, char const*, char const*, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SimplePlayer, setSecondColor, cocos2d::ccColor3B const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SimplePlayer, setSpecial, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SimplePlayer, setUseGlow, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SimplePlayer, updateColors, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SimplePlayer, updatePlayerFrame, int, IconType)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SimplePlayer, setOpacity, unsigned char)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SimplePlayer, setColor, cocos2d::ccColor3B const&)
		}
	};
}
