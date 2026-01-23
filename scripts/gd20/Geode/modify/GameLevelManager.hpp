#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GameLevelManager.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sharedState
		#define GEODE_STATICS_sharedState
		GEODE_AS_STATIC_FUNCTION(sharedState) 
	#endif

	#ifndef GEODE_STATICS_acceptFriendRequest
		#define GEODE_STATICS_acceptFriendRequest
		GEODE_AS_STATIC_FUNCTION(acceptFriendRequest) 
	#endif

	#ifndef GEODE_STATICS_accountIDForUserID
		#define GEODE_STATICS_accountIDForUserID
		GEODE_AS_STATIC_FUNCTION(accountIDForUserID) 
	#endif

	#ifndef GEODE_STATICS_addDLToActive
		#define GEODE_STATICS_addDLToActive
		GEODE_AS_STATIC_FUNCTION(addDLToActive) 
	#endif

	#ifndef GEODE_STATICS_banUser
		#define GEODE_STATICS_banUser
		GEODE_AS_STATIC_FUNCTION(banUser) 
	#endif

	#ifndef GEODE_STATICS_blockUser
		#define GEODE_STATICS_blockUser
		GEODE_AS_STATIC_FUNCTION(blockUser) 
	#endif

	#ifndef GEODE_STATICS_createAndGetAccountComments
		#define GEODE_STATICS_createAndGetAccountComments
		GEODE_AS_STATIC_FUNCTION(createAndGetAccountComments) 
	#endif

	#ifndef GEODE_STATICS_createAndGetCommentsFull
		#define GEODE_STATICS_createAndGetCommentsFull
		GEODE_AS_STATIC_FUNCTION(createAndGetCommentsFull) 
	#endif

	#ifndef GEODE_STATICS_createAndGetLevelComments
		#define GEODE_STATICS_createAndGetLevelComments
		GEODE_AS_STATIC_FUNCTION(createAndGetLevelComments) 
	#endif

	#ifndef GEODE_STATICS_createAndGetLevels
		#define GEODE_STATICS_createAndGetLevels
		GEODE_AS_STATIC_FUNCTION(createAndGetLevels) 
	#endif

	#ifndef GEODE_STATICS_createAndGetMapPacks
		#define GEODE_STATICS_createAndGetMapPacks
		GEODE_AS_STATIC_FUNCTION(createAndGetMapPacks) 
	#endif

	#ifndef GEODE_STATICS_createAndGetScores
		#define GEODE_STATICS_createAndGetScores
		GEODE_AS_STATIC_FUNCTION(createAndGetScores) 
	#endif

	#ifndef GEODE_STATICS_createNewLevel
		#define GEODE_STATICS_createNewLevel
		GEODE_AS_STATIC_FUNCTION(createNewLevel) 
	#endif

	#ifndef GEODE_STATICS_createPageInfo
		#define GEODE_STATICS_createPageInfo
		GEODE_AS_STATIC_FUNCTION(createPageInfo) 
	#endif

	#ifndef GEODE_STATICS_dataLoaded
		#define GEODE_STATICS_dataLoaded
		GEODE_AS_STATIC_FUNCTION(dataLoaded) 
	#endif

	#ifndef GEODE_STATICS_deleteAccountComment
		#define GEODE_STATICS_deleteAccountComment
		GEODE_AS_STATIC_FUNCTION(deleteAccountComment) 
	#endif

	#ifndef GEODE_STATICS_deleteComment
		#define GEODE_STATICS_deleteComment
		GEODE_AS_STATIC_FUNCTION(deleteComment) 
	#endif

	#ifndef GEODE_STATICS_deleteFriendRequests
		#define GEODE_STATICS_deleteFriendRequests
		GEODE_AS_STATIC_FUNCTION(deleteFriendRequests) 
	#endif

	#ifndef GEODE_STATICS_deleteLevel
		#define GEODE_STATICS_deleteLevel
		GEODE_AS_STATIC_FUNCTION(deleteLevel) 
	#endif

	#ifndef GEODE_STATICS_deleteLevelComment
		#define GEODE_STATICS_deleteLevelComment
		GEODE_AS_STATIC_FUNCTION(deleteLevelComment) 
	#endif

	#ifndef GEODE_STATICS_deleteSentFriendRequest
		#define GEODE_STATICS_deleteSentFriendRequest
		GEODE_AS_STATIC_FUNCTION(deleteSentFriendRequest) 
	#endif

	#ifndef GEODE_STATICS_deleteServerLevel
		#define GEODE_STATICS_deleteServerLevel
		GEODE_AS_STATIC_FUNCTION(deleteServerLevel) 
	#endif

	#ifndef GEODE_STATICS_deleteUserMessages
		#define GEODE_STATICS_deleteUserMessages
		GEODE_AS_STATIC_FUNCTION(deleteUserMessages) 
	#endif

	#ifndef GEODE_STATICS_downloadLevel
		#define GEODE_STATICS_downloadLevel
		GEODE_AS_STATIC_FUNCTION(downloadLevel) 
	#endif

	#ifndef GEODE_STATICS_downloadUserMessage
		#define GEODE_STATICS_downloadUserMessage
		GEODE_AS_STATIC_FUNCTION(downloadUserMessage) 
	#endif

	#ifndef GEODE_STATICS_encodeDataTo
		#define GEODE_STATICS_encodeDataTo
		GEODE_AS_STATIC_FUNCTION(encodeDataTo) 
	#endif

	#ifndef GEODE_STATICS_firstSetup
		#define GEODE_STATICS_firstSetup
		GEODE_AS_STATIC_FUNCTION(firstSetup) 
	#endif

	#ifndef GEODE_STATICS_followUser
		#define GEODE_STATICS_followUser
		GEODE_AS_STATIC_FUNCTION(followUser) 
	#endif

	#ifndef GEODE_STATICS_friendRequestFromAccountID
		#define GEODE_STATICS_friendRequestFromAccountID
		GEODE_AS_STATIC_FUNCTION(friendRequestFromAccountID) 
	#endif

	#ifndef GEODE_STATICS_friendRequestWasRemoved
		#define GEODE_STATICS_friendRequestWasRemoved
		GEODE_AS_STATIC_FUNCTION(friendRequestWasRemoved) 
	#endif

	#ifndef GEODE_STATICS_getAccountCommentKey
		#define GEODE_STATICS_getAccountCommentKey
		GEODE_AS_STATIC_FUNCTION(getAccountCommentKey) 
	#endif

	#ifndef GEODE_STATICS_getAccountComments
		#define GEODE_STATICS_getAccountComments
		GEODE_AS_STATIC_FUNCTION(getAccountComments) 
	#endif

	#ifndef GEODE_STATICS_getAllUsedSongIDs
		#define GEODE_STATICS_getAllUsedSongIDs
		GEODE_AS_STATIC_FUNCTION(getAllUsedSongIDs) 
	#endif

	#ifndef GEODE_STATICS_getBasePostString
		#define GEODE_STATICS_getBasePostString
		GEODE_AS_STATIC_FUNCTION(getBasePostString) 
	#endif

	#ifndef GEODE_STATICS_getBoolForKey
		#define GEODE_STATICS_getBoolForKey
		GEODE_AS_STATIC_FUNCTION(getBoolForKey) 
	#endif

	#ifndef GEODE_STATICS_getCommentDelegate
		#define GEODE_STATICS_getCommentDelegate
		GEODE_AS_STATIC_FUNCTION(getCommentDelegate) 
	#endif

	#ifndef GEODE_STATICS_getCommentKey
		#define GEODE_STATICS_getCommentKey
		GEODE_AS_STATIC_FUNCTION(getCommentKey) 
	#endif

	#ifndef GEODE_STATICS_getCommentUpDelegate
		#define GEODE_STATICS_getCommentUpDelegate
		GEODE_AS_STATIC_FUNCTION(getCommentUpDelegate) 
	#endif

	#ifndef GEODE_STATICS_getCompletedLevels
		#define GEODE_STATICS_getCompletedLevels
		GEODE_AS_STATIC_FUNCTION(getCompletedLevels) 
	#endif

	#ifndef GEODE_STATICS_getCreatedNewLevel
		#define GEODE_STATICS_getCreatedNewLevel
		GEODE_AS_STATIC_FUNCTION(getCreatedNewLevel) 
	#endif

	#ifndef GEODE_STATICS_getDelegate
		#define GEODE_STATICS_getDelegate
		GEODE_AS_STATIC_FUNCTION(getDelegate) 
	#endif

	#ifndef GEODE_STATICS_getDeleteCommentKey
		#define GEODE_STATICS_getDeleteCommentKey
		GEODE_AS_STATIC_FUNCTION(getDeleteCommentKey) 
	#endif

	#ifndef GEODE_STATICS_getDeleteMessageKey
		#define GEODE_STATICS_getDeleteMessageKey
		GEODE_AS_STATIC_FUNCTION(getDeleteMessageKey) 
	#endif

	#ifndef GEODE_STATICS_getDescKey
		#define GEODE_STATICS_getDescKey
		GEODE_AS_STATIC_FUNCTION(getDescKey) 
	#endif

	#ifndef GEODE_STATICS_getDifficultyStr
		#define GEODE_STATICS_getDifficultyStr
		GEODE_AS_STATIC_FUNCTION(getDifficultyStr) 
	#endif

	#ifndef GEODE_STATICS_getDiffKey
		#define GEODE_STATICS_getDiffKey
		GEODE_AS_STATIC_FUNCTION(getDiffKey) 
	#endif

	#ifndef GEODE_STATICS_getDiffVal
		#define GEODE_STATICS_getDiffVal
		GEODE_AS_STATIC_FUNCTION(getDiffVal) 
	#endif

	#ifndef GEODE_STATICS_getDlDelegate
		#define GEODE_STATICS_getDlDelegate
		GEODE_AS_STATIC_FUNCTION(getDlDelegate) 
	#endif

	#ifndef GEODE_STATICS_getDLMessageDelegate
		#define GEODE_STATICS_getDLMessageDelegate
		GEODE_AS_STATIC_FUNCTION(getDLMessageDelegate) 
	#endif

	#ifndef GEODE_STATICS_getFollowedUsersDict
		#define GEODE_STATICS_getFollowedUsersDict
		GEODE_AS_STATIC_FUNCTION(getFollowedUsersDict) 
	#endif

	#ifndef GEODE_STATICS_getFRequestDelegate
		#define GEODE_STATICS_getFRequestDelegate
		GEODE_AS_STATIC_FUNCTION(getFRequestDelegate) 
	#endif

	#ifndef GEODE_STATICS_getFriendRequestKey
		#define GEODE_STATICS_getFriendRequestKey
		GEODE_AS_STATIC_FUNCTION(getFriendRequestKey) 
	#endif

	#ifndef GEODE_STATICS_getFriendRequests
		#define GEODE_STATICS_getFriendRequests
		GEODE_AS_STATIC_FUNCTION(getFriendRequests) 
	#endif

	#ifndef GEODE_STATICS_getGJUserInfo
		#define GEODE_STATICS_getGJUserInfo
		GEODE_AS_STATIC_FUNCTION(getGJUserInfo) 
	#endif

	#ifndef GEODE_STATICS_getIntForKey
		#define GEODE_STATICS_getIntForKey
		GEODE_AS_STATIC_FUNCTION(getIntForKey) 
	#endif

	#ifndef GEODE_STATICS_getLastLeaderboard
		#define GEODE_STATICS_getLastLeaderboard
		GEODE_AS_STATIC_FUNCTION(getLastLeaderboard) 
	#endif

	#ifndef GEODE_STATICS_getLastMapPackID
		#define GEODE_STATICS_getLastMapPackID
		GEODE_AS_STATIC_FUNCTION(getLastMapPackID) 
	#endif

	#ifndef GEODE_STATICS_getLastSearchKey
		#define GEODE_STATICS_getLastSearchKey
		GEODE_AS_STATIC_FUNCTION(getLastSearchKey) 
	#endif

	#ifndef GEODE_STATICS_getLastSearchKey2
		#define GEODE_STATICS_getLastSearchKey2
		GEODE_AS_STATIC_FUNCTION(getLastSearchKey2) 
	#endif

	#ifndef GEODE_STATICS_getLastSearchType
		#define GEODE_STATICS_getLastSearchType
		GEODE_AS_STATIC_FUNCTION(getLastSearchType) 
	#endif

	#ifndef GEODE_STATICS_getLeaderboardDelegate
		#define GEODE_STATICS_getLeaderboardDelegate
		GEODE_AS_STATIC_FUNCTION(getLeaderboardDelegate) 
	#endif

	#ifndef GEODE_STATICS_getLeaderboardScores
		#define GEODE_STATICS_getLeaderboardScores
		GEODE_AS_STATIC_FUNCTION(getLeaderboardScores) 
	#endif

	#ifndef GEODE_STATICS_getLengthStr
		#define GEODE_STATICS_getLengthStr
		GEODE_AS_STATIC_FUNCTION(getLengthStr) 
	#endif

	#ifndef GEODE_STATICS_getLenKey
		#define GEODE_STATICS_getLenKey
		GEODE_AS_STATIC_FUNCTION(getLenKey) 
	#endif

	#ifndef GEODE_STATICS_getLenVal
		#define GEODE_STATICS_getLenVal
		GEODE_AS_STATIC_FUNCTION(getLenVal) 
	#endif

	#ifndef GEODE_STATICS_getLevelComments
		#define GEODE_STATICS_getLevelComments
		GEODE_AS_STATIC_FUNCTION(getLevelComments) 
	#endif

	#ifndef GEODE_STATICS_getLevelKey
		#define GEODE_STATICS_getLevelKey
		GEODE_AS_STATIC_FUNCTION(getLevelKey) 
	#endif

	#ifndef GEODE_STATICS_getLevelSaveData
		#define GEODE_STATICS_getLevelSaveData
		GEODE_AS_STATIC_FUNCTION(getLevelSaveData) 
	#endif

	#ifndef GEODE_STATICS_getLikeAccountItemKey
		#define GEODE_STATICS_getLikeAccountItemKey
		GEODE_AS_STATIC_FUNCTION(getLikeAccountItemKey) 
	#endif

	#ifndef GEODE_STATICS_getLikeItemKey
		#define GEODE_STATICS_getLikeItemKey
		GEODE_AS_STATIC_FUNCTION(getLikeItemKey) 
	#endif

	#ifndef GEODE_STATICS_getLikeKey
		#define GEODE_STATICS_getLikeKey
		GEODE_AS_STATIC_FUNCTION(getLikeKey) 
	#endif

	#ifndef GEODE_STATICS_getLocalLevel
		#define GEODE_STATICS_getLocalLevel
		GEODE_AS_STATIC_FUNCTION(getLocalLevel) 
	#endif

	#ifndef GEODE_STATICS_getLvlDelDelegate
		#define GEODE_STATICS_getLvlDelDelegate
		GEODE_AS_STATIC_FUNCTION(getLvlDelDelegate) 
	#endif

	#ifndef GEODE_STATICS_getMainLevel
		#define GEODE_STATICS_getMainLevel
		GEODE_AS_STATIC_FUNCTION(getMainLevel) 
	#endif

	#ifndef GEODE_STATICS_getMainLevels
		#define GEODE_STATICS_getMainLevels
		GEODE_AS_STATIC_FUNCTION(getMainLevels) 
	#endif

	#ifndef GEODE_STATICS_getMapPackKey
		#define GEODE_STATICS_getMapPackKey
		GEODE_AS_STATIC_FUNCTION(getMapPackKey) 
	#endif

	#ifndef GEODE_STATICS_getMapPacks
		#define GEODE_STATICS_getMapPacks
		GEODE_AS_STATIC_FUNCTION(getMapPacks) 
	#endif

	#ifndef GEODE_STATICS_getMessageKey
		#define GEODE_STATICS_getMessageKey
		GEODE_AS_STATIC_FUNCTION(getMessageKey) 
	#endif

	#ifndef GEODE_STATICS_getMessagesKey
		#define GEODE_STATICS_getMessagesKey
		GEODE_AS_STATIC_FUNCTION(getMessagesKey) 
	#endif

	#ifndef GEODE_STATICS_getMListDelegate
		#define GEODE_STATICS_getMListDelegate
		GEODE_AS_STATIC_FUNCTION(getMListDelegate) 
	#endif

	#ifndef GEODE_STATICS_getMsgUDelegate
		#define GEODE_STATICS_getMsgUDelegate
		GEODE_AS_STATIC_FUNCTION(getMsgUDelegate) 
	#endif

	#ifndef GEODE_STATICS_getOnlineLevels
		#define GEODE_STATICS_getOnlineLevels
		GEODE_AS_STATIC_FUNCTION(getOnlineLevels) 
	#endif

	#ifndef GEODE_STATICS_getPageInfo
		#define GEODE_STATICS_getPageInfo
		GEODE_AS_STATIC_FUNCTION(getPageInfo) 
	#endif

	#ifndef GEODE_STATICS_getPostCommentKey
		#define GEODE_STATICS_getPostCommentKey
		GEODE_AS_STATIC_FUNCTION(getPostCommentKey) 
	#endif

	#ifndef GEODE_STATICS_getRateKey
		#define GEODE_STATICS_getRateKey
		GEODE_AS_STATIC_FUNCTION(getRateKey) 
	#endif

	#ifndef GEODE_STATICS_getRateStarsKey
		#define GEODE_STATICS_getRateStarsKey
		GEODE_AS_STATIC_FUNCTION(getRateStarsKey) 
	#endif

	#ifndef GEODE_STATICS_getReportKey
		#define GEODE_STATICS_getReportKey
		GEODE_AS_STATIC_FUNCTION(getReportKey) 
	#endif

	#ifndef GEODE_STATICS_getSavedLevel
		#define GEODE_STATICS_getSavedLevel
		GEODE_AS_STATIC_FUNCTION(getSavedLevel) 
	#endif

	#ifndef GEODE_STATICS_getSavedLevels
		#define GEODE_STATICS_getSavedLevels
		GEODE_AS_STATIC_FUNCTION(getSavedLevels) 
	#endif

	#ifndef GEODE_STATICS_getSavedLevelsDict
		#define GEODE_STATICS_getSavedLevelsDict
		GEODE_AS_STATIC_FUNCTION(getSavedLevelsDict) 
	#endif

	#ifndef GEODE_STATICS_getSavedMapPack
		#define GEODE_STATICS_getSavedMapPack
		GEODE_AS_STATIC_FUNCTION(getSavedMapPack) 
	#endif

	#ifndef GEODE_STATICS_getSearchScene
		#define GEODE_STATICS_getSearchScene
		GEODE_AS_STATIC_FUNCTION(getSearchScene) 
	#endif

	#ifndef GEODE_STATICS_getSplitIntFromKey
		#define GEODE_STATICS_getSplitIntFromKey
		GEODE_AS_STATIC_FUNCTION(getSplitIntFromKey) 
	#endif

	#ifndef GEODE_STATICS_getStoredLevelComments
		#define GEODE_STATICS_getStoredLevelComments
		GEODE_AS_STATIC_FUNCTION(getStoredLevelComments) 
	#endif

	#ifndef GEODE_STATICS_getStoredLevelDataDict
		#define GEODE_STATICS_getStoredLevelDataDict
		GEODE_AS_STATIC_FUNCTION(getStoredLevelDataDict) 
	#endif

	#ifndef GEODE_STATICS_getStoredOnlineLevels
		#define GEODE_STATICS_getStoredOnlineLevels
		GEODE_AS_STATIC_FUNCTION(getStoredOnlineLevels) 
	#endif

	#ifndef GEODE_STATICS_getStoredUserList
		#define GEODE_STATICS_getStoredUserList
		GEODE_AS_STATIC_FUNCTION(getStoredUserList) 
	#endif

	#ifndef GEODE_STATICS_getStoredUserMessage
		#define GEODE_STATICS_getStoredUserMessage
		GEODE_AS_STATIC_FUNCTION(getStoredUserMessage) 
	#endif

	#ifndef GEODE_STATICS_getStoredUserMessageReply
		#define GEODE_STATICS_getStoredUserMessageReply
		GEODE_AS_STATIC_FUNCTION(getStoredUserMessageReply) 
	#endif

	#ifndef GEODE_STATICS_getTempSave
		#define GEODE_STATICS_getTempSave
		GEODE_AS_STATIC_FUNCTION(getTempSave) 
	#endif

	#ifndef GEODE_STATICS_getTimeLeft
		#define GEODE_STATICS_getTimeLeft
		GEODE_AS_STATIC_FUNCTION(getTimeLeft) 
	#endif

	#ifndef GEODE_STATICS_getUActionDelegate
		#define GEODE_STATICS_getUActionDelegate
		GEODE_AS_STATIC_FUNCTION(getUActionDelegate) 
	#endif

	#ifndef GEODE_STATICS_getULDelegate
		#define GEODE_STATICS_getULDelegate
		GEODE_AS_STATIC_FUNCTION(getULDelegate) 
	#endif

	#ifndef GEODE_STATICS_getUpdateDelegate
		#define GEODE_STATICS_getUpdateDelegate
		GEODE_AS_STATIC_FUNCTION(getUpdateDelegate) 
	#endif

	#ifndef GEODE_STATICS_getUpDelegate
		#define GEODE_STATICS_getUpDelegate
		GEODE_AS_STATIC_FUNCTION(getUpDelegate) 
	#endif

	#ifndef GEODE_STATICS_getUploadMessageKey
		#define GEODE_STATICS_getUploadMessageKey
		GEODE_AS_STATIC_FUNCTION(getUploadMessageKey) 
	#endif

	#ifndef GEODE_STATICS_getUserDelegate
		#define GEODE_STATICS_getUserDelegate
		GEODE_AS_STATIC_FUNCTION(getUserDelegate) 
	#endif

	#ifndef GEODE_STATICS_getUserInfoKey
		#define GEODE_STATICS_getUserInfoKey
		GEODE_AS_STATIC_FUNCTION(getUserInfoKey) 
	#endif

	#ifndef GEODE_STATICS_getUserList
		#define GEODE_STATICS_getUserList
		GEODE_AS_STATIC_FUNCTION(getUserList) 
	#endif

	#ifndef GEODE_STATICS_getUserMessages
		#define GEODE_STATICS_getUserMessages
		GEODE_AS_STATIC_FUNCTION(getUserMessages) 
	#endif

	#ifndef GEODE_STATICS_getUsers
		#define GEODE_STATICS_getUsers
		GEODE_AS_STATIC_FUNCTION(getUsers) 
	#endif

	#ifndef GEODE_STATICS_getValueDict
		#define GEODE_STATICS_getValueDict
		GEODE_AS_STATIC_FUNCTION(getValueDict) 
	#endif

	#ifndef GEODE_STATICS_gotoLevelPage
		#define GEODE_STATICS_gotoLevelPage
		GEODE_AS_STATIC_FUNCTION(gotoLevelPage) 
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

	#ifndef GEODE_STATICS_hasDownloadedLevel
		#define GEODE_STATICS_hasDownloadedLevel
		GEODE_AS_STATIC_FUNCTION(hasDownloadedLevel) 
	#endif

	#ifndef GEODE_STATICS_hasLikedAccountItem
		#define GEODE_STATICS_hasLikedAccountItem
		GEODE_AS_STATIC_FUNCTION(hasLikedAccountItem) 
	#endif

	#ifndef GEODE_STATICS_hasLikedItem
		#define GEODE_STATICS_hasLikedItem
		GEODE_AS_STATIC_FUNCTION(hasLikedItem) 
	#endif

	#ifndef GEODE_STATICS_hasLikedItemFullCheck
		#define GEODE_STATICS_hasLikedItemFullCheck
		GEODE_AS_STATIC_FUNCTION(hasLikedItemFullCheck) 
	#endif

	#ifndef GEODE_STATICS_hasLikedLevel
		#define GEODE_STATICS_hasLikedLevel
		GEODE_AS_STATIC_FUNCTION(hasLikedLevel) 
	#endif

	#ifndef GEODE_STATICS_hasRatedLevel
		#define GEODE_STATICS_hasRatedLevel
		GEODE_AS_STATIC_FUNCTION(hasRatedLevel) 
	#endif

	#ifndef GEODE_STATICS_hasRatedLevelStars
		#define GEODE_STATICS_hasRatedLevelStars
		GEODE_AS_STATIC_FUNCTION(hasRatedLevelStars) 
	#endif

	#ifndef GEODE_STATICS_hasReportedLevel
		#define GEODE_STATICS_hasReportedLevel
		GEODE_AS_STATIC_FUNCTION(hasReportedLevel) 
	#endif

	#ifndef GEODE_STATICS_invalidateMessages
		#define GEODE_STATICS_invalidateMessages
		GEODE_AS_STATIC_FUNCTION(invalidateMessages) 
	#endif

	#ifndef GEODE_STATICS_invalidateRequests
		#define GEODE_STATICS_invalidateRequests
		GEODE_AS_STATIC_FUNCTION(invalidateRequests) 
	#endif

	#ifndef GEODE_STATICS_invalidateUserList
		#define GEODE_STATICS_invalidateUserList
		GEODE_AS_STATIC_FUNCTION(invalidateUserList) 
	#endif

	#ifndef GEODE_STATICS_isDLActive
		#define GEODE_STATICS_isDLActive
		GEODE_AS_STATIC_FUNCTION(isDLActive) 
	#endif

	#ifndef GEODE_STATICS_isFollowingUser
		#define GEODE_STATICS_isFollowingUser
		GEODE_AS_STATIC_FUNCTION(isFollowingUser) 
	#endif

	#ifndef GEODE_STATICS_isTimeValid
		#define GEODE_STATICS_isTimeValid
		GEODE_AS_STATIC_FUNCTION(isTimeValid) 
	#endif

	#ifndef GEODE_STATICS_isUpdateValid
		#define GEODE_STATICS_isUpdateValid
		GEODE_AS_STATIC_FUNCTION(isUpdateValid) 
	#endif

	#ifndef GEODE_STATICS_itemIDFromLikeKey
		#define GEODE_STATICS_itemIDFromLikeKey
		GEODE_AS_STATIC_FUNCTION(itemIDFromLikeKey) 
	#endif

	#ifndef GEODE_STATICS_levelIDFromCommentKey
		#define GEODE_STATICS_levelIDFromCommentKey
		GEODE_AS_STATIC_FUNCTION(levelIDFromCommentKey) 
	#endif

	#ifndef GEODE_STATICS_levelIDFromPostCommentKey
		#define GEODE_STATICS_levelIDFromPostCommentKey
		GEODE_AS_STATIC_FUNCTION(levelIDFromPostCommentKey) 
	#endif

	#ifndef GEODE_STATICS_likeFromLikeKey
		#define GEODE_STATICS_likeFromLikeKey
		GEODE_AS_STATIC_FUNCTION(likeFromLikeKey) 
	#endif

	#ifndef GEODE_STATICS_likeItem
		#define GEODE_STATICS_likeItem
		GEODE_AS_STATIC_FUNCTION(likeItem) 
	#endif

	#ifndef GEODE_STATICS_limitSavedLevels
		#define GEODE_STATICS_limitSavedLevels
		GEODE_AS_STATIC_FUNCTION(limitSavedLevels) 
	#endif

	#ifndef GEODE_STATICS_makeTimeStamp
		#define GEODE_STATICS_makeTimeStamp
		GEODE_AS_STATIC_FUNCTION(makeTimeStamp) 
	#endif

	#ifndef GEODE_STATICS_markItemAsLiked
		#define GEODE_STATICS_markItemAsLiked
		GEODE_AS_STATIC_FUNCTION(markItemAsLiked) 
	#endif

	#ifndef GEODE_STATICS_markLevelAsDownloaded
		#define GEODE_STATICS_markLevelAsDownloaded
		GEODE_AS_STATIC_FUNCTION(markLevelAsDownloaded) 
	#endif

	#ifndef GEODE_STATICS_markLevelAsLiked
		#define GEODE_STATICS_markLevelAsLiked
		GEODE_AS_STATIC_FUNCTION(markLevelAsLiked) 
	#endif

	#ifndef GEODE_STATICS_markLevelAsRated
		#define GEODE_STATICS_markLevelAsRated
		GEODE_AS_STATIC_FUNCTION(markLevelAsRated) 
	#endif

	#ifndef GEODE_STATICS_markLevelAsRatedStars
		#define GEODE_STATICS_markLevelAsRatedStars
		GEODE_AS_STATIC_FUNCTION(markLevelAsRatedStars) 
	#endif

	#ifndef GEODE_STATICS_markLevelAsReported
		#define GEODE_STATICS_markLevelAsReported
		GEODE_AS_STATIC_FUNCTION(markLevelAsReported) 
	#endif

	#ifndef GEODE_STATICS_messageWasRemoved
		#define GEODE_STATICS_messageWasRemoved
		GEODE_AS_STATIC_FUNCTION(messageWasRemoved) 
	#endif

	#ifndef GEODE_STATICS_onAcceptFriendRequestCompleted
		#define GEODE_STATICS_onAcceptFriendRequestCompleted
		GEODE_AS_STATIC_FUNCTION(onAcceptFriendRequestCompleted) 
	#endif

	#ifndef GEODE_STATICS_onBanUserCompleted
		#define GEODE_STATICS_onBanUserCompleted
		GEODE_AS_STATIC_FUNCTION(onBanUserCompleted) 
	#endif

	#ifndef GEODE_STATICS_onBlockUserCompleted
		#define GEODE_STATICS_onBlockUserCompleted
		GEODE_AS_STATIC_FUNCTION(onBlockUserCompleted) 
	#endif

	#ifndef GEODE_STATICS_onDeleteCommentCompleted
		#define GEODE_STATICS_onDeleteCommentCompleted
		GEODE_AS_STATIC_FUNCTION(onDeleteCommentCompleted) 
	#endif

	#ifndef GEODE_STATICS_onDeleteFriendRequestCompleted
		#define GEODE_STATICS_onDeleteFriendRequestCompleted
		GEODE_AS_STATIC_FUNCTION(onDeleteFriendRequestCompleted) 
	#endif

	#ifndef GEODE_STATICS_onDeleteServerLevelCompleted
		#define GEODE_STATICS_onDeleteServerLevelCompleted
		GEODE_AS_STATIC_FUNCTION(onDeleteServerLevelCompleted) 
	#endif

	#ifndef GEODE_STATICS_onDeleteUserMessagesCompleted
		#define GEODE_STATICS_onDeleteUserMessagesCompleted
		GEODE_AS_STATIC_FUNCTION(onDeleteUserMessagesCompleted) 
	#endif

	#ifndef GEODE_STATICS_onDownloadLevelCompleted
		#define GEODE_STATICS_onDownloadLevelCompleted
		GEODE_AS_STATIC_FUNCTION(onDownloadLevelCompleted) 
	#endif

	#ifndef GEODE_STATICS_onDownloadUserMessageCompleted
		#define GEODE_STATICS_onDownloadUserMessageCompleted
		GEODE_AS_STATIC_FUNCTION(onDownloadUserMessageCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetAccountCommentsCompleted
		#define GEODE_STATICS_onGetAccountCommentsCompleted
		GEODE_AS_STATIC_FUNCTION(onGetAccountCommentsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetFriendRequestsCompleted
		#define GEODE_STATICS_onGetFriendRequestsCompleted
		GEODE_AS_STATIC_FUNCTION(onGetFriendRequestsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetGJUserInfoCompleted
		#define GEODE_STATICS_onGetGJUserInfoCompleted
		GEODE_AS_STATIC_FUNCTION(onGetGJUserInfoCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetLeaderboardScoresCompleted
		#define GEODE_STATICS_onGetLeaderboardScoresCompleted
		GEODE_AS_STATIC_FUNCTION(onGetLeaderboardScoresCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetLevelCommentsCompleted
		#define GEODE_STATICS_onGetLevelCommentsCompleted
		GEODE_AS_STATIC_FUNCTION(onGetLevelCommentsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetLevelSaveDataCompleted
		#define GEODE_STATICS_onGetLevelSaveDataCompleted
		GEODE_AS_STATIC_FUNCTION(onGetLevelSaveDataCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetMapPacksCompleted
		#define GEODE_STATICS_onGetMapPacksCompleted
		GEODE_AS_STATIC_FUNCTION(onGetMapPacksCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetOnlineLevelsCompleted
		#define GEODE_STATICS_onGetOnlineLevelsCompleted
		GEODE_AS_STATIC_FUNCTION(onGetOnlineLevelsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetUserListCompleted
		#define GEODE_STATICS_onGetUserListCompleted
		GEODE_AS_STATIC_FUNCTION(onGetUserListCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetUserMessagesCompleted
		#define GEODE_STATICS_onGetUserMessagesCompleted
		GEODE_AS_STATIC_FUNCTION(onGetUserMessagesCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetUsersCompleted
		#define GEODE_STATICS_onGetUsersCompleted
		GEODE_AS_STATIC_FUNCTION(onGetUsersCompleted) 
	#endif

	#ifndef GEODE_STATICS_onLikeItemCompleted
		#define GEODE_STATICS_onLikeItemCompleted
		GEODE_AS_STATIC_FUNCTION(onLikeItemCompleted) 
	#endif

	#ifndef GEODE_STATICS_onProcessHttpRequestCompleted
		#define GEODE_STATICS_onProcessHttpRequestCompleted
		GEODE_AS_STATIC_FUNCTION(onProcessHttpRequestCompleted) 
	#endif

	#ifndef GEODE_STATICS_onRateStarsCompleted
		#define GEODE_STATICS_onRateStarsCompleted
		GEODE_AS_STATIC_FUNCTION(onRateStarsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onReadFriendRequestCompleted
		#define GEODE_STATICS_onReadFriendRequestCompleted
		GEODE_AS_STATIC_FUNCTION(onReadFriendRequestCompleted) 
	#endif

	#ifndef GEODE_STATICS_onRemoveFriendCompleted
		#define GEODE_STATICS_onRemoveFriendCompleted
		GEODE_AS_STATIC_FUNCTION(onRemoveFriendCompleted) 
	#endif

	#ifndef GEODE_STATICS_onReportLevelCompleted
		#define GEODE_STATICS_onReportLevelCompleted
		GEODE_AS_STATIC_FUNCTION(onReportLevelCompleted) 
	#endif

	#ifndef GEODE_STATICS_onRequestUserAccessCompleted
		#define GEODE_STATICS_onRequestUserAccessCompleted
		GEODE_AS_STATIC_FUNCTION(onRequestUserAccessCompleted) 
	#endif

	#ifndef GEODE_STATICS_onRestoreItemsCompleted
		#define GEODE_STATICS_onRestoreItemsCompleted
		GEODE_AS_STATIC_FUNCTION(onRestoreItemsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onSetLevelFeaturedCompleted
		#define GEODE_STATICS_onSetLevelFeaturedCompleted
		GEODE_AS_STATIC_FUNCTION(onSetLevelFeaturedCompleted) 
	#endif

	#ifndef GEODE_STATICS_onSetLevelStarsCompleted
		#define GEODE_STATICS_onSetLevelStarsCompleted
		GEODE_AS_STATIC_FUNCTION(onSetLevelStarsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onSubmitUserInfoCompleted
		#define GEODE_STATICS_onSubmitUserInfoCompleted
		GEODE_AS_STATIC_FUNCTION(onSubmitUserInfoCompleted) 
	#endif

	#ifndef GEODE_STATICS_onSuggestLevelStarsCompleted
		#define GEODE_STATICS_onSuggestLevelStarsCompleted
		GEODE_AS_STATIC_FUNCTION(onSuggestLevelStarsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onUnblockUserCompleted
		#define GEODE_STATICS_onUnblockUserCompleted
		GEODE_AS_STATIC_FUNCTION(onUnblockUserCompleted) 
	#endif

	#ifndef GEODE_STATICS_onUpdateDescriptionCompleted
		#define GEODE_STATICS_onUpdateDescriptionCompleted
		GEODE_AS_STATIC_FUNCTION(onUpdateDescriptionCompleted) 
	#endif

	#ifndef GEODE_STATICS_onUpdateLevelCompleted
		#define GEODE_STATICS_onUpdateLevelCompleted
		GEODE_AS_STATIC_FUNCTION(onUpdateLevelCompleted) 
	#endif

	#ifndef GEODE_STATICS_onUpdateUserScoreCompleted
		#define GEODE_STATICS_onUpdateUserScoreCompleted
		GEODE_AS_STATIC_FUNCTION(onUpdateUserScoreCompleted) 
	#endif

	#ifndef GEODE_STATICS_onUploadCommentCompleted
		#define GEODE_STATICS_onUploadCommentCompleted
		GEODE_AS_STATIC_FUNCTION(onUploadCommentCompleted) 
	#endif

	#ifndef GEODE_STATICS_onUploadFriendRequestCompleted
		#define GEODE_STATICS_onUploadFriendRequestCompleted
		GEODE_AS_STATIC_FUNCTION(onUploadFriendRequestCompleted) 
	#endif

	#ifndef GEODE_STATICS_onUploadLevelCompleted
		#define GEODE_STATICS_onUploadLevelCompleted
		GEODE_AS_STATIC_FUNCTION(onUploadLevelCompleted) 
	#endif

	#ifndef GEODE_STATICS_onUploadUserMessageCompleted
		#define GEODE_STATICS_onUploadUserMessageCompleted
		GEODE_AS_STATIC_FUNCTION(onUploadUserMessageCompleted) 
	#endif

	#ifndef GEODE_STATICS_pageFromCommentKey
		#define GEODE_STATICS_pageFromCommentKey
		GEODE_AS_STATIC_FUNCTION(pageFromCommentKey) 
	#endif

	#ifndef GEODE_STATICS_parseRestoreData
		#define GEODE_STATICS_parseRestoreData
		GEODE_AS_STATIC_FUNCTION(parseRestoreData) 
	#endif

	#ifndef GEODE_STATICS_ProcessHttpRequest
		#define GEODE_STATICS_ProcessHttpRequest
		GEODE_AS_STATIC_FUNCTION(ProcessHttpRequest) 
	#endif

	#ifndef GEODE_STATICS_purgeUnusedLevels
		#define GEODE_STATICS_purgeUnusedLevels
		GEODE_AS_STATIC_FUNCTION(purgeUnusedLevels) 
	#endif

	#ifndef GEODE_STATICS_rateStars
		#define GEODE_STATICS_rateStars
		GEODE_AS_STATIC_FUNCTION(rateStars) 
	#endif

	#ifndef GEODE_STATICS_readFriendRequest
		#define GEODE_STATICS_readFriendRequest
		GEODE_AS_STATIC_FUNCTION(readFriendRequest) 
	#endif

	#ifndef GEODE_STATICS_removeDelimiterChars
		#define GEODE_STATICS_removeDelimiterChars
		GEODE_AS_STATIC_FUNCTION(removeDelimiterChars) 
	#endif

	#ifndef GEODE_STATICS_removeDLFromActive
		#define GEODE_STATICS_removeDLFromActive
		GEODE_AS_STATIC_FUNCTION(removeDLFromActive) 
	#endif

	#ifndef GEODE_STATICS_removeFriend
		#define GEODE_STATICS_removeFriend
		GEODE_AS_STATIC_FUNCTION(removeFriend) 
	#endif

	#ifndef GEODE_STATICS_removeUserFromList
		#define GEODE_STATICS_removeUserFromList
		GEODE_AS_STATIC_FUNCTION(removeUserFromList) 
	#endif

	#ifndef GEODE_STATICS_reportLevel
		#define GEODE_STATICS_reportLevel
		GEODE_AS_STATIC_FUNCTION(reportLevel) 
	#endif

	#ifndef GEODE_STATICS_requestUserAccess
		#define GEODE_STATICS_requestUserAccess
		GEODE_AS_STATIC_FUNCTION(requestUserAccess) 
	#endif

	#ifndef GEODE_STATICS_resetAccountComments
		#define GEODE_STATICS_resetAccountComments
		GEODE_AS_STATIC_FUNCTION(resetAccountComments) 
	#endif

	#ifndef GEODE_STATICS_resetAllTimers
		#define GEODE_STATICS_resetAllTimers
		GEODE_AS_STATIC_FUNCTION(resetAllTimers) 
	#endif

	#ifndef GEODE_STATICS_resetStoredUserInfo
		#define GEODE_STATICS_resetStoredUserInfo
		GEODE_AS_STATIC_FUNCTION(resetStoredUserInfo) 
	#endif

	#ifndef GEODE_STATICS_resetStoredUserList
		#define GEODE_STATICS_resetStoredUserList
		GEODE_AS_STATIC_FUNCTION(resetStoredUserList) 
	#endif

	#ifndef GEODE_STATICS_resetTimerForKey
		#define GEODE_STATICS_resetTimerForKey
		GEODE_AS_STATIC_FUNCTION(resetTimerForKey) 
	#endif

	#ifndef GEODE_STATICS_responseToDict
		#define GEODE_STATICS_responseToDict
		GEODE_AS_STATIC_FUNCTION(responseToDict) 
	#endif

	#ifndef GEODE_STATICS_restoreItems
		#define GEODE_STATICS_restoreItems
		GEODE_AS_STATIC_FUNCTION(restoreItems) 
	#endif

	#ifndef GEODE_STATICS_saveFetchedLevels
		#define GEODE_STATICS_saveFetchedLevels
		GEODE_AS_STATIC_FUNCTION(saveFetchedLevels) 
	#endif

	#ifndef GEODE_STATICS_saveFetchedMapPacks
		#define GEODE_STATICS_saveFetchedMapPacks
		GEODE_AS_STATIC_FUNCTION(saveFetchedMapPacks) 
	#endif

	#ifndef GEODE_STATICS_saveLevel
		#define GEODE_STATICS_saveLevel
		GEODE_AS_STATIC_FUNCTION(saveLevel) 
	#endif

	#ifndef GEODE_STATICS_saveMapPack
		#define GEODE_STATICS_saveMapPack
		GEODE_AS_STATIC_FUNCTION(saveMapPack) 
	#endif

	#ifndef GEODE_STATICS_setBoolForKey
		#define GEODE_STATICS_setBoolForKey
		GEODE_AS_STATIC_FUNCTION(setBoolForKey) 
	#endif

	#ifndef GEODE_STATICS_setCommentDelegate
		#define GEODE_STATICS_setCommentDelegate
		GEODE_AS_STATIC_FUNCTION(setCommentDelegate) 
	#endif

	#ifndef GEODE_STATICS_setCommentUpDelegate
		#define GEODE_STATICS_setCommentUpDelegate
		GEODE_AS_STATIC_FUNCTION(setCommentUpDelegate) 
	#endif

	#ifndef GEODE_STATICS_setCreatedNewLevel
		#define GEODE_STATICS_setCreatedNewLevel
		GEODE_AS_STATIC_FUNCTION(setCreatedNewLevel) 
	#endif

	#ifndef GEODE_STATICS_setDelegate
		#define GEODE_STATICS_setDelegate
		GEODE_AS_STATIC_FUNCTION(setDelegate) 
	#endif

	#ifndef GEODE_STATICS_setDiffVal
		#define GEODE_STATICS_setDiffVal
		GEODE_AS_STATIC_FUNCTION(setDiffVal) 
	#endif

	#ifndef GEODE_STATICS_setDlDelegate
		#define GEODE_STATICS_setDlDelegate
		GEODE_AS_STATIC_FUNCTION(setDlDelegate) 
	#endif

	#ifndef GEODE_STATICS_setDLMessageDelegate
		#define GEODE_STATICS_setDLMessageDelegate
		GEODE_AS_STATIC_FUNCTION(setDLMessageDelegate) 
	#endif

	#ifndef GEODE_STATICS_setFollowedUsersDict
		#define GEODE_STATICS_setFollowedUsersDict
		GEODE_AS_STATIC_FUNCTION(setFollowedUsersDict) 
	#endif

	#ifndef GEODE_STATICS_setFRequestDelegate
		#define GEODE_STATICS_setFRequestDelegate
		GEODE_AS_STATIC_FUNCTION(setFRequestDelegate) 
	#endif

	#ifndef GEODE_STATICS_setIntForKey
		#define GEODE_STATICS_setIntForKey
		GEODE_AS_STATIC_FUNCTION(setIntForKey) 
	#endif

	#ifndef GEODE_STATICS_setLastLeaderboard
		#define GEODE_STATICS_setLastLeaderboard
		GEODE_AS_STATIC_FUNCTION(setLastLeaderboard) 
	#endif

	#ifndef GEODE_STATICS_setLastMapPackID
		#define GEODE_STATICS_setLastMapPackID
		GEODE_AS_STATIC_FUNCTION(setLastMapPackID) 
	#endif

	#ifndef GEODE_STATICS_setLastSearchKey
		#define GEODE_STATICS_setLastSearchKey
		GEODE_AS_STATIC_FUNCTION(setLastSearchKey) 
	#endif

	#ifndef GEODE_STATICS_setLastSearchKey2
		#define GEODE_STATICS_setLastSearchKey2
		GEODE_AS_STATIC_FUNCTION(setLastSearchKey2) 
	#endif

	#ifndef GEODE_STATICS_setLastSearchType
		#define GEODE_STATICS_setLastSearchType
		GEODE_AS_STATIC_FUNCTION(setLastSearchType) 
	#endif

	#ifndef GEODE_STATICS_setLeaderboardDelegate
		#define GEODE_STATICS_setLeaderboardDelegate
		GEODE_AS_STATIC_FUNCTION(setLeaderboardDelegate) 
	#endif

	#ifndef GEODE_STATICS_setLenVal
		#define GEODE_STATICS_setLenVal
		GEODE_AS_STATIC_FUNCTION(setLenVal) 
	#endif

	#ifndef GEODE_STATICS_setLevelFeatured
		#define GEODE_STATICS_setLevelFeatured
		GEODE_AS_STATIC_FUNCTION(setLevelFeatured) 
	#endif

	#ifndef GEODE_STATICS_setLevelStars
		#define GEODE_STATICS_setLevelStars
		GEODE_AS_STATIC_FUNCTION(setLevelStars) 
	#endif

	#ifndef GEODE_STATICS_setLvlDelDelegate
		#define GEODE_STATICS_setLvlDelDelegate
		GEODE_AS_STATIC_FUNCTION(setLvlDelDelegate) 
	#endif

	#ifndef GEODE_STATICS_setMainLevels
		#define GEODE_STATICS_setMainLevels
		GEODE_AS_STATIC_FUNCTION(setMainLevels) 
	#endif

	#ifndef GEODE_STATICS_setMListDelegate
		#define GEODE_STATICS_setMListDelegate
		GEODE_AS_STATIC_FUNCTION(setMListDelegate) 
	#endif

	#ifndef GEODE_STATICS_setMsgUDelegate
		#define GEODE_STATICS_setMsgUDelegate
		GEODE_AS_STATIC_FUNCTION(setMsgUDelegate) 
	#endif

	#ifndef GEODE_STATICS_setSavedLevelsDict
		#define GEODE_STATICS_setSavedLevelsDict
		GEODE_AS_STATIC_FUNCTION(setSavedLevelsDict) 
	#endif

	#ifndef GEODE_STATICS_setStoredLevelDataDict
		#define GEODE_STATICS_setStoredLevelDataDict
		GEODE_AS_STATIC_FUNCTION(setStoredLevelDataDict) 
	#endif

	#ifndef GEODE_STATICS_setTempSave
		#define GEODE_STATICS_setTempSave
		GEODE_AS_STATIC_FUNCTION(setTempSave) 
	#endif

	#ifndef GEODE_STATICS_setUActionDelegate
		#define GEODE_STATICS_setUActionDelegate
		GEODE_AS_STATIC_FUNCTION(setUActionDelegate) 
	#endif

	#ifndef GEODE_STATICS_setULDelegate
		#define GEODE_STATICS_setULDelegate
		GEODE_AS_STATIC_FUNCTION(setULDelegate) 
	#endif

	#ifndef GEODE_STATICS_setUpdateDelegate
		#define GEODE_STATICS_setUpdateDelegate
		GEODE_AS_STATIC_FUNCTION(setUpdateDelegate) 
	#endif

	#ifndef GEODE_STATICS_setUpDelegate
		#define GEODE_STATICS_setUpDelegate
		GEODE_AS_STATIC_FUNCTION(setUpDelegate) 
	#endif

	#ifndef GEODE_STATICS_setUserDelegate
		#define GEODE_STATICS_setUserDelegate
		GEODE_AS_STATIC_FUNCTION(setUserDelegate) 
	#endif

	#ifndef GEODE_STATICS_setValueDict
		#define GEODE_STATICS_setValueDict
		GEODE_AS_STATIC_FUNCTION(setValueDict) 
	#endif

	#ifndef GEODE_STATICS_storeCommentsResult
		#define GEODE_STATICS_storeCommentsResult
		GEODE_AS_STATIC_FUNCTION(storeCommentsResult) 
	#endif

	#ifndef GEODE_STATICS_storeFriendRequest
		#define GEODE_STATICS_storeFriendRequest
		GEODE_AS_STATIC_FUNCTION(storeFriendRequest) 
	#endif

	#ifndef GEODE_STATICS_storeSearchResult
		#define GEODE_STATICS_storeSearchResult
		GEODE_AS_STATIC_FUNCTION(storeSearchResult) 
	#endif

	#ifndef GEODE_STATICS_storeUserInfo
		#define GEODE_STATICS_storeUserInfo
		GEODE_AS_STATIC_FUNCTION(storeUserInfo) 
	#endif

	#ifndef GEODE_STATICS_storeUserMessage
		#define GEODE_STATICS_storeUserMessage
		GEODE_AS_STATIC_FUNCTION(storeUserMessage) 
	#endif

	#ifndef GEODE_STATICS_storeUserMessageReply
		#define GEODE_STATICS_storeUserMessageReply
		GEODE_AS_STATIC_FUNCTION(storeUserMessageReply) 
	#endif

	#ifndef GEODE_STATICS_storeUserName
		#define GEODE_STATICS_storeUserName
		GEODE_AS_STATIC_FUNCTION(storeUserName) 
	#endif

	#ifndef GEODE_STATICS_storeUserNames
		#define GEODE_STATICS_storeUserNames
		GEODE_AS_STATIC_FUNCTION(storeUserNames) 
	#endif

	#ifndef GEODE_STATICS_submitUserInfo
		#define GEODE_STATICS_submitUserInfo
		GEODE_AS_STATIC_FUNCTION(submitUserInfo) 
	#endif

	#ifndef GEODE_STATICS_suggestLevelStars
		#define GEODE_STATICS_suggestLevelStars
		GEODE_AS_STATIC_FUNCTION(suggestLevelStars) 
	#endif

	#ifndef GEODE_STATICS_typeFromCommentKey
		#define GEODE_STATICS_typeFromCommentKey
		GEODE_AS_STATIC_FUNCTION(typeFromCommentKey) 
	#endif

	#ifndef GEODE_STATICS_typeFromLikeKey
		#define GEODE_STATICS_typeFromLikeKey
		GEODE_AS_STATIC_FUNCTION(typeFromLikeKey) 
	#endif

	#ifndef GEODE_STATICS_unblockUser
		#define GEODE_STATICS_unblockUser
		GEODE_AS_STATIC_FUNCTION(unblockUser) 
	#endif

	#ifndef GEODE_STATICS_unfollowUser
		#define GEODE_STATICS_unfollowUser
		GEODE_AS_STATIC_FUNCTION(unfollowUser) 
	#endif

	#ifndef GEODE_STATICS_updateDescription
		#define GEODE_STATICS_updateDescription
		GEODE_AS_STATIC_FUNCTION(updateDescription) 
	#endif

	#ifndef GEODE_STATICS_updateLevel
		#define GEODE_STATICS_updateLevel
		GEODE_AS_STATIC_FUNCTION(updateLevel) 
	#endif

	#ifndef GEODE_STATICS_updateLevelRewards
		#define GEODE_STATICS_updateLevelRewards
		GEODE_AS_STATIC_FUNCTION(updateLevelRewards) 
	#endif

	#ifndef GEODE_STATICS_updateUsernames
		#define GEODE_STATICS_updateUsernames
		GEODE_AS_STATIC_FUNCTION(updateUsernames) 
	#endif

	#ifndef GEODE_STATICS_updateUserScore
		#define GEODE_STATICS_updateUserScore
		GEODE_AS_STATIC_FUNCTION(updateUserScore) 
	#endif

	#ifndef GEODE_STATICS_uploadAccountComment
		#define GEODE_STATICS_uploadAccountComment
		GEODE_AS_STATIC_FUNCTION(uploadAccountComment) 
	#endif

	#ifndef GEODE_STATICS_uploadComment
		#define GEODE_STATICS_uploadComment
		GEODE_AS_STATIC_FUNCTION(uploadComment) 
	#endif

	#ifndef GEODE_STATICS_uploadFriendRequest
		#define GEODE_STATICS_uploadFriendRequest
		GEODE_AS_STATIC_FUNCTION(uploadFriendRequest) 
	#endif

	#ifndef GEODE_STATICS_uploadLevel
		#define GEODE_STATICS_uploadLevel
		GEODE_AS_STATIC_FUNCTION(uploadLevel) 
	#endif

	#ifndef GEODE_STATICS_uploadLevelComment
		#define GEODE_STATICS_uploadLevelComment
		GEODE_AS_STATIC_FUNCTION(uploadLevelComment) 
	#endif

	#ifndef GEODE_STATICS_uploadUserMessage
		#define GEODE_STATICS_uploadUserMessage
		GEODE_AS_STATIC_FUNCTION(uploadUserMessage) 
	#endif

	#ifndef GEODE_STATICS_userIDForAccountID
		#define GEODE_STATICS_userIDForAccountID
		GEODE_AS_STATIC_FUNCTION(userIDForAccountID) 
	#endif

	#ifndef GEODE_STATICS_userInfoForAccountID
		#define GEODE_STATICS_userInfoForAccountID
		GEODE_AS_STATIC_FUNCTION(userInfoForAccountID) 
	#endif

	#ifndef GEODE_STATICS_userNameForUserID
		#define GEODE_STATICS_userNameForUserID
		GEODE_AS_STATIC_FUNCTION(userNameForUserID) 
	#endif

	#ifndef GEODE_STATICS_verifyLevelState
		#define GEODE_STATICS_verifyLevelState
		GEODE_AS_STATIC_FUNCTION(verifyLevelState) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_sharedState
		#define GEODE_CONCEPT_CHECK_sharedState
		GEODE_CONCEPT_FUNCTION_CHECK(sharedState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_acceptFriendRequest
		#define GEODE_CONCEPT_CHECK_acceptFriendRequest
		GEODE_CONCEPT_FUNCTION_CHECK(acceptFriendRequest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_accountIDForUserID
		#define GEODE_CONCEPT_CHECK_accountIDForUserID
		GEODE_CONCEPT_FUNCTION_CHECK(accountIDForUserID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addDLToActive
		#define GEODE_CONCEPT_CHECK_addDLToActive
		GEODE_CONCEPT_FUNCTION_CHECK(addDLToActive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_banUser
		#define GEODE_CONCEPT_CHECK_banUser
		GEODE_CONCEPT_FUNCTION_CHECK(banUser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_blockUser
		#define GEODE_CONCEPT_CHECK_blockUser
		GEODE_CONCEPT_FUNCTION_CHECK(blockUser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createAndGetAccountComments
		#define GEODE_CONCEPT_CHECK_createAndGetAccountComments
		GEODE_CONCEPT_FUNCTION_CHECK(createAndGetAccountComments) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createAndGetCommentsFull
		#define GEODE_CONCEPT_CHECK_createAndGetCommentsFull
		GEODE_CONCEPT_FUNCTION_CHECK(createAndGetCommentsFull) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createAndGetLevelComments
		#define GEODE_CONCEPT_CHECK_createAndGetLevelComments
		GEODE_CONCEPT_FUNCTION_CHECK(createAndGetLevelComments) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createAndGetLevels
		#define GEODE_CONCEPT_CHECK_createAndGetLevels
		GEODE_CONCEPT_FUNCTION_CHECK(createAndGetLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createAndGetMapPacks
		#define GEODE_CONCEPT_CHECK_createAndGetMapPacks
		GEODE_CONCEPT_FUNCTION_CHECK(createAndGetMapPacks) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createAndGetScores
		#define GEODE_CONCEPT_CHECK_createAndGetScores
		GEODE_CONCEPT_FUNCTION_CHECK(createAndGetScores) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createNewLevel
		#define GEODE_CONCEPT_CHECK_createNewLevel
		GEODE_CONCEPT_FUNCTION_CHECK(createNewLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createPageInfo
		#define GEODE_CONCEPT_CHECK_createPageInfo
		GEODE_CONCEPT_FUNCTION_CHECK(createPageInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dataLoaded
		#define GEODE_CONCEPT_CHECK_dataLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(dataLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteAccountComment
		#define GEODE_CONCEPT_CHECK_deleteAccountComment
		GEODE_CONCEPT_FUNCTION_CHECK(deleteAccountComment) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteComment
		#define GEODE_CONCEPT_CHECK_deleteComment
		GEODE_CONCEPT_FUNCTION_CHECK(deleteComment) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteFriendRequests
		#define GEODE_CONCEPT_CHECK_deleteFriendRequests
		GEODE_CONCEPT_FUNCTION_CHECK(deleteFriendRequests) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteLevel
		#define GEODE_CONCEPT_CHECK_deleteLevel
		GEODE_CONCEPT_FUNCTION_CHECK(deleteLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteLevelComment
		#define GEODE_CONCEPT_CHECK_deleteLevelComment
		GEODE_CONCEPT_FUNCTION_CHECK(deleteLevelComment) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteSentFriendRequest
		#define GEODE_CONCEPT_CHECK_deleteSentFriendRequest
		GEODE_CONCEPT_FUNCTION_CHECK(deleteSentFriendRequest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteServerLevel
		#define GEODE_CONCEPT_CHECK_deleteServerLevel
		GEODE_CONCEPT_FUNCTION_CHECK(deleteServerLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteUserMessages
		#define GEODE_CONCEPT_CHECK_deleteUserMessages
		GEODE_CONCEPT_FUNCTION_CHECK(deleteUserMessages) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadLevel
		#define GEODE_CONCEPT_CHECK_downloadLevel
		GEODE_CONCEPT_FUNCTION_CHECK(downloadLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadUserMessage
		#define GEODE_CONCEPT_CHECK_downloadUserMessage
		GEODE_CONCEPT_FUNCTION_CHECK(downloadUserMessage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_encodeDataTo
		#define GEODE_CONCEPT_CHECK_encodeDataTo
		GEODE_CONCEPT_FUNCTION_CHECK(encodeDataTo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_firstSetup
		#define GEODE_CONCEPT_CHECK_firstSetup
		GEODE_CONCEPT_FUNCTION_CHECK(firstSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_followUser
		#define GEODE_CONCEPT_CHECK_followUser
		GEODE_CONCEPT_FUNCTION_CHECK(followUser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_friendRequestFromAccountID
		#define GEODE_CONCEPT_CHECK_friendRequestFromAccountID
		GEODE_CONCEPT_FUNCTION_CHECK(friendRequestFromAccountID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_friendRequestWasRemoved
		#define GEODE_CONCEPT_CHECK_friendRequestWasRemoved
		GEODE_CONCEPT_FUNCTION_CHECK(friendRequestWasRemoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAccountCommentKey
		#define GEODE_CONCEPT_CHECK_getAccountCommentKey
		GEODE_CONCEPT_FUNCTION_CHECK(getAccountCommentKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAccountComments
		#define GEODE_CONCEPT_CHECK_getAccountComments
		GEODE_CONCEPT_FUNCTION_CHECK(getAccountComments) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAllUsedSongIDs
		#define GEODE_CONCEPT_CHECK_getAllUsedSongIDs
		GEODE_CONCEPT_FUNCTION_CHECK(getAllUsedSongIDs) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBasePostString
		#define GEODE_CONCEPT_CHECK_getBasePostString
		GEODE_CONCEPT_FUNCTION_CHECK(getBasePostString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBoolForKey
		#define GEODE_CONCEPT_CHECK_getBoolForKey
		GEODE_CONCEPT_FUNCTION_CHECK(getBoolForKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCommentDelegate
		#define GEODE_CONCEPT_CHECK_getCommentDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(getCommentDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCommentKey
		#define GEODE_CONCEPT_CHECK_getCommentKey
		GEODE_CONCEPT_FUNCTION_CHECK(getCommentKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCommentUpDelegate
		#define GEODE_CONCEPT_CHECK_getCommentUpDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(getCommentUpDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCompletedLevels
		#define GEODE_CONCEPT_CHECK_getCompletedLevels
		GEODE_CONCEPT_FUNCTION_CHECK(getCompletedLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCreatedNewLevel
		#define GEODE_CONCEPT_CHECK_getCreatedNewLevel
		GEODE_CONCEPT_FUNCTION_CHECK(getCreatedNewLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDelegate
		#define GEODE_CONCEPT_CHECK_getDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(getDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDeleteCommentKey
		#define GEODE_CONCEPT_CHECK_getDeleteCommentKey
		GEODE_CONCEPT_FUNCTION_CHECK(getDeleteCommentKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDeleteMessageKey
		#define GEODE_CONCEPT_CHECK_getDeleteMessageKey
		GEODE_CONCEPT_FUNCTION_CHECK(getDeleteMessageKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDescKey
		#define GEODE_CONCEPT_CHECK_getDescKey
		GEODE_CONCEPT_FUNCTION_CHECK(getDescKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDifficultyStr
		#define GEODE_CONCEPT_CHECK_getDifficultyStr
		GEODE_CONCEPT_FUNCTION_CHECK(getDifficultyStr) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDiffKey
		#define GEODE_CONCEPT_CHECK_getDiffKey
		GEODE_CONCEPT_FUNCTION_CHECK(getDiffKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDiffVal
		#define GEODE_CONCEPT_CHECK_getDiffVal
		GEODE_CONCEPT_FUNCTION_CHECK(getDiffVal) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDlDelegate
		#define GEODE_CONCEPT_CHECK_getDlDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(getDlDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDLMessageDelegate
		#define GEODE_CONCEPT_CHECK_getDLMessageDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(getDLMessageDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFollowedUsersDict
		#define GEODE_CONCEPT_CHECK_getFollowedUsersDict
		GEODE_CONCEPT_FUNCTION_CHECK(getFollowedUsersDict) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFRequestDelegate
		#define GEODE_CONCEPT_CHECK_getFRequestDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(getFRequestDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFriendRequestKey
		#define GEODE_CONCEPT_CHECK_getFriendRequestKey
		GEODE_CONCEPT_FUNCTION_CHECK(getFriendRequestKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFriendRequests
		#define GEODE_CONCEPT_CHECK_getFriendRequests
		GEODE_CONCEPT_FUNCTION_CHECK(getFriendRequests) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGJUserInfo
		#define GEODE_CONCEPT_CHECK_getGJUserInfo
		GEODE_CONCEPT_FUNCTION_CHECK(getGJUserInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIntForKey
		#define GEODE_CONCEPT_CHECK_getIntForKey
		GEODE_CONCEPT_FUNCTION_CHECK(getIntForKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLastLeaderboard
		#define GEODE_CONCEPT_CHECK_getLastLeaderboard
		GEODE_CONCEPT_FUNCTION_CHECK(getLastLeaderboard) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLastMapPackID
		#define GEODE_CONCEPT_CHECK_getLastMapPackID
		GEODE_CONCEPT_FUNCTION_CHECK(getLastMapPackID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLastSearchKey
		#define GEODE_CONCEPT_CHECK_getLastSearchKey
		GEODE_CONCEPT_FUNCTION_CHECK(getLastSearchKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLastSearchKey2
		#define GEODE_CONCEPT_CHECK_getLastSearchKey2
		GEODE_CONCEPT_FUNCTION_CHECK(getLastSearchKey2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLastSearchType
		#define GEODE_CONCEPT_CHECK_getLastSearchType
		GEODE_CONCEPT_FUNCTION_CHECK(getLastSearchType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLeaderboardDelegate
		#define GEODE_CONCEPT_CHECK_getLeaderboardDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(getLeaderboardDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLeaderboardScores
		#define GEODE_CONCEPT_CHECK_getLeaderboardScores
		GEODE_CONCEPT_FUNCTION_CHECK(getLeaderboardScores) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLengthStr
		#define GEODE_CONCEPT_CHECK_getLengthStr
		GEODE_CONCEPT_FUNCTION_CHECK(getLengthStr) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLenKey
		#define GEODE_CONCEPT_CHECK_getLenKey
		GEODE_CONCEPT_FUNCTION_CHECK(getLenKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLenVal
		#define GEODE_CONCEPT_CHECK_getLenVal
		GEODE_CONCEPT_FUNCTION_CHECK(getLenVal) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLevelComments
		#define GEODE_CONCEPT_CHECK_getLevelComments
		GEODE_CONCEPT_FUNCTION_CHECK(getLevelComments) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLevelKey
		#define GEODE_CONCEPT_CHECK_getLevelKey
		GEODE_CONCEPT_FUNCTION_CHECK(getLevelKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLevelSaveData
		#define GEODE_CONCEPT_CHECK_getLevelSaveData
		GEODE_CONCEPT_FUNCTION_CHECK(getLevelSaveData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLikeAccountItemKey
		#define GEODE_CONCEPT_CHECK_getLikeAccountItemKey
		GEODE_CONCEPT_FUNCTION_CHECK(getLikeAccountItemKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLikeItemKey
		#define GEODE_CONCEPT_CHECK_getLikeItemKey
		GEODE_CONCEPT_FUNCTION_CHECK(getLikeItemKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLikeKey
		#define GEODE_CONCEPT_CHECK_getLikeKey
		GEODE_CONCEPT_FUNCTION_CHECK(getLikeKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLocalLevel
		#define GEODE_CONCEPT_CHECK_getLocalLevel
		GEODE_CONCEPT_FUNCTION_CHECK(getLocalLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLvlDelDelegate
		#define GEODE_CONCEPT_CHECK_getLvlDelDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(getLvlDelDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMainLevel
		#define GEODE_CONCEPT_CHECK_getMainLevel
		GEODE_CONCEPT_FUNCTION_CHECK(getMainLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMainLevels
		#define GEODE_CONCEPT_CHECK_getMainLevels
		GEODE_CONCEPT_FUNCTION_CHECK(getMainLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMapPackKey
		#define GEODE_CONCEPT_CHECK_getMapPackKey
		GEODE_CONCEPT_FUNCTION_CHECK(getMapPackKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMapPacks
		#define GEODE_CONCEPT_CHECK_getMapPacks
		GEODE_CONCEPT_FUNCTION_CHECK(getMapPacks) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMessageKey
		#define GEODE_CONCEPT_CHECK_getMessageKey
		GEODE_CONCEPT_FUNCTION_CHECK(getMessageKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMessagesKey
		#define GEODE_CONCEPT_CHECK_getMessagesKey
		GEODE_CONCEPT_FUNCTION_CHECK(getMessagesKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMListDelegate
		#define GEODE_CONCEPT_CHECK_getMListDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(getMListDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMsgUDelegate
		#define GEODE_CONCEPT_CHECK_getMsgUDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(getMsgUDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOnlineLevels
		#define GEODE_CONCEPT_CHECK_getOnlineLevels
		GEODE_CONCEPT_FUNCTION_CHECK(getOnlineLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPageInfo
		#define GEODE_CONCEPT_CHECK_getPageInfo
		GEODE_CONCEPT_FUNCTION_CHECK(getPageInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPostCommentKey
		#define GEODE_CONCEPT_CHECK_getPostCommentKey
		GEODE_CONCEPT_FUNCTION_CHECK(getPostCommentKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRateKey
		#define GEODE_CONCEPT_CHECK_getRateKey
		GEODE_CONCEPT_FUNCTION_CHECK(getRateKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRateStarsKey
		#define GEODE_CONCEPT_CHECK_getRateStarsKey
		GEODE_CONCEPT_FUNCTION_CHECK(getRateStarsKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getReportKey
		#define GEODE_CONCEPT_CHECK_getReportKey
		GEODE_CONCEPT_FUNCTION_CHECK(getReportKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSavedLevel
		#define GEODE_CONCEPT_CHECK_getSavedLevel
		GEODE_CONCEPT_FUNCTION_CHECK(getSavedLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSavedLevels
		#define GEODE_CONCEPT_CHECK_getSavedLevels
		GEODE_CONCEPT_FUNCTION_CHECK(getSavedLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSavedLevelsDict
		#define GEODE_CONCEPT_CHECK_getSavedLevelsDict
		GEODE_CONCEPT_FUNCTION_CHECK(getSavedLevelsDict) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSavedMapPack
		#define GEODE_CONCEPT_CHECK_getSavedMapPack
		GEODE_CONCEPT_FUNCTION_CHECK(getSavedMapPack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSearchScene
		#define GEODE_CONCEPT_CHECK_getSearchScene
		GEODE_CONCEPT_FUNCTION_CHECK(getSearchScene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSplitIntFromKey
		#define GEODE_CONCEPT_CHECK_getSplitIntFromKey
		GEODE_CONCEPT_FUNCTION_CHECK(getSplitIntFromKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStoredLevelComments
		#define GEODE_CONCEPT_CHECK_getStoredLevelComments
		GEODE_CONCEPT_FUNCTION_CHECK(getStoredLevelComments) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStoredLevelDataDict
		#define GEODE_CONCEPT_CHECK_getStoredLevelDataDict
		GEODE_CONCEPT_FUNCTION_CHECK(getStoredLevelDataDict) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStoredOnlineLevels
		#define GEODE_CONCEPT_CHECK_getStoredOnlineLevels
		GEODE_CONCEPT_FUNCTION_CHECK(getStoredOnlineLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStoredUserList
		#define GEODE_CONCEPT_CHECK_getStoredUserList
		GEODE_CONCEPT_FUNCTION_CHECK(getStoredUserList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStoredUserMessage
		#define GEODE_CONCEPT_CHECK_getStoredUserMessage
		GEODE_CONCEPT_FUNCTION_CHECK(getStoredUserMessage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStoredUserMessageReply
		#define GEODE_CONCEPT_CHECK_getStoredUserMessageReply
		GEODE_CONCEPT_FUNCTION_CHECK(getStoredUserMessageReply) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTempSave
		#define GEODE_CONCEPT_CHECK_getTempSave
		GEODE_CONCEPT_FUNCTION_CHECK(getTempSave) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTimeLeft
		#define GEODE_CONCEPT_CHECK_getTimeLeft
		GEODE_CONCEPT_FUNCTION_CHECK(getTimeLeft) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUActionDelegate
		#define GEODE_CONCEPT_CHECK_getUActionDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(getUActionDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getULDelegate
		#define GEODE_CONCEPT_CHECK_getULDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(getULDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUpdateDelegate
		#define GEODE_CONCEPT_CHECK_getUpdateDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(getUpdateDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUpDelegate
		#define GEODE_CONCEPT_CHECK_getUpDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(getUpDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUploadMessageKey
		#define GEODE_CONCEPT_CHECK_getUploadMessageKey
		GEODE_CONCEPT_FUNCTION_CHECK(getUploadMessageKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUserDelegate
		#define GEODE_CONCEPT_CHECK_getUserDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(getUserDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUserInfoKey
		#define GEODE_CONCEPT_CHECK_getUserInfoKey
		GEODE_CONCEPT_FUNCTION_CHECK(getUserInfoKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUserList
		#define GEODE_CONCEPT_CHECK_getUserList
		GEODE_CONCEPT_FUNCTION_CHECK(getUserList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUserMessages
		#define GEODE_CONCEPT_CHECK_getUserMessages
		GEODE_CONCEPT_FUNCTION_CHECK(getUserMessages) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUsers
		#define GEODE_CONCEPT_CHECK_getUsers
		GEODE_CONCEPT_FUNCTION_CHECK(getUsers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getValueDict
		#define GEODE_CONCEPT_CHECK_getValueDict
		GEODE_CONCEPT_FUNCTION_CHECK(getValueDict) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_gotoLevelPage
		#define GEODE_CONCEPT_CHECK_gotoLevelPage
		GEODE_CONCEPT_FUNCTION_CHECK(gotoLevelPage) 
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

	#ifndef GEODE_CONCEPT_CHECK_hasDownloadedLevel
		#define GEODE_CONCEPT_CHECK_hasDownloadedLevel
		GEODE_CONCEPT_FUNCTION_CHECK(hasDownloadedLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasLikedAccountItem
		#define GEODE_CONCEPT_CHECK_hasLikedAccountItem
		GEODE_CONCEPT_FUNCTION_CHECK(hasLikedAccountItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasLikedItem
		#define GEODE_CONCEPT_CHECK_hasLikedItem
		GEODE_CONCEPT_FUNCTION_CHECK(hasLikedItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasLikedItemFullCheck
		#define GEODE_CONCEPT_CHECK_hasLikedItemFullCheck
		GEODE_CONCEPT_FUNCTION_CHECK(hasLikedItemFullCheck) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasLikedLevel
		#define GEODE_CONCEPT_CHECK_hasLikedLevel
		GEODE_CONCEPT_FUNCTION_CHECK(hasLikedLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasRatedLevel
		#define GEODE_CONCEPT_CHECK_hasRatedLevel
		GEODE_CONCEPT_FUNCTION_CHECK(hasRatedLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasRatedLevelStars
		#define GEODE_CONCEPT_CHECK_hasRatedLevelStars
		GEODE_CONCEPT_FUNCTION_CHECK(hasRatedLevelStars) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasReportedLevel
		#define GEODE_CONCEPT_CHECK_hasReportedLevel
		GEODE_CONCEPT_FUNCTION_CHECK(hasReportedLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_invalidateMessages
		#define GEODE_CONCEPT_CHECK_invalidateMessages
		GEODE_CONCEPT_FUNCTION_CHECK(invalidateMessages) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_invalidateRequests
		#define GEODE_CONCEPT_CHECK_invalidateRequests
		GEODE_CONCEPT_FUNCTION_CHECK(invalidateRequests) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_invalidateUserList
		#define GEODE_CONCEPT_CHECK_invalidateUserList
		GEODE_CONCEPT_FUNCTION_CHECK(invalidateUserList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isDLActive
		#define GEODE_CONCEPT_CHECK_isDLActive
		GEODE_CONCEPT_FUNCTION_CHECK(isDLActive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isFollowingUser
		#define GEODE_CONCEPT_CHECK_isFollowingUser
		GEODE_CONCEPT_FUNCTION_CHECK(isFollowingUser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isTimeValid
		#define GEODE_CONCEPT_CHECK_isTimeValid
		GEODE_CONCEPT_FUNCTION_CHECK(isTimeValid) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isUpdateValid
		#define GEODE_CONCEPT_CHECK_isUpdateValid
		GEODE_CONCEPT_FUNCTION_CHECK(isUpdateValid) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_itemIDFromLikeKey
		#define GEODE_CONCEPT_CHECK_itemIDFromLikeKey
		GEODE_CONCEPT_FUNCTION_CHECK(itemIDFromLikeKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_levelIDFromCommentKey
		#define GEODE_CONCEPT_CHECK_levelIDFromCommentKey
		GEODE_CONCEPT_FUNCTION_CHECK(levelIDFromCommentKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_levelIDFromPostCommentKey
		#define GEODE_CONCEPT_CHECK_levelIDFromPostCommentKey
		GEODE_CONCEPT_FUNCTION_CHECK(levelIDFromPostCommentKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_likeFromLikeKey
		#define GEODE_CONCEPT_CHECK_likeFromLikeKey
		GEODE_CONCEPT_FUNCTION_CHECK(likeFromLikeKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_likeItem
		#define GEODE_CONCEPT_CHECK_likeItem
		GEODE_CONCEPT_FUNCTION_CHECK(likeItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_limitSavedLevels
		#define GEODE_CONCEPT_CHECK_limitSavedLevels
		GEODE_CONCEPT_FUNCTION_CHECK(limitSavedLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_makeTimeStamp
		#define GEODE_CONCEPT_CHECK_makeTimeStamp
		GEODE_CONCEPT_FUNCTION_CHECK(makeTimeStamp) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_markItemAsLiked
		#define GEODE_CONCEPT_CHECK_markItemAsLiked
		GEODE_CONCEPT_FUNCTION_CHECK(markItemAsLiked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_markLevelAsDownloaded
		#define GEODE_CONCEPT_CHECK_markLevelAsDownloaded
		GEODE_CONCEPT_FUNCTION_CHECK(markLevelAsDownloaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_markLevelAsLiked
		#define GEODE_CONCEPT_CHECK_markLevelAsLiked
		GEODE_CONCEPT_FUNCTION_CHECK(markLevelAsLiked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_markLevelAsRated
		#define GEODE_CONCEPT_CHECK_markLevelAsRated
		GEODE_CONCEPT_FUNCTION_CHECK(markLevelAsRated) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_markLevelAsRatedStars
		#define GEODE_CONCEPT_CHECK_markLevelAsRatedStars
		GEODE_CONCEPT_FUNCTION_CHECK(markLevelAsRatedStars) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_markLevelAsReported
		#define GEODE_CONCEPT_CHECK_markLevelAsReported
		GEODE_CONCEPT_FUNCTION_CHECK(markLevelAsReported) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_messageWasRemoved
		#define GEODE_CONCEPT_CHECK_messageWasRemoved
		GEODE_CONCEPT_FUNCTION_CHECK(messageWasRemoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAcceptFriendRequestCompleted
		#define GEODE_CONCEPT_CHECK_onAcceptFriendRequestCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onAcceptFriendRequestCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBanUserCompleted
		#define GEODE_CONCEPT_CHECK_onBanUserCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onBanUserCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBlockUserCompleted
		#define GEODE_CONCEPT_CHECK_onBlockUserCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onBlockUserCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeleteCommentCompleted
		#define GEODE_CONCEPT_CHECK_onDeleteCommentCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onDeleteCommentCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeleteFriendRequestCompleted
		#define GEODE_CONCEPT_CHECK_onDeleteFriendRequestCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onDeleteFriendRequestCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeleteServerLevelCompleted
		#define GEODE_CONCEPT_CHECK_onDeleteServerLevelCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onDeleteServerLevelCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeleteUserMessagesCompleted
		#define GEODE_CONCEPT_CHECK_onDeleteUserMessagesCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onDeleteUserMessagesCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDownloadLevelCompleted
		#define GEODE_CONCEPT_CHECK_onDownloadLevelCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onDownloadLevelCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDownloadUserMessageCompleted
		#define GEODE_CONCEPT_CHECK_onDownloadUserMessageCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onDownloadUserMessageCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetAccountCommentsCompleted
		#define GEODE_CONCEPT_CHECK_onGetAccountCommentsCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetAccountCommentsCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetFriendRequestsCompleted
		#define GEODE_CONCEPT_CHECK_onGetFriendRequestsCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetFriendRequestsCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetGJUserInfoCompleted
		#define GEODE_CONCEPT_CHECK_onGetGJUserInfoCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetGJUserInfoCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetLeaderboardScoresCompleted
		#define GEODE_CONCEPT_CHECK_onGetLeaderboardScoresCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetLeaderboardScoresCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetLevelCommentsCompleted
		#define GEODE_CONCEPT_CHECK_onGetLevelCommentsCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetLevelCommentsCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetLevelSaveDataCompleted
		#define GEODE_CONCEPT_CHECK_onGetLevelSaveDataCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetLevelSaveDataCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetMapPacksCompleted
		#define GEODE_CONCEPT_CHECK_onGetMapPacksCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetMapPacksCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetOnlineLevelsCompleted
		#define GEODE_CONCEPT_CHECK_onGetOnlineLevelsCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetOnlineLevelsCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetUserListCompleted
		#define GEODE_CONCEPT_CHECK_onGetUserListCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetUserListCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetUserMessagesCompleted
		#define GEODE_CONCEPT_CHECK_onGetUserMessagesCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetUserMessagesCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetUsersCompleted
		#define GEODE_CONCEPT_CHECK_onGetUsersCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetUsersCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onLikeItemCompleted
		#define GEODE_CONCEPT_CHECK_onLikeItemCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onLikeItemCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onProcessHttpRequestCompleted
		#define GEODE_CONCEPT_CHECK_onProcessHttpRequestCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onProcessHttpRequestCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRateStarsCompleted
		#define GEODE_CONCEPT_CHECK_onRateStarsCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onRateStarsCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onReadFriendRequestCompleted
		#define GEODE_CONCEPT_CHECK_onReadFriendRequestCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onReadFriendRequestCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRemoveFriendCompleted
		#define GEODE_CONCEPT_CHECK_onRemoveFriendCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onRemoveFriendCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onReportLevelCompleted
		#define GEODE_CONCEPT_CHECK_onReportLevelCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onReportLevelCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRequestUserAccessCompleted
		#define GEODE_CONCEPT_CHECK_onRequestUserAccessCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onRequestUserAccessCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRestoreItemsCompleted
		#define GEODE_CONCEPT_CHECK_onRestoreItemsCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onRestoreItemsCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSetLevelFeaturedCompleted
		#define GEODE_CONCEPT_CHECK_onSetLevelFeaturedCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onSetLevelFeaturedCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSetLevelStarsCompleted
		#define GEODE_CONCEPT_CHECK_onSetLevelStarsCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onSetLevelStarsCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSubmitUserInfoCompleted
		#define GEODE_CONCEPT_CHECK_onSubmitUserInfoCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onSubmitUserInfoCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSuggestLevelStarsCompleted
		#define GEODE_CONCEPT_CHECK_onSuggestLevelStarsCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onSuggestLevelStarsCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUnblockUserCompleted
		#define GEODE_CONCEPT_CHECK_onUnblockUserCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onUnblockUserCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUpdateDescriptionCompleted
		#define GEODE_CONCEPT_CHECK_onUpdateDescriptionCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onUpdateDescriptionCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUpdateLevelCompleted
		#define GEODE_CONCEPT_CHECK_onUpdateLevelCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onUpdateLevelCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUpdateUserScoreCompleted
		#define GEODE_CONCEPT_CHECK_onUpdateUserScoreCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onUpdateUserScoreCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUploadCommentCompleted
		#define GEODE_CONCEPT_CHECK_onUploadCommentCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onUploadCommentCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUploadFriendRequestCompleted
		#define GEODE_CONCEPT_CHECK_onUploadFriendRequestCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onUploadFriendRequestCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUploadLevelCompleted
		#define GEODE_CONCEPT_CHECK_onUploadLevelCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onUploadLevelCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUploadUserMessageCompleted
		#define GEODE_CONCEPT_CHECK_onUploadUserMessageCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onUploadUserMessageCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pageFromCommentKey
		#define GEODE_CONCEPT_CHECK_pageFromCommentKey
		GEODE_CONCEPT_FUNCTION_CHECK(pageFromCommentKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_parseRestoreData
		#define GEODE_CONCEPT_CHECK_parseRestoreData
		GEODE_CONCEPT_FUNCTION_CHECK(parseRestoreData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ProcessHttpRequest
		#define GEODE_CONCEPT_CHECK_ProcessHttpRequest
		GEODE_CONCEPT_FUNCTION_CHECK(ProcessHttpRequest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_purgeUnusedLevels
		#define GEODE_CONCEPT_CHECK_purgeUnusedLevels
		GEODE_CONCEPT_FUNCTION_CHECK(purgeUnusedLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rateStars
		#define GEODE_CONCEPT_CHECK_rateStars
		GEODE_CONCEPT_FUNCTION_CHECK(rateStars) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_readFriendRequest
		#define GEODE_CONCEPT_CHECK_readFriendRequest
		GEODE_CONCEPT_FUNCTION_CHECK(readFriendRequest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeDelimiterChars
		#define GEODE_CONCEPT_CHECK_removeDelimiterChars
		GEODE_CONCEPT_FUNCTION_CHECK(removeDelimiterChars) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeDLFromActive
		#define GEODE_CONCEPT_CHECK_removeDLFromActive
		GEODE_CONCEPT_FUNCTION_CHECK(removeDLFromActive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeFriend
		#define GEODE_CONCEPT_CHECK_removeFriend
		GEODE_CONCEPT_FUNCTION_CHECK(removeFriend) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeUserFromList
		#define GEODE_CONCEPT_CHECK_removeUserFromList
		GEODE_CONCEPT_FUNCTION_CHECK(removeUserFromList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reportLevel
		#define GEODE_CONCEPT_CHECK_reportLevel
		GEODE_CONCEPT_FUNCTION_CHECK(reportLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_requestUserAccess
		#define GEODE_CONCEPT_CHECK_requestUserAccess
		GEODE_CONCEPT_FUNCTION_CHECK(requestUserAccess) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetAccountComments
		#define GEODE_CONCEPT_CHECK_resetAccountComments
		GEODE_CONCEPT_FUNCTION_CHECK(resetAccountComments) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetAllTimers
		#define GEODE_CONCEPT_CHECK_resetAllTimers
		GEODE_CONCEPT_FUNCTION_CHECK(resetAllTimers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetStoredUserInfo
		#define GEODE_CONCEPT_CHECK_resetStoredUserInfo
		GEODE_CONCEPT_FUNCTION_CHECK(resetStoredUserInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetStoredUserList
		#define GEODE_CONCEPT_CHECK_resetStoredUserList
		GEODE_CONCEPT_FUNCTION_CHECK(resetStoredUserList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetTimerForKey
		#define GEODE_CONCEPT_CHECK_resetTimerForKey
		GEODE_CONCEPT_FUNCTION_CHECK(resetTimerForKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_responseToDict
		#define GEODE_CONCEPT_CHECK_responseToDict
		GEODE_CONCEPT_FUNCTION_CHECK(responseToDict) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_restoreItems
		#define GEODE_CONCEPT_CHECK_restoreItems
		GEODE_CONCEPT_FUNCTION_CHECK(restoreItems) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveFetchedLevels
		#define GEODE_CONCEPT_CHECK_saveFetchedLevels
		GEODE_CONCEPT_FUNCTION_CHECK(saveFetchedLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveFetchedMapPacks
		#define GEODE_CONCEPT_CHECK_saveFetchedMapPacks
		GEODE_CONCEPT_FUNCTION_CHECK(saveFetchedMapPacks) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveLevel
		#define GEODE_CONCEPT_CHECK_saveLevel
		GEODE_CONCEPT_FUNCTION_CHECK(saveLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveMapPack
		#define GEODE_CONCEPT_CHECK_saveMapPack
		GEODE_CONCEPT_FUNCTION_CHECK(saveMapPack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setBoolForKey
		#define GEODE_CONCEPT_CHECK_setBoolForKey
		GEODE_CONCEPT_FUNCTION_CHECK(setBoolForKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCommentDelegate
		#define GEODE_CONCEPT_CHECK_setCommentDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(setCommentDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCommentUpDelegate
		#define GEODE_CONCEPT_CHECK_setCommentUpDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(setCommentUpDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCreatedNewLevel
		#define GEODE_CONCEPT_CHECK_setCreatedNewLevel
		GEODE_CONCEPT_FUNCTION_CHECK(setCreatedNewLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDelegate
		#define GEODE_CONCEPT_CHECK_setDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(setDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDiffVal
		#define GEODE_CONCEPT_CHECK_setDiffVal
		GEODE_CONCEPT_FUNCTION_CHECK(setDiffVal) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDlDelegate
		#define GEODE_CONCEPT_CHECK_setDlDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(setDlDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDLMessageDelegate
		#define GEODE_CONCEPT_CHECK_setDLMessageDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(setDLMessageDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFollowedUsersDict
		#define GEODE_CONCEPT_CHECK_setFollowedUsersDict
		GEODE_CONCEPT_FUNCTION_CHECK(setFollowedUsersDict) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFRequestDelegate
		#define GEODE_CONCEPT_CHECK_setFRequestDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(setFRequestDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIntForKey
		#define GEODE_CONCEPT_CHECK_setIntForKey
		GEODE_CONCEPT_FUNCTION_CHECK(setIntForKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLastLeaderboard
		#define GEODE_CONCEPT_CHECK_setLastLeaderboard
		GEODE_CONCEPT_FUNCTION_CHECK(setLastLeaderboard) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLastMapPackID
		#define GEODE_CONCEPT_CHECK_setLastMapPackID
		GEODE_CONCEPT_FUNCTION_CHECK(setLastMapPackID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLastSearchKey
		#define GEODE_CONCEPT_CHECK_setLastSearchKey
		GEODE_CONCEPT_FUNCTION_CHECK(setLastSearchKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLastSearchKey2
		#define GEODE_CONCEPT_CHECK_setLastSearchKey2
		GEODE_CONCEPT_FUNCTION_CHECK(setLastSearchKey2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLastSearchType
		#define GEODE_CONCEPT_CHECK_setLastSearchType
		GEODE_CONCEPT_FUNCTION_CHECK(setLastSearchType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLeaderboardDelegate
		#define GEODE_CONCEPT_CHECK_setLeaderboardDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(setLeaderboardDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLenVal
		#define GEODE_CONCEPT_CHECK_setLenVal
		GEODE_CONCEPT_FUNCTION_CHECK(setLenVal) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLevelFeatured
		#define GEODE_CONCEPT_CHECK_setLevelFeatured
		GEODE_CONCEPT_FUNCTION_CHECK(setLevelFeatured) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLevelStars
		#define GEODE_CONCEPT_CHECK_setLevelStars
		GEODE_CONCEPT_FUNCTION_CHECK(setLevelStars) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLvlDelDelegate
		#define GEODE_CONCEPT_CHECK_setLvlDelDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(setLvlDelDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMainLevels
		#define GEODE_CONCEPT_CHECK_setMainLevels
		GEODE_CONCEPT_FUNCTION_CHECK(setMainLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMListDelegate
		#define GEODE_CONCEPT_CHECK_setMListDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(setMListDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMsgUDelegate
		#define GEODE_CONCEPT_CHECK_setMsgUDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(setMsgUDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSavedLevelsDict
		#define GEODE_CONCEPT_CHECK_setSavedLevelsDict
		GEODE_CONCEPT_FUNCTION_CHECK(setSavedLevelsDict) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStoredLevelDataDict
		#define GEODE_CONCEPT_CHECK_setStoredLevelDataDict
		GEODE_CONCEPT_FUNCTION_CHECK(setStoredLevelDataDict) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTempSave
		#define GEODE_CONCEPT_CHECK_setTempSave
		GEODE_CONCEPT_FUNCTION_CHECK(setTempSave) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUActionDelegate
		#define GEODE_CONCEPT_CHECK_setUActionDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(setUActionDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setULDelegate
		#define GEODE_CONCEPT_CHECK_setULDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(setULDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUpdateDelegate
		#define GEODE_CONCEPT_CHECK_setUpdateDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(setUpdateDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUpDelegate
		#define GEODE_CONCEPT_CHECK_setUpDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(setUpDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUserDelegate
		#define GEODE_CONCEPT_CHECK_setUserDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(setUserDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setValueDict
		#define GEODE_CONCEPT_CHECK_setValueDict
		GEODE_CONCEPT_FUNCTION_CHECK(setValueDict) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeCommentsResult
		#define GEODE_CONCEPT_CHECK_storeCommentsResult
		GEODE_CONCEPT_FUNCTION_CHECK(storeCommentsResult) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeFriendRequest
		#define GEODE_CONCEPT_CHECK_storeFriendRequest
		GEODE_CONCEPT_FUNCTION_CHECK(storeFriendRequest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeSearchResult
		#define GEODE_CONCEPT_CHECK_storeSearchResult
		GEODE_CONCEPT_FUNCTION_CHECK(storeSearchResult) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeUserInfo
		#define GEODE_CONCEPT_CHECK_storeUserInfo
		GEODE_CONCEPT_FUNCTION_CHECK(storeUserInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeUserMessage
		#define GEODE_CONCEPT_CHECK_storeUserMessage
		GEODE_CONCEPT_FUNCTION_CHECK(storeUserMessage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeUserMessageReply
		#define GEODE_CONCEPT_CHECK_storeUserMessageReply
		GEODE_CONCEPT_FUNCTION_CHECK(storeUserMessageReply) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeUserName
		#define GEODE_CONCEPT_CHECK_storeUserName
		GEODE_CONCEPT_FUNCTION_CHECK(storeUserName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeUserNames
		#define GEODE_CONCEPT_CHECK_storeUserNames
		GEODE_CONCEPT_FUNCTION_CHECK(storeUserNames) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_submitUserInfo
		#define GEODE_CONCEPT_CHECK_submitUserInfo
		GEODE_CONCEPT_FUNCTION_CHECK(submitUserInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_suggestLevelStars
		#define GEODE_CONCEPT_CHECK_suggestLevelStars
		GEODE_CONCEPT_FUNCTION_CHECK(suggestLevelStars) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_typeFromCommentKey
		#define GEODE_CONCEPT_CHECK_typeFromCommentKey
		GEODE_CONCEPT_FUNCTION_CHECK(typeFromCommentKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_typeFromLikeKey
		#define GEODE_CONCEPT_CHECK_typeFromLikeKey
		GEODE_CONCEPT_FUNCTION_CHECK(typeFromLikeKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unblockUser
		#define GEODE_CONCEPT_CHECK_unblockUser
		GEODE_CONCEPT_FUNCTION_CHECK(unblockUser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unfollowUser
		#define GEODE_CONCEPT_CHECK_unfollowUser
		GEODE_CONCEPT_FUNCTION_CHECK(unfollowUser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDescription
		#define GEODE_CONCEPT_CHECK_updateDescription
		GEODE_CONCEPT_FUNCTION_CHECK(updateDescription) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLevel
		#define GEODE_CONCEPT_CHECK_updateLevel
		GEODE_CONCEPT_FUNCTION_CHECK(updateLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLevelRewards
		#define GEODE_CONCEPT_CHECK_updateLevelRewards
		GEODE_CONCEPT_FUNCTION_CHECK(updateLevelRewards) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateUsernames
		#define GEODE_CONCEPT_CHECK_updateUsernames
		GEODE_CONCEPT_FUNCTION_CHECK(updateUsernames) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateUserScore
		#define GEODE_CONCEPT_CHECK_updateUserScore
		GEODE_CONCEPT_FUNCTION_CHECK(updateUserScore) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadAccountComment
		#define GEODE_CONCEPT_CHECK_uploadAccountComment
		GEODE_CONCEPT_FUNCTION_CHECK(uploadAccountComment) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadComment
		#define GEODE_CONCEPT_CHECK_uploadComment
		GEODE_CONCEPT_FUNCTION_CHECK(uploadComment) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadFriendRequest
		#define GEODE_CONCEPT_CHECK_uploadFriendRequest
		GEODE_CONCEPT_FUNCTION_CHECK(uploadFriendRequest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadLevel
		#define GEODE_CONCEPT_CHECK_uploadLevel
		GEODE_CONCEPT_FUNCTION_CHECK(uploadLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadLevelComment
		#define GEODE_CONCEPT_CHECK_uploadLevelComment
		GEODE_CONCEPT_FUNCTION_CHECK(uploadLevelComment) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadUserMessage
		#define GEODE_CONCEPT_CHECK_uploadUserMessage
		GEODE_CONCEPT_FUNCTION_CHECK(uploadUserMessage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_userIDForAccountID
		#define GEODE_CONCEPT_CHECK_userIDForAccountID
		GEODE_CONCEPT_FUNCTION_CHECK(userIDForAccountID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_userInfoForAccountID
		#define GEODE_CONCEPT_CHECK_userInfoForAccountID
		GEODE_CONCEPT_FUNCTION_CHECK(userInfoForAccountID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_userNameForUserID
		#define GEODE_CONCEPT_CHECK_userNameForUserID
		GEODE_CONCEPT_FUNCTION_CHECK(userNameForUserID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_verifyLevelState
		#define GEODE_CONCEPT_CHECK_verifyLevelState
		GEODE_CONCEPT_FUNCTION_CHECK(verifyLevelState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GameLevelManager> : ModifyBase<ModifyDerive<Der, GameLevelManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GameLevelManager>>;
		using ModifyBase<ModifyDerive<Der, GameLevelManager>>::ModifyBase;
		using Base = GameLevelManager;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, sharedState, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, acceptFriendRequest, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, accountIDForUserID, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, addDLToActive, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, banUser, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, blockUser, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, createAndGetAccountComments, gd::string, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, createAndGetCommentsFull, gd::string, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, createAndGetLevelComments, gd::string, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, createAndGetLevels, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, createAndGetMapPacks, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, createAndGetScores, gd::string, GJScoreType)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, createNewLevel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, createPageInfo, int, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, dataLoaded, DS_Dictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, deleteAccountComment, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, deleteComment, int, CommentType, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, deleteFriendRequests, int, cocos2d::CCArray*, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, deleteLevel, GJGameLevel*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, deleteLevelComment, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, deleteSentFriendRequest, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, deleteServerLevel, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, deleteUserMessages, GJUserMessage*, cocos2d::CCArray*, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, downloadLevel, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, downloadUserMessage, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, encodeDataTo, DS_Dictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, firstSetup, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, followUser, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, friendRequestFromAccountID, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, friendRequestWasRemoved, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getAccountCommentKey, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getAccountComments, int, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getAllUsedSongIDs, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getBasePostString, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getBoolForKey, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getCommentDelegate, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getCommentKey, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getCommentUpDelegate, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getCompletedLevels, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getCreatedNewLevel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getDelegate, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getDeleteCommentKey, int, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getDeleteMessageKey, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getDescKey, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getDifficultyStr, bool, bool, bool, bool, bool, bool, bool, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getDiffKey, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getDiffVal, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getDlDelegate, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getDLMessageDelegate, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getFollowedUsersDict, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getFRequestDelegate, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getFriendRequestKey, bool, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getFriendRequests, bool, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getGJUserInfo, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getIntForKey, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getLastLeaderboard, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getLastMapPackID, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getLastSearchKey, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getLastSearchKey2, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getLastSearchType, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getLeaderboardDelegate, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getLeaderboardScores, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getLengthStr, bool, bool, bool, bool, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getLenKey, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getLenVal, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getLevelComments, int, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getLevelKey, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getLevelSaveData, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getLikeAccountItemKey, LikeItemType, int, bool, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getLikeItemKey, LikeItemType, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getLikeKey, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getLocalLevel, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getLvlDelDelegate, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getMainLevel, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getMainLevels, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getMapPackKey, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getMapPacks, GJSearchObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getMessageKey, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getMessagesKey, bool, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getMListDelegate, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getMsgUDelegate, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getOnlineLevels, GJSearchObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getPageInfo, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getPostCommentKey, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getRateKey, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getRateStarsKey, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getReportKey, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getSavedLevel, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getSavedLevels, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getSavedLevelsDict, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getSavedMapPack, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getSearchScene, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getSplitIntFromKey, char const*, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getStoredLevelComments, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getStoredLevelDataDict, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getStoredOnlineLevels, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getStoredUserList, UserListType)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getStoredUserMessage, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getStoredUserMessageReply, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getTempSave, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getTimeLeft, char const*, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getUActionDelegate, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getULDelegate, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getUpdateDelegate, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getUpDelegate, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getUploadMessageKey, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getUserDelegate, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getUserInfoKey, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getUserList, UserListType)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getUserMessages, bool, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getUsers, GJSearchObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getValueDict, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, gotoLevelPage, GJGameLevel*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, handleIt, bool, gd::string, gd::string, GJHttpType)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, handleItDelayed, bool, gd::string, gd::string, GJHttpType)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, handleItND, cocos2d::CCNode*, void*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, hasDownloadedLevel, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, hasLikedAccountItem, LikeItemType, int, bool, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, hasLikedItem, LikeItemType, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, hasLikedItemFullCheck, LikeItemType, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, hasLikedLevel, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, hasRatedLevel, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, hasRatedLevelStars, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, hasReportedLevel, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, invalidateMessages, bool, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, invalidateRequests, bool, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, invalidateUserList, UserListType, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, isDLActive, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, isFollowingUser, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, isTimeValid, char const*, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, isUpdateValid, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, itemIDFromLikeKey, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, levelIDFromCommentKey, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, levelIDFromPostCommentKey, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, likeFromLikeKey, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, likeItem, LikeItemType, int, bool, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, limitSavedLevels, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, makeTimeStamp, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, markItemAsLiked, LikeItemType, int, bool, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, markLevelAsDownloaded, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, markLevelAsLiked, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, markLevelAsRated, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, markLevelAsRatedStars, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, markLevelAsReported, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, messageWasRemoved, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onAcceptFriendRequestCompleted, gd::string, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onBanUserCompleted, gd::string, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onBlockUserCompleted, gd::string, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onDeleteCommentCompleted, gd::string, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onDeleteFriendRequestCompleted, gd::string, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onDeleteServerLevelCompleted, gd::string, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onDeleteUserMessagesCompleted, gd::string, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onDownloadLevelCompleted, gd::string, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onDownloadUserMessageCompleted, gd::string, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onGetAccountCommentsCompleted, gd::string, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onGetFriendRequestsCompleted, gd::string, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onGetGJUserInfoCompleted, gd::string, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onGetLeaderboardScoresCompleted, gd::string, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onGetLevelCommentsCompleted, gd::string, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onGetLevelSaveDataCompleted, gd::string, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onGetMapPacksCompleted, gd::string, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onGetOnlineLevelsCompleted, gd::string, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onGetUserListCompleted, gd::string, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onGetUserMessagesCompleted, gd::string, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onGetUsersCompleted, gd::string, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onLikeItemCompleted, gd::string, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onProcessHttpRequestCompleted, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onRateStarsCompleted, gd::string, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onReadFriendRequestCompleted, gd::string, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onRemoveFriendCompleted, gd::string, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onReportLevelCompleted, gd::string, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onRequestUserAccessCompleted, gd::string, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onRestoreItemsCompleted, gd::string, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onSetLevelFeaturedCompleted, gd::string, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onSetLevelStarsCompleted, gd::string, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onSubmitUserInfoCompleted, gd::string, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onSuggestLevelStarsCompleted, gd::string, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onUnblockUserCompleted, gd::string, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onUpdateDescriptionCompleted, gd::string, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onUpdateLevelCompleted, gd::string, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onUpdateUserScoreCompleted, gd::string, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onUploadCommentCompleted, gd::string, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onUploadFriendRequestCompleted, gd::string, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onUploadLevelCompleted, gd::string, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onUploadUserMessageCompleted, gd::string, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, pageFromCommentKey, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, parseRestoreData, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, ProcessHttpRequest, gd::string, gd::string, gd::string, GJHttpType)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, purgeUnusedLevels, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, rateStars, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, readFriendRequest, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, removeDelimiterChars, gd::string, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, removeDLFromActive, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, removeFriend, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, removeUserFromList, int, UserListType)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, reportLevel, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, requestUserAccess, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, resetAccountComments, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, resetAllTimers, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, resetStoredUserInfo, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, resetStoredUserList, UserListType)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, resetTimerForKey, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, responseToDict, gd::string, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, restoreItems, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, saveFetchedLevels, cocos2d::CCArray*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, saveFetchedMapPacks, cocos2d::CCArray*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, saveLevel, GJGameLevel*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, saveMapPack, GJMapPack*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, setBoolForKey, bool, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, setCommentDelegate, LevelCommentDelegate*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, setCommentUpDelegate, CommentUploadDelegate*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, setCreatedNewLevel, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, setDelegate, LevelManagerDelegate*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, setDiffVal, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, setDlDelegate, LevelDownloadDelegate*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, setDLMessageDelegate, DownloadMessageDelegate*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, setFollowedUsersDict, cocos2d::CCDictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, setFRequestDelegate, FriendRequestDelegate*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, setIntForKey, int, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, setLastLeaderboard, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, setLastMapPackID, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, setLastSearchKey, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, setLastSearchKey2, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, setLastSearchType, SearchType)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, setLeaderboardDelegate, LeaderboardManagerDelegate*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, setLenVal, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, setLevelFeatured, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, setLevelStars, int, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, setLvlDelDelegate, LevelDeleteDelegate*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, setMainLevels, cocos2d::CCDictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, setMListDelegate, MessageListDelegate*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, setMsgUDelegate, UploadMessageDelegate*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, setSavedLevelsDict, cocos2d::CCDictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, setStoredLevelDataDict, cocos2d::CCDictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, setTempSave, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, setUActionDelegate, UploadActionDelegate*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, setULDelegate, UserListDelegate*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, setUpdateDelegate, LevelUpdateDelegate*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, setUpDelegate, LevelUploadDelegate*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, setUserDelegate, UserInfoDelegate*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, setValueDict, cocos2d::CCDictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, storeCommentsResult, cocos2d::CCArray*, gd::string, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, storeFriendRequest, GJFriendRequest*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, storeSearchResult, cocos2d::CCArray*, gd::string, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, storeUserInfo, GJUserScore*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, storeUserMessage, GJUserMessage*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, storeUserMessageReply, int, GJUserMessage*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, storeUserName, int, int, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, storeUserNames, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, submitUserInfo, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, suggestLevelStars, int, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, typeFromCommentKey, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, typeFromLikeKey, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, unblockUser, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, unfollowUser, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, updateDescription, int, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, updateLevel, GJGameLevel*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, updateLevelRewards, GJGameLevel*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, updateUsernames, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, updateUserScore, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, uploadAccountComment, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, uploadComment, gd::string, CommentType, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, uploadFriendRequest, int, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, uploadLevel, GJGameLevel*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, uploadLevelComment, int, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, uploadUserMessage, int, gd::string, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, userIDForAccountID, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, userInfoForAccountID, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, userNameForUserID, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, verifyLevelState, GJGameLevel*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, init, )
		}
	};
}
