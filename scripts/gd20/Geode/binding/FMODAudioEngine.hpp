#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include <fmod.hpp>

class FMODAudioEngine {
public:
    static constexpr auto CLASS_NAME = "FMODAudioEngine";

    /**
     * @note[short] Android
     */
    static FMODAudioEngine* sharedEngine();

    /**
     * @note[short] Android
     */
    TodoReturn disableMetering();

    /**
     * @note[short] Android
     */
    TodoReturn enableMetering();

    /**
     * @note[short] Android
     */
    TodoReturn fadeBackgroundMusic(bool p0, float p1);

    /**
     * @note[short] Android
     */
    TodoReturn getBackgroundMusicTime();

    /**
     * @note[short] Android
     */
    TodoReturn getBackgroundMusicVolume();

    /**
     * @note[short] Android
     */
    TodoReturn getEffectsVolume();

    /**
     * @note[short] Android
     */
    TodoReturn getTimeOffset();

    /**
     * @note[short] Android
     */
    bool isBackgroundMusicPlaying();

    /**
     * @note[short] Android: Rebinded
     */
    bool isBackgroundMusicPlaying(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn pauseAllEffects();

    /**
     * @note[short] Android
     */
    TodoReturn pauseBackgroundMusic();

    /**
     * @note[short] Android
     */
    TodoReturn pauseEffect(unsigned int p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn playBackgroundMusic(gd::string p0, bool p1, bool p2);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn playEffect(gd::string p0, bool p1, float p2, float p3, float p4);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn preloadBackgroundMusic(gd::string p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn preloadEffect(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn printResult(FMOD_RESULT p0);

    /**
     * @note[short] Android
     */
    TodoReturn resumeAllEffects();

    /**
     * @note[short] Android
     */
    TodoReturn resumeBackgroundMusic();

    /**
     * @note[short] Android
     */
    TodoReturn resumeEffect(unsigned int p0);

    /**
     * @note[short] Android
     */
    TodoReturn rewindBackgroundMusic();

    /**
     * @note[short] Android
     */
    void setBackgroundMusicTime(float p0);

    /**
     * @note[short] Android
     */
    void setBackgroundMusicVolume(float p0);

    /**
     * @note[short] Android
     */
    void setEffectsVolume(float p0);

    /**
     * @note[short] Android
     */
    void setTimeOffset(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn setupAudioEngine();

    /**
     * @note[short] Android
     */
    TodoReturn start();

    /**
     * @note[short] Android
     */
    TodoReturn stop();

    /**
     * @note[short] Android
     */
    TodoReturn stopAllEffects();

    /**
     * @note[short] Android
     */
    TodoReturn stopBackgroundMusic(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn stopEffect(unsigned int p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn unloadEffect(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn willPlayBackgroundMusic();

    /**
     * @note[short] Android
     */
    virtual void update(float p0);
};
