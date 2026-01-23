#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJGameLevel.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_areCoinsVerified
		#define GEODE_STATICS_areCoinsVerified
		GEODE_AS_STATIC_FUNCTION(areCoinsVerified) 
	#endif

	#ifndef GEODE_STATICS_createWithCoder
		#define GEODE_STATICS_createWithCoder
		GEODE_AS_STATIC_FUNCTION(createWithCoder) 
	#endif

	#ifndef GEODE_STATICS_dataLoaded
		#define GEODE_STATICS_dataLoaded
		GEODE_AS_STATIC_FUNCTION(dataLoaded) 
	#endif

	#ifndef GEODE_STATICS_getAccountID
		#define GEODE_STATICS_getAccountID
		GEODE_AS_STATIC_FUNCTION(getAccountID) 
	#endif

	#ifndef GEODE_STATICS_getAttempts
		#define GEODE_STATICS_getAttempts
		GEODE_AS_STATIC_FUNCTION(getAttempts) 
	#endif

	#ifndef GEODE_STATICS_getAudioFileName
		#define GEODE_STATICS_getAudioFileName
		GEODE_AS_STATIC_FUNCTION(getAudioFileName) 
	#endif

	#ifndef GEODE_STATICS_getAudioTrack
		#define GEODE_STATICS_getAudioTrack
		GEODE_AS_STATIC_FUNCTION(getAudioTrack) 
	#endif

	#ifndef GEODE_STATICS_getAutoLevel
		#define GEODE_STATICS_getAutoLevel
		GEODE_AS_STATIC_FUNCTION(getAutoLevel) 
	#endif

	#ifndef GEODE_STATICS_getAverageDifficulty
		#define GEODE_STATICS_getAverageDifficulty
		GEODE_AS_STATIC_FUNCTION(getAverageDifficulty) 
	#endif

	#ifndef GEODE_STATICS_getCapacityString
		#define GEODE_STATICS_getCapacityString
		GEODE_AS_STATIC_FUNCTION(getCapacityString) 
	#endif

	#ifndef GEODE_STATICS_getCoin1Verified
		#define GEODE_STATICS_getCoin1Verified
		GEODE_AS_STATIC_FUNCTION(getCoin1Verified) 
	#endif

	#ifndef GEODE_STATICS_getCoin2Verified
		#define GEODE_STATICS_getCoin2Verified
		GEODE_AS_STATIC_FUNCTION(getCoin2Verified) 
	#endif

	#ifndef GEODE_STATICS_getCoin3Verified
		#define GEODE_STATICS_getCoin3Verified
		GEODE_AS_STATIC_FUNCTION(getCoin3Verified) 
	#endif

	#ifndef GEODE_STATICS_getCoinKey
		#define GEODE_STATICS_getCoinKey
		GEODE_AS_STATIC_FUNCTION(getCoinKey) 
	#endif

	#ifndef GEODE_STATICS_getCoins
		#define GEODE_STATICS_getCoins
		GEODE_AS_STATIC_FUNCTION(getCoins) 
	#endif

	#ifndef GEODE_STATICS_getCoinsVerified
		#define GEODE_STATICS_getCoinsVerified
		GEODE_AS_STATIC_FUNCTION(getCoinsVerified) 
	#endif

	#ifndef GEODE_STATICS_getCompletes
		#define GEODE_STATICS_getCompletes
		GEODE_AS_STATIC_FUNCTION(getCompletes) 
	#endif

	#ifndef GEODE_STATICS_getDemon
		#define GEODE_STATICS_getDemon
		GEODE_AS_STATIC_FUNCTION(getDemon) 
	#endif

	#ifndef GEODE_STATICS_getDemonVotes
		#define GEODE_STATICS_getDemonVotes
		GEODE_AS_STATIC_FUNCTION(getDemonVotes) 
	#endif

	#ifndef GEODE_STATICS_getDifficulty
		#define GEODE_STATICS_getDifficulty
		GEODE_AS_STATIC_FUNCTION(getDifficulty) 
	#endif

	#ifndef GEODE_STATICS_getDislikes
		#define GEODE_STATICS_getDislikes
		GEODE_AS_STATIC_FUNCTION(getDislikes) 
	#endif

	#ifndef GEODE_STATICS_getDontSave
		#define GEODE_STATICS_getDontSave
		GEODE_AS_STATIC_FUNCTION(getDontSave) 
	#endif

	#ifndef GEODE_STATICS_getDownloads
		#define GEODE_STATICS_getDownloads
		GEODE_AS_STATIC_FUNCTION(getDownloads) 
	#endif

	#ifndef GEODE_STATICS_getFailedPasswordAttempts
		#define GEODE_STATICS_getFailedPasswordAttempts
		GEODE_AS_STATIC_FUNCTION(getFailedPasswordAttempts) 
	#endif

	#ifndef GEODE_STATICS_getFeatured
		#define GEODE_STATICS_getFeatured
		GEODE_AS_STATIC_FUNCTION(getFeatured) 
	#endif

	#ifndef GEODE_STATICS_getGameVersion
		#define GEODE_STATICS_getGameVersion
		GEODE_AS_STATIC_FUNCTION(getGameVersion) 
	#endif

	#ifndef GEODE_STATICS_getHasBeenModified
		#define GEODE_STATICS_getHasBeenModified
		GEODE_AS_STATIC_FUNCTION(getHasBeenModified) 
	#endif

	#ifndef GEODE_STATICS_getIsEditable
		#define GEODE_STATICS_getIsEditable
		GEODE_AS_STATIC_FUNCTION(getIsEditable) 
	#endif

	#ifndef GEODE_STATICS_getIsHidden
		#define GEODE_STATICS_getIsHidden
		GEODE_AS_STATIC_FUNCTION(getIsHidden) 
	#endif

	#ifndef GEODE_STATICS_getIsUnlocked
		#define GEODE_STATICS_getIsUnlocked
		GEODE_AS_STATIC_FUNCTION(getIsUnlocked) 
	#endif

	#ifndef GEODE_STATICS_getIsUploaded
		#define GEODE_STATICS_getIsUploaded
		GEODE_AS_STATIC_FUNCTION(getIsUploaded) 
	#endif

	#ifndef GEODE_STATICS_getIsVerified
		#define GEODE_STATICS_getIsVerified
		GEODE_AS_STATIC_FUNCTION(getIsVerified) 
	#endif

	#ifndef GEODE_STATICS_getJumps
		#define GEODE_STATICS_getJumps
		GEODE_AS_STATIC_FUNCTION(getJumps) 
	#endif

	#ifndef GEODE_STATICS_getLastBuildGroupID
		#define GEODE_STATICS_getLastBuildGroupID
		GEODE_AS_STATIC_FUNCTION(getLastBuildGroupID) 
	#endif

	#ifndef GEODE_STATICS_getLastBuildPage
		#define GEODE_STATICS_getLastBuildPage
		GEODE_AS_STATIC_FUNCTION(getLastBuildPage) 
	#endif

	#ifndef GEODE_STATICS_getLastBuildPageForTab
		#define GEODE_STATICS_getLastBuildPageForTab
		GEODE_AS_STATIC_FUNCTION(getLastBuildPageForTab) 
	#endif

	#ifndef GEODE_STATICS_getLastBuildSave
		#define GEODE_STATICS_getLastBuildSave
		GEODE_AS_STATIC_FUNCTION(getLastBuildSave) 
	#endif

	#ifndef GEODE_STATICS_getLastBuildTab
		#define GEODE_STATICS_getLastBuildTab
		GEODE_AS_STATIC_FUNCTION(getLastBuildTab) 
	#endif

	#ifndef GEODE_STATICS_getLastCameraPos
		#define GEODE_STATICS_getLastCameraPos
		GEODE_AS_STATIC_FUNCTION(getLastCameraPos) 
	#endif

	#ifndef GEODE_STATICS_getLastEditorZoom
		#define GEODE_STATICS_getLastEditorZoom
		GEODE_AS_STATIC_FUNCTION(getLastEditorZoom) 
	#endif

	#ifndef GEODE_STATICS_getLengthKey
		#define GEODE_STATICS_getLengthKey
		GEODE_AS_STATIC_FUNCTION(getLengthKey) 
	#endif

	#ifndef GEODE_STATICS_getLevelDesc
		#define GEODE_STATICS_getLevelDesc
		GEODE_AS_STATIC_FUNCTION(getLevelDesc) 
	#endif

	#ifndef GEODE_STATICS_getLevelID
		#define GEODE_STATICS_getLevelID
		GEODE_AS_STATIC_FUNCTION(getLevelID) 
	#endif

	#ifndef GEODE_STATICS_getLevelLength
		#define GEODE_STATICS_getLevelLength
		GEODE_AS_STATIC_FUNCTION(getLevelLength) 
	#endif

	#ifndef GEODE_STATICS_getLevelName
		#define GEODE_STATICS_getLevelName
		GEODE_AS_STATIC_FUNCTION(getLevelName) 
	#endif

	#ifndef GEODE_STATICS_getLevelRev
		#define GEODE_STATICS_getLevelRev
		GEODE_AS_STATIC_FUNCTION(getLevelRev) 
	#endif

	#ifndef GEODE_STATICS_getLevelString
		#define GEODE_STATICS_getLevelString
		GEODE_AS_STATIC_FUNCTION(getLevelString) 
	#endif

	#ifndef GEODE_STATICS_getLevelType
		#define GEODE_STATICS_getLevelType
		GEODE_AS_STATIC_FUNCTION(getLevelType) 
	#endif

	#ifndef GEODE_STATICS_getLevelVersion
		#define GEODE_STATICS_getLevelVersion
		GEODE_AS_STATIC_FUNCTION(getLevelVersion) 
	#endif

	#ifndef GEODE_STATICS_getLikes
		#define GEODE_STATICS_getLikes
		GEODE_AS_STATIC_FUNCTION(getLikes) 
	#endif

	#ifndef GEODE_STATICS_getM_ID
		#define GEODE_STATICS_getM_ID
		GEODE_AS_STATIC_FUNCTION(getM_ID) 
	#endif

	#ifndef GEODE_STATICS_getMaxStarRatings
		#define GEODE_STATICS_getMaxStarRatings
		GEODE_AS_STATIC_FUNCTION(getMaxStarRatings) 
	#endif

	#ifndef GEODE_STATICS_getMinStarRatings
		#define GEODE_STATICS_getMinStarRatings
		GEODE_AS_STATIC_FUNCTION(getMinStarRatings) 
	#endif

	#ifndef GEODE_STATICS_getNormalPercent
		#define GEODE_STATICS_getNormalPercent
		GEODE_AS_STATIC_FUNCTION(getNormalPercent) 
	#endif

	#ifndef GEODE_STATICS_getObjectCount
		#define GEODE_STATICS_getObjectCount
		GEODE_AS_STATIC_FUNCTION(getObjectCount) 
	#endif

	#ifndef GEODE_STATICS_getOrder
		#define GEODE_STATICS_getOrder
		GEODE_AS_STATIC_FUNCTION(getOrder) 
	#endif

	#ifndef GEODE_STATICS_getOriginalLevel
		#define GEODE_STATICS_getOriginalLevel
		GEODE_AS_STATIC_FUNCTION(getOriginalLevel) 
	#endif

	#ifndef GEODE_STATICS_getPassword
		#define GEODE_STATICS_getPassword
		GEODE_AS_STATIC_FUNCTION(getPassword) 
	#endif

	#ifndef GEODE_STATICS_getPracticePercent
		#define GEODE_STATICS_getPracticePercent
		GEODE_AS_STATIC_FUNCTION(getPracticePercent) 
	#endif

	#ifndef GEODE_STATICS_getRateFeature
		#define GEODE_STATICS_getRateFeature
		GEODE_AS_STATIC_FUNCTION(getRateFeature) 
	#endif

	#ifndef GEODE_STATICS_getRateStars
		#define GEODE_STATICS_getRateStars
		GEODE_AS_STATIC_FUNCTION(getRateStars) 
	#endif

	#ifndef GEODE_STATICS_getRateUser
		#define GEODE_STATICS_getRateUser
		GEODE_AS_STATIC_FUNCTION(getRateUser) 
	#endif

	#ifndef GEODE_STATICS_getRatings
		#define GEODE_STATICS_getRatings
		GEODE_AS_STATIC_FUNCTION(getRatings) 
	#endif

	#ifndef GEODE_STATICS_getRatingsSum
		#define GEODE_STATICS_getRatingsSum
		GEODE_AS_STATIC_FUNCTION(getRatingsSum) 
	#endif

	#ifndef GEODE_STATICS_getRecordString
		#define GEODE_STATICS_getRecordString
		GEODE_AS_STATIC_FUNCTION(getRecordString) 
	#endif

	#ifndef GEODE_STATICS_getRequestedStars
		#define GEODE_STATICS_getRequestedStars
		GEODE_AS_STATIC_FUNCTION(getRequestedStars) 
	#endif

	#ifndef GEODE_STATICS_getRequiredCoins
		#define GEODE_STATICS_getRequiredCoins
		GEODE_AS_STATIC_FUNCTION(getRequiredCoins) 
	#endif

	#ifndef GEODE_STATICS_getShowedSongWarning
		#define GEODE_STATICS_getShowedSongWarning
		GEODE_AS_STATIC_FUNCTION(getShowedSongWarning) 
	#endif

	#ifndef GEODE_STATICS_getSongID
		#define GEODE_STATICS_getSongID
		GEODE_AS_STATIC_FUNCTION(getSongID) 
	#endif

	#ifndef GEODE_STATICS_getSongName
		#define GEODE_STATICS_getSongName
		GEODE_AS_STATIC_FUNCTION(getSongName) 
	#endif

	#ifndef GEODE_STATICS_getStarRatings
		#define GEODE_STATICS_getStarRatings
		GEODE_AS_STATIC_FUNCTION(getStarRatings) 
	#endif

	#ifndef GEODE_STATICS_getStarRatingsSum
		#define GEODE_STATICS_getStarRatingsSum
		GEODE_AS_STATIC_FUNCTION(getStarRatingsSum) 
	#endif

	#ifndef GEODE_STATICS_getStars
		#define GEODE_STATICS_getStars
		GEODE_AS_STATIC_FUNCTION(getStars) 
	#endif

	#ifndef GEODE_STATICS_getTempName
		#define GEODE_STATICS_getTempName
		GEODE_AS_STATIC_FUNCTION(getTempName) 
	#endif

	#ifndef GEODE_STATICS_getTwoPlayerMode
		#define GEODE_STATICS_getTwoPlayerMode
		GEODE_AS_STATIC_FUNCTION(getTwoPlayerMode) 
	#endif

	#ifndef GEODE_STATICS_getUnpackedLevelDescription
		#define GEODE_STATICS_getUnpackedLevelDescription
		GEODE_AS_STATIC_FUNCTION(getUnpackedLevelDescription) 
	#endif

	#ifndef GEODE_STATICS_getUpdateDate
		#define GEODE_STATICS_getUpdateDate
		GEODE_AS_STATIC_FUNCTION(getUpdateDate) 
	#endif

	#ifndef GEODE_STATICS_getUploadDate
		#define GEODE_STATICS_getUploadDate
		GEODE_AS_STATIC_FUNCTION(getUploadDate) 
	#endif

	#ifndef GEODE_STATICS_getUserID
		#define GEODE_STATICS_getUserID
		GEODE_AS_STATIC_FUNCTION(getUserID) 
	#endif

	#ifndef GEODE_STATICS_getUserName
		#define GEODE_STATICS_getUserName
		GEODE_AS_STATIC_FUNCTION(getUserName) 
	#endif

	#ifndef GEODE_STATICS_getWasCheatReset
		#define GEODE_STATICS_getWasCheatReset
		GEODE_AS_STATIC_FUNCTION(getWasCheatReset) 
	#endif

	#ifndef GEODE_STATICS_handleStatsConflict
		#define GEODE_STATICS_handleStatsConflict
		GEODE_AS_STATIC_FUNCTION(handleStatsConflict) 
	#endif

	#ifndef GEODE_STATICS_lengthKeyToString
		#define GEODE_STATICS_lengthKeyToString
		GEODE_AS_STATIC_FUNCTION(lengthKeyToString) 
	#endif

	#ifndef GEODE_STATICS_levelWasAltered
		#define GEODE_STATICS_levelWasAltered
		GEODE_AS_STATIC_FUNCTION(levelWasAltered) 
	#endif

	#ifndef GEODE_STATICS_levelWasSubmitted
		#define GEODE_STATICS_levelWasSubmitted
		GEODE_AS_STATIC_FUNCTION(levelWasSubmitted) 
	#endif

	#ifndef GEODE_STATICS_savePercentage
		#define GEODE_STATICS_savePercentage
		GEODE_AS_STATIC_FUNCTION(savePercentage) 
	#endif

	#ifndef GEODE_STATICS_setAccountID
		#define GEODE_STATICS_setAccountID
		GEODE_AS_STATIC_FUNCTION(setAccountID) 
	#endif

	#ifndef GEODE_STATICS_setAttempts
		#define GEODE_STATICS_setAttempts
		GEODE_AS_STATIC_FUNCTION(setAttempts) 
	#endif

	#ifndef GEODE_STATICS_setAudioTrack
		#define GEODE_STATICS_setAudioTrack
		GEODE_AS_STATIC_FUNCTION(setAudioTrack) 
	#endif

	#ifndef GEODE_STATICS_setAutoLevel
		#define GEODE_STATICS_setAutoLevel
		GEODE_AS_STATIC_FUNCTION(setAutoLevel) 
	#endif

	#ifndef GEODE_STATICS_setCapacityString
		#define GEODE_STATICS_setCapacityString
		GEODE_AS_STATIC_FUNCTION(setCapacityString) 
	#endif

	#ifndef GEODE_STATICS_setCoin1Verified
		#define GEODE_STATICS_setCoin1Verified
		GEODE_AS_STATIC_FUNCTION(setCoin1Verified) 
	#endif

	#ifndef GEODE_STATICS_setCoin2Verified
		#define GEODE_STATICS_setCoin2Verified
		GEODE_AS_STATIC_FUNCTION(setCoin2Verified) 
	#endif

	#ifndef GEODE_STATICS_setCoin3Verified
		#define GEODE_STATICS_setCoin3Verified
		GEODE_AS_STATIC_FUNCTION(setCoin3Verified) 
	#endif

	#ifndef GEODE_STATICS_setCoins
		#define GEODE_STATICS_setCoins
		GEODE_AS_STATIC_FUNCTION(setCoins) 
	#endif

	#ifndef GEODE_STATICS_setCoinsVerified
		#define GEODE_STATICS_setCoinsVerified
		GEODE_AS_STATIC_FUNCTION(setCoinsVerified) 
	#endif

	#ifndef GEODE_STATICS_setCompletes
		#define GEODE_STATICS_setCompletes
		GEODE_AS_STATIC_FUNCTION(setCompletes) 
	#endif

	#ifndef GEODE_STATICS_setDemon
		#define GEODE_STATICS_setDemon
		GEODE_AS_STATIC_FUNCTION(setDemon) 
	#endif

	#ifndef GEODE_STATICS_setDemonVotes
		#define GEODE_STATICS_setDemonVotes
		GEODE_AS_STATIC_FUNCTION(setDemonVotes) 
	#endif

	#ifndef GEODE_STATICS_setDifficulty
		#define GEODE_STATICS_setDifficulty
		GEODE_AS_STATIC_FUNCTION(setDifficulty) 
	#endif

	#ifndef GEODE_STATICS_setDislikes
		#define GEODE_STATICS_setDislikes
		GEODE_AS_STATIC_FUNCTION(setDislikes) 
	#endif

	#ifndef GEODE_STATICS_setDontSave
		#define GEODE_STATICS_setDontSave
		GEODE_AS_STATIC_FUNCTION(setDontSave) 
	#endif

	#ifndef GEODE_STATICS_setDownloads
		#define GEODE_STATICS_setDownloads
		GEODE_AS_STATIC_FUNCTION(setDownloads) 
	#endif

	#ifndef GEODE_STATICS_setFailedPasswordAttempts
		#define GEODE_STATICS_setFailedPasswordAttempts
		GEODE_AS_STATIC_FUNCTION(setFailedPasswordAttempts) 
	#endif

	#ifndef GEODE_STATICS_setFeatured
		#define GEODE_STATICS_setFeatured
		GEODE_AS_STATIC_FUNCTION(setFeatured) 
	#endif

	#ifndef GEODE_STATICS_setGameVersion
		#define GEODE_STATICS_setGameVersion
		GEODE_AS_STATIC_FUNCTION(setGameVersion) 
	#endif

	#ifndef GEODE_STATICS_setHasBeenModified
		#define GEODE_STATICS_setHasBeenModified
		GEODE_AS_STATIC_FUNCTION(setHasBeenModified) 
	#endif

	#ifndef GEODE_STATICS_setIsEditable
		#define GEODE_STATICS_setIsEditable
		GEODE_AS_STATIC_FUNCTION(setIsEditable) 
	#endif

	#ifndef GEODE_STATICS_setIsHidden
		#define GEODE_STATICS_setIsHidden
		GEODE_AS_STATIC_FUNCTION(setIsHidden) 
	#endif

	#ifndef GEODE_STATICS_setIsUnlocked
		#define GEODE_STATICS_setIsUnlocked
		GEODE_AS_STATIC_FUNCTION(setIsUnlocked) 
	#endif

	#ifndef GEODE_STATICS_setIsUploaded
		#define GEODE_STATICS_setIsUploaded
		GEODE_AS_STATIC_FUNCTION(setIsUploaded) 
	#endif

	#ifndef GEODE_STATICS_setIsVerified
		#define GEODE_STATICS_setIsVerified
		GEODE_AS_STATIC_FUNCTION(setIsVerified) 
	#endif

	#ifndef GEODE_STATICS_setJumps
		#define GEODE_STATICS_setJumps
		GEODE_AS_STATIC_FUNCTION(setJumps) 
	#endif

	#ifndef GEODE_STATICS_setLastBuildGroupID
		#define GEODE_STATICS_setLastBuildGroupID
		GEODE_AS_STATIC_FUNCTION(setLastBuildGroupID) 
	#endif

	#ifndef GEODE_STATICS_setLastBuildPage
		#define GEODE_STATICS_setLastBuildPage
		GEODE_AS_STATIC_FUNCTION(setLastBuildPage) 
	#endif

	#ifndef GEODE_STATICS_setLastBuildPageForTab
		#define GEODE_STATICS_setLastBuildPageForTab
		GEODE_AS_STATIC_FUNCTION(setLastBuildPageForTab) 
	#endif

	#ifndef GEODE_STATICS_setLastBuildSave
		#define GEODE_STATICS_setLastBuildSave
		GEODE_AS_STATIC_FUNCTION(setLastBuildSave) 
	#endif

	#ifndef GEODE_STATICS_setLastBuildTab
		#define GEODE_STATICS_setLastBuildTab
		GEODE_AS_STATIC_FUNCTION(setLastBuildTab) 
	#endif

	#ifndef GEODE_STATICS_setLastCameraPos
		#define GEODE_STATICS_setLastCameraPos
		GEODE_AS_STATIC_FUNCTION(setLastCameraPos) 
	#endif

	#ifndef GEODE_STATICS_setLastEditorZoom
		#define GEODE_STATICS_setLastEditorZoom
		GEODE_AS_STATIC_FUNCTION(setLastEditorZoom) 
	#endif

	#ifndef GEODE_STATICS_setLevelDesc
		#define GEODE_STATICS_setLevelDesc
		GEODE_AS_STATIC_FUNCTION(setLevelDesc) 
	#endif

	#ifndef GEODE_STATICS_setLevelID
		#define GEODE_STATICS_setLevelID
		GEODE_AS_STATIC_FUNCTION(setLevelID) 
	#endif

	#ifndef GEODE_STATICS_setLevelLength
		#define GEODE_STATICS_setLevelLength
		GEODE_AS_STATIC_FUNCTION(setLevelLength) 
	#endif

	#ifndef GEODE_STATICS_setLevelName
		#define GEODE_STATICS_setLevelName
		GEODE_AS_STATIC_FUNCTION(setLevelName) 
	#endif

	#ifndef GEODE_STATICS_setLevelRev
		#define GEODE_STATICS_setLevelRev
		GEODE_AS_STATIC_FUNCTION(setLevelRev) 
	#endif

	#ifndef GEODE_STATICS_setLevelString
		#define GEODE_STATICS_setLevelString
		GEODE_AS_STATIC_FUNCTION(setLevelString) 
	#endif

	#ifndef GEODE_STATICS_setLevelType
		#define GEODE_STATICS_setLevelType
		GEODE_AS_STATIC_FUNCTION(setLevelType) 
	#endif

	#ifndef GEODE_STATICS_setLevelVersion
		#define GEODE_STATICS_setLevelVersion
		GEODE_AS_STATIC_FUNCTION(setLevelVersion) 
	#endif

	#ifndef GEODE_STATICS_setLikes
		#define GEODE_STATICS_setLikes
		GEODE_AS_STATIC_FUNCTION(setLikes) 
	#endif

	#ifndef GEODE_STATICS_setMaxStarRatings
		#define GEODE_STATICS_setMaxStarRatings
		GEODE_AS_STATIC_FUNCTION(setMaxStarRatings) 
	#endif

	#ifndef GEODE_STATICS_setMinStarRatings
		#define GEODE_STATICS_setMinStarRatings
		GEODE_AS_STATIC_FUNCTION(setMinStarRatings) 
	#endif

	#ifndef GEODE_STATICS_setNormalPercent
		#define GEODE_STATICS_setNormalPercent
		GEODE_AS_STATIC_FUNCTION(setNormalPercent) 
	#endif

	#ifndef GEODE_STATICS_setObjectCount
		#define GEODE_STATICS_setObjectCount
		GEODE_AS_STATIC_FUNCTION(setObjectCount) 
	#endif

	#ifndef GEODE_STATICS_setOrder
		#define GEODE_STATICS_setOrder
		GEODE_AS_STATIC_FUNCTION(setOrder) 
	#endif

	#ifndef GEODE_STATICS_setOriginalLevel
		#define GEODE_STATICS_setOriginalLevel
		GEODE_AS_STATIC_FUNCTION(setOriginalLevel) 
	#endif

	#ifndef GEODE_STATICS_setPassword
		#define GEODE_STATICS_setPassword
		GEODE_AS_STATIC_FUNCTION(setPassword) 
	#endif

	#ifndef GEODE_STATICS_setPracticePercent
		#define GEODE_STATICS_setPracticePercent
		GEODE_AS_STATIC_FUNCTION(setPracticePercent) 
	#endif

	#ifndef GEODE_STATICS_setRateFeature
		#define GEODE_STATICS_setRateFeature
		GEODE_AS_STATIC_FUNCTION(setRateFeature) 
	#endif

	#ifndef GEODE_STATICS_setRateStars
		#define GEODE_STATICS_setRateStars
		GEODE_AS_STATIC_FUNCTION(setRateStars) 
	#endif

	#ifndef GEODE_STATICS_setRateUser
		#define GEODE_STATICS_setRateUser
		GEODE_AS_STATIC_FUNCTION(setRateUser) 
	#endif

	#ifndef GEODE_STATICS_setRatings
		#define GEODE_STATICS_setRatings
		GEODE_AS_STATIC_FUNCTION(setRatings) 
	#endif

	#ifndef GEODE_STATICS_setRatingsSum
		#define GEODE_STATICS_setRatingsSum
		GEODE_AS_STATIC_FUNCTION(setRatingsSum) 
	#endif

	#ifndef GEODE_STATICS_setRecordString
		#define GEODE_STATICS_setRecordString
		GEODE_AS_STATIC_FUNCTION(setRecordString) 
	#endif

	#ifndef GEODE_STATICS_setRequestedStars
		#define GEODE_STATICS_setRequestedStars
		GEODE_AS_STATIC_FUNCTION(setRequestedStars) 
	#endif

	#ifndef GEODE_STATICS_setRequiredCoins
		#define GEODE_STATICS_setRequiredCoins
		GEODE_AS_STATIC_FUNCTION(setRequiredCoins) 
	#endif

	#ifndef GEODE_STATICS_setShowedSongWarning
		#define GEODE_STATICS_setShowedSongWarning
		GEODE_AS_STATIC_FUNCTION(setShowedSongWarning) 
	#endif

	#ifndef GEODE_STATICS_setSongID
		#define GEODE_STATICS_setSongID
		GEODE_AS_STATIC_FUNCTION(setSongID) 
	#endif

	#ifndef GEODE_STATICS_setStarRatings
		#define GEODE_STATICS_setStarRatings
		GEODE_AS_STATIC_FUNCTION(setStarRatings) 
	#endif

	#ifndef GEODE_STATICS_setStarRatingsSum
		#define GEODE_STATICS_setStarRatingsSum
		GEODE_AS_STATIC_FUNCTION(setStarRatingsSum) 
	#endif

	#ifndef GEODE_STATICS_setStars
		#define GEODE_STATICS_setStars
		GEODE_AS_STATIC_FUNCTION(setStars) 
	#endif

	#ifndef GEODE_STATICS_setTempName
		#define GEODE_STATICS_setTempName
		GEODE_AS_STATIC_FUNCTION(setTempName) 
	#endif

	#ifndef GEODE_STATICS_setTwoPlayerMode
		#define GEODE_STATICS_setTwoPlayerMode
		GEODE_AS_STATIC_FUNCTION(setTwoPlayerMode) 
	#endif

	#ifndef GEODE_STATICS_setUpdateDate
		#define GEODE_STATICS_setUpdateDate
		GEODE_AS_STATIC_FUNCTION(setUpdateDate) 
	#endif

	#ifndef GEODE_STATICS_setUploadDate
		#define GEODE_STATICS_setUploadDate
		GEODE_AS_STATIC_FUNCTION(setUploadDate) 
	#endif

	#ifndef GEODE_STATICS_setUserID
		#define GEODE_STATICS_setUserID
		GEODE_AS_STATIC_FUNCTION(setUserID) 
	#endif

	#ifndef GEODE_STATICS_setUserName
		#define GEODE_STATICS_setUserName
		GEODE_AS_STATIC_FUNCTION(setUserName) 
	#endif

	#ifndef GEODE_STATICS_setWasCheatReset
		#define GEODE_STATICS_setWasCheatReset
		GEODE_AS_STATIC_FUNCTION(setWasCheatReset) 
	#endif

	#ifndef GEODE_STATICS_unverifyCoins
		#define GEODE_STATICS_unverifyCoins
		GEODE_AS_STATIC_FUNCTION(unverifyCoins) 
	#endif

	#ifndef GEODE_STATICS_encodeWithCoder
		#define GEODE_STATICS_encodeWithCoder
		GEODE_AS_STATIC_FUNCTION(encodeWithCoder) 
	#endif

	#ifndef GEODE_STATICS_canEncode
		#define GEODE_STATICS_canEncode
		GEODE_AS_STATIC_FUNCTION(canEncode) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_areCoinsVerified
		#define GEODE_CONCEPT_CHECK_areCoinsVerified
		GEODE_CONCEPT_FUNCTION_CHECK(areCoinsVerified) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithCoder
		#define GEODE_CONCEPT_CHECK_createWithCoder
		GEODE_CONCEPT_FUNCTION_CHECK(createWithCoder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dataLoaded
		#define GEODE_CONCEPT_CHECK_dataLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(dataLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAccountID
		#define GEODE_CONCEPT_CHECK_getAccountID
		GEODE_CONCEPT_FUNCTION_CHECK(getAccountID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAttempts
		#define GEODE_CONCEPT_CHECK_getAttempts
		GEODE_CONCEPT_FUNCTION_CHECK(getAttempts) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAudioFileName
		#define GEODE_CONCEPT_CHECK_getAudioFileName
		GEODE_CONCEPT_FUNCTION_CHECK(getAudioFileName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAudioTrack
		#define GEODE_CONCEPT_CHECK_getAudioTrack
		GEODE_CONCEPT_FUNCTION_CHECK(getAudioTrack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAutoLevel
		#define GEODE_CONCEPT_CHECK_getAutoLevel
		GEODE_CONCEPT_FUNCTION_CHECK(getAutoLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAverageDifficulty
		#define GEODE_CONCEPT_CHECK_getAverageDifficulty
		GEODE_CONCEPT_FUNCTION_CHECK(getAverageDifficulty) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCapacityString
		#define GEODE_CONCEPT_CHECK_getCapacityString
		GEODE_CONCEPT_FUNCTION_CHECK(getCapacityString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCoin1Verified
		#define GEODE_CONCEPT_CHECK_getCoin1Verified
		GEODE_CONCEPT_FUNCTION_CHECK(getCoin1Verified) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCoin2Verified
		#define GEODE_CONCEPT_CHECK_getCoin2Verified
		GEODE_CONCEPT_FUNCTION_CHECK(getCoin2Verified) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCoin3Verified
		#define GEODE_CONCEPT_CHECK_getCoin3Verified
		GEODE_CONCEPT_FUNCTION_CHECK(getCoin3Verified) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCoinKey
		#define GEODE_CONCEPT_CHECK_getCoinKey
		GEODE_CONCEPT_FUNCTION_CHECK(getCoinKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCoins
		#define GEODE_CONCEPT_CHECK_getCoins
		GEODE_CONCEPT_FUNCTION_CHECK(getCoins) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCoinsVerified
		#define GEODE_CONCEPT_CHECK_getCoinsVerified
		GEODE_CONCEPT_FUNCTION_CHECK(getCoinsVerified) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCompletes
		#define GEODE_CONCEPT_CHECK_getCompletes
		GEODE_CONCEPT_FUNCTION_CHECK(getCompletes) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDemon
		#define GEODE_CONCEPT_CHECK_getDemon
		GEODE_CONCEPT_FUNCTION_CHECK(getDemon) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDemonVotes
		#define GEODE_CONCEPT_CHECK_getDemonVotes
		GEODE_CONCEPT_FUNCTION_CHECK(getDemonVotes) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDifficulty
		#define GEODE_CONCEPT_CHECK_getDifficulty
		GEODE_CONCEPT_FUNCTION_CHECK(getDifficulty) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDislikes
		#define GEODE_CONCEPT_CHECK_getDislikes
		GEODE_CONCEPT_FUNCTION_CHECK(getDislikes) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDontSave
		#define GEODE_CONCEPT_CHECK_getDontSave
		GEODE_CONCEPT_FUNCTION_CHECK(getDontSave) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDownloads
		#define GEODE_CONCEPT_CHECK_getDownloads
		GEODE_CONCEPT_FUNCTION_CHECK(getDownloads) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFailedPasswordAttempts
		#define GEODE_CONCEPT_CHECK_getFailedPasswordAttempts
		GEODE_CONCEPT_FUNCTION_CHECK(getFailedPasswordAttempts) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFeatured
		#define GEODE_CONCEPT_CHECK_getFeatured
		GEODE_CONCEPT_FUNCTION_CHECK(getFeatured) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGameVersion
		#define GEODE_CONCEPT_CHECK_getGameVersion
		GEODE_CONCEPT_FUNCTION_CHECK(getGameVersion) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getHasBeenModified
		#define GEODE_CONCEPT_CHECK_getHasBeenModified
		GEODE_CONCEPT_FUNCTION_CHECK(getHasBeenModified) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIsEditable
		#define GEODE_CONCEPT_CHECK_getIsEditable
		GEODE_CONCEPT_FUNCTION_CHECK(getIsEditable) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIsHidden
		#define GEODE_CONCEPT_CHECK_getIsHidden
		GEODE_CONCEPT_FUNCTION_CHECK(getIsHidden) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIsUnlocked
		#define GEODE_CONCEPT_CHECK_getIsUnlocked
		GEODE_CONCEPT_FUNCTION_CHECK(getIsUnlocked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIsUploaded
		#define GEODE_CONCEPT_CHECK_getIsUploaded
		GEODE_CONCEPT_FUNCTION_CHECK(getIsUploaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIsVerified
		#define GEODE_CONCEPT_CHECK_getIsVerified
		GEODE_CONCEPT_FUNCTION_CHECK(getIsVerified) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getJumps
		#define GEODE_CONCEPT_CHECK_getJumps
		GEODE_CONCEPT_FUNCTION_CHECK(getJumps) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLastBuildGroupID
		#define GEODE_CONCEPT_CHECK_getLastBuildGroupID
		GEODE_CONCEPT_FUNCTION_CHECK(getLastBuildGroupID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLastBuildPage
		#define GEODE_CONCEPT_CHECK_getLastBuildPage
		GEODE_CONCEPT_FUNCTION_CHECK(getLastBuildPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLastBuildPageForTab
		#define GEODE_CONCEPT_CHECK_getLastBuildPageForTab
		GEODE_CONCEPT_FUNCTION_CHECK(getLastBuildPageForTab) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLastBuildSave
		#define GEODE_CONCEPT_CHECK_getLastBuildSave
		GEODE_CONCEPT_FUNCTION_CHECK(getLastBuildSave) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLastBuildTab
		#define GEODE_CONCEPT_CHECK_getLastBuildTab
		GEODE_CONCEPT_FUNCTION_CHECK(getLastBuildTab) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLastCameraPos
		#define GEODE_CONCEPT_CHECK_getLastCameraPos
		GEODE_CONCEPT_FUNCTION_CHECK(getLastCameraPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLastEditorZoom
		#define GEODE_CONCEPT_CHECK_getLastEditorZoom
		GEODE_CONCEPT_FUNCTION_CHECK(getLastEditorZoom) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLengthKey
		#define GEODE_CONCEPT_CHECK_getLengthKey
		GEODE_CONCEPT_FUNCTION_CHECK(getLengthKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLevelDesc
		#define GEODE_CONCEPT_CHECK_getLevelDesc
		GEODE_CONCEPT_FUNCTION_CHECK(getLevelDesc) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLevelID
		#define GEODE_CONCEPT_CHECK_getLevelID
		GEODE_CONCEPT_FUNCTION_CHECK(getLevelID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLevelLength
		#define GEODE_CONCEPT_CHECK_getLevelLength
		GEODE_CONCEPT_FUNCTION_CHECK(getLevelLength) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLevelName
		#define GEODE_CONCEPT_CHECK_getLevelName
		GEODE_CONCEPT_FUNCTION_CHECK(getLevelName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLevelRev
		#define GEODE_CONCEPT_CHECK_getLevelRev
		GEODE_CONCEPT_FUNCTION_CHECK(getLevelRev) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLevelString
		#define GEODE_CONCEPT_CHECK_getLevelString
		GEODE_CONCEPT_FUNCTION_CHECK(getLevelString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLevelType
		#define GEODE_CONCEPT_CHECK_getLevelType
		GEODE_CONCEPT_FUNCTION_CHECK(getLevelType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLevelVersion
		#define GEODE_CONCEPT_CHECK_getLevelVersion
		GEODE_CONCEPT_FUNCTION_CHECK(getLevelVersion) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLikes
		#define GEODE_CONCEPT_CHECK_getLikes
		GEODE_CONCEPT_FUNCTION_CHECK(getLikes) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getM_ID
		#define GEODE_CONCEPT_CHECK_getM_ID
		GEODE_CONCEPT_FUNCTION_CHECK(getM_ID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMaxStarRatings
		#define GEODE_CONCEPT_CHECK_getMaxStarRatings
		GEODE_CONCEPT_FUNCTION_CHECK(getMaxStarRatings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMinStarRatings
		#define GEODE_CONCEPT_CHECK_getMinStarRatings
		GEODE_CONCEPT_FUNCTION_CHECK(getMinStarRatings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNormalPercent
		#define GEODE_CONCEPT_CHECK_getNormalPercent
		GEODE_CONCEPT_FUNCTION_CHECK(getNormalPercent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getObjectCount
		#define GEODE_CONCEPT_CHECK_getObjectCount
		GEODE_CONCEPT_FUNCTION_CHECK(getObjectCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOrder
		#define GEODE_CONCEPT_CHECK_getOrder
		GEODE_CONCEPT_FUNCTION_CHECK(getOrder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOriginalLevel
		#define GEODE_CONCEPT_CHECK_getOriginalLevel
		GEODE_CONCEPT_FUNCTION_CHECK(getOriginalLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPassword
		#define GEODE_CONCEPT_CHECK_getPassword
		GEODE_CONCEPT_FUNCTION_CHECK(getPassword) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPracticePercent
		#define GEODE_CONCEPT_CHECK_getPracticePercent
		GEODE_CONCEPT_FUNCTION_CHECK(getPracticePercent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRateFeature
		#define GEODE_CONCEPT_CHECK_getRateFeature
		GEODE_CONCEPT_FUNCTION_CHECK(getRateFeature) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRateStars
		#define GEODE_CONCEPT_CHECK_getRateStars
		GEODE_CONCEPT_FUNCTION_CHECK(getRateStars) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRateUser
		#define GEODE_CONCEPT_CHECK_getRateUser
		GEODE_CONCEPT_FUNCTION_CHECK(getRateUser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRatings
		#define GEODE_CONCEPT_CHECK_getRatings
		GEODE_CONCEPT_FUNCTION_CHECK(getRatings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRatingsSum
		#define GEODE_CONCEPT_CHECK_getRatingsSum
		GEODE_CONCEPT_FUNCTION_CHECK(getRatingsSum) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRecordString
		#define GEODE_CONCEPT_CHECK_getRecordString
		GEODE_CONCEPT_FUNCTION_CHECK(getRecordString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRequestedStars
		#define GEODE_CONCEPT_CHECK_getRequestedStars
		GEODE_CONCEPT_FUNCTION_CHECK(getRequestedStars) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRequiredCoins
		#define GEODE_CONCEPT_CHECK_getRequiredCoins
		GEODE_CONCEPT_FUNCTION_CHECK(getRequiredCoins) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getShowedSongWarning
		#define GEODE_CONCEPT_CHECK_getShowedSongWarning
		GEODE_CONCEPT_FUNCTION_CHECK(getShowedSongWarning) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSongID
		#define GEODE_CONCEPT_CHECK_getSongID
		GEODE_CONCEPT_FUNCTION_CHECK(getSongID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSongName
		#define GEODE_CONCEPT_CHECK_getSongName
		GEODE_CONCEPT_FUNCTION_CHECK(getSongName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStarRatings
		#define GEODE_CONCEPT_CHECK_getStarRatings
		GEODE_CONCEPT_FUNCTION_CHECK(getStarRatings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStarRatingsSum
		#define GEODE_CONCEPT_CHECK_getStarRatingsSum
		GEODE_CONCEPT_FUNCTION_CHECK(getStarRatingsSum) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStars
		#define GEODE_CONCEPT_CHECK_getStars
		GEODE_CONCEPT_FUNCTION_CHECK(getStars) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTempName
		#define GEODE_CONCEPT_CHECK_getTempName
		GEODE_CONCEPT_FUNCTION_CHECK(getTempName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTwoPlayerMode
		#define GEODE_CONCEPT_CHECK_getTwoPlayerMode
		GEODE_CONCEPT_FUNCTION_CHECK(getTwoPlayerMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUnpackedLevelDescription
		#define GEODE_CONCEPT_CHECK_getUnpackedLevelDescription
		GEODE_CONCEPT_FUNCTION_CHECK(getUnpackedLevelDescription) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUpdateDate
		#define GEODE_CONCEPT_CHECK_getUpdateDate
		GEODE_CONCEPT_FUNCTION_CHECK(getUpdateDate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUploadDate
		#define GEODE_CONCEPT_CHECK_getUploadDate
		GEODE_CONCEPT_FUNCTION_CHECK(getUploadDate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUserID
		#define GEODE_CONCEPT_CHECK_getUserID
		GEODE_CONCEPT_FUNCTION_CHECK(getUserID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUserName
		#define GEODE_CONCEPT_CHECK_getUserName
		GEODE_CONCEPT_FUNCTION_CHECK(getUserName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getWasCheatReset
		#define GEODE_CONCEPT_CHECK_getWasCheatReset
		GEODE_CONCEPT_FUNCTION_CHECK(getWasCheatReset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleStatsConflict
		#define GEODE_CONCEPT_CHECK_handleStatsConflict
		GEODE_CONCEPT_FUNCTION_CHECK(handleStatsConflict) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_lengthKeyToString
		#define GEODE_CONCEPT_CHECK_lengthKeyToString
		GEODE_CONCEPT_FUNCTION_CHECK(lengthKeyToString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_levelWasAltered
		#define GEODE_CONCEPT_CHECK_levelWasAltered
		GEODE_CONCEPT_FUNCTION_CHECK(levelWasAltered) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_levelWasSubmitted
		#define GEODE_CONCEPT_CHECK_levelWasSubmitted
		GEODE_CONCEPT_FUNCTION_CHECK(levelWasSubmitted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_savePercentage
		#define GEODE_CONCEPT_CHECK_savePercentage
		GEODE_CONCEPT_FUNCTION_CHECK(savePercentage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setAccountID
		#define GEODE_CONCEPT_CHECK_setAccountID
		GEODE_CONCEPT_FUNCTION_CHECK(setAccountID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setAttempts
		#define GEODE_CONCEPT_CHECK_setAttempts
		GEODE_CONCEPT_FUNCTION_CHECK(setAttempts) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setAudioTrack
		#define GEODE_CONCEPT_CHECK_setAudioTrack
		GEODE_CONCEPT_FUNCTION_CHECK(setAudioTrack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setAutoLevel
		#define GEODE_CONCEPT_CHECK_setAutoLevel
		GEODE_CONCEPT_FUNCTION_CHECK(setAutoLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCapacityString
		#define GEODE_CONCEPT_CHECK_setCapacityString
		GEODE_CONCEPT_FUNCTION_CHECK(setCapacityString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCoin1Verified
		#define GEODE_CONCEPT_CHECK_setCoin1Verified
		GEODE_CONCEPT_FUNCTION_CHECK(setCoin1Verified) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCoin2Verified
		#define GEODE_CONCEPT_CHECK_setCoin2Verified
		GEODE_CONCEPT_FUNCTION_CHECK(setCoin2Verified) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCoin3Verified
		#define GEODE_CONCEPT_CHECK_setCoin3Verified
		GEODE_CONCEPT_FUNCTION_CHECK(setCoin3Verified) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCoins
		#define GEODE_CONCEPT_CHECK_setCoins
		GEODE_CONCEPT_FUNCTION_CHECK(setCoins) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCoinsVerified
		#define GEODE_CONCEPT_CHECK_setCoinsVerified
		GEODE_CONCEPT_FUNCTION_CHECK(setCoinsVerified) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCompletes
		#define GEODE_CONCEPT_CHECK_setCompletes
		GEODE_CONCEPT_FUNCTION_CHECK(setCompletes) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDemon
		#define GEODE_CONCEPT_CHECK_setDemon
		GEODE_CONCEPT_FUNCTION_CHECK(setDemon) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDemonVotes
		#define GEODE_CONCEPT_CHECK_setDemonVotes
		GEODE_CONCEPT_FUNCTION_CHECK(setDemonVotes) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDifficulty
		#define GEODE_CONCEPT_CHECK_setDifficulty
		GEODE_CONCEPT_FUNCTION_CHECK(setDifficulty) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDislikes
		#define GEODE_CONCEPT_CHECK_setDislikes
		GEODE_CONCEPT_FUNCTION_CHECK(setDislikes) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDontSave
		#define GEODE_CONCEPT_CHECK_setDontSave
		GEODE_CONCEPT_FUNCTION_CHECK(setDontSave) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDownloads
		#define GEODE_CONCEPT_CHECK_setDownloads
		GEODE_CONCEPT_FUNCTION_CHECK(setDownloads) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFailedPasswordAttempts
		#define GEODE_CONCEPT_CHECK_setFailedPasswordAttempts
		GEODE_CONCEPT_FUNCTION_CHECK(setFailedPasswordAttempts) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFeatured
		#define GEODE_CONCEPT_CHECK_setFeatured
		GEODE_CONCEPT_FUNCTION_CHECK(setFeatured) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setGameVersion
		#define GEODE_CONCEPT_CHECK_setGameVersion
		GEODE_CONCEPT_FUNCTION_CHECK(setGameVersion) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setHasBeenModified
		#define GEODE_CONCEPT_CHECK_setHasBeenModified
		GEODE_CONCEPT_FUNCTION_CHECK(setHasBeenModified) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIsEditable
		#define GEODE_CONCEPT_CHECK_setIsEditable
		GEODE_CONCEPT_FUNCTION_CHECK(setIsEditable) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIsHidden
		#define GEODE_CONCEPT_CHECK_setIsHidden
		GEODE_CONCEPT_FUNCTION_CHECK(setIsHidden) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIsUnlocked
		#define GEODE_CONCEPT_CHECK_setIsUnlocked
		GEODE_CONCEPT_FUNCTION_CHECK(setIsUnlocked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIsUploaded
		#define GEODE_CONCEPT_CHECK_setIsUploaded
		GEODE_CONCEPT_FUNCTION_CHECK(setIsUploaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIsVerified
		#define GEODE_CONCEPT_CHECK_setIsVerified
		GEODE_CONCEPT_FUNCTION_CHECK(setIsVerified) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setJumps
		#define GEODE_CONCEPT_CHECK_setJumps
		GEODE_CONCEPT_FUNCTION_CHECK(setJumps) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLastBuildGroupID
		#define GEODE_CONCEPT_CHECK_setLastBuildGroupID
		GEODE_CONCEPT_FUNCTION_CHECK(setLastBuildGroupID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLastBuildPage
		#define GEODE_CONCEPT_CHECK_setLastBuildPage
		GEODE_CONCEPT_FUNCTION_CHECK(setLastBuildPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLastBuildPageForTab
		#define GEODE_CONCEPT_CHECK_setLastBuildPageForTab
		GEODE_CONCEPT_FUNCTION_CHECK(setLastBuildPageForTab) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLastBuildSave
		#define GEODE_CONCEPT_CHECK_setLastBuildSave
		GEODE_CONCEPT_FUNCTION_CHECK(setLastBuildSave) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLastBuildTab
		#define GEODE_CONCEPT_CHECK_setLastBuildTab
		GEODE_CONCEPT_FUNCTION_CHECK(setLastBuildTab) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLastCameraPos
		#define GEODE_CONCEPT_CHECK_setLastCameraPos
		GEODE_CONCEPT_FUNCTION_CHECK(setLastCameraPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLastEditorZoom
		#define GEODE_CONCEPT_CHECK_setLastEditorZoom
		GEODE_CONCEPT_FUNCTION_CHECK(setLastEditorZoom) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLevelDesc
		#define GEODE_CONCEPT_CHECK_setLevelDesc
		GEODE_CONCEPT_FUNCTION_CHECK(setLevelDesc) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLevelID
		#define GEODE_CONCEPT_CHECK_setLevelID
		GEODE_CONCEPT_FUNCTION_CHECK(setLevelID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLevelLength
		#define GEODE_CONCEPT_CHECK_setLevelLength
		GEODE_CONCEPT_FUNCTION_CHECK(setLevelLength) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLevelName
		#define GEODE_CONCEPT_CHECK_setLevelName
		GEODE_CONCEPT_FUNCTION_CHECK(setLevelName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLevelRev
		#define GEODE_CONCEPT_CHECK_setLevelRev
		GEODE_CONCEPT_FUNCTION_CHECK(setLevelRev) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLevelString
		#define GEODE_CONCEPT_CHECK_setLevelString
		GEODE_CONCEPT_FUNCTION_CHECK(setLevelString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLevelType
		#define GEODE_CONCEPT_CHECK_setLevelType
		GEODE_CONCEPT_FUNCTION_CHECK(setLevelType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLevelVersion
		#define GEODE_CONCEPT_CHECK_setLevelVersion
		GEODE_CONCEPT_FUNCTION_CHECK(setLevelVersion) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLikes
		#define GEODE_CONCEPT_CHECK_setLikes
		GEODE_CONCEPT_FUNCTION_CHECK(setLikes) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMaxStarRatings
		#define GEODE_CONCEPT_CHECK_setMaxStarRatings
		GEODE_CONCEPT_FUNCTION_CHECK(setMaxStarRatings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMinStarRatings
		#define GEODE_CONCEPT_CHECK_setMinStarRatings
		GEODE_CONCEPT_FUNCTION_CHECK(setMinStarRatings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setNormalPercent
		#define GEODE_CONCEPT_CHECK_setNormalPercent
		GEODE_CONCEPT_FUNCTION_CHECK(setNormalPercent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setObjectCount
		#define GEODE_CONCEPT_CHECK_setObjectCount
		GEODE_CONCEPT_FUNCTION_CHECK(setObjectCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOrder
		#define GEODE_CONCEPT_CHECK_setOrder
		GEODE_CONCEPT_FUNCTION_CHECK(setOrder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOriginalLevel
		#define GEODE_CONCEPT_CHECK_setOriginalLevel
		GEODE_CONCEPT_FUNCTION_CHECK(setOriginalLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPassword
		#define GEODE_CONCEPT_CHECK_setPassword
		GEODE_CONCEPT_FUNCTION_CHECK(setPassword) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPracticePercent
		#define GEODE_CONCEPT_CHECK_setPracticePercent
		GEODE_CONCEPT_FUNCTION_CHECK(setPracticePercent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRateFeature
		#define GEODE_CONCEPT_CHECK_setRateFeature
		GEODE_CONCEPT_FUNCTION_CHECK(setRateFeature) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRateStars
		#define GEODE_CONCEPT_CHECK_setRateStars
		GEODE_CONCEPT_FUNCTION_CHECK(setRateStars) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRateUser
		#define GEODE_CONCEPT_CHECK_setRateUser
		GEODE_CONCEPT_FUNCTION_CHECK(setRateUser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRatings
		#define GEODE_CONCEPT_CHECK_setRatings
		GEODE_CONCEPT_FUNCTION_CHECK(setRatings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRatingsSum
		#define GEODE_CONCEPT_CHECK_setRatingsSum
		GEODE_CONCEPT_FUNCTION_CHECK(setRatingsSum) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRecordString
		#define GEODE_CONCEPT_CHECK_setRecordString
		GEODE_CONCEPT_FUNCTION_CHECK(setRecordString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRequestedStars
		#define GEODE_CONCEPT_CHECK_setRequestedStars
		GEODE_CONCEPT_FUNCTION_CHECK(setRequestedStars) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRequiredCoins
		#define GEODE_CONCEPT_CHECK_setRequiredCoins
		GEODE_CONCEPT_FUNCTION_CHECK(setRequiredCoins) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setShowedSongWarning
		#define GEODE_CONCEPT_CHECK_setShowedSongWarning
		GEODE_CONCEPT_FUNCTION_CHECK(setShowedSongWarning) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSongID
		#define GEODE_CONCEPT_CHECK_setSongID
		GEODE_CONCEPT_FUNCTION_CHECK(setSongID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStarRatings
		#define GEODE_CONCEPT_CHECK_setStarRatings
		GEODE_CONCEPT_FUNCTION_CHECK(setStarRatings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStarRatingsSum
		#define GEODE_CONCEPT_CHECK_setStarRatingsSum
		GEODE_CONCEPT_FUNCTION_CHECK(setStarRatingsSum) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStars
		#define GEODE_CONCEPT_CHECK_setStars
		GEODE_CONCEPT_FUNCTION_CHECK(setStars) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTempName
		#define GEODE_CONCEPT_CHECK_setTempName
		GEODE_CONCEPT_FUNCTION_CHECK(setTempName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTwoPlayerMode
		#define GEODE_CONCEPT_CHECK_setTwoPlayerMode
		GEODE_CONCEPT_FUNCTION_CHECK(setTwoPlayerMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUpdateDate
		#define GEODE_CONCEPT_CHECK_setUpdateDate
		GEODE_CONCEPT_FUNCTION_CHECK(setUpdateDate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUploadDate
		#define GEODE_CONCEPT_CHECK_setUploadDate
		GEODE_CONCEPT_FUNCTION_CHECK(setUploadDate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUserID
		#define GEODE_CONCEPT_CHECK_setUserID
		GEODE_CONCEPT_FUNCTION_CHECK(setUserID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUserName
		#define GEODE_CONCEPT_CHECK_setUserName
		GEODE_CONCEPT_FUNCTION_CHECK(setUserName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setWasCheatReset
		#define GEODE_CONCEPT_CHECK_setWasCheatReset
		GEODE_CONCEPT_FUNCTION_CHECK(setWasCheatReset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unverifyCoins
		#define GEODE_CONCEPT_CHECK_unverifyCoins
		GEODE_CONCEPT_FUNCTION_CHECK(unverifyCoins) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_encodeWithCoder
		#define GEODE_CONCEPT_CHECK_encodeWithCoder
		GEODE_CONCEPT_FUNCTION_CHECK(encodeWithCoder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canEncode
		#define GEODE_CONCEPT_CHECK_canEncode
		GEODE_CONCEPT_FUNCTION_CHECK(canEncode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJGameLevel> : ModifyBase<ModifyDerive<Der, GJGameLevel>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJGameLevel>>;
		using ModifyBase<ModifyDerive<Der, GJGameLevel>>::ModifyBase;
		using Base = GJGameLevel;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, create, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, create, cocos2d::CCDictionary*, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, areCoinsVerified, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, createWithCoder, DS_Dictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, dataLoaded, DS_Dictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getAccountID, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getAttempts, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getAudioFileName, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getAudioTrack, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getAutoLevel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getAverageDifficulty, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getCapacityString, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getCoin1Verified, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getCoin2Verified, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getCoin3Verified, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getCoinKey, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getCoins, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getCoinsVerified, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getCompletes, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getDemon, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getDemonVotes, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getDifficulty, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getDislikes, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getDontSave, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getDownloads, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getFailedPasswordAttempts, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getFeatured, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getGameVersion, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getHasBeenModified, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getIsEditable, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getIsHidden, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getIsUnlocked, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getIsUploaded, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getIsVerified, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getJumps, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getLastBuildGroupID, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getLastBuildPage, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getLastBuildPageForTab, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getLastBuildSave, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getLastBuildTab, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getLastCameraPos, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getLastEditorZoom, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getLengthKey, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getLevelDesc, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getLevelID, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getLevelLength, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getLevelName, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getLevelRev, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getLevelString, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getLevelType, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getLevelVersion, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getLikes, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getM_ID, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getMaxStarRatings, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getMinStarRatings, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getNormalPercent, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getObjectCount, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getOrder, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getOriginalLevel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getPassword, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getPracticePercent, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getRateFeature, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getRateStars, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getRateUser, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getRatings, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getRatingsSum, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getRecordString, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getRequestedStars, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getRequiredCoins, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getShowedSongWarning, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getSongID, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getSongName, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getStarRatings, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getStarRatingsSum, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getStars, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getTempName, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getTwoPlayerMode, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getUnpackedLevelDescription, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getUpdateDate, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getUploadDate, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getUserID, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getUserName, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getWasCheatReset, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, handleStatsConflict, GJGameLevel*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, lengthKeyToString, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, levelWasAltered, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, levelWasSubmitted, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, savePercentage, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setAccountID, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setAttempts, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setAudioTrack, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setAutoLevel, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setCapacityString, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setCoin1Verified, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setCoin2Verified, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setCoin3Verified, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setCoins, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setCoinsVerified, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setCompletes, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setDemon, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setDemonVotes, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setDifficulty, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setDislikes, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setDontSave, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setDownloads, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setFailedPasswordAttempts, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setFeatured, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setGameVersion, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setHasBeenModified, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setIsEditable, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setIsHidden, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setIsUnlocked, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setIsUploaded, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setIsVerified, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setJumps, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setLastBuildGroupID, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setLastBuildPage, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setLastBuildPageForTab, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setLastBuildSave, cocos2d::CCDictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setLastBuildTab, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setLastCameraPos, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setLastEditorZoom, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setLevelDesc, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setLevelID, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setLevelLength, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setLevelName, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setLevelRev, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setLevelString, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setLevelType, GJLevelType)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setLevelVersion, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setLikes, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setMaxStarRatings, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setMinStarRatings, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setNormalPercent, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setObjectCount, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setOrder, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setOriginalLevel, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setPassword, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setPracticePercent, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setRateFeature, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setRateStars, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setRateUser, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setRatings, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setRatingsSum, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setRecordString, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setRequestedStars, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setRequiredCoins, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setShowedSongWarning, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setSongID, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setStarRatings, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setStarRatingsSum, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setStars, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setTempName, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setTwoPlayerMode, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setUpdateDate, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setUploadDate, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setUserID, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setUserName, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setWasCheatReset, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, unverifyCoins, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, encodeWithCoder, DS_Dictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, canEncode, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, init, )
		}
	};
}
