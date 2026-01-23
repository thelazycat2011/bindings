#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class sha1 {
public:
    static constexpr auto CLASS_NAME = "sha1";

    /**
     * @note[short] Android
     */
    TodoReturn calc(void const* p0, int p1, unsigned char* p2);

    /**
     * @note[short] Android
     */
    TodoReturn toHexString(unsigned char const* p0, char* p1);
};
