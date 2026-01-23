#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJMoreGamesLayer {
public:
    static constexpr auto CLASS_NAME = "GJMoreGamesLayer";

    /**
     * @note[short] Android
     */
    static GJMoreGamesLayer* create();

    /**
     * @note[short] Android
     */
    TodoReturn getMoreGamesList();

    /**
     * @note[short] Android
     */
    virtual TodoReturn customSetup();
};
