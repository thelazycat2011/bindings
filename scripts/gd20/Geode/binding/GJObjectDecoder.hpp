#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJObjectDecoder {
public:
    static constexpr auto CLASS_NAME = "GJObjectDecoder";

    /**
     * @note[short] Android
     */
    static GJObjectDecoder* sharedDecoder();

    /**
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Android
     */
    virtual TodoReturn getDecodedObject(int p0, DS_Dictionary* p1);
};
