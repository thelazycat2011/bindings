#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GameToolbox.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_addBackButton
		#define GEODE_STATICS_addBackButton
		GEODE_AS_STATIC_FUNCTION(addBackButton) 
	#endif

	#ifndef GEODE_STATICS_addRThumbScrollButton
		#define GEODE_STATICS_addRThumbScrollButton
		GEODE_AS_STATIC_FUNCTION(addRThumbScrollButton) 
	#endif

	#ifndef GEODE_STATICS_alignItemsHorisontally
		#define GEODE_STATICS_alignItemsHorisontally
		GEODE_AS_STATIC_FUNCTION(alignItemsHorisontally) 
	#endif

	#ifndef GEODE_STATICS_alignItemsVertically
		#define GEODE_STATICS_alignItemsVertically
		GEODE_AS_STATIC_FUNCTION(alignItemsVertically) 
	#endif

	#ifndef GEODE_STATICS_createToggleButton
		#define GEODE_STATICS_createToggleButton
		GEODE_AS_STATIC_FUNCTION(createToggleButton) 
	#endif

	#ifndef GEODE_STATICS_doWeHaveInternet
		#define GEODE_STATICS_doWeHaveInternet
		GEODE_AS_STATIC_FUNCTION(doWeHaveInternet) 
	#endif

	#ifndef GEODE_STATICS_getDropActionWDelay
		#define GEODE_STATICS_getDropActionWDelay
		GEODE_AS_STATIC_FUNCTION(getDropActionWDelay) 
	#endif

	#ifndef GEODE_STATICS_getDropActionWEnd
		#define GEODE_STATICS_getDropActionWEnd
		GEODE_AS_STATIC_FUNCTION(getDropActionWEnd) 
	#endif

	#ifndef GEODE_STATICS_getRelativeOffset
		#define GEODE_STATICS_getRelativeOffset
		GEODE_AS_STATIC_FUNCTION(getRelativeOffset) 
	#endif

	#ifndef GEODE_STATICS_getResponse
		#define GEODE_STATICS_getResponse
		GEODE_AS_STATIC_FUNCTION(getResponse) 
	#endif

	#ifndef GEODE_STATICS_hsvFromString
		#define GEODE_STATICS_hsvFromString
		GEODE_AS_STATIC_FUNCTION(hsvFromString) 
	#endif

	#ifndef GEODE_STATICS_isIOS
		#define GEODE_STATICS_isIOS
		GEODE_AS_STATIC_FUNCTION(isIOS) 
	#endif

	#ifndef GEODE_STATICS_mergeDictsSaveLargestInt
		#define GEODE_STATICS_mergeDictsSaveLargestInt
		GEODE_AS_STATIC_FUNCTION(mergeDictsSaveLargestInt) 
	#endif

	#ifndef GEODE_STATICS_multipliedColorValue
		#define GEODE_STATICS_multipliedColorValue
		GEODE_AS_STATIC_FUNCTION(multipliedColorValue) 
	#endif

	#ifndef GEODE_STATICS_openAppPage
		#define GEODE_STATICS_openAppPage
		GEODE_AS_STATIC_FUNCTION(openAppPage) 
	#endif

	#ifndef GEODE_STATICS_openRateURL
		#define GEODE_STATICS_openRateURL
		GEODE_AS_STATIC_FUNCTION(openRateURL) 
	#endif

	#ifndef GEODE_STATICS_postClipVisit
		#define GEODE_STATICS_postClipVisit
		GEODE_AS_STATIC_FUNCTION(postClipVisit) 
	#endif

	#ifndef GEODE_STATICS_preVisitWithClippingRect
		#define GEODE_STATICS_preVisitWithClippingRect
		GEODE_AS_STATIC_FUNCTION(preVisitWithClippingRect) 
	#endif

	#ifndef GEODE_STATICS_stringFromHSV
		#define GEODE_STATICS_stringFromHSV
		GEODE_AS_STATIC_FUNCTION(stringFromHSV) 
	#endif

	#ifndef GEODE_STATICS_stringSetupToDict
		#define GEODE_STATICS_stringSetupToDict
		GEODE_AS_STATIC_FUNCTION(stringSetupToDict) 
	#endif

	#ifndef GEODE_STATICS_stringSetupToMap
		#define GEODE_STATICS_stringSetupToMap
		GEODE_AS_STATIC_FUNCTION(stringSetupToMap) 
	#endif

	#ifndef GEODE_STATICS_transformColor
		#define GEODE_STATICS_transformColor
		GEODE_AS_STATIC_FUNCTION(transformColor) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_addBackButton
		#define GEODE_CONCEPT_CHECK_addBackButton
		GEODE_CONCEPT_FUNCTION_CHECK(addBackButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addRThumbScrollButton
		#define GEODE_CONCEPT_CHECK_addRThumbScrollButton
		GEODE_CONCEPT_FUNCTION_CHECK(addRThumbScrollButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_alignItemsHorisontally
		#define GEODE_CONCEPT_CHECK_alignItemsHorisontally
		GEODE_CONCEPT_FUNCTION_CHECK(alignItemsHorisontally) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_alignItemsVertically
		#define GEODE_CONCEPT_CHECK_alignItemsVertically
		GEODE_CONCEPT_FUNCTION_CHECK(alignItemsVertically) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createToggleButton
		#define GEODE_CONCEPT_CHECK_createToggleButton
		GEODE_CONCEPT_FUNCTION_CHECK(createToggleButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_doWeHaveInternet
		#define GEODE_CONCEPT_CHECK_doWeHaveInternet
		GEODE_CONCEPT_FUNCTION_CHECK(doWeHaveInternet) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDropActionWDelay
		#define GEODE_CONCEPT_CHECK_getDropActionWDelay
		GEODE_CONCEPT_FUNCTION_CHECK(getDropActionWDelay) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDropActionWEnd
		#define GEODE_CONCEPT_CHECK_getDropActionWEnd
		GEODE_CONCEPT_FUNCTION_CHECK(getDropActionWEnd) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRelativeOffset
		#define GEODE_CONCEPT_CHECK_getRelativeOffset
		GEODE_CONCEPT_FUNCTION_CHECK(getRelativeOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getResponse
		#define GEODE_CONCEPT_CHECK_getResponse
		GEODE_CONCEPT_FUNCTION_CHECK(getResponse) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hsvFromString
		#define GEODE_CONCEPT_CHECK_hsvFromString
		GEODE_CONCEPT_FUNCTION_CHECK(hsvFromString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isIOS
		#define GEODE_CONCEPT_CHECK_isIOS
		GEODE_CONCEPT_FUNCTION_CHECK(isIOS) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_mergeDictsSaveLargestInt
		#define GEODE_CONCEPT_CHECK_mergeDictsSaveLargestInt
		GEODE_CONCEPT_FUNCTION_CHECK(mergeDictsSaveLargestInt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_multipliedColorValue
		#define GEODE_CONCEPT_CHECK_multipliedColorValue
		GEODE_CONCEPT_FUNCTION_CHECK(multipliedColorValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_openAppPage
		#define GEODE_CONCEPT_CHECK_openAppPage
		GEODE_CONCEPT_FUNCTION_CHECK(openAppPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_openRateURL
		#define GEODE_CONCEPT_CHECK_openRateURL
		GEODE_CONCEPT_FUNCTION_CHECK(openRateURL) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_postClipVisit
		#define GEODE_CONCEPT_CHECK_postClipVisit
		GEODE_CONCEPT_FUNCTION_CHECK(postClipVisit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_preVisitWithClippingRect
		#define GEODE_CONCEPT_CHECK_preVisitWithClippingRect
		GEODE_CONCEPT_FUNCTION_CHECK(preVisitWithClippingRect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stringFromHSV
		#define GEODE_CONCEPT_CHECK_stringFromHSV
		GEODE_CONCEPT_FUNCTION_CHECK(stringFromHSV) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stringSetupToDict
		#define GEODE_CONCEPT_CHECK_stringSetupToDict
		GEODE_CONCEPT_FUNCTION_CHECK(stringSetupToDict) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stringSetupToMap
		#define GEODE_CONCEPT_CHECK_stringSetupToMap
		GEODE_CONCEPT_FUNCTION_CHECK(stringSetupToMap) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_transformColor
		#define GEODE_CONCEPT_CHECK_transformColor
		GEODE_CONCEPT_FUNCTION_CHECK(transformColor) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GameToolbox> : ModifyBase<ModifyDerive<Der, GameToolbox>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GameToolbox>>;
		using ModifyBase<ModifyDerive<Der, GameToolbox>>::ModifyBase;
		using Base = GameToolbox;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameToolbox, addBackButton, cocos2d::CCLayer*, cocos2d::CCMenuItem*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameToolbox, addRThumbScrollButton, cocos2d::CCLayer*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameToolbox, alignItemsHorisontally, cocos2d::CCArray*, float, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameToolbox, alignItemsVertically, cocos2d::CCArray*, float, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameToolbox, createToggleButton, gd::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCNode*, cocos2d::CCNode*, float, float, float, cocos2d::CCPoint, char const*, bool, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameToolbox, createToggleButton, gd::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCNode*, cocos2d::CCNode*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameToolbox, doWeHaveInternet, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameToolbox, getDropActionWDelay, float, float, float, cocos2d::CCNode*, cocos2d::SEL_CallFunc)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameToolbox, getDropActionWEnd, float, float, float, cocos2d::CCAction*, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameToolbox, getRelativeOffset, GameObject*, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameToolbox, getResponse, cocos2d::extension::CCHttpResponse*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameToolbox, hsvFromString, gd::string, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameToolbox, isIOS, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameToolbox, mergeDictsSaveLargestInt, cocos2d::CCDictionary*, cocos2d::CCDictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameToolbox, multipliedColorValue, cocos2d::ccColor3B, cocos2d::ccColor3B, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameToolbox, openAppPage, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameToolbox, openRateURL, gd::string, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameToolbox, postClipVisit, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameToolbox, preVisitWithClippingRect, cocos2d::CCNode*, cocos2d::CCRect, cocos2d::CCNode*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameToolbox, stringFromHSV, cocos2d::ccHSVValue, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameToolbox, stringSetupToDict, gd::string, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameToolbox, stringSetupToMap, gd::string, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameToolbox, transformColor, cocos2d::ccColor3B const&, cocos2d::ccHSVValue)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameToolbox, transformColor, cocos2d::ccColor3B const&, float, float, float)
		}
	};
}
