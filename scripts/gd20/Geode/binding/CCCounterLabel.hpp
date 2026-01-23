#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCCounterLabel {
public:
    static constexpr auto CLASS_NAME = "CCCounterLabel";

    /**
     * @note[short] Android
     */
    static CCCounterLabel* create(char const* p0, char const* p1, int p2, FormatterType p3);

    /**
     * @note[short] Android
     */
    TodoReturn calculateStepSize();

    /**
     * @note[short] Android
     */
    TodoReturn disableCounter();

    /**
     * @note[short] Android
     */
    TodoReturn enableCounter();

    /**
     * @note[short] Android
     */
    TodoReturn fastUpdateCounter();

    /**
     * @note[short] Android
     */
    TodoReturn getCurrentCount();

    /**
     * @note[short] Android
     */
    TodoReturn getTargetCount();

    /**
     * @note[short] Android
     */
    bool init(char const* p0, char const* p1, int p2, FormatterType p3);

    /**
     * @note[short] Android
     */
    void setTargetCount(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn setupFormatter(FormatterType p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateCounter(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateString();
};
