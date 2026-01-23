#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SongObject {
public:
    static constexpr auto CLASS_NAME = "SongObject";

    /**
     * @note[short] Android
     */
    static SongObject* create(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getAudioTrack();

    /**
     * @note[short] Android
     */
    bool init(int p0);
};
