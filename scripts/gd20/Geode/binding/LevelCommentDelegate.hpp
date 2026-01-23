#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class LevelCommentDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelCommentDelegate";

    /**
     * @note[short] Android
     */
    virtual TodoReturn loadCommentsFinished(cocos2d::CCArray* p0, char const* p1);

    /**
     * @note[short] Android
     */
    virtual TodoReturn loadCommentsFailed(char const* p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn updateUserScoreFinished();

    /**
     * @note[short] Android: Rebinded
     */
    virtual TodoReturn setupPageInfo(gd::string p0, char const* p1);
};
