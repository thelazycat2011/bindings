#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class PauseLayer {
public:
    static constexpr auto CLASS_NAME = "PauseLayer";

    /**
     * @note[short] Android
     */
    static PauseLayer* create(bool p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4);

    /**
     * @note[short] Android
     */
    TodoReturn goEdit();

    /**
     * @note[short] Android
     */
    bool init(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn musicSliderChanged(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    void onAutoCheckpoints(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onAutoRetry(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onEdit(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onHelp(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onNormalMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPracticeMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onProgressBar(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onQuit(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onRecordReplays(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onRestart(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onResume(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onTime(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn setupProgressBars();

    /**
     * @note[short] Android
     */
    TodoReturn sfxSliderChanged(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn tryShowBanner(float p0);

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
    virtual TodoReturn customSetup();

    /**
     * @note[short] Android
     */
    virtual void keyUp(cocos2d::enumKeyCodes p0);
};
