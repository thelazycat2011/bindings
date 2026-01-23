#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class MusicDownloadDelegate {
public:
    static constexpr auto CLASS_NAME = "MusicDownloadDelegate";

    /**
     * @note[short] Android
     */
    TodoReturn downloadSongFinished(SongInfoObject* p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn loadSongInfoFinished(SongInfoObject* p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn loadSongInfoFailed(int p0, GJSongError p1);

    /**
     * @note[short] Android
     */
    virtual TodoReturn downloadSongFailed(int p0, GJSongError p1);

    /**
     * @note[short] Android
     */
    virtual TodoReturn songStateChanged();
};
