#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class TextArea {
public:
    static constexpr auto CLASS_NAME = "TextArea";

    /**
     * @note[short] Android: Rebinded
     */
    static TextArea* create(gd::string p0, char const* p1, float p2, float p3, cocos2d::CCPoint p4, float p5, bool p6);

    /**
     * @note[short] Android
     */
    TodoReturn colorAllCharactersTo(cocos2d::ccColor3B p0);

    /**
     * @note[short] Android
     */
    TodoReturn fadeIn(float p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn fadeOut(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn fadeOutAndRemove();

    /**
     * @note[short] Android
     */
    TodoReturn finishFade();

    /**
     * @note[short] Android
     */
    TodoReturn getAlign();

    /**
     * @note[short] Android
     */
    TodoReturn getFadeInFinished();

    /**
     * @note[short] Android
     */
    TodoReturn getFontScale();

    /**
     * @note[short] Android
     */
    TodoReturn getLineSpace();

    /**
     * @note[short] Android
     */
    TodoReturn getMaxWidth();

    /**
     * @note[short] Android
     */
    TodoReturn getOnTimer();

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
    TodoReturn getTextPosition();

    /**
     * @note[short] Android
     */
    TodoReturn getTextWidth();

    /**
     * @note[short] Android
     */
    TodoReturn hideAll();

    /**
     * @note[short] Android: Rebinded
     */
    bool init(gd::string p0, char const* p1, float p2, float p3, cocos2d::CCPoint p4, float p5, bool p6);

    /**
     * @note[short] Android
     */
    void setAlign(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    void setFadeInFinished(bool p0);

    /**
     * @note[short] Android
     */
    void setFontScale(float p0);

    /**
     * @note[short] Android
     */
    void setIgnoreColorCode(bool p0);

    /**
     * @note[short] Android
     */
    void setLineSpace(float p0);

    /**
     * @note[short] Android
     */
    void setMaxWidth(float p0);

    /**
     * @note[short] Android
     */
    void setOnTimer(bool p0);

    /**
     * @note[short] Android: Rebinded
     */
    void setString(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn showAll();

    /**
     * @note[short] Android
     */
    TodoReturn stopAllCharacterActions();

    /**
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);
};
