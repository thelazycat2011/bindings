#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class NumberInputLayer {
public:
    static constexpr auto CLASS_NAME = "NumberInputLayer";

    /**
     * @note[short] Android
     */
    static NumberInputLayer* create();

    /**
     * @note[short] Android
     */
    TodoReturn deleteLast();

    /**
     * @note[short] Android
     */
    TodoReturn getDelegate();

    /**
     * @note[short] Android
     */
    TodoReturn getMaxNumbers();

    /**
     * @note[short] Android
     */
    TodoReturn getMinNumbers();

    /**
     * @note[short] Android
     */
    TodoReturn getNumberString();

    /**
     * @note[short] Android
     */
    TodoReturn inputNumber(int p0);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDone(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onNumber(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void setDelegate(NumberInputDelegate* p0);

    /**
     * @note[short] Android
     */
    void setMaxNumbers(int p0);

    /**
     * @note[short] Android
     */
    void setMinNumbers(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateNumberState();

    /**
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();
};
