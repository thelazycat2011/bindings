#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GameCell {
public:
    static constexpr auto CLASS_NAME = "GameCell";

    /**
     * @note[short] Android: Rebinded
     */
     GameCell(char const* p0, float p1, float p2);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn loadFromString(gd::string p0);

    /**
     * @note[short] Android
     */
    void onTouch(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn updateBGColor(int p0);

    /**
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Android
     */
    virtual void draw();
};
