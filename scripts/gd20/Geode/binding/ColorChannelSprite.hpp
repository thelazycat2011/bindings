#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ColorChannelSprite {
public:
    static constexpr auto CLASS_NAME = "ColorChannelSprite";

    /**
     * @note[short] Android
     */
    static ColorChannelSprite* create();

    /**
     * @note[short] Android
     */
    TodoReturn updateBlending(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateCopyLabel(int p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn updateOpacity(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateValues(ColorAction* p0);

    /**
     * @note[short] Android
     */
    virtual bool init();
};
