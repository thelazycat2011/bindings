#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/TableView.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_cancelAndStoleTouch
		#define GEODE_STATICS_cancelAndStoleTouch
		GEODE_AS_STATIC_FUNCTION(cancelAndStoleTouch) 
	#endif

	#ifndef GEODE_STATICS_cellForRowAtIndexPath
		#define GEODE_STATICS_cellForRowAtIndexPath
		GEODE_AS_STATIC_FUNCTION(cellForRowAtIndexPath) 
	#endif

	#ifndef GEODE_STATICS_cellForTouch
		#define GEODE_STATICS_cellForTouch
		GEODE_AS_STATIC_FUNCTION(cellForTouch) 
	#endif

	#ifndef GEODE_STATICS_checkBoundaryOfCell
		#define GEODE_STATICS_checkBoundaryOfCell
		GEODE_AS_STATIC_FUNCTION(checkBoundaryOfCell) 
	#endif

	#ifndef GEODE_STATICS_checkBoundaryOfContent
		#define GEODE_STATICS_checkBoundaryOfContent
		GEODE_AS_STATIC_FUNCTION(checkBoundaryOfContent) 
	#endif

	#ifndef GEODE_STATICS_checkFirstCell
		#define GEODE_STATICS_checkFirstCell
		GEODE_AS_STATIC_FUNCTION(checkFirstCell) 
	#endif

	#ifndef GEODE_STATICS_checkLastCell
		#define GEODE_STATICS_checkLastCell
		GEODE_AS_STATIC_FUNCTION(checkLastCell) 
	#endif

	#ifndef GEODE_STATICS_claimTouch
		#define GEODE_STATICS_claimTouch
		GEODE_AS_STATIC_FUNCTION(claimTouch) 
	#endif

	#ifndef GEODE_STATICS_deleteTableViewCell
		#define GEODE_STATICS_deleteTableViewCell
		GEODE_AS_STATIC_FUNCTION(deleteTableViewCell) 
	#endif

	#ifndef GEODE_STATICS_dequeueReusableCellWithIdentifier
		#define GEODE_STATICS_dequeueReusableCellWithIdentifier
		GEODE_AS_STATIC_FUNCTION(dequeueReusableCellWithIdentifier) 
	#endif

	#ifndef GEODE_STATICS_getBeginLocation
		#define GEODE_STATICS_getBeginLocation
		GEODE_AS_STATIC_FUNCTION(getBeginLocation) 
	#endif

	#ifndef GEODE_STATICS_getBeginTouch
		#define GEODE_STATICS_getBeginTouch
		GEODE_AS_STATIC_FUNCTION(getBeginTouch) 
	#endif

	#ifndef GEODE_STATICS_getCellRemovedArray
		#define GEODE_STATICS_getCellRemovedArray
		GEODE_AS_STATIC_FUNCTION(getCellRemovedArray) 
	#endif

	#ifndef GEODE_STATICS_getCellVisibleArray
		#define GEODE_STATICS_getCellVisibleArray
		GEODE_AS_STATIC_FUNCTION(getCellVisibleArray) 
	#endif

	#ifndef GEODE_STATICS_getCheckLocation
		#define GEODE_STATICS_getCheckLocation
		GEODE_AS_STATIC_FUNCTION(getCheckLocation) 
	#endif

	#ifndef GEODE_STATICS_getClipsToBounds
		#define GEODE_STATICS_getClipsToBounds
		GEODE_AS_STATIC_FUNCTION(getClipsToBounds) 
	#endif

	#ifndef GEODE_STATICS_getDataSource
		#define GEODE_STATICS_getDataSource
		GEODE_AS_STATIC_FUNCTION(getDataSource) 
	#endif

	#ifndef GEODE_STATICS_getDelegate
		#define GEODE_STATICS_getDelegate
		GEODE_AS_STATIC_FUNCTION(getDelegate) 
	#endif

	#ifndef GEODE_STATICS_getEditable
		#define GEODE_STATICS_getEditable
		GEODE_AS_STATIC_FUNCTION(getEditable) 
	#endif

	#ifndef GEODE_STATICS_getindexPathAddedArray
		#define GEODE_STATICS_getindexPathAddedArray
		GEODE_AS_STATIC_FUNCTION(getindexPathAddedArray) 
	#endif

	#ifndef GEODE_STATICS_getIsScheduled
		#define GEODE_STATICS_getIsScheduled
		GEODE_AS_STATIC_FUNCTION(getIsScheduled) 
	#endif

	#ifndef GEODE_STATICS_getIsTouch
		#define GEODE_STATICS_getIsTouch
		GEODE_AS_STATIC_FUNCTION(getIsTouch) 
	#endif

	#ifndef GEODE_STATICS_getLastCellPos
		#define GEODE_STATICS_getLastCellPos
		GEODE_AS_STATIC_FUNCTION(getLastCellPos) 
	#endif

	#ifndef GEODE_STATICS_getScrollingToIndexPath
		#define GEODE_STATICS_getScrollingToIndexPath
		GEODE_AS_STATIC_FUNCTION(getScrollingToIndexPath) 
	#endif

	#ifndef GEODE_STATICS_getStealTouches
		#define GEODE_STATICS_getStealTouches
		GEODE_AS_STATIC_FUNCTION(getStealTouches) 
	#endif

	#ifndef GEODE_STATICS_getTouchCell
		#define GEODE_STATICS_getTouchCell
		GEODE_AS_STATIC_FUNCTION(getTouchCell) 
	#endif

	#ifndef GEODE_STATICS_getTouchDispatch
		#define GEODE_STATICS_getTouchDispatch
		GEODE_AS_STATIC_FUNCTION(getTouchDispatch) 
	#endif

	#ifndef GEODE_STATICS_initTableViewCells
		#define GEODE_STATICS_initTableViewCells
		GEODE_AS_STATIC_FUNCTION(initTableViewCells) 
	#endif

	#ifndef GEODE_STATICS_isDuplicateIndexPath
		#define GEODE_STATICS_isDuplicateIndexPath
		GEODE_AS_STATIC_FUNCTION(isDuplicateIndexPath) 
	#endif

	#ifndef GEODE_STATICS_isDuplicateInVisibleCellArray
		#define GEODE_STATICS_isDuplicateInVisibleCellArray
		GEODE_AS_STATIC_FUNCTION(isDuplicateInVisibleCellArray) 
	#endif

	#ifndef GEODE_STATICS_reloadData
		#define GEODE_STATICS_reloadData
		GEODE_AS_STATIC_FUNCTION(reloadData) 
	#endif

	#ifndef GEODE_STATICS_removeIndexPathFromPathAddedArray
		#define GEODE_STATICS_removeIndexPathFromPathAddedArray
		GEODE_AS_STATIC_FUNCTION(removeIndexPathFromPathAddedArray) 
	#endif

	#ifndef GEODE_STATICS_scrollToIndexPath
		#define GEODE_STATICS_scrollToIndexPath
		GEODE_AS_STATIC_FUNCTION(scrollToIndexPath) 
	#endif

	#ifndef GEODE_STATICS_setBeginLocation
		#define GEODE_STATICS_setBeginLocation
		GEODE_AS_STATIC_FUNCTION(setBeginLocation) 
	#endif

	#ifndef GEODE_STATICS_setBeginTouch
		#define GEODE_STATICS_setBeginTouch
		GEODE_AS_STATIC_FUNCTION(setBeginTouch) 
	#endif

	#ifndef GEODE_STATICS_setCellRemovedArray
		#define GEODE_STATICS_setCellRemovedArray
		GEODE_AS_STATIC_FUNCTION(setCellRemovedArray) 
	#endif

	#ifndef GEODE_STATICS_setCellVisibleArray
		#define GEODE_STATICS_setCellVisibleArray
		GEODE_AS_STATIC_FUNCTION(setCellVisibleArray) 
	#endif

	#ifndef GEODE_STATICS_setCheckLocation
		#define GEODE_STATICS_setCheckLocation
		GEODE_AS_STATIC_FUNCTION(setCheckLocation) 
	#endif

	#ifndef GEODE_STATICS_setClipsToBounds
		#define GEODE_STATICS_setClipsToBounds
		GEODE_AS_STATIC_FUNCTION(setClipsToBounds) 
	#endif

	#ifndef GEODE_STATICS_setDataSource
		#define GEODE_STATICS_setDataSource
		GEODE_AS_STATIC_FUNCTION(setDataSource) 
	#endif

	#ifndef GEODE_STATICS_setDelegate
		#define GEODE_STATICS_setDelegate
		GEODE_AS_STATIC_FUNCTION(setDelegate) 
	#endif

	#ifndef GEODE_STATICS_setEditable
		#define GEODE_STATICS_setEditable
		GEODE_AS_STATIC_FUNCTION(setEditable) 
	#endif

	#ifndef GEODE_STATICS_setindexPathAddedArray
		#define GEODE_STATICS_setindexPathAddedArray
		GEODE_AS_STATIC_FUNCTION(setindexPathAddedArray) 
	#endif

	#ifndef GEODE_STATICS_setIsScheduled
		#define GEODE_STATICS_setIsScheduled
		GEODE_AS_STATIC_FUNCTION(setIsScheduled) 
	#endif

	#ifndef GEODE_STATICS_setIsTouch
		#define GEODE_STATICS_setIsTouch
		GEODE_AS_STATIC_FUNCTION(setIsTouch) 
	#endif

	#ifndef GEODE_STATICS_setLastCellPos
		#define GEODE_STATICS_setLastCellPos
		GEODE_AS_STATIC_FUNCTION(setLastCellPos) 
	#endif

	#ifndef GEODE_STATICS_setScrollingToIndexPath
		#define GEODE_STATICS_setScrollingToIndexPath
		GEODE_AS_STATIC_FUNCTION(setScrollingToIndexPath) 
	#endif

	#ifndef GEODE_STATICS_setStealTouches
		#define GEODE_STATICS_setStealTouches
		GEODE_AS_STATIC_FUNCTION(setStealTouches) 
	#endif

	#ifndef GEODE_STATICS_setTouchCell
		#define GEODE_STATICS_setTouchCell
		GEODE_AS_STATIC_FUNCTION(setTouchCell) 
	#endif

	#ifndef GEODE_STATICS_setTouchDispatch
		#define GEODE_STATICS_setTouchDispatch
		GEODE_AS_STATIC_FUNCTION(setTouchDispatch) 
	#endif

	#ifndef GEODE_STATICS_touchFinish
		#define GEODE_STATICS_touchFinish
		GEODE_AS_STATIC_FUNCTION(touchFinish) 
	#endif

	#ifndef GEODE_STATICS_onEnter
		#define GEODE_STATICS_onEnter
		GEODE_AS_STATIC_FUNCTION(onEnter) 
	#endif

	#ifndef GEODE_STATICS_onExit
		#define GEODE_STATICS_onExit
		GEODE_AS_STATIC_FUNCTION(onExit) 
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

	#ifndef GEODE_STATICS_scrollWheel
		#define GEODE_STATICS_scrollWheel
		GEODE_AS_STATIC_FUNCTION(scrollWheel) 
	#endif

	#ifndef GEODE_STATICS_scrllViewWillBeginDecelerating
		#define GEODE_STATICS_scrllViewWillBeginDecelerating
		GEODE_AS_STATIC_FUNCTION(scrllViewWillBeginDecelerating) 
	#endif

	#ifndef GEODE_STATICS_scrollViewDidEndDecelerating
		#define GEODE_STATICS_scrollViewDidEndDecelerating
		GEODE_AS_STATIC_FUNCTION(scrollViewDidEndDecelerating) 
	#endif

	#ifndef GEODE_STATICS_scrollViewTouchMoving
		#define GEODE_STATICS_scrollViewTouchMoving
		GEODE_AS_STATIC_FUNCTION(scrollViewTouchMoving) 
	#endif

	#ifndef GEODE_STATICS_scrollViewDidEndMoving
		#define GEODE_STATICS_scrollViewDidEndMoving
		GEODE_AS_STATIC_FUNCTION(scrollViewDidEndMoving) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_cancelAndStoleTouch
		#define GEODE_CONCEPT_CHECK_cancelAndStoleTouch
		GEODE_CONCEPT_FUNCTION_CHECK(cancelAndStoleTouch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_cellForRowAtIndexPath
		#define GEODE_CONCEPT_CHECK_cellForRowAtIndexPath
		GEODE_CONCEPT_FUNCTION_CHECK(cellForRowAtIndexPath) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_cellForTouch
		#define GEODE_CONCEPT_CHECK_cellForTouch
		GEODE_CONCEPT_FUNCTION_CHECK(cellForTouch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkBoundaryOfCell
		#define GEODE_CONCEPT_CHECK_checkBoundaryOfCell
		GEODE_CONCEPT_FUNCTION_CHECK(checkBoundaryOfCell) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkBoundaryOfContent
		#define GEODE_CONCEPT_CHECK_checkBoundaryOfContent
		GEODE_CONCEPT_FUNCTION_CHECK(checkBoundaryOfContent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkFirstCell
		#define GEODE_CONCEPT_CHECK_checkFirstCell
		GEODE_CONCEPT_FUNCTION_CHECK(checkFirstCell) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkLastCell
		#define GEODE_CONCEPT_CHECK_checkLastCell
		GEODE_CONCEPT_FUNCTION_CHECK(checkLastCell) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_claimTouch
		#define GEODE_CONCEPT_CHECK_claimTouch
		GEODE_CONCEPT_FUNCTION_CHECK(claimTouch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteTableViewCell
		#define GEODE_CONCEPT_CHECK_deleteTableViewCell
		GEODE_CONCEPT_FUNCTION_CHECK(deleteTableViewCell) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dequeueReusableCellWithIdentifier
		#define GEODE_CONCEPT_CHECK_dequeueReusableCellWithIdentifier
		GEODE_CONCEPT_FUNCTION_CHECK(dequeueReusableCellWithIdentifier) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBeginLocation
		#define GEODE_CONCEPT_CHECK_getBeginLocation
		GEODE_CONCEPT_FUNCTION_CHECK(getBeginLocation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBeginTouch
		#define GEODE_CONCEPT_CHECK_getBeginTouch
		GEODE_CONCEPT_FUNCTION_CHECK(getBeginTouch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCellRemovedArray
		#define GEODE_CONCEPT_CHECK_getCellRemovedArray
		GEODE_CONCEPT_FUNCTION_CHECK(getCellRemovedArray) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCellVisibleArray
		#define GEODE_CONCEPT_CHECK_getCellVisibleArray
		GEODE_CONCEPT_FUNCTION_CHECK(getCellVisibleArray) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCheckLocation
		#define GEODE_CONCEPT_CHECK_getCheckLocation
		GEODE_CONCEPT_FUNCTION_CHECK(getCheckLocation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getClipsToBounds
		#define GEODE_CONCEPT_CHECK_getClipsToBounds
		GEODE_CONCEPT_FUNCTION_CHECK(getClipsToBounds) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDataSource
		#define GEODE_CONCEPT_CHECK_getDataSource
		GEODE_CONCEPT_FUNCTION_CHECK(getDataSource) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDelegate
		#define GEODE_CONCEPT_CHECK_getDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(getDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEditable
		#define GEODE_CONCEPT_CHECK_getEditable
		GEODE_CONCEPT_FUNCTION_CHECK(getEditable) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getindexPathAddedArray
		#define GEODE_CONCEPT_CHECK_getindexPathAddedArray
		GEODE_CONCEPT_FUNCTION_CHECK(getindexPathAddedArray) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIsScheduled
		#define GEODE_CONCEPT_CHECK_getIsScheduled
		GEODE_CONCEPT_FUNCTION_CHECK(getIsScheduled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIsTouch
		#define GEODE_CONCEPT_CHECK_getIsTouch
		GEODE_CONCEPT_FUNCTION_CHECK(getIsTouch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLastCellPos
		#define GEODE_CONCEPT_CHECK_getLastCellPos
		GEODE_CONCEPT_FUNCTION_CHECK(getLastCellPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getScrollingToIndexPath
		#define GEODE_CONCEPT_CHECK_getScrollingToIndexPath
		GEODE_CONCEPT_FUNCTION_CHECK(getScrollingToIndexPath) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStealTouches
		#define GEODE_CONCEPT_CHECK_getStealTouches
		GEODE_CONCEPT_FUNCTION_CHECK(getStealTouches) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTouchCell
		#define GEODE_CONCEPT_CHECK_getTouchCell
		GEODE_CONCEPT_FUNCTION_CHECK(getTouchCell) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTouchDispatch
		#define GEODE_CONCEPT_CHECK_getTouchDispatch
		GEODE_CONCEPT_FUNCTION_CHECK(getTouchDispatch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initTableViewCells
		#define GEODE_CONCEPT_CHECK_initTableViewCells
		GEODE_CONCEPT_FUNCTION_CHECK(initTableViewCells) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isDuplicateIndexPath
		#define GEODE_CONCEPT_CHECK_isDuplicateIndexPath
		GEODE_CONCEPT_FUNCTION_CHECK(isDuplicateIndexPath) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isDuplicateInVisibleCellArray
		#define GEODE_CONCEPT_CHECK_isDuplicateInVisibleCellArray
		GEODE_CONCEPT_FUNCTION_CHECK(isDuplicateInVisibleCellArray) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reloadData
		#define GEODE_CONCEPT_CHECK_reloadData
		GEODE_CONCEPT_FUNCTION_CHECK(reloadData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeIndexPathFromPathAddedArray
		#define GEODE_CONCEPT_CHECK_removeIndexPathFromPathAddedArray
		GEODE_CONCEPT_FUNCTION_CHECK(removeIndexPathFromPathAddedArray) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scrollToIndexPath
		#define GEODE_CONCEPT_CHECK_scrollToIndexPath
		GEODE_CONCEPT_FUNCTION_CHECK(scrollToIndexPath) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setBeginLocation
		#define GEODE_CONCEPT_CHECK_setBeginLocation
		GEODE_CONCEPT_FUNCTION_CHECK(setBeginLocation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setBeginTouch
		#define GEODE_CONCEPT_CHECK_setBeginTouch
		GEODE_CONCEPT_FUNCTION_CHECK(setBeginTouch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCellRemovedArray
		#define GEODE_CONCEPT_CHECK_setCellRemovedArray
		GEODE_CONCEPT_FUNCTION_CHECK(setCellRemovedArray) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCellVisibleArray
		#define GEODE_CONCEPT_CHECK_setCellVisibleArray
		GEODE_CONCEPT_FUNCTION_CHECK(setCellVisibleArray) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCheckLocation
		#define GEODE_CONCEPT_CHECK_setCheckLocation
		GEODE_CONCEPT_FUNCTION_CHECK(setCheckLocation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setClipsToBounds
		#define GEODE_CONCEPT_CHECK_setClipsToBounds
		GEODE_CONCEPT_FUNCTION_CHECK(setClipsToBounds) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDataSource
		#define GEODE_CONCEPT_CHECK_setDataSource
		GEODE_CONCEPT_FUNCTION_CHECK(setDataSource) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDelegate
		#define GEODE_CONCEPT_CHECK_setDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(setDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setEditable
		#define GEODE_CONCEPT_CHECK_setEditable
		GEODE_CONCEPT_FUNCTION_CHECK(setEditable) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setindexPathAddedArray
		#define GEODE_CONCEPT_CHECK_setindexPathAddedArray
		GEODE_CONCEPT_FUNCTION_CHECK(setindexPathAddedArray) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIsScheduled
		#define GEODE_CONCEPT_CHECK_setIsScheduled
		GEODE_CONCEPT_FUNCTION_CHECK(setIsScheduled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIsTouch
		#define GEODE_CONCEPT_CHECK_setIsTouch
		GEODE_CONCEPT_FUNCTION_CHECK(setIsTouch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLastCellPos
		#define GEODE_CONCEPT_CHECK_setLastCellPos
		GEODE_CONCEPT_FUNCTION_CHECK(setLastCellPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setScrollingToIndexPath
		#define GEODE_CONCEPT_CHECK_setScrollingToIndexPath
		GEODE_CONCEPT_FUNCTION_CHECK(setScrollingToIndexPath) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStealTouches
		#define GEODE_CONCEPT_CHECK_setStealTouches
		GEODE_CONCEPT_FUNCTION_CHECK(setStealTouches) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTouchCell
		#define GEODE_CONCEPT_CHECK_setTouchCell
		GEODE_CONCEPT_FUNCTION_CHECK(setTouchCell) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTouchDispatch
		#define GEODE_CONCEPT_CHECK_setTouchDispatch
		GEODE_CONCEPT_FUNCTION_CHECK(setTouchDispatch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_touchFinish
		#define GEODE_CONCEPT_CHECK_touchFinish
		GEODE_CONCEPT_FUNCTION_CHECK(touchFinish) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEnter
		#define GEODE_CONCEPT_CHECK_onEnter
		GEODE_CONCEPT_FUNCTION_CHECK(onEnter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onExit
		#define GEODE_CONCEPT_CHECK_onExit
		GEODE_CONCEPT_FUNCTION_CHECK(onExit) 
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

	#ifndef GEODE_CONCEPT_CHECK_scrollWheel
		#define GEODE_CONCEPT_CHECK_scrollWheel
		GEODE_CONCEPT_FUNCTION_CHECK(scrollWheel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scrllViewWillBeginDecelerating
		#define GEODE_CONCEPT_CHECK_scrllViewWillBeginDecelerating
		GEODE_CONCEPT_FUNCTION_CHECK(scrllViewWillBeginDecelerating) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scrollViewDidEndDecelerating
		#define GEODE_CONCEPT_CHECK_scrollViewDidEndDecelerating
		GEODE_CONCEPT_FUNCTION_CHECK(scrollViewDidEndDecelerating) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scrollViewTouchMoving
		#define GEODE_CONCEPT_CHECK_scrollViewTouchMoving
		GEODE_CONCEPT_FUNCTION_CHECK(scrollViewTouchMoving) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scrollViewDidEndMoving
		#define GEODE_CONCEPT_CHECK_scrollViewDidEndMoving
		GEODE_CONCEPT_FUNCTION_CHECK(scrollViewDidEndMoving) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, TableView> : ModifyBase<ModifyDerive<Der, TableView>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, TableView>>;
		using ModifyBase<ModifyDerive<Der, TableView>>::ModifyBase;
		using Base = TableView;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, create, TableViewDelegate*, TableViewDataSource*, cocos2d::CCRect)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, cancelAndStoleTouch, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, cellForRowAtIndexPath, CCIndexPath&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, cellForTouch, cocos2d::CCTouch*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, checkBoundaryOfCell, cocos2d::CCPoint&, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, checkBoundaryOfCell, TableViewCell*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, checkBoundaryOfContent, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, checkFirstCell, TableViewCell*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, checkLastCell, TableViewCell*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, claimTouch, cocos2d::CCTouch*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, deleteTableViewCell, TableViewCell*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, dequeueReusableCellWithIdentifier, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, getBeginLocation, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, getBeginTouch, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, getCellRemovedArray, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, getCellVisibleArray, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, getCheckLocation, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, getClipsToBounds, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, getDataSource, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, getDelegate, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, getEditable, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, getindexPathAddedArray, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, getIsScheduled, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, getIsTouch, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, getLastCellPos, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, getScrollingToIndexPath, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, getStealTouches, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, getTouchCell, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, getTouchDispatch, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, initTableViewCells, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, isDuplicateIndexPath, CCIndexPath&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, isDuplicateInVisibleCellArray, CCIndexPath*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, reloadData, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, removeIndexPathFromPathAddedArray, CCIndexPath&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, scrollToIndexPath, CCIndexPath&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, setBeginLocation, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, setBeginTouch, cocos2d::CCTouch*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, setCellRemovedArray, cocos2d::CCArray*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, setCellVisibleArray, cocos2d::CCArray*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, setCheckLocation, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, setClipsToBounds, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, setDataSource, TableViewDataSource*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, setDelegate, TableViewDelegate*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, setEditable, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, setindexPathAddedArray, cocos2d::CCArray*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, setIsScheduled, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, setIsTouch, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, setLastCellPos, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, setScrollingToIndexPath, CCIndexPath*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, setStealTouches, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, setTouchCell, TableViewCell*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, setTouchDispatch, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, touchFinish, cocos2d::CCTouch*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, onEnter, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, onExit, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, registerWithTouchDispatcher, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, scrollWheel, float, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, scrllViewWillBeginDecelerating, CCScrollLayerExt*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, scrollViewDidEndDecelerating, CCScrollLayerExt*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, scrollViewTouchMoving, CCScrollLayerExt*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableView, scrollViewDidEndMoving, CCScrollLayerExt*)
		}
	};
}
