#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SongInfoLayer {
public:
    static constexpr auto CLASS_NAME = "SongInfoLayer";

    /**
     * @note[short] Android: Rebinded
     */
    static SongInfoLayer* create(gd::string p0, gd::string p1, gd::string p2, gd::string p3, gd::string p4, gd::string p5);

    /**
     * @note[short] Android
     */
    static SongInfoLayer* create(int p0);

    /**
     * @note[short] Android: Rebinded
     */
    bool init(gd::string p0, gd::string p1, gd::string p2, gd::string p3, gd::string p4, gd::string p5);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDownload(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onFB(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onNG(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onYT(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();
};
