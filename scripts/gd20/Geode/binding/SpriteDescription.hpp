#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SpriteDescription {
public:
    static constexpr auto CLASS_NAME = "SpriteDescription";

    /**
     * @note[short] Android
     */
    TodoReturn createDescription(cocos2d::CCDictionary* p0);

    /**
     * @note[short] Android
     */
    TodoReturn createDescription(DS_Dictionary* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getTransformValues(frameValues* p0);

    /**
     * @note[short] Android
     */
    TodoReturn initDescription(cocos2d::CCDictionary* p0);

    /**
     * @note[short] Android
     */
    TodoReturn initDescription(DS_Dictionary* p0);
};
