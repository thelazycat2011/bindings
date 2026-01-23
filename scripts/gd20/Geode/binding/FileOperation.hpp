#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class FileOperation {
public:
    static constexpr auto CLASS_NAME = "FileOperation";

    /**
     * @note[short] Android
     */
    TodoReturn getFilePath();

    /**
     * @note[short] Android
     */
    TodoReturn readFile();

    /**
     * @note[short] Android
     */
    TodoReturn saveFile();
};
