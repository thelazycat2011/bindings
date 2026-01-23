#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GameSoundManager {
public:
    static constexpr auto CLASS_NAME = "GameSoundManager";

    /**
     * @note[short] Android
     */
    TodoReturn asynchronousSetup();

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
    TodoReturn fadeInMusic(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn fadeOutMusic(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn getActiveBGMusic();

    /**
     * @note[short] Android
     */
    TodoReturn getMeteringValue();

    /**
     * @note[short] Android
     */
    TodoReturn getState();

    /**
     * @note[short] Android
     */
    bool init();

    /**
     * @note[short] Android: Rebinded
     */
    bool isLoopedSoundPlaying(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn pauseAllLoopedSounds();

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn pauseLoopedSound(gd::string p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn playBackgroundMusic(gd::string p0, bool p1, bool p2);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn playEffect(gd::string p0, float p1, float p2, float p3);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn playLoopedSound(gd::string p0, gd::string p1, float p2, float p3, bool p4, bool p5, bool p6);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn playUniqueEffect(gd::string p0, float p1, float p2, float p3);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn playUniqueEffect(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn preload();

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn removeLoopedSound(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn resetUniqueEffects();

    /**
     * @note[short] Android
     */
    TodoReturn resumeAllLoopedSounds();

    /**
     * @note[short] Android
     */
    TodoReturn resumeSound();

    /**
     * @note[short] Android
     */
    TodoReturn setup();

    /**
     * @note[short] Android
     */
    TodoReturn sharedManager();

    /**
     * @note[short] Android
     */
    TodoReturn stopAllLoopedSounds();

    /**
     * @note[short] Android
     */
    TodoReturn stopBackgroundMusic();

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn stopLoopedSound(gd::string p0, bool p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn updateLoopedVolume(gd::string p0, float p1);

    /**
     * @note[short] Android
     */
    TodoReturn updateMetering(float p0);
};
