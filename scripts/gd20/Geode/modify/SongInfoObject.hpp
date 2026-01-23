#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SongInfoObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createWithCoder
		#define GEODE_STATICS_createWithCoder
		GEODE_AS_STATIC_FUNCTION(createWithCoder) 
	#endif

	#ifndef GEODE_STATICS_getArtistID
		#define GEODE_STATICS_getArtistID
		GEODE_AS_STATIC_FUNCTION(getArtistID) 
	#endif

	#ifndef GEODE_STATICS_getArtistName
		#define GEODE_STATICS_getArtistName
		GEODE_AS_STATIC_FUNCTION(getArtistName) 
	#endif

	#ifndef GEODE_STATICS_getArtistYT
		#define GEODE_STATICS_getArtistYT
		GEODE_AS_STATIC_FUNCTION(getArtistYT) 
	#endif

	#ifndef GEODE_STATICS_getFileSize
		#define GEODE_STATICS_getFileSize
		GEODE_AS_STATIC_FUNCTION(getFileSize) 
	#endif

	#ifndef GEODE_STATICS_getIsBlocked
		#define GEODE_STATICS_getIsBlocked
		GEODE_AS_STATIC_FUNCTION(getIsBlocked) 
	#endif

	#ifndef GEODE_STATICS_getIsUnloaded
		#define GEODE_STATICS_getIsUnloaded
		GEODE_AS_STATIC_FUNCTION(getIsUnloaded) 
	#endif

	#ifndef GEODE_STATICS_getIsVerified
		#define GEODE_STATICS_getIsVerified
		GEODE_AS_STATIC_FUNCTION(getIsVerified) 
	#endif

	#ifndef GEODE_STATICS_getLevelSettings
		#define GEODE_STATICS_getLevelSettings
		GEODE_AS_STATIC_FUNCTION(getLevelSettings) 
	#endif

	#ifndef GEODE_STATICS_getSongID
		#define GEODE_STATICS_getSongID
		GEODE_AS_STATIC_FUNCTION(getSongID) 
	#endif

	#ifndef GEODE_STATICS_getSongName
		#define GEODE_STATICS_getSongName
		GEODE_AS_STATIC_FUNCTION(getSongName) 
	#endif

	#ifndef GEODE_STATICS_getSongPriority
		#define GEODE_STATICS_getSongPriority
		GEODE_AS_STATIC_FUNCTION(getSongPriority) 
	#endif

	#ifndef GEODE_STATICS_getSongURL
		#define GEODE_STATICS_getSongURL
		GEODE_AS_STATIC_FUNCTION(getSongURL) 
	#endif

	#ifndef GEODE_STATICS_getSongYT
		#define GEODE_STATICS_getSongYT
		GEODE_AS_STATIC_FUNCTION(getSongYT) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setArtistID
		#define GEODE_STATICS_setArtistID
		GEODE_AS_STATIC_FUNCTION(setArtistID) 
	#endif

	#ifndef GEODE_STATICS_setArtistName
		#define GEODE_STATICS_setArtistName
		GEODE_AS_STATIC_FUNCTION(setArtistName) 
	#endif

	#ifndef GEODE_STATICS_setArtistYT
		#define GEODE_STATICS_setArtistYT
		GEODE_AS_STATIC_FUNCTION(setArtistYT) 
	#endif

	#ifndef GEODE_STATICS_setFileSize
		#define GEODE_STATICS_setFileSize
		GEODE_AS_STATIC_FUNCTION(setFileSize) 
	#endif

	#ifndef GEODE_STATICS_setIsBlocked
		#define GEODE_STATICS_setIsBlocked
		GEODE_AS_STATIC_FUNCTION(setIsBlocked) 
	#endif

	#ifndef GEODE_STATICS_setIsUnloaded
		#define GEODE_STATICS_setIsUnloaded
		GEODE_AS_STATIC_FUNCTION(setIsUnloaded) 
	#endif

	#ifndef GEODE_STATICS_setIsVerified
		#define GEODE_STATICS_setIsVerified
		GEODE_AS_STATIC_FUNCTION(setIsVerified) 
	#endif

	#ifndef GEODE_STATICS_setLevelSettings
		#define GEODE_STATICS_setLevelSettings
		GEODE_AS_STATIC_FUNCTION(setLevelSettings) 
	#endif

	#ifndef GEODE_STATICS_setSongID
		#define GEODE_STATICS_setSongID
		GEODE_AS_STATIC_FUNCTION(setSongID) 
	#endif

	#ifndef GEODE_STATICS_setSongName
		#define GEODE_STATICS_setSongName
		GEODE_AS_STATIC_FUNCTION(setSongName) 
	#endif

	#ifndef GEODE_STATICS_setSongPriority
		#define GEODE_STATICS_setSongPriority
		GEODE_AS_STATIC_FUNCTION(setSongPriority) 
	#endif

	#ifndef GEODE_STATICS_setSongURL
		#define GEODE_STATICS_setSongURL
		GEODE_AS_STATIC_FUNCTION(setSongURL) 
	#endif

	#ifndef GEODE_STATICS_setSongYT
		#define GEODE_STATICS_setSongYT
		GEODE_AS_STATIC_FUNCTION(setSongYT) 
	#endif

	#ifndef GEODE_STATICS_encodeWithCoder
		#define GEODE_STATICS_encodeWithCoder
		GEODE_AS_STATIC_FUNCTION(encodeWithCoder) 
	#endif

	#ifndef GEODE_STATICS_canEncode
		#define GEODE_STATICS_canEncode
		GEODE_AS_STATIC_FUNCTION(canEncode) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithCoder
		#define GEODE_CONCEPT_CHECK_createWithCoder
		GEODE_CONCEPT_FUNCTION_CHECK(createWithCoder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getArtistID
		#define GEODE_CONCEPT_CHECK_getArtistID
		GEODE_CONCEPT_FUNCTION_CHECK(getArtistID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getArtistName
		#define GEODE_CONCEPT_CHECK_getArtistName
		GEODE_CONCEPT_FUNCTION_CHECK(getArtistName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getArtistYT
		#define GEODE_CONCEPT_CHECK_getArtistYT
		GEODE_CONCEPT_FUNCTION_CHECK(getArtistYT) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFileSize
		#define GEODE_CONCEPT_CHECK_getFileSize
		GEODE_CONCEPT_FUNCTION_CHECK(getFileSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIsBlocked
		#define GEODE_CONCEPT_CHECK_getIsBlocked
		GEODE_CONCEPT_FUNCTION_CHECK(getIsBlocked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIsUnloaded
		#define GEODE_CONCEPT_CHECK_getIsUnloaded
		GEODE_CONCEPT_FUNCTION_CHECK(getIsUnloaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIsVerified
		#define GEODE_CONCEPT_CHECK_getIsVerified
		GEODE_CONCEPT_FUNCTION_CHECK(getIsVerified) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLevelSettings
		#define GEODE_CONCEPT_CHECK_getLevelSettings
		GEODE_CONCEPT_FUNCTION_CHECK(getLevelSettings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSongID
		#define GEODE_CONCEPT_CHECK_getSongID
		GEODE_CONCEPT_FUNCTION_CHECK(getSongID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSongName
		#define GEODE_CONCEPT_CHECK_getSongName
		GEODE_CONCEPT_FUNCTION_CHECK(getSongName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSongPriority
		#define GEODE_CONCEPT_CHECK_getSongPriority
		GEODE_CONCEPT_FUNCTION_CHECK(getSongPriority) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSongURL
		#define GEODE_CONCEPT_CHECK_getSongURL
		GEODE_CONCEPT_FUNCTION_CHECK(getSongURL) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSongYT
		#define GEODE_CONCEPT_CHECK_getSongYT
		GEODE_CONCEPT_FUNCTION_CHECK(getSongYT) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setArtistID
		#define GEODE_CONCEPT_CHECK_setArtistID
		GEODE_CONCEPT_FUNCTION_CHECK(setArtistID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setArtistName
		#define GEODE_CONCEPT_CHECK_setArtistName
		GEODE_CONCEPT_FUNCTION_CHECK(setArtistName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setArtistYT
		#define GEODE_CONCEPT_CHECK_setArtistYT
		GEODE_CONCEPT_FUNCTION_CHECK(setArtistYT) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFileSize
		#define GEODE_CONCEPT_CHECK_setFileSize
		GEODE_CONCEPT_FUNCTION_CHECK(setFileSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIsBlocked
		#define GEODE_CONCEPT_CHECK_setIsBlocked
		GEODE_CONCEPT_FUNCTION_CHECK(setIsBlocked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIsUnloaded
		#define GEODE_CONCEPT_CHECK_setIsUnloaded
		GEODE_CONCEPT_FUNCTION_CHECK(setIsUnloaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIsVerified
		#define GEODE_CONCEPT_CHECK_setIsVerified
		GEODE_CONCEPT_FUNCTION_CHECK(setIsVerified) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLevelSettings
		#define GEODE_CONCEPT_CHECK_setLevelSettings
		GEODE_CONCEPT_FUNCTION_CHECK(setLevelSettings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSongID
		#define GEODE_CONCEPT_CHECK_setSongID
		GEODE_CONCEPT_FUNCTION_CHECK(setSongID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSongName
		#define GEODE_CONCEPT_CHECK_setSongName
		GEODE_CONCEPT_FUNCTION_CHECK(setSongName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSongPriority
		#define GEODE_CONCEPT_CHECK_setSongPriority
		GEODE_CONCEPT_FUNCTION_CHECK(setSongPriority) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSongURL
		#define GEODE_CONCEPT_CHECK_setSongURL
		GEODE_CONCEPT_FUNCTION_CHECK(setSongURL) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSongYT
		#define GEODE_CONCEPT_CHECK_setSongYT
		GEODE_CONCEPT_FUNCTION_CHECK(setSongYT) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_encodeWithCoder
		#define GEODE_CONCEPT_CHECK_encodeWithCoder
		GEODE_CONCEPT_FUNCTION_CHECK(encodeWithCoder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canEncode
		#define GEODE_CONCEPT_CHECK_canEncode
		GEODE_CONCEPT_FUNCTION_CHECK(canEncode) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SongInfoObject> : ModifyBase<ModifyDerive<Der, SongInfoObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SongInfoObject>>;
		using ModifyBase<ModifyDerive<Der, SongInfoObject>>::ModifyBase;
		using Base = SongInfoObject;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SongInfoObject, create, cocos2d::CCDictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SongInfoObject, create, int, gd::string, gd::string, int, float, gd::string, gd::string, gd::string, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SongInfoObject, create, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SongInfoObject, createWithCoder, DS_Dictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SongInfoObject, getArtistID, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SongInfoObject, getArtistName, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SongInfoObject, getArtistYT, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SongInfoObject, getFileSize, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SongInfoObject, getIsBlocked, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SongInfoObject, getIsUnloaded, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SongInfoObject, getIsVerified, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SongInfoObject, getLevelSettings, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SongInfoObject, getSongID, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SongInfoObject, getSongName, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SongInfoObject, getSongPriority, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SongInfoObject, getSongURL, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SongInfoObject, getSongYT, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SongInfoObject, init, int, gd::string, gd::string, int, float, gd::string, gd::string, gd::string, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SongInfoObject, setArtistID, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SongInfoObject, setArtistName, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SongInfoObject, setArtistYT, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SongInfoObject, setFileSize, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SongInfoObject, setIsBlocked, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SongInfoObject, setIsUnloaded, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SongInfoObject, setIsVerified, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SongInfoObject, setLevelSettings, LevelSettingsObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SongInfoObject, setSongID, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SongInfoObject, setSongName, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SongInfoObject, setSongPriority, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SongInfoObject, setSongURL, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SongInfoObject, setSongYT, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SongInfoObject, encodeWithCoder, DS_Dictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SongInfoObject, canEncode, )
		}
	};
}
