#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ObjectToolbox {
public:
    static constexpr auto CLASS_NAME = "ObjectToolbox";

    /**
     * @note[short] Android
     */
    static ObjectToolbox* sharedState();

    /**
     * @note[short] Android
     */
    TodoReturn allKeys();

    /**
     * @note[short] Android
     */
    TodoReturn frameToKey(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn gridNodeSizeForKey(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn intKeyToFrame(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn keyToFrame(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn perspectiveBlockFrame(int p0);

    /**
     * @note[short] Android
     */
    virtual bool init();
};
