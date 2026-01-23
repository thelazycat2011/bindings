#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class MusicDownloadManager {
public:
    static constexpr auto CLASS_NAME = "MusicDownloadManager";

    /**
     * @note[short] Android
     */
    static MusicDownloadManager* sharedState();

    /**
     * @note[short] Android
     */
    TodoReturn addDLToActive(char const* p0, cocos2d::CCObject* p1);

    /**
     * @note[short] Android
     */
    TodoReturn addDLToActive(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn addMusicDownloadDelegate(MusicDownloadDelegate* p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn addSongObjectFromString(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn clearSong(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn clearUnusedSongs();

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn createSongsInfo(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn dataLoaded(DS_Dictionary* p0);

    /**
     * @note[short] Android
     */
    TodoReturn deleteSong(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn downloadSong(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn downloadSongFailed(int p0, GJSongError p1);

    /**
     * @note[short] Android
     */
    TodoReturn downloadSongFinished(SongInfoObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn encodeDataTo(DS_Dictionary* p0);

    /**
     * @note[short] Android
     */
    TodoReturn firstSetup();

    /**
     * @note[short] Android
     */
    TodoReturn getAllSongs();

    /**
     * @note[short] Android
     */
    TodoReturn getDLObject(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getDownloadedSongs();

    /**
     * @note[short] Android
     */
    TodoReturn getDownloadedSongsDict();

    /**
     * @note[short] Android
     */
    TodoReturn getDownloadProgress(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getSongDownloadKey(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getSongInfo(int p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn getSongInfoKey(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getSongInfoObject(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getSongPriority();

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn handleIt(bool p0, gd::string p1, gd::string p2, GJHttpType p3);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn handleItDelayed(bool p0, gd::string p1, gd::string p2, GJHttpType p3);

    /**
     * @note[short] Android
     */
    TodoReturn handleItND(cocos2d::CCNode* p0, void* p1);

    /**
     * @note[short] Android
     */
    TodoReturn incrementPriorityForSong(int p0);

    /**
     * @note[short] Android
     */
    bool isDLActive(char const* p0);

    /**
     * @note[short] Android
     */
    bool isRunningActionForSongID(int p0);

    /**
     * @note[short] Android
     */
    bool isSongDownloaded(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn limitDownloadedSongs();

    /**
     * @note[short] Android
     */
    TodoReturn loadSongInfoFailed(int p0, GJSongError p1);

    /**
     * @note[short] Android
     */
    TodoReturn loadSongInfoFinished(SongInfoObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn onDownloadSongCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn onGetSongInfoCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);

    /**
     * @note[short] Android
     */
    TodoReturn pathForSong(int p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn ProcessHttpRequest(gd::string p0, gd::string p1, gd::string p2, GJHttpType p3);

    /**
     * @note[short] Android
     */
    TodoReturn removeDLFromActive(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn removeMusicDownloadDelegate(MusicDownloadDelegate* p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn responseToDict(gd::string p0, char const* p1);

    /**
     * @note[short] Android
     */
    void setDownloadedSongsDict(cocos2d::CCDictionary* p0);

    /**
     * @note[short] Android
     */
    TodoReturn showTOS(FLAlertLayerProtocol* p0);

    /**
     * @note[short] Android
     */
    TodoReturn songStateChanged();

    /**
     * @note[short] Android
     */
    TodoReturn stopDownload(int p0);

    /**
     * @note[short] Android
     */
    virtual bool init();
};
