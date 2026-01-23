#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJUserScore.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getAccIcon
		#define GEODE_STATICS_getAccIcon
		GEODE_AS_STATIC_FUNCTION(getAccIcon) 
	#endif

	#ifndef GEODE_STATICS_getAccountID
		#define GEODE_STATICS_getAccountID
		GEODE_AS_STATIC_FUNCTION(getAccountID) 
	#endif

	#ifndef GEODE_STATICS_getBall
		#define GEODE_STATICS_getBall
		GEODE_AS_STATIC_FUNCTION(getBall) 
	#endif

	#ifndef GEODE_STATICS_getBird
		#define GEODE_STATICS_getBird
		GEODE_AS_STATIC_FUNCTION(getBird) 
	#endif

	#ifndef GEODE_STATICS_getCoins
		#define GEODE_STATICS_getCoins
		GEODE_AS_STATIC_FUNCTION(getCoins) 
	#endif

	#ifndef GEODE_STATICS_getColor1
		#define GEODE_STATICS_getColor1
		GEODE_AS_STATIC_FUNCTION(getColor1) 
	#endif

	#ifndef GEODE_STATICS_getColor2
		#define GEODE_STATICS_getColor2
		GEODE_AS_STATIC_FUNCTION(getColor2) 
	#endif

	#ifndef GEODE_STATICS_getDart
		#define GEODE_STATICS_getDart
		GEODE_AS_STATIC_FUNCTION(getDart) 
	#endif

	#ifndef GEODE_STATICS_getDateString
		#define GEODE_STATICS_getDateString
		GEODE_AS_STATIC_FUNCTION(getDateString) 
	#endif

	#ifndef GEODE_STATICS_getDemons
		#define GEODE_STATICS_getDemons
		GEODE_AS_STATIC_FUNCTION(getDemons) 
	#endif

	#ifndef GEODE_STATICS_getFriendReqSetting
		#define GEODE_STATICS_getFriendReqSetting
		GEODE_AS_STATIC_FUNCTION(getFriendReqSetting) 
	#endif

	#ifndef GEODE_STATICS_getFriendStatus
		#define GEODE_STATICS_getFriendStatus
		GEODE_AS_STATIC_FUNCTION(getFriendStatus) 
	#endif

	#ifndef GEODE_STATICS_getGlobalRank
		#define GEODE_STATICS_getGlobalRank
		GEODE_AS_STATIC_FUNCTION(getGlobalRank) 
	#endif

	#ifndef GEODE_STATICS_getGlow
		#define GEODE_STATICS_getGlow
		GEODE_AS_STATIC_FUNCTION(getGlow) 
	#endif

	#ifndef GEODE_STATICS_getIcon
		#define GEODE_STATICS_getIcon
		GEODE_AS_STATIC_FUNCTION(getIcon) 
	#endif

	#ifndef GEODE_STATICS_getIconType
		#define GEODE_STATICS_getIconType
		GEODE_AS_STATIC_FUNCTION(getIconType) 
	#endif

	#ifndef GEODE_STATICS_getIsNewRelation
		#define GEODE_STATICS_getIsNewRelation
		GEODE_AS_STATIC_FUNCTION(getIsNewRelation) 
	#endif

	#ifndef GEODE_STATICS_getIsToggled
		#define GEODE_STATICS_getIsToggled
		GEODE_AS_STATIC_FUNCTION(getIsToggled) 
	#endif

	#ifndef GEODE_STATICS_getLevels
		#define GEODE_STATICS_getLevels
		GEODE_AS_STATIC_FUNCTION(getLevels) 
	#endif

	#ifndef GEODE_STATICS_getMessageSetting
		#define GEODE_STATICS_getMessageSetting
		GEODE_AS_STATIC_FUNCTION(getMessageSetting) 
	#endif

	#ifndef GEODE_STATICS_getNewFriends
		#define GEODE_STATICS_getNewFriends
		GEODE_AS_STATIC_FUNCTION(getNewFriends) 
	#endif

	#ifndef GEODE_STATICS_getNewMessages
		#define GEODE_STATICS_getNewMessages
		GEODE_AS_STATIC_FUNCTION(getNewMessages) 
	#endif

	#ifndef GEODE_STATICS_getNewRequests
		#define GEODE_STATICS_getNewRequests
		GEODE_AS_STATIC_FUNCTION(getNewRequests) 
	#endif

	#ifndef GEODE_STATICS_getRank
		#define GEODE_STATICS_getRank
		GEODE_AS_STATIC_FUNCTION(getRank) 
	#endif

	#ifndef GEODE_STATICS_getRobot
		#define GEODE_STATICS_getRobot
		GEODE_AS_STATIC_FUNCTION(getRobot) 
	#endif

	#ifndef GEODE_STATICS_getScoreType
		#define GEODE_STATICS_getScoreType
		GEODE_AS_STATIC_FUNCTION(getScoreType) 
	#endif

	#ifndef GEODE_STATICS_getShip
		#define GEODE_STATICS_getShip
		GEODE_AS_STATIC_FUNCTION(getShip) 
	#endif

	#ifndef GEODE_STATICS_getSpecial
		#define GEODE_STATICS_getSpecial
		GEODE_AS_STATIC_FUNCTION(getSpecial) 
	#endif

	#ifndef GEODE_STATICS_getStars
		#define GEODE_STATICS_getStars
		GEODE_AS_STATIC_FUNCTION(getStars) 
	#endif

	#ifndef GEODE_STATICS_getStreak
		#define GEODE_STATICS_getStreak
		GEODE_AS_STATIC_FUNCTION(getStreak) 
	#endif

	#ifndef GEODE_STATICS_getUserCoins
		#define GEODE_STATICS_getUserCoins
		GEODE_AS_STATIC_FUNCTION(getUserCoins) 
	#endif

	#ifndef GEODE_STATICS_getUserID
		#define GEODE_STATICS_getUserID
		GEODE_AS_STATIC_FUNCTION(getUserID) 
	#endif

	#ifndef GEODE_STATICS_getUserName
		#define GEODE_STATICS_getUserName
		GEODE_AS_STATIC_FUNCTION(getUserName) 
	#endif

	#ifndef GEODE_STATICS_getUserUDID
		#define GEODE_STATICS_getUserUDID
		GEODE_AS_STATIC_FUNCTION(getUserUDID) 
	#endif

	#ifndef GEODE_STATICS_getYtUsername
		#define GEODE_STATICS_getYtUsername
		GEODE_AS_STATIC_FUNCTION(getYtUsername) 
	#endif

	#ifndef GEODE_STATICS_isCurrentUser
		#define GEODE_STATICS_isCurrentUser
		GEODE_AS_STATIC_FUNCTION(isCurrentUser) 
	#endif

	#ifndef GEODE_STATICS_mergeWithScore
		#define GEODE_STATICS_mergeWithScore
		GEODE_AS_STATIC_FUNCTION(mergeWithScore) 
	#endif

	#ifndef GEODE_STATICS_setAccIcon
		#define GEODE_STATICS_setAccIcon
		GEODE_AS_STATIC_FUNCTION(setAccIcon) 
	#endif

	#ifndef GEODE_STATICS_setAccountID
		#define GEODE_STATICS_setAccountID
		GEODE_AS_STATIC_FUNCTION(setAccountID) 
	#endif

	#ifndef GEODE_STATICS_setBall
		#define GEODE_STATICS_setBall
		GEODE_AS_STATIC_FUNCTION(setBall) 
	#endif

	#ifndef GEODE_STATICS_setBird
		#define GEODE_STATICS_setBird
		GEODE_AS_STATIC_FUNCTION(setBird) 
	#endif

	#ifndef GEODE_STATICS_setCoins
		#define GEODE_STATICS_setCoins
		GEODE_AS_STATIC_FUNCTION(setCoins) 
	#endif

	#ifndef GEODE_STATICS_setColor1
		#define GEODE_STATICS_setColor1
		GEODE_AS_STATIC_FUNCTION(setColor1) 
	#endif

	#ifndef GEODE_STATICS_setColor2
		#define GEODE_STATICS_setColor2
		GEODE_AS_STATIC_FUNCTION(setColor2) 
	#endif

	#ifndef GEODE_STATICS_setDart
		#define GEODE_STATICS_setDart
		GEODE_AS_STATIC_FUNCTION(setDart) 
	#endif

	#ifndef GEODE_STATICS_setDateString
		#define GEODE_STATICS_setDateString
		GEODE_AS_STATIC_FUNCTION(setDateString) 
	#endif

	#ifndef GEODE_STATICS_setDemons
		#define GEODE_STATICS_setDemons
		GEODE_AS_STATIC_FUNCTION(setDemons) 
	#endif

	#ifndef GEODE_STATICS_setFriendReqSetting
		#define GEODE_STATICS_setFriendReqSetting
		GEODE_AS_STATIC_FUNCTION(setFriendReqSetting) 
	#endif

	#ifndef GEODE_STATICS_setFriendStatus
		#define GEODE_STATICS_setFriendStatus
		GEODE_AS_STATIC_FUNCTION(setFriendStatus) 
	#endif

	#ifndef GEODE_STATICS_setGlobalRank
		#define GEODE_STATICS_setGlobalRank
		GEODE_AS_STATIC_FUNCTION(setGlobalRank) 
	#endif

	#ifndef GEODE_STATICS_setGlow
		#define GEODE_STATICS_setGlow
		GEODE_AS_STATIC_FUNCTION(setGlow) 
	#endif

	#ifndef GEODE_STATICS_setIcon
		#define GEODE_STATICS_setIcon
		GEODE_AS_STATIC_FUNCTION(setIcon) 
	#endif

	#ifndef GEODE_STATICS_setIconType
		#define GEODE_STATICS_setIconType
		GEODE_AS_STATIC_FUNCTION(setIconType) 
	#endif

	#ifndef GEODE_STATICS_setIsNewRelation
		#define GEODE_STATICS_setIsNewRelation
		GEODE_AS_STATIC_FUNCTION(setIsNewRelation) 
	#endif

	#ifndef GEODE_STATICS_setIsToggled
		#define GEODE_STATICS_setIsToggled
		GEODE_AS_STATIC_FUNCTION(setIsToggled) 
	#endif

	#ifndef GEODE_STATICS_setLevels
		#define GEODE_STATICS_setLevels
		GEODE_AS_STATIC_FUNCTION(setLevels) 
	#endif

	#ifndef GEODE_STATICS_setMessageSetting
		#define GEODE_STATICS_setMessageSetting
		GEODE_AS_STATIC_FUNCTION(setMessageSetting) 
	#endif

	#ifndef GEODE_STATICS_setNewFriends
		#define GEODE_STATICS_setNewFriends
		GEODE_AS_STATIC_FUNCTION(setNewFriends) 
	#endif

	#ifndef GEODE_STATICS_setNewMessages
		#define GEODE_STATICS_setNewMessages
		GEODE_AS_STATIC_FUNCTION(setNewMessages) 
	#endif

	#ifndef GEODE_STATICS_setNewRequests
		#define GEODE_STATICS_setNewRequests
		GEODE_AS_STATIC_FUNCTION(setNewRequests) 
	#endif

	#ifndef GEODE_STATICS_setRank
		#define GEODE_STATICS_setRank
		GEODE_AS_STATIC_FUNCTION(setRank) 
	#endif

	#ifndef GEODE_STATICS_setRobot
		#define GEODE_STATICS_setRobot
		GEODE_AS_STATIC_FUNCTION(setRobot) 
	#endif

	#ifndef GEODE_STATICS_setScoreType
		#define GEODE_STATICS_setScoreType
		GEODE_AS_STATIC_FUNCTION(setScoreType) 
	#endif

	#ifndef GEODE_STATICS_setShip
		#define GEODE_STATICS_setShip
		GEODE_AS_STATIC_FUNCTION(setShip) 
	#endif

	#ifndef GEODE_STATICS_setSpecial
		#define GEODE_STATICS_setSpecial
		GEODE_AS_STATIC_FUNCTION(setSpecial) 
	#endif

	#ifndef GEODE_STATICS_setStars
		#define GEODE_STATICS_setStars
		GEODE_AS_STATIC_FUNCTION(setStars) 
	#endif

	#ifndef GEODE_STATICS_setStreak
		#define GEODE_STATICS_setStreak
		GEODE_AS_STATIC_FUNCTION(setStreak) 
	#endif

	#ifndef GEODE_STATICS_setUserCoins
		#define GEODE_STATICS_setUserCoins
		GEODE_AS_STATIC_FUNCTION(setUserCoins) 
	#endif

	#ifndef GEODE_STATICS_setUserID
		#define GEODE_STATICS_setUserID
		GEODE_AS_STATIC_FUNCTION(setUserID) 
	#endif

	#ifndef GEODE_STATICS_setUserName
		#define GEODE_STATICS_setUserName
		GEODE_AS_STATIC_FUNCTION(setUserName) 
	#endif

	#ifndef GEODE_STATICS_setUserUDID
		#define GEODE_STATICS_setUserUDID
		GEODE_AS_STATIC_FUNCTION(setUserUDID) 
	#endif

	#ifndef GEODE_STATICS_setYtUsername
		#define GEODE_STATICS_setYtUsername
		GEODE_AS_STATIC_FUNCTION(setYtUsername) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAccIcon
		#define GEODE_CONCEPT_CHECK_getAccIcon
		GEODE_CONCEPT_FUNCTION_CHECK(getAccIcon) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAccountID
		#define GEODE_CONCEPT_CHECK_getAccountID
		GEODE_CONCEPT_FUNCTION_CHECK(getAccountID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBall
		#define GEODE_CONCEPT_CHECK_getBall
		GEODE_CONCEPT_FUNCTION_CHECK(getBall) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBird
		#define GEODE_CONCEPT_CHECK_getBird
		GEODE_CONCEPT_FUNCTION_CHECK(getBird) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCoins
		#define GEODE_CONCEPT_CHECK_getCoins
		GEODE_CONCEPT_FUNCTION_CHECK(getCoins) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getColor1
		#define GEODE_CONCEPT_CHECK_getColor1
		GEODE_CONCEPT_FUNCTION_CHECK(getColor1) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getColor2
		#define GEODE_CONCEPT_CHECK_getColor2
		GEODE_CONCEPT_FUNCTION_CHECK(getColor2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDart
		#define GEODE_CONCEPT_CHECK_getDart
		GEODE_CONCEPT_FUNCTION_CHECK(getDart) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDateString
		#define GEODE_CONCEPT_CHECK_getDateString
		GEODE_CONCEPT_FUNCTION_CHECK(getDateString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDemons
		#define GEODE_CONCEPT_CHECK_getDemons
		GEODE_CONCEPT_FUNCTION_CHECK(getDemons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFriendReqSetting
		#define GEODE_CONCEPT_CHECK_getFriendReqSetting
		GEODE_CONCEPT_FUNCTION_CHECK(getFriendReqSetting) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFriendStatus
		#define GEODE_CONCEPT_CHECK_getFriendStatus
		GEODE_CONCEPT_FUNCTION_CHECK(getFriendStatus) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGlobalRank
		#define GEODE_CONCEPT_CHECK_getGlobalRank
		GEODE_CONCEPT_FUNCTION_CHECK(getGlobalRank) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGlow
		#define GEODE_CONCEPT_CHECK_getGlow
		GEODE_CONCEPT_FUNCTION_CHECK(getGlow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIcon
		#define GEODE_CONCEPT_CHECK_getIcon
		GEODE_CONCEPT_FUNCTION_CHECK(getIcon) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIconType
		#define GEODE_CONCEPT_CHECK_getIconType
		GEODE_CONCEPT_FUNCTION_CHECK(getIconType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIsNewRelation
		#define GEODE_CONCEPT_CHECK_getIsNewRelation
		GEODE_CONCEPT_FUNCTION_CHECK(getIsNewRelation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIsToggled
		#define GEODE_CONCEPT_CHECK_getIsToggled
		GEODE_CONCEPT_FUNCTION_CHECK(getIsToggled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLevels
		#define GEODE_CONCEPT_CHECK_getLevels
		GEODE_CONCEPT_FUNCTION_CHECK(getLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMessageSetting
		#define GEODE_CONCEPT_CHECK_getMessageSetting
		GEODE_CONCEPT_FUNCTION_CHECK(getMessageSetting) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNewFriends
		#define GEODE_CONCEPT_CHECK_getNewFriends
		GEODE_CONCEPT_FUNCTION_CHECK(getNewFriends) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNewMessages
		#define GEODE_CONCEPT_CHECK_getNewMessages
		GEODE_CONCEPT_FUNCTION_CHECK(getNewMessages) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNewRequests
		#define GEODE_CONCEPT_CHECK_getNewRequests
		GEODE_CONCEPT_FUNCTION_CHECK(getNewRequests) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRank
		#define GEODE_CONCEPT_CHECK_getRank
		GEODE_CONCEPT_FUNCTION_CHECK(getRank) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRobot
		#define GEODE_CONCEPT_CHECK_getRobot
		GEODE_CONCEPT_FUNCTION_CHECK(getRobot) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getScoreType
		#define GEODE_CONCEPT_CHECK_getScoreType
		GEODE_CONCEPT_FUNCTION_CHECK(getScoreType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getShip
		#define GEODE_CONCEPT_CHECK_getShip
		GEODE_CONCEPT_FUNCTION_CHECK(getShip) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSpecial
		#define GEODE_CONCEPT_CHECK_getSpecial
		GEODE_CONCEPT_FUNCTION_CHECK(getSpecial) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStars
		#define GEODE_CONCEPT_CHECK_getStars
		GEODE_CONCEPT_FUNCTION_CHECK(getStars) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStreak
		#define GEODE_CONCEPT_CHECK_getStreak
		GEODE_CONCEPT_FUNCTION_CHECK(getStreak) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUserCoins
		#define GEODE_CONCEPT_CHECK_getUserCoins
		GEODE_CONCEPT_FUNCTION_CHECK(getUserCoins) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUserID
		#define GEODE_CONCEPT_CHECK_getUserID
		GEODE_CONCEPT_FUNCTION_CHECK(getUserID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUserName
		#define GEODE_CONCEPT_CHECK_getUserName
		GEODE_CONCEPT_FUNCTION_CHECK(getUserName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUserUDID
		#define GEODE_CONCEPT_CHECK_getUserUDID
		GEODE_CONCEPT_FUNCTION_CHECK(getUserUDID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getYtUsername
		#define GEODE_CONCEPT_CHECK_getYtUsername
		GEODE_CONCEPT_FUNCTION_CHECK(getYtUsername) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isCurrentUser
		#define GEODE_CONCEPT_CHECK_isCurrentUser
		GEODE_CONCEPT_FUNCTION_CHECK(isCurrentUser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_mergeWithScore
		#define GEODE_CONCEPT_CHECK_mergeWithScore
		GEODE_CONCEPT_FUNCTION_CHECK(mergeWithScore) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setAccIcon
		#define GEODE_CONCEPT_CHECK_setAccIcon
		GEODE_CONCEPT_FUNCTION_CHECK(setAccIcon) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setAccountID
		#define GEODE_CONCEPT_CHECK_setAccountID
		GEODE_CONCEPT_FUNCTION_CHECK(setAccountID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setBall
		#define GEODE_CONCEPT_CHECK_setBall
		GEODE_CONCEPT_FUNCTION_CHECK(setBall) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setBird
		#define GEODE_CONCEPT_CHECK_setBird
		GEODE_CONCEPT_FUNCTION_CHECK(setBird) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCoins
		#define GEODE_CONCEPT_CHECK_setCoins
		GEODE_CONCEPT_FUNCTION_CHECK(setCoins) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setColor1
		#define GEODE_CONCEPT_CHECK_setColor1
		GEODE_CONCEPT_FUNCTION_CHECK(setColor1) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setColor2
		#define GEODE_CONCEPT_CHECK_setColor2
		GEODE_CONCEPT_FUNCTION_CHECK(setColor2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDart
		#define GEODE_CONCEPT_CHECK_setDart
		GEODE_CONCEPT_FUNCTION_CHECK(setDart) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDateString
		#define GEODE_CONCEPT_CHECK_setDateString
		GEODE_CONCEPT_FUNCTION_CHECK(setDateString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDemons
		#define GEODE_CONCEPT_CHECK_setDemons
		GEODE_CONCEPT_FUNCTION_CHECK(setDemons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFriendReqSetting
		#define GEODE_CONCEPT_CHECK_setFriendReqSetting
		GEODE_CONCEPT_FUNCTION_CHECK(setFriendReqSetting) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFriendStatus
		#define GEODE_CONCEPT_CHECK_setFriendStatus
		GEODE_CONCEPT_FUNCTION_CHECK(setFriendStatus) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setGlobalRank
		#define GEODE_CONCEPT_CHECK_setGlobalRank
		GEODE_CONCEPT_FUNCTION_CHECK(setGlobalRank) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setGlow
		#define GEODE_CONCEPT_CHECK_setGlow
		GEODE_CONCEPT_FUNCTION_CHECK(setGlow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIcon
		#define GEODE_CONCEPT_CHECK_setIcon
		GEODE_CONCEPT_FUNCTION_CHECK(setIcon) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIconType
		#define GEODE_CONCEPT_CHECK_setIconType
		GEODE_CONCEPT_FUNCTION_CHECK(setIconType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIsNewRelation
		#define GEODE_CONCEPT_CHECK_setIsNewRelation
		GEODE_CONCEPT_FUNCTION_CHECK(setIsNewRelation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIsToggled
		#define GEODE_CONCEPT_CHECK_setIsToggled
		GEODE_CONCEPT_FUNCTION_CHECK(setIsToggled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLevels
		#define GEODE_CONCEPT_CHECK_setLevels
		GEODE_CONCEPT_FUNCTION_CHECK(setLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMessageSetting
		#define GEODE_CONCEPT_CHECK_setMessageSetting
		GEODE_CONCEPT_FUNCTION_CHECK(setMessageSetting) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setNewFriends
		#define GEODE_CONCEPT_CHECK_setNewFriends
		GEODE_CONCEPT_FUNCTION_CHECK(setNewFriends) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setNewMessages
		#define GEODE_CONCEPT_CHECK_setNewMessages
		GEODE_CONCEPT_FUNCTION_CHECK(setNewMessages) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setNewRequests
		#define GEODE_CONCEPT_CHECK_setNewRequests
		GEODE_CONCEPT_FUNCTION_CHECK(setNewRequests) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRank
		#define GEODE_CONCEPT_CHECK_setRank
		GEODE_CONCEPT_FUNCTION_CHECK(setRank) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRobot
		#define GEODE_CONCEPT_CHECK_setRobot
		GEODE_CONCEPT_FUNCTION_CHECK(setRobot) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setScoreType
		#define GEODE_CONCEPT_CHECK_setScoreType
		GEODE_CONCEPT_FUNCTION_CHECK(setScoreType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setShip
		#define GEODE_CONCEPT_CHECK_setShip
		GEODE_CONCEPT_FUNCTION_CHECK(setShip) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSpecial
		#define GEODE_CONCEPT_CHECK_setSpecial
		GEODE_CONCEPT_FUNCTION_CHECK(setSpecial) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStars
		#define GEODE_CONCEPT_CHECK_setStars
		GEODE_CONCEPT_FUNCTION_CHECK(setStars) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStreak
		#define GEODE_CONCEPT_CHECK_setStreak
		GEODE_CONCEPT_FUNCTION_CHECK(setStreak) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUserCoins
		#define GEODE_CONCEPT_CHECK_setUserCoins
		GEODE_CONCEPT_FUNCTION_CHECK(setUserCoins) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUserID
		#define GEODE_CONCEPT_CHECK_setUserID
		GEODE_CONCEPT_FUNCTION_CHECK(setUserID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUserName
		#define GEODE_CONCEPT_CHECK_setUserName
		GEODE_CONCEPT_FUNCTION_CHECK(setUserName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUserUDID
		#define GEODE_CONCEPT_CHECK_setUserUDID
		GEODE_CONCEPT_FUNCTION_CHECK(setUserUDID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setYtUsername
		#define GEODE_CONCEPT_CHECK_setYtUsername
		GEODE_CONCEPT_FUNCTION_CHECK(setYtUsername) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJUserScore> : ModifyBase<ModifyDerive<Der, GJUserScore>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJUserScore>>;
		using ModifyBase<ModifyDerive<Der, GJUserScore>>::ModifyBase;
		using Base = GJUserScore;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, create, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, create, cocos2d::CCDictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, getAccIcon, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, getAccountID, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, getBall, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, getBird, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, getCoins, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, getColor1, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, getColor2, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, getDart, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, getDateString, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, getDemons, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, getFriendReqSetting, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, getFriendStatus, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, getGlobalRank, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, getGlow, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, getIcon, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, getIconType, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, getIsNewRelation, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, getIsToggled, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, getLevels, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, getMessageSetting, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, getNewFriends, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, getNewMessages, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, getNewRequests, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, getRank, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, getRobot, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, getScoreType, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, getShip, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, getSpecial, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, getStars, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, getStreak, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, getUserCoins, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, getUserID, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, getUserName, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, getUserUDID, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, getYtUsername, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, isCurrentUser, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, mergeWithScore, GJUserScore*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, setAccIcon, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, setAccountID, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, setBall, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, setBird, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, setCoins, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, setColor1, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, setColor2, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, setDart, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, setDateString, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, setDemons, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, setFriendReqSetting, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, setFriendStatus, GJFriendStatus)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, setGlobalRank, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, setGlow, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, setIcon, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, setIconType, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, setIsNewRelation, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, setIsToggled, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, setLevels, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, setMessageSetting, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, setNewFriends, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, setNewMessages, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, setNewRequests, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, setRank, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, setRobot, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, setScoreType, GJScoreType)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, setShip, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, setSpecial, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, setStars, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, setStreak, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, setUserCoins, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, setUserID, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, setUserName, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, setUserUDID, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, setYtUsername, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserScore, init, )
		}
	};
}
