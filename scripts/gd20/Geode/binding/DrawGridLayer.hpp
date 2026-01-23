#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class DrawGridLayer {
public:
    static constexpr auto CLASS_NAME = "DrawGridLayer";

    /**
     * @note[short] Android
     */
    static DrawGridLayer* create(cocos2d::CCNode* p0, LevelEditorLayer* p1);

    /**
     * @note[short] Android
     */
    TodoReturn addPlayer2Point(cocos2d::CCPoint p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn addPlayerPoint(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    TodoReturn addToEffects(EffectGameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn addToGuides(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn addToSpeedObjects(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn clearPlayerPoints();

    /**
     * @note[short] Android
     */
    TodoReturn getActiveGridNodeSize();

    /**
     * @note[short] Android
     */
    TodoReturn getEffectSortDirty();

    /**
     * @note[short] Android
     */
    TodoReturn getLastMusicX();

    /**
     * @note[short] Android
     */
    TodoReturn getPortalMinMax(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getTimeNeedsUpdate();

    /**
     * @note[short] Android
     */
    bool init(cocos2d::CCNode* p0, LevelEditorLayer* p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn loadTimeMarkers(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn removeFromEffects(EffectGameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn removeFromGuides(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn removeFromSpeedObjects(GameObject* p0);

    /**
     * @note[short] Android
     */
    void setActiveGridNodeSize(float p0);

    /**
     * @note[short] Android
     */
    void setEffectSortDirty(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn sortSpeedObjects();

    /**
     * @note[short] Android
     */
    TodoReturn timeForXPos(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateTimeMarkers();

    /**
     * @note[short] Android
     */
    TodoReturn xPosForTime(float p0);

    /**
     * @note[short] Android
     */
    virtual void update(float p0);

    /**
     * @note[short] Android
     */
    virtual void draw();
};
