#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class EditButtonBar {
public:
    static constexpr auto CLASS_NAME = "EditButtonBar";

    /**
     * @note[short] Android
     */
    static EditButtonBar* create(cocos2d::CCArray* p0, cocos2d::CCPoint p1, int p2, bool p3, int p4, int p5);

    /**
     * @note[short] Android
     */
    TodoReturn getPage();

    /**
     * @note[short] Android
     */
    TodoReturn goToPage(int p0);

    /**
     * @note[short] Android
     */
    bool init(cocos2d::CCArray* p0, cocos2d::CCPoint p1, int p2, bool p3, int p4, int p5);

    /**
     * @note[short] Android
     */
    TodoReturn loadFromItems(cocos2d::CCArray* p0, int p1, int p2, bool p3);

    /**
     * @note[short] Android
     */
    void onLeft(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onRight(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn reloadItems(int p0, int p1);
};
