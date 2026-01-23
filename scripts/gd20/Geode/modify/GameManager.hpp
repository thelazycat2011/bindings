#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GameManager.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sharedState
		#define GEODE_STATICS_sharedState
		GEODE_AS_STATIC_FUNCTION(sharedState) 
	#endif

	#ifndef GEODE_STATICS_accountStatusChanged
		#define GEODE_STATICS_accountStatusChanged
		GEODE_AS_STATIC_FUNCTION(accountStatusChanged) 
	#endif

	#ifndef GEODE_STATICS_addNewCustomObject
		#define GEODE_STATICS_addNewCustomObject
		GEODE_AS_STATIC_FUNCTION(addNewCustomObject) 
	#endif

	#ifndef GEODE_STATICS_applicationDidEnterBackground
		#define GEODE_STATICS_applicationDidEnterBackground
		GEODE_AS_STATIC_FUNCTION(applicationDidEnterBackground) 
	#endif

	#ifndef GEODE_STATICS_applicationWillEnterForeground
		#define GEODE_STATICS_applicationWillEnterForeground
		GEODE_AS_STATIC_FUNCTION(applicationWillEnterForeground) 
	#endif

	#ifndef GEODE_STATICS_checkSteamAchievementUnlock
		#define GEODE_STATICS_checkSteamAchievementUnlock
		GEODE_AS_STATIC_FUNCTION(checkSteamAchievementUnlock) 
	#endif

	#ifndef GEODE_STATICS_claimItemsResponse
		#define GEODE_STATICS_claimItemsResponse
		GEODE_AS_STATIC_FUNCTION(claimItemsResponse) 
	#endif

	#ifndef GEODE_STATICS_colorForIdx
		#define GEODE_STATICS_colorForIdx
		GEODE_AS_STATIC_FUNCTION(colorForIdx) 
	#endif

	#ifndef GEODE_STATICS_colorForPos
		#define GEODE_STATICS_colorForPos
		GEODE_AS_STATIC_FUNCTION(colorForPos) 
	#endif

	#ifndef GEODE_STATICS_colorKey
		#define GEODE_STATICS_colorKey
		GEODE_AS_STATIC_FUNCTION(colorKey) 
	#endif

	#ifndef GEODE_STATICS_completedAchievement
		#define GEODE_STATICS_completedAchievement
		GEODE_AS_STATIC_FUNCTION(completedAchievement) 
	#endif

	#ifndef GEODE_STATICS_didExitPlayscene
		#define GEODE_STATICS_didExitPlayscene
		GEODE_AS_STATIC_FUNCTION(didExitPlayscene) 
	#endif

	#ifndef GEODE_STATICS_doQuickSave
		#define GEODE_STATICS_doQuickSave
		GEODE_AS_STATIC_FUNCTION(doQuickSave) 
	#endif

	#ifndef GEODE_STATICS_eventUnlockFeature
		#define GEODE_STATICS_eventUnlockFeature
		GEODE_AS_STATIC_FUNCTION(eventUnlockFeature) 
	#endif

	#ifndef GEODE_STATICS_fadeInMusic
		#define GEODE_STATICS_fadeInMusic
		GEODE_AS_STATIC_FUNCTION(fadeInMusic) 
	#endif

	#ifndef GEODE_STATICS_followTwitter
		#define GEODE_STATICS_followTwitter
		GEODE_AS_STATIC_FUNCTION(followTwitter) 
	#endif

	#ifndef GEODE_STATICS_getBGTexture
		#define GEODE_STATICS_getBGTexture
		GEODE_AS_STATIC_FUNCTION(getBGTexture) 
	#endif

	#ifndef GEODE_STATICS_getBootups
		#define GEODE_STATICS_getBootups
		GEODE_AS_STATIC_FUNCTION(getBootups) 
	#endif

	#ifndef GEODE_STATICS_getClickedEditor
		#define GEODE_STATICS_getClickedEditor
		GEODE_AS_STATIC_FUNCTION(getClickedEditor) 
	#endif

	#ifndef GEODE_STATICS_getClickedGarage
		#define GEODE_STATICS_getClickedGarage
		GEODE_AS_STATIC_FUNCTION(getClickedGarage) 
	#endif

	#ifndef GEODE_STATICS_getClickedName
		#define GEODE_STATICS_getClickedName
		GEODE_AS_STATIC_FUNCTION(getClickedName) 
	#endif

	#ifndef GEODE_STATICS_getClickedPractice
		#define GEODE_STATICS_getClickedPractice
		GEODE_AS_STATIC_FUNCTION(getClickedPractice) 
	#endif

	#ifndef GEODE_STATICS_getCommentSortRecent
		#define GEODE_STATICS_getCommentSortRecent
		GEODE_AS_STATIC_FUNCTION(getCommentSortRecent) 
	#endif

	#ifndef GEODE_STATICS_getCustomObjectDict
		#define GEODE_STATICS_getCustomObjectDict
		GEODE_AS_STATIC_FUNCTION(getCustomObjectDict) 
	#endif

	#ifndef GEODE_STATICS_getDidFollowTwitter
		#define GEODE_STATICS_getDidFollowTwitter
		GEODE_AS_STATIC_FUNCTION(getDidFollowTwitter) 
	#endif

	#ifndef GEODE_STATICS_getDidLikeFacebook
		#define GEODE_STATICS_getDidLikeFacebook
		GEODE_AS_STATIC_FUNCTION(getDidLikeFacebook) 
	#endif

	#ifndef GEODE_STATICS_getDidPauseBGMusic
		#define GEODE_STATICS_getDidPauseBGMusic
		GEODE_AS_STATIC_FUNCTION(getDidPauseBGMusic) 
	#endif

	#ifndef GEODE_STATICS_getDidPlayGame
		#define GEODE_STATICS_getDidPlayGame
		GEODE_AS_STATIC_FUNCTION(getDidPlayGame) 
	#endif

	#ifndef GEODE_STATICS_getDidRateGame
		#define GEODE_STATICS_getDidRateGame
		GEODE_AS_STATIC_FUNCTION(getDidRateGame) 
	#endif

	#ifndef GEODE_STATICS_getDidSetupEveryplay
		#define GEODE_STATICS_getDidSetupEveryplay
		GEODE_AS_STATIC_FUNCTION(getDidSetupEveryplay) 
	#endif

	#ifndef GEODE_STATICS_getDidSubYouTube
		#define GEODE_STATICS_getDidSubYouTube
		GEODE_AS_STATIC_FUNCTION(getDidSubYouTube) 
	#endif

	#ifndef GEODE_STATICS_getDidSyncAchievements
		#define GEODE_STATICS_getDidSyncAchievements
		GEODE_AS_STATIC_FUNCTION(getDidSyncAchievements) 
	#endif

	#ifndef GEODE_STATICS_getEditMode
		#define GEODE_STATICS_getEditMode
		GEODE_AS_STATIC_FUNCTION(getEditMode) 
	#endif

	#ifndef GEODE_STATICS_getEditorCopyString
		#define GEODE_STATICS_getEditorCopyString
		GEODE_AS_STATIC_FUNCTION(getEditorCopyString) 
	#endif

	#ifndef GEODE_STATICS_getEditorLayer
		#define GEODE_STATICS_getEditorLayer
		GEODE_AS_STATIC_FUNCTION(getEditorLayer) 
	#endif

	#ifndef GEODE_STATICS_getFetchNewLevelsQueued
		#define GEODE_STATICS_getFetchNewLevelsQueued
		GEODE_AS_STATIC_FUNCTION(getFetchNewLevelsQueued) 
	#endif

	#ifndef GEODE_STATICS_getFirstSetup
		#define GEODE_STATICS_getFirstSetup
		GEODE_AS_STATIC_FUNCTION(getFirstSetup) 
	#endif

	#ifndef GEODE_STATICS_getFontFile
		#define GEODE_STATICS_getFontFile
		GEODE_AS_STATIC_FUNCTION(getFontFile) 
	#endif

	#ifndef GEODE_STATICS_getFontTexture
		#define GEODE_STATICS_getFontTexture
		GEODE_AS_STATIC_FUNCTION(getFontTexture) 
	#endif

	#ifndef GEODE_STATICS_getGameVariable
		#define GEODE_STATICS_getGameVariable
		GEODE_AS_STATIC_FUNCTION(getGameVariable) 
	#endif

	#ifndef GEODE_STATICS_getGTexture
		#define GEODE_STATICS_getGTexture
		GEODE_AS_STATIC_FUNCTION(getGTexture) 
	#endif

	#ifndef GEODE_STATICS_getHasRatedGame
		#define GEODE_STATICS_getHasRatedGame
		GEODE_AS_STATIC_FUNCTION(getHasRatedGame) 
	#endif

	#ifndef GEODE_STATICS_getHasRatingPower
		#define GEODE_STATICS_getHasRatingPower
		GEODE_AS_STATIC_FUNCTION(getHasRatingPower) 
	#endif

	#ifndef GEODE_STATICS_getIntGameVariable
		#define GEODE_STATICS_getIntGameVariable
		GEODE_AS_STATIC_FUNCTION(getIntGameVariable) 
	#endif

	#ifndef GEODE_STATICS_getIsResetting
		#define GEODE_STATICS_getIsResetting
		GEODE_AS_STATIC_FUNCTION(getIsResetting) 
	#endif

	#ifndef GEODE_STATICS_getLastCustomColorIdx
		#define GEODE_STATICS_getLastCustomColorIdx
		GEODE_AS_STATIC_FUNCTION(getLastCustomColorIdx) 
	#endif

	#ifndef GEODE_STATICS_getLastGroupID
		#define GEODE_STATICS_getLastGroupID
		GEODE_AS_STATIC_FUNCTION(getLastGroupID) 
	#endif

	#ifndef GEODE_STATICS_getLastLevelID
		#define GEODE_STATICS_getLastLevelID
		GEODE_AS_STATIC_FUNCTION(getLastLevelID) 
	#endif

	#ifndef GEODE_STATICS_getLastScene
		#define GEODE_STATICS_getLastScene
		GEODE_AS_STATIC_FUNCTION(getLastScene) 
	#endif

	#ifndef GEODE_STATICS_getLastScene2
		#define GEODE_STATICS_getLastScene2
		GEODE_AS_STATIC_FUNCTION(getLastScene2) 
	#endif

	#ifndef GEODE_STATICS_getLevelSelectLayer
		#define GEODE_STATICS_getLevelSelectLayer
		GEODE_AS_STATIC_FUNCTION(getLevelSelectLayer) 
	#endif

	#ifndef GEODE_STATICS_getLoadedBGIdx
		#define GEODE_STATICS_getLoadedBGIdx
		GEODE_AS_STATIC_FUNCTION(getLoadedBGIdx) 
	#endif

	#ifndef GEODE_STATICS_getLoadedFontIdx
		#define GEODE_STATICS_getLoadedFontIdx
		GEODE_AS_STATIC_FUNCTION(getLoadedFontIdx) 
	#endif

	#ifndef GEODE_STATICS_getLoadedGIdx
		#define GEODE_STATICS_getLoadedGIdx
		GEODE_AS_STATIC_FUNCTION(getLoadedGIdx) 
	#endif

	#ifndef GEODE_STATICS_getMainMenuActive
		#define GEODE_STATICS_getMainMenuActive
		GEODE_AS_STATIC_FUNCTION(getMainMenuActive) 
	#endif

	#ifndef GEODE_STATICS_getMenulayer
		#define GEODE_STATICS_getMenulayer
		GEODE_AS_STATIC_FUNCTION(getMenulayer) 
	#endif

	#ifndef GEODE_STATICS_getNextUniqueObjectKey
		#define GEODE_STATICS_getNextUniqueObjectKey
		GEODE_AS_STATIC_FUNCTION(getNextUniqueObjectKey) 
	#endif

	#ifndef GEODE_STATICS_getNextUsedKey
		#define GEODE_STATICS_getNextUsedKey
		GEODE_AS_STATIC_FUNCTION(getNextUsedKey) 
	#endif

	#ifndef GEODE_STATICS_getOrderedCustomObjectKeys
		#define GEODE_STATICS_getOrderedCustomObjectKeys
		GEODE_AS_STATIC_FUNCTION(getOrderedCustomObjectKeys) 
	#endif

	#ifndef GEODE_STATICS_getPerformanceMode
		#define GEODE_STATICS_getPerformanceMode
		GEODE_AS_STATIC_FUNCTION(getPerformanceMode) 
	#endif

	#ifndef GEODE_STATICS_getPlayerBall
		#define GEODE_STATICS_getPlayerBall
		GEODE_AS_STATIC_FUNCTION(getPlayerBall) 
	#endif

	#ifndef GEODE_STATICS_getPlayerBird
		#define GEODE_STATICS_getPlayerBird
		GEODE_AS_STATIC_FUNCTION(getPlayerBird) 
	#endif

	#ifndef GEODE_STATICS_getPlayerColor
		#define GEODE_STATICS_getPlayerColor
		GEODE_AS_STATIC_FUNCTION(getPlayerColor) 
	#endif

	#ifndef GEODE_STATICS_getPlayerColor2
		#define GEODE_STATICS_getPlayerColor2
		GEODE_AS_STATIC_FUNCTION(getPlayerColor2) 
	#endif

	#ifndef GEODE_STATICS_getPlayerDart
		#define GEODE_STATICS_getPlayerDart
		GEODE_AS_STATIC_FUNCTION(getPlayerDart) 
	#endif

	#ifndef GEODE_STATICS_getPlayerFrame
		#define GEODE_STATICS_getPlayerFrame
		GEODE_AS_STATIC_FUNCTION(getPlayerFrame) 
	#endif

	#ifndef GEODE_STATICS_getPlayerGlow
		#define GEODE_STATICS_getPlayerGlow
		GEODE_AS_STATIC_FUNCTION(getPlayerGlow) 
	#endif

	#ifndef GEODE_STATICS_getPlayerIconType
		#define GEODE_STATICS_getPlayerIconType
		GEODE_AS_STATIC_FUNCTION(getPlayerIconType) 
	#endif

	#ifndef GEODE_STATICS_getPlayerName
		#define GEODE_STATICS_getPlayerName
		GEODE_AS_STATIC_FUNCTION(getPlayerName) 
	#endif

	#ifndef GEODE_STATICS_getPlayerRobot
		#define GEODE_STATICS_getPlayerRobot
		GEODE_AS_STATIC_FUNCTION(getPlayerRobot) 
	#endif

	#ifndef GEODE_STATICS_getPlayerScoreValid
		#define GEODE_STATICS_getPlayerScoreValid
		GEODE_AS_STATIC_FUNCTION(getPlayerScoreValid) 
	#endif

	#ifndef GEODE_STATICS_getPlayerShip
		#define GEODE_STATICS_getPlayerShip
		GEODE_AS_STATIC_FUNCTION(getPlayerShip) 
	#endif

	#ifndef GEODE_STATICS_getPlayerStreak
		#define GEODE_STATICS_getPlayerStreak
		GEODE_AS_STATIC_FUNCTION(getPlayerStreak) 
	#endif

	#ifndef GEODE_STATICS_getPlayerUDID
		#define GEODE_STATICS_getPlayerUDID
		GEODE_AS_STATIC_FUNCTION(getPlayerUDID) 
	#endif

	#ifndef GEODE_STATICS_getPlayerUserID
		#define GEODE_STATICS_getPlayerUserID
		GEODE_AS_STATIC_FUNCTION(getPlayerUserID) 
	#endif

	#ifndef GEODE_STATICS_getPlayLayer
		#define GEODE_STATICS_getPlayLayer
		GEODE_AS_STATIC_FUNCTION(getPlayLayer) 
	#endif

	#ifndef GEODE_STATICS_getPremiumPopup
		#define GEODE_STATICS_getPremiumPopup
		GEODE_AS_STATIC_FUNCTION(getPremiumPopup) 
	#endif

	#ifndef GEODE_STATICS_getRateDelegate
		#define GEODE_STATICS_getRateDelegate
		GEODE_AS_STATIC_FUNCTION(getRateDelegate) 
	#endif

	#ifndef GEODE_STATICS_getRecordGameplay
		#define GEODE_STATICS_getRecordGameplay
		GEODE_AS_STATIC_FUNCTION(getRecordGameplay) 
	#endif

	#ifndef GEODE_STATICS_getResolution
		#define GEODE_STATICS_getResolution
		GEODE_AS_STATIC_FUNCTION(getResolution) 
	#endif

	#ifndef GEODE_STATICS_getReturnToSearch
		#define GEODE_STATICS_getReturnToSearch
		GEODE_AS_STATIC_FUNCTION(getReturnToSearch) 
	#endif

	#ifndef GEODE_STATICS_getShowBPMMarkers
		#define GEODE_STATICS_getShowBPMMarkers
		GEODE_AS_STATIC_FUNCTION(getShowBPMMarkers) 
	#endif

	#ifndef GEODE_STATICS_getShowedEditorGuide
		#define GEODE_STATICS_getShowedEditorGuide
		GEODE_AS_STATIC_FUNCTION(getShowedEditorGuide) 
	#endif

	#ifndef GEODE_STATICS_getShowedLowDetailDialog
		#define GEODE_STATICS_getShowedLowDetailDialog
		GEODE_AS_STATIC_FUNCTION(getShowedLowDetailDialog) 
	#endif

	#ifndef GEODE_STATICS_getShowedMenu
		#define GEODE_STATICS_getShowedMenu
		GEODE_AS_STATIC_FUNCTION(getShowedMenu) 
	#endif

	#ifndef GEODE_STATICS_getShowedPirate
		#define GEODE_STATICS_getShowedPirate
		GEODE_AS_STATIC_FUNCTION(getShowedPirate) 
	#endif

	#ifndef GEODE_STATICS_getShowedRateDiffDialog
		#define GEODE_STATICS_getShowedRateDiffDialog
		GEODE_AS_STATIC_FUNCTION(getShowedRateDiffDialog) 
	#endif

	#ifndef GEODE_STATICS_getShowedRateStarDialog
		#define GEODE_STATICS_getShowedRateStarDialog
		GEODE_AS_STATIC_FUNCTION(getShowedRateStarDialog) 
	#endif

	#ifndef GEODE_STATICS_getShowingPromo
		#define GEODE_STATICS_getShowingPromo
		GEODE_AS_STATIC_FUNCTION(getShowingPromo) 
	#endif

	#ifndef GEODE_STATICS_getShowProgressBar
		#define GEODE_STATICS_getShowProgressBar
		GEODE_AS_STATIC_FUNCTION(getShowProgressBar) 
	#endif

	#ifndef GEODE_STATICS_getShowSongMarkers
		#define GEODE_STATICS_getShowSongMarkers
		GEODE_AS_STATIC_FUNCTION(getShowSongMarkers) 
	#endif

	#ifndef GEODE_STATICS_getStoredColor
		#define GEODE_STATICS_getStoredColor
		GEODE_AS_STATIC_FUNCTION(getStoredColor) 
	#endif

	#ifndef GEODE_STATICS_getTestSmoothFix
		#define GEODE_STATICS_getTestSmoothFix
		GEODE_AS_STATIC_FUNCTION(getTestSmoothFix) 
	#endif

	#ifndef GEODE_STATICS_getTexQuality
		#define GEODE_STATICS_getTexQuality
		GEODE_AS_STATIC_FUNCTION(getTexQuality) 
	#endif

	#ifndef GEODE_STATICS_getTotalAttempts
		#define GEODE_STATICS_getTotalAttempts
		GEODE_AS_STATIC_FUNCTION(getTotalAttempts) 
	#endif

	#ifndef GEODE_STATICS_getValueKeeper
		#define GEODE_STATICS_getValueKeeper
		GEODE_AS_STATIC_FUNCTION(getValueKeeper) 
	#endif

	#ifndef GEODE_STATICS_getWasHigh
		#define GEODE_STATICS_getWasHigh
		GEODE_AS_STATIC_FUNCTION(getWasHigh) 
	#endif

	#ifndef GEODE_STATICS_hasShownAdRecently
		#define GEODE_STATICS_hasShownAdRecently
		GEODE_AS_STATIC_FUNCTION(hasShownAdRecently) 
	#endif

	#ifndef GEODE_STATICS_iconKey
		#define GEODE_STATICS_iconKey
		GEODE_AS_STATIC_FUNCTION(iconKey) 
	#endif

	#ifndef GEODE_STATICS_isColorUnlocked
		#define GEODE_STATICS_isColorUnlocked
		GEODE_AS_STATIC_FUNCTION(isColorUnlocked) 
	#endif

	#ifndef GEODE_STATICS_isIconUnlocked
		#define GEODE_STATICS_isIconUnlocked
		GEODE_AS_STATIC_FUNCTION(isIconUnlocked) 
	#endif

	#ifndef GEODE_STATICS_itemPurchased
		#define GEODE_STATICS_itemPurchased
		GEODE_AS_STATIC_FUNCTION(itemPurchased) 
	#endif

	#ifndef GEODE_STATICS_levelIsPremium
		#define GEODE_STATICS_levelIsPremium
		GEODE_AS_STATIC_FUNCTION(levelIsPremium) 
	#endif

	#ifndef GEODE_STATICS_likeFacebook
		#define GEODE_STATICS_likeFacebook
		GEODE_AS_STATIC_FUNCTION(likeFacebook) 
	#endif

	#ifndef GEODE_STATICS_loadBackground
		#define GEODE_STATICS_loadBackground
		GEODE_AS_STATIC_FUNCTION(loadBackground) 
	#endif

	#ifndef GEODE_STATICS_loadFont
		#define GEODE_STATICS_loadFont
		GEODE_AS_STATIC_FUNCTION(loadFont) 
	#endif

	#ifndef GEODE_STATICS_loadGround
		#define GEODE_STATICS_loadGround
		GEODE_AS_STATIC_FUNCTION(loadGround) 
	#endif

	#ifndef GEODE_STATICS_loadVideoSettings
		#define GEODE_STATICS_loadVideoSettings
		GEODE_AS_STATIC_FUNCTION(loadVideoSettings) 
	#endif

	#ifndef GEODE_STATICS_lockColor
		#define GEODE_STATICS_lockColor
		GEODE_AS_STATIC_FUNCTION(lockColor) 
	#endif

	#ifndef GEODE_STATICS_lockIcon
		#define GEODE_STATICS_lockIcon
		GEODE_AS_STATIC_FUNCTION(lockIcon) 
	#endif

	#ifndef GEODE_STATICS_openEditorGuide
		#define GEODE_STATICS_openEditorGuide
		GEODE_AS_STATIC_FUNCTION(openEditorGuide) 
	#endif

	#ifndef GEODE_STATICS_rateGame
		#define GEODE_STATICS_rateGame
		GEODE_AS_STATIC_FUNCTION(rateGame) 
	#endif

	#ifndef GEODE_STATICS_recountUserStats
		#define GEODE_STATICS_recountUserStats
		GEODE_AS_STATIC_FUNCTION(recountUserStats) 
	#endif

	#ifndef GEODE_STATICS_reloadAll
		#define GEODE_STATICS_reloadAll
		GEODE_AS_STATIC_FUNCTION(reloadAll) 
	#endif

	#ifndef GEODE_STATICS_reloadAllStep2
		#define GEODE_STATICS_reloadAllStep2
		GEODE_AS_STATIC_FUNCTION(reloadAllStep2) 
	#endif

	#ifndef GEODE_STATICS_reloadAllStep3
		#define GEODE_STATICS_reloadAllStep3
		GEODE_AS_STATIC_FUNCTION(reloadAllStep3) 
	#endif

	#ifndef GEODE_STATICS_reloadAllStep4
		#define GEODE_STATICS_reloadAllStep4
		GEODE_AS_STATIC_FUNCTION(reloadAllStep4) 
	#endif

	#ifndef GEODE_STATICS_reloadAllStep5
		#define GEODE_STATICS_reloadAllStep5
		GEODE_AS_STATIC_FUNCTION(reloadAllStep5) 
	#endif

	#ifndef GEODE_STATICS_removeCustomObject
		#define GEODE_STATICS_removeCustomObject
		GEODE_AS_STATIC_FUNCTION(removeCustomObject) 
	#endif

	#ifndef GEODE_STATICS_reorderKey
		#define GEODE_STATICS_reorderKey
		GEODE_AS_STATIC_FUNCTION(reorderKey) 
	#endif

	#ifndef GEODE_STATICS_reportAchievementWithID
		#define GEODE_STATICS_reportAchievementWithID
		GEODE_AS_STATIC_FUNCTION(reportAchievementWithID) 
	#endif

	#ifndef GEODE_STATICS_reportPercentageForLevel
		#define GEODE_STATICS_reportPercentageForLevel
		GEODE_AS_STATIC_FUNCTION(reportPercentageForLevel) 
	#endif

	#ifndef GEODE_STATICS_resetAchievement
		#define GEODE_STATICS_resetAchievement
		GEODE_AS_STATIC_FUNCTION(resetAchievement) 
	#endif

	#ifndef GEODE_STATICS_resetAllIcons
		#define GEODE_STATICS_resetAllIcons
		GEODE_AS_STATIC_FUNCTION(resetAllIcons) 
	#endif

	#ifndef GEODE_STATICS_resetCoinUnlocks
		#define GEODE_STATICS_resetCoinUnlocks
		GEODE_AS_STATIC_FUNCTION(resetCoinUnlocks) 
	#endif

	#ifndef GEODE_STATICS_resolutionForKey
		#define GEODE_STATICS_resolutionForKey
		GEODE_AS_STATIC_FUNCTION(resolutionForKey) 
	#endif

	#ifndef GEODE_STATICS_returnToLastScene
		#define GEODE_STATICS_returnToLastScene
		GEODE_AS_STATIC_FUNCTION(returnToLastScene) 
	#endif

	#ifndef GEODE_STATICS_safePopScene
		#define GEODE_STATICS_safePopScene
		GEODE_AS_STATIC_FUNCTION(safePopScene) 
	#endif

	#ifndef GEODE_STATICS_setBootups
		#define GEODE_STATICS_setBootups
		GEODE_AS_STATIC_FUNCTION(setBootups) 
	#endif

	#ifndef GEODE_STATICS_setClickedEditor
		#define GEODE_STATICS_setClickedEditor
		GEODE_AS_STATIC_FUNCTION(setClickedEditor) 
	#endif

	#ifndef GEODE_STATICS_setClickedGarage
		#define GEODE_STATICS_setClickedGarage
		GEODE_AS_STATIC_FUNCTION(setClickedGarage) 
	#endif

	#ifndef GEODE_STATICS_setClickedName
		#define GEODE_STATICS_setClickedName
		GEODE_AS_STATIC_FUNCTION(setClickedName) 
	#endif

	#ifndef GEODE_STATICS_setClickedPractice
		#define GEODE_STATICS_setClickedPractice
		GEODE_AS_STATIC_FUNCTION(setClickedPractice) 
	#endif

	#ifndef GEODE_STATICS_setCommentSortRecent
		#define GEODE_STATICS_setCommentSortRecent
		GEODE_AS_STATIC_FUNCTION(setCommentSortRecent) 
	#endif

	#ifndef GEODE_STATICS_setCustomObjectDict
		#define GEODE_STATICS_setCustomObjectDict
		GEODE_AS_STATIC_FUNCTION(setCustomObjectDict) 
	#endif

	#ifndef GEODE_STATICS_setDidFollowTwitter
		#define GEODE_STATICS_setDidFollowTwitter
		GEODE_AS_STATIC_FUNCTION(setDidFollowTwitter) 
	#endif

	#ifndef GEODE_STATICS_setDidLikeFacebook
		#define GEODE_STATICS_setDidLikeFacebook
		GEODE_AS_STATIC_FUNCTION(setDidLikeFacebook) 
	#endif

	#ifndef GEODE_STATICS_setDidPauseBGMusic
		#define GEODE_STATICS_setDidPauseBGMusic
		GEODE_AS_STATIC_FUNCTION(setDidPauseBGMusic) 
	#endif

	#ifndef GEODE_STATICS_setDidPlayGame
		#define GEODE_STATICS_setDidPlayGame
		GEODE_AS_STATIC_FUNCTION(setDidPlayGame) 
	#endif

	#ifndef GEODE_STATICS_setDidRateGame
		#define GEODE_STATICS_setDidRateGame
		GEODE_AS_STATIC_FUNCTION(setDidRateGame) 
	#endif

	#ifndef GEODE_STATICS_setDidSetupEveryplay
		#define GEODE_STATICS_setDidSetupEveryplay
		GEODE_AS_STATIC_FUNCTION(setDidSetupEveryplay) 
	#endif

	#ifndef GEODE_STATICS_setDidSubYouTube
		#define GEODE_STATICS_setDidSubYouTube
		GEODE_AS_STATIC_FUNCTION(setDidSubYouTube) 
	#endif

	#ifndef GEODE_STATICS_setDidSyncAchievements
		#define GEODE_STATICS_setDidSyncAchievements
		GEODE_AS_STATIC_FUNCTION(setDidSyncAchievements) 
	#endif

	#ifndef GEODE_STATICS_setEditMode
		#define GEODE_STATICS_setEditMode
		GEODE_AS_STATIC_FUNCTION(setEditMode) 
	#endif

	#ifndef GEODE_STATICS_setEditorCopyString
		#define GEODE_STATICS_setEditorCopyString
		GEODE_AS_STATIC_FUNCTION(setEditorCopyString) 
	#endif

	#ifndef GEODE_STATICS_setEditorLayer
		#define GEODE_STATICS_setEditorLayer
		GEODE_AS_STATIC_FUNCTION(setEditorLayer) 
	#endif

	#ifndef GEODE_STATICS_setFetchNewLevelsQueued
		#define GEODE_STATICS_setFetchNewLevelsQueued
		GEODE_AS_STATIC_FUNCTION(setFetchNewLevelsQueued) 
	#endif

	#ifndef GEODE_STATICS_setFirstSetup
		#define GEODE_STATICS_setFirstSetup
		GEODE_AS_STATIC_FUNCTION(setFirstSetup) 
	#endif

	#ifndef GEODE_STATICS_setGameVariable
		#define GEODE_STATICS_setGameVariable
		GEODE_AS_STATIC_FUNCTION(setGameVariable) 
	#endif

	#ifndef GEODE_STATICS_setHasRatedGame
		#define GEODE_STATICS_setHasRatedGame
		GEODE_AS_STATIC_FUNCTION(setHasRatedGame) 
	#endif

	#ifndef GEODE_STATICS_setHasRatingPower
		#define GEODE_STATICS_setHasRatingPower
		GEODE_AS_STATIC_FUNCTION(setHasRatingPower) 
	#endif

	#ifndef GEODE_STATICS_setIntGameVariable
		#define GEODE_STATICS_setIntGameVariable
		GEODE_AS_STATIC_FUNCTION(setIntGameVariable) 
	#endif

	#ifndef GEODE_STATICS_setIsResetting
		#define GEODE_STATICS_setIsResetting
		GEODE_AS_STATIC_FUNCTION(setIsResetting) 
	#endif

	#ifndef GEODE_STATICS_setLastCustomColorIdx
		#define GEODE_STATICS_setLastCustomColorIdx
		GEODE_AS_STATIC_FUNCTION(setLastCustomColorIdx) 
	#endif

	#ifndef GEODE_STATICS_setLastGroupID
		#define GEODE_STATICS_setLastGroupID
		GEODE_AS_STATIC_FUNCTION(setLastGroupID) 
	#endif

	#ifndef GEODE_STATICS_setLastLevelID
		#define GEODE_STATICS_setLastLevelID
		GEODE_AS_STATIC_FUNCTION(setLastLevelID) 
	#endif

	#ifndef GEODE_STATICS_setLastScene
		#define GEODE_STATICS_setLastScene
		GEODE_AS_STATIC_FUNCTION(setLastScene) 
	#endif

	#ifndef GEODE_STATICS_setLastScene2
		#define GEODE_STATICS_setLastScene2
		GEODE_AS_STATIC_FUNCTION(setLastScene2) 
	#endif

	#ifndef GEODE_STATICS_setLevelSelectLayer
		#define GEODE_STATICS_setLevelSelectLayer
		GEODE_AS_STATIC_FUNCTION(setLevelSelectLayer) 
	#endif

	#ifndef GEODE_STATICS_setMainMenuActive
		#define GEODE_STATICS_setMainMenuActive
		GEODE_AS_STATIC_FUNCTION(setMainMenuActive) 
	#endif

	#ifndef GEODE_STATICS_setMenulayer
		#define GEODE_STATICS_setMenulayer
		GEODE_AS_STATIC_FUNCTION(setMenulayer) 
	#endif

	#ifndef GEODE_STATICS_setPerformanceMode
		#define GEODE_STATICS_setPerformanceMode
		GEODE_AS_STATIC_FUNCTION(setPerformanceMode) 
	#endif

	#ifndef GEODE_STATICS_setPlayerBall
		#define GEODE_STATICS_setPlayerBall
		GEODE_AS_STATIC_FUNCTION(setPlayerBall) 
	#endif

	#ifndef GEODE_STATICS_setPlayerBird
		#define GEODE_STATICS_setPlayerBird
		GEODE_AS_STATIC_FUNCTION(setPlayerBird) 
	#endif

	#ifndef GEODE_STATICS_setPlayerColor
		#define GEODE_STATICS_setPlayerColor
		GEODE_AS_STATIC_FUNCTION(setPlayerColor) 
	#endif

	#ifndef GEODE_STATICS_setPlayerColor2
		#define GEODE_STATICS_setPlayerColor2
		GEODE_AS_STATIC_FUNCTION(setPlayerColor2) 
	#endif

	#ifndef GEODE_STATICS_setPlayerDart
		#define GEODE_STATICS_setPlayerDart
		GEODE_AS_STATIC_FUNCTION(setPlayerDart) 
	#endif

	#ifndef GEODE_STATICS_setPlayerFrame
		#define GEODE_STATICS_setPlayerFrame
		GEODE_AS_STATIC_FUNCTION(setPlayerFrame) 
	#endif

	#ifndef GEODE_STATICS_setPlayerGlow
		#define GEODE_STATICS_setPlayerGlow
		GEODE_AS_STATIC_FUNCTION(setPlayerGlow) 
	#endif

	#ifndef GEODE_STATICS_setPlayerIconType
		#define GEODE_STATICS_setPlayerIconType
		GEODE_AS_STATIC_FUNCTION(setPlayerIconType) 
	#endif

	#ifndef GEODE_STATICS_setPlayerName
		#define GEODE_STATICS_setPlayerName
		GEODE_AS_STATIC_FUNCTION(setPlayerName) 
	#endif

	#ifndef GEODE_STATICS_setPlayerRobot
		#define GEODE_STATICS_setPlayerRobot
		GEODE_AS_STATIC_FUNCTION(setPlayerRobot) 
	#endif

	#ifndef GEODE_STATICS_setPlayerScoreValid
		#define GEODE_STATICS_setPlayerScoreValid
		GEODE_AS_STATIC_FUNCTION(setPlayerScoreValid) 
	#endif

	#ifndef GEODE_STATICS_setPlayerShip
		#define GEODE_STATICS_setPlayerShip
		GEODE_AS_STATIC_FUNCTION(setPlayerShip) 
	#endif

	#ifndef GEODE_STATICS_setPlayerStreak
		#define GEODE_STATICS_setPlayerStreak
		GEODE_AS_STATIC_FUNCTION(setPlayerStreak) 
	#endif

	#ifndef GEODE_STATICS_setPlayerUDID
		#define GEODE_STATICS_setPlayerUDID
		GEODE_AS_STATIC_FUNCTION(setPlayerUDID) 
	#endif

	#ifndef GEODE_STATICS_setPlayerUserID
		#define GEODE_STATICS_setPlayerUserID
		GEODE_AS_STATIC_FUNCTION(setPlayerUserID) 
	#endif

	#ifndef GEODE_STATICS_setPlayLayer
		#define GEODE_STATICS_setPlayLayer
		GEODE_AS_STATIC_FUNCTION(setPlayLayer) 
	#endif

	#ifndef GEODE_STATICS_setPremiumPopup
		#define GEODE_STATICS_setPremiumPopup
		GEODE_AS_STATIC_FUNCTION(setPremiumPopup) 
	#endif

	#ifndef GEODE_STATICS_setRateDelegate
		#define GEODE_STATICS_setRateDelegate
		GEODE_AS_STATIC_FUNCTION(setRateDelegate) 
	#endif

	#ifndef GEODE_STATICS_setRecordGameplay
		#define GEODE_STATICS_setRecordGameplay
		GEODE_AS_STATIC_FUNCTION(setRecordGameplay) 
	#endif

	#ifndef GEODE_STATICS_setResolution
		#define GEODE_STATICS_setResolution
		GEODE_AS_STATIC_FUNCTION(setResolution) 
	#endif

	#ifndef GEODE_STATICS_setReturnToSearch
		#define GEODE_STATICS_setReturnToSearch
		GEODE_AS_STATIC_FUNCTION(setReturnToSearch) 
	#endif

	#ifndef GEODE_STATICS_setShowBPMMarkers
		#define GEODE_STATICS_setShowBPMMarkers
		GEODE_AS_STATIC_FUNCTION(setShowBPMMarkers) 
	#endif

	#ifndef GEODE_STATICS_setShowedEditorGuide
		#define GEODE_STATICS_setShowedEditorGuide
		GEODE_AS_STATIC_FUNCTION(setShowedEditorGuide) 
	#endif

	#ifndef GEODE_STATICS_setShowedLowDetailDialog
		#define GEODE_STATICS_setShowedLowDetailDialog
		GEODE_AS_STATIC_FUNCTION(setShowedLowDetailDialog) 
	#endif

	#ifndef GEODE_STATICS_setShowedMenu
		#define GEODE_STATICS_setShowedMenu
		GEODE_AS_STATIC_FUNCTION(setShowedMenu) 
	#endif

	#ifndef GEODE_STATICS_setShowedPirate
		#define GEODE_STATICS_setShowedPirate
		GEODE_AS_STATIC_FUNCTION(setShowedPirate) 
	#endif

	#ifndef GEODE_STATICS_setShowedRateDiffDialog
		#define GEODE_STATICS_setShowedRateDiffDialog
		GEODE_AS_STATIC_FUNCTION(setShowedRateDiffDialog) 
	#endif

	#ifndef GEODE_STATICS_setShowedRateStarDialog
		#define GEODE_STATICS_setShowedRateStarDialog
		GEODE_AS_STATIC_FUNCTION(setShowedRateStarDialog) 
	#endif

	#ifndef GEODE_STATICS_setShowingPromo
		#define GEODE_STATICS_setShowingPromo
		GEODE_AS_STATIC_FUNCTION(setShowingPromo) 
	#endif

	#ifndef GEODE_STATICS_setShowProgressBar
		#define GEODE_STATICS_setShowProgressBar
		GEODE_AS_STATIC_FUNCTION(setShowProgressBar) 
	#endif

	#ifndef GEODE_STATICS_setShowSongMarkers
		#define GEODE_STATICS_setShowSongMarkers
		GEODE_AS_STATIC_FUNCTION(setShowSongMarkers) 
	#endif

	#ifndef GEODE_STATICS_setStoredColor
		#define GEODE_STATICS_setStoredColor
		GEODE_AS_STATIC_FUNCTION(setStoredColor) 
	#endif

	#ifndef GEODE_STATICS_setTestSmoothFix
		#define GEODE_STATICS_setTestSmoothFix
		GEODE_AS_STATIC_FUNCTION(setTestSmoothFix) 
	#endif

	#ifndef GEODE_STATICS_setTexQuality
		#define GEODE_STATICS_setTexQuality
		GEODE_AS_STATIC_FUNCTION(setTexQuality) 
	#endif

	#ifndef GEODE_STATICS_setTotalAttempts
		#define GEODE_STATICS_setTotalAttempts
		GEODE_AS_STATIC_FUNCTION(setTotalAttempts) 
	#endif

	#ifndef GEODE_STATICS_setValueKeeper
		#define GEODE_STATICS_setValueKeeper
		GEODE_AS_STATIC_FUNCTION(setValueKeeper) 
	#endif

	#ifndef GEODE_STATICS_setWasHigh
		#define GEODE_STATICS_setWasHigh
		GEODE_AS_STATIC_FUNCTION(setWasHigh) 
	#endif

	#ifndef GEODE_STATICS_shouldShowInterstitial
		#define GEODE_STATICS_shouldShowInterstitial
		GEODE_AS_STATIC_FUNCTION(shouldShowInterstitial) 
	#endif

	#ifndef GEODE_STATICS_shouldShowPromoInterstitial
		#define GEODE_STATICS_shouldShowPromoInterstitial
		GEODE_AS_STATIC_FUNCTION(shouldShowPromoInterstitial) 
	#endif

	#ifndef GEODE_STATICS_showInterstitial
		#define GEODE_STATICS_showInterstitial
		GEODE_AS_STATIC_FUNCTION(showInterstitial) 
	#endif

	#ifndef GEODE_STATICS_showInterstitialForced
		#define GEODE_STATICS_showInterstitialForced
		GEODE_AS_STATIC_FUNCTION(showInterstitialForced) 
	#endif

	#ifndef GEODE_STATICS_showMainMenuAd
		#define GEODE_STATICS_showMainMenuAd
		GEODE_AS_STATIC_FUNCTION(showMainMenuAd) 
	#endif

	#ifndef GEODE_STATICS_showPromoInterstitial
		#define GEODE_STATICS_showPromoInterstitial
		GEODE_AS_STATIC_FUNCTION(showPromoInterstitial) 
	#endif

	#ifndef GEODE_STATICS_startUpdate
		#define GEODE_STATICS_startUpdate
		GEODE_AS_STATIC_FUNCTION(startUpdate) 
	#endif

	#ifndef GEODE_STATICS_stringForCustomObject
		#define GEODE_STATICS_stringForCustomObject
		GEODE_AS_STATIC_FUNCTION(stringForCustomObject) 
	#endif

	#ifndef GEODE_STATICS_subYouTube
		#define GEODE_STATICS_subYouTube
		GEODE_AS_STATIC_FUNCTION(subYouTube) 
	#endif

	#ifndef GEODE_STATICS_switchCustomObjects
		#define GEODE_STATICS_switchCustomObjects
		GEODE_AS_STATIC_FUNCTION(switchCustomObjects) 
	#endif

	#ifndef GEODE_STATICS_switchScreenMode
		#define GEODE_STATICS_switchScreenMode
		GEODE_AS_STATIC_FUNCTION(switchScreenMode) 
	#endif

	#ifndef GEODE_STATICS_syncPlatformAchievements
		#define GEODE_STATICS_syncPlatformAchievements
		GEODE_AS_STATIC_FUNCTION(syncPlatformAchievements) 
	#endif

	#ifndef GEODE_STATICS_toggleGameVariable
		#define GEODE_STATICS_toggleGameVariable
		GEODE_AS_STATIC_FUNCTION(toggleGameVariable) 
	#endif

	#ifndef GEODE_STATICS_tryCacheAd
		#define GEODE_STATICS_tryCacheAd
		GEODE_AS_STATIC_FUNCTION(tryCacheAd) 
	#endif

	#ifndef GEODE_STATICS_unloadBackground
		#define GEODE_STATICS_unloadBackground
		GEODE_AS_STATIC_FUNCTION(unloadBackground) 
	#endif

	#ifndef GEODE_STATICS_unlockColor
		#define GEODE_STATICS_unlockColor
		GEODE_AS_STATIC_FUNCTION(unlockColor) 
	#endif

	#ifndef GEODE_STATICS_unlockedPremium
		#define GEODE_STATICS_unlockedPremium
		GEODE_AS_STATIC_FUNCTION(unlockedPremium) 
	#endif

	#ifndef GEODE_STATICS_unlockIcon
		#define GEODE_STATICS_unlockIcon
		GEODE_AS_STATIC_FUNCTION(unlockIcon) 
	#endif

	#ifndef GEODE_STATICS_updateMusic
		#define GEODE_STATICS_updateMusic
		GEODE_AS_STATIC_FUNCTION(updateMusic) 
	#endif

	#ifndef GEODE_STATICS_verifyAchievementUnlocks
		#define GEODE_STATICS_verifyAchievementUnlocks
		GEODE_AS_STATIC_FUNCTION(verifyAchievementUnlocks) 
	#endif

	#ifndef GEODE_STATICS_verifyCoinUnlocks
		#define GEODE_STATICS_verifyCoinUnlocks
		GEODE_AS_STATIC_FUNCTION(verifyCoinUnlocks) 
	#endif

	#ifndef GEODE_STATICS_verifyStarUnlocks
		#define GEODE_STATICS_verifyStarUnlocks
		GEODE_AS_STATIC_FUNCTION(verifyStarUnlocks) 
	#endif

	#ifndef GEODE_STATICS_verifySyncedCoins
		#define GEODE_STATICS_verifySyncedCoins
		GEODE_AS_STATIC_FUNCTION(verifySyncedCoins) 
	#endif

	#ifndef GEODE_STATICS_videoAdHidden
		#define GEODE_STATICS_videoAdHidden
		GEODE_AS_STATIC_FUNCTION(videoAdHidden) 
	#endif

	#ifndef GEODE_STATICS_videoAdShowed
		#define GEODE_STATICS_videoAdShowed
		GEODE_AS_STATIC_FUNCTION(videoAdShowed) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_encodeDataTo
		#define GEODE_STATICS_encodeDataTo
		GEODE_AS_STATIC_FUNCTION(encodeDataTo) 
	#endif

	#ifndef GEODE_STATICS_dataLoaded
		#define GEODE_STATICS_dataLoaded
		GEODE_AS_STATIC_FUNCTION(dataLoaded) 
	#endif

	#ifndef GEODE_STATICS_firstLoad
		#define GEODE_STATICS_firstLoad
		GEODE_AS_STATIC_FUNCTION(firstLoad) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_sharedState
		#define GEODE_CONCEPT_CHECK_sharedState
		GEODE_CONCEPT_FUNCTION_CHECK(sharedState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_accountStatusChanged
		#define GEODE_CONCEPT_CHECK_accountStatusChanged
		GEODE_CONCEPT_FUNCTION_CHECK(accountStatusChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addNewCustomObject
		#define GEODE_CONCEPT_CHECK_addNewCustomObject
		GEODE_CONCEPT_FUNCTION_CHECK(addNewCustomObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applicationDidEnterBackground
		#define GEODE_CONCEPT_CHECK_applicationDidEnterBackground
		GEODE_CONCEPT_FUNCTION_CHECK(applicationDidEnterBackground) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applicationWillEnterForeground
		#define GEODE_CONCEPT_CHECK_applicationWillEnterForeground
		GEODE_CONCEPT_FUNCTION_CHECK(applicationWillEnterForeground) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkSteamAchievementUnlock
		#define GEODE_CONCEPT_CHECK_checkSteamAchievementUnlock
		GEODE_CONCEPT_FUNCTION_CHECK(checkSteamAchievementUnlock) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_claimItemsResponse
		#define GEODE_CONCEPT_CHECK_claimItemsResponse
		GEODE_CONCEPT_FUNCTION_CHECK(claimItemsResponse) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_colorForIdx
		#define GEODE_CONCEPT_CHECK_colorForIdx
		GEODE_CONCEPT_FUNCTION_CHECK(colorForIdx) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_colorForPos
		#define GEODE_CONCEPT_CHECK_colorForPos
		GEODE_CONCEPT_FUNCTION_CHECK(colorForPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_colorKey
		#define GEODE_CONCEPT_CHECK_colorKey
		GEODE_CONCEPT_FUNCTION_CHECK(colorKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_completedAchievement
		#define GEODE_CONCEPT_CHECK_completedAchievement
		GEODE_CONCEPT_FUNCTION_CHECK(completedAchievement) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_didExitPlayscene
		#define GEODE_CONCEPT_CHECK_didExitPlayscene
		GEODE_CONCEPT_FUNCTION_CHECK(didExitPlayscene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_doQuickSave
		#define GEODE_CONCEPT_CHECK_doQuickSave
		GEODE_CONCEPT_FUNCTION_CHECK(doQuickSave) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_eventUnlockFeature
		#define GEODE_CONCEPT_CHECK_eventUnlockFeature
		GEODE_CONCEPT_FUNCTION_CHECK(eventUnlockFeature) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fadeInMusic
		#define GEODE_CONCEPT_CHECK_fadeInMusic
		GEODE_CONCEPT_FUNCTION_CHECK(fadeInMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_followTwitter
		#define GEODE_CONCEPT_CHECK_followTwitter
		GEODE_CONCEPT_FUNCTION_CHECK(followTwitter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBGTexture
		#define GEODE_CONCEPT_CHECK_getBGTexture
		GEODE_CONCEPT_FUNCTION_CHECK(getBGTexture) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBootups
		#define GEODE_CONCEPT_CHECK_getBootups
		GEODE_CONCEPT_FUNCTION_CHECK(getBootups) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getClickedEditor
		#define GEODE_CONCEPT_CHECK_getClickedEditor
		GEODE_CONCEPT_FUNCTION_CHECK(getClickedEditor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getClickedGarage
		#define GEODE_CONCEPT_CHECK_getClickedGarage
		GEODE_CONCEPT_FUNCTION_CHECK(getClickedGarage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getClickedName
		#define GEODE_CONCEPT_CHECK_getClickedName
		GEODE_CONCEPT_FUNCTION_CHECK(getClickedName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getClickedPractice
		#define GEODE_CONCEPT_CHECK_getClickedPractice
		GEODE_CONCEPT_FUNCTION_CHECK(getClickedPractice) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCommentSortRecent
		#define GEODE_CONCEPT_CHECK_getCommentSortRecent
		GEODE_CONCEPT_FUNCTION_CHECK(getCommentSortRecent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCustomObjectDict
		#define GEODE_CONCEPT_CHECK_getCustomObjectDict
		GEODE_CONCEPT_FUNCTION_CHECK(getCustomObjectDict) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDidFollowTwitter
		#define GEODE_CONCEPT_CHECK_getDidFollowTwitter
		GEODE_CONCEPT_FUNCTION_CHECK(getDidFollowTwitter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDidLikeFacebook
		#define GEODE_CONCEPT_CHECK_getDidLikeFacebook
		GEODE_CONCEPT_FUNCTION_CHECK(getDidLikeFacebook) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDidPauseBGMusic
		#define GEODE_CONCEPT_CHECK_getDidPauseBGMusic
		GEODE_CONCEPT_FUNCTION_CHECK(getDidPauseBGMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDidPlayGame
		#define GEODE_CONCEPT_CHECK_getDidPlayGame
		GEODE_CONCEPT_FUNCTION_CHECK(getDidPlayGame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDidRateGame
		#define GEODE_CONCEPT_CHECK_getDidRateGame
		GEODE_CONCEPT_FUNCTION_CHECK(getDidRateGame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDidSetupEveryplay
		#define GEODE_CONCEPT_CHECK_getDidSetupEveryplay
		GEODE_CONCEPT_FUNCTION_CHECK(getDidSetupEveryplay) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDidSubYouTube
		#define GEODE_CONCEPT_CHECK_getDidSubYouTube
		GEODE_CONCEPT_FUNCTION_CHECK(getDidSubYouTube) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDidSyncAchievements
		#define GEODE_CONCEPT_CHECK_getDidSyncAchievements
		GEODE_CONCEPT_FUNCTION_CHECK(getDidSyncAchievements) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEditMode
		#define GEODE_CONCEPT_CHECK_getEditMode
		GEODE_CONCEPT_FUNCTION_CHECK(getEditMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEditorCopyString
		#define GEODE_CONCEPT_CHECK_getEditorCopyString
		GEODE_CONCEPT_FUNCTION_CHECK(getEditorCopyString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEditorLayer
		#define GEODE_CONCEPT_CHECK_getEditorLayer
		GEODE_CONCEPT_FUNCTION_CHECK(getEditorLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFetchNewLevelsQueued
		#define GEODE_CONCEPT_CHECK_getFetchNewLevelsQueued
		GEODE_CONCEPT_FUNCTION_CHECK(getFetchNewLevelsQueued) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFirstSetup
		#define GEODE_CONCEPT_CHECK_getFirstSetup
		GEODE_CONCEPT_FUNCTION_CHECK(getFirstSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFontFile
		#define GEODE_CONCEPT_CHECK_getFontFile
		GEODE_CONCEPT_FUNCTION_CHECK(getFontFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFontTexture
		#define GEODE_CONCEPT_CHECK_getFontTexture
		GEODE_CONCEPT_FUNCTION_CHECK(getFontTexture) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGameVariable
		#define GEODE_CONCEPT_CHECK_getGameVariable
		GEODE_CONCEPT_FUNCTION_CHECK(getGameVariable) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGTexture
		#define GEODE_CONCEPT_CHECK_getGTexture
		GEODE_CONCEPT_FUNCTION_CHECK(getGTexture) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getHasRatedGame
		#define GEODE_CONCEPT_CHECK_getHasRatedGame
		GEODE_CONCEPT_FUNCTION_CHECK(getHasRatedGame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getHasRatingPower
		#define GEODE_CONCEPT_CHECK_getHasRatingPower
		GEODE_CONCEPT_FUNCTION_CHECK(getHasRatingPower) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIntGameVariable
		#define GEODE_CONCEPT_CHECK_getIntGameVariable
		GEODE_CONCEPT_FUNCTION_CHECK(getIntGameVariable) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIsResetting
		#define GEODE_CONCEPT_CHECK_getIsResetting
		GEODE_CONCEPT_FUNCTION_CHECK(getIsResetting) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLastCustomColorIdx
		#define GEODE_CONCEPT_CHECK_getLastCustomColorIdx
		GEODE_CONCEPT_FUNCTION_CHECK(getLastCustomColorIdx) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLastGroupID
		#define GEODE_CONCEPT_CHECK_getLastGroupID
		GEODE_CONCEPT_FUNCTION_CHECK(getLastGroupID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLastLevelID
		#define GEODE_CONCEPT_CHECK_getLastLevelID
		GEODE_CONCEPT_FUNCTION_CHECK(getLastLevelID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLastScene
		#define GEODE_CONCEPT_CHECK_getLastScene
		GEODE_CONCEPT_FUNCTION_CHECK(getLastScene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLastScene2
		#define GEODE_CONCEPT_CHECK_getLastScene2
		GEODE_CONCEPT_FUNCTION_CHECK(getLastScene2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLevelSelectLayer
		#define GEODE_CONCEPT_CHECK_getLevelSelectLayer
		GEODE_CONCEPT_FUNCTION_CHECK(getLevelSelectLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLoadedBGIdx
		#define GEODE_CONCEPT_CHECK_getLoadedBGIdx
		GEODE_CONCEPT_FUNCTION_CHECK(getLoadedBGIdx) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLoadedFontIdx
		#define GEODE_CONCEPT_CHECK_getLoadedFontIdx
		GEODE_CONCEPT_FUNCTION_CHECK(getLoadedFontIdx) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLoadedGIdx
		#define GEODE_CONCEPT_CHECK_getLoadedGIdx
		GEODE_CONCEPT_FUNCTION_CHECK(getLoadedGIdx) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMainMenuActive
		#define GEODE_CONCEPT_CHECK_getMainMenuActive
		GEODE_CONCEPT_FUNCTION_CHECK(getMainMenuActive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMenulayer
		#define GEODE_CONCEPT_CHECK_getMenulayer
		GEODE_CONCEPT_FUNCTION_CHECK(getMenulayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNextUniqueObjectKey
		#define GEODE_CONCEPT_CHECK_getNextUniqueObjectKey
		GEODE_CONCEPT_FUNCTION_CHECK(getNextUniqueObjectKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNextUsedKey
		#define GEODE_CONCEPT_CHECK_getNextUsedKey
		GEODE_CONCEPT_FUNCTION_CHECK(getNextUsedKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOrderedCustomObjectKeys
		#define GEODE_CONCEPT_CHECK_getOrderedCustomObjectKeys
		GEODE_CONCEPT_FUNCTION_CHECK(getOrderedCustomObjectKeys) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPerformanceMode
		#define GEODE_CONCEPT_CHECK_getPerformanceMode
		GEODE_CONCEPT_FUNCTION_CHECK(getPerformanceMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPlayerBall
		#define GEODE_CONCEPT_CHECK_getPlayerBall
		GEODE_CONCEPT_FUNCTION_CHECK(getPlayerBall) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPlayerBird
		#define GEODE_CONCEPT_CHECK_getPlayerBird
		GEODE_CONCEPT_FUNCTION_CHECK(getPlayerBird) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPlayerColor
		#define GEODE_CONCEPT_CHECK_getPlayerColor
		GEODE_CONCEPT_FUNCTION_CHECK(getPlayerColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPlayerColor2
		#define GEODE_CONCEPT_CHECK_getPlayerColor2
		GEODE_CONCEPT_FUNCTION_CHECK(getPlayerColor2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPlayerDart
		#define GEODE_CONCEPT_CHECK_getPlayerDart
		GEODE_CONCEPT_FUNCTION_CHECK(getPlayerDart) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPlayerFrame
		#define GEODE_CONCEPT_CHECK_getPlayerFrame
		GEODE_CONCEPT_FUNCTION_CHECK(getPlayerFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPlayerGlow
		#define GEODE_CONCEPT_CHECK_getPlayerGlow
		GEODE_CONCEPT_FUNCTION_CHECK(getPlayerGlow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPlayerIconType
		#define GEODE_CONCEPT_CHECK_getPlayerIconType
		GEODE_CONCEPT_FUNCTION_CHECK(getPlayerIconType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPlayerName
		#define GEODE_CONCEPT_CHECK_getPlayerName
		GEODE_CONCEPT_FUNCTION_CHECK(getPlayerName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPlayerRobot
		#define GEODE_CONCEPT_CHECK_getPlayerRobot
		GEODE_CONCEPT_FUNCTION_CHECK(getPlayerRobot) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPlayerScoreValid
		#define GEODE_CONCEPT_CHECK_getPlayerScoreValid
		GEODE_CONCEPT_FUNCTION_CHECK(getPlayerScoreValid) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPlayerShip
		#define GEODE_CONCEPT_CHECK_getPlayerShip
		GEODE_CONCEPT_FUNCTION_CHECK(getPlayerShip) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPlayerStreak
		#define GEODE_CONCEPT_CHECK_getPlayerStreak
		GEODE_CONCEPT_FUNCTION_CHECK(getPlayerStreak) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPlayerUDID
		#define GEODE_CONCEPT_CHECK_getPlayerUDID
		GEODE_CONCEPT_FUNCTION_CHECK(getPlayerUDID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPlayerUserID
		#define GEODE_CONCEPT_CHECK_getPlayerUserID
		GEODE_CONCEPT_FUNCTION_CHECK(getPlayerUserID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPlayLayer
		#define GEODE_CONCEPT_CHECK_getPlayLayer
		GEODE_CONCEPT_FUNCTION_CHECK(getPlayLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPremiumPopup
		#define GEODE_CONCEPT_CHECK_getPremiumPopup
		GEODE_CONCEPT_FUNCTION_CHECK(getPremiumPopup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRateDelegate
		#define GEODE_CONCEPT_CHECK_getRateDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(getRateDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRecordGameplay
		#define GEODE_CONCEPT_CHECK_getRecordGameplay
		GEODE_CONCEPT_FUNCTION_CHECK(getRecordGameplay) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getResolution
		#define GEODE_CONCEPT_CHECK_getResolution
		GEODE_CONCEPT_FUNCTION_CHECK(getResolution) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getReturnToSearch
		#define GEODE_CONCEPT_CHECK_getReturnToSearch
		GEODE_CONCEPT_FUNCTION_CHECK(getReturnToSearch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getShowBPMMarkers
		#define GEODE_CONCEPT_CHECK_getShowBPMMarkers
		GEODE_CONCEPT_FUNCTION_CHECK(getShowBPMMarkers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getShowedEditorGuide
		#define GEODE_CONCEPT_CHECK_getShowedEditorGuide
		GEODE_CONCEPT_FUNCTION_CHECK(getShowedEditorGuide) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getShowedLowDetailDialog
		#define GEODE_CONCEPT_CHECK_getShowedLowDetailDialog
		GEODE_CONCEPT_FUNCTION_CHECK(getShowedLowDetailDialog) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getShowedMenu
		#define GEODE_CONCEPT_CHECK_getShowedMenu
		GEODE_CONCEPT_FUNCTION_CHECK(getShowedMenu) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getShowedPirate
		#define GEODE_CONCEPT_CHECK_getShowedPirate
		GEODE_CONCEPT_FUNCTION_CHECK(getShowedPirate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getShowedRateDiffDialog
		#define GEODE_CONCEPT_CHECK_getShowedRateDiffDialog
		GEODE_CONCEPT_FUNCTION_CHECK(getShowedRateDiffDialog) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getShowedRateStarDialog
		#define GEODE_CONCEPT_CHECK_getShowedRateStarDialog
		GEODE_CONCEPT_FUNCTION_CHECK(getShowedRateStarDialog) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getShowingPromo
		#define GEODE_CONCEPT_CHECK_getShowingPromo
		GEODE_CONCEPT_FUNCTION_CHECK(getShowingPromo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getShowProgressBar
		#define GEODE_CONCEPT_CHECK_getShowProgressBar
		GEODE_CONCEPT_FUNCTION_CHECK(getShowProgressBar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getShowSongMarkers
		#define GEODE_CONCEPT_CHECK_getShowSongMarkers
		GEODE_CONCEPT_FUNCTION_CHECK(getShowSongMarkers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStoredColor
		#define GEODE_CONCEPT_CHECK_getStoredColor
		GEODE_CONCEPT_FUNCTION_CHECK(getStoredColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTestSmoothFix
		#define GEODE_CONCEPT_CHECK_getTestSmoothFix
		GEODE_CONCEPT_FUNCTION_CHECK(getTestSmoothFix) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTexQuality
		#define GEODE_CONCEPT_CHECK_getTexQuality
		GEODE_CONCEPT_FUNCTION_CHECK(getTexQuality) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTotalAttempts
		#define GEODE_CONCEPT_CHECK_getTotalAttempts
		GEODE_CONCEPT_FUNCTION_CHECK(getTotalAttempts) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getValueKeeper
		#define GEODE_CONCEPT_CHECK_getValueKeeper
		GEODE_CONCEPT_FUNCTION_CHECK(getValueKeeper) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getWasHigh
		#define GEODE_CONCEPT_CHECK_getWasHigh
		GEODE_CONCEPT_FUNCTION_CHECK(getWasHigh) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasShownAdRecently
		#define GEODE_CONCEPT_CHECK_hasShownAdRecently
		GEODE_CONCEPT_FUNCTION_CHECK(hasShownAdRecently) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_iconKey
		#define GEODE_CONCEPT_CHECK_iconKey
		GEODE_CONCEPT_FUNCTION_CHECK(iconKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isColorUnlocked
		#define GEODE_CONCEPT_CHECK_isColorUnlocked
		GEODE_CONCEPT_FUNCTION_CHECK(isColorUnlocked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isIconUnlocked
		#define GEODE_CONCEPT_CHECK_isIconUnlocked
		GEODE_CONCEPT_FUNCTION_CHECK(isIconUnlocked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_itemPurchased
		#define GEODE_CONCEPT_CHECK_itemPurchased
		GEODE_CONCEPT_FUNCTION_CHECK(itemPurchased) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_levelIsPremium
		#define GEODE_CONCEPT_CHECK_levelIsPremium
		GEODE_CONCEPT_FUNCTION_CHECK(levelIsPremium) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_likeFacebook
		#define GEODE_CONCEPT_CHECK_likeFacebook
		GEODE_CONCEPT_FUNCTION_CHECK(likeFacebook) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadBackground
		#define GEODE_CONCEPT_CHECK_loadBackground
		GEODE_CONCEPT_FUNCTION_CHECK(loadBackground) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadFont
		#define GEODE_CONCEPT_CHECK_loadFont
		GEODE_CONCEPT_FUNCTION_CHECK(loadFont) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadGround
		#define GEODE_CONCEPT_CHECK_loadGround
		GEODE_CONCEPT_FUNCTION_CHECK(loadGround) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadVideoSettings
		#define GEODE_CONCEPT_CHECK_loadVideoSettings
		GEODE_CONCEPT_FUNCTION_CHECK(loadVideoSettings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_lockColor
		#define GEODE_CONCEPT_CHECK_lockColor
		GEODE_CONCEPT_FUNCTION_CHECK(lockColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_lockIcon
		#define GEODE_CONCEPT_CHECK_lockIcon
		GEODE_CONCEPT_FUNCTION_CHECK(lockIcon) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_openEditorGuide
		#define GEODE_CONCEPT_CHECK_openEditorGuide
		GEODE_CONCEPT_FUNCTION_CHECK(openEditorGuide) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rateGame
		#define GEODE_CONCEPT_CHECK_rateGame
		GEODE_CONCEPT_FUNCTION_CHECK(rateGame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_recountUserStats
		#define GEODE_CONCEPT_CHECK_recountUserStats
		GEODE_CONCEPT_FUNCTION_CHECK(recountUserStats) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reloadAll
		#define GEODE_CONCEPT_CHECK_reloadAll
		GEODE_CONCEPT_FUNCTION_CHECK(reloadAll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reloadAllStep2
		#define GEODE_CONCEPT_CHECK_reloadAllStep2
		GEODE_CONCEPT_FUNCTION_CHECK(reloadAllStep2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reloadAllStep3
		#define GEODE_CONCEPT_CHECK_reloadAllStep3
		GEODE_CONCEPT_FUNCTION_CHECK(reloadAllStep3) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reloadAllStep4
		#define GEODE_CONCEPT_CHECK_reloadAllStep4
		GEODE_CONCEPT_FUNCTION_CHECK(reloadAllStep4) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reloadAllStep5
		#define GEODE_CONCEPT_CHECK_reloadAllStep5
		GEODE_CONCEPT_FUNCTION_CHECK(reloadAllStep5) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeCustomObject
		#define GEODE_CONCEPT_CHECK_removeCustomObject
		GEODE_CONCEPT_FUNCTION_CHECK(removeCustomObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reorderKey
		#define GEODE_CONCEPT_CHECK_reorderKey
		GEODE_CONCEPT_FUNCTION_CHECK(reorderKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reportAchievementWithID
		#define GEODE_CONCEPT_CHECK_reportAchievementWithID
		GEODE_CONCEPT_FUNCTION_CHECK(reportAchievementWithID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reportPercentageForLevel
		#define GEODE_CONCEPT_CHECK_reportPercentageForLevel
		GEODE_CONCEPT_FUNCTION_CHECK(reportPercentageForLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetAchievement
		#define GEODE_CONCEPT_CHECK_resetAchievement
		GEODE_CONCEPT_FUNCTION_CHECK(resetAchievement) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetAllIcons
		#define GEODE_CONCEPT_CHECK_resetAllIcons
		GEODE_CONCEPT_FUNCTION_CHECK(resetAllIcons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetCoinUnlocks
		#define GEODE_CONCEPT_CHECK_resetCoinUnlocks
		GEODE_CONCEPT_FUNCTION_CHECK(resetCoinUnlocks) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resolutionForKey
		#define GEODE_CONCEPT_CHECK_resolutionForKey
		GEODE_CONCEPT_FUNCTION_CHECK(resolutionForKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_returnToLastScene
		#define GEODE_CONCEPT_CHECK_returnToLastScene
		GEODE_CONCEPT_FUNCTION_CHECK(returnToLastScene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_safePopScene
		#define GEODE_CONCEPT_CHECK_safePopScene
		GEODE_CONCEPT_FUNCTION_CHECK(safePopScene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setBootups
		#define GEODE_CONCEPT_CHECK_setBootups
		GEODE_CONCEPT_FUNCTION_CHECK(setBootups) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setClickedEditor
		#define GEODE_CONCEPT_CHECK_setClickedEditor
		GEODE_CONCEPT_FUNCTION_CHECK(setClickedEditor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setClickedGarage
		#define GEODE_CONCEPT_CHECK_setClickedGarage
		GEODE_CONCEPT_FUNCTION_CHECK(setClickedGarage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setClickedName
		#define GEODE_CONCEPT_CHECK_setClickedName
		GEODE_CONCEPT_FUNCTION_CHECK(setClickedName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setClickedPractice
		#define GEODE_CONCEPT_CHECK_setClickedPractice
		GEODE_CONCEPT_FUNCTION_CHECK(setClickedPractice) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCommentSortRecent
		#define GEODE_CONCEPT_CHECK_setCommentSortRecent
		GEODE_CONCEPT_FUNCTION_CHECK(setCommentSortRecent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCustomObjectDict
		#define GEODE_CONCEPT_CHECK_setCustomObjectDict
		GEODE_CONCEPT_FUNCTION_CHECK(setCustomObjectDict) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDidFollowTwitter
		#define GEODE_CONCEPT_CHECK_setDidFollowTwitter
		GEODE_CONCEPT_FUNCTION_CHECK(setDidFollowTwitter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDidLikeFacebook
		#define GEODE_CONCEPT_CHECK_setDidLikeFacebook
		GEODE_CONCEPT_FUNCTION_CHECK(setDidLikeFacebook) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDidPauseBGMusic
		#define GEODE_CONCEPT_CHECK_setDidPauseBGMusic
		GEODE_CONCEPT_FUNCTION_CHECK(setDidPauseBGMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDidPlayGame
		#define GEODE_CONCEPT_CHECK_setDidPlayGame
		GEODE_CONCEPT_FUNCTION_CHECK(setDidPlayGame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDidRateGame
		#define GEODE_CONCEPT_CHECK_setDidRateGame
		GEODE_CONCEPT_FUNCTION_CHECK(setDidRateGame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDidSetupEveryplay
		#define GEODE_CONCEPT_CHECK_setDidSetupEveryplay
		GEODE_CONCEPT_FUNCTION_CHECK(setDidSetupEveryplay) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDidSubYouTube
		#define GEODE_CONCEPT_CHECK_setDidSubYouTube
		GEODE_CONCEPT_FUNCTION_CHECK(setDidSubYouTube) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDidSyncAchievements
		#define GEODE_CONCEPT_CHECK_setDidSyncAchievements
		GEODE_CONCEPT_FUNCTION_CHECK(setDidSyncAchievements) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setEditMode
		#define GEODE_CONCEPT_CHECK_setEditMode
		GEODE_CONCEPT_FUNCTION_CHECK(setEditMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setEditorCopyString
		#define GEODE_CONCEPT_CHECK_setEditorCopyString
		GEODE_CONCEPT_FUNCTION_CHECK(setEditorCopyString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setEditorLayer
		#define GEODE_CONCEPT_CHECK_setEditorLayer
		GEODE_CONCEPT_FUNCTION_CHECK(setEditorLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFetchNewLevelsQueued
		#define GEODE_CONCEPT_CHECK_setFetchNewLevelsQueued
		GEODE_CONCEPT_FUNCTION_CHECK(setFetchNewLevelsQueued) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFirstSetup
		#define GEODE_CONCEPT_CHECK_setFirstSetup
		GEODE_CONCEPT_FUNCTION_CHECK(setFirstSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setGameVariable
		#define GEODE_CONCEPT_CHECK_setGameVariable
		GEODE_CONCEPT_FUNCTION_CHECK(setGameVariable) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setHasRatedGame
		#define GEODE_CONCEPT_CHECK_setHasRatedGame
		GEODE_CONCEPT_FUNCTION_CHECK(setHasRatedGame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setHasRatingPower
		#define GEODE_CONCEPT_CHECK_setHasRatingPower
		GEODE_CONCEPT_FUNCTION_CHECK(setHasRatingPower) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIntGameVariable
		#define GEODE_CONCEPT_CHECK_setIntGameVariable
		GEODE_CONCEPT_FUNCTION_CHECK(setIntGameVariable) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIsResetting
		#define GEODE_CONCEPT_CHECK_setIsResetting
		GEODE_CONCEPT_FUNCTION_CHECK(setIsResetting) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLastCustomColorIdx
		#define GEODE_CONCEPT_CHECK_setLastCustomColorIdx
		GEODE_CONCEPT_FUNCTION_CHECK(setLastCustomColorIdx) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLastGroupID
		#define GEODE_CONCEPT_CHECK_setLastGroupID
		GEODE_CONCEPT_FUNCTION_CHECK(setLastGroupID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLastLevelID
		#define GEODE_CONCEPT_CHECK_setLastLevelID
		GEODE_CONCEPT_FUNCTION_CHECK(setLastLevelID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLastScene
		#define GEODE_CONCEPT_CHECK_setLastScene
		GEODE_CONCEPT_FUNCTION_CHECK(setLastScene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLastScene2
		#define GEODE_CONCEPT_CHECK_setLastScene2
		GEODE_CONCEPT_FUNCTION_CHECK(setLastScene2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLevelSelectLayer
		#define GEODE_CONCEPT_CHECK_setLevelSelectLayer
		GEODE_CONCEPT_FUNCTION_CHECK(setLevelSelectLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMainMenuActive
		#define GEODE_CONCEPT_CHECK_setMainMenuActive
		GEODE_CONCEPT_FUNCTION_CHECK(setMainMenuActive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMenulayer
		#define GEODE_CONCEPT_CHECK_setMenulayer
		GEODE_CONCEPT_FUNCTION_CHECK(setMenulayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPerformanceMode
		#define GEODE_CONCEPT_CHECK_setPerformanceMode
		GEODE_CONCEPT_FUNCTION_CHECK(setPerformanceMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPlayerBall
		#define GEODE_CONCEPT_CHECK_setPlayerBall
		GEODE_CONCEPT_FUNCTION_CHECK(setPlayerBall) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPlayerBird
		#define GEODE_CONCEPT_CHECK_setPlayerBird
		GEODE_CONCEPT_FUNCTION_CHECK(setPlayerBird) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPlayerColor
		#define GEODE_CONCEPT_CHECK_setPlayerColor
		GEODE_CONCEPT_FUNCTION_CHECK(setPlayerColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPlayerColor2
		#define GEODE_CONCEPT_CHECK_setPlayerColor2
		GEODE_CONCEPT_FUNCTION_CHECK(setPlayerColor2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPlayerDart
		#define GEODE_CONCEPT_CHECK_setPlayerDart
		GEODE_CONCEPT_FUNCTION_CHECK(setPlayerDart) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPlayerFrame
		#define GEODE_CONCEPT_CHECK_setPlayerFrame
		GEODE_CONCEPT_FUNCTION_CHECK(setPlayerFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPlayerGlow
		#define GEODE_CONCEPT_CHECK_setPlayerGlow
		GEODE_CONCEPT_FUNCTION_CHECK(setPlayerGlow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPlayerIconType
		#define GEODE_CONCEPT_CHECK_setPlayerIconType
		GEODE_CONCEPT_FUNCTION_CHECK(setPlayerIconType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPlayerName
		#define GEODE_CONCEPT_CHECK_setPlayerName
		GEODE_CONCEPT_FUNCTION_CHECK(setPlayerName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPlayerRobot
		#define GEODE_CONCEPT_CHECK_setPlayerRobot
		GEODE_CONCEPT_FUNCTION_CHECK(setPlayerRobot) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPlayerScoreValid
		#define GEODE_CONCEPT_CHECK_setPlayerScoreValid
		GEODE_CONCEPT_FUNCTION_CHECK(setPlayerScoreValid) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPlayerShip
		#define GEODE_CONCEPT_CHECK_setPlayerShip
		GEODE_CONCEPT_FUNCTION_CHECK(setPlayerShip) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPlayerStreak
		#define GEODE_CONCEPT_CHECK_setPlayerStreak
		GEODE_CONCEPT_FUNCTION_CHECK(setPlayerStreak) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPlayerUDID
		#define GEODE_CONCEPT_CHECK_setPlayerUDID
		GEODE_CONCEPT_FUNCTION_CHECK(setPlayerUDID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPlayerUserID
		#define GEODE_CONCEPT_CHECK_setPlayerUserID
		GEODE_CONCEPT_FUNCTION_CHECK(setPlayerUserID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPlayLayer
		#define GEODE_CONCEPT_CHECK_setPlayLayer
		GEODE_CONCEPT_FUNCTION_CHECK(setPlayLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPremiumPopup
		#define GEODE_CONCEPT_CHECK_setPremiumPopup
		GEODE_CONCEPT_FUNCTION_CHECK(setPremiumPopup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRateDelegate
		#define GEODE_CONCEPT_CHECK_setRateDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(setRateDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRecordGameplay
		#define GEODE_CONCEPT_CHECK_setRecordGameplay
		GEODE_CONCEPT_FUNCTION_CHECK(setRecordGameplay) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setResolution
		#define GEODE_CONCEPT_CHECK_setResolution
		GEODE_CONCEPT_FUNCTION_CHECK(setResolution) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setReturnToSearch
		#define GEODE_CONCEPT_CHECK_setReturnToSearch
		GEODE_CONCEPT_FUNCTION_CHECK(setReturnToSearch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setShowBPMMarkers
		#define GEODE_CONCEPT_CHECK_setShowBPMMarkers
		GEODE_CONCEPT_FUNCTION_CHECK(setShowBPMMarkers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setShowedEditorGuide
		#define GEODE_CONCEPT_CHECK_setShowedEditorGuide
		GEODE_CONCEPT_FUNCTION_CHECK(setShowedEditorGuide) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setShowedLowDetailDialog
		#define GEODE_CONCEPT_CHECK_setShowedLowDetailDialog
		GEODE_CONCEPT_FUNCTION_CHECK(setShowedLowDetailDialog) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setShowedMenu
		#define GEODE_CONCEPT_CHECK_setShowedMenu
		GEODE_CONCEPT_FUNCTION_CHECK(setShowedMenu) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setShowedPirate
		#define GEODE_CONCEPT_CHECK_setShowedPirate
		GEODE_CONCEPT_FUNCTION_CHECK(setShowedPirate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setShowedRateDiffDialog
		#define GEODE_CONCEPT_CHECK_setShowedRateDiffDialog
		GEODE_CONCEPT_FUNCTION_CHECK(setShowedRateDiffDialog) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setShowedRateStarDialog
		#define GEODE_CONCEPT_CHECK_setShowedRateStarDialog
		GEODE_CONCEPT_FUNCTION_CHECK(setShowedRateStarDialog) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setShowingPromo
		#define GEODE_CONCEPT_CHECK_setShowingPromo
		GEODE_CONCEPT_FUNCTION_CHECK(setShowingPromo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setShowProgressBar
		#define GEODE_CONCEPT_CHECK_setShowProgressBar
		GEODE_CONCEPT_FUNCTION_CHECK(setShowProgressBar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setShowSongMarkers
		#define GEODE_CONCEPT_CHECK_setShowSongMarkers
		GEODE_CONCEPT_FUNCTION_CHECK(setShowSongMarkers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStoredColor
		#define GEODE_CONCEPT_CHECK_setStoredColor
		GEODE_CONCEPT_FUNCTION_CHECK(setStoredColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTestSmoothFix
		#define GEODE_CONCEPT_CHECK_setTestSmoothFix
		GEODE_CONCEPT_FUNCTION_CHECK(setTestSmoothFix) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTexQuality
		#define GEODE_CONCEPT_CHECK_setTexQuality
		GEODE_CONCEPT_FUNCTION_CHECK(setTexQuality) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTotalAttempts
		#define GEODE_CONCEPT_CHECK_setTotalAttempts
		GEODE_CONCEPT_FUNCTION_CHECK(setTotalAttempts) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setValueKeeper
		#define GEODE_CONCEPT_CHECK_setValueKeeper
		GEODE_CONCEPT_FUNCTION_CHECK(setValueKeeper) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setWasHigh
		#define GEODE_CONCEPT_CHECK_setWasHigh
		GEODE_CONCEPT_FUNCTION_CHECK(setWasHigh) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldShowInterstitial
		#define GEODE_CONCEPT_CHECK_shouldShowInterstitial
		GEODE_CONCEPT_FUNCTION_CHECK(shouldShowInterstitial) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldShowPromoInterstitial
		#define GEODE_CONCEPT_CHECK_shouldShowPromoInterstitial
		GEODE_CONCEPT_FUNCTION_CHECK(shouldShowPromoInterstitial) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showInterstitial
		#define GEODE_CONCEPT_CHECK_showInterstitial
		GEODE_CONCEPT_FUNCTION_CHECK(showInterstitial) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showInterstitialForced
		#define GEODE_CONCEPT_CHECK_showInterstitialForced
		GEODE_CONCEPT_FUNCTION_CHECK(showInterstitialForced) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showMainMenuAd
		#define GEODE_CONCEPT_CHECK_showMainMenuAd
		GEODE_CONCEPT_FUNCTION_CHECK(showMainMenuAd) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showPromoInterstitial
		#define GEODE_CONCEPT_CHECK_showPromoInterstitial
		GEODE_CONCEPT_FUNCTION_CHECK(showPromoInterstitial) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_startUpdate
		#define GEODE_CONCEPT_CHECK_startUpdate
		GEODE_CONCEPT_FUNCTION_CHECK(startUpdate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stringForCustomObject
		#define GEODE_CONCEPT_CHECK_stringForCustomObject
		GEODE_CONCEPT_FUNCTION_CHECK(stringForCustomObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_subYouTube
		#define GEODE_CONCEPT_CHECK_subYouTube
		GEODE_CONCEPT_FUNCTION_CHECK(subYouTube) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_switchCustomObjects
		#define GEODE_CONCEPT_CHECK_switchCustomObjects
		GEODE_CONCEPT_FUNCTION_CHECK(switchCustomObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_switchScreenMode
		#define GEODE_CONCEPT_CHECK_switchScreenMode
		GEODE_CONCEPT_FUNCTION_CHECK(switchScreenMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_syncPlatformAchievements
		#define GEODE_CONCEPT_CHECK_syncPlatformAchievements
		GEODE_CONCEPT_FUNCTION_CHECK(syncPlatformAchievements) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleGameVariable
		#define GEODE_CONCEPT_CHECK_toggleGameVariable
		GEODE_CONCEPT_FUNCTION_CHECK(toggleGameVariable) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryCacheAd
		#define GEODE_CONCEPT_CHECK_tryCacheAd
		GEODE_CONCEPT_FUNCTION_CHECK(tryCacheAd) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unloadBackground
		#define GEODE_CONCEPT_CHECK_unloadBackground
		GEODE_CONCEPT_FUNCTION_CHECK(unloadBackground) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unlockColor
		#define GEODE_CONCEPT_CHECK_unlockColor
		GEODE_CONCEPT_FUNCTION_CHECK(unlockColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unlockedPremium
		#define GEODE_CONCEPT_CHECK_unlockedPremium
		GEODE_CONCEPT_FUNCTION_CHECK(unlockedPremium) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unlockIcon
		#define GEODE_CONCEPT_CHECK_unlockIcon
		GEODE_CONCEPT_FUNCTION_CHECK(unlockIcon) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateMusic
		#define GEODE_CONCEPT_CHECK_updateMusic
		GEODE_CONCEPT_FUNCTION_CHECK(updateMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_verifyAchievementUnlocks
		#define GEODE_CONCEPT_CHECK_verifyAchievementUnlocks
		GEODE_CONCEPT_FUNCTION_CHECK(verifyAchievementUnlocks) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_verifyCoinUnlocks
		#define GEODE_CONCEPT_CHECK_verifyCoinUnlocks
		GEODE_CONCEPT_FUNCTION_CHECK(verifyCoinUnlocks) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_verifyStarUnlocks
		#define GEODE_CONCEPT_CHECK_verifyStarUnlocks
		GEODE_CONCEPT_FUNCTION_CHECK(verifyStarUnlocks) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_verifySyncedCoins
		#define GEODE_CONCEPT_CHECK_verifySyncedCoins
		GEODE_CONCEPT_FUNCTION_CHECK(verifySyncedCoins) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_videoAdHidden
		#define GEODE_CONCEPT_CHECK_videoAdHidden
		GEODE_CONCEPT_FUNCTION_CHECK(videoAdHidden) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_videoAdShowed
		#define GEODE_CONCEPT_CHECK_videoAdShowed
		GEODE_CONCEPT_FUNCTION_CHECK(videoAdShowed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_update
		#define GEODE_CONCEPT_CHECK_update
		GEODE_CONCEPT_FUNCTION_CHECK(update) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_encodeDataTo
		#define GEODE_CONCEPT_CHECK_encodeDataTo
		GEODE_CONCEPT_FUNCTION_CHECK(encodeDataTo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dataLoaded
		#define GEODE_CONCEPT_CHECK_dataLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(dataLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_firstLoad
		#define GEODE_CONCEPT_CHECK_firstLoad
		GEODE_CONCEPT_FUNCTION_CHECK(firstLoad) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GameManager> : ModifyBase<ModifyDerive<Der, GameManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GameManager>>;
		using ModifyBase<ModifyDerive<Der, GameManager>>::ModifyBase;
		using Base = GameManager;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, sharedState, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, accountStatusChanged, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, addNewCustomObject, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, applicationDidEnterBackground, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, applicationWillEnterForeground, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, checkSteamAchievementUnlock, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, claimItemsResponse, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, colorForIdx, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, colorForPos, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, colorKey, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, completedAchievement, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, didExitPlayscene, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, doQuickSave, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, eventUnlockFeature, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, fadeInMusic, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, followTwitter, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getBGTexture, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getBootups, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getClickedEditor, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getClickedGarage, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getClickedName, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getClickedPractice, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getCommentSortRecent, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getCustomObjectDict, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getDidFollowTwitter, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getDidLikeFacebook, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getDidPauseBGMusic, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getDidPlayGame, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getDidRateGame, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getDidSetupEveryplay, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getDidSubYouTube, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getDidSyncAchievements, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getEditMode, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getEditorCopyString, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getEditorLayer, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getFetchNewLevelsQueued, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getFirstSetup, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getFontFile, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getFontTexture, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getGameVariable, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getGTexture, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getHasRatedGame, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getHasRatingPower, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getIntGameVariable, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getIsResetting, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getLastCustomColorIdx, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getLastGroupID, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getLastLevelID, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getLastScene, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getLastScene2, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getLevelSelectLayer, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getLoadedBGIdx, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getLoadedFontIdx, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getLoadedGIdx, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getMainMenuActive, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getMenulayer, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getNextUniqueObjectKey, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getNextUsedKey, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getOrderedCustomObjectKeys, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getPerformanceMode, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getPlayerBall, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getPlayerBird, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getPlayerColor, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getPlayerColor2, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getPlayerDart, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getPlayerFrame, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getPlayerGlow, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getPlayerIconType, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getPlayerName, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getPlayerRobot, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getPlayerScoreValid, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getPlayerShip, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getPlayerStreak, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getPlayerUDID, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getPlayerUserID, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getPlayLayer, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getPremiumPopup, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getRateDelegate, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getRecordGameplay, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getResolution, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getReturnToSearch, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getShowBPMMarkers, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getShowedEditorGuide, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getShowedLowDetailDialog, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getShowedMenu, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getShowedPirate, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getShowedRateDiffDialog, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getShowedRateStarDialog, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getShowingPromo, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getShowProgressBar, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getShowSongMarkers, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getStoredColor, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getTestSmoothFix, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getTexQuality, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getTotalAttempts, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getValueKeeper, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, getWasHigh, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, hasShownAdRecently, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, iconKey, int, IconType)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, isColorUnlocked, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, isIconUnlocked, int, IconType)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, itemPurchased, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, levelIsPremium, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, likeFacebook, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, loadBackground, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, loadFont, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, loadGround, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, loadVideoSettings, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, lockColor, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, lockIcon, int, IconType)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, openEditorGuide, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, rateGame, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, recountUserStats, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, reloadAll, bool, bool, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, reloadAllStep2, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, reloadAllStep3, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, reloadAllStep4, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, reloadAllStep5, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, removeCustomObject, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, reorderKey, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, reportAchievementWithID, char const*, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, reportPercentageForLevel, int, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, resetAchievement, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, resetAllIcons, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, resetCoinUnlocks, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, resolutionForKey, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, returnToLastScene, GJGameLevel*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, safePopScene, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setBootups, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setClickedEditor, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setClickedGarage, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setClickedName, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setClickedPractice, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setCommentSortRecent, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setCustomObjectDict, cocos2d::CCDictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setDidFollowTwitter, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setDidLikeFacebook, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setDidPauseBGMusic, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setDidPlayGame, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setDidRateGame, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setDidSetupEveryplay, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setDidSubYouTube, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setDidSyncAchievements, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setEditMode, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setEditorCopyString, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setEditorLayer, LevelEditorLayer*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setFetchNewLevelsQueued, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setFirstSetup, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setGameVariable, char const*, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setHasRatedGame, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setHasRatingPower, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setIntGameVariable, char const*, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setIsResetting, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setLastCustomColorIdx, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setLastGroupID, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setLastLevelID, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setLastScene, LastGameScene)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setLastScene2, LastGameScene)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setLevelSelectLayer, LevelSelectLayer*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setMainMenuActive, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setMenulayer, MenuLayer*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setPerformanceMode, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setPlayerBall, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setPlayerBird, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setPlayerColor, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setPlayerColor2, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setPlayerDart, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setPlayerFrame, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setPlayerGlow, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setPlayerIconType, IconType)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setPlayerName, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setPlayerRobot, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setPlayerScoreValid, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setPlayerShip, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setPlayerStreak, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setPlayerUDID, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setPlayerUserID, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setPlayLayer, PlayLayer*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setPremiumPopup, PremiumPopup*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setRateDelegate, GameRateDelegate*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setRecordGameplay, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setResolution, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setReturnToSearch, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setShowBPMMarkers, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setShowedEditorGuide, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setShowedLowDetailDialog, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setShowedMenu, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setShowedPirate, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setShowedRateDiffDialog, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setShowedRateStarDialog, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setShowingPromo, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setShowProgressBar, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setShowSongMarkers, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setStoredColor, cocos2d::ccColor3B)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setTestSmoothFix, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setTexQuality, cocos2d::TextureQuality)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setTotalAttempts, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setValueKeeper, cocos2d::CCDictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, setWasHigh, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, shouldShowInterstitial, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, shouldShowPromoInterstitial, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, showInterstitial, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, showInterstitialForced, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, showMainMenuAd, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, showPromoInterstitial, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, startUpdate, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, stringForCustomObject, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, subYouTube, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, switchCustomObjects, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, switchScreenMode, bool, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, syncPlatformAchievements, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, toggleGameVariable, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, tryCacheAd, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, unloadBackground, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, unlockColor, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, unlockedPremium, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, unlockIcon, int, IconType)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, updateMusic, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, verifyAchievementUnlocks, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, verifyCoinUnlocks, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, verifyStarUnlocks, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, verifySyncedCoins, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, videoAdHidden, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, videoAdShowed, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, update, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, init, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, encodeDataTo, DS_Dictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, dataLoaded, DS_Dictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameManager, firstLoad, )
		}
	};
}
