#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJListLayer {
public:
    static constexpr auto CLASS_NAME = "GJListLayer";

    /**
     * @note[short] Android
     */
    static GJListLayer* create(BoomListView* p0, char const* p1, cocos2d::ccColor4B p2, float p3, float p4);

    /**
     * @note[short] Android
     */
    TodoReturn getListView();

    /**
     * @note[short] Android
     */
    bool init(BoomListView* p0, char const* p1, cocos2d::ccColor4B p2, float p3, float p4);
};
