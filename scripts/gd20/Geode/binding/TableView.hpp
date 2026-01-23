#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class TableView {
public:
    static constexpr auto CLASS_NAME = "TableView";

    /**
     * @note[short] Android: Rebinded
     */
     TableView(cocos2d::CCRect p0);

    /**
     * @note[short] Android
     */
    static TableView* create(TableViewDelegate* p0, TableViewDataSource* p1, cocos2d::CCRect p2);

    /**
     * @note[short] Android
     */
    TodoReturn cancelAndStoleTouch(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Android
     */
    TodoReturn cellForRowAtIndexPath(CCIndexPath& p0);

    /**
     * @note[short] Android
     */
    TodoReturn cellForTouch(cocos2d::CCTouch* p0);

    /**
     * @note[short] Android
     */
    TodoReturn checkBoundaryOfCell(cocos2d::CCPoint& p0, float p1);

    /**
     * @note[short] Android
     */
    TodoReturn checkBoundaryOfCell(TableViewCell* p0);

    /**
     * @note[short] Android
     */
    TodoReturn checkBoundaryOfContent(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn checkFirstCell(TableViewCell* p0);

    /**
     * @note[short] Android
     */
    TodoReturn checkLastCell(TableViewCell* p0);

    /**
     * @note[short] Android
     */
    TodoReturn claimTouch(cocos2d::CCTouch* p0);

    /**
     * @note[short] Android
     */
    TodoReturn deleteTableViewCell(TableViewCell* p0);

    /**
     * @note[short] Android
     */
    TodoReturn dequeueReusableCellWithIdentifier(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getBeginLocation();

    /**
     * @note[short] Android
     */
    TodoReturn getBeginTouch();

    /**
     * @note[short] Android
     */
    TodoReturn getCellRemovedArray();

    /**
     * @note[short] Android
     */
    TodoReturn getCellVisibleArray();

    /**
     * @note[short] Android
     */
    TodoReturn getCheckLocation();

    /**
     * @note[short] Android
     */
    TodoReturn getClipsToBounds();

    /**
     * @note[short] Android
     */
    TodoReturn getDataSource();

    /**
     * @note[short] Android
     */
    TodoReturn getDelegate();

    /**
     * @note[short] Android
     */
    TodoReturn getEditable();

    /**
     * @note[short] Android
     */
    TodoReturn getindexPathAddedArray();

    /**
     * @note[short] Android
     */
    TodoReturn getIsScheduled();

    /**
     * @note[short] Android
     */
    TodoReturn getIsTouch();

    /**
     * @note[short] Android
     */
    TodoReturn getLastCellPos();

    /**
     * @note[short] Android
     */
    TodoReturn getScrollingToIndexPath();

    /**
     * @note[short] Android
     */
    TodoReturn getStealTouches();

    /**
     * @note[short] Android
     */
    TodoReturn getTouchCell();

    /**
     * @note[short] Android
     */
    TodoReturn getTouchDispatch();

    /**
     * @note[short] Android
     */
    TodoReturn initTableViewCells();

    /**
     * @note[short] Android
     */
    bool isDuplicateIndexPath(CCIndexPath& p0);

    /**
     * @note[short] Android
     */
    bool isDuplicateInVisibleCellArray(CCIndexPath* p0);

    /**
     * @note[short] Android
     */
    TodoReturn reloadData();

    /**
     * @note[short] Android
     */
    TodoReturn removeIndexPathFromPathAddedArray(CCIndexPath& p0);

    /**
     * @note[short] Android
     */
    TodoReturn scrollToIndexPath(CCIndexPath& p0);

    /**
     * @note[short] Android
     */
    void setBeginLocation(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    void setBeginTouch(cocos2d::CCTouch* p0);

    /**
     * @note[short] Android
     */
    void setCellRemovedArray(cocos2d::CCArray* p0);

    /**
     * @note[short] Android
     */
    void setCellVisibleArray(cocos2d::CCArray* p0);

    /**
     * @note[short] Android
     */
    void setCheckLocation(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    void setClipsToBounds(bool p0);

    /**
     * @note[short] Android
     */
    void setDataSource(TableViewDataSource* p0);

    /**
     * @note[short] Android
     */
    void setDelegate(TableViewDelegate* p0);

    /**
     * @note[short] Android
     */
    void setEditable(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn setindexPathAddedArray(cocos2d::CCArray* p0);

    /**
     * @note[short] Android
     */
    void setIsScheduled(bool p0);

    /**
     * @note[short] Android
     */
    void setIsTouch(bool p0);

    /**
     * @note[short] Android
     */
    void setLastCellPos(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    void setScrollingToIndexPath(CCIndexPath* p0);

    /**
     * @note[short] Android
     */
    void setStealTouches(bool p0);

    /**
     * @note[short] Android
     */
    void setTouchCell(TableViewCell* p0);

    /**
     * @note[short] Android
     */
    void setTouchDispatch(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn touchFinish(cocos2d::CCTouch* p0);

    /**
     * @note[short] Android
     */
    virtual void onEnter();

    /**
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] Android
     */
    virtual void scrollWheel(float p0, float p1);

    /**
     * @note[short] Android
     */
    virtual TodoReturn scrllViewWillBeginDecelerating(CCScrollLayerExt* p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn scrollViewDidEndDecelerating(CCScrollLayerExt* p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn scrollViewTouchMoving(CCScrollLayerExt* p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn scrollViewDidEndMoving(CCScrollLayerExt* p0);
};
