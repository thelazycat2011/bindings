#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class LocalLevelManager {
public:
    static constexpr auto CLASS_NAME = "LocalLevelManager";

    /**
     * @note[short] Android
     */
    static LocalLevelManager* sharedState();

    /**
     * @note[short] Android
     */
    TodoReturn getAllLevelsInDict();

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn getAllLevelsWithName(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn getLevelsInNameGroups();

    /**
     * @note[short] Android
     */
    TodoReturn getLoadString(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getLocalLevels();

    /**
     * @note[short] Android
     */
    TodoReturn getMainLevelString(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn markLevelsAsUnmodified();

    /**
     * @note[short] Android
     */
    TodoReturn moveLevelToTop(GJGameLevel* p0);

    /**
     * @note[short] Android
     */
    TodoReturn reorderLevels();

    /**
     * @note[short] Android
     */
    void setLocalLevels(cocos2d::CCArray* p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateLevelOrder();

    /**
     * @note[short] Android
     */
    TodoReturn updateLevelRevision();

    /**
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Android
     */
    virtual TodoReturn encodeDataTo(DS_Dictionary* p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn dataLoaded(DS_Dictionary* p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn firstLoad();
};
