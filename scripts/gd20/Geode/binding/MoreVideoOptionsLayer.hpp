#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class MoreVideoOptionsLayer {
public:
    static constexpr auto CLASS_NAME = "MoreVideoOptionsLayer";

    /**
     * @note[short] Android
     */
    static MoreVideoOptionsLayer* create();

    /**
     * @note[short] Android
     */
    TodoReturn addToggle(char const* p0, char const* p1, char const* p2);

    /**
     * @note[short] Android
     */
    TodoReturn countForPage(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn goToPage(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn incrementCountForPage(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn infoKey(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn layerForPage(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn layerKey(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn nextPosition(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn objectKey(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn objectsForPage(int p0);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn pageKey(int p0);

    /**
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();
};
