#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CustomListView {
public:
    static constexpr auto CLASS_NAME = "CustomListView";

    /**
     * @note[short] Android
     */
    static CustomListView* create(cocos2d::CCArray* p0, float p1, float p2, int p3, BoomListType p4);

    /**
     * @note[short] Android
     */
    TodoReturn reloadAll();

    /**
     * @note[short] Android
     */
    virtual void setupList();

    /**
     * @note[short] Android
     */
    virtual TableViewCell* getListCell(char const* p0);

    /**
     * @note[short] Android
     */
    virtual void loadCell(TableViewCell* p0, int p1);
};
