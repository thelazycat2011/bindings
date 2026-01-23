#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GameToolbox {
public:
    static constexpr auto CLASS_NAME = "GameToolbox";

    /**
     * @note[short] Android
     */
    static TodoReturn addBackButton(cocos2d::CCLayer* p0, cocos2d::CCMenuItem* p1);

    /**
     * @note[short] Android
     */
    static TodoReturn addRThumbScrollButton(cocos2d::CCLayer* p0);

    /**
     * @note[short] Android
     */
    static TodoReturn alignItemsHorisontally(cocos2d::CCArray* p0, float p1, cocos2d::CCPoint p2);

    /**
     * @note[short] Android
     */
    static TodoReturn alignItemsVertically(cocos2d::CCArray* p0, float p1, cocos2d::CCPoint p2);

    /**
     * @note[short] Android: Rebinded
     */
    static TodoReturn createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4, cocos2d::CCNode* p5, cocos2d::CCNode* p6, float p7, float p8, float p9, cocos2d::CCPoint p10, char const* p11, bool p12, int p13);

    /**
     * @note[short] Android: Rebinded
     */
    static TodoReturn createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4, cocos2d::CCNode* p5, cocos2d::CCNode* p6);

    /**
     * @note[short] Android
     */
    static TodoReturn doWeHaveInternet();

    /**
     * @note[short] Android
     */
    static TodoReturn getDropActionWDelay(float p0, float p1, float p2, cocos2d::CCNode* p3, cocos2d::SEL_CallFunc p4);

    /**
     * @note[short] Android
     */
    static TodoReturn getDropActionWEnd(float p0, float p1, float p2, cocos2d::CCAction* p3, float p4);

    /**
     * @note[short] Android
     */
    static TodoReturn getRelativeOffset(GameObject* p0, cocos2d::CCPoint p1);

    /**
     * @note[short] Android
     */
    static TodoReturn getResponse(cocos2d::extension::CCHttpResponse* p0);

    /**
     * @note[short] Android: Rebinded
     */
    static TodoReturn hsvFromString(gd::string p0, char const* p1);

    /**
     * @note[short] Android
     */
    static bool isIOS();

    /**
     * @note[short] Android
     */
    static TodoReturn mergeDictsSaveLargestInt(cocos2d::CCDictionary* p0, cocos2d::CCDictionary* p1);

    /**
     * @note[short] Android
     */
    static TodoReturn multipliedColorValue(cocos2d::ccColor3B p0, cocos2d::ccColor3B p1, float p2);

    /**
     * @note[short] Android
     */
    static TodoReturn openAppPage();

    /**
     * @note[short] Android: Rebinded
     */
    static TodoReturn openRateURL(gd::string p0, gd::string p1);

    /**
     * @note[short] Android
     */
    static TodoReturn postClipVisit();

    /**
     * @note[short] Android
     */
    static TodoReturn preVisitWithClippingRect(cocos2d::CCNode* p0, cocos2d::CCRect p1, cocos2d::CCNode* p2);

    /**
     * @note[short] Android
     */
    static TodoReturn stringFromHSV(cocos2d::ccHSVValue p0, char const* p1);

    /**
     * @note[short] Android: Rebinded
     */
    static TodoReturn stringSetupToDict(gd::string p0, char const* p1);

    /**
     * @note[short] Android: Rebinded
     */
    static TodoReturn stringSetupToMap(gd::string p0, char const* p1);

    /**
     * @note[short] Android
     */
    static TodoReturn transformColor(cocos2d::ccColor3B const& p0, cocos2d::ccHSVValue p1);

    /**
     * @note[short] Android
     */
    static TodoReturn transformColor(cocos2d::ccColor3B const& p0, float p1, float p2, float p3);
};
