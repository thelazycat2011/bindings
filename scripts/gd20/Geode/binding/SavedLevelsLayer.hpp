#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SavedLevelsLayer {
public:
    static constexpr auto CLASS_NAME = "SavedLevelsLayer";

    /**
     * @note[short] Android
     */
    static SavedLevelsLayer* create();

    /**
     * @note[short] Android
     */
    bool init();

    /**
     * @note[short] Android
     */
    TodoReturn keyBackClicked();

    /**
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn scene();

    /**
     * @note[short] Android
     */
    TodoReturn setupLevelBrowser();
};
