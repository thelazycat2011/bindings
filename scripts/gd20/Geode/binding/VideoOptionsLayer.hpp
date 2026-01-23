#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class VideoOptionsLayer {
public:
    static constexpr auto CLASS_NAME = "VideoOptionsLayer";

    /**
     * @note[short] Android
     */
    static VideoOptionsLayer* create();

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4, float p5, float p6, bool p7);

    /**
     * @note[short] Android
     */
    void onAdvanced(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onApply(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onFullscreen(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onResolutionNext(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onResolutionPrev(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onTextureQualityNext(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onTextureQualityPrev(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn toggleResolution();

    /**
     * @note[short] Android
     */
    TodoReturn updateResolution(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateTextureQuality(int p0);

    /**
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();
};
