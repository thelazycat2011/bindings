#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class StoreToolbox {
public:
    static constexpr auto CLASS_NAME = "StoreToolbox";

    /**
     * @note[short] Android
     */
    TodoReturn doICheck();

    /**
     * @note[short] Android
     */
    bool isBillingSupported();

    /**
     * @note[short] Android
     */
    TodoReturn purchaseItem(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn restorePurchases();

    /**
     * @note[short] Android
     */
    TodoReturn setupStore();
};
