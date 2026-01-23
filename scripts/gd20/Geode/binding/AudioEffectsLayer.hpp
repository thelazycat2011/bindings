#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class AudioEffectsLayer {
public:
    static constexpr auto CLASS_NAME = "AudioEffectsLayer";

    /**
     * @note[short] Android: Rebinded
     */
    static AudioEffectsLayer* create(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn audioStep(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn getAudioScale();

    /**
     * @note[short] Android
     */
    TodoReturn getBGSquare();

    /**
     * @note[short] Android
     */
    TodoReturn getRainActive();

    /**
     * @note[short] Android
     */
    TodoReturn goingDown();

    /**
     * @note[short] Android: Rebinded
     */
    bool init(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn resetAudioVars();

    /**
     * @note[short] Android
     */
    void setRainActive(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn triggerEffect(float p0);

    /**
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] Android
     */
    virtual void updateTweenAction(float p0, char const* p1);
};
