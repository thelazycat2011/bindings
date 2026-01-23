#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ButtonSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "ButtonSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ButtonSprite, cocos2d::CCSprite)

    /**
     * @note[short] Android
     */
    static ButtonSprite* create(char const* p0, float p1);

    /**
     * @note[short] Android
     */
    static ButtonSprite* create(char const* p0, int p1, int p2, float p3, bool p4, char const* p5, char const* p6, float p7);

    /**
     * @note[short] Android
     */
    static ButtonSprite* create(char const* p0, int p1, int p2, float p3, bool p4, char const* p5, char const* p6);

    /**
     * @note[short] Android
     */
    static ButtonSprite* create(char const* p0, int p1, int p2, float p3, bool p4);

    /**
     * @note[short] Android
     */
    static ButtonSprite* create(char const* p0);

    /**
     * @note[short] Android
     */
    static ButtonSprite* create(cocos2d::CCSprite* p0, int p1, int p2, float p3, float p4, bool p5, char const* p6, bool p7);

    /**
     * @note[short] Android
     */
    static ButtonSprite* create(cocos2d::CCSprite* p0, int p1, int p2, float p3, float p4, bool p5);

    /**
     * @note[short] Android
     */
    static ButtonSprite* create(cocos2d::CCSprite* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getBGImage();

    /**
     * @note[short] Android
     */
    TodoReturn getBGSprite();

    /**
     * @note[short] Android
     */
    TodoReturn getBtnLabel();

    /**
     * @note[short] Android
     */
    TodoReturn getBtnSprite();

    /**
     * @note[short] Android
     */
    bool init(char const* p0, int p1, int p2, float p3, bool p4, char const* p5, char const* p6, float p7);

    /**
     * @note[short] Android
     */
    bool init(cocos2d::CCSprite* p0, int p1, int p2, float p3, float p4, bool p5, char const* p6, bool p7);

    /**
     * @note[short] Android
     */
    void setColor(cocos2d::ccColor3B p0);

    /**
     * @note[short] Android
     */
    void setString(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateBGImage(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateSpriteBGSize();

    /**
     * @note[short] Android
     */
    TodoReturn updateSpriteOffset(cocos2d::CCPoint p0);
};
