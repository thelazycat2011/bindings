#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SongCell {
public:
    static constexpr auto CLASS_NAME = "SongCell";

    /**
     * @note[short] Android: Rebinded
     */
     SongCell(char const* p0, float p1, float p2);

    /**
     * @note[short] Android
     */
    TodoReturn loadFromObject(SongObject* p0);

    /**
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);

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
