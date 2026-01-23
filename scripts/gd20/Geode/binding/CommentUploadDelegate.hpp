#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CommentUploadDelegate {
public:
    static constexpr auto CLASS_NAME = "CommentUploadDelegate";

    /**
     * @note[short] Android
     */
    TodoReturn commentUploadFailed(int p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn commentUploadFinished(int p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn commentDeleteFailed(int p0, int p1);
};
