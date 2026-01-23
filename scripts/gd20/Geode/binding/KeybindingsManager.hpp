#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class KeybindingsManager {
public:
    static constexpr auto CLASS_NAME = "KeybindingsManager";

    /**
     * @note[short] Android
     */
    static KeybindingsManager* sharedState();

    /**
     * @note[short] Android
     */
    TodoReturn commandForKey(cocos2d::enumKeyCodes p0, GJKeyGroup p1, bool p2, bool p3, bool p4);

    /**
     * @note[short] Android
     */
    TodoReturn commandForKeyMods(cocos2d::enumKeyCodes p0, GJKeyGroup p1);

    /**
     * @note[short] Android
     */
    TodoReturn commandForKeyNoMods(cocos2d::enumKeyCodes p0, GJKeyGroup p1);

    /**
     * @note[short] Android
     */
    TodoReturn commandToKeyForGroup(GJKeyGroup p0);

    /**
     * @note[short] Android
     */
    TodoReturn dataLoaded(DS_Dictionary* p0);

    /**
     * @note[short] Android
     */
    TodoReturn encodeDataTo(DS_Dictionary* p0);

    /**
     * @note[short] Android
     */
    TodoReturn firstSetup();

    /**
     * @note[short] Android
     */
    TodoReturn getCommandToKeyDict();

    /**
     * @note[short] Android
     */
    TodoReturn getKeyToCommandDict();

    /**
     * @note[short] Android
     */
    TodoReturn groupForCommand(GJKeyCommand p0);

    /**
     * @note[short] Android
     */
    TodoReturn keyForCommand(GJKeyCommand p0);

    /**
     * @note[short] Android
     */
    TodoReturn keyToCommandForGroup(GJKeyGroup p0);

    /**
     * @note[short] Android
     */
    void setCommandToKeyDict(cocos2d::CCDictionary* p0);

    /**
     * @note[short] Android
     */
    void setKeyToCommandDict(cocos2d::CCDictionary* p0);

    /**
     * @note[short] Android
     */
    virtual bool init();
};
