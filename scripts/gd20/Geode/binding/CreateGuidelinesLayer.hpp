#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CreateGuidelinesLayer {
public:
    static constexpr auto CLASS_NAME = "CreateGuidelinesLayer";

    /**
     * @note[short] Android
     */
    static CreateGuidelinesLayer* create(LevelSettingsObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn doClearGuidelines();

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn getMergedRecordString(gd::string p0, gd::string p1);

    /**
     * @note[short] Android
     */
    bool init(LevelSettingsObject* p0);

    /**
     * @note[short] Android
     */
    void onClearGuidelines(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onStop(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn toggleItems(bool p0);

    /**
     * @note[short] Android
     */
    virtual void update(float p0);

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
    virtual void keyBackClicked();

    /**
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    virtual void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    virtual void onRecord(cocos2d::CCObject* sender);
};
