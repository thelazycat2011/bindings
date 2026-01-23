#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ShareLevelLayer {
public:
    static constexpr auto CLASS_NAME = "ShareLevelLayer";

    /**
     * @note[short] Android
     */
    static ShareLevelLayer* create(GJGameLevel* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getStarsButton(int p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2, float p3);

    /**
     * @note[short] Android
     */
    bool init(GJGameLevel* p0);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onShare(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn selectRating(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn setupStars();

    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();
};
