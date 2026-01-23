#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/MusicDownloadManager.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sharedState
		#define GEODE_STATICS_sharedState
		GEODE_AS_STATIC_FUNCTION(sharedState) 
	#endif

	#ifndef GEODE_STATICS_addDLToActive
		#define GEODE_STATICS_addDLToActive
		GEODE_AS_STATIC_FUNCTION(addDLToActive) 
	#endif

	#ifndef GEODE_STATICS_addMusicDownloadDelegate
		#define GEODE_STATICS_addMusicDownloadDelegate
		GEODE_AS_STATIC_FUNCTION(addMusicDownloadDelegate) 
	#endif

	#ifndef GEODE_STATICS_addSongObjectFromString
		#define GEODE_STATICS_addSongObjectFromString
		GEODE_AS_STATIC_FUNCTION(addSongObjectFromString) 
	#endif

	#ifndef GEODE_STATICS_clearSong
		#define GEODE_STATICS_clearSong
		GEODE_AS_STATIC_FUNCTION(clearSong) 
	#endif

	#ifndef GEODE_STATICS_clearUnusedSongs
		#define GEODE_STATICS_clearUnusedSongs
		GEODE_AS_STATIC_FUNCTION(clearUnusedSongs) 
	#endif

	#ifndef GEODE_STATICS_createSongsInfo
		#define GEODE_STATICS_createSongsInfo
		GEODE_AS_STATIC_FUNCTION(createSongsInfo) 
	#endif

	#ifndef GEODE_STATICS_dataLoaded
		#define GEODE_STATICS_dataLoaded
		GEODE_AS_STATIC_FUNCTION(dataLoaded) 
	#endif

	#ifndef GEODE_STATICS_deleteSong
		#define GEODE_STATICS_deleteSong
		GEODE_AS_STATIC_FUNCTION(deleteSong) 
	#endif

	#ifndef GEODE_STATICS_downloadSong
		#define GEODE_STATICS_downloadSong
		GEODE_AS_STATIC_FUNCTION(downloadSong) 
	#endif

	#ifndef GEODE_STATICS_downloadSongFailed
		#define GEODE_STATICS_downloadSongFailed
		GEODE_AS_STATIC_FUNCTION(downloadSongFailed) 
	#endif

	#ifndef GEODE_STATICS_downloadSongFinished
		#define GEODE_STATICS_downloadSongFinished
		GEODE_AS_STATIC_FUNCTION(downloadSongFinished) 
	#endif

	#ifndef GEODE_STATICS_encodeDataTo
		#define GEODE_STATICS_encodeDataTo
		GEODE_AS_STATIC_FUNCTION(encodeDataTo) 
	#endif

	#ifndef GEODE_STATICS_firstSetup
		#define GEODE_STATICS_firstSetup
		GEODE_AS_STATIC_FUNCTION(firstSetup) 
	#endif

	#ifndef GEODE_STATICS_getAllSongs
		#define GEODE_STATICS_getAllSongs
		GEODE_AS_STATIC_FUNCTION(getAllSongs) 
	#endif

	#ifndef GEODE_STATICS_getDLObject
		#define GEODE_STATICS_getDLObject
		GEODE_AS_STATIC_FUNCTION(getDLObject) 
	#endif

	#ifndef GEODE_STATICS_getDownloadedSongs
		#define GEODE_STATICS_getDownloadedSongs
		GEODE_AS_STATIC_FUNCTION(getDownloadedSongs) 
	#endif

	#ifndef GEODE_STATICS_getDownloadedSongsDict
		#define GEODE_STATICS_getDownloadedSongsDict
		GEODE_AS_STATIC_FUNCTION(getDownloadedSongsDict) 
	#endif

	#ifndef GEODE_STATICS_getDownloadProgress
		#define GEODE_STATICS_getDownloadProgress
		GEODE_AS_STATIC_FUNCTION(getDownloadProgress) 
	#endif

	#ifndef GEODE_STATICS_getSongDownloadKey
		#define GEODE_STATICS_getSongDownloadKey
		GEODE_AS_STATIC_FUNCTION(getSongDownloadKey) 
	#endif

	#ifndef GEODE_STATICS_getSongInfo
		#define GEODE_STATICS_getSongInfo
		GEODE_AS_STATIC_FUNCTION(getSongInfo) 
	#endif

	#ifndef GEODE_STATICS_getSongInfoKey
		#define GEODE_STATICS_getSongInfoKey
		GEODE_AS_STATIC_FUNCTION(getSongInfoKey) 
	#endif

	#ifndef GEODE_STATICS_getSongInfoObject
		#define GEODE_STATICS_getSongInfoObject
		GEODE_AS_STATIC_FUNCTION(getSongInfoObject) 
	#endif

	#ifndef GEODE_STATICS_getSongPriority
		#define GEODE_STATICS_getSongPriority
		GEODE_AS_STATIC_FUNCTION(getSongPriority) 
	#endif

	#ifndef GEODE_STATICS_handleIt
		#define GEODE_STATICS_handleIt
		GEODE_AS_STATIC_FUNCTION(handleIt) 
	#endif

	#ifndef GEODE_STATICS_handleItDelayed
		#define GEODE_STATICS_handleItDelayed
		GEODE_AS_STATIC_FUNCTION(handleItDelayed) 
	#endif

	#ifndef GEODE_STATICS_handleItND
		#define GEODE_STATICS_handleItND
		GEODE_AS_STATIC_FUNCTION(handleItND) 
	#endif

	#ifndef GEODE_STATICS_incrementPriorityForSong
		#define GEODE_STATICS_incrementPriorityForSong
		GEODE_AS_STATIC_FUNCTION(incrementPriorityForSong) 
	#endif

	#ifndef GEODE_STATICS_isDLActive
		#define GEODE_STATICS_isDLActive
		GEODE_AS_STATIC_FUNCTION(isDLActive) 
	#endif

	#ifndef GEODE_STATICS_isRunningActionForSongID
		#define GEODE_STATICS_isRunningActionForSongID
		GEODE_AS_STATIC_FUNCTION(isRunningActionForSongID) 
	#endif

	#ifndef GEODE_STATICS_isSongDownloaded
		#define GEODE_STATICS_isSongDownloaded
		GEODE_AS_STATIC_FUNCTION(isSongDownloaded) 
	#endif

	#ifndef GEODE_STATICS_limitDownloadedSongs
		#define GEODE_STATICS_limitDownloadedSongs
		GEODE_AS_STATIC_FUNCTION(limitDownloadedSongs) 
	#endif

	#ifndef GEODE_STATICS_loadSongInfoFailed
		#define GEODE_STATICS_loadSongInfoFailed
		GEODE_AS_STATIC_FUNCTION(loadSongInfoFailed) 
	#endif

	#ifndef GEODE_STATICS_loadSongInfoFinished
		#define GEODE_STATICS_loadSongInfoFinished
		GEODE_AS_STATIC_FUNCTION(loadSongInfoFinished) 
	#endif

	#ifndef GEODE_STATICS_onDownloadSongCompleted
		#define GEODE_STATICS_onDownloadSongCompleted
		GEODE_AS_STATIC_FUNCTION(onDownloadSongCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetSongInfoCompleted
		#define GEODE_STATICS_onGetSongInfoCompleted
		GEODE_AS_STATIC_FUNCTION(onGetSongInfoCompleted) 
	#endif

	#ifndef GEODE_STATICS_onProcessHttpRequestCompleted
		#define GEODE_STATICS_onProcessHttpRequestCompleted
		GEODE_AS_STATIC_FUNCTION(onProcessHttpRequestCompleted) 
	#endif

	#ifndef GEODE_STATICS_pathForSong
		#define GEODE_STATICS_pathForSong
		GEODE_AS_STATIC_FUNCTION(pathForSong) 
	#endif

	#ifndef GEODE_STATICS_ProcessHttpRequest
		#define GEODE_STATICS_ProcessHttpRequest
		GEODE_AS_STATIC_FUNCTION(ProcessHttpRequest) 
	#endif

	#ifndef GEODE_STATICS_removeDLFromActive
		#define GEODE_STATICS_removeDLFromActive
		GEODE_AS_STATIC_FUNCTION(removeDLFromActive) 
	#endif

	#ifndef GEODE_STATICS_removeMusicDownloadDelegate
		#define GEODE_STATICS_removeMusicDownloadDelegate
		GEODE_AS_STATIC_FUNCTION(removeMusicDownloadDelegate) 
	#endif

	#ifndef GEODE_STATICS_responseToDict
		#define GEODE_STATICS_responseToDict
		GEODE_AS_STATIC_FUNCTION(responseToDict) 
	#endif

	#ifndef GEODE_STATICS_setDownloadedSongsDict
		#define GEODE_STATICS_setDownloadedSongsDict
		GEODE_AS_STATIC_FUNCTION(setDownloadedSongsDict) 
	#endif

	#ifndef GEODE_STATICS_showTOS
		#define GEODE_STATICS_showTOS
		GEODE_AS_STATIC_FUNCTION(showTOS) 
	#endif

	#ifndef GEODE_STATICS_songStateChanged
		#define GEODE_STATICS_songStateChanged
		GEODE_AS_STATIC_FUNCTION(songStateChanged) 
	#endif

	#ifndef GEODE_STATICS_stopDownload
		#define GEODE_STATICS_stopDownload
		GEODE_AS_STATIC_FUNCTION(stopDownload) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_sharedState
		#define GEODE_CONCEPT_CHECK_sharedState
		GEODE_CONCEPT_FUNCTION_CHECK(sharedState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addDLToActive
		#define GEODE_CONCEPT_CHECK_addDLToActive
		GEODE_CONCEPT_FUNCTION_CHECK(addDLToActive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addMusicDownloadDelegate
		#define GEODE_CONCEPT_CHECK_addMusicDownloadDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(addMusicDownloadDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addSongObjectFromString
		#define GEODE_CONCEPT_CHECK_addSongObjectFromString
		GEODE_CONCEPT_FUNCTION_CHECK(addSongObjectFromString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clearSong
		#define GEODE_CONCEPT_CHECK_clearSong
		GEODE_CONCEPT_FUNCTION_CHECK(clearSong) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clearUnusedSongs
		#define GEODE_CONCEPT_CHECK_clearUnusedSongs
		GEODE_CONCEPT_FUNCTION_CHECK(clearUnusedSongs) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createSongsInfo
		#define GEODE_CONCEPT_CHECK_createSongsInfo
		GEODE_CONCEPT_FUNCTION_CHECK(createSongsInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dataLoaded
		#define GEODE_CONCEPT_CHECK_dataLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(dataLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteSong
		#define GEODE_CONCEPT_CHECK_deleteSong
		GEODE_CONCEPT_FUNCTION_CHECK(deleteSong) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadSong
		#define GEODE_CONCEPT_CHECK_downloadSong
		GEODE_CONCEPT_FUNCTION_CHECK(downloadSong) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadSongFailed
		#define GEODE_CONCEPT_CHECK_downloadSongFailed
		GEODE_CONCEPT_FUNCTION_CHECK(downloadSongFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadSongFinished
		#define GEODE_CONCEPT_CHECK_downloadSongFinished
		GEODE_CONCEPT_FUNCTION_CHECK(downloadSongFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_encodeDataTo
		#define GEODE_CONCEPT_CHECK_encodeDataTo
		GEODE_CONCEPT_FUNCTION_CHECK(encodeDataTo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_firstSetup
		#define GEODE_CONCEPT_CHECK_firstSetup
		GEODE_CONCEPT_FUNCTION_CHECK(firstSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAllSongs
		#define GEODE_CONCEPT_CHECK_getAllSongs
		GEODE_CONCEPT_FUNCTION_CHECK(getAllSongs) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDLObject
		#define GEODE_CONCEPT_CHECK_getDLObject
		GEODE_CONCEPT_FUNCTION_CHECK(getDLObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDownloadedSongs
		#define GEODE_CONCEPT_CHECK_getDownloadedSongs
		GEODE_CONCEPT_FUNCTION_CHECK(getDownloadedSongs) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDownloadedSongsDict
		#define GEODE_CONCEPT_CHECK_getDownloadedSongsDict
		GEODE_CONCEPT_FUNCTION_CHECK(getDownloadedSongsDict) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDownloadProgress
		#define GEODE_CONCEPT_CHECK_getDownloadProgress
		GEODE_CONCEPT_FUNCTION_CHECK(getDownloadProgress) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSongDownloadKey
		#define GEODE_CONCEPT_CHECK_getSongDownloadKey
		GEODE_CONCEPT_FUNCTION_CHECK(getSongDownloadKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSongInfo
		#define GEODE_CONCEPT_CHECK_getSongInfo
		GEODE_CONCEPT_FUNCTION_CHECK(getSongInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSongInfoKey
		#define GEODE_CONCEPT_CHECK_getSongInfoKey
		GEODE_CONCEPT_FUNCTION_CHECK(getSongInfoKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSongInfoObject
		#define GEODE_CONCEPT_CHECK_getSongInfoObject
		GEODE_CONCEPT_FUNCTION_CHECK(getSongInfoObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSongPriority
		#define GEODE_CONCEPT_CHECK_getSongPriority
		GEODE_CONCEPT_FUNCTION_CHECK(getSongPriority) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleIt
		#define GEODE_CONCEPT_CHECK_handleIt
		GEODE_CONCEPT_FUNCTION_CHECK(handleIt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleItDelayed
		#define GEODE_CONCEPT_CHECK_handleItDelayed
		GEODE_CONCEPT_FUNCTION_CHECK(handleItDelayed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleItND
		#define GEODE_CONCEPT_CHECK_handleItND
		GEODE_CONCEPT_FUNCTION_CHECK(handleItND) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_incrementPriorityForSong
		#define GEODE_CONCEPT_CHECK_incrementPriorityForSong
		GEODE_CONCEPT_FUNCTION_CHECK(incrementPriorityForSong) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isDLActive
		#define GEODE_CONCEPT_CHECK_isDLActive
		GEODE_CONCEPT_FUNCTION_CHECK(isDLActive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isRunningActionForSongID
		#define GEODE_CONCEPT_CHECK_isRunningActionForSongID
		GEODE_CONCEPT_FUNCTION_CHECK(isRunningActionForSongID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isSongDownloaded
		#define GEODE_CONCEPT_CHECK_isSongDownloaded
		GEODE_CONCEPT_FUNCTION_CHECK(isSongDownloaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_limitDownloadedSongs
		#define GEODE_CONCEPT_CHECK_limitDownloadedSongs
		GEODE_CONCEPT_FUNCTION_CHECK(limitDownloadedSongs) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadSongInfoFailed
		#define GEODE_CONCEPT_CHECK_loadSongInfoFailed
		GEODE_CONCEPT_FUNCTION_CHECK(loadSongInfoFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadSongInfoFinished
		#define GEODE_CONCEPT_CHECK_loadSongInfoFinished
		GEODE_CONCEPT_FUNCTION_CHECK(loadSongInfoFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDownloadSongCompleted
		#define GEODE_CONCEPT_CHECK_onDownloadSongCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onDownloadSongCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetSongInfoCompleted
		#define GEODE_CONCEPT_CHECK_onGetSongInfoCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetSongInfoCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onProcessHttpRequestCompleted
		#define GEODE_CONCEPT_CHECK_onProcessHttpRequestCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onProcessHttpRequestCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pathForSong
		#define GEODE_CONCEPT_CHECK_pathForSong
		GEODE_CONCEPT_FUNCTION_CHECK(pathForSong) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ProcessHttpRequest
		#define GEODE_CONCEPT_CHECK_ProcessHttpRequest
		GEODE_CONCEPT_FUNCTION_CHECK(ProcessHttpRequest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeDLFromActive
		#define GEODE_CONCEPT_CHECK_removeDLFromActive
		GEODE_CONCEPT_FUNCTION_CHECK(removeDLFromActive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeMusicDownloadDelegate
		#define GEODE_CONCEPT_CHECK_removeMusicDownloadDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(removeMusicDownloadDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_responseToDict
		#define GEODE_CONCEPT_CHECK_responseToDict
		GEODE_CONCEPT_FUNCTION_CHECK(responseToDict) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDownloadedSongsDict
		#define GEODE_CONCEPT_CHECK_setDownloadedSongsDict
		GEODE_CONCEPT_FUNCTION_CHECK(setDownloadedSongsDict) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showTOS
		#define GEODE_CONCEPT_CHECK_showTOS
		GEODE_CONCEPT_FUNCTION_CHECK(showTOS) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_songStateChanged
		#define GEODE_CONCEPT_CHECK_songStateChanged
		GEODE_CONCEPT_FUNCTION_CHECK(songStateChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopDownload
		#define GEODE_CONCEPT_CHECK_stopDownload
		GEODE_CONCEPT_FUNCTION_CHECK(stopDownload) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, MusicDownloadManager> : ModifyBase<ModifyDerive<Der, MusicDownloadManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, MusicDownloadManager>>;
		using ModifyBase<ModifyDerive<Der, MusicDownloadManager>>::ModifyBase;
		using Base = MusicDownloadManager;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, sharedState, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, addDLToActive, char const*, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, addDLToActive, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, addMusicDownloadDelegate, MusicDownloadDelegate*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, addSongObjectFromString, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, clearSong, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, clearUnusedSongs, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, createSongsInfo, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, dataLoaded, DS_Dictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, deleteSong, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, downloadSong, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, downloadSongFailed, int, GJSongError)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, downloadSongFinished, SongInfoObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, encodeDataTo, DS_Dictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, firstSetup, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, getAllSongs, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, getDLObject, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, getDownloadedSongs, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, getDownloadedSongsDict, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, getDownloadProgress, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, getSongDownloadKey, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, getSongInfo, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, getSongInfoKey, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, getSongInfoObject, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, getSongPriority, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, handleIt, bool, gd::string, gd::string, GJHttpType)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, handleItDelayed, bool, gd::string, gd::string, GJHttpType)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, handleItND, cocos2d::CCNode*, void*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, incrementPriorityForSong, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, isDLActive, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, isRunningActionForSongID, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, isSongDownloaded, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, limitDownloadedSongs, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, loadSongInfoFailed, int, GJSongError)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, loadSongInfoFinished, SongInfoObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, onDownloadSongCompleted, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, onGetSongInfoCompleted, gd::string, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, onProcessHttpRequestCompleted, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, pathForSong, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, ProcessHttpRequest, gd::string, gd::string, gd::string, GJHttpType)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, removeDLFromActive, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, removeMusicDownloadDelegate, MusicDownloadDelegate*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, responseToDict, gd::string, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, setDownloadedSongsDict, cocos2d::CCDictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, showTOS, FLAlertLayerProtocol*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, songStateChanged, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, stopDownload, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, init, )
		}
	};
}
