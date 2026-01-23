#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GameStatsManager.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sharedState
		#define GEODE_STATICS_sharedState
		GEODE_AS_STATIC_FUNCTION(sharedState) 
	#endif

	#ifndef GEODE_STATICS_checkAchievement
		#define GEODE_STATICS_checkAchievement
		GEODE_AS_STATIC_FUNCTION(checkAchievement) 
	#endif

	#ifndef GEODE_STATICS_checkCoinAchievement
		#define GEODE_STATICS_checkCoinAchievement
		GEODE_AS_STATIC_FUNCTION(checkCoinAchievement) 
	#endif

	#ifndef GEODE_STATICS_checkCoinsForLevel
		#define GEODE_STATICS_checkCoinsForLevel
		GEODE_AS_STATIC_FUNCTION(checkCoinsForLevel) 
	#endif

	#ifndef GEODE_STATICS_completedDemonLevel
		#define GEODE_STATICS_completedDemonLevel
		GEODE_AS_STATIC_FUNCTION(completedDemonLevel) 
	#endif

	#ifndef GEODE_STATICS_completedLevel
		#define GEODE_STATICS_completedLevel
		GEODE_AS_STATIC_FUNCTION(completedLevel) 
	#endif

	#ifndef GEODE_STATICS_completedMapPack
		#define GEODE_STATICS_completedMapPack
		GEODE_AS_STATIC_FUNCTION(completedMapPack) 
	#endif

	#ifndef GEODE_STATICS_completedStarLevel
		#define GEODE_STATICS_completedStarLevel
		GEODE_AS_STATIC_FUNCTION(completedStarLevel) 
	#endif

	#ifndef GEODE_STATICS_dataLoaded
		#define GEODE_STATICS_dataLoaded
		GEODE_AS_STATIC_FUNCTION(dataLoaded) 
	#endif

	#ifndef GEODE_STATICS_encodeDataTo
		#define GEODE_STATICS_encodeDataTo
		GEODE_AS_STATIC_FUNCTION(encodeDataTo) 
	#endif

	#ifndef GEODE_STATICS_firstSetup
		#define GEODE_STATICS_firstSetup
		GEODE_AS_STATIC_FUNCTION(firstSetup) 
	#endif

	#ifndef GEODE_STATICS_getCollectedCoinsForLevel
		#define GEODE_STATICS_getCollectedCoinsForLevel
		GEODE_AS_STATIC_FUNCTION(getCollectedCoinsForLevel) 
	#endif

	#ifndef GEODE_STATICS_getCompletedLevels
		#define GEODE_STATICS_getCompletedLevels
		GEODE_AS_STATIC_FUNCTION(getCompletedLevels) 
	#endif

	#ifndef GEODE_STATICS_getCompletedMapPacks
		#define GEODE_STATICS_getCompletedMapPacks
		GEODE_AS_STATIC_FUNCTION(getCompletedMapPacks) 
	#endif

	#ifndef GEODE_STATICS_getDemonLevelKey
		#define GEODE_STATICS_getDemonLevelKey
		GEODE_AS_STATIC_FUNCTION(getDemonLevelKey) 
	#endif

	#ifndef GEODE_STATICS_getLevelKey
		#define GEODE_STATICS_getLevelKey
		GEODE_AS_STATIC_FUNCTION(getLevelKey) 
	#endif

	#ifndef GEODE_STATICS_getLiteAchievements
		#define GEODE_STATICS_getLiteAchievements
		GEODE_AS_STATIC_FUNCTION(getLiteAchievements) 
	#endif

	#ifndef GEODE_STATICS_getMapPackKey
		#define GEODE_STATICS_getMapPackKey
		GEODE_AS_STATIC_FUNCTION(getMapPackKey) 
	#endif

	#ifndef GEODE_STATICS_getPendingUserCoinsDict
		#define GEODE_STATICS_getPendingUserCoinsDict
		GEODE_AS_STATIC_FUNCTION(getPendingUserCoinsDict) 
	#endif

	#ifndef GEODE_STATICS_getRandomContainer
		#define GEODE_STATICS_getRandomContainer
		GEODE_AS_STATIC_FUNCTION(getRandomContainer) 
	#endif

	#ifndef GEODE_STATICS_getStarLevelKey
		#define GEODE_STATICS_getStarLevelKey
		GEODE_AS_STATIC_FUNCTION(getStarLevelKey) 
	#endif

	#ifndef GEODE_STATICS_getStat
		#define GEODE_STATICS_getStat
		GEODE_AS_STATIC_FUNCTION(getStat) 
	#endif

	#ifndef GEODE_STATICS_getUniqueItemKey
		#define GEODE_STATICS_getUniqueItemKey
		GEODE_AS_STATIC_FUNCTION(getUniqueItemKey) 
	#endif

	#ifndef GEODE_STATICS_getUserCoinsDict
		#define GEODE_STATICS_getUserCoinsDict
		GEODE_AS_STATIC_FUNCTION(getUserCoinsDict) 
	#endif

	#ifndef GEODE_STATICS_getValueDict
		#define GEODE_STATICS_getValueDict
		GEODE_AS_STATIC_FUNCTION(getValueDict) 
	#endif

	#ifndef GEODE_STATICS_hasCompletedDemonLevel
		#define GEODE_STATICS_hasCompletedDemonLevel
		GEODE_AS_STATIC_FUNCTION(hasCompletedDemonLevel) 
	#endif

	#ifndef GEODE_STATICS_hasCompletedLevel
		#define GEODE_STATICS_hasCompletedLevel
		GEODE_AS_STATIC_FUNCTION(hasCompletedLevel) 
	#endif

	#ifndef GEODE_STATICS_hasCompletedMapPack
		#define GEODE_STATICS_hasCompletedMapPack
		GEODE_AS_STATIC_FUNCTION(hasCompletedMapPack) 
	#endif

	#ifndef GEODE_STATICS_hasCompletedOnlineLevel
		#define GEODE_STATICS_hasCompletedOnlineLevel
		GEODE_AS_STATIC_FUNCTION(hasCompletedOnlineLevel) 
	#endif

	#ifndef GEODE_STATICS_hasCompletedStarLevel
		#define GEODE_STATICS_hasCompletedStarLevel
		GEODE_AS_STATIC_FUNCTION(hasCompletedStarLevel) 
	#endif

	#ifndef GEODE_STATICS_hasPendingUserCoin
		#define GEODE_STATICS_hasPendingUserCoin
		GEODE_AS_STATIC_FUNCTION(hasPendingUserCoin) 
	#endif

	#ifndef GEODE_STATICS_hasUniqueItem
		#define GEODE_STATICS_hasUniqueItem
		GEODE_AS_STATIC_FUNCTION(hasUniqueItem) 
	#endif

	#ifndef GEODE_STATICS_hasUserCoin
		#define GEODE_STATICS_hasUserCoin
		GEODE_AS_STATIC_FUNCTION(hasUserCoin) 
	#endif

	#ifndef GEODE_STATICS_incrementStat
		#define GEODE_STATICS_incrementStat
		GEODE_AS_STATIC_FUNCTION(incrementStat) 
	#endif

	#ifndef GEODE_STATICS_isLiteUnlockable
		#define GEODE_STATICS_isLiteUnlockable
		GEODE_AS_STATIC_FUNCTION(isLiteUnlockable) 
	#endif

	#ifndef GEODE_STATICS_isUniqueItem
		#define GEODE_STATICS_isUniqueItem
		GEODE_AS_STATIC_FUNCTION(isUniqueItem) 
	#endif

	#ifndef GEODE_STATICS_isUniqueValid
		#define GEODE_STATICS_isUniqueValid
		GEODE_AS_STATIC_FUNCTION(isUniqueValid) 
	#endif

	#ifndef GEODE_STATICS_logCoins
		#define GEODE_STATICS_logCoins
		GEODE_AS_STATIC_FUNCTION(logCoins) 
	#endif

	#ifndef GEODE_STATICS_markLevelAsCompletedAndClaimed
		#define GEODE_STATICS_markLevelAsCompletedAndClaimed
		GEODE_AS_STATIC_FUNCTION(markLevelAsCompletedAndClaimed) 
	#endif

	#ifndef GEODE_STATICS_recountUserCoins
		#define GEODE_STATICS_recountUserCoins
		GEODE_AS_STATIC_FUNCTION(recountUserCoins) 
	#endif

	#ifndef GEODE_STATICS_resetPreSync
		#define GEODE_STATICS_resetPreSync
		GEODE_AS_STATIC_FUNCTION(resetPreSync) 
	#endif

	#ifndef GEODE_STATICS_resetUserCoins
		#define GEODE_STATICS_resetUserCoins
		GEODE_AS_STATIC_FUNCTION(resetUserCoins) 
	#endif

	#ifndef GEODE_STATICS_restorePostSync
		#define GEODE_STATICS_restorePostSync
		GEODE_AS_STATIC_FUNCTION(restorePostSync) 
	#endif

	#ifndef GEODE_STATICS_setCompletedLevels
		#define GEODE_STATICS_setCompletedLevels
		GEODE_AS_STATIC_FUNCTION(setCompletedLevels) 
	#endif

	#ifndef GEODE_STATICS_setPendingUserCoinsDict
		#define GEODE_STATICS_setPendingUserCoinsDict
		GEODE_AS_STATIC_FUNCTION(setPendingUserCoinsDict) 
	#endif

	#ifndef GEODE_STATICS_setRandomContainer
		#define GEODE_STATICS_setRandomContainer
		GEODE_AS_STATIC_FUNCTION(setRandomContainer) 
	#endif

	#ifndef GEODE_STATICS_setStarsForMapPack
		#define GEODE_STATICS_setStarsForMapPack
		GEODE_AS_STATIC_FUNCTION(setStarsForMapPack) 
	#endif

	#ifndef GEODE_STATICS_setStat
		#define GEODE_STATICS_setStat
		GEODE_AS_STATIC_FUNCTION(setStat) 
	#endif

	#ifndef GEODE_STATICS_setStatIfHigher
		#define GEODE_STATICS_setStatIfHigher
		GEODE_AS_STATIC_FUNCTION(setStatIfHigher) 
	#endif

	#ifndef GEODE_STATICS_setUserCoinsDict
		#define GEODE_STATICS_setUserCoinsDict
		GEODE_AS_STATIC_FUNCTION(setUserCoinsDict) 
	#endif

	#ifndef GEODE_STATICS_setValueDict
		#define GEODE_STATICS_setValueDict
		GEODE_AS_STATIC_FUNCTION(setValueDict) 
	#endif

	#ifndef GEODE_STATICS_starsForMapPack
		#define GEODE_STATICS_starsForMapPack
		GEODE_AS_STATIC_FUNCTION(starsForMapPack) 
	#endif

	#ifndef GEODE_STATICS_storePendingUserCoin
		#define GEODE_STATICS_storePendingUserCoin
		GEODE_AS_STATIC_FUNCTION(storePendingUserCoin) 
	#endif

	#ifndef GEODE_STATICS_storeUniqueItem
		#define GEODE_STATICS_storeUniqueItem
		GEODE_AS_STATIC_FUNCTION(storeUniqueItem) 
	#endif

	#ifndef GEODE_STATICS_storeUserCoin
		#define GEODE_STATICS_storeUserCoin
		GEODE_AS_STATIC_FUNCTION(storeUserCoin) 
	#endif

	#ifndef GEODE_STATICS_tempClear
		#define GEODE_STATICS_tempClear
		GEODE_AS_STATIC_FUNCTION(tempClear) 
	#endif

	#ifndef GEODE_STATICS_uncompleteLevel
		#define GEODE_STATICS_uncompleteLevel
		GEODE_AS_STATIC_FUNCTION(uncompleteLevel) 
	#endif

	#ifndef GEODE_STATICS_verifyUserCoins
		#define GEODE_STATICS_verifyUserCoins
		GEODE_AS_STATIC_FUNCTION(verifyUserCoins) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_sharedState
		#define GEODE_CONCEPT_CHECK_sharedState
		GEODE_CONCEPT_FUNCTION_CHECK(sharedState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkAchievement
		#define GEODE_CONCEPT_CHECK_checkAchievement
		GEODE_CONCEPT_FUNCTION_CHECK(checkAchievement) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkCoinAchievement
		#define GEODE_CONCEPT_CHECK_checkCoinAchievement
		GEODE_CONCEPT_FUNCTION_CHECK(checkCoinAchievement) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkCoinsForLevel
		#define GEODE_CONCEPT_CHECK_checkCoinsForLevel
		GEODE_CONCEPT_FUNCTION_CHECK(checkCoinsForLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_completedDemonLevel
		#define GEODE_CONCEPT_CHECK_completedDemonLevel
		GEODE_CONCEPT_FUNCTION_CHECK(completedDemonLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_completedLevel
		#define GEODE_CONCEPT_CHECK_completedLevel
		GEODE_CONCEPT_FUNCTION_CHECK(completedLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_completedMapPack
		#define GEODE_CONCEPT_CHECK_completedMapPack
		GEODE_CONCEPT_FUNCTION_CHECK(completedMapPack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_completedStarLevel
		#define GEODE_CONCEPT_CHECK_completedStarLevel
		GEODE_CONCEPT_FUNCTION_CHECK(completedStarLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dataLoaded
		#define GEODE_CONCEPT_CHECK_dataLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(dataLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_encodeDataTo
		#define GEODE_CONCEPT_CHECK_encodeDataTo
		GEODE_CONCEPT_FUNCTION_CHECK(encodeDataTo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_firstSetup
		#define GEODE_CONCEPT_CHECK_firstSetup
		GEODE_CONCEPT_FUNCTION_CHECK(firstSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCollectedCoinsForLevel
		#define GEODE_CONCEPT_CHECK_getCollectedCoinsForLevel
		GEODE_CONCEPT_FUNCTION_CHECK(getCollectedCoinsForLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCompletedLevels
		#define GEODE_CONCEPT_CHECK_getCompletedLevels
		GEODE_CONCEPT_FUNCTION_CHECK(getCompletedLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCompletedMapPacks
		#define GEODE_CONCEPT_CHECK_getCompletedMapPacks
		GEODE_CONCEPT_FUNCTION_CHECK(getCompletedMapPacks) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDemonLevelKey
		#define GEODE_CONCEPT_CHECK_getDemonLevelKey
		GEODE_CONCEPT_FUNCTION_CHECK(getDemonLevelKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLevelKey
		#define GEODE_CONCEPT_CHECK_getLevelKey
		GEODE_CONCEPT_FUNCTION_CHECK(getLevelKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLiteAchievements
		#define GEODE_CONCEPT_CHECK_getLiteAchievements
		GEODE_CONCEPT_FUNCTION_CHECK(getLiteAchievements) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMapPackKey
		#define GEODE_CONCEPT_CHECK_getMapPackKey
		GEODE_CONCEPT_FUNCTION_CHECK(getMapPackKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPendingUserCoinsDict
		#define GEODE_CONCEPT_CHECK_getPendingUserCoinsDict
		GEODE_CONCEPT_FUNCTION_CHECK(getPendingUserCoinsDict) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRandomContainer
		#define GEODE_CONCEPT_CHECK_getRandomContainer
		GEODE_CONCEPT_FUNCTION_CHECK(getRandomContainer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStarLevelKey
		#define GEODE_CONCEPT_CHECK_getStarLevelKey
		GEODE_CONCEPT_FUNCTION_CHECK(getStarLevelKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStat
		#define GEODE_CONCEPT_CHECK_getStat
		GEODE_CONCEPT_FUNCTION_CHECK(getStat) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUniqueItemKey
		#define GEODE_CONCEPT_CHECK_getUniqueItemKey
		GEODE_CONCEPT_FUNCTION_CHECK(getUniqueItemKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUserCoinsDict
		#define GEODE_CONCEPT_CHECK_getUserCoinsDict
		GEODE_CONCEPT_FUNCTION_CHECK(getUserCoinsDict) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getValueDict
		#define GEODE_CONCEPT_CHECK_getValueDict
		GEODE_CONCEPT_FUNCTION_CHECK(getValueDict) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasCompletedDemonLevel
		#define GEODE_CONCEPT_CHECK_hasCompletedDemonLevel
		GEODE_CONCEPT_FUNCTION_CHECK(hasCompletedDemonLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasCompletedLevel
		#define GEODE_CONCEPT_CHECK_hasCompletedLevel
		GEODE_CONCEPT_FUNCTION_CHECK(hasCompletedLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasCompletedMapPack
		#define GEODE_CONCEPT_CHECK_hasCompletedMapPack
		GEODE_CONCEPT_FUNCTION_CHECK(hasCompletedMapPack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasCompletedOnlineLevel
		#define GEODE_CONCEPT_CHECK_hasCompletedOnlineLevel
		GEODE_CONCEPT_FUNCTION_CHECK(hasCompletedOnlineLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasCompletedStarLevel
		#define GEODE_CONCEPT_CHECK_hasCompletedStarLevel
		GEODE_CONCEPT_FUNCTION_CHECK(hasCompletedStarLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasPendingUserCoin
		#define GEODE_CONCEPT_CHECK_hasPendingUserCoin
		GEODE_CONCEPT_FUNCTION_CHECK(hasPendingUserCoin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasUniqueItem
		#define GEODE_CONCEPT_CHECK_hasUniqueItem
		GEODE_CONCEPT_FUNCTION_CHECK(hasUniqueItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasUserCoin
		#define GEODE_CONCEPT_CHECK_hasUserCoin
		GEODE_CONCEPT_FUNCTION_CHECK(hasUserCoin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_incrementStat
		#define GEODE_CONCEPT_CHECK_incrementStat
		GEODE_CONCEPT_FUNCTION_CHECK(incrementStat) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isLiteUnlockable
		#define GEODE_CONCEPT_CHECK_isLiteUnlockable
		GEODE_CONCEPT_FUNCTION_CHECK(isLiteUnlockable) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isUniqueItem
		#define GEODE_CONCEPT_CHECK_isUniqueItem
		GEODE_CONCEPT_FUNCTION_CHECK(isUniqueItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isUniqueValid
		#define GEODE_CONCEPT_CHECK_isUniqueValid
		GEODE_CONCEPT_FUNCTION_CHECK(isUniqueValid) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_logCoins
		#define GEODE_CONCEPT_CHECK_logCoins
		GEODE_CONCEPT_FUNCTION_CHECK(logCoins) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_markLevelAsCompletedAndClaimed
		#define GEODE_CONCEPT_CHECK_markLevelAsCompletedAndClaimed
		GEODE_CONCEPT_FUNCTION_CHECK(markLevelAsCompletedAndClaimed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_recountUserCoins
		#define GEODE_CONCEPT_CHECK_recountUserCoins
		GEODE_CONCEPT_FUNCTION_CHECK(recountUserCoins) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetPreSync
		#define GEODE_CONCEPT_CHECK_resetPreSync
		GEODE_CONCEPT_FUNCTION_CHECK(resetPreSync) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetUserCoins
		#define GEODE_CONCEPT_CHECK_resetUserCoins
		GEODE_CONCEPT_FUNCTION_CHECK(resetUserCoins) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_restorePostSync
		#define GEODE_CONCEPT_CHECK_restorePostSync
		GEODE_CONCEPT_FUNCTION_CHECK(restorePostSync) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCompletedLevels
		#define GEODE_CONCEPT_CHECK_setCompletedLevels
		GEODE_CONCEPT_FUNCTION_CHECK(setCompletedLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPendingUserCoinsDict
		#define GEODE_CONCEPT_CHECK_setPendingUserCoinsDict
		GEODE_CONCEPT_FUNCTION_CHECK(setPendingUserCoinsDict) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRandomContainer
		#define GEODE_CONCEPT_CHECK_setRandomContainer
		GEODE_CONCEPT_FUNCTION_CHECK(setRandomContainer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStarsForMapPack
		#define GEODE_CONCEPT_CHECK_setStarsForMapPack
		GEODE_CONCEPT_FUNCTION_CHECK(setStarsForMapPack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStat
		#define GEODE_CONCEPT_CHECK_setStat
		GEODE_CONCEPT_FUNCTION_CHECK(setStat) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStatIfHigher
		#define GEODE_CONCEPT_CHECK_setStatIfHigher
		GEODE_CONCEPT_FUNCTION_CHECK(setStatIfHigher) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUserCoinsDict
		#define GEODE_CONCEPT_CHECK_setUserCoinsDict
		GEODE_CONCEPT_FUNCTION_CHECK(setUserCoinsDict) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setValueDict
		#define GEODE_CONCEPT_CHECK_setValueDict
		GEODE_CONCEPT_FUNCTION_CHECK(setValueDict) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_starsForMapPack
		#define GEODE_CONCEPT_CHECK_starsForMapPack
		GEODE_CONCEPT_FUNCTION_CHECK(starsForMapPack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storePendingUserCoin
		#define GEODE_CONCEPT_CHECK_storePendingUserCoin
		GEODE_CONCEPT_FUNCTION_CHECK(storePendingUserCoin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeUniqueItem
		#define GEODE_CONCEPT_CHECK_storeUniqueItem
		GEODE_CONCEPT_FUNCTION_CHECK(storeUniqueItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeUserCoin
		#define GEODE_CONCEPT_CHECK_storeUserCoin
		GEODE_CONCEPT_FUNCTION_CHECK(storeUserCoin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tempClear
		#define GEODE_CONCEPT_CHECK_tempClear
		GEODE_CONCEPT_FUNCTION_CHECK(tempClear) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uncompleteLevel
		#define GEODE_CONCEPT_CHECK_uncompleteLevel
		GEODE_CONCEPT_FUNCTION_CHECK(uncompleteLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_verifyUserCoins
		#define GEODE_CONCEPT_CHECK_verifyUserCoins
		GEODE_CONCEPT_FUNCTION_CHECK(verifyUserCoins) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GameStatsManager> : ModifyBase<ModifyDerive<Der, GameStatsManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GameStatsManager>>;
		using ModifyBase<ModifyDerive<Der, GameStatsManager>>::ModifyBase;
		using Base = GameStatsManager;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, sharedState, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, checkAchievement, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, checkCoinAchievement, GJGameLevel*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, checkCoinsForLevel, GJGameLevel*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, completedDemonLevel, GJGameLevel*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, completedLevel, GJGameLevel*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, completedMapPack, GJMapPack*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, completedStarLevel, GJGameLevel*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, dataLoaded, DS_Dictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, encodeDataTo, DS_Dictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, firstSetup, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, getCollectedCoinsForLevel, GJGameLevel*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, getCompletedLevels, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, getCompletedMapPacks, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, getDemonLevelKey, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, getLevelKey, GJGameLevel*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, getLevelKey, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, getLiteAchievements, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, getMapPackKey, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, getPendingUserCoinsDict, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, getRandomContainer, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, getStarLevelKey, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, getStat, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, getUniqueItemKey, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, getUserCoinsDict, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, getValueDict, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, hasCompletedDemonLevel, GJGameLevel*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, hasCompletedLevel, GJGameLevel*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, hasCompletedMapPack, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, hasCompletedOnlineLevel, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, hasCompletedStarLevel, GJGameLevel*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, hasPendingUserCoin, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, hasUniqueItem, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, hasUserCoin, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, incrementStat, char const*, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, incrementStat, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, isLiteUnlockable, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, isUniqueItem, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, isUniqueValid, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, logCoins, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, markLevelAsCompletedAndClaimed, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, recountUserCoins, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, resetPreSync, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, resetUserCoins, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, restorePostSync, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, setCompletedLevels, cocos2d::CCDictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, setPendingUserCoinsDict, cocos2d::CCDictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, setRandomContainer, cocos2d::CCDictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, setStarsForMapPack, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, setStat, char const*, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, setStatIfHigher, char const*, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, setUserCoinsDict, cocos2d::CCDictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, setValueDict, cocos2d::CCDictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, starsForMapPack, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, storePendingUserCoin, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, storeUniqueItem, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, storeUserCoin, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, tempClear, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, uncompleteLevel, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, verifyUserCoins, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStatsManager, init, )
		}
	};
}
