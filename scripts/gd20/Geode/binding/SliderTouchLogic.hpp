#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SliderTouchLogic {
public:
    static constexpr auto CLASS_NAME = "SliderTouchLogic";

    /**
     * @note[short] Android
     */
    static SliderTouchLogic* create(cocos2d::CCNode* p0, cocos2d::SEL_MenuHandler p1, char const* p2, char const* p3, float p4);

    /**
     * @note[short] Android
     */
    TodoReturn getLiveDragging();

    /**
     * @note[short] Android
     */
    TodoReturn getSliderDelegate();

    /**
     * @note[short] Android
     */
    TodoReturn getThumb();

    /**
     * @note[short] Android
     */
    TodoReturn getTouchOffset();

    /**
     * @note[short] Android
     */
    bool init(cocos2d::CCNode* p0, cocos2d::SEL_MenuHandler p1, char const* p2, char const* p3, float p4);

    /**
     * @note[short] Android
     */
    void setLiveDragging(bool p0);

    /**
     * @note[short] Android
     */
    void setSliderDelegate(Slider* p0);

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
    virtual void registerWithTouchDispatcher();
};
