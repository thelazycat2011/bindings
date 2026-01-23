#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class MoreOptionsLayer {
public:
    static constexpr auto CLASS_NAME = "MoreOptionsLayer";

    /**
     * @note[short] Android
     */
    static MoreOptionsLayer* create();

    /**
     * @note[short] Android
     */
    TodoReturn addToggle(char const* p0, char const* p1, char const* p2);

    /**
     * @note[short] Android
     */
    TodoReturn countForPage(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn goToPage(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn incrementCountForPage(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn infoKey(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn layerForPage(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn layerKey(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn nextPosition(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn objectKey(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn objectsForPage(int p0);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onGPSignIn(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onGPSignOut(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onKeybindings(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSongBrowser(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn pageKey(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn toggleGP();

    /**
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Android
     */
    virtual TodoReturn textInputShouldOffset(CCTextInputNode* p0, float p1);

    /**
     * @note[short] Android
     */
    virtual TodoReturn textInputReturn(CCTextInputNode* p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn googlePlaySignedIn();
};
