#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CustomSongWidget.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_downloadFailed
		#define GEODE_STATICS_downloadFailed
		GEODE_AS_STATIC_FUNCTION(downloadFailed) 
	#endif

	#ifndef GEODE_STATICS_downloadSongFinished
		#define GEODE_STATICS_downloadSongFinished
		GEODE_AS_STATIC_FUNCTION(downloadSongFinished) 
	#endif

	#ifndef GEODE_STATICS_getReportSongSelect
		#define GEODE_STATICS_getReportSongSelect
		GEODE_AS_STATIC_FUNCTION(getReportSongSelect) 
	#endif

	#ifndef GEODE_STATICS_getSongInfoIfUnloaded
		#define GEODE_STATICS_getSongInfoIfUnloaded
		GEODE_AS_STATIC_FUNCTION(getSongInfoIfUnloaded) 
	#endif

	#ifndef GEODE_STATICS_getSongObject
		#define GEODE_STATICS_getSongObject
		GEODE_AS_STATIC_FUNCTION(getSongObject) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onCancelDownload
		#define GEODE_STATICS_onCancelDownload
		GEODE_AS_STATIC_FUNCTION(onCancelDownload) 
	#endif

	#ifndef GEODE_STATICS_onDownload
		#define GEODE_STATICS_onDownload
		GEODE_AS_STATIC_FUNCTION(onDownload) 
	#endif

	#ifndef GEODE_STATICS_onGetSongInfo
		#define GEODE_STATICS_onGetSongInfo
		GEODE_AS_STATIC_FUNCTION(onGetSongInfo) 
	#endif

	#ifndef GEODE_STATICS_onMore
		#define GEODE_STATICS_onMore
		GEODE_AS_STATIC_FUNCTION(onMore) 
	#endif

	#ifndef GEODE_STATICS_onPlayback
		#define GEODE_STATICS_onPlayback
		GEODE_AS_STATIC_FUNCTION(onPlayback) 
	#endif

	#ifndef GEODE_STATICS_onSelect
		#define GEODE_STATICS_onSelect
		GEODE_AS_STATIC_FUNCTION(onSelect) 
	#endif

	#ifndef GEODE_STATICS_setReportSongSelect
		#define GEODE_STATICS_setReportSongSelect
		GEODE_AS_STATIC_FUNCTION(setReportSongSelect) 
	#endif

	#ifndef GEODE_STATICS_setSongObject
		#define GEODE_STATICS_setSongObject
		GEODE_AS_STATIC_FUNCTION(setSongObject) 
	#endif

	#ifndef GEODE_STATICS_startDownload
		#define GEODE_STATICS_startDownload
		GEODE_AS_STATIC_FUNCTION(startDownload) 
	#endif

	#ifndef GEODE_STATICS_startMonitorDownload
		#define GEODE_STATICS_startMonitorDownload
		GEODE_AS_STATIC_FUNCTION(startMonitorDownload) 
	#endif

	#ifndef GEODE_STATICS_toggleUpdateButton
		#define GEODE_STATICS_toggleUpdateButton
		GEODE_AS_STATIC_FUNCTION(toggleUpdateButton) 
	#endif

	#ifndef GEODE_STATICS_updateDownloadProgress
		#define GEODE_STATICS_updateDownloadProgress
		GEODE_AS_STATIC_FUNCTION(updateDownloadProgress) 
	#endif

	#ifndef GEODE_STATICS_updateError
		#define GEODE_STATICS_updateError
		GEODE_AS_STATIC_FUNCTION(updateError) 
	#endif

	#ifndef GEODE_STATICS_updatePlaybackBtn
		#define GEODE_STATICS_updatePlaybackBtn
		GEODE_AS_STATIC_FUNCTION(updatePlaybackBtn) 
	#endif

	#ifndef GEODE_STATICS_updateProgressBar
		#define GEODE_STATICS_updateProgressBar
		GEODE_AS_STATIC_FUNCTION(updateProgressBar) 
	#endif

	#ifndef GEODE_STATICS_updateSongInfo
		#define GEODE_STATICS_updateSongInfo
		GEODE_AS_STATIC_FUNCTION(updateSongInfo) 
	#endif

	#ifndef GEODE_STATICS_updateSongObject
		#define GEODE_STATICS_updateSongObject
		GEODE_AS_STATIC_FUNCTION(updateSongObject) 
	#endif

	#ifndef GEODE_STATICS_verifySongID
		#define GEODE_STATICS_verifySongID
		GEODE_AS_STATIC_FUNCTION(verifySongID) 
	#endif

	#ifndef GEODE_STATICS_loadSongInfoFinished
		#define GEODE_STATICS_loadSongInfoFinished
		GEODE_AS_STATIC_FUNCTION(loadSongInfoFinished) 
	#endif

	#ifndef GEODE_STATICS_loadSongInfoFailed
		#define GEODE_STATICS_loadSongInfoFailed
		GEODE_AS_STATIC_FUNCTION(loadSongInfoFailed) 
	#endif

	#ifndef GEODE_STATICS_downloadSongFailed
		#define GEODE_STATICS_downloadSongFailed
		GEODE_AS_STATIC_FUNCTION(downloadSongFailed) 
	#endif

	#ifndef GEODE_STATICS_songStateChanged
		#define GEODE_STATICS_songStateChanged
		GEODE_AS_STATIC_FUNCTION(songStateChanged) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadFailed
		#define GEODE_CONCEPT_CHECK_downloadFailed
		GEODE_CONCEPT_FUNCTION_CHECK(downloadFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadSongFinished
		#define GEODE_CONCEPT_CHECK_downloadSongFinished
		GEODE_CONCEPT_FUNCTION_CHECK(downloadSongFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getReportSongSelect
		#define GEODE_CONCEPT_CHECK_getReportSongSelect
		GEODE_CONCEPT_FUNCTION_CHECK(getReportSongSelect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSongInfoIfUnloaded
		#define GEODE_CONCEPT_CHECK_getSongInfoIfUnloaded
		GEODE_CONCEPT_FUNCTION_CHECK(getSongInfoIfUnloaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSongObject
		#define GEODE_CONCEPT_CHECK_getSongObject
		GEODE_CONCEPT_FUNCTION_CHECK(getSongObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCancelDownload
		#define GEODE_CONCEPT_CHECK_onCancelDownload
		GEODE_CONCEPT_FUNCTION_CHECK(onCancelDownload) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDownload
		#define GEODE_CONCEPT_CHECK_onDownload
		GEODE_CONCEPT_FUNCTION_CHECK(onDownload) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetSongInfo
		#define GEODE_CONCEPT_CHECK_onGetSongInfo
		GEODE_CONCEPT_FUNCTION_CHECK(onGetSongInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMore
		#define GEODE_CONCEPT_CHECK_onMore
		GEODE_CONCEPT_FUNCTION_CHECK(onMore) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPlayback
		#define GEODE_CONCEPT_CHECK_onPlayback
		GEODE_CONCEPT_FUNCTION_CHECK(onPlayback) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelect
		#define GEODE_CONCEPT_CHECK_onSelect
		GEODE_CONCEPT_FUNCTION_CHECK(onSelect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setReportSongSelect
		#define GEODE_CONCEPT_CHECK_setReportSongSelect
		GEODE_CONCEPT_FUNCTION_CHECK(setReportSongSelect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSongObject
		#define GEODE_CONCEPT_CHECK_setSongObject
		GEODE_CONCEPT_FUNCTION_CHECK(setSongObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_startDownload
		#define GEODE_CONCEPT_CHECK_startDownload
		GEODE_CONCEPT_FUNCTION_CHECK(startDownload) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_startMonitorDownload
		#define GEODE_CONCEPT_CHECK_startMonitorDownload
		GEODE_CONCEPT_FUNCTION_CHECK(startMonitorDownload) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleUpdateButton
		#define GEODE_CONCEPT_CHECK_toggleUpdateButton
		GEODE_CONCEPT_FUNCTION_CHECK(toggleUpdateButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDownloadProgress
		#define GEODE_CONCEPT_CHECK_updateDownloadProgress
		GEODE_CONCEPT_FUNCTION_CHECK(updateDownloadProgress) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateError
		#define GEODE_CONCEPT_CHECK_updateError
		GEODE_CONCEPT_FUNCTION_CHECK(updateError) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePlaybackBtn
		#define GEODE_CONCEPT_CHECK_updatePlaybackBtn
		GEODE_CONCEPT_FUNCTION_CHECK(updatePlaybackBtn) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateProgressBar
		#define GEODE_CONCEPT_CHECK_updateProgressBar
		GEODE_CONCEPT_FUNCTION_CHECK(updateProgressBar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSongInfo
		#define GEODE_CONCEPT_CHECK_updateSongInfo
		GEODE_CONCEPT_FUNCTION_CHECK(updateSongInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSongObject
		#define GEODE_CONCEPT_CHECK_updateSongObject
		GEODE_CONCEPT_FUNCTION_CHECK(updateSongObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_verifySongID
		#define GEODE_CONCEPT_CHECK_verifySongID
		GEODE_CONCEPT_FUNCTION_CHECK(verifySongID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadSongInfoFinished
		#define GEODE_CONCEPT_CHECK_loadSongInfoFinished
		GEODE_CONCEPT_FUNCTION_CHECK(loadSongInfoFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadSongInfoFailed
		#define GEODE_CONCEPT_CHECK_loadSongInfoFailed
		GEODE_CONCEPT_FUNCTION_CHECK(loadSongInfoFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadSongFailed
		#define GEODE_CONCEPT_CHECK_downloadSongFailed
		GEODE_CONCEPT_FUNCTION_CHECK(downloadSongFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_songStateChanged
		#define GEODE_CONCEPT_CHECK_songStateChanged
		GEODE_CONCEPT_FUNCTION_CHECK(songStateChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CustomSongWidget> : ModifyBase<ModifyDerive<Der, CustomSongWidget>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CustomSongWidget>>;
		using ModifyBase<ModifyDerive<Der, CustomSongWidget>>::ModifyBase;
		using Base = CustomSongWidget;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomSongWidget, create, SongInfoObject*, LevelSettingsObject*, bool, bool, bool, bool, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomSongWidget, downloadFailed, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomSongWidget, downloadSongFinished, SongInfoObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomSongWidget, getReportSongSelect, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomSongWidget, getSongInfoIfUnloaded, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomSongWidget, getSongObject, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomSongWidget, init, SongInfoObject*, LevelSettingsObject*, bool, bool, bool, bool, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomSongWidget, onCancelDownload, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomSongWidget, onDownload, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomSongWidget, onGetSongInfo, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomSongWidget, onMore, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomSongWidget, onPlayback, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomSongWidget, onSelect, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomSongWidget, setReportSongSelect, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomSongWidget, setSongObject, SongInfoObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomSongWidget, startDownload, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomSongWidget, startMonitorDownload, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomSongWidget, toggleUpdateButton, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomSongWidget, updateDownloadProgress, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomSongWidget, updateError, GJSongError)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomSongWidget, updatePlaybackBtn, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomSongWidget, updateProgressBar, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomSongWidget, updateSongInfo, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomSongWidget, updateSongObject, SongInfoObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomSongWidget, verifySongID, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomSongWidget, loadSongInfoFinished, SongInfoObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomSongWidget, loadSongInfoFailed, int, GJSongError)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomSongWidget, downloadSongFailed, int, GJSongError)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomSongWidget, songStateChanged, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomSongWidget, FLAlert_Clicked, FLAlertLayer*, bool)
		}
	};
}
