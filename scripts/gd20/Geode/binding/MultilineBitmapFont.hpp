#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class MultilineBitmapFont {
public:
    static constexpr auto CLASS_NAME = "MultilineBitmapFont";

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn createWithFont(char const* p0, gd::string p1, float p2, float p3, cocos2d::CCPoint p4, int p5, bool p6);

    /**
     * @note[short] Android
     */
    TodoReturn getIgnoreColorCode();

    /**
     * @note[short] Android
     */
    TodoReturn getSizeWidth();

    /**
     * @note[short] Android
     */
    TodoReturn getTextHeight();

    /**
     * @note[short] Android
     */
    TodoReturn getTextPos();

    /**
     * @note[short] Android
     */
    TodoReturn getTextWidth();

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn initWithFont(char const* p0, gd::string p1, float p2, float p3, cocos2d::CCPoint p4, int p5, bool p6);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn readColorInfo(gd::string p0);

    /**
     * @note[short] Android
     */
    void setIgnoreColorCode(bool p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn stringWithMaxWidth(gd::string p0, float p1, float p2);

    /**
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);
};
