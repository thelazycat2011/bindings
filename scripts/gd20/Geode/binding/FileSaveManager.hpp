#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class FileSaveManager {
public:
    static constexpr auto CLASS_NAME = "FileSaveManager";

    /**
     * @note[short] Android
     */
    static FileSaveManager* sharedState();

    /**
     * @note[short] Android
     */
    TodoReturn getShopItems();

    /**
     * @note[short] Android
     */
    TodoReturn getStoreData();

    /**
     * @note[short] Android
     */
    TodoReturn loadDataFromFile(char const* p0);

    /**
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Android
     */
    virtual TodoReturn firstLoad();
};
