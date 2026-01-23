#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelSettingsLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_audioNext
		#define GEODE_STATICS_audioNext
		GEODE_AS_STATIC_FUNCTION(audioNext) 
	#endif

	#ifndef GEODE_STATICS_audioPrevious
		#define GEODE_STATICS_audioPrevious
		GEODE_AS_STATIC_FUNCTION(audioPrevious) 
	#endif

	#ifndef GEODE_STATICS_colorSelectClosed
		#define GEODE_STATICS_colorSelectClosed
		GEODE_AS_STATIC_FUNCTION(colorSelectClosed) 
	#endif

	#ifndef GEODE_STATICS_createToggleButton
		#define GEODE_STATICS_createToggleButton
		GEODE_AS_STATIC_FUNCTION(createToggleButton) 
	#endif

	#ifndef GEODE_STATICS_getDelegate
		#define GEODE_STATICS_getDelegate
		GEODE_AS_STATIC_FUNCTION(getDelegate) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_on3DLine
		#define GEODE_STATICS_on3DLine
		GEODE_AS_STATIC_FUNCTION(on3DLine) 
	#endif

	#ifndef GEODE_STATICS_onBG
		#define GEODE_STATICS_onBG
		GEODE_AS_STATIC_FUNCTION(onBG) 
	#endif

	#ifndef GEODE_STATICS_onBGArt
		#define GEODE_STATICS_onBGArt
		GEODE_AS_STATIC_FUNCTION(onBGArt) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onCol
		#define GEODE_STATICS_onCol
		GEODE_AS_STATIC_FUNCTION(onCol) 
	#endif

	#ifndef GEODE_STATICS_onDualMode
		#define GEODE_STATICS_onDualMode
		GEODE_AS_STATIC_FUNCTION(onDualMode) 
	#endif

	#ifndef GEODE_STATICS_onG
		#define GEODE_STATICS_onG
		GEODE_AS_STATIC_FUNCTION(onG) 
	#endif

	#ifndef GEODE_STATICS_onG2
		#define GEODE_STATICS_onG2
		GEODE_AS_STATIC_FUNCTION(onG2) 
	#endif

	#ifndef GEODE_STATICS_onGArt
		#define GEODE_STATICS_onGArt
		GEODE_AS_STATIC_FUNCTION(onGArt) 
	#endif

	#ifndef GEODE_STATICS_onGravityFlipped
		#define GEODE_STATICS_onGravityFlipped
		GEODE_AS_STATIC_FUNCTION(onGravityFlipped) 
	#endif

	#ifndef GEODE_STATICS_onLine
		#define GEODE_STATICS_onLine
		GEODE_AS_STATIC_FUNCTION(onLine) 
	#endif

	#ifndef GEODE_STATICS_onMiniMode
		#define GEODE_STATICS_onMiniMode
		GEODE_AS_STATIC_FUNCTION(onMiniMode) 
	#endif

	#ifndef GEODE_STATICS_onObj
		#define GEODE_STATICS_onObj
		GEODE_AS_STATIC_FUNCTION(onObj) 
	#endif

	#ifndef GEODE_STATICS_onOpenCustomSong
		#define GEODE_STATICS_onOpenCustomSong
		GEODE_AS_STATIC_FUNCTION(onOpenCustomSong) 
	#endif

	#ifndef GEODE_STATICS_onSelectFont
		#define GEODE_STATICS_onSelectFont
		GEODE_AS_STATIC_FUNCTION(onSelectFont) 
	#endif

	#ifndef GEODE_STATICS_onSelectMode
		#define GEODE_STATICS_onSelectMode
		GEODE_AS_STATIC_FUNCTION(onSelectMode) 
	#endif

	#ifndef GEODE_STATICS_onSelectSpeed
		#define GEODE_STATICS_onSelectSpeed
		GEODE_AS_STATIC_FUNCTION(onSelectSpeed) 
	#endif

	#ifndef GEODE_STATICS_onSongMode
		#define GEODE_STATICS_onSongMode
		GEODE_AS_STATIC_FUNCTION(onSongMode) 
	#endif

	#ifndef GEODE_STATICS_onTwoPlayerMode
		#define GEODE_STATICS_onTwoPlayerMode
		GEODE_AS_STATIC_FUNCTION(onTwoPlayerMode) 
	#endif

	#ifndef GEODE_STATICS_onTwoPlayerModeInfo
		#define GEODE_STATICS_onTwoPlayerModeInfo
		GEODE_AS_STATIC_FUNCTION(onTwoPlayerModeInfo) 
	#endif

	#ifndef GEODE_STATICS_selectSong
		#define GEODE_STATICS_selectSong
		GEODE_AS_STATIC_FUNCTION(selectSong) 
	#endif

	#ifndef GEODE_STATICS_setDelegate
		#define GEODE_STATICS_setDelegate
		GEODE_AS_STATIC_FUNCTION(setDelegate) 
	#endif

	#ifndef GEODE_STATICS_showCustomSongSelect
		#define GEODE_STATICS_showCustomSongSelect
		GEODE_AS_STATIC_FUNCTION(showCustomSongSelect) 
	#endif

	#ifndef GEODE_STATICS_showPicker
		#define GEODE_STATICS_showPicker
		GEODE_AS_STATIC_FUNCTION(showPicker) 
	#endif

	#ifndef GEODE_STATICS_updateAudioLabel
		#define GEODE_STATICS_updateAudioLabel
		GEODE_AS_STATIC_FUNCTION(updateAudioLabel) 
	#endif

	#ifndef GEODE_STATICS_updateColorSprite
		#define GEODE_STATICS_updateColorSprite
		GEODE_AS_STATIC_FUNCTION(updateColorSprite) 
	#endif

	#ifndef GEODE_STATICS_updateColorSprites
		#define GEODE_STATICS_updateColorSprites
		GEODE_AS_STATIC_FUNCTION(updateColorSprites) 
	#endif

	#ifndef GEODE_STATICS_customSongLayerClosed
		#define GEODE_STATICS_customSongLayerClosed
		GEODE_AS_STATIC_FUNCTION(customSongLayerClosed) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_selectArtClosed
		#define GEODE_STATICS_selectArtClosed
		GEODE_AS_STATIC_FUNCTION(selectArtClosed) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_audioNext
		#define GEODE_CONCEPT_CHECK_audioNext
		GEODE_CONCEPT_FUNCTION_CHECK(audioNext) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_audioPrevious
		#define GEODE_CONCEPT_CHECK_audioPrevious
		GEODE_CONCEPT_FUNCTION_CHECK(audioPrevious) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_colorSelectClosed
		#define GEODE_CONCEPT_CHECK_colorSelectClosed
		GEODE_CONCEPT_FUNCTION_CHECK(colorSelectClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createToggleButton
		#define GEODE_CONCEPT_CHECK_createToggleButton
		GEODE_CONCEPT_FUNCTION_CHECK(createToggleButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDelegate
		#define GEODE_CONCEPT_CHECK_getDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(getDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_on3DLine
		#define GEODE_CONCEPT_CHECK_on3DLine
		GEODE_CONCEPT_FUNCTION_CHECK(on3DLine) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBG
		#define GEODE_CONCEPT_CHECK_onBG
		GEODE_CONCEPT_FUNCTION_CHECK(onBG) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBGArt
		#define GEODE_CONCEPT_CHECK_onBGArt
		GEODE_CONCEPT_FUNCTION_CHECK(onBGArt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCol
		#define GEODE_CONCEPT_CHECK_onCol
		GEODE_CONCEPT_FUNCTION_CHECK(onCol) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDualMode
		#define GEODE_CONCEPT_CHECK_onDualMode
		GEODE_CONCEPT_FUNCTION_CHECK(onDualMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onG
		#define GEODE_CONCEPT_CHECK_onG
		GEODE_CONCEPT_FUNCTION_CHECK(onG) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onG2
		#define GEODE_CONCEPT_CHECK_onG2
		GEODE_CONCEPT_FUNCTION_CHECK(onG2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGArt
		#define GEODE_CONCEPT_CHECK_onGArt
		GEODE_CONCEPT_FUNCTION_CHECK(onGArt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGravityFlipped
		#define GEODE_CONCEPT_CHECK_onGravityFlipped
		GEODE_CONCEPT_FUNCTION_CHECK(onGravityFlipped) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onLine
		#define GEODE_CONCEPT_CHECK_onLine
		GEODE_CONCEPT_FUNCTION_CHECK(onLine) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMiniMode
		#define GEODE_CONCEPT_CHECK_onMiniMode
		GEODE_CONCEPT_FUNCTION_CHECK(onMiniMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onObj
		#define GEODE_CONCEPT_CHECK_onObj
		GEODE_CONCEPT_FUNCTION_CHECK(onObj) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onOpenCustomSong
		#define GEODE_CONCEPT_CHECK_onOpenCustomSong
		GEODE_CONCEPT_FUNCTION_CHECK(onOpenCustomSong) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectFont
		#define GEODE_CONCEPT_CHECK_onSelectFont
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectFont) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectMode
		#define GEODE_CONCEPT_CHECK_onSelectMode
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectSpeed
		#define GEODE_CONCEPT_CHECK_onSelectSpeed
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectSpeed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSongMode
		#define GEODE_CONCEPT_CHECK_onSongMode
		GEODE_CONCEPT_FUNCTION_CHECK(onSongMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTwoPlayerMode
		#define GEODE_CONCEPT_CHECK_onTwoPlayerMode
		GEODE_CONCEPT_FUNCTION_CHECK(onTwoPlayerMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTwoPlayerModeInfo
		#define GEODE_CONCEPT_CHECK_onTwoPlayerModeInfo
		GEODE_CONCEPT_FUNCTION_CHECK(onTwoPlayerModeInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectSong
		#define GEODE_CONCEPT_CHECK_selectSong
		GEODE_CONCEPT_FUNCTION_CHECK(selectSong) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDelegate
		#define GEODE_CONCEPT_CHECK_setDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(setDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showCustomSongSelect
		#define GEODE_CONCEPT_CHECK_showCustomSongSelect
		GEODE_CONCEPT_FUNCTION_CHECK(showCustomSongSelect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showPicker
		#define GEODE_CONCEPT_CHECK_showPicker
		GEODE_CONCEPT_FUNCTION_CHECK(showPicker) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateAudioLabel
		#define GEODE_CONCEPT_CHECK_updateAudioLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateAudioLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateColorSprite
		#define GEODE_CONCEPT_CHECK_updateColorSprite
		GEODE_CONCEPT_FUNCTION_CHECK(updateColorSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateColorSprites
		#define GEODE_CONCEPT_CHECK_updateColorSprites
		GEODE_CONCEPT_FUNCTION_CHECK(updateColorSprites) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_customSongLayerClosed
		#define GEODE_CONCEPT_CHECK_customSongLayerClosed
		GEODE_CONCEPT_FUNCTION_CHECK(customSongLayerClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		#define GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		GEODE_CONCEPT_FUNCTION_CHECK(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectArtClosed
		#define GEODE_CONCEPT_CHECK_selectArtClosed
		GEODE_CONCEPT_FUNCTION_CHECK(selectArtClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelSettingsLayer> : ModifyBase<ModifyDerive<Der, LevelSettingsLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelSettingsLayer>>;
		using ModifyBase<ModifyDerive<Der, LevelSettingsLayer>>::ModifyBase;
		using Base = LevelSettingsLayer;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsLayer, create, LevelSettingsObject*, LevelEditorLayer*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsLayer, audioNext, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsLayer, audioPrevious, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsLayer, colorSelectClosed, ColorSelectPopup*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsLayer, createToggleButton, gd::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsLayer, getDelegate, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsLayer, init, LevelSettingsObject*, LevelEditorLayer*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsLayer, on3DLine, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsLayer, onBG, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsLayer, onBGArt, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsLayer, onClose, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsLayer, onCol, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsLayer, onDualMode, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsLayer, onG, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsLayer, onG2, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsLayer, onGArt, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsLayer, onGravityFlipped, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsLayer, onLine, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsLayer, onMiniMode, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsLayer, onObj, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsLayer, onOpenCustomSong, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsLayer, onSelectFont, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsLayer, onSelectMode, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsLayer, onSelectSpeed, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsLayer, onSongMode, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsLayer, onTwoPlayerMode, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsLayer, onTwoPlayerModeInfo, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsLayer, selectSong, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsLayer, setDelegate, LevelSettingsDelegate*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsLayer, showCustomSongSelect, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsLayer, showPicker, int, ColorAction*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsLayer, updateAudioLabel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsLayer, updateColorSprite, ColorChannelSprite*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsLayer, updateColorSprites, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsLayer, customSongLayerClosed, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsLayer, registerWithTouchDispatcher, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsLayer, keyBackClicked, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsLayer, FLAlert_Clicked, FLAlertLayer*, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsLayer, selectArtClosed, SelectArtLayer*)
		}
	};
}
