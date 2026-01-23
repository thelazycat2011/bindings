#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ColorActionSprite.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getActiveColor
		#define GEODE_STATICS_getActiveColor
		GEODE_AS_STATIC_FUNCTION(getActiveColor) 
	#endif

	#ifndef GEODE_STATICS_getQueuedColorChange
		#define GEODE_STATICS_getQueuedColorChange
		GEODE_AS_STATIC_FUNCTION(getQueuedColorChange) 
	#endif

	#ifndef GEODE_STATICS_setActiveColor
		#define GEODE_STATICS_setActiveColor
		GEODE_AS_STATIC_FUNCTION(setActiveColor) 
	#endif

	#ifndef GEODE_STATICS_setQueuedColorChange
		#define GEODE_STATICS_setQueuedColorChange
		GEODE_AS_STATIC_FUNCTION(setQueuedColorChange) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getActiveColor
		#define GEODE_CONCEPT_CHECK_getActiveColor
		GEODE_CONCEPT_FUNCTION_CHECK(getActiveColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getQueuedColorChange
		#define GEODE_CONCEPT_CHECK_getQueuedColorChange
		GEODE_CONCEPT_FUNCTION_CHECK(getQueuedColorChange) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setActiveColor
		#define GEODE_CONCEPT_CHECK_setActiveColor
		GEODE_CONCEPT_FUNCTION_CHECK(setActiveColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setQueuedColorChange
		#define GEODE_CONCEPT_CHECK_setQueuedColorChange
		GEODE_CONCEPT_FUNCTION_CHECK(setQueuedColorChange) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ColorActionSprite> : ModifyBase<ModifyDerive<Der, ColorActionSprite>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ColorActionSprite>>;
		using ModifyBase<ModifyDerive<Der, ColorActionSprite>>::ModifyBase;
		using Base = ColorActionSprite;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorActionSprite, create, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorActionSprite, getActiveColor, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorActionSprite, getQueuedColorChange, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorActionSprite, setActiveColor, cocos2d::ccColor3B const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorActionSprite, setQueuedColorChange, cocos2d::ccColor3B)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColorActionSprite, init, )
		}
	};
}
