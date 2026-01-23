#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class BoomScrollLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "BoomScrollLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(BoomScrollLayer, cocos2d::CCLayer)

    /**
     * @note[short] Android
     */
    static BoomScrollLayer* create(cocos2d::CCArray* p0, int p1, bool p2, cocos2d::CCArray* p3, DynamicScrollDelegate* p4);

    /**
     * @note[short] Android
     */
    static BoomScrollLayer* create(cocos2d::CCArray* p0, int p1, bool p2);

    /**
     * @note[short] Android
     */
    TodoReturn addPage(cocos2d::CCLayer* p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn addPage(cocos2d::CCLayer* p0);

    /**
     * @note[short] Android
     */
    TodoReturn cancelAndStoleTouch(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Android
     */
    TodoReturn claimTouch(cocos2d::CCTouch* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getCurrentScreen();

    /**
     * @note[short] Android
     */
    TodoReturn getDelegate();

    /**
     * @note[short] Android
     */
    TodoReturn getInternalLayer();

    /**
     * @note[short] Android
     */
    TodoReturn getMarginOffset();

    /**
     * @note[short] Android
     */
    TodoReturn getMinimumTouchLengthToChangePage();

    /**
     * @note[short] Android
     */
    TodoReturn getMinimumTouchLengthToSlide();

    /**
     * @note[short] Android
     */
    TodoReturn getMinTouchSpeed();

    /**
     * @note[short] Android
     */
    TodoReturn getMovingToPage();

    /**
     * @note[short] Android
     */
    TodoReturn getOnlyShowOnePage();

    /**
     * @note[short] Android
     */
    TodoReturn getPage(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getpages();

    /**
     * @note[short] Android
     */
    TodoReturn getPagesIndicatorNormalColor();

    /**
     * @note[short] Android
     */
    TodoReturn getPagesIndicatorSelectedColor();

    /**
     * @note[short] Android
     */
    TodoReturn getPagesWidthOffset();

    /**
     * @note[short] Android
     */
    TodoReturn getRelativePageForNum(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getRelativePosForPage(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getScrollArea();

    /**
     * @note[short] Android
     */
    TodoReturn getShowPagesIndicator();

    /**
     * @note[short] Android
     */
    TodoReturn getStealTouches();

    /**
     * @note[short] Android
     */
    TodoReturn getTotalPages();

    /**
     * @note[short] Android
     */
    TodoReturn getTouchSpeedFast();

    /**
     * @note[short] Android
     */
    TodoReturn getTouchSpeedMid();

    /**
     * @note[short] Android
     */
    bool init(cocos2d::CCArray* p0, int p1, bool p2, cocos2d::CCArray* p3, DynamicScrollDelegate* p4);

    /**
     * @note[short] Android
     */
    TodoReturn instantMoveToPage(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn moveToPage(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn moveToPageEnded();

    /**
     * @note[short] Android
     */
    TodoReturn pageNumberForPosition(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    TodoReturn positionForPageWithNumber(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn quickUpdate();

    /**
     * @note[short] Android
     */
    TodoReturn removePage(cocos2d::CCLayer* p0);

    /**
     * @note[short] Android
     */
    TodoReturn removePageWithNumber(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn repositionPagesLooped();

    /**
     * @note[short] Android
     */
    TodoReturn selectPage(int p0);

    /**
     * @note[short] Android
     */
    void setDelegate(BoomScrollLayerDelegate* p0);

    /**
     * @note[short] Android
     */
    void setDotScale(float p0);

    /**
     * @note[short] Android
     */
    void setMarginOffset(float p0);

    /**
     * @note[short] Android
     */
    void setMinimumTouchLengthToChangePage(float p0);

    /**
     * @note[short] Android
     */
    void setMinimumTouchLengthToSlide(float p0);

    /**
     * @note[short] Android
     */
    void setMinTouchSpeed(float p0);

    /**
     * @note[short] Android
     */
    void setOnlyShowOnePage(bool p0);

    /**
     * @note[short] Android
     */
    void setPagesIndicatorNormalColor(cocos2d::ccColor4B p0);

    /**
     * @note[short] Android
     */
    void setPagesIndicatorPosition(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    void setPagesIndicatorSelectedColor(cocos2d::ccColor4B p0);

    /**
     * @note[short] Android
     */
    void setPagesWidthOffset(float p0);

    /**
     * @note[short] Android
     */
    void setScrollArea(cocos2d::CCRect p0);

    /**
     * @note[short] Android
     */
    void setShowPagesIndicator(bool p0);

    /**
     * @note[short] Android
     */
    void setStealTouches(bool p0);

    /**
     * @note[short] Android
     */
    void setTouchSpeedFast(float p0);

    /**
     * @note[short] Android
     */
    void setTouchSpeedMid(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn setupDynamicScrolling(cocos2d::CCArray* p0, DynamicScrollDelegate* p1);

    /**
     * @note[short] Android
     */
    TodoReturn togglePageIndicators(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateDots(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn updatePages();

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
    cocos2d::CCArray* m_pageIndicators;
    int m_lastScreen;
    float _0x120;
    float _0x124;
    bool m_looped;
    DynamicScrollDelegate* m_dynamicScrollDelegate;
    cocos2d::CCArray* m_objects;
    bool m_dynamicScrolling;
    int _0x138;
    bool _0x13c;
    cocos2d::CCTouch* m_touch;
    cocos2d::CCArray* m_pages;
    double _0x148;
    cocos2d::CCPoint _0x150;
    ExtendedLayer* m_mainLayer;
    cocos2d::CCRect m_scrollArea;
    float m_minTouchSpeed;
    float m_touchSpeedFast;
    float m_touchSpeedMid;
    BoomScrollLayerDelegate* m_delegate;
    bool m_movingToPage;
    bool m_onlyShowOnePage;
    float m_minimumTouchLengthToSlide;
    float m_minimumTouchLengthToChangePage;
    float m_marginOffset;
    bool m_stealTouches;
    bool m_showPagesIndicator;
    cocos2d::CCPoint m_pagesIndicatorPosition;
    cocos2d::ccColor4B m_pagesIndicatorSelectedColor;
    cocos2d::ccColor4B m_pagesIndicatorNormalColor;
    int m_currentScreen;
    float m_pagesWidthOffset;
};
