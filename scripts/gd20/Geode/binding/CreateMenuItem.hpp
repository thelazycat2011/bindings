#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CreateMenuItem {
public:
    static constexpr auto CLASS_NAME = "CreateMenuItem";

    /**
     * @note[short] Android
     */
    static CreateMenuItem* create(cocos2d::CCNode* p0, cocos2d::CCNode* p1, cocos2d::CCObject* p2, cocos2d::SEL_MenuHandler p3);

    /**
     * @note[short] Android
     */
    TodoReturn getObjectFrame();

    /**
     * @note[short] Android
     */
    TodoReturn getObjectKey();

    /**
     * @note[short] Android
     */
    TodoReturn getPage();

    /**
     * @note[short] Android
     */
    TodoReturn getTab();

    /**
     * @note[short] Android
     */
    bool init(cocos2d::CCNode* p0, cocos2d::CCNode* p1, cocos2d::CCObject* p2, cocos2d::SEL_MenuHandler p3);

    /**
     * @note[short] Android: Rebinded
     */
    void setObjectFrame(gd::string p0);

    /**
     * @note[short] Android
     */
    void setObjectKey(int p0);

    /**
     * @note[short] Android
     */
    void setPage(int p0);

    /**
     * @note[short] Android
     */
    void setTab(int p0);
};
