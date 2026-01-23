#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class LevelUpdateDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelUpdateDelegate";

    /**
     * @note[short] Android
     */
    virtual TodoReturn levelUpdateFinished(GJGameLevel* p0, UpdateResponse p1);

    /**
     * @note[short] Android
     */
    virtual TodoReturn levelUpdateFailed(int p0);
};
