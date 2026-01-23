#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SetIDLayer {
public:
    static constexpr auto CLASS_NAME = "SetIDLayer";

    /**
     * @note[short] Android
     */
    static SetIDLayer* create(GameObject* p0);

    /**
     * @note[short] Android
     */
    bool init(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn keyBackClicked();

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
    void onUp(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn updateID();
};
