#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class TableViewDelegate {
public:
    static constexpr auto CLASS_NAME = "TableViewDelegate";

    /**
     * @note[short] Android
     */
    virtual TodoReturn willTweenToIndexPath(CCIndexPath& p0, TableViewCell* p1, TableView* p2);

    /**
     * @note[short] Android
     */
    virtual TodoReturn didEndTweenToIndexPath(CCIndexPath& p0, TableView* p1);

    /**
     * @note[short] Android
     */
    virtual TodoReturn TableViewWillDisplayCellForRowAtIndexPath(CCIndexPath& p0, TableViewCell* p1, TableView* p2);

    /**
     * @note[short] Android
     */
    virtual TodoReturn TableViewDidDisplayCellForRowAtIndexPath(CCIndexPath& p0, TableViewCell* p1, TableView* p2);

    /**
     * @note[short] Android
     */
    virtual TodoReturn TableViewWillReloadCellForRowAtIndexPath(CCIndexPath& p0, TableViewCell* p1, TableView* p2);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual TodoReturn pure_virtual_00a3180c();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual TodoReturn pure_virtual_00a31810();
};
