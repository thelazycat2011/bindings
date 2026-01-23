#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GooglePlayManager {
public:
    static constexpr auto CLASS_NAME = "GooglePlayManager";

    /**
     * @note[short] Android
     */
    static GooglePlayManager* sharedState();

    /**
     * @note[short] Android
     */
    TodoReturn getDelegate();

    /**
     * @note[short] Android
     */
    TodoReturn getDelegate2();

    /**
     * @note[short] Android
     */
    TodoReturn googlePlaySignedIn();

    /**
     * @note[short] Android
     */
    void setDelegate(GooglePlayDelegate* p0);

    /**
     * @note[short] Android
     */
    void setDelegate2(GooglePlayDelegate* p0);

    /**
     * @note[short] Android
     */
    virtual bool init();
};
