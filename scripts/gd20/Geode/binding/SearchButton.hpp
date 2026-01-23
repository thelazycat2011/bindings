#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SearchButton {
public:
    static constexpr auto CLASS_NAME = "SearchButton";

    /**
     * @note[short] Android
     */
    static SearchButton* create(char const* p0, char const* p1, float p2, char const* p3);

    /**
     * @note[short] Android
     */
    TodoReturn getLabel();

    /**
     * @note[short] Android
     */
    TodoReturn getSprite();

    /**
     * @note[short] Android
     */
    bool init(char const* p0, char const* p1, float p2, char const* p3);
};
