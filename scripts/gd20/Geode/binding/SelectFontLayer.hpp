#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SelectFontLayer {
public:
    static constexpr auto CLASS_NAME = "SelectFontLayer";

    /**
     * @note[short] Android
     */
    static SelectFontLayer* create(LevelEditorLayer* p0);

    /**
     * @note[short] Android
     */
    bool init(LevelEditorLayer* p0);

    /**
     * @note[short] Android
     */
    void onChangeFont(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn updateFontLabel();

    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();
};
