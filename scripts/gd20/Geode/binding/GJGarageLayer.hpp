#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJGarageLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "GJGarageLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJGarageLayer, cocos2d::CCLayer)

    /**
     * @note[short] Android
     */
    TodoReturn achievementForUnlock(int p0, UnlockType p1);

    /**
     * @note[short] Android
     */
    TodoReturn checkBall(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn checkBird(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn checkColor(int p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn checkDart(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn checkIcon(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn checkRobot(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn checkShip(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn checkSpecial(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn descriptionForUnlock(int p0, UnlockType p1);

    /**
     * @note[short] Android
     */
    TodoReturn getDoSelect();

    /**
     * @note[short] Android
     */
    TodoReturn getLockFrame(int p0, UnlockType p1);

    /**
     * @note[short] Android
     */
    TodoReturn getRateSprite();

    /**
     * @note[short] Android
     */
    TodoReturn node();

    /**
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onBallIcon(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onBirdIcon(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDartIcon(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPlayerColor1(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPlayerColor2(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPlayerIcon(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onRobotIcon(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSelectTab(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onShipIcon(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSpecialIcon(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn playRainbowEffect();

    /**
     * @note[short] Android
     */
    TodoReturn playShadowEffect();

    /**
     * @note[short] Android
     */
    TodoReturn scene();

    /**
     * @note[short] Android
     */
    TodoReturn selectPage(IconType p0);

    /**
     * @note[short] Android
     */
    void setRateSprite(cocos2d::CCSprite* p0);

    /**
     * @note[short] Android
     */
    TodoReturn setupColorSelect();

    /**
     * @note[short] Android
     */
    TodoReturn setupIconSelect();

    /**
     * @note[short] Android
     */
    TodoReturn toggleGlow();

    /**
     * @note[short] Android
     */
    TodoReturn updateColorSelect(cocos2d::CCNode* p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn updatePlayerColors();

    /**
     * @note[short] Android
     */
    TodoReturn updatePlayerName(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn updatePlayerSelect(cocos2d::CCNode* p0);

    /**
     * @note[short] Windows: 0xcc070
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Android
     */
    virtual TodoReturn textInputOpened(CCTextInputNode* p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn listButtonBarSwitchedPage(ListButtonBar* p0, int p1);

    /**
     * @note[short] Android
     */
    virtual TodoReturn showUnlockPopup(int p0, UnlockType p1);

    /**
     * @note[short] Android
     */
    virtual TodoReturn updateRate();

    /**
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
};
