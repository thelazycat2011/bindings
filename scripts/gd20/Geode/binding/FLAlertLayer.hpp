#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class FLAlertLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "FLAlertLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(FLAlertLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] Android: Rebinded
     */
    static FLAlertLayer* create(FLAlertLayerProtocol* p0, char const* p1, gd::string p2, char const* p3, char const* p4, float p5, bool p6, float p7);

    /**
     * @note[short] Android: Rebinded
     */
    static FLAlertLayer* create(FLAlertLayerProtocol* p0, char const* p1, gd::string p2, char const* p3, char const* p4, float p5);

    /**
     * @note[short] Android: Rebinded
     */
    static FLAlertLayer* create(FLAlertLayerProtocol* p0, char const* p1, gd::string p2, char const* p3, char const* p4);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static FLAlertLayer* create(char const* title, gd::string desc, char const* btn);

    /**
     * @note[short] Android
     */
    TodoReturn getBtn1();

    /**
     * @note[short] Android
     */
    TodoReturn getBtn2();

    /**
     * @note[short] Android
     */
    TodoReturn getInternalLayer();

    /**
     * @note[short] Android
     */
    TodoReturn getPParent();

    /**
     * @note[short] Android
     */
    TodoReturn getReverseKeyBack();

    /**
     * @note[short] Android
     */
    TodoReturn getShowInstant();

    /**
     * @note[short] Android
     */
    TodoReturn getTargetScene();

    /**
     * @note[short] Android
     */
    TodoReturn getZValue();

    /**
     * @note[short] Android: Rebinded
     */
    bool init(FLAlertLayerProtocol* p0, char const* p1, gd::string p2, char const* p3, char const* p4, float p5, bool p6, float p7);

    /**
     * @note[short] Android
     */
    void onBtn1(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onBtn2(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void setBtn1(ButtonSprite* p0);

    /**
     * @note[short] Android
     */
    void setBtn2(ButtonSprite* p0);

    /**
     * @note[short] Android
     */
    void setPParent(FLAlertLayerProtocol* p0);

    /**
     * @note[short] Android
     */
    void setReverseKeyBack(bool p0);

    /**
     * @note[short] Android
     */
    void setShowInstant(bool p0);

    /**
     * @note[short] Android
     */
    void setTargetScene(cocos2d::CCNode* p0);

    /**
     * @note[short] Android
     */
    void setZValue(int p0);

    /**
     * @note[short] Android
     */
    virtual void onEnter();

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
    virtual void show();
    cocos2d::CCMenu* m_buttonMenu;
private:
    FLAlertLayerProtocol* m_pParent;
public:
private:
    cocos2d::CCNode* m_targetScene;
public:
private:
    bool m_reverseKeyBack;
public:
private:
    cocos2d::CCLayer* m_mainLayer;
public:
private:
    int m_zValue;
public:
private:
    bool m_showInstant;
public:
private:
    ButtonSprite* m_btn1;
public:
private:
    ButtonSprite* m_btn2;
public:
private:
    ScrollingLayer* m_scrollingLayer;
public:
private:
    bool _0x1c4;
public:
private:
    bool _0x1c5;
public:
};
