#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJRobotSprite.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getFireBoostSprite
		#define GEODE_STATICS_getFireBoostSprite
		GEODE_AS_STATIC_FUNCTION(getFireBoostSprite) 
	#endif

	#ifndef GEODE_STATICS_getHeadSprite
		#define GEODE_STATICS_getHeadSprite
		GEODE_AS_STATIC_FUNCTION(getHeadSprite) 
	#endif

	#ifndef GEODE_STATICS_hideGlow
		#define GEODE_STATICS_hideGlow
		GEODE_AS_STATIC_FUNCTION(hideGlow) 
	#endif

	#ifndef GEODE_STATICS_showGlow
		#define GEODE_STATICS_showGlow
		GEODE_AS_STATIC_FUNCTION(showGlow) 
	#endif

	#ifndef GEODE_STATICS_updateColor01
		#define GEODE_STATICS_updateColor01
		GEODE_AS_STATIC_FUNCTION(updateColor01) 
	#endif

	#ifndef GEODE_STATICS_updateColor02
		#define GEODE_STATICS_updateColor02
		GEODE_AS_STATIC_FUNCTION(updateColor02) 
	#endif

	#ifndef GEODE_STATICS_updateColors
		#define GEODE_STATICS_updateColors
		GEODE_AS_STATIC_FUNCTION(updateColors) 
	#endif

	#ifndef GEODE_STATICS_updateFrame
		#define GEODE_STATICS_updateFrame
		GEODE_AS_STATIC_FUNCTION(updateFrame) 
	#endif

	#ifndef GEODE_STATICS_updateGlowColor
		#define GEODE_STATICS_updateGlowColor
		GEODE_AS_STATIC_FUNCTION(updateGlowColor) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFireBoostSprite
		#define GEODE_CONCEPT_CHECK_getFireBoostSprite
		GEODE_CONCEPT_FUNCTION_CHECK(getFireBoostSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getHeadSprite
		#define GEODE_CONCEPT_CHECK_getHeadSprite
		GEODE_CONCEPT_FUNCTION_CHECK(getHeadSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hideGlow
		#define GEODE_CONCEPT_CHECK_hideGlow
		GEODE_CONCEPT_FUNCTION_CHECK(hideGlow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showGlow
		#define GEODE_CONCEPT_CHECK_showGlow
		GEODE_CONCEPT_FUNCTION_CHECK(showGlow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateColor01
		#define GEODE_CONCEPT_CHECK_updateColor01
		GEODE_CONCEPT_FUNCTION_CHECK(updateColor01) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateColor02
		#define GEODE_CONCEPT_CHECK_updateColor02
		GEODE_CONCEPT_FUNCTION_CHECK(updateColor02) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateColors
		#define GEODE_CONCEPT_CHECK_updateColors
		GEODE_CONCEPT_FUNCTION_CHECK(updateColors) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateFrame
		#define GEODE_CONCEPT_CHECK_updateFrame
		GEODE_CONCEPT_FUNCTION_CHECK(updateFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateGlowColor
		#define GEODE_CONCEPT_CHECK_updateGlowColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateGlowColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOpacity
		#define GEODE_CONCEPT_CHECK_setOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(setOpacity) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJRobotSprite> : ModifyBase<ModifyDerive<Der, GJRobotSprite>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJRobotSprite>>;
		using ModifyBase<ModifyDerive<Der, GJRobotSprite>>::ModifyBase;
		using Base = GJRobotSprite;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRobotSprite, create, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRobotSprite, getFireBoostSprite, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRobotSprite, getHeadSprite, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRobotSprite, hideGlow, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRobotSprite, showGlow, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRobotSprite, updateColor01, cocos2d::ccColor3B)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRobotSprite, updateColor02, cocos2d::ccColor3B)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRobotSprite, updateColors, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRobotSprite, updateFrame, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRobotSprite, updateGlowColor, cocos2d::ccColor3B, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRobotSprite, init, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRobotSprite, setOpacity, unsigned char)
		}
	};
}
