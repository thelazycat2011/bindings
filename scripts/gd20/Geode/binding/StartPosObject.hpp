#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class StartPosObject {
public:
    static constexpr auto CLASS_NAME = "StartPosObject";

    /**
     * @note[short] Android
     */
    static StartPosObject* create();

    /**
     * @note[short] Android
     */
    TodoReturn getSaveString();

    /**
     * @note[short] Android
     */
    TodoReturn getSettings();

    /**
     * @note[short] Android
     */
    void setSettings(LevelSettingsObject* p0);

    /**
     * @note[short] Android
     */
    virtual bool init();
};
