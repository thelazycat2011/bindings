#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class RateLevelLayer {
public:
    static constexpr auto CLASS_NAME = "RateLevelLayer";

    /**
     * @note[short] Android
     */
    static RateLevelLayer* create(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getDelegate();

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
    void onRate(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn selectRating(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    void setDelegate(RateLevelDelegate* p0);

    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();
};
