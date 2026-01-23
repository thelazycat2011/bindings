#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class FriendsProfilePage {
public:
    static constexpr auto CLASS_NAME = "FriendsProfilePage";

    /**
     * @note[short] Android
     */
    static FriendsProfilePage* create(UserListType p0);

    /**
     * @note[short] Android
     */
    bool init(UserListType p0);

    /**
     * @note[short] Android
     */
    void onBlocked(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn setupUsersBrowser(cocos2d::CCArray* p0, UserListType p1);

    /**
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Android
     */
    virtual TodoReturn getUserListFinished(cocos2d::CCArray* p0, UserListType p1);

    /**
     * @note[short] Android
     */
    virtual TodoReturn getUserListFailed(UserListType p0, GJErrorCode p1);

    /**
     * @note[short] Android
     */
    virtual TodoReturn userListChanged(cocos2d::CCArray* p0, UserListType p1);

    /**
     * @note[short] Android
     */
    virtual TodoReturn forceReloadList(UserListType p0);
};
