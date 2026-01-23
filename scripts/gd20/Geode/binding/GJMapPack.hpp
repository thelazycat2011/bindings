#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJMapPack {
public:
    static constexpr auto CLASS_NAME = "GJMapPack";

    /**
     * @note[short] Android
     */
    static GJMapPack* create();

    /**
     * @note[short] Android
     */
    static GJMapPack* create(cocos2d::CCDictionary* p0);

    /**
     * @note[short] Android
     */
    TodoReturn completedMaps();

    /**
     * @note[short] Android
     */
    TodoReturn getColor1();

    /**
     * @note[short] Android
     */
    TodoReturn getColor2();

    /**
     * @note[short] Android
     */
    TodoReturn getM_ID();

    /**
     * @note[short] Android
     */
    TodoReturn getPackCoins();

    /**
     * @note[short] Android
     */
    TodoReturn getPackDifficulty();

    /**
     * @note[short] Android
     */
    TodoReturn getPackID();

    /**
     * @note[short] Android
     */
    TodoReturn getPackLevels();

    /**
     * @note[short] Android
     */
    TodoReturn getPackName();

    /**
     * @note[short] Android
     */
    TodoReturn getPackStars();

    /**
     * @note[short] Android
     */
    TodoReturn hasCompletedMapPack();

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn parsePackColors(gd::string p0, gd::string p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn parsePackLevels(gd::string p0);

    /**
     * @note[short] Android
     */
    void setColor1(cocos2d::ccColor3B p0);

    /**
     * @note[short] Android
     */
    void setColor2(cocos2d::ccColor3B p0);

    /**
     * @note[short] Android
     */
    void setPackCoins(int p0);

    /**
     * @note[short] Android
     */
    void setPackDifficulty(int p0);

    /**
     * @note[short] Android
     */
    void setPackID(int p0);

    /**
     * @note[short] Android: Rebinded
     */
    void setPackLevels(gd::string p0);

    /**
     * @note[short] Android: Rebinded
     */
    void setPackName(gd::string p0);

    /**
     * @note[short] Android
     */
    void setPackStars(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn totalMaps();

    /**
     * @note[short] Android
     */
    virtual bool init();
};
