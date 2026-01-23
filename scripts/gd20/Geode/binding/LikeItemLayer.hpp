#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class LikeItemLayer {
public:
    static constexpr auto CLASS_NAME = "LikeItemLayer";

    /**
     * @note[short] Android
     */
    static LikeItemLayer* create(LikeItemType p0, int p1, int p2);

    /**
     * @note[short] Android
     */
    TodoReturn getDelegate();

    /**
     * @note[short] Android
     */
    bool init(LikeItemType p0, int p1, int p2);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDislike(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onLike(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void setDelegate(LikeItemDelegate* p0);

    /**
     * @note[short] Android
     */
    TodoReturn triggerLike(bool p0);

    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();
};
