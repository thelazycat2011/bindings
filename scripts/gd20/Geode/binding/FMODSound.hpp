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

class FMODSound {
public:
    static constexpr auto CLASS_NAME = "FMODSound";

    /**
     * @note[short] Android
     */
    static FMODSound* create(FMOD::Sound* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getSound();

    /**
     * @note[short] Android
     */
    bool init(FMOD::Sound* p0);

    /**
     * @note[short] Android
     */
    void setSound(FMOD::Sound* p0);
};
