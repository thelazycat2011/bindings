#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CustomSongWidget {
public:
    static constexpr auto CLASS_NAME = "CustomSongWidget";

    /**
     * @note[short] Android
     */
    static CustomSongWidget* create(SongInfoObject* p0, LevelSettingsObject* p1, bool p2, bool p3, bool p4, bool p5, bool p6);

    /**
     * @note[short] Android
     */
    TodoReturn downloadFailed();

    /**
     * @note[short] Android
     */
    TodoReturn downloadSongFinished(SongInfoObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getReportSongSelect();

    /**
     * @note[short] Android
     */
    TodoReturn getSongInfoIfUnloaded();

    /**
     * @note[short] Android
     */
    TodoReturn getSongObject();

    /**
     * @note[short] Android
     */
    bool init(SongInfoObject* p0, LevelSettingsObject* p1, bool p2, bool p3, bool p4, bool p5, bool p6);

    /**
     * @note[short] Android
     */
    void onCancelDownload(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDownload(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onGetSongInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onMore(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPlayback(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSelect(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void setReportSongSelect(bool p0);

    /**
     * @note[short] Android
     */
    void setSongObject(SongInfoObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn startDownload();

    /**
     * @note[short] Android
     */
    TodoReturn startMonitorDownload();

    /**
     * @note[short] Android
     */
    TodoReturn toggleUpdateButton(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateDownloadProgress(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateError(GJSongError p0);

    /**
     * @note[short] Android
     */
    TodoReturn updatePlaybackBtn();

    /**
     * @note[short] Android
     */
    TodoReturn updateProgressBar(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateSongInfo();

    /**
     * @note[short] Android
     */
    TodoReturn updateSongObject(SongInfoObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn verifySongID(int p0);

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

    /**
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
};
