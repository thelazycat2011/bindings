#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ObjectManager {
public:
    static constexpr auto CLASS_NAME = "ObjectManager";

    /**
     * @note[short] Android
     */
    TodoReturn animLoaded(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getDefinition(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getGlobalAnimCopy(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn instance();

    /**
     * @note[short] Android
     */
    TodoReturn loadCopiedAnimations();

    /**
     * @note[short] Android
     */
    TodoReturn loadCopiedSets();

    /**
     * @note[short] Android
     */
    TodoReturn purgeObjectManager();

    /**
     * @note[short] Android
     */
    TodoReturn replaceAllOccurencesOfString(cocos2d::CCString* p0, cocos2d::CCString* p1, cocos2d::CCDictionary* p2);

    /**
     * @note[short] Android
     */
    void setLoaded(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn setup();

    /**
     * @note[short] Android
     */
    virtual bool init();
};
