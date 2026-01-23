#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class LevelFeatureLayer {
public:
    static constexpr auto CLASS_NAME = "LevelFeatureLayer";

    /**
     * @note[short] Android
     */
    static LevelFeatureLayer* create(int p0);

    /**
     * @note[short] Android
     */
    bool init(int p0);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDown(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDown2(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onRemoveValues(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSetFeatured(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onUp(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onUp2(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn updateStars();

    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();
};
