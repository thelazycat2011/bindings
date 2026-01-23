#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CommentCell {
public:
    static constexpr auto CLASS_NAME = "CommentCell";

    /**
     * @note[short] Android: Rebinded
     */
     CommentCell(char const* p0, float p1, float p2);

    /**
     * @note[short] Android
     */
    TodoReturn incrementDislikes();

    /**
     * @note[short] Android
     */
    TodoReturn incrementLikes();

    /**
     * @note[short] Android
     */
    TodoReturn loadFromComment(GJComment* p0);

    /**
     * @note[short] Android
     */
    void onConfirmDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn onDelete();

    /**
     * @note[short] Android
     */
    void onLike(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn onUndelete();

    /**
     * @note[short] Android
     */
    void onUnhide(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn updateBGColor(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateLabelValues();

    /**
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] Android
     */
    virtual TodoReturn likedItem(LikeItemType p0, int p1, bool p2);

    /**
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
};
