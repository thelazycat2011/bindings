#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class BitmapFontCache {
public:
    static constexpr auto CLASS_NAME = "BitmapFontCache";

    /**
     * @note[short] Android
     */
    static BitmapFontCache* sharedFontCache();

    /**
     * @note[short] Android
     */
    TodoReturn fontWithConfigFile(char const* p0, float p1);

    /**
     * @note[short] Android
     */
    bool init();

    /**
     * @note[short] Android
     */
    TodoReturn purgeSharedFontCache();
};
