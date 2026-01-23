#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GameObjectCopy {
public:
    static constexpr auto CLASS_NAME = "GameObjectCopy";

    /**
     * @note[short] Android
     */
    static GameObjectCopy* create(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getObject();

    /**
     * @note[short] Android
     */
    bool init(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn resetObject();
};
