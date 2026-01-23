#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ConfigureHSVWidget.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getHSVVal
		#define GEODE_STATICS_getHSVVal
		GEODE_AS_STATIC_FUNCTION(getHSVVal) 
	#endif

	#ifndef GEODE_STATICS_getIsMixed
		#define GEODE_STATICS_getIsMixed
		GEODE_AS_STATIC_FUNCTION(getIsMixed) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onResetHSV
		#define GEODE_STATICS_onResetHSV
		GEODE_AS_STATIC_FUNCTION(onResetHSV) 
	#endif

	#ifndef GEODE_STATICS_onToggleSConst
		#define GEODE_STATICS_onToggleSConst
		GEODE_AS_STATIC_FUNCTION(onToggleSConst) 
	#endif

	#ifndef GEODE_STATICS_onToggleVConst
		#define GEODE_STATICS_onToggleVConst
		GEODE_AS_STATIC_FUNCTION(onToggleVConst) 
	#endif

	#ifndef GEODE_STATICS_sliderChanged
		#define GEODE_STATICS_sliderChanged
		GEODE_AS_STATIC_FUNCTION(sliderChanged) 
	#endif

	#ifndef GEODE_STATICS_updateLabels
		#define GEODE_STATICS_updateLabels
		GEODE_AS_STATIC_FUNCTION(updateLabels) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getHSVVal
		#define GEODE_CONCEPT_CHECK_getHSVVal
		GEODE_CONCEPT_FUNCTION_CHECK(getHSVVal) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIsMixed
		#define GEODE_CONCEPT_CHECK_getIsMixed
		GEODE_CONCEPT_FUNCTION_CHECK(getIsMixed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onResetHSV
		#define GEODE_CONCEPT_CHECK_onResetHSV
		GEODE_CONCEPT_FUNCTION_CHECK(onResetHSV) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleSConst
		#define GEODE_CONCEPT_CHECK_onToggleSConst
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleSConst) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleVConst
		#define GEODE_CONCEPT_CHECK_onToggleVConst
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleVConst) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sliderChanged
		#define GEODE_CONCEPT_CHECK_sliderChanged
		GEODE_CONCEPT_FUNCTION_CHECK(sliderChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLabels
		#define GEODE_CONCEPT_CHECK_updateLabels
		GEODE_CONCEPT_FUNCTION_CHECK(updateLabels) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ConfigureHSVWidget> : ModifyBase<ModifyDerive<Der, ConfigureHSVWidget>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ConfigureHSVWidget>>;
		using ModifyBase<ModifyDerive<Der, ConfigureHSVWidget>>::ModifyBase;
		using Base = ConfigureHSVWidget;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ConfigureHSVWidget, create, cocos2d::ccHSVValue, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ConfigureHSVWidget, getHSVVal, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ConfigureHSVWidget, getIsMixed, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ConfigureHSVWidget, init, cocos2d::ccHSVValue, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ConfigureHSVWidget, onResetHSV, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ConfigureHSVWidget, onToggleSConst, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ConfigureHSVWidget, onToggleVConst, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ConfigureHSVWidget, sliderChanged, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ConfigureHSVWidget, updateLabels, )
		}
	};
}
