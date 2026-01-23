#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCScrollLayerExt {
public:
    static constexpr auto CLASS_NAME = "CCScrollLayerExt";

    /**
     * @note[short] Android: Rebinded
     */
     CCScrollLayerExt(cocos2d::CCRect p0);

    /**
     * @note[short] Android
     */
    TodoReturn constraintContent();

    /**
     * @note[short] Android
     */
    TodoReturn getBottomPadding();

    /**
     * @note[short] Android
     */
    TodoReturn getClipsToBounds();

    /**
     * @note[short] Android
     */
    TodoReturn getContentLayer();

    /**
     * @note[short] Android
     */
    TodoReturn getHorizontalScrollIndicator();

    /**
     * @note[short] Android
     */
    TodoReturn getIsScrolling();

    /**
     * @note[short] Android
     */
    TodoReturn getIsTouch();

    /**
     * @note[short] Android
     */
    TodoReturn getLockHorizontal();

    /**
     * @note[short] Android
     */
    TodoReturn getLockVertical();

    /**
     * @note[short] Android
     */
    TodoReturn getMaxOffsetBottom();

    /**
     * @note[short] Android
     */
    TodoReturn getMaxOffsetTop();

    /**
     * @note[short] Android
     */
    TodoReturn getMaxY();

    /**
     * @note[short] Android
     */
    TodoReturn getMinY();

    /**
     * @note[short] Android
     */
    TodoReturn getScrollDelegate();

    /**
     * @note[short] Android
     */
    TodoReturn getShowsHorizontalScrollIndicator();

    /**
     * @note[short] Android
     */
    TodoReturn getShowsVerticalScrollIndicator();

    /**
     * @note[short] Android
     */
    TodoReturn getTopPadding();

    /**
     * @note[short] Android
     */
    TodoReturn getTouchDispatch();

    /**
     * @note[short] Android
     */
    TodoReturn getVerticalScrollIndicator();

    /**
     * @note[short] Android
     */
    TodoReturn moveToTop();

    /**
     * @note[short] Android
     */
    TodoReturn moveToTopWithOffset(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn scrollingEnd();

    /**
     * @note[short] Android
     */
    TodoReturn scrollLayer(float p0);

    /**
     * @note[short] Android
     */
    void setBottomPadding(float p0);

    /**
     * @note[short] Android
     */
    void setClipsToBounds(bool p0);

    /**
     * @note[short] Android
     */
    void setContentLayer(cocos2d::CCLayerColor* p0);

    /**
     * @note[short] Android
     */
    void setContentLayerSize(cocos2d::CCSize p0);

    /**
     * @note[short] Android
     */
    void setContentOffset(cocos2d::CCPoint p0, bool p1);

    /**
     * @note[short] Android
     */
    void setHorizontalScrollIndicator(cocos2d::CCLayerColor* p0);

    /**
     * @note[short] Android
     */
    void setIsScrolling(bool p0);

    /**
     * @note[short] Android
     */
    void setIsTouch(bool p0);

    /**
     * @note[short] Android
     */
    void setLockHorizontal(bool p0);

    /**
     * @note[short] Android
     */
    void setLockVertical(bool p0);

    /**
     * @note[short] Android
     */
    void setMaxOffsetBottom(float p0);

    /**
     * @note[short] Android
     */
    void setMaxOffsetTop(float p0);

    /**
     * @note[short] Android
     */
    void setScrollDelegate(CCScrollLayerExtDelegate* p0);

    /**
     * @note[short] Android
     */
    void setShowsHorizontalScrollIndicator(bool p0);

    /**
     * @note[short] Android
     */
    void setShowsVerticalScrollIndicator(bool p0);

    /**
     * @note[short] Android
     */
    void setTopPadding(float p0);

    /**
     * @note[short] Android
     */
    void setTouchDispatch(bool p0);

    /**
     * @note[short] Android
     */
    void setVerticalScrollIndicator(cocos2d::CCLayerColor* p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateIndicators(float p0);

    /**
     * @note[short] Android
     */
    virtual void visit();

    /**
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] Android
     */
    virtual TodoReturn preVisitWithClippingRect(cocos2d::CCRect p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn postVisit();
};
