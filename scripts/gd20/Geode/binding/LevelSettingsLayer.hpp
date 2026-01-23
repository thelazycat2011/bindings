#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class LevelSettingsLayer {
public:
    static constexpr auto CLASS_NAME = "LevelSettingsLayer";

    /**
     * @note[short] Android
     */
    static LevelSettingsLayer* create(LevelSettingsObject* p0, LevelEditorLayer* p1);

    /**
     * @note[short] Android
     */
    TodoReturn audioNext(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn audioPrevious(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn colorSelectClosed(ColorSelectPopup* p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4);

    /**
     * @note[short] Android
     */
    TodoReturn getDelegate();

    /**
     * @note[short] Android
     */
    bool init(LevelSettingsObject* p0, LevelEditorLayer* p1);

    /**
     * @note[short] Android
     */
    void on3DLine(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onBG(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onBGArt(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onCol(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDualMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onG(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onG2(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onGArt(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onGravityFlipped(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onLine(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onMiniMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onObj(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onOpenCustomSong(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSelectFont(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSelectMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSelectSpeed(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSongMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onTwoPlayerMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onTwoPlayerModeInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn selectSong(int p0);

    /**
     * @note[short] Android
     */
    void setDelegate(LevelSettingsDelegate* p0);

    /**
     * @note[short] Android
     */
    TodoReturn showCustomSongSelect();

    /**
     * @note[short] Android
     */
    TodoReturn showPicker(int p0, ColorAction* p1);

    /**
     * @note[short] Android
     */
    TodoReturn updateAudioLabel();

    /**
     * @note[short] Android
     */
    TodoReturn updateColorSprite(ColorChannelSprite* p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateColorSprites();

    /**
     * @note[short] Android
     */
    virtual TodoReturn customSongLayerClosed();

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
    virtual TodoReturn selectArtClosed(SelectArtLayer* p0);
};
