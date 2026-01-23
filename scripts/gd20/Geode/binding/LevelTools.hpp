#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class LevelTools {
public:
    static constexpr auto CLASS_NAME = "LevelTools";

    /**
     * @note[short] Android
     */
    TodoReturn artistForAudio(int p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn base64DecodeString(gd::string p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn base64EncodeString(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn createOldStarLevelDict();

    /**
     * @note[short] Android
     */
    TodoReturn createStarLevelDict();

    /**
     * @note[short] Android
     */
    TodoReturn createStarPackDict();

    /**
     * @note[short] Android
     */
    TodoReturn distanceFromXPosForDuration(float p0, float p1, float p2, cocos2d::CCArray* p3, int p4);

    /**
     * @note[short] Android
     */
    TodoReturn fbURLForArtist(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getAudioBPM(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getAudioFileName(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getAudioString(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getAudioTitle(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getLevel(int p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn getSongObject(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn nameForArtist(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn ngURLForArtist(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn offsetBPMForTrack(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn timeForXPos(float p0, cocos2d::CCArray* p1, int p2);

    /**
     * @note[short] Android
     */
    TodoReturn urlForAudio(int p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn verifyLevelIntegrity(gd::string p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn xPosForTime(float p0, cocos2d::CCArray* p1, int p2);

    /**
     * @note[short] Android
     */
    TodoReturn ytURLForArtist(int p0);
};
