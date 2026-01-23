#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ColorAction {
public:
    static constexpr auto CLASS_NAME = "ColorAction";

    /**
     * @note[short] Android
     */
    static ColorAction* create();

    /**
     * @note[short] Android
     */
    static ColorAction* create(cocos2d::ccColor3B p0, bool p1, int p2);

    /**
     * @note[short] Android
     */
    static ColorAction* create(cocos2d::ccColor3B p0, cocos2d::ccColor3B p1, float p2, double p3, bool p4, int p5, float p6, float p7);

    /**
     * @note[short] Android
     */
    static ColorAction* create(cocos2d::ccColor3B p0, cocos2d::ccColor3B p1, float p2, double p3, bool p4);

    /**
     * @note[short] Android
     */
    TodoReturn getBlend();

    /**
     * @note[short] Android
     */
    TodoReturn getCopy();

    /**
     * @note[short] Android
     */
    TodoReturn getCopyOpacity();

    /**
     * @note[short] Android
     */
    TodoReturn getCurrentColor();

    /**
     * @note[short] Android
     */
    TodoReturn getCurrentOpacity();

    /**
     * @note[short] Android
     */
    TodoReturn getCustom();

    /**
     * @note[short] Android
     */
    TodoReturn getDeltaTime();

    /**
     * @note[short] Android
     */
    TodoReturn getDidProcess();

    /**
     * @note[short] Android
     */
    TodoReturn getDuration();

    /**
     * @note[short] Android
     */
    TodoReturn getFromColor();

    /**
     * @note[short] Android
     */
    TodoReturn getFromOpacity();

    /**
     * @note[short] Android
     */
    TodoReturn getHSVValue();

    /**
     * @note[short] Android
     */
    TodoReturn getIgnore();

    /**
     * @note[short] Android
     */
    TodoReturn getIgnoreCopyColor();

    /**
     * @note[short] Android
     */
    TodoReturn getIndex();

    /**
     * @note[short] Android
     */
    TodoReturn getInheritColorIndex();

    /**
     * @note[short] Android
     */
    TodoReturn getSaveString();

    /**
     * @note[short] Android
     */
    TodoReturn getToColor();

    /**
     * @note[short] Android
     */
    TodoReturn getToOpacity();

    /**
     * @note[short] Android
     */
    bool init(cocos2d::ccColor3B p0, cocos2d::ccColor3B p1, float p2, double p3, bool p4, int p5, float p6, float p7);

    /**
     * @note[short] Android
     */
    TodoReturn resetAction();

    /**
     * @note[short] Android
     */
    void setBlend(bool p0);

    /**
     * @note[short] Android
     */
    void setCopyOpacity(bool p0);

    /**
     * @note[short] Android
     */
    void setCurrentColor(cocos2d::ccColor3B p0);

    /**
     * @note[short] Android
     */
    void setCurrentOpacity(float p0);

    /**
     * @note[short] Android
     */
    void setCustom(int p0);

    /**
     * @note[short] Android
     */
    void setDeltaTime(float p0);

    /**
     * @note[short] Android
     */
    void setDidProcess(bool p0);

    /**
     * @note[short] Android
     */
    void setDuration(float p0);

    /**
     * @note[short] Android
     */
    void setFromColor(cocos2d::ccColor3B p0);

    /**
     * @note[short] Android
     */
    void setFromOpacity(float p0);

    /**
     * @note[short] Android
     */
    void setHSVValue(cocos2d::ccHSVValue p0);

    /**
     * @note[short] Android
     */
    void setIgnore(bool p0);

    /**
     * @note[short] Android
     */
    void setIgnoreCopyColor(bool p0);

    /**
     * @note[short] Android
     */
    void setIndex(int p0);

    /**
     * @note[short] Android
     */
    void setInheritColorIndex(int p0);

    /**
     * @note[short] Android
     */
    void setToColor(cocos2d::ccColor3B p0);

    /**
     * @note[short] Android
     */
    void setToOpacity(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn setupFromDict(cocos2d::CCDictionary* p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn setupFromString(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn step(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateCustomColor(cocos2d::ccColor3B p0, cocos2d::ccColor3B p1);
};
