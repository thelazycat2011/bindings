#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/HSVWidgetPopupDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_hsvPopupClosed
		#define GEODE_STATICS_hsvPopupClosed
		GEODE_AS_STATIC_FUNCTION(hsvPopupClosed) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_hsvPopupClosed
		#define GEODE_CONCEPT_CHECK_hsvPopupClosed
		GEODE_CONCEPT_FUNCTION_CHECK(hsvPopupClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, HSVWidgetPopupDelegate> : ModifyBase<ModifyDerive<Der, HSVWidgetPopupDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, HSVWidgetPopupDelegate>>;
		using ModifyBase<ModifyDerive<Der, HSVWidgetPopupDelegate>>::ModifyBase;
		using Base = HSVWidgetPopupDelegate;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(HSVWidgetPopupDelegate, hsvPopupClosed, HSVWidgetPopup*, cocos2d::ccHSVValue)
		}
	};
}
