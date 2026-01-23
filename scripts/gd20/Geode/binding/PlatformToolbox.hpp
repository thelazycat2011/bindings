#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class PlatformToolbox {
public:
    static constexpr auto CLASS_NAME = "PlatformToolbox";

    /**
     * @note[short] Android
     */
    TodoReturn activateGameCenter();

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn doesFileExist(gd::string p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn downloadAndSavePromoImage(gd::string p0, gd::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn gameDidSave();

    /**
     * @note[short] Android
     */
    TodoReturn getDisplaySize();

    /**
     * @note[short] Android
     */
    TodoReturn getRawPath(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getUniqueUserID();

    /**
     * @note[short] Android
     */
    TodoReturn getUserID();

    /**
     * @note[short] Android
     */
    TodoReturn hideCursor();

    /**
     * @note[short] Android
     */
    bool isControllerConnected();

    /**
     * @note[short] Android
     */
    bool isHD();

    /**
     * @note[short] Android
     */
    bool isLocalPlayerAuthenticated();

    /**
     * @note[short] Android
     */
    bool isLowMemoryDevice();

    /**
     * @note[short] Android
     */
    bool isNetworkAvailable();

    /**
     * @note[short] Android
     */
    bool isSignedInGooglePlay();

    /**
     * @note[short] Android
     */
    TodoReturn loadAndDecryptFileToString(char const* p0, char const* p1);

    /**
     * @note[short] Android
     */
    TodoReturn logEvent(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn onGameLaunch();

    /**
     * @note[short] Android
     */
    TodoReturn onNativePause();

    /**
     * @note[short] Android
     */
    TodoReturn onNativeResume();

    /**
     * @note[short] Android
     */
    TodoReturn onToggleKeyboard();

    /**
     * @note[short] Android
     */
    TodoReturn openAppPage();

    /**
     * @note[short] Android
     */
    TodoReturn platformShutdown();

    /**
     * @note[short] Android
     */
    TodoReturn refreshWindow();

    /**
     * @note[short] Android
     */
    TodoReturn reportAchievementWithID(char const* p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn reportLoadingFinished();

    /**
     * @note[short] Android
     */
    TodoReturn resizeWindow(float p0, float p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn saveAndEncryptStringToFile(gd::string p0, char const* p1, char const* p2);

    /**
     * @note[short] Android
     */
    TodoReturn sendMail(char const* p0, char const* p1, char const* p2);

    /**
     * @note[short] Android
     */
    void setBlockBackButton(bool p0);

    /**
     * @note[short] Android
     */
    void setKeyboardState(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn shouldResumeSound();

    /**
     * @note[short] Android
     */
    TodoReturn showAchievements();

    /**
     * @note[short] Android
     */
    TodoReturn showCursor();

    /**
     * @note[short] Android
     */
    TodoReturn signInGooglePlay();

    /**
     * @note[short] Android
     */
    TodoReturn signOutGooglePlay();

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn spriteFromSavedFile(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn toggleCallGLFinish(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn toggleCPUSleepMode(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn toggleForceTimer(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn toggleFullScreen(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn toggleMouseControl(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn toggleSmoothFix(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn toggleVerticalSync(bool p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn tryShowRateDialog(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateMouseControl();

    /**
     * @note[short] Android
     */
    TodoReturn updateWindowedSize(float p0, float p1);
};
