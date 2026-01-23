#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJGroundLayer {
public:
    static constexpr auto CLASS_NAME = "GJGroundLayer";

    /**
     * @note[short] Android
     */
    static GJGroundLayer* create(int p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn createLine(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn deactivateGround();

    /**
     * @note[short] Android
     */
    TodoReturn fadeInFinished();

    /**
     * @note[short] Android
     */
    TodoReturn getGroundSprite3();

    /**
     * @note[short] Android
     */
    TodoReturn getGroundSprite4();

    /**
     * @note[short] Android
     */
    TodoReturn getGroundWidth();

    /**
     * @note[short] Android
     */
    TodoReturn getGroundY();

    /**
     * @note[short] Android
     */
    TodoReturn getIsActive();

    /**
     * @note[short] Android
     */
    TodoReturn getLine();

    /**
     * @note[short] Android
     */
    TodoReturn hideShadows();

    /**
     * @note[short] Android
     */
    bool init(int p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn loadGroundSprites(int p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn positionGround(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateGround01Color(cocos2d::ccColor3B p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateGround02Color(cocos2d::ccColor3B p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateGroundPos(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateGroundWidth();

    /**
     * @note[short] Android
     */
    TodoReturn updateLineBlend(bool p0);

    /**
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] Android
     */
    virtual TodoReturn showGround();

    /**
     * @note[short] Android
     */
    virtual TodoReturn fadeInGround(float p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn fadeOutGround(float p0);
};
