#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class BoomListLayer {
public:
    static constexpr auto CLASS_NAME = "BoomListLayer";

    /**
     * @note[short] Android
     */
    static BoomListLayer* create(BoomListView* p0, char const* p1);

    /**
     * @note[short] Android
     */
    bool init(BoomListView* p0, char const* p1);
};
