#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJUserScore {
public:
    static constexpr auto CLASS_NAME = "GJUserScore";

    /**
     * @note[short] Android
     */
    static GJUserScore* create();

    /**
     * @note[short] Android
     */
    static GJUserScore* create(cocos2d::CCDictionary* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getAccIcon();

    /**
     * @note[short] Android
     */
    TodoReturn getAccountID();

    /**
     * @note[short] Android
     */
    TodoReturn getBall();

    /**
     * @note[short] Android
     */
    TodoReturn getBird();

    /**
     * @note[short] Android
     */
    TodoReturn getCoins();

    /**
     * @note[short] Android
     */
    TodoReturn getColor1();

    /**
     * @note[short] Android
     */
    TodoReturn getColor2();

    /**
     * @note[short] Android
     */
    TodoReturn getDart();

    /**
     * @note[short] Android
     */
    TodoReturn getDateString();

    /**
     * @note[short] Android
     */
    TodoReturn getDemons();

    /**
     * @note[short] Android
     */
    TodoReturn getFriendReqSetting();

    /**
     * @note[short] Android
     */
    TodoReturn getFriendStatus();

    /**
     * @note[short] Android
     */
    TodoReturn getGlobalRank();

    /**
     * @note[short] Android
     */
    TodoReturn getGlow();

    /**
     * @note[short] Android
     */
    TodoReturn getIcon();

    /**
     * @note[short] Android
     */
    TodoReturn getIconType();

    /**
     * @note[short] Android
     */
    TodoReturn getIsNewRelation();

    /**
     * @note[short] Android
     */
    TodoReturn getIsToggled();

    /**
     * @note[short] Android
     */
    TodoReturn getLevels();

    /**
     * @note[short] Android
     */
    TodoReturn getMessageSetting();

    /**
     * @note[short] Android
     */
    TodoReturn getNewFriends();

    /**
     * @note[short] Android
     */
    TodoReturn getNewMessages();

    /**
     * @note[short] Android
     */
    TodoReturn getNewRequests();

    /**
     * @note[short] Android
     */
    TodoReturn getRank();

    /**
     * @note[short] Android
     */
    TodoReturn getRobot();

    /**
     * @note[short] Android
     */
    TodoReturn getScoreType();

    /**
     * @note[short] Android
     */
    TodoReturn getShip();

    /**
     * @note[short] Android
     */
    TodoReturn getSpecial();

    /**
     * @note[short] Android
     */
    TodoReturn getStars();

    /**
     * @note[short] Android
     */
    TodoReturn getStreak();

    /**
     * @note[short] Android
     */
    TodoReturn getUserCoins();

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
    TodoReturn getUserUDID();

    /**
     * @note[short] Android
     */
    TodoReturn getYtUsername();

    /**
     * @note[short] Android
     */
    bool isCurrentUser();

    /**
     * @note[short] Android
     */
    TodoReturn mergeWithScore(GJUserScore* p0);

    /**
     * @note[short] Android
     */
    void setAccIcon(int p0);

    /**
     * @note[short] Android
     */
    void setAccountID(int p0);

    /**
     * @note[short] Android
     */
    void setBall(int p0);

    /**
     * @note[short] Android
     */
    void setBird(int p0);

    /**
     * @note[short] Android
     */
    void setCoins(int p0);

    /**
     * @note[short] Android
     */
    void setColor1(int p0);

    /**
     * @note[short] Android
     */
    void setColor2(int p0);

    /**
     * @note[short] Android
     */
    void setDart(int p0);

    /**
     * @note[short] Android: Rebinded
     */
    void setDateString(gd::string p0);

    /**
     * @note[short] Android
     */
    void setDemons(int p0);

    /**
     * @note[short] Android
     */
    void setFriendReqSetting(int p0);

    /**
     * @note[short] Android
     */
    void setFriendStatus(GJFriendStatus p0);

    /**
     * @note[short] Android
     */
    void setGlobalRank(int p0);

    /**
     * @note[short] Android
     */
    void setGlow(bool p0);

    /**
     * @note[short] Android
     */
    void setIcon(int p0);

    /**
     * @note[short] Android
     */
    void setIconType(int p0);

    /**
     * @note[short] Android
     */
    void setIsNewRelation(bool p0);

    /**
     * @note[short] Android
     */
    void setIsToggled(bool p0);

    /**
     * @note[short] Android
     */
    void setLevels(int p0);

    /**
     * @note[short] Android
     */
    void setMessageSetting(int p0);

    /**
     * @note[short] Android
     */
    void setNewFriends(int p0);

    /**
     * @note[short] Android
     */
    void setNewMessages(int p0);

    /**
     * @note[short] Android
     */
    void setNewRequests(int p0);

    /**
     * @note[short] Android
     */
    void setRank(int p0);

    /**
     * @note[short] Android
     */
    void setRobot(int p0);

    /**
     * @note[short] Android
     */
    void setScoreType(GJScoreType p0);

    /**
     * @note[short] Android
     */
    void setShip(int p0);

    /**
     * @note[short] Android
     */
    void setSpecial(int p0);

    /**
     * @note[short] Android
     */
    void setStars(int p0);

    /**
     * @note[short] Android
     */
    void setStreak(int p0);

    /**
     * @note[short] Android
     */
    void setUserCoins(int p0);

    /**
     * @note[short] Android
     */
    void setUserID(int p0);

    /**
     * @note[short] Android: Rebinded
     */
    void setUserName(gd::string p0);

    /**
     * @note[short] Android: Rebinded
     */
    void setUserUDID(gd::string p0);

    /**
     * @note[short] Android: Rebinded
     */
    void setYtUsername(gd::string p0);

    /**
     * @note[short] Android
     */
    virtual bool init();
};
