#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "EffectGameObject";

    /**
     * @note[short] Android
     */
    static EffectGameObject* create(char const* p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn customObjectSetup(gd::map<gd::string, gd::string>* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getCopyColorIdx();

    /**
     * @note[short] Android
     */
    TodoReturn getCopyOpacity();

    /**
     * @note[short] Android
     */
    TodoReturn getCopyPlayerColor1();

    /**
     * @note[short] Android
     */
    TodoReturn getCopyPlayerColor2();

    /**
     * @note[short] Android
     */
    TodoReturn getCustomColorBlend();

    /**
     * @note[short] Android
     */
    TodoReturn getEffectDuration();

    /**
     * @note[short] Android
     */
    TodoReturn getEffectOrder();

    /**
     * @note[short] Android
     */
    TodoReturn getEffectSpawnPos();

    /**
     * @note[short] Android
     */
    TodoReturn getEnableGroup();

    /**
     * @note[short] Android
     */
    TodoReturn getFadeInTime();

    /**
     * @note[short] Android
     */
    TodoReturn getFadeOutTime();

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
    TodoReturn getGroupMainOnly();

    /**
     * @note[short] Android
     */
    TodoReturn getGroupSecondaryOnly();

    /**
     * @note[short] Android
     */
    TodoReturn getHoldTime();

    /**
     * @note[short] Android
     */
    TodoReturn getHSVValue();

    /**
     * @note[short] Android
     */
    TodoReturn getMoveCommandEasing();

    /**
     * @note[short] Android
     */
    TodoReturn getMoveCommandPos();

    /**
     * @note[short] Android
     */
    TodoReturn getMoveLockX();

    /**
     * @note[short] Android
     */
    TodoReturn getMoveLockY();

    /**
     * @note[short] Android
     */
    TodoReturn getNextObject();

    /**
     * @note[short] Android
     */
    TodoReturn getPulseMode();

    /**
     * @note[short] Android
     */
    TodoReturn getPulseTargetType();

    /**
     * @note[short] Android
     */
    TodoReturn getSaveString();

    /**
     * @note[short] Android
     */
    TodoReturn getSpawnDelay();

    /**
     * @note[short] Android
     */
    TodoReturn getStartTime();

    /**
     * @note[short] Android
     */
    TodoReturn getTargetColorIndex();

    /**
     * @note[short] Android
     */
    TodoReturn getTargetID();

    /**
     * @note[short] Android
     */
    TodoReturn getTargetOpacity();

    /**
     * @note[short] Android
     */
    TodoReturn getTintColor();

    /**
     * @note[short] Android
     */
    TodoReturn getTintGround();

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
    TodoReturn getWasProcessed();

    /**
     * @note[short] Android
     */
    bool init(char const* p0);

    /**
     * @note[short] Android
     */
    void setCopyColorIdx(int p0);

    /**
     * @note[short] Android
     */
    void setCopyOpacity(bool p0);

    /**
     * @note[short] Android
     */
    void setCopyPlayerColor1(bool p0);

    /**
     * @note[short] Android
     */
    void setCopyPlayerColor2(bool p0);

    /**
     * @note[short] Android
     */
    void setCustomColorBlend(bool p0);

    /**
     * @note[short] Android
     */
    void setEffectDuration(float p0);

    /**
     * @note[short] Android
     */
    void setEffectOrder(int p0);

    /**
     * @note[short] Android
     */
    void setEffectSpawnPos(float p0);

    /**
     * @note[short] Android
     */
    void setEnableGroup(bool p0);

    /**
     * @note[short] Android
     */
    void setFadeInTime(float p0);

    /**
     * @note[short] Android
     */
    void setFadeOutTime(float p0);

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
    void setGroupMainOnly(bool p0);

    /**
     * @note[short] Android
     */
    void setGroupSecondaryOnly(bool p0);

    /**
     * @note[short] Android
     */
    void setHoldTime(float p0);

    /**
     * @note[short] Android
     */
    void setHSVValue(cocos2d::ccHSVValue p0);

    /**
     * @note[short] Android
     */
    void setMoveCommandEasing(int p0);

    /**
     * @note[short] Android
     */
    void setMoveCommandPos(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    void setMoveLockX(bool p0);

    /**
     * @note[short] Android
     */
    void setMoveLockY(bool p0);

    /**
     * @note[short] Android
     */
    void setNextObject(EffectGameObject* p0);

    /**
     * @note[short] Android
     */
    void setPulseMode(int p0);

    /**
     * @note[short] Android
     */
    void setPulseTargetType(int p0);

    /**
     * @note[short] Android
     */
    void setSpawnDelay(float p0);

    /**
     * @note[short] Android
     */
    void setStartTime(float p0);

    /**
     * @note[short] Android
     */
    void setTargetID(int p0);

    /**
     * @note[short] Android
     */
    void setTargetOpacity(float p0);

    /**
     * @note[short] Android
     */
    void setTintColor(cocos2d::ccColor3B p0);

    /**
     * @note[short] Android
     */
    void setTintGround(bool p0);

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
    void setWasProcessed(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn triggerObject();

    /**
     * @note[short] Android
     */
    TodoReturn updateSpecialColor();

    /**
     * @note[short] Android
     */
    virtual TodoReturn customSetup();

    /**
     * @note[short] Android
     */
    virtual TodoReturn spawnXPosition();
};
