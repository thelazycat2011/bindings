#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class BoomListView : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "BoomListView";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(BoomListView, cocos2d::CCLayer)

    /**
     * @note[short] Android
     */
    static BoomListView* create(cocos2d::CCArray* p0, float p1, float p2, int p3, BoomListType p4);

    /**
     * @note[short] Android
     */
    bool init(cocos2d::CCArray* p0, float p1, float p2, int p3, BoomListType p4);

    /**
     * @note[short] Android
     */
    virtual void setupList();

    /**
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] Android
     */
    virtual TodoReturn TableViewWillDisplayCellForRowAtIndexPath(CCIndexPath& p0, TableViewCell* p1, TableView* p2);

    /**
     * @note[short] Android
     */
    virtual TodoReturn cellHeightForRowAtIndexPath(CCIndexPath& p0, TableView* p1);

    /**
     * @note[short] Android
     */
    virtual TodoReturn didSelectRowAtIndexPath(CCIndexPath& p0, TableView* p1);

    /**
     * @note[short] Android
     */
    virtual TodoReturn numberOfRowsInSection(unsigned int p0, TableView* p1);

    /**
     * @note[short] Android
     */
    virtual TodoReturn numberOfSectionsInTableView(TableView* p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn cellForRowAtIndexPath(CCIndexPath& p0, TableView* p1);

    /**
     * @note[short] Android
     */
    virtual TodoReturn TableViewCommitCellEditingStyleForRowAtIndexPath(TableView* p0, TableViewCellEditingStyle p1, CCIndexPath& p2);

    /**
     * @note[short] Android
     */
    virtual TodoReturn TableViewWillReloadCellForRowAtIndexPath(CCIndexPath& p0, TableViewCell* p1, TableView* p2);

    /**
     * @note[short] Android
     */
    virtual TableViewCell* getListCell(char const* p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn loadCell(TableViewCell* p0, int p1);
    TableView* m_tableView;
    cocos2d::CCArray* m_cells;
    BoomListType m_type;
    float m_height;
    float m_width;
    float _0x134;
    int _0x138;
};
