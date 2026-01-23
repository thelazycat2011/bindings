#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class LeaderboardManagerDelegate {
public:
    static constexpr auto CLASS_NAME = "LeaderboardManagerDelegate";

    /**
     * @note[short] Android
     */
    virtual TodoReturn updateUserScoreFinished();

    /**
     * @note[short] Android
     */
    virtual TodoReturn updateUserScoreFailed();

    /**
     * @note[short] Android
     */
    virtual TodoReturn loadLeaderboardFinished(cocos2d::CCArray* p0, char const* p1);

    /**
     * @note[short] Android
     */
    virtual TodoReturn loadLeaderboardFailed(char const* p0);
};
