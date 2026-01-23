#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class EndLevelLayer {
public:
    static constexpr auto CLASS_NAME = "EndLevelLayer";

    /**
     * @note[short] Android
     */
    static EndLevelLayer* create();

    /**
     * @note[short] Android
     */
    TodoReturn coinEnterFinished(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    TodoReturn coinEnterFinishedO(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getCoinString();

    /**
     * @note[short] Android
     */
    TodoReturn getEndText();

    /**
     * @note[short] Android
     */
    TodoReturn goEdit();

    /**
     * @note[short] Android
     */
    void onEdit(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onEveryplay(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onMenu(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onReplay(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn playCoinEffect(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn playStarEffect(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn starEnterFinished();

    /**
     * @note[short] Android
     */
    TodoReturn tryShowBanner(float p0);

    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn customSetup();

    /**
     * @note[short] Android
     */
    virtual TodoReturn showLayer(bool p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn enterAnimFinished();

    /**
     * @note[short] Android
     */
    virtual void keyUp(cocos2d::enumKeyCodes p0);
};
