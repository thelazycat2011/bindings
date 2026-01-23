#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SongInfoObject {
public:
    static constexpr auto CLASS_NAME = "SongInfoObject";

    /**
     * @note[short] Android
     */
    static SongInfoObject* create(cocos2d::CCDictionary* p0);

    /**
     * @note[short] Android: Rebinded
     */
    static SongInfoObject* create(int p0, gd::string p1, gd::string p2, int p3, float p4, gd::string p5, gd::string p6, gd::string p7, int p8);

    /**
     * @note[short] Android
     */
    static SongInfoObject* create(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn createWithCoder(DS_Dictionary* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getArtistID();

    /**
     * @note[short] Android
     */
    TodoReturn getArtistName();

    /**
     * @note[short] Android
     */
    TodoReturn getArtistYT();

    /**
     * @note[short] Android
     */
    TodoReturn getFileSize();

    /**
     * @note[short] Android
     */
    TodoReturn getIsBlocked();

    /**
     * @note[short] Android
     */
    TodoReturn getIsUnloaded();

    /**
     * @note[short] Android
     */
    TodoReturn getIsVerified();

    /**
     * @note[short] Android
     */
    TodoReturn getLevelSettings();

    /**
     * @note[short] Android
     */
    TodoReturn getSongID();

    /**
     * @note[short] Android
     */
    TodoReturn getSongName();

    /**
     * @note[short] Android
     */
    TodoReturn getSongPriority();

    /**
     * @note[short] Android
     */
    TodoReturn getSongURL();

    /**
     * @note[short] Android
     */
    TodoReturn getSongYT();

    /**
     * @note[short] Android: Rebinded
     */
    bool init(int p0, gd::string p1, gd::string p2, int p3, float p4, gd::string p5, gd::string p6, gd::string p7, int p8);

    /**
     * @note[short] Android
     */
    void setArtistID(int p0);

    /**
     * @note[short] Android: Rebinded
     */
    void setArtistName(gd::string p0);

    /**
     * @note[short] Android: Rebinded
     */
    void setArtistYT(gd::string p0);

    /**
     * @note[short] Android
     */
    void setFileSize(float p0);

    /**
     * @note[short] Android
     */
    void setIsBlocked(bool p0);

    /**
     * @note[short] Android
     */
    void setIsUnloaded(bool p0);

    /**
     * @note[short] Android
     */
    void setIsVerified(bool p0);

    /**
     * @note[short] Android
     */
    void setLevelSettings(LevelSettingsObject* p0);

    /**
     * @note[short] Android
     */
    void setSongID(int p0);

    /**
     * @note[short] Android: Rebinded
     */
    void setSongName(gd::string p0);

    /**
     * @note[short] Android
     */
    void setSongPriority(int p0);

    /**
     * @note[short] Android: Rebinded
     */
    void setSongURL(gd::string p0);

    /**
     * @note[short] Android: Rebinded
     */
    void setSongYT(gd::string p0);

    /**
     * @note[short] Android
     */
    virtual void encodeWithCoder(DS_Dictionary* p0);

    /**
     * @note[short] Android
     */
    virtual bool canEncode();
};
