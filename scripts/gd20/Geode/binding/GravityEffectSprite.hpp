#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GravityEffectSprite {
public:
    static constexpr auto CLASS_NAME = "GravityEffectSprite";

    /**
     * @note[short] Android
     */
    static GravityEffectSprite* create();

    /**
     * @note[short] Android
     */
    TodoReturn updateSpritesColor(cocos2d::ccColor3B p0);

    /**
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Android
     */
    virtual void draw();
};
