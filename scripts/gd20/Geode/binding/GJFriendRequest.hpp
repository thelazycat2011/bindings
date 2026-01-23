#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJFriendRequest {
public:
    static constexpr auto CLASS_NAME = "GJFriendRequest";

    /**
     * @note[short] Android
     */
    static GJFriendRequest* create();

    /**
     * @note[short] Android
     */
    static GJFriendRequest* create(cocos2d::CCDictionary* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getComment();

    /**
     * @note[short] Android
     */
    TodoReturn getDate();

    /**
     * @note[short] Android
     */
    TodoReturn getFromAccountID();

    /**
     * @note[short] Android
     */
    TodoReturn getIsRead();

    /**
     * @note[short] Android
     */
    TodoReturn getRequestID();

    /**
     * @note[short] Android
     */
    TodoReturn getToAccountID();

    /**
     * @note[short] Android: Rebinded
     */
    void setComment(gd::string p0);

    /**
     * @note[short] Android: Rebinded
     */
    void setDate(gd::string p0);

    /**
     * @note[short] Android
     */
    void setFromAccountID(int p0);

    /**
     * @note[short] Android
     */
    void setIsRead(bool p0);

    /**
     * @note[short] Android
     */
    void setRequestID(int p0);

    /**
     * @note[short] Android
     */
    void setToAccountID(int p0);

    /**
     * @note[short] Android
     */
    virtual bool init();
};
