#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCMenuItemSpriteExtra : public cocos2d::CCMenuItemSprite {
public:
    static constexpr auto CLASS_NAME = "CCMenuItemSpriteExtra";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCMenuItemSpriteExtra, cocos2d::CCMenuItemSprite)

    /**
     * @note[short] Android
     */
    static CCMenuItemSpriteExtra* create(cocos2d::CCNode* p0, cocos2d::CCNode* p1, cocos2d::CCObject* p2, cocos2d::SEL_MenuHandler p3);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static CCMenuItemSpriteExtra* create(cocos2d::CCNode* p0, cocos2d::CCNode* p1, cocos2d::SEL_MenuHandler handler);

    /**
     * @note[short] Android
     */
    TodoReturn getClickSound();

    /**
     * @note[short] Android
     */
    TodoReturn getDarkenClick();

    /**
     * @note[short] Android
     */
    TodoReturn getOriginalScale();

    /**
     * @note[short] Android
     */
    TodoReturn getScaleVar();

    /**
     * @note[short] Android
     */
    TodoReturn getShouldAnimate();

    /**
     * @note[short] Android
     */
    TodoReturn getVolume();

    /**
     * @note[short] Android
     */
    bool init(cocos2d::CCNode* p0, cocos2d::CCNode* p1, cocos2d::CCObject* p2, cocos2d::SEL_MenuHandler p3);

    /**
     * @note[short] Android: Rebinded
     */
    void setClickSound(gd::string p0);

    /**
     * @note[short] Android
     */
    void setDarkenClick(bool p0);

    /**
     * @note[short] Android
     */
    void setOriginalScale(float p0);

    /**
     * @note[short] Android
     */
    void setScaleVar(float p0);

    /**
     * @note[short] Android
     */
    void setShouldAnimate(bool p0);

    /**
     * @note[short] Android
     */
    void setSizeMult(float p0);

    /**
     * @note[short] Android
     */
    void setVolume(float p0);

    /**
     * @note[short] Android
     */
    virtual void activate();

    /**
     * @note[short] Android
     */
    virtual void selected();

    /**
     * @note[short] Android
     */
    virtual void unselected();
    float m_scaleVar;
    float m_baseScale;
    bool m_shouldAnimate;
    bool m_darkenClick;
    float m_volume;
    gd::string m_clickSound;
};
