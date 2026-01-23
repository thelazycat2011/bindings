#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJUserMessage {
public:
    static constexpr auto CLASS_NAME = "GJUserMessage";

    /**
     * @note[short] Android
     */
    static GJUserMessage* create();

    /**
     * @note[short] Android
     */
    static GJUserMessage* create(cocos2d::CCDictionary* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getAccountID();

    /**
     * @note[short] Android
     */
    TodoReturn getBody();

    /**
     * @note[short] Android
     */
    TodoReturn getDate();

    /**
     * @note[short] Android
     */
    TodoReturn getIsRead();

    /**
     * @note[short] Android
     */
    TodoReturn getIsSender();

    /**
     * @note[short] Android
     */
    TodoReturn getIsToggled();

    /**
     * @note[short] Android
     */
    TodoReturn getMessageID();

    /**
     * @note[short] Android
     */
    TodoReturn getSubject();

    /**
     * @note[short] Android
     */
    TodoReturn getUserID();

    /**
     * @note[short] Android
     */
    TodoReturn getUserName();

    /**
     * @note[short] Android
     */
    void setAccountID(int p0);

    /**
     * @note[short] Android: Rebinded
     */
    void setBody(gd::string p0);

    /**
     * @note[short] Android: Rebinded
     */
    void setDate(gd::string p0);

    /**
     * @note[short] Android
     */
    void setIsRead(bool p0);

    /**
     * @note[short] Android
     */
    void setIsSender(bool p0);

    /**
     * @note[short] Android
     */
    void setIsToggled(bool p0);

    /**
     * @note[short] Android
     */
    void setMessageID(int p0);

    /**
     * @note[short] Android: Rebinded
     */
    void setSubject(gd::string p0);

    /**
     * @note[short] Android
     */
    void setUserID(int p0);

    /**
     * @note[short] Android: Rebinded
     */
    void setUserName(gd::string p0);

    /**
     * @note[short] Android
     */
    virtual bool init();
};
