#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class EveryplayToolbox {
public:
    static constexpr auto CLASS_NAME = "EveryplayToolbox";

    /**
     * @note[short] Android
     */
    TodoReturn firstSetup();

    /**
     * @note[short] Android
     */
    bool isEveryplaySupported();

    /**
     * @note[short] Android
     */
    bool isLowEndDevice();

    /**
     * @note[short] Android
     */
    bool isPaused();

    /**
     * @note[short] Android
     */
    bool isRecording();

    /**
     * @note[short] Android
     */
    bool isRecordingSupported();

    /**
     * @note[short] Android
     */
    TodoReturn pauseRecording();

    /**
     * @note[short] Android
     */
    TodoReturn playLastRecording();

    /**
     * @note[short] Android
     */
    TodoReturn resumeRecording();

    /**
     * @note[short] Android
     */
    void setMetadataFromLevel(GJGameLevel* p0);

    /**
     * @note[short] Android
     */
    TodoReturn showEveryplay();

    /**
     * @note[short] Android
     */
    TodoReturn startRecording();

    /**
     * @note[short] Android
     */
    TodoReturn stopRecording();
};
