#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJScoreCell {
public:
    static constexpr auto CLASS_NAME = "GJScoreCell";

    /**
     * @note[short] Android: Rebinded
     */
     GJScoreCell(char const* p0, float p1, float p2);

    /**
     * @note[short] Android
     */
    TodoReturn loadFromScore(GJUserScore* p0);

    /**
     * @note[short] Android
     */
    void onBan(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onMoreLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn updateBGColor(int p0);

    /**
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
};
