#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos-ext.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_HSVfromRGB
		#define GEODE_STATICS_HSVfromRGB
		GEODE_AS_STATIC_FUNCTION(HSVfromRGB) 
	#endif

	#ifndef GEODE_STATICS_RGBfromHSV
		#define GEODE_STATICS_RGBfromHSV
		GEODE_AS_STATIC_FUNCTION(RGBfromHSV) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_HSVfromRGB
		#define GEODE_CONCEPT_CHECK_HSVfromRGB
		GEODE_CONCEPT_FUNCTION_CHECK(HSVfromRGB) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_RGBfromHSV
		#define GEODE_CONCEPT_CHECK_RGBfromHSV
		GEODE_CONCEPT_FUNCTION_CHECK(RGBfromHSV) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::extension::CCControlUtils> : ModifyBase<ModifyDerive<Der, cocos2d::extension::CCControlUtils>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::extension::CCControlUtils>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::extension::CCControlUtils>>::ModifyBase;
		using Base = cocos2d::extension::CCControlUtils;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::extension::RGBA>::func(&cocos2d::extension::CCControlUtils::HSVfromRGB)), Cdecl, cocos2d::extension::CCControlUtils, HSVfromRGB, cocos2d::extension::RGBA)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::extension::HSV>::func(&cocos2d::extension::CCControlUtils::RGBfromHSV)), Cdecl, cocos2d::extension::CCControlUtils, RGBfromHSV, cocos2d::extension::HSV)
		}
	};
}
