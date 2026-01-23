#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class LevelSettingsObject {
public:
    static constexpr auto CLASS_NAME = "LevelSettingsObject";

    /**
     * @note[short] Android
     */
    static LevelSettingsObject* create();

    /**
     * @note[short] Android
     */
    TodoReturn getBGIdx();

    /**
     * @note[short] Android
     */
    TodoReturn getColorManager();

    /**
     * @note[short] Android
     */
    TodoReturn getFadeIn();

    /**
     * @note[short] Android
     */
    TodoReturn getFadeOut();

    /**
     * @note[short] Android
     */
    TodoReturn getFontIdx();

    /**
     * @note[short] Android
     */
    TodoReturn getGIdx();

    /**
     * @note[short] Android
     */
    TodoReturn getGLineIdx();

    /**
     * @note[short] Android
     */
    TodoReturn getGravityFlipped();

    /**
     * @note[short] Android
     */
    TodoReturn getIsLimited();

    /**
     * @note[short] Android
     */
    TodoReturn getLastColorPage();

    /**
     * @note[short] Android
     */
    TodoReturn getLevel();

    /**
     * @note[short] Android
     */
    TodoReturn getSaveString();

    /**
     * @note[short] Android
     */
    TodoReturn getSongChanged();

    /**
     * @note[short] Android
     */
    TodoReturn getSongOffset();

    /**
     * @note[short] Android
     */
    TodoReturn getSongString();

    /**
     * @note[short] Android
     */
    TodoReturn getStartDualMode();

    /**
     * @note[short] Android
     */
    TodoReturn getStartMiniMode();

    /**
     * @note[short] Android
     */
    TodoReturn getStartMode();

    /**
     * @note[short] Android
     */
    TodoReturn getStartSpeed();

    /**
     * @note[short] Android
     */
    TodoReturn getTwoPlayerMode();

    /**
     * @note[short] Android
     */
    TodoReturn objectFromDict(cocos2d::CCDictionary* p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn objectFromString(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn offsetMusic();

    /**
     * @note[short] Android
     */
    void setBGIdx(int p0);

    /**
     * @note[short] Android
     */
    void setColorManager(GJEffectManager* p0);

    /**
     * @note[short] Android
     */
    void setFadeIn(bool p0);

    /**
     * @note[short] Android
     */
    void setFadeOut(bool p0);

    /**
     * @note[short] Android
     */
    void setFontIdx(int p0);

    /**
     * @note[short] Android
     */
    void setGIdx(int p0);

    /**
     * @note[short] Android
     */
    void setGLineIdx(int p0);

    /**
     * @note[short] Android
     */
    void setGravityFlipped(bool p0);

    /**
     * @note[short] Android
     */
    void setIsLimited(bool p0);

    /**
     * @note[short] Android
     */
    void setLastColorPage(int p0);

    /**
     * @note[short] Android
     */
    void setLevel(GJGameLevel* p0);

    /**
     * @note[short] Android
     */
    void setSongChanged(bool p0);

    /**
     * @note[short] Android
     */
    void setSongOffset(float p0);

    /**
     * @note[short] Android: Rebinded
     */
    void setSongString(gd::string p0);

    /**
     * @note[short] Android
     */
    void setStartDualMode(bool p0);

    /**
     * @note[short] Android
     */
    void setStartMiniMode(bool p0);

    /**
     * @note[short] Android
     */
    void setStartMode(int p0);

    /**
     * @note[short] Android
     */
    void setStartSpeed(int p0);

    /**
     * @note[short] Android
     */
    void setTwoPlayerMode(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn setupColorsFromLegacyMode(cocos2d::CCDictionary* p0);

    /**
     * @note[short] Android
     */
    virtual bool init();
};
