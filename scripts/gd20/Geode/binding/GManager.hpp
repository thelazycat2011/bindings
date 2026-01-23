#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GManager {
public:
    static constexpr auto CLASS_NAME = "GManager";

    /**
     * @note[short] Android
     */
    TodoReturn getCompressedSaveString();

    /**
     * @note[short] Android
     */
    TodoReturn getQuickSave();

    /**
     * @note[short] Android
     */
    TodoReturn getSaveString();

    /**
     * @note[short] Android
     */
    TodoReturn load();

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn loadDataFromFile(gd::string p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn loadFromCompressedString(gd::string p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn loadFromString(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn save();

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn saveData(DS_Dictionary* p0, gd::string p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn saveGMTo(gd::string p0);

    /**
     * @note[short] Android
     */
    void setQuickSave(bool p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn tryLoadData(DS_Dictionary* p0, gd::string p1);

    /**
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Android
     */
    virtual TodoReturn setup();

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
