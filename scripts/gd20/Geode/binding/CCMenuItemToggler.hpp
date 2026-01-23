#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCMenuItemToggler : public cocos2d::CCMenuItem {
public:
    static constexpr auto CLASS_NAME = "CCMenuItemToggler";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCMenuItemToggler, cocos2d::CCMenuItem)

    /**
     * @note[short] Android
     */
    static CCMenuItemToggler* create(cocos2d::CCNode* p0, cocos2d::CCNode* p1, cocos2d::CCObject* p2, cocos2d::SEL_MenuHandler p3);

    /**
     * @note[short] Android
     */
    TodoReturn activeItem();

    /**
     * @note[short] Android
     */
    TodoReturn getDontToggle();

    /**
     * @note[short] Android
     */
    TodoReturn getIsActive();

    /**
     * @note[short] Android
     */
    TodoReturn getNormalButton();

    /**
     * @note[short] Android
     */
    TodoReturn getSelectedButton();

    /**
     * @note[short] Android
     */
    bool init(cocos2d::CCNode* p0, cocos2d::CCNode* p1, cocos2d::CCObject* p2, cocos2d::SEL_MenuHandler p3);

    /**
     * @note[short] Android
     */
    TodoReturn normalTouch(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn selectedTouch(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    void setDontToggle(bool p0);

    /**
     * @note[short] Android
     */
    void setSizeMult(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn toggle(bool p0);

    /**
     * @note[short] Android
     */
    virtual void activate();

    /**
     * @note[short] Android
     */
    virtual void selected();

    /**
     * @note[short] Android
     */
    virtual void unselected();

    /**
     * @note[short] Android
     */
    virtual void setEnabled(bool p0);
};
