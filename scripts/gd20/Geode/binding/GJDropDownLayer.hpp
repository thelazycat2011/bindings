#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJDropDownLayer {
public:
    static constexpr auto CLASS_NAME = "GJDropDownLayer";

    /**
     * @note[short] Android
     */
    static GJDropDownLayer* create(char const* p0, float p1);

    /**
     * @note[short] Android
     */
    static GJDropDownLayer* create(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getDelegate();

    /**
     * @note[short] Android
     */
    TodoReturn getHideBackButton();

    /**
     * @note[short] Android
     */
    TodoReturn getInternalLayer();

    /**
     * @note[short] Android
     */
    TodoReturn getRemoveOnExit();

    /**
     * @note[short] Android
     */
    bool init(char const* p0, float p1);

    /**
     * @note[short] Android
     */
    bool init(char const* p0);

    /**
     * @note[short] Android
     */
    void setDelegate(GJDropDownLayerDelegate* p0);

    /**
     * @note[short] Android
     */
    void setHideBackButton(bool p0);

    /**
     * @note[short] Android
     */
    void setRemoveOnExit(bool p0);

    /**
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Android
     */
    virtual TodoReturn customSetup();

    /**
     * @note[short] Android
     */
    virtual TodoReturn enterLayer();

    /**
     * @note[short] Android
     */
    virtual TodoReturn exitLayer(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn showLayer(bool p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn hideLayer(bool p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn layerVisible();

    /**
     * @note[short] Android
     */
    virtual TodoReturn layerHidden();

    /**
     * @note[short] Android
     */
    virtual TodoReturn enterAnimFinished();

    /**
     * @note[short] Android
     */
    virtual TodoReturn disableUI();

    /**
     * @note[short] Android
     */
    virtual TodoReturn enableUI();
};
