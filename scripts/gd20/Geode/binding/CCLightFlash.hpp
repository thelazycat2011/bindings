#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCLightFlash {
public:
    static constexpr auto CLASS_NAME = "CCLightFlash";

    /**
     * @note[short] Android
     */
    static CCLightFlash* create();

    /**
     * @note[short] Android
     */
    TodoReturn cleanupFlash();

    /**
     * @note[short] Android
     */
    TodoReturn fadeAndRemove();

    /**
     * @note[short] Android
     */
    TodoReturn getFlashP();

    /**
     * @note[short] Android
     */
    TodoReturn getFlashZ();

    /**
     * @note[short] Android
     */
    TodoReturn playEffect(cocos2d::CCPoint p0, cocos2d::ccColor3B p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12, float p13, float p14, float p15, int p16, bool p17, bool p18, float p19);

    /**
     * @note[short] Android
     */
    TodoReturn removeLights();

    /**
     * @note[short] Android
     */
    void setFlashP(cocos2d::CCNode* p0);

    /**
     * @note[short] Android
     */
    void setFlashZ(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn showFlash();

    /**
     * @note[short] Android
     */
    virtual bool init();
};
