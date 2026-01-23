#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ColoredSection {
public:
    static constexpr auto CLASS_NAME = "ColoredSection";

    /**
     * @note[short] Android
     */
    static ColoredSection* create(cocos2d::ccColor3B p0, int p1, int p2);

    /**
     * @note[short] Android
     */
    TodoReturn getCol();

    /**
     * @note[short] Android
     */
    TodoReturn getEndPos();

    /**
     * @note[short] Android
     */
    TodoReturn getStartPos();

    /**
     * @note[short] Android
     */
    bool init(cocos2d::ccColor3B p0, int p1, int p2);

    /**
     * @note[short] Android
     */
    void setCol(cocos2d::ccColor3B p0);

    /**
     * @note[short] Android
     */
    void setEndPos(int p0);

    /**
     * @note[short] Android
     */
    void setStartPos(int p0);
};
