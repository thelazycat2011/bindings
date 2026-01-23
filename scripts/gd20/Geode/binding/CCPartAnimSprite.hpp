#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCPartAnimSprite {
public:
    static constexpr auto CLASS_NAME = "CCPartAnimSprite";

    /**
     * @note[short] Android
     */
    TodoReturn changeTextureOfID(char const* p0, char const* p1);

    /**
     * @note[short] Android
     */
    TodoReturn countParts();

    /**
     * @note[short] Android
     */
    TodoReturn createWithAnimDesc(char const* p0, cocos2d::CCTexture2D* p1);

    /**
     * @note[short] Android
     */
    TodoReturn dirtify();

    /**
     * @note[short] Android
     */
    TodoReturn getSpriteContainer();

    /**
     * @note[short] Android
     */
    TodoReturn getSpriteForKey(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn initWithAnimDesc(char const* p0, cocos2d::CCTexture2D* p1);

    /**
     * @note[short] Android
     */
    void setColor(cocos2d::ccColor3B p0);

    /**
     * @note[short] Android
     */
    void setFlipX(bool p0);

    /**
     * @note[short] Android
     */
    void setFlipY(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn transformSprite(frameValues p0);

    /**
     * @note[short] Android
     */
    TodoReturn tweenSpriteTo(frameValues p0, float p1);

    /**
     * @note[short] Android
     */
    TodoReturn tweenToFrame(cocos2d::CCSpriteFrame* p0, float p1);

    /**
     * @note[short] Android
     */
    virtual void setScaleX(float p0);

    /**
     * @note[short] Android
     */
    virtual void setScaleY(float p0);

    /**
     * @note[short] Android
     */
    virtual void setScale(float p0);

    /**
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);

    /**
     * @note[short] Android
     */
    virtual void setBlendFunc(cocos2d::_ccBlendFunc p0);

    /**
     * @note[short] Android
     */
    virtual void setDisplayFrame(cocos2d::CCSpriteFrame* p0);

    /**
     * @note[short] Android
     */
    virtual bool isFrameDisplayed(cocos2d::CCSpriteFrame* p0);

    /**
     * @note[short] Android
     */
    virtual cocos2d::CCSpriteFrame* displayFrame();
};
