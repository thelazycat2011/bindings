#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCAnimatedSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "CCAnimatedSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCAnimatedSprite, cocos2d::CCSprite)

    /**
     * @note[short] Android
     */
    TodoReturn cleanupSprite();

    /**
     * @note[short] Android
     */
    TodoReturn createWithType(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getActiveSpriteMode();

    /**
     * @note[short] Android
     */
    TodoReturn getActiveTween();

    /**
     * @note[short] Android
     */
    TodoReturn getAnimatedSprite();

    /**
     * @note[short] Android
     */
    TodoReturn getAnimManager();

    /**
     * @note[short] Android
     */
    TodoReturn getDefaultAnimation();

    /**
     * @note[short] Android
     */
    TodoReturn getDelegate();

    /**
     * @note[short] Android
     */
    TodoReturn getNormalSprite();

    /**
     * @note[short] Android
     */
    TodoReturn getSprite();

    /**
     * @note[short] Android
     */
    TodoReturn initWithType(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn loadType(char const* p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn runAnimation(gd::string p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn runAnimationForced(gd::string p0);

    /**
     * @note[short] Android
     */
    void setAnimatedSprite(CCPartAnimSprite* p0);

    /**
     * @note[short] Android
     */
    void setColor(cocos2d::ccColor3B p0);

    /**
     * @note[short] Android: Rebinded
     */
    void setDefaultAnimation(gd::string p0);

    /**
     * @note[short] Android
     */
    void setDelegate(AnimatedSpriteDelegate* p0);

    /**
     * @note[short] Android
     */
    void setNormalSprite(cocos2d::CCSprite* p0);

    /**
     * @note[short] Android
     */
    void setSprite(cocos2d::CCSprite* p0);

    /**
     * @note[short] Android
     */
    TodoReturn switchToMode(spriteMode p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn tweenToAnimation(gd::string p0, float p1);

    /**
     * @note[short] Android
     */
    TodoReturn tweenToAnimationFinished();

    /**
     * @note[short] Android
     */
    TodoReturn willPlayAnimation();

    /**
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn animationFinished(char const* p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn animationFinishedO(cocos2d::CCObject* p0);
    gd::string m_type;
    gd::string m_activeTween;
    SpriteAnimationManager* m_spriteAnimationManager;
    cocos2d::CCSprite* m_sprite;
    cocos2d::CCSprite* m_normalSprite;
    CCPartAnimSprite* m_animatedSprite;
    spriteMode m_activeSpriteMode;
    gd::string m_defaultAnimation;
    AnimatedSpriteDelegate* m_delegate;
};
