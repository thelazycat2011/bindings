#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/BoomScrollLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_addPage
		#define GEODE_STATICS_addPage
		GEODE_AS_STATIC_FUNCTION(addPage) 
	#endif

	#ifndef GEODE_STATICS_cancelAndStoleTouch
		#define GEODE_STATICS_cancelAndStoleTouch
		GEODE_AS_STATIC_FUNCTION(cancelAndStoleTouch) 
	#endif

	#ifndef GEODE_STATICS_claimTouch
		#define GEODE_STATICS_claimTouch
		GEODE_AS_STATIC_FUNCTION(claimTouch) 
	#endif

	#ifndef GEODE_STATICS_getCurrentScreen
		#define GEODE_STATICS_getCurrentScreen
		GEODE_AS_STATIC_FUNCTION(getCurrentScreen) 
	#endif

	#ifndef GEODE_STATICS_getDelegate
		#define GEODE_STATICS_getDelegate
		GEODE_AS_STATIC_FUNCTION(getDelegate) 
	#endif

	#ifndef GEODE_STATICS_getInternalLayer
		#define GEODE_STATICS_getInternalLayer
		GEODE_AS_STATIC_FUNCTION(getInternalLayer) 
	#endif

	#ifndef GEODE_STATICS_getMarginOffset
		#define GEODE_STATICS_getMarginOffset
		GEODE_AS_STATIC_FUNCTION(getMarginOffset) 
	#endif

	#ifndef GEODE_STATICS_getMinimumTouchLengthToChangePage
		#define GEODE_STATICS_getMinimumTouchLengthToChangePage
		GEODE_AS_STATIC_FUNCTION(getMinimumTouchLengthToChangePage) 
	#endif

	#ifndef GEODE_STATICS_getMinimumTouchLengthToSlide
		#define GEODE_STATICS_getMinimumTouchLengthToSlide
		GEODE_AS_STATIC_FUNCTION(getMinimumTouchLengthToSlide) 
	#endif

	#ifndef GEODE_STATICS_getMinTouchSpeed
		#define GEODE_STATICS_getMinTouchSpeed
		GEODE_AS_STATIC_FUNCTION(getMinTouchSpeed) 
	#endif

	#ifndef GEODE_STATICS_getMovingToPage
		#define GEODE_STATICS_getMovingToPage
		GEODE_AS_STATIC_FUNCTION(getMovingToPage) 
	#endif

	#ifndef GEODE_STATICS_getOnlyShowOnePage
		#define GEODE_STATICS_getOnlyShowOnePage
		GEODE_AS_STATIC_FUNCTION(getOnlyShowOnePage) 
	#endif

	#ifndef GEODE_STATICS_getPage
		#define GEODE_STATICS_getPage
		GEODE_AS_STATIC_FUNCTION(getPage) 
	#endif

	#ifndef GEODE_STATICS_getpages
		#define GEODE_STATICS_getpages
		GEODE_AS_STATIC_FUNCTION(getpages) 
	#endif

	#ifndef GEODE_STATICS_getPagesIndicatorNormalColor
		#define GEODE_STATICS_getPagesIndicatorNormalColor
		GEODE_AS_STATIC_FUNCTION(getPagesIndicatorNormalColor) 
	#endif

	#ifndef GEODE_STATICS_getPagesIndicatorSelectedColor
		#define GEODE_STATICS_getPagesIndicatorSelectedColor
		GEODE_AS_STATIC_FUNCTION(getPagesIndicatorSelectedColor) 
	#endif

	#ifndef GEODE_STATICS_getPagesWidthOffset
		#define GEODE_STATICS_getPagesWidthOffset
		GEODE_AS_STATIC_FUNCTION(getPagesWidthOffset) 
	#endif

	#ifndef GEODE_STATICS_getRelativePageForNum
		#define GEODE_STATICS_getRelativePageForNum
		GEODE_AS_STATIC_FUNCTION(getRelativePageForNum) 
	#endif

	#ifndef GEODE_STATICS_getRelativePosForPage
		#define GEODE_STATICS_getRelativePosForPage
		GEODE_AS_STATIC_FUNCTION(getRelativePosForPage) 
	#endif

	#ifndef GEODE_STATICS_getScrollArea
		#define GEODE_STATICS_getScrollArea
		GEODE_AS_STATIC_FUNCTION(getScrollArea) 
	#endif

	#ifndef GEODE_STATICS_getShowPagesIndicator
		#define GEODE_STATICS_getShowPagesIndicator
		GEODE_AS_STATIC_FUNCTION(getShowPagesIndicator) 
	#endif

	#ifndef GEODE_STATICS_getStealTouches
		#define GEODE_STATICS_getStealTouches
		GEODE_AS_STATIC_FUNCTION(getStealTouches) 
	#endif

	#ifndef GEODE_STATICS_getTotalPages
		#define GEODE_STATICS_getTotalPages
		GEODE_AS_STATIC_FUNCTION(getTotalPages) 
	#endif

	#ifndef GEODE_STATICS_getTouchSpeedFast
		#define GEODE_STATICS_getTouchSpeedFast
		GEODE_AS_STATIC_FUNCTION(getTouchSpeedFast) 
	#endif

	#ifndef GEODE_STATICS_getTouchSpeedMid
		#define GEODE_STATICS_getTouchSpeedMid
		GEODE_AS_STATIC_FUNCTION(getTouchSpeedMid) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_instantMoveToPage
		#define GEODE_STATICS_instantMoveToPage
		GEODE_AS_STATIC_FUNCTION(instantMoveToPage) 
	#endif

	#ifndef GEODE_STATICS_moveToPage
		#define GEODE_STATICS_moveToPage
		GEODE_AS_STATIC_FUNCTION(moveToPage) 
	#endif

	#ifndef GEODE_STATICS_moveToPageEnded
		#define GEODE_STATICS_moveToPageEnded
		GEODE_AS_STATIC_FUNCTION(moveToPageEnded) 
	#endif

	#ifndef GEODE_STATICS_pageNumberForPosition
		#define GEODE_STATICS_pageNumberForPosition
		GEODE_AS_STATIC_FUNCTION(pageNumberForPosition) 
	#endif

	#ifndef GEODE_STATICS_positionForPageWithNumber
		#define GEODE_STATICS_positionForPageWithNumber
		GEODE_AS_STATIC_FUNCTION(positionForPageWithNumber) 
	#endif

	#ifndef GEODE_STATICS_quickUpdate
		#define GEODE_STATICS_quickUpdate
		GEODE_AS_STATIC_FUNCTION(quickUpdate) 
	#endif

	#ifndef GEODE_STATICS_removePage
		#define GEODE_STATICS_removePage
		GEODE_AS_STATIC_FUNCTION(removePage) 
	#endif

	#ifndef GEODE_STATICS_removePageWithNumber
		#define GEODE_STATICS_removePageWithNumber
		GEODE_AS_STATIC_FUNCTION(removePageWithNumber) 
	#endif

	#ifndef GEODE_STATICS_repositionPagesLooped
		#define GEODE_STATICS_repositionPagesLooped
		GEODE_AS_STATIC_FUNCTION(repositionPagesLooped) 
	#endif

	#ifndef GEODE_STATICS_selectPage
		#define GEODE_STATICS_selectPage
		GEODE_AS_STATIC_FUNCTION(selectPage) 
	#endif

	#ifndef GEODE_STATICS_setDelegate
		#define GEODE_STATICS_setDelegate
		GEODE_AS_STATIC_FUNCTION(setDelegate) 
	#endif

	#ifndef GEODE_STATICS_setDotScale
		#define GEODE_STATICS_setDotScale
		GEODE_AS_STATIC_FUNCTION(setDotScale) 
	#endif

	#ifndef GEODE_STATICS_setMarginOffset
		#define GEODE_STATICS_setMarginOffset
		GEODE_AS_STATIC_FUNCTION(setMarginOffset) 
	#endif

	#ifndef GEODE_STATICS_setMinimumTouchLengthToChangePage
		#define GEODE_STATICS_setMinimumTouchLengthToChangePage
		GEODE_AS_STATIC_FUNCTION(setMinimumTouchLengthToChangePage) 
	#endif

	#ifndef GEODE_STATICS_setMinimumTouchLengthToSlide
		#define GEODE_STATICS_setMinimumTouchLengthToSlide
		GEODE_AS_STATIC_FUNCTION(setMinimumTouchLengthToSlide) 
	#endif

	#ifndef GEODE_STATICS_setMinTouchSpeed
		#define GEODE_STATICS_setMinTouchSpeed
		GEODE_AS_STATIC_FUNCTION(setMinTouchSpeed) 
	#endif

	#ifndef GEODE_STATICS_setOnlyShowOnePage
		#define GEODE_STATICS_setOnlyShowOnePage
		GEODE_AS_STATIC_FUNCTION(setOnlyShowOnePage) 
	#endif

	#ifndef GEODE_STATICS_setPagesIndicatorNormalColor
		#define GEODE_STATICS_setPagesIndicatorNormalColor
		GEODE_AS_STATIC_FUNCTION(setPagesIndicatorNormalColor) 
	#endif

	#ifndef GEODE_STATICS_setPagesIndicatorPosition
		#define GEODE_STATICS_setPagesIndicatorPosition
		GEODE_AS_STATIC_FUNCTION(setPagesIndicatorPosition) 
	#endif

	#ifndef GEODE_STATICS_setPagesIndicatorSelectedColor
		#define GEODE_STATICS_setPagesIndicatorSelectedColor
		GEODE_AS_STATIC_FUNCTION(setPagesIndicatorSelectedColor) 
	#endif

	#ifndef GEODE_STATICS_setPagesWidthOffset
		#define GEODE_STATICS_setPagesWidthOffset
		GEODE_AS_STATIC_FUNCTION(setPagesWidthOffset) 
	#endif

	#ifndef GEODE_STATICS_setScrollArea
		#define GEODE_STATICS_setScrollArea
		GEODE_AS_STATIC_FUNCTION(setScrollArea) 
	#endif

	#ifndef GEODE_STATICS_setShowPagesIndicator
		#define GEODE_STATICS_setShowPagesIndicator
		GEODE_AS_STATIC_FUNCTION(setShowPagesIndicator) 
	#endif

	#ifndef GEODE_STATICS_setStealTouches
		#define GEODE_STATICS_setStealTouches
		GEODE_AS_STATIC_FUNCTION(setStealTouches) 
	#endif

	#ifndef GEODE_STATICS_setTouchSpeedFast
		#define GEODE_STATICS_setTouchSpeedFast
		GEODE_AS_STATIC_FUNCTION(setTouchSpeedFast) 
	#endif

	#ifndef GEODE_STATICS_setTouchSpeedMid
		#define GEODE_STATICS_setTouchSpeedMid
		GEODE_AS_STATIC_FUNCTION(setTouchSpeedMid) 
	#endif

	#ifndef GEODE_STATICS_setupDynamicScrolling
		#define GEODE_STATICS_setupDynamicScrolling
		GEODE_AS_STATIC_FUNCTION(setupDynamicScrolling) 
	#endif

	#ifndef GEODE_STATICS_togglePageIndicators
		#define GEODE_STATICS_togglePageIndicators
		GEODE_AS_STATIC_FUNCTION(togglePageIndicators) 
	#endif

	#ifndef GEODE_STATICS_updateDots
		#define GEODE_STATICS_updateDots
		GEODE_AS_STATIC_FUNCTION(updateDots) 
	#endif

	#ifndef GEODE_STATICS_updatePages
		#define GEODE_STATICS_updatePages
		GEODE_AS_STATIC_FUNCTION(updatePages) 
	#endif

	#ifndef GEODE_STATICS_visit
		#define GEODE_STATICS_visit
		GEODE_AS_STATIC_FUNCTION(visit) 
	#endif

	#ifndef GEODE_STATICS_ccTouchBegan
		#define GEODE_STATICS_ccTouchBegan
		GEODE_AS_STATIC_FUNCTION(ccTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_ccTouchMoved
		#define GEODE_STATICS_ccTouchMoved
		GEODE_AS_STATIC_FUNCTION(ccTouchMoved) 
	#endif

	#ifndef GEODE_STATICS_ccTouchEnded
		#define GEODE_STATICS_ccTouchEnded
		GEODE_AS_STATIC_FUNCTION(ccTouchEnded) 
	#endif

	#ifndef GEODE_STATICS_ccTouchCancelled
		#define GEODE_STATICS_ccTouchCancelled
		GEODE_AS_STATIC_FUNCTION(ccTouchCancelled) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addPage
		#define GEODE_CONCEPT_CHECK_addPage
		GEODE_CONCEPT_FUNCTION_CHECK(addPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_cancelAndStoleTouch
		#define GEODE_CONCEPT_CHECK_cancelAndStoleTouch
		GEODE_CONCEPT_FUNCTION_CHECK(cancelAndStoleTouch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_claimTouch
		#define GEODE_CONCEPT_CHECK_claimTouch
		GEODE_CONCEPT_FUNCTION_CHECK(claimTouch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCurrentScreen
		#define GEODE_CONCEPT_CHECK_getCurrentScreen
		GEODE_CONCEPT_FUNCTION_CHECK(getCurrentScreen) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDelegate
		#define GEODE_CONCEPT_CHECK_getDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(getDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getInternalLayer
		#define GEODE_CONCEPT_CHECK_getInternalLayer
		GEODE_CONCEPT_FUNCTION_CHECK(getInternalLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMarginOffset
		#define GEODE_CONCEPT_CHECK_getMarginOffset
		GEODE_CONCEPT_FUNCTION_CHECK(getMarginOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMinimumTouchLengthToChangePage
		#define GEODE_CONCEPT_CHECK_getMinimumTouchLengthToChangePage
		GEODE_CONCEPT_FUNCTION_CHECK(getMinimumTouchLengthToChangePage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMinimumTouchLengthToSlide
		#define GEODE_CONCEPT_CHECK_getMinimumTouchLengthToSlide
		GEODE_CONCEPT_FUNCTION_CHECK(getMinimumTouchLengthToSlide) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMinTouchSpeed
		#define GEODE_CONCEPT_CHECK_getMinTouchSpeed
		GEODE_CONCEPT_FUNCTION_CHECK(getMinTouchSpeed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMovingToPage
		#define GEODE_CONCEPT_CHECK_getMovingToPage
		GEODE_CONCEPT_FUNCTION_CHECK(getMovingToPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOnlyShowOnePage
		#define GEODE_CONCEPT_CHECK_getOnlyShowOnePage
		GEODE_CONCEPT_FUNCTION_CHECK(getOnlyShowOnePage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPage
		#define GEODE_CONCEPT_CHECK_getPage
		GEODE_CONCEPT_FUNCTION_CHECK(getPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getpages
		#define GEODE_CONCEPT_CHECK_getpages
		GEODE_CONCEPT_FUNCTION_CHECK(getpages) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPagesIndicatorNormalColor
		#define GEODE_CONCEPT_CHECK_getPagesIndicatorNormalColor
		GEODE_CONCEPT_FUNCTION_CHECK(getPagesIndicatorNormalColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPagesIndicatorSelectedColor
		#define GEODE_CONCEPT_CHECK_getPagesIndicatorSelectedColor
		GEODE_CONCEPT_FUNCTION_CHECK(getPagesIndicatorSelectedColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPagesWidthOffset
		#define GEODE_CONCEPT_CHECK_getPagesWidthOffset
		GEODE_CONCEPT_FUNCTION_CHECK(getPagesWidthOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRelativePageForNum
		#define GEODE_CONCEPT_CHECK_getRelativePageForNum
		GEODE_CONCEPT_FUNCTION_CHECK(getRelativePageForNum) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRelativePosForPage
		#define GEODE_CONCEPT_CHECK_getRelativePosForPage
		GEODE_CONCEPT_FUNCTION_CHECK(getRelativePosForPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getScrollArea
		#define GEODE_CONCEPT_CHECK_getScrollArea
		GEODE_CONCEPT_FUNCTION_CHECK(getScrollArea) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getShowPagesIndicator
		#define GEODE_CONCEPT_CHECK_getShowPagesIndicator
		GEODE_CONCEPT_FUNCTION_CHECK(getShowPagesIndicator) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStealTouches
		#define GEODE_CONCEPT_CHECK_getStealTouches
		GEODE_CONCEPT_FUNCTION_CHECK(getStealTouches) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTotalPages
		#define GEODE_CONCEPT_CHECK_getTotalPages
		GEODE_CONCEPT_FUNCTION_CHECK(getTotalPages) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTouchSpeedFast
		#define GEODE_CONCEPT_CHECK_getTouchSpeedFast
		GEODE_CONCEPT_FUNCTION_CHECK(getTouchSpeedFast) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTouchSpeedMid
		#define GEODE_CONCEPT_CHECK_getTouchSpeedMid
		GEODE_CONCEPT_FUNCTION_CHECK(getTouchSpeedMid) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_instantMoveToPage
		#define GEODE_CONCEPT_CHECK_instantMoveToPage
		GEODE_CONCEPT_FUNCTION_CHECK(instantMoveToPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_moveToPage
		#define GEODE_CONCEPT_CHECK_moveToPage
		GEODE_CONCEPT_FUNCTION_CHECK(moveToPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_moveToPageEnded
		#define GEODE_CONCEPT_CHECK_moveToPageEnded
		GEODE_CONCEPT_FUNCTION_CHECK(moveToPageEnded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pageNumberForPosition
		#define GEODE_CONCEPT_CHECK_pageNumberForPosition
		GEODE_CONCEPT_FUNCTION_CHECK(pageNumberForPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_positionForPageWithNumber
		#define GEODE_CONCEPT_CHECK_positionForPageWithNumber
		GEODE_CONCEPT_FUNCTION_CHECK(positionForPageWithNumber) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_quickUpdate
		#define GEODE_CONCEPT_CHECK_quickUpdate
		GEODE_CONCEPT_FUNCTION_CHECK(quickUpdate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removePage
		#define GEODE_CONCEPT_CHECK_removePage
		GEODE_CONCEPT_FUNCTION_CHECK(removePage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removePageWithNumber
		#define GEODE_CONCEPT_CHECK_removePageWithNumber
		GEODE_CONCEPT_FUNCTION_CHECK(removePageWithNumber) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_repositionPagesLooped
		#define GEODE_CONCEPT_CHECK_repositionPagesLooped
		GEODE_CONCEPT_FUNCTION_CHECK(repositionPagesLooped) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectPage
		#define GEODE_CONCEPT_CHECK_selectPage
		GEODE_CONCEPT_FUNCTION_CHECK(selectPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDelegate
		#define GEODE_CONCEPT_CHECK_setDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(setDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDotScale
		#define GEODE_CONCEPT_CHECK_setDotScale
		GEODE_CONCEPT_FUNCTION_CHECK(setDotScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMarginOffset
		#define GEODE_CONCEPT_CHECK_setMarginOffset
		GEODE_CONCEPT_FUNCTION_CHECK(setMarginOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMinimumTouchLengthToChangePage
		#define GEODE_CONCEPT_CHECK_setMinimumTouchLengthToChangePage
		GEODE_CONCEPT_FUNCTION_CHECK(setMinimumTouchLengthToChangePage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMinimumTouchLengthToSlide
		#define GEODE_CONCEPT_CHECK_setMinimumTouchLengthToSlide
		GEODE_CONCEPT_FUNCTION_CHECK(setMinimumTouchLengthToSlide) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMinTouchSpeed
		#define GEODE_CONCEPT_CHECK_setMinTouchSpeed
		GEODE_CONCEPT_FUNCTION_CHECK(setMinTouchSpeed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOnlyShowOnePage
		#define GEODE_CONCEPT_CHECK_setOnlyShowOnePage
		GEODE_CONCEPT_FUNCTION_CHECK(setOnlyShowOnePage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPagesIndicatorNormalColor
		#define GEODE_CONCEPT_CHECK_setPagesIndicatorNormalColor
		GEODE_CONCEPT_FUNCTION_CHECK(setPagesIndicatorNormalColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPagesIndicatorPosition
		#define GEODE_CONCEPT_CHECK_setPagesIndicatorPosition
		GEODE_CONCEPT_FUNCTION_CHECK(setPagesIndicatorPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPagesIndicatorSelectedColor
		#define GEODE_CONCEPT_CHECK_setPagesIndicatorSelectedColor
		GEODE_CONCEPT_FUNCTION_CHECK(setPagesIndicatorSelectedColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPagesWidthOffset
		#define GEODE_CONCEPT_CHECK_setPagesWidthOffset
		GEODE_CONCEPT_FUNCTION_CHECK(setPagesWidthOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setScrollArea
		#define GEODE_CONCEPT_CHECK_setScrollArea
		GEODE_CONCEPT_FUNCTION_CHECK(setScrollArea) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setShowPagesIndicator
		#define GEODE_CONCEPT_CHECK_setShowPagesIndicator
		GEODE_CONCEPT_FUNCTION_CHECK(setShowPagesIndicator) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStealTouches
		#define GEODE_CONCEPT_CHECK_setStealTouches
		GEODE_CONCEPT_FUNCTION_CHECK(setStealTouches) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTouchSpeedFast
		#define GEODE_CONCEPT_CHECK_setTouchSpeedFast
		GEODE_CONCEPT_FUNCTION_CHECK(setTouchSpeedFast) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTouchSpeedMid
		#define GEODE_CONCEPT_CHECK_setTouchSpeedMid
		GEODE_CONCEPT_FUNCTION_CHECK(setTouchSpeedMid) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupDynamicScrolling
		#define GEODE_CONCEPT_CHECK_setupDynamicScrolling
		GEODE_CONCEPT_FUNCTION_CHECK(setupDynamicScrolling) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_togglePageIndicators
		#define GEODE_CONCEPT_CHECK_togglePageIndicators
		GEODE_CONCEPT_FUNCTION_CHECK(togglePageIndicators) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDots
		#define GEODE_CONCEPT_CHECK_updateDots
		GEODE_CONCEPT_FUNCTION_CHECK(updateDots) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePages
		#define GEODE_CONCEPT_CHECK_updatePages
		GEODE_CONCEPT_FUNCTION_CHECK(updatePages) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_visit
		#define GEODE_CONCEPT_CHECK_visit
		GEODE_CONCEPT_FUNCTION_CHECK(visit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchBegan
		#define GEODE_CONCEPT_CHECK_ccTouchBegan
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchBegan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchMoved
		#define GEODE_CONCEPT_CHECK_ccTouchMoved
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchMoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchEnded
		#define GEODE_CONCEPT_CHECK_ccTouchEnded
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchEnded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchCancelled
		#define GEODE_CONCEPT_CHECK_ccTouchCancelled
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchCancelled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		#define GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		GEODE_CONCEPT_FUNCTION_CHECK(registerWithTouchDispatcher) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, BoomScrollLayer> : ModifyBase<ModifyDerive<Der, BoomScrollLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, BoomScrollLayer>>;
		using ModifyBase<ModifyDerive<Der, BoomScrollLayer>>::ModifyBase;
		using Base = BoomScrollLayer;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, create, cocos2d::CCArray*, int, bool, cocos2d::CCArray*, DynamicScrollDelegate*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, create, cocos2d::CCArray*, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, addPage, cocos2d::CCLayer*, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, addPage, cocos2d::CCLayer*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, cancelAndStoleTouch, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, claimTouch, cocos2d::CCTouch*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, getCurrentScreen, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, getDelegate, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, getInternalLayer, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, getMarginOffset, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, getMinimumTouchLengthToChangePage, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, getMinimumTouchLengthToSlide, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, getMinTouchSpeed, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, getMovingToPage, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, getOnlyShowOnePage, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, getPage, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, getpages, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, getPagesIndicatorNormalColor, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, getPagesIndicatorSelectedColor, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, getPagesWidthOffset, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, getRelativePageForNum, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, getRelativePosForPage, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, getScrollArea, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, getShowPagesIndicator, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, getStealTouches, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, getTotalPages, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, getTouchSpeedFast, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, getTouchSpeedMid, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, init, cocos2d::CCArray*, int, bool, cocos2d::CCArray*, DynamicScrollDelegate*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, instantMoveToPage, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, moveToPage, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, moveToPageEnded, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, pageNumberForPosition, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, positionForPageWithNumber, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, quickUpdate, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, removePage, cocos2d::CCLayer*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, removePageWithNumber, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, repositionPagesLooped, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, selectPage, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, setDelegate, BoomScrollLayerDelegate*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, setDotScale, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, setMarginOffset, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, setMinimumTouchLengthToChangePage, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, setMinimumTouchLengthToSlide, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, setMinTouchSpeed, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, setOnlyShowOnePage, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, setPagesIndicatorNormalColor, cocos2d::ccColor4B)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, setPagesIndicatorPosition, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, setPagesIndicatorSelectedColor, cocos2d::ccColor4B)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, setPagesWidthOffset, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, setScrollArea, cocos2d::CCRect)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, setShowPagesIndicator, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, setStealTouches, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, setTouchSpeedFast, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, setTouchSpeedMid, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, setupDynamicScrolling, cocos2d::CCArray*, DynamicScrollDelegate*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, togglePageIndicators, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, updateDots, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, updatePages, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, visit, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BoomScrollLayer, registerWithTouchDispatcher, )
		}
	};
}
