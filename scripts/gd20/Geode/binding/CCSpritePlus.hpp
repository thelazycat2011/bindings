#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCSpritePlus : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "CCSpritePlus";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCSpritePlus, cocos2d::CCSprite)

    /**
     * @note[short] Android
     */
    TodoReturn addFollower(cocos2d::CCNode* p0);

    /**
     * @note[short] Android
     */
    TodoReturn createWithSpriteFrame(cocos2d::CCSpriteFrame* p0);

    /**
     * @note[short] Android
     */
    TodoReturn createWithSpriteFrameName(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn followSprite(CCSpritePlus* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getFollowScale();

    /**
     * @note[short] Android
     */
    TodoReturn removeFollower(cocos2d::CCNode* p0);

    /**
     * @note[short] Android
     */
    void setFollowScale(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn stopFollow();

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
    virtual void setPosition(cocos2d::CCPoint const& p0);

    /**
     * @note[short] Android
     */
    virtual void setRotation(float p0);

    /**
     * @note[short] Android
     */
    virtual bool initWithTexture(cocos2d::CCTexture2D* p0);

    /**
     * @note[short] Android
     */
    virtual bool initWithSpriteFrameName(char const* p0);

    /**
     * @note[short] Android
     */
    virtual void setFlipX(bool p0);

    /**
     * @note[short] Android
     */
    virtual void setFlipY(bool p0);
    cocos2d::CCArray* m_followers;
    CCSpritePlus* m_target;
    bool m_hasFollowers;
    bool m_followScale;
};
