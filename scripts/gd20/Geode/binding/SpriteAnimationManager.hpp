#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SpriteAnimationManager {
public:
    static constexpr auto CLASS_NAME = "SpriteAnimationManager";

    /**
     * @note[short] Android
     */
    TodoReturn animationFinished();

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn createAnimations(gd::string p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn createWithOwner(CCAnimatedSprite* p0, gd::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn doCleanup();

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn executeAnimation(gd::string p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn finishAnimation(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn getActiveAnimation();

    /**
     * @note[short] Android
     */
    TodoReturn getAnimationContainer();

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn getAnimType(gd::string p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn getPrio(gd::string p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn initWithOwner(CCAnimatedSprite* p0, gd::string p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn loadAnimations(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn offsetCurrentAnimation(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn overridePrio();

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn playSound(gd::string p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn playSoundForAnimation(gd::string p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn queueAnimation(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn resetAnimState();

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn runAnimation(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn runQueuedAnimation();

    /**
     * @note[short] Android: Rebinded
     */
    void setActiveAnimation(gd::string p0);

    /**
     * @note[short] Android
     */
    void setAnimationContainer(cocos2d::CCDictionary* p0);

    /**
     * @note[short] Android
     */
    TodoReturn stopAnimations();

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn storeAnimation(cocos2d::CCAnimate* p0, cocos2d::CCAnimate* p1, gd::string p2, int p3, spriteMode p4, cocos2d::CCSpriteFrame* p5);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn storeSoundForAnimation(cocos2d::CCString* p0, gd::string p1, float p2);

    /**
     * @note[short] Android
     */
    TodoReturn updateAnimationSpeed(float p0);
};
