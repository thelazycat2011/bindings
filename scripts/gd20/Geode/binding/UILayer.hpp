#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class UILayer {
public:
    static constexpr auto CLASS_NAME = "UILayer";

    /**
     * @note[short] Android
     */
    static UILayer* create();

    /**
     * @note[short] Android
     */
    TodoReturn disableMenu();

    /**
     * @note[short] Android
     */
    TodoReturn enableMenu();

    /**
     * @note[short] Android
     */
    TodoReturn getClkTimer();

    /**
     * @note[short] Android
     */
    void onCheck(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDeleteCheck(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPause(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn pCommand(cocos2d::CCNode* p0);

    /**
     * @note[short] Android
     */
    TodoReturn toggleCheckpointsMenu(bool p0);

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

    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] Android
     */
    virtual void keyUp(cocos2d::enumKeyCodes p0);
};
