#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class AnimatedGameObject {
public:
    static constexpr auto CLASS_NAME = "AnimatedGameObject";

    /**
     * @note[short] Android
     */
    static AnimatedGameObject* create(int p0);

    /**
     * @note[short] Android
     */
    bool init(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn setupAnimatedSize(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn setupChildSprites();

    /**
     * @note[short] Android
     */
    TodoReturn updateChildSpriteColor(cocos2d::ccColor3B p0);

    /**
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn activateObject();

    /**
     * @note[short] Android
     */
    virtual TodoReturn deactivateObject(bool p0);

    /**
     * @note[short] Android
     */
    virtual void setObjectColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn animationFinished(char const* p0);
};
