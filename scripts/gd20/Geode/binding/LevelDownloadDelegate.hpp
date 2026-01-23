#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class LevelDownloadDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelDownloadDelegate";

    /**
     * @note[short] Android
     */
    virtual TodoReturn levelDownloadFinished(GJGameLevel* p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn levelDownloadFailed(int p0);
};
