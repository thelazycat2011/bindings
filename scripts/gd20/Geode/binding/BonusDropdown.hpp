#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class BonusDropdown {
public:
    static constexpr auto CLASS_NAME = "BonusDropdown";

    /**
     * @note[short] Android: Rebinded
     */
    static BonusDropdown* create(gd::string p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn getTargetScene();

    /**
     * @note[short] Android: Rebinded
     */
    bool init(gd::string p0, int p1);

    /**
     * @note[short] Android
     */
    void setTargetScene(cocos2d::CCNode* p0);

    /**
     * @note[short] Android
     */
    TodoReturn show();
};
