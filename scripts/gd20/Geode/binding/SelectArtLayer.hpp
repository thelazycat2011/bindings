#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SelectArtLayer {
public:
    static constexpr auto CLASS_NAME = "SelectArtLayer";

    /**
     * @note[short] Android
     */
    static SelectArtLayer* create(SelectArtType p0);

    /**
     * @note[short] Android
     */
    TodoReturn getDelegate();

    /**
     * @note[short] Android
     */
    TodoReturn getSelected();

    /**
     * @note[short] Android
     */
    TodoReturn getSelectedCustom();

    /**
     * @note[short] Android
     */
    TodoReturn getType();

    /**
     * @note[short] Android
     */
    bool init(SelectArtType p0);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSelectCustom(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn selectArt(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    void setDelegate(SelectArtDelegate* p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateSelectedCustom(int p0);

    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();
};
