#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class MenuGameLayer {
public:
    static constexpr auto CLASS_NAME = "MenuGameLayer";

    /**
     * @note[short] Android
     */
    static MenuGameLayer* create();

    /**
     * @note[short] Android
     */
    TodoReturn destroyPlayer();

    /**
     * @note[short] Android
     */
    TodoReturn getBGColor(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn resetPlayer();

    /**
     * @note[short] Android
     */
    TodoReturn tryJump(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateColor(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateColors();

    /**
     * @note[short] Android
     */
    virtual void update(float p0);

    /**
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
};
