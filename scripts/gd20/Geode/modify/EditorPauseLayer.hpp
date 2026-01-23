#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EditorPauseLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_doResetUnused
		#define GEODE_STATICS_doResetUnused
		GEODE_AS_STATIC_FUNCTION(doResetUnused) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onExitEditor
		#define GEODE_STATICS_onExitEditor
		GEODE_AS_STATIC_FUNCTION(onExitEditor) 
	#endif

	#ifndef GEODE_STATICS_onExitNoSave
		#define GEODE_STATICS_onExitNoSave
		GEODE_AS_STATIC_FUNCTION(onExitNoSave) 
	#endif

	#ifndef GEODE_STATICS_onHelp
		#define GEODE_STATICS_onHelp
		GEODE_AS_STATIC_FUNCTION(onHelp) 
	#endif

	#ifndef GEODE_STATICS_onKeybindings
		#define GEODE_STATICS_onKeybindings
		GEODE_AS_STATIC_FUNCTION(onKeybindings) 
	#endif

	#ifndef GEODE_STATICS_onOptions
		#define GEODE_STATICS_onOptions
		GEODE_AS_STATIC_FUNCTION(onOptions) 
	#endif

	#ifndef GEODE_STATICS_onResetUnusedColors
		#define GEODE_STATICS_onResetUnusedColors
		GEODE_AS_STATIC_FUNCTION(onResetUnusedColors) 
	#endif

	#ifndef GEODE_STATICS_onResume
		#define GEODE_STATICS_onResume
		GEODE_AS_STATIC_FUNCTION(onResume) 
	#endif

	#ifndef GEODE_STATICS_onSave
		#define GEODE_STATICS_onSave
		GEODE_AS_STATIC_FUNCTION(onSave) 
	#endif

	#ifndef GEODE_STATICS_onSaveAndExit
		#define GEODE_STATICS_onSaveAndExit
		GEODE_AS_STATIC_FUNCTION(onSaveAndExit) 
	#endif

	#ifndef GEODE_STATICS_onSaveAndPlay
		#define GEODE_STATICS_onSaveAndPlay
		GEODE_AS_STATIC_FUNCTION(onSaveAndPlay) 
	#endif

	#ifndef GEODE_STATICS_onSaveAndTest
		#define GEODE_STATICS_onSaveAndTest
		GEODE_AS_STATIC_FUNCTION(onSaveAndTest) 
	#endif

	#ifndef GEODE_STATICS_onSong
		#define GEODE_STATICS_onSong
		GEODE_AS_STATIC_FUNCTION(onSong) 
	#endif

	#ifndef GEODE_STATICS_playStep2
		#define GEODE_STATICS_playStep2
		GEODE_AS_STATIC_FUNCTION(playStep2) 
	#endif

	#ifndef GEODE_STATICS_playStep3
		#define GEODE_STATICS_playStep3
		GEODE_AS_STATIC_FUNCTION(playStep3) 
	#endif

	#ifndef GEODE_STATICS_saveLevel
		#define GEODE_STATICS_saveLevel
		GEODE_AS_STATIC_FUNCTION(saveLevel) 
	#endif

	#ifndef GEODE_STATICS_toggleDebugDraw
		#define GEODE_STATICS_toggleDebugDraw
		GEODE_AS_STATIC_FUNCTION(toggleDebugDraw) 
	#endif

	#ifndef GEODE_STATICS_toggleEditorColorMode
		#define GEODE_STATICS_toggleEditorColorMode
		GEODE_AS_STATIC_FUNCTION(toggleEditorColorMode) 
	#endif

	#ifndef GEODE_STATICS_toggleEditorGrid
		#define GEODE_STATICS_toggleEditorGrid
		GEODE_AS_STATIC_FUNCTION(toggleEditorGrid) 
	#endif

	#ifndef GEODE_STATICS_toggleEditorGround
		#define GEODE_STATICS_toggleEditorGround
		GEODE_AS_STATIC_FUNCTION(toggleEditorGround) 
	#endif

	#ifndef GEODE_STATICS_toggleEffectLines
		#define GEODE_STATICS_toggleEffectLines
		GEODE_AS_STATIC_FUNCTION(toggleEffectLines) 
	#endif

	#ifndef GEODE_STATICS_toggleFollowPlayer
		#define GEODE_STATICS_toggleFollowPlayer
		GEODE_AS_STATIC_FUNCTION(toggleFollowPlayer) 
	#endif

	#ifndef GEODE_STATICS_toggleGridOnTop
		#define GEODE_STATICS_toggleGridOnTop
		GEODE_AS_STATIC_FUNCTION(toggleGridOnTop) 
	#endif

	#ifndef GEODE_STATICS_toggleIgnoreDamage
		#define GEODE_STATICS_toggleIgnoreDamage
		GEODE_AS_STATIC_FUNCTION(toggleIgnoreDamage) 
	#endif

	#ifndef GEODE_STATICS_togglePlaytestMusic
		#define GEODE_STATICS_togglePlaytestMusic
		GEODE_AS_STATIC_FUNCTION(togglePlaytestMusic) 
	#endif

	#ifndef GEODE_STATICS_toggleShowObjectInfo
		#define GEODE_STATICS_toggleShowObjectInfo
		GEODE_AS_STATIC_FUNCTION(toggleShowObjectInfo) 
	#endif

	#ifndef GEODE_STATICS_uncheckAllPortals
		#define GEODE_STATICS_uncheckAllPortals
		GEODE_AS_STATIC_FUNCTION(uncheckAllPortals) 
	#endif

	#ifndef GEODE_STATICS_updateSongButton
		#define GEODE_STATICS_updateSongButton
		GEODE_AS_STATIC_FUNCTION(updateSongButton) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_keyDown
		#define GEODE_STATICS_keyDown
		GEODE_AS_STATIC_FUNCTION(keyDown) 
	#endif

	#ifndef GEODE_STATICS_customSetup
		#define GEODE_STATICS_customSetup
		GEODE_AS_STATIC_FUNCTION(customSetup) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_doResetUnused
		#define GEODE_CONCEPT_CHECK_doResetUnused
		GEODE_CONCEPT_FUNCTION_CHECK(doResetUnused) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onExitEditor
		#define GEODE_CONCEPT_CHECK_onExitEditor
		GEODE_CONCEPT_FUNCTION_CHECK(onExitEditor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onExitNoSave
		#define GEODE_CONCEPT_CHECK_onExitNoSave
		GEODE_CONCEPT_FUNCTION_CHECK(onExitNoSave) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onHelp
		#define GEODE_CONCEPT_CHECK_onHelp
		GEODE_CONCEPT_FUNCTION_CHECK(onHelp) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onKeybindings
		#define GEODE_CONCEPT_CHECK_onKeybindings
		GEODE_CONCEPT_FUNCTION_CHECK(onKeybindings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onOptions
		#define GEODE_CONCEPT_CHECK_onOptions
		GEODE_CONCEPT_FUNCTION_CHECK(onOptions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onResetUnusedColors
		#define GEODE_CONCEPT_CHECK_onResetUnusedColors
		GEODE_CONCEPT_FUNCTION_CHECK(onResetUnusedColors) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onResume
		#define GEODE_CONCEPT_CHECK_onResume
		GEODE_CONCEPT_FUNCTION_CHECK(onResume) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSave
		#define GEODE_CONCEPT_CHECK_onSave
		GEODE_CONCEPT_FUNCTION_CHECK(onSave) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSaveAndExit
		#define GEODE_CONCEPT_CHECK_onSaveAndExit
		GEODE_CONCEPT_FUNCTION_CHECK(onSaveAndExit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSaveAndPlay
		#define GEODE_CONCEPT_CHECK_onSaveAndPlay
		GEODE_CONCEPT_FUNCTION_CHECK(onSaveAndPlay) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSaveAndTest
		#define GEODE_CONCEPT_CHECK_onSaveAndTest
		GEODE_CONCEPT_FUNCTION_CHECK(onSaveAndTest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSong
		#define GEODE_CONCEPT_CHECK_onSong
		GEODE_CONCEPT_FUNCTION_CHECK(onSong) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playStep2
		#define GEODE_CONCEPT_CHECK_playStep2
		GEODE_CONCEPT_FUNCTION_CHECK(playStep2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playStep3
		#define GEODE_CONCEPT_CHECK_playStep3
		GEODE_CONCEPT_FUNCTION_CHECK(playStep3) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveLevel
		#define GEODE_CONCEPT_CHECK_saveLevel
		GEODE_CONCEPT_FUNCTION_CHECK(saveLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleDebugDraw
		#define GEODE_CONCEPT_CHECK_toggleDebugDraw
		GEODE_CONCEPT_FUNCTION_CHECK(toggleDebugDraw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleEditorColorMode
		#define GEODE_CONCEPT_CHECK_toggleEditorColorMode
		GEODE_CONCEPT_FUNCTION_CHECK(toggleEditorColorMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleEditorGrid
		#define GEODE_CONCEPT_CHECK_toggleEditorGrid
		GEODE_CONCEPT_FUNCTION_CHECK(toggleEditorGrid) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleEditorGround
		#define GEODE_CONCEPT_CHECK_toggleEditorGround
		GEODE_CONCEPT_FUNCTION_CHECK(toggleEditorGround) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleEffectLines
		#define GEODE_CONCEPT_CHECK_toggleEffectLines
		GEODE_CONCEPT_FUNCTION_CHECK(toggleEffectLines) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleFollowPlayer
		#define GEODE_CONCEPT_CHECK_toggleFollowPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(toggleFollowPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleGridOnTop
		#define GEODE_CONCEPT_CHECK_toggleGridOnTop
		GEODE_CONCEPT_FUNCTION_CHECK(toggleGridOnTop) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleIgnoreDamage
		#define GEODE_CONCEPT_CHECK_toggleIgnoreDamage
		GEODE_CONCEPT_FUNCTION_CHECK(toggleIgnoreDamage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_togglePlaytestMusic
		#define GEODE_CONCEPT_CHECK_togglePlaytestMusic
		GEODE_CONCEPT_FUNCTION_CHECK(togglePlaytestMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleShowObjectInfo
		#define GEODE_CONCEPT_CHECK_toggleShowObjectInfo
		GEODE_CONCEPT_FUNCTION_CHECK(toggleShowObjectInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uncheckAllPortals
		#define GEODE_CONCEPT_CHECK_uncheckAllPortals
		GEODE_CONCEPT_FUNCTION_CHECK(uncheckAllPortals) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSongButton
		#define GEODE_CONCEPT_CHECK_updateSongButton
		GEODE_CONCEPT_FUNCTION_CHECK(updateSongButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyDown
		#define GEODE_CONCEPT_CHECK_keyDown
		GEODE_CONCEPT_FUNCTION_CHECK(keyDown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_customSetup
		#define GEODE_CONCEPT_CHECK_customSetup
		GEODE_CONCEPT_FUNCTION_CHECK(customSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EditorPauseLayer> : ModifyBase<ModifyDerive<Der, EditorPauseLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EditorPauseLayer>>;
		using ModifyBase<ModifyDerive<Der, EditorPauseLayer>>::ModifyBase;
		using Base = EditorPauseLayer;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorPauseLayer, create, LevelEditorLayer*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorPauseLayer, doResetUnused, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorPauseLayer, init, LevelEditorLayer*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorPauseLayer, onExitEditor, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorPauseLayer, onExitNoSave, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorPauseLayer, onHelp, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorPauseLayer, onKeybindings, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorPauseLayer, onOptions, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorPauseLayer, onResetUnusedColors, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorPauseLayer, onResume, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorPauseLayer, onSave, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorPauseLayer, onSaveAndExit, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorPauseLayer, onSaveAndPlay, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorPauseLayer, onSaveAndTest, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorPauseLayer, onSong, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorPauseLayer, playStep2, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorPauseLayer, playStep3, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorPauseLayer, saveLevel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorPauseLayer, toggleDebugDraw, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorPauseLayer, toggleEditorColorMode, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorPauseLayer, toggleEditorGrid, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorPauseLayer, toggleEditorGround, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorPauseLayer, toggleEffectLines, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorPauseLayer, toggleFollowPlayer, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorPauseLayer, toggleGridOnTop, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorPauseLayer, toggleIgnoreDamage, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorPauseLayer, togglePlaytestMusic, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorPauseLayer, toggleShowObjectInfo, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorPauseLayer, uncheckAllPortals, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorPauseLayer, updateSongButton, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorPauseLayer, keyBackClicked, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorPauseLayer, keyDown, cocos2d::enumKeyCodes)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorPauseLayer, customSetup, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorPauseLayer, FLAlert_Clicked, FLAlertLayer*, bool)
		}
	};
}
