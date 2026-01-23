#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GameLevelManager {
public:
    static constexpr auto CLASS_NAME = "GameLevelManager";

    /**
     * @note[short] Android
     */
    static GameLevelManager* sharedState();

    /**
     * @note[short] Android
     */
    TodoReturn acceptFriendRequest(int p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn accountIDForUserID(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn addDLToActive(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn banUser(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn blockUser(int p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn createAndGetAccountComments(gd::string p0, int p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn createAndGetCommentsFull(gd::string p0, int p1, bool p2);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn createAndGetLevelComments(gd::string p0, int p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn createAndGetLevels(gd::string p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn createAndGetMapPacks(gd::string p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn createAndGetScores(gd::string p0, GJScoreType p1);

    /**
     * @note[short] Android
     */
    TodoReturn createNewLevel();

    /**
     * @note[short] Android
     */
    TodoReturn createPageInfo(int p0, int p1, int p2);

    /**
     * @note[short] Android
     */
    TodoReturn dataLoaded(DS_Dictionary* p0);

    /**
     * @note[short] Android
     */
    TodoReturn deleteAccountComment(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn deleteComment(int p0, CommentType p1, int p2);

    /**
     * @note[short] Android
     */
    TodoReturn deleteFriendRequests(int p0, cocos2d::CCArray* p1, bool p2);

    /**
     * @note[short] Android
     */
    TodoReturn deleteLevel(GJGameLevel* p0);

    /**
     * @note[short] Android
     */
    TodoReturn deleteLevelComment(int p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn deleteSentFriendRequest(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn deleteServerLevel(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn deleteUserMessages(GJUserMessage* p0, cocos2d::CCArray* p1, bool p2);

    /**
     * @note[short] Android
     */
    TodoReturn downloadLevel(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn downloadUserMessage(int p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn encodeDataTo(DS_Dictionary* p0);

    /**
     * @note[short] Android
     */
    TodoReturn firstSetup();

    /**
     * @note[short] Android
     */
    TodoReturn followUser(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn friendRequestFromAccountID(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn friendRequestWasRemoved(int p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn getAccountCommentKey(int p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn getAccountComments(int p0, int p1, int p2);

    /**
     * @note[short] Android
     */
    TodoReturn getAllUsedSongIDs();

    /**
     * @note[short] Android
     */
    TodoReturn getBasePostString(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn getBoolForKey(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getCommentDelegate();

    /**
     * @note[short] Android
     */
    TodoReturn getCommentKey(int p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn getCommentUpDelegate();

    /**
     * @note[short] Android
     */
    TodoReturn getCompletedLevels();

    /**
     * @note[short] Android
     */
    TodoReturn getCreatedNewLevel();

    /**
     * @note[short] Android
     */
    TodoReturn getDelegate();

    /**
     * @note[short] Android
     */
    TodoReturn getDeleteCommentKey(int p0, int p1, int p2);

    /**
     * @note[short] Android
     */
    TodoReturn getDeleteMessageKey(int p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn getDescKey(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getDifficultyStr(bool p0, bool p1, bool p2, bool p3, bool p4, bool p5, bool p6, bool p7);

    /**
     * @note[short] Android
     */
    TodoReturn getDiffKey(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getDiffVal(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getDlDelegate();

    /**
     * @note[short] Android
     */
    TodoReturn getDLMessageDelegate();

    /**
     * @note[short] Android
     */
    TodoReturn getFollowedUsersDict();

    /**
     * @note[short] Android
     */
    TodoReturn getFRequestDelegate();

    /**
     * @note[short] Android
     */
    TodoReturn getFriendRequestKey(bool p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn getFriendRequests(bool p0, int p1, int p2);

    /**
     * @note[short] Android
     */
    TodoReturn getGJUserInfo(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getIntForKey(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getLastLeaderboard();

    /**
     * @note[short] Android
     */
    TodoReturn getLastMapPackID();

    /**
     * @note[short] Android
     */
    TodoReturn getLastSearchKey();

    /**
     * @note[short] Android
     */
    TodoReturn getLastSearchKey2();

    /**
     * @note[short] Android
     */
    TodoReturn getLastSearchType();

    /**
     * @note[short] Android
     */
    TodoReturn getLeaderboardDelegate();

    /**
     * @note[short] Android
     */
    TodoReturn getLeaderboardScores(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getLengthStr(bool p0, bool p1, bool p2, bool p3, bool p4);

    /**
     * @note[short] Android
     */
    TodoReturn getLenKey(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getLenVal(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getLevelComments(int p0, int p1, int p2);

    /**
     * @note[short] Android
     */
    TodoReturn getLevelKey(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getLevelSaveData();

    /**
     * @note[short] Android
     */
    TodoReturn getLikeAccountItemKey(LikeItemType p0, int p1, bool p2, int p3);

    /**
     * @note[short] Android
     */
    TodoReturn getLikeItemKey(LikeItemType p0, int p1, bool p2);

    /**
     * @note[short] Android
     */
    TodoReturn getLikeKey(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getLocalLevel(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getLvlDelDelegate();

    /**
     * @note[short] Android
     */
    TodoReturn getMainLevel(int p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn getMainLevels();

    /**
     * @note[short] Android
     */
    TodoReturn getMapPackKey(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getMapPacks(GJSearchObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getMessageKey(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getMessagesKey(bool p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn getMListDelegate();

    /**
     * @note[short] Android
     */
    TodoReturn getMsgUDelegate();

    /**
     * @note[short] Android
     */
    TodoReturn getOnlineLevels(GJSearchObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getPageInfo(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getPostCommentKey(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getRateKey(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getRateStarsKey(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getReportKey(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getSavedLevel(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getSavedLevels();

    /**
     * @note[short] Android
     */
    TodoReturn getSavedLevelsDict();

    /**
     * @note[short] Android
     */
    TodoReturn getSavedMapPack(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getSearchScene(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getSplitIntFromKey(char const* p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn getStoredLevelComments(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getStoredLevelDataDict();

    /**
     * @note[short] Android
     */
    TodoReturn getStoredOnlineLevels(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getStoredUserList(UserListType p0);

    /**
     * @note[short] Android
     */
    TodoReturn getStoredUserMessage(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getStoredUserMessageReply(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getTempSave();

    /**
     * @note[short] Android
     */
    TodoReturn getTimeLeft(char const* p0, float p1);

    /**
     * @note[short] Android
     */
    TodoReturn getUActionDelegate();

    /**
     * @note[short] Android
     */
    TodoReturn getULDelegate();

    /**
     * @note[short] Android
     */
    TodoReturn getUpdateDelegate();

    /**
     * @note[short] Android
     */
    TodoReturn getUpDelegate();

    /**
     * @note[short] Android
     */
    TodoReturn getUploadMessageKey(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getUserDelegate();

    /**
     * @note[short] Android
     */
    TodoReturn getUserInfoKey(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getUserList(UserListType p0);

    /**
     * @note[short] Android
     */
    TodoReturn getUserMessages(bool p0, int p1, int p2);

    /**
     * @note[short] Android
     */
    TodoReturn getUsers(GJSearchObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getValueDict();

    /**
     * @note[short] Android
     */
    TodoReturn gotoLevelPage(GJGameLevel* p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn handleIt(bool p0, gd::string p1, gd::string p2, GJHttpType p3);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn handleItDelayed(bool p0, gd::string p1, gd::string p2, GJHttpType p3);

    /**
     * @note[short] Android
     */
    TodoReturn handleItND(cocos2d::CCNode* p0, void* p1);

    /**
     * @note[short] Android
     */
    TodoReturn hasDownloadedLevel(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn hasLikedAccountItem(LikeItemType p0, int p1, bool p2, int p3);

    /**
     * @note[short] Android
     */
    TodoReturn hasLikedItem(LikeItemType p0, int p1, bool p2);

    /**
     * @note[short] Android
     */
    TodoReturn hasLikedItemFullCheck(LikeItemType p0, int p1, int p2);

    /**
     * @note[short] Android
     */
    TodoReturn hasLikedLevel(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn hasRatedLevel(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn hasRatedLevelStars(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn hasReportedLevel(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn invalidateMessages(bool p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn invalidateRequests(bool p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn invalidateUserList(UserListType p0, bool p1);

    /**
     * @note[short] Android
     */
    bool isDLActive(char const* p0);

    /**
     * @note[short] Android
     */
    bool isFollowingUser(int p0);

    /**
     * @note[short] Android
     */
    bool isTimeValid(char const* p0, float p1);

    /**
     * @note[short] Android
     */
    bool isUpdateValid(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn itemIDFromLikeKey(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn levelIDFromCommentKey(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn levelIDFromPostCommentKey(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn likeFromLikeKey(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn likeItem(LikeItemType p0, int p1, bool p2, int p3);

    /**
     * @note[short] Android
     */
    TodoReturn limitSavedLevels();

    /**
     * @note[short] Android
     */
    TodoReturn makeTimeStamp(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn markItemAsLiked(LikeItemType p0, int p1, bool p2, int p3);

    /**
     * @note[short] Android
     */
    TodoReturn markLevelAsDownloaded(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn markLevelAsLiked(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn markLevelAsRated(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn markLevelAsRatedStars(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn markLevelAsReported(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn messageWasRemoved(int p0, bool p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn onAcceptFriendRequestCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn onBanUserCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn onBlockUserCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn onDeleteCommentCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn onDeleteFriendRequestCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn onDeleteServerLevelCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn onDeleteUserMessagesCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn onDownloadLevelCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn onDownloadUserMessageCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn onGetAccountCommentsCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn onGetFriendRequestsCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn onGetGJUserInfoCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn onGetLeaderboardScoresCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn onGetLevelCommentsCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn onGetLevelSaveDataCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn onGetMapPacksCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn onGetOnlineLevelsCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn onGetUserListCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn onGetUserMessagesCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn onGetUsersCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn onLikeItemCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn onRateStarsCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn onReadFriendRequestCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn onRemoveFriendCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn onReportLevelCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn onRequestUserAccessCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn onRestoreItemsCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn onSetLevelFeaturedCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn onSetLevelStarsCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn onSubmitUserInfoCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn onSuggestLevelStarsCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn onUnblockUserCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn onUpdateDescriptionCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn onUpdateLevelCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn onUpdateUserScoreCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn onUploadCommentCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn onUploadFriendRequestCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn onUploadLevelCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn onUploadUserMessageCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn pageFromCommentKey(char const* p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn parseRestoreData(gd::string p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn ProcessHttpRequest(gd::string p0, gd::string p1, gd::string p2, GJHttpType p3);

    /**
     * @note[short] Android
     */
    TodoReturn purgeUnusedLevels();

    /**
     * @note[short] Android
     */
    TodoReturn rateStars(int p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn readFriendRequest(int p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn removeDelimiterChars(gd::string p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn removeDLFromActive(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn removeFriend(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn removeUserFromList(int p0, UserListType p1);

    /**
     * @note[short] Android
     */
    TodoReturn reportLevel(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn requestUserAccess();

    /**
     * @note[short] Android
     */
    TodoReturn resetAccountComments(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn resetAllTimers();

    /**
     * @note[short] Android
     */
    TodoReturn resetStoredUserInfo(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn resetStoredUserList(UserListType p0);

    /**
     * @note[short] Android
     */
    TodoReturn resetTimerForKey(char const* p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn responseToDict(gd::string p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn restoreItems();

    /**
     * @note[short] Android
     */
    TodoReturn saveFetchedLevels(cocos2d::CCArray* p0);

    /**
     * @note[short] Android
     */
    TodoReturn saveFetchedMapPacks(cocos2d::CCArray* p0);

    /**
     * @note[short] Android
     */
    TodoReturn saveLevel(GJGameLevel* p0);

    /**
     * @note[short] Android
     */
    TodoReturn saveMapPack(GJMapPack* p0);

    /**
     * @note[short] Android
     */
    void setBoolForKey(bool p0, char const* p1);

    /**
     * @note[short] Android
     */
    void setCommentDelegate(LevelCommentDelegate* p0);

    /**
     * @note[short] Android
     */
    void setCommentUpDelegate(CommentUploadDelegate* p0);

    /**
     * @note[short] Android
     */
    void setCreatedNewLevel(bool p0);

    /**
     * @note[short] Android
     */
    void setDelegate(LevelManagerDelegate* p0);

    /**
     * @note[short] Android
     */
    void setDiffVal(int p0, bool p1);

    /**
     * @note[short] Android
     */
    void setDlDelegate(LevelDownloadDelegate* p0);

    /**
     * @note[short] Android
     */
    void setDLMessageDelegate(DownloadMessageDelegate* p0);

    /**
     * @note[short] Android
     */
    void setFollowedUsersDict(cocos2d::CCDictionary* p0);

    /**
     * @note[short] Android
     */
    void setFRequestDelegate(FriendRequestDelegate* p0);

    /**
     * @note[short] Android
     */
    void setIntForKey(int p0, char const* p1);

    /**
     * @note[short] Android
     */
    void setLastLeaderboard(int p0);

    /**
     * @note[short] Android
     */
    void setLastMapPackID(int p0);

    /**
     * @note[short] Android: Rebinded
     */
    void setLastSearchKey(gd::string p0);

    /**
     * @note[short] Android: Rebinded
     */
    void setLastSearchKey2(gd::string p0);

    /**
     * @note[short] Android
     */
    void setLastSearchType(SearchType p0);

    /**
     * @note[short] Android
     */
    void setLeaderboardDelegate(LeaderboardManagerDelegate* p0);

    /**
     * @note[short] Android
     */
    void setLenVal(int p0, bool p1);

    /**
     * @note[short] Android
     */
    void setLevelFeatured(int p0, int p1);

    /**
     * @note[short] Android
     */
    void setLevelStars(int p0, int p1, bool p2);

    /**
     * @note[short] Android
     */
    void setLvlDelDelegate(LevelDeleteDelegate* p0);

    /**
     * @note[short] Android
     */
    void setMainLevels(cocos2d::CCDictionary* p0);

    /**
     * @note[short] Android
     */
    void setMListDelegate(MessageListDelegate* p0);

    /**
     * @note[short] Android
     */
    void setMsgUDelegate(UploadMessageDelegate* p0);

    /**
     * @note[short] Android
     */
    void setSavedLevelsDict(cocos2d::CCDictionary* p0);

    /**
     * @note[short] Android
     */
    void setStoredLevelDataDict(cocos2d::CCDictionary* p0);

    /**
     * @note[short] Android: Rebinded
     */
    void setTempSave(gd::string p0);

    /**
     * @note[short] Android
     */
    void setUActionDelegate(UploadActionDelegate* p0);

    /**
     * @note[short] Android
     */
    void setULDelegate(UserListDelegate* p0);

    /**
     * @note[short] Android
     */
    void setUpdateDelegate(LevelUpdateDelegate* p0);

    /**
     * @note[short] Android
     */
    void setUpDelegate(LevelUploadDelegate* p0);

    /**
     * @note[short] Android
     */
    void setUserDelegate(UserInfoDelegate* p0);

    /**
     * @note[short] Android
     */
    void setValueDict(cocos2d::CCDictionary* p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn storeCommentsResult(cocos2d::CCArray* p0, gd::string p1, char const* p2);

    /**
     * @note[short] Android
     */
    TodoReturn storeFriendRequest(GJFriendRequest* p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn storeSearchResult(cocos2d::CCArray* p0, gd::string p1, char const* p2);

    /**
     * @note[short] Android
     */
    TodoReturn storeUserInfo(GJUserScore* p0);

    /**
     * @note[short] Android
     */
    TodoReturn storeUserMessage(GJUserMessage* p0);

    /**
     * @note[short] Android
     */
    TodoReturn storeUserMessageReply(int p0, GJUserMessage* p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn storeUserName(int p0, int p1, gd::string p2);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn storeUserNames(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn submitUserInfo();

    /**
     * @note[short] Android
     */
    TodoReturn suggestLevelStars(int p0, int p1, bool p2);

    /**
     * @note[short] Android
     */
    TodoReturn typeFromCommentKey(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn typeFromLikeKey(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn unblockUser(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn unfollowUser(int p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn updateDescription(int p0, gd::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn updateLevel(GJGameLevel* p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateLevelRewards(GJGameLevel* p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateUsernames();

    /**
     * @note[short] Android
     */
    TodoReturn updateUserScore();

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn uploadAccountComment(gd::string p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn uploadComment(gd::string p0, CommentType p1, int p2);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn uploadFriendRequest(int p0, gd::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn uploadLevel(GJGameLevel* p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn uploadLevelComment(int p0, gd::string p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn uploadUserMessage(int p0, gd::string p1, gd::string p2);

    /**
     * @note[short] Android
     */
    TodoReturn userIDForAccountID(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn userInfoForAccountID(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn userNameForUserID(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn verifyLevelState(GJGameLevel* p0);

    /**
     * @note[short] Android
     */
    virtual bool init();
};
