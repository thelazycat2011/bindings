#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class AppDelegate : public cocos2d::CCApplication, public cocos2d::CCSceneDelegate {
public:
    static constexpr auto CLASS_NAME = "AppDelegate";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(AppDelegate, cocos2d::CCApplication)

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    float bgScale();

    /**
     * @note[short] Android
     */
    TodoReturn checkSound();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static AppDelegate* get();

    /**
     * @note[short] Android
     */
    TodoReturn getEnableFPSTricks();

    /**
     * @note[short] Android
     */
    TodoReturn getIsIOS();

    /**
     * @note[short] Android
     */
    TodoReturn getIsLowMemoryDevice();

    /**
     * @note[short] Android
     */
    TodoReturn getLoadingFinished();

    /**
     * @note[short] Android
     */
    TodoReturn getManagersLoaded();

    /**
     * @note[short] Android
     */
    TodoReturn getPaused();

    /**
     * @note[short] Android
     */
    TodoReturn getScenePointer();

    /**
     * @note[short] Android
     */
    TodoReturn hideLoadingCircle();

    /**
     * @note[short] Android
     */
    TodoReturn loadingIsFinished();

    /**
     * @note[short] Android
     */
    TodoReturn musicTest();

    /**
     * @note[short] Android
     */
    void pauseGame();

    /**
     * @note[short] Android
     */
    void platformShutdown();

    /**
     * @note[short] Android
     */
    TodoReturn resumeSound();

    /**
     * @note[short] Android
     */
    void setIdleTimerDisabled(bool p0);

    /**
     * @note[short] Android
     */
    void setManagersLoaded(bool p0);

    /**
     * @note[short] Android
     */
    void setPaused(bool p0);

    /**
     * @note[short] Android
     */
    void setScenePointer(cocos2d::CCNode* p0);

    /**
     * @note[short] Android
     */
    void setupGLView();

    /**
     * @note[short] Android
     */
    TodoReturn showLoadingCircle(bool p0, bool p1, bool p2);

    /**
     * @note[short] Android
     */
    virtual void trySaveGame();

    /**
     * @note[short] Android
     */
    virtual bool applicationDidFinishLaunching();

    /**
     * @note[short] Android
     */
    virtual void applicationDidEnterBackground();

    /**
     * @note[short] Android
     */
    virtual void applicationWillEnterForeground();

    /**
     * @note[short] Android
     */
    virtual void applicationWillBecomeActive();

    /**
     * @note[short] Android
     */
    virtual void applicationWillResignActive();

    /**
     * @note[short] Android
     */
    virtual void willSwitchToScene(cocos2d::CCScene* p0);
};
