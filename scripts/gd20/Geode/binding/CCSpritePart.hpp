#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCSpritePart {
public:
    static constexpr auto CLASS_NAME = "CCSpritePart";

    /**
     * @note[short] Android
     */
    static CCSpritePart* create(cocos2d::CCTexture2D* p0);

    /**
     * @note[short] Android
     */
    TodoReturn createWithSpriteFrameName(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getActiveFrame();

    /**
     * @note[short] Android
     */
    TodoReturn getBeingUsed();

    /**
     * @note[short] Android
     */
    TodoReturn hideInactive();

    /**
     * @note[short] Android
     */
    TodoReturn resetTextureRect();

    /**
     * @note[short] Android: Rebinded
     */
    void setActiveFrame(gd::string p0);

    /**
     * @note[short] Android
     */
    void setBeingUsed(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateDisplayFrame(char const* p0);
};
