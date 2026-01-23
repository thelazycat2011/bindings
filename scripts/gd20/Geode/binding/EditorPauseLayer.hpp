#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class EditorPauseLayer {
public:
    static constexpr auto CLASS_NAME = "EditorPauseLayer";

    /**
     * @note[short] Android
     */
    static EditorPauseLayer* create(LevelEditorLayer* p0);

    /**
     * @note[short] Android
     */
    TodoReturn doResetUnused();

    /**
     * @note[short] Android
     */
    bool init(LevelEditorLayer* p0);

    /**
     * @note[short] Android
     */
    void onExitEditor(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onExitNoSave(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onHelp(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onKeybindings(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onResetUnusedColors(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onResume(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSave(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSaveAndExit(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSaveAndPlay(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSaveAndTest(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSong(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn playStep2();

    /**
     * @note[short] Android
     */
    TodoReturn playStep3();

    /**
     * @note[short] Android
     */
    TodoReturn saveLevel();

    /**
     * @note[short] Android
     */
    TodoReturn toggleDebugDraw(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn toggleEditorColorMode(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn toggleEditorGrid(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn toggleEditorGround(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn toggleEffectLines(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn toggleFollowPlayer(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn toggleGridOnTop(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn toggleIgnoreDamage(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn togglePlaytestMusic(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn toggleShowObjectInfo(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn uncheckAllPortals(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateSongButton();

    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn customSetup();

    /**
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
};
