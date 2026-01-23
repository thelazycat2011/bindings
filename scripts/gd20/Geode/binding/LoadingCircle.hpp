#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class LoadingCircle {
public:
    static constexpr auto CLASS_NAME = "LoadingCircle";

    /**
     * @note[short] Android
     */
    static LoadingCircle* create();

    /**
     * @note[short] Android
     */
    TodoReturn fadeAndRemove();

    /**
     * @note[short] Android
     */
    TodoReturn getCircle();

    /**
     * @note[short] Android
     */
    TodoReturn getDarkOverlay();

    /**
     * @note[short] Android
     */
    TodoReturn getTargetScene();

    /**
     * @note[short] Android
     */
    void setDarkOverlay(bool p0);

    /**
     * @note[short] Android
     */
    void setTargetScene(cocos2d::CCNode* p0);

    /**
     * @note[short] Android
     */
    TodoReturn show();

    /**
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Android
     */
    virtual void draw();

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
