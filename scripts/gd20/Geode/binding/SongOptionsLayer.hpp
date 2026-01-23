#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SongOptionsLayer {
public:
    static constexpr auto CLASS_NAME = "SongOptionsLayer";

    /**
     * @note[short] Android
     */
    static SongOptionsLayer* create(LevelSettingsObject* p0);

    /**
     * @note[short] Android
     */
    bool init(LevelSettingsObject* p0);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onFadeIn(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onFadeOut(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPlayback(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn updatePlaybackBtn();

    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();
};
