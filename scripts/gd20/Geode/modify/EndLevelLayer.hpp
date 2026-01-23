#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EndLevelLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_coinEnterFinished
		#define GEODE_STATICS_coinEnterFinished
		GEODE_AS_STATIC_FUNCTION(coinEnterFinished) 
	#endif

	#ifndef GEODE_STATICS_coinEnterFinishedO
		#define GEODE_STATICS_coinEnterFinishedO
		GEODE_AS_STATIC_FUNCTION(coinEnterFinishedO) 
	#endif

	#ifndef GEODE_STATICS_getCoinString
		#define GEODE_STATICS_getCoinString
		GEODE_AS_STATIC_FUNCTION(getCoinString) 
	#endif

	#ifndef GEODE_STATICS_getEndText
		#define GEODE_STATICS_getEndText
		GEODE_AS_STATIC_FUNCTION(getEndText) 
	#endif

	#ifndef GEODE_STATICS_goEdit
		#define GEODE_STATICS_goEdit
		GEODE_AS_STATIC_FUNCTION(goEdit) 
	#endif

	#ifndef GEODE_STATICS_onEdit
		#define GEODE_STATICS_onEdit
		GEODE_AS_STATIC_FUNCTION(onEdit) 
	#endif

	#ifndef GEODE_STATICS_onEveryplay
		#define GEODE_STATICS_onEveryplay
		GEODE_AS_STATIC_FUNCTION(onEveryplay) 
	#endif

	#ifndef GEODE_STATICS_onMenu
		#define GEODE_STATICS_onMenu
		GEODE_AS_STATIC_FUNCTION(onMenu) 
	#endif

	#ifndef GEODE_STATICS_onReplay
		#define GEODE_STATICS_onReplay
		GEODE_AS_STATIC_FUNCTION(onReplay) 
	#endif

	#ifndef GEODE_STATICS_playCoinEffect
		#define GEODE_STATICS_playCoinEffect
		GEODE_AS_STATIC_FUNCTION(playCoinEffect) 
	#endif

	#ifndef GEODE_STATICS_playStarEffect
		#define GEODE_STATICS_playStarEffect
		GEODE_AS_STATIC_FUNCTION(playStarEffect) 
	#endif

	#ifndef GEODE_STATICS_starEnterFinished
		#define GEODE_STATICS_starEnterFinished
		GEODE_AS_STATIC_FUNCTION(starEnterFinished) 
	#endif

	#ifndef GEODE_STATICS_tryShowBanner
		#define GEODE_STATICS_tryShowBanner
		GEODE_AS_STATIC_FUNCTION(tryShowBanner) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_keyDown
		#define GEODE_STATICS_keyDown
		GEODE_AS_STATIC_FUNCTION(keyDown) 
	#endif

	#ifndef GEODE_STATICS_customSetup
		#define GEODE_STATICS_customSetup
		GEODE_AS_STATIC_FUNCTION(customSetup) 
	#endif

	#ifndef GEODE_STATICS_showLayer
		#define GEODE_STATICS_showLayer
		GEODE_AS_STATIC_FUNCTION(showLayer) 
	#endif

	#ifndef GEODE_STATICS_enterAnimFinished
		#define GEODE_STATICS_enterAnimFinished
		GEODE_AS_STATIC_FUNCTION(enterAnimFinished) 
	#endif

	#ifndef GEODE_STATICS_keyUp
		#define GEODE_STATICS_keyUp
		GEODE_AS_STATIC_FUNCTION(keyUp) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_coinEnterFinished
		#define GEODE_CONCEPT_CHECK_coinEnterFinished
		GEODE_CONCEPT_FUNCTION_CHECK(coinEnterFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_coinEnterFinishedO
		#define GEODE_CONCEPT_CHECK_coinEnterFinishedO
		GEODE_CONCEPT_FUNCTION_CHECK(coinEnterFinishedO) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCoinString
		#define GEODE_CONCEPT_CHECK_getCoinString
		GEODE_CONCEPT_FUNCTION_CHECK(getCoinString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEndText
		#define GEODE_CONCEPT_CHECK_getEndText
		GEODE_CONCEPT_FUNCTION_CHECK(getEndText) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_goEdit
		#define GEODE_CONCEPT_CHECK_goEdit
		GEODE_CONCEPT_FUNCTION_CHECK(goEdit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEdit
		#define GEODE_CONCEPT_CHECK_onEdit
		GEODE_CONCEPT_FUNCTION_CHECK(onEdit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEveryplay
		#define GEODE_CONCEPT_CHECK_onEveryplay
		GEODE_CONCEPT_FUNCTION_CHECK(onEveryplay) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMenu
		#define GEODE_CONCEPT_CHECK_onMenu
		GEODE_CONCEPT_FUNCTION_CHECK(onMenu) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onReplay
		#define GEODE_CONCEPT_CHECK_onReplay
		GEODE_CONCEPT_FUNCTION_CHECK(onReplay) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playCoinEffect
		#define GEODE_CONCEPT_CHECK_playCoinEffect
		GEODE_CONCEPT_FUNCTION_CHECK(playCoinEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playStarEffect
		#define GEODE_CONCEPT_CHECK_playStarEffect
		GEODE_CONCEPT_FUNCTION_CHECK(playStarEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_starEnterFinished
		#define GEODE_CONCEPT_CHECK_starEnterFinished
		GEODE_CONCEPT_FUNCTION_CHECK(starEnterFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryShowBanner
		#define GEODE_CONCEPT_CHECK_tryShowBanner
		GEODE_CONCEPT_FUNCTION_CHECK(tryShowBanner) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyDown
		#define GEODE_CONCEPT_CHECK_keyDown
		GEODE_CONCEPT_FUNCTION_CHECK(keyDown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_customSetup
		#define GEODE_CONCEPT_CHECK_customSetup
		GEODE_CONCEPT_FUNCTION_CHECK(customSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showLayer
		#define GEODE_CONCEPT_CHECK_showLayer
		GEODE_CONCEPT_FUNCTION_CHECK(showLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_enterAnimFinished
		#define GEODE_CONCEPT_CHECK_enterAnimFinished
		GEODE_CONCEPT_FUNCTION_CHECK(enterAnimFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyUp
		#define GEODE_CONCEPT_CHECK_keyUp
		GEODE_CONCEPT_FUNCTION_CHECK(keyUp) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EndLevelLayer> : ModifyBase<ModifyDerive<Der, EndLevelLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EndLevelLayer>>;
		using ModifyBase<ModifyDerive<Der, EndLevelLayer>>::ModifyBase;
		using Base = EndLevelLayer;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EndLevelLayer, create, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EndLevelLayer, coinEnterFinished, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EndLevelLayer, coinEnterFinishedO, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EndLevelLayer, getCoinString, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EndLevelLayer, getEndText, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EndLevelLayer, goEdit, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EndLevelLayer, onEdit, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EndLevelLayer, onEveryplay, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EndLevelLayer, onMenu, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EndLevelLayer, onReplay, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EndLevelLayer, playCoinEffect, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EndLevelLayer, playStarEffect, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EndLevelLayer, starEnterFinished, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EndLevelLayer, tryShowBanner, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EndLevelLayer, keyBackClicked, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EndLevelLayer, keyDown, cocos2d::enumKeyCodes)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EndLevelLayer, customSetup, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EndLevelLayer, showLayer, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EndLevelLayer, enterAnimFinished, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EndLevelLayer, keyUp, cocos2d::enumKeyCodes)
		}
	};
}
