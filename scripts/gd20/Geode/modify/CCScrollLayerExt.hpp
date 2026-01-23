#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCScrollLayerExt.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_constraintContent
		#define GEODE_STATICS_constraintContent
		GEODE_AS_STATIC_FUNCTION(constraintContent) 
	#endif

	#ifndef GEODE_STATICS_getBottomPadding
		#define GEODE_STATICS_getBottomPadding
		GEODE_AS_STATIC_FUNCTION(getBottomPadding) 
	#endif

	#ifndef GEODE_STATICS_getClipsToBounds
		#define GEODE_STATICS_getClipsToBounds
		GEODE_AS_STATIC_FUNCTION(getClipsToBounds) 
	#endif

	#ifndef GEODE_STATICS_getContentLayer
		#define GEODE_STATICS_getContentLayer
		GEODE_AS_STATIC_FUNCTION(getContentLayer) 
	#endif

	#ifndef GEODE_STATICS_getHorizontalScrollIndicator
		#define GEODE_STATICS_getHorizontalScrollIndicator
		GEODE_AS_STATIC_FUNCTION(getHorizontalScrollIndicator) 
	#endif

	#ifndef GEODE_STATICS_getIsScrolling
		#define GEODE_STATICS_getIsScrolling
		GEODE_AS_STATIC_FUNCTION(getIsScrolling) 
	#endif

	#ifndef GEODE_STATICS_getIsTouch
		#define GEODE_STATICS_getIsTouch
		GEODE_AS_STATIC_FUNCTION(getIsTouch) 
	#endif

	#ifndef GEODE_STATICS_getLockHorizontal
		#define GEODE_STATICS_getLockHorizontal
		GEODE_AS_STATIC_FUNCTION(getLockHorizontal) 
	#endif

	#ifndef GEODE_STATICS_getLockVertical
		#define GEODE_STATICS_getLockVertical
		GEODE_AS_STATIC_FUNCTION(getLockVertical) 
	#endif

	#ifndef GEODE_STATICS_getMaxOffsetBottom
		#define GEODE_STATICS_getMaxOffsetBottom
		GEODE_AS_STATIC_FUNCTION(getMaxOffsetBottom) 
	#endif

	#ifndef GEODE_STATICS_getMaxOffsetTop
		#define GEODE_STATICS_getMaxOffsetTop
		GEODE_AS_STATIC_FUNCTION(getMaxOffsetTop) 
	#endif

	#ifndef GEODE_STATICS_getMaxY
		#define GEODE_STATICS_getMaxY
		GEODE_AS_STATIC_FUNCTION(getMaxY) 
	#endif

	#ifndef GEODE_STATICS_getMinY
		#define GEODE_STATICS_getMinY
		GEODE_AS_STATIC_FUNCTION(getMinY) 
	#endif

	#ifndef GEODE_STATICS_getScrollDelegate
		#define GEODE_STATICS_getScrollDelegate
		GEODE_AS_STATIC_FUNCTION(getScrollDelegate) 
	#endif

	#ifndef GEODE_STATICS_getShowsHorizontalScrollIndicator
		#define GEODE_STATICS_getShowsHorizontalScrollIndicator
		GEODE_AS_STATIC_FUNCTION(getShowsHorizontalScrollIndicator) 
	#endif

	#ifndef GEODE_STATICS_getShowsVerticalScrollIndicator
		#define GEODE_STATICS_getShowsVerticalScrollIndicator
		GEODE_AS_STATIC_FUNCTION(getShowsVerticalScrollIndicator) 
	#endif

	#ifndef GEODE_STATICS_getTopPadding
		#define GEODE_STATICS_getTopPadding
		GEODE_AS_STATIC_FUNCTION(getTopPadding) 
	#endif

	#ifndef GEODE_STATICS_getTouchDispatch
		#define GEODE_STATICS_getTouchDispatch
		GEODE_AS_STATIC_FUNCTION(getTouchDispatch) 
	#endif

	#ifndef GEODE_STATICS_getVerticalScrollIndicator
		#define GEODE_STATICS_getVerticalScrollIndicator
		GEODE_AS_STATIC_FUNCTION(getVerticalScrollIndicator) 
	#endif

	#ifndef GEODE_STATICS_moveToTop
		#define GEODE_STATICS_moveToTop
		GEODE_AS_STATIC_FUNCTION(moveToTop) 
	#endif

	#ifndef GEODE_STATICS_moveToTopWithOffset
		#define GEODE_STATICS_moveToTopWithOffset
		GEODE_AS_STATIC_FUNCTION(moveToTopWithOffset) 
	#endif

	#ifndef GEODE_STATICS_scrollingEnd
		#define GEODE_STATICS_scrollingEnd
		GEODE_AS_STATIC_FUNCTION(scrollingEnd) 
	#endif

	#ifndef GEODE_STATICS_scrollLayer
		#define GEODE_STATICS_scrollLayer
		GEODE_AS_STATIC_FUNCTION(scrollLayer) 
	#endif

	#ifndef GEODE_STATICS_setBottomPadding
		#define GEODE_STATICS_setBottomPadding
		GEODE_AS_STATIC_FUNCTION(setBottomPadding) 
	#endif

	#ifndef GEODE_STATICS_setClipsToBounds
		#define GEODE_STATICS_setClipsToBounds
		GEODE_AS_STATIC_FUNCTION(setClipsToBounds) 
	#endif

	#ifndef GEODE_STATICS_setContentLayer
		#define GEODE_STATICS_setContentLayer
		GEODE_AS_STATIC_FUNCTION(setContentLayer) 
	#endif

	#ifndef GEODE_STATICS_setContentLayerSize
		#define GEODE_STATICS_setContentLayerSize
		GEODE_AS_STATIC_FUNCTION(setContentLayerSize) 
	#endif

	#ifndef GEODE_STATICS_setContentOffset
		#define GEODE_STATICS_setContentOffset
		GEODE_AS_STATIC_FUNCTION(setContentOffset) 
	#endif

	#ifndef GEODE_STATICS_setHorizontalScrollIndicator
		#define GEODE_STATICS_setHorizontalScrollIndicator
		GEODE_AS_STATIC_FUNCTION(setHorizontalScrollIndicator) 
	#endif

	#ifndef GEODE_STATICS_setIsScrolling
		#define GEODE_STATICS_setIsScrolling
		GEODE_AS_STATIC_FUNCTION(setIsScrolling) 
	#endif

	#ifndef GEODE_STATICS_setIsTouch
		#define GEODE_STATICS_setIsTouch
		GEODE_AS_STATIC_FUNCTION(setIsTouch) 
	#endif

	#ifndef GEODE_STATICS_setLockHorizontal
		#define GEODE_STATICS_setLockHorizontal
		GEODE_AS_STATIC_FUNCTION(setLockHorizontal) 
	#endif

	#ifndef GEODE_STATICS_setLockVertical
		#define GEODE_STATICS_setLockVertical
		GEODE_AS_STATIC_FUNCTION(setLockVertical) 
	#endif

	#ifndef GEODE_STATICS_setMaxOffsetBottom
		#define GEODE_STATICS_setMaxOffsetBottom
		GEODE_AS_STATIC_FUNCTION(setMaxOffsetBottom) 
	#endif

	#ifndef GEODE_STATICS_setMaxOffsetTop
		#define GEODE_STATICS_setMaxOffsetTop
		GEODE_AS_STATIC_FUNCTION(setMaxOffsetTop) 
	#endif

	#ifndef GEODE_STATICS_setScrollDelegate
		#define GEODE_STATICS_setScrollDelegate
		GEODE_AS_STATIC_FUNCTION(setScrollDelegate) 
	#endif

	#ifndef GEODE_STATICS_setShowsHorizontalScrollIndicator
		#define GEODE_STATICS_setShowsHorizontalScrollIndicator
		GEODE_AS_STATIC_FUNCTION(setShowsHorizontalScrollIndicator) 
	#endif

	#ifndef GEODE_STATICS_setShowsVerticalScrollIndicator
		#define GEODE_STATICS_setShowsVerticalScrollIndicator
		GEODE_AS_STATIC_FUNCTION(setShowsVerticalScrollIndicator) 
	#endif

	#ifndef GEODE_STATICS_setTopPadding
		#define GEODE_STATICS_setTopPadding
		GEODE_AS_STATIC_FUNCTION(setTopPadding) 
	#endif

	#ifndef GEODE_STATICS_setTouchDispatch
		#define GEODE_STATICS_setTouchDispatch
		GEODE_AS_STATIC_FUNCTION(setTouchDispatch) 
	#endif

	#ifndef GEODE_STATICS_setVerticalScrollIndicator
		#define GEODE_STATICS_setVerticalScrollIndicator
		GEODE_AS_STATIC_FUNCTION(setVerticalScrollIndicator) 
	#endif

	#ifndef GEODE_STATICS_updateIndicators
		#define GEODE_STATICS_updateIndicators
		GEODE_AS_STATIC_FUNCTION(updateIndicators) 
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

	#ifndef GEODE_STATICS_preVisitWithClippingRect
		#define GEODE_STATICS_preVisitWithClippingRect
		GEODE_AS_STATIC_FUNCTION(preVisitWithClippingRect) 
	#endif

	#ifndef GEODE_STATICS_postVisit
		#define GEODE_STATICS_postVisit
		GEODE_AS_STATIC_FUNCTION(postVisit) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_constraintContent
		#define GEODE_CONCEPT_CHECK_constraintContent
		GEODE_CONCEPT_FUNCTION_CHECK(constraintContent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBottomPadding
		#define GEODE_CONCEPT_CHECK_getBottomPadding
		GEODE_CONCEPT_FUNCTION_CHECK(getBottomPadding) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getClipsToBounds
		#define GEODE_CONCEPT_CHECK_getClipsToBounds
		GEODE_CONCEPT_FUNCTION_CHECK(getClipsToBounds) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getContentLayer
		#define GEODE_CONCEPT_CHECK_getContentLayer
		GEODE_CONCEPT_FUNCTION_CHECK(getContentLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getHorizontalScrollIndicator
		#define GEODE_CONCEPT_CHECK_getHorizontalScrollIndicator
		GEODE_CONCEPT_FUNCTION_CHECK(getHorizontalScrollIndicator) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIsScrolling
		#define GEODE_CONCEPT_CHECK_getIsScrolling
		GEODE_CONCEPT_FUNCTION_CHECK(getIsScrolling) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIsTouch
		#define GEODE_CONCEPT_CHECK_getIsTouch
		GEODE_CONCEPT_FUNCTION_CHECK(getIsTouch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLockHorizontal
		#define GEODE_CONCEPT_CHECK_getLockHorizontal
		GEODE_CONCEPT_FUNCTION_CHECK(getLockHorizontal) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLockVertical
		#define GEODE_CONCEPT_CHECK_getLockVertical
		GEODE_CONCEPT_FUNCTION_CHECK(getLockVertical) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMaxOffsetBottom
		#define GEODE_CONCEPT_CHECK_getMaxOffsetBottom
		GEODE_CONCEPT_FUNCTION_CHECK(getMaxOffsetBottom) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMaxOffsetTop
		#define GEODE_CONCEPT_CHECK_getMaxOffsetTop
		GEODE_CONCEPT_FUNCTION_CHECK(getMaxOffsetTop) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMaxY
		#define GEODE_CONCEPT_CHECK_getMaxY
		GEODE_CONCEPT_FUNCTION_CHECK(getMaxY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMinY
		#define GEODE_CONCEPT_CHECK_getMinY
		GEODE_CONCEPT_FUNCTION_CHECK(getMinY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getScrollDelegate
		#define GEODE_CONCEPT_CHECK_getScrollDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(getScrollDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getShowsHorizontalScrollIndicator
		#define GEODE_CONCEPT_CHECK_getShowsHorizontalScrollIndicator
		GEODE_CONCEPT_FUNCTION_CHECK(getShowsHorizontalScrollIndicator) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getShowsVerticalScrollIndicator
		#define GEODE_CONCEPT_CHECK_getShowsVerticalScrollIndicator
		GEODE_CONCEPT_FUNCTION_CHECK(getShowsVerticalScrollIndicator) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTopPadding
		#define GEODE_CONCEPT_CHECK_getTopPadding
		GEODE_CONCEPT_FUNCTION_CHECK(getTopPadding) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTouchDispatch
		#define GEODE_CONCEPT_CHECK_getTouchDispatch
		GEODE_CONCEPT_FUNCTION_CHECK(getTouchDispatch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getVerticalScrollIndicator
		#define GEODE_CONCEPT_CHECK_getVerticalScrollIndicator
		GEODE_CONCEPT_FUNCTION_CHECK(getVerticalScrollIndicator) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_moveToTop
		#define GEODE_CONCEPT_CHECK_moveToTop
		GEODE_CONCEPT_FUNCTION_CHECK(moveToTop) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_moveToTopWithOffset
		#define GEODE_CONCEPT_CHECK_moveToTopWithOffset
		GEODE_CONCEPT_FUNCTION_CHECK(moveToTopWithOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scrollingEnd
		#define GEODE_CONCEPT_CHECK_scrollingEnd
		GEODE_CONCEPT_FUNCTION_CHECK(scrollingEnd) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scrollLayer
		#define GEODE_CONCEPT_CHECK_scrollLayer
		GEODE_CONCEPT_FUNCTION_CHECK(scrollLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setBottomPadding
		#define GEODE_CONCEPT_CHECK_setBottomPadding
		GEODE_CONCEPT_FUNCTION_CHECK(setBottomPadding) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setClipsToBounds
		#define GEODE_CONCEPT_CHECK_setClipsToBounds
		GEODE_CONCEPT_FUNCTION_CHECK(setClipsToBounds) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setContentLayer
		#define GEODE_CONCEPT_CHECK_setContentLayer
		GEODE_CONCEPT_FUNCTION_CHECK(setContentLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setContentLayerSize
		#define GEODE_CONCEPT_CHECK_setContentLayerSize
		GEODE_CONCEPT_FUNCTION_CHECK(setContentLayerSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setContentOffset
		#define GEODE_CONCEPT_CHECK_setContentOffset
		GEODE_CONCEPT_FUNCTION_CHECK(setContentOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setHorizontalScrollIndicator
		#define GEODE_CONCEPT_CHECK_setHorizontalScrollIndicator
		GEODE_CONCEPT_FUNCTION_CHECK(setHorizontalScrollIndicator) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIsScrolling
		#define GEODE_CONCEPT_CHECK_setIsScrolling
		GEODE_CONCEPT_FUNCTION_CHECK(setIsScrolling) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIsTouch
		#define GEODE_CONCEPT_CHECK_setIsTouch
		GEODE_CONCEPT_FUNCTION_CHECK(setIsTouch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLockHorizontal
		#define GEODE_CONCEPT_CHECK_setLockHorizontal
		GEODE_CONCEPT_FUNCTION_CHECK(setLockHorizontal) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLockVertical
		#define GEODE_CONCEPT_CHECK_setLockVertical
		GEODE_CONCEPT_FUNCTION_CHECK(setLockVertical) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMaxOffsetBottom
		#define GEODE_CONCEPT_CHECK_setMaxOffsetBottom
		GEODE_CONCEPT_FUNCTION_CHECK(setMaxOffsetBottom) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMaxOffsetTop
		#define GEODE_CONCEPT_CHECK_setMaxOffsetTop
		GEODE_CONCEPT_FUNCTION_CHECK(setMaxOffsetTop) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setScrollDelegate
		#define GEODE_CONCEPT_CHECK_setScrollDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(setScrollDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setShowsHorizontalScrollIndicator
		#define GEODE_CONCEPT_CHECK_setShowsHorizontalScrollIndicator
		GEODE_CONCEPT_FUNCTION_CHECK(setShowsHorizontalScrollIndicator) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setShowsVerticalScrollIndicator
		#define GEODE_CONCEPT_CHECK_setShowsVerticalScrollIndicator
		GEODE_CONCEPT_FUNCTION_CHECK(setShowsVerticalScrollIndicator) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTopPadding
		#define GEODE_CONCEPT_CHECK_setTopPadding
		GEODE_CONCEPT_FUNCTION_CHECK(setTopPadding) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTouchDispatch
		#define GEODE_CONCEPT_CHECK_setTouchDispatch
		GEODE_CONCEPT_FUNCTION_CHECK(setTouchDispatch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setVerticalScrollIndicator
		#define GEODE_CONCEPT_CHECK_setVerticalScrollIndicator
		GEODE_CONCEPT_FUNCTION_CHECK(setVerticalScrollIndicator) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateIndicators
		#define GEODE_CONCEPT_CHECK_updateIndicators
		GEODE_CONCEPT_FUNCTION_CHECK(updateIndicators) 
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

	#ifndef GEODE_CONCEPT_CHECK_preVisitWithClippingRect
		#define GEODE_CONCEPT_CHECK_preVisitWithClippingRect
		GEODE_CONCEPT_FUNCTION_CHECK(preVisitWithClippingRect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_postVisit
		#define GEODE_CONCEPT_CHECK_postVisit
		GEODE_CONCEPT_FUNCTION_CHECK(postVisit) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCScrollLayerExt> : ModifyBase<ModifyDerive<Der, CCScrollLayerExt>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCScrollLayerExt>>;
		using ModifyBase<ModifyDerive<Der, CCScrollLayerExt>>::ModifyBase;
		using Base = CCScrollLayerExt;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExt, constraintContent, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExt, getBottomPadding, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExt, getClipsToBounds, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExt, getContentLayer, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExt, getHorizontalScrollIndicator, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExt, getIsScrolling, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExt, getIsTouch, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExt, getLockHorizontal, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExt, getLockVertical, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExt, getMaxOffsetBottom, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExt, getMaxOffsetTop, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExt, getMaxY, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExt, getMinY, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExt, getScrollDelegate, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExt, getShowsHorizontalScrollIndicator, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExt, getShowsVerticalScrollIndicator, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExt, getTopPadding, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExt, getTouchDispatch, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExt, getVerticalScrollIndicator, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExt, moveToTop, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExt, moveToTopWithOffset, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExt, scrollingEnd, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExt, scrollLayer, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExt, setBottomPadding, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExt, setClipsToBounds, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExt, setContentLayer, cocos2d::CCLayerColor*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExt, setContentLayerSize, cocos2d::CCSize)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExt, setContentOffset, cocos2d::CCPoint, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExt, setHorizontalScrollIndicator, cocos2d::CCLayerColor*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExt, setIsScrolling, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExt, setIsTouch, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExt, setLockHorizontal, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExt, setLockVertical, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExt, setMaxOffsetBottom, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExt, setMaxOffsetTop, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExt, setScrollDelegate, CCScrollLayerExtDelegate*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExt, setShowsHorizontalScrollIndicator, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExt, setShowsVerticalScrollIndicator, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExt, setTopPadding, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExt, setTouchDispatch, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExt, setVerticalScrollIndicator, cocos2d::CCLayerColor*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExt, updateIndicators, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExt, visit, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExt, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExt, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExt, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExt, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExt, registerWithTouchDispatcher, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExt, preVisitWithClippingRect, cocos2d::CCRect)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExt, postVisit, )
		}
	};
}
