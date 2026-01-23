#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class LevelUploadDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelUploadDelegate";

    /**
     * @note[short] Android
     */
    virtual TodoReturn levelUploadFinished(GJGameLevel* p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn levelUploadFailed(GJGameLevel* p0);
};
