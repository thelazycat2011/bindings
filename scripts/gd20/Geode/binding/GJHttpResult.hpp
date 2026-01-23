#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJHttpResult {
public:
    static constexpr auto CLASS_NAME = "GJHttpResult";

    /**
     * @note[short] Android: Rebinded
     */
    static GJHttpResult* create(bool p0, gd::string p1, gd::string p2, GJHttpType p3);

    /**
     * @note[short] Android
     */
    TodoReturn getRequestTag();

    /**
     * @note[short] Android
     */
    TodoReturn getResult();

    /**
     * @note[short] Android
     */
    TodoReturn getSuccess();

    /**
     * @note[short] Android
     */
    TodoReturn getType();

    /**
     * @note[short] Android: Rebinded
     */
    bool init(bool p0, gd::string p1, gd::string p2, GJHttpType p3);

    /**
     * @note[short] Android: Rebinded
     */
    void setRequestTag(gd::string p0);

    /**
     * @note[short] Android: Rebinded
     */
    void setResult(gd::string p0);

    /**
     * @note[short] Android
     */
    void setSuccess(bool p0);

    /**
     * @note[short] Android
     */
    void setType(GJHttpType p0);
};
