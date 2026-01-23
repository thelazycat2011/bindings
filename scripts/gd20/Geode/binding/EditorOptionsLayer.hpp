#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class EditorOptionsLayer {
public:
    static constexpr auto CLASS_NAME = "EditorOptionsLayer";

    /**
     * @note[short] Android
     */
    static EditorOptionsLayer* create();

    /**
     * @note[short] Android
     */
    void onButtonRows(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onButtonsPerRow(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    virtual TodoReturn setupOptions();
};
