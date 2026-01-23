#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJComment {
public:
    static constexpr auto CLASS_NAME = "GJComment";

    /**
     * @note[short] Android
     */
    static GJComment* create();

    /**
     * @note[short] Android
     */
    static GJComment* create(cocos2d::CCDictionary* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getAccountID();

    /**
     * @note[short] Android
     */
    TodoReturn getComment();

    /**
     * @note[short] Android
     */
    TodoReturn getCommentDate();

    /**
     * @note[short] Android
     */
    TodoReturn getCommentID();

    /**
     * @note[short] Android
     */
    TodoReturn getDeleted();

    /**
     * @note[short] Android
     */
    TodoReturn getDislikes();

    /**
     * @note[short] Android
     */
    TodoReturn getIsHidden();

    /**
     * @note[short] Android
     */
    TodoReturn getLevelID();

    /**
     * @note[short] Android
     */
    TodoReturn getLikes();

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
    void setComment(gd::string p0);

    /**
     * @note[short] Android: Rebinded
     */
    void setCommentDate(gd::string p0);

    /**
     * @note[short] Android
     */
    void setCommentID(long p0);

    /**
     * @note[short] Android
     */
    void setDeleted(bool p0);

    /**
     * @note[short] Android
     */
    void setDislikes(int p0);

    /**
     * @note[short] Android
     */
    void setIsHidden(bool p0);

    /**
     * @note[short] Android
     */
    void setLevelID(int p0);

    /**
     * @note[short] Android
     */
    void setLikes(int p0);

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
