#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJComment.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getAccountID
		#define GEODE_STATICS_getAccountID
		GEODE_AS_STATIC_FUNCTION(getAccountID) 
	#endif

	#ifndef GEODE_STATICS_getComment
		#define GEODE_STATICS_getComment
		GEODE_AS_STATIC_FUNCTION(getComment) 
	#endif

	#ifndef GEODE_STATICS_getCommentDate
		#define GEODE_STATICS_getCommentDate
		GEODE_AS_STATIC_FUNCTION(getCommentDate) 
	#endif

	#ifndef GEODE_STATICS_getCommentID
		#define GEODE_STATICS_getCommentID
		GEODE_AS_STATIC_FUNCTION(getCommentID) 
	#endif

	#ifndef GEODE_STATICS_getDeleted
		#define GEODE_STATICS_getDeleted
		GEODE_AS_STATIC_FUNCTION(getDeleted) 
	#endif

	#ifndef GEODE_STATICS_getDislikes
		#define GEODE_STATICS_getDislikes
		GEODE_AS_STATIC_FUNCTION(getDislikes) 
	#endif

	#ifndef GEODE_STATICS_getIsHidden
		#define GEODE_STATICS_getIsHidden
		GEODE_AS_STATIC_FUNCTION(getIsHidden) 
	#endif

	#ifndef GEODE_STATICS_getLevelID
		#define GEODE_STATICS_getLevelID
		GEODE_AS_STATIC_FUNCTION(getLevelID) 
	#endif

	#ifndef GEODE_STATICS_getLikes
		#define GEODE_STATICS_getLikes
		GEODE_AS_STATIC_FUNCTION(getLikes) 
	#endif

	#ifndef GEODE_STATICS_getUserID
		#define GEODE_STATICS_getUserID
		GEODE_AS_STATIC_FUNCTION(getUserID) 
	#endif

	#ifndef GEODE_STATICS_getUserName
		#define GEODE_STATICS_getUserName
		GEODE_AS_STATIC_FUNCTION(getUserName) 
	#endif

	#ifndef GEODE_STATICS_setAccountID
		#define GEODE_STATICS_setAccountID
		GEODE_AS_STATIC_FUNCTION(setAccountID) 
	#endif

	#ifndef GEODE_STATICS_setComment
		#define GEODE_STATICS_setComment
		GEODE_AS_STATIC_FUNCTION(setComment) 
	#endif

	#ifndef GEODE_STATICS_setCommentDate
		#define GEODE_STATICS_setCommentDate
		GEODE_AS_STATIC_FUNCTION(setCommentDate) 
	#endif

	#ifndef GEODE_STATICS_setCommentID
		#define GEODE_STATICS_setCommentID
		GEODE_AS_STATIC_FUNCTION(setCommentID) 
	#endif

	#ifndef GEODE_STATICS_setDeleted
		#define GEODE_STATICS_setDeleted
		GEODE_AS_STATIC_FUNCTION(setDeleted) 
	#endif

	#ifndef GEODE_STATICS_setDislikes
		#define GEODE_STATICS_setDislikes
		GEODE_AS_STATIC_FUNCTION(setDislikes) 
	#endif

	#ifndef GEODE_STATICS_setIsHidden
		#define GEODE_STATICS_setIsHidden
		GEODE_AS_STATIC_FUNCTION(setIsHidden) 
	#endif

	#ifndef GEODE_STATICS_setLevelID
		#define GEODE_STATICS_setLevelID
		GEODE_AS_STATIC_FUNCTION(setLevelID) 
	#endif

	#ifndef GEODE_STATICS_setLikes
		#define GEODE_STATICS_setLikes
		GEODE_AS_STATIC_FUNCTION(setLikes) 
	#endif

	#ifndef GEODE_STATICS_setUserID
		#define GEODE_STATICS_setUserID
		GEODE_AS_STATIC_FUNCTION(setUserID) 
	#endif

	#ifndef GEODE_STATICS_setUserName
		#define GEODE_STATICS_setUserName
		GEODE_AS_STATIC_FUNCTION(setUserName) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAccountID
		#define GEODE_CONCEPT_CHECK_getAccountID
		GEODE_CONCEPT_FUNCTION_CHECK(getAccountID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getComment
		#define GEODE_CONCEPT_CHECK_getComment
		GEODE_CONCEPT_FUNCTION_CHECK(getComment) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCommentDate
		#define GEODE_CONCEPT_CHECK_getCommentDate
		GEODE_CONCEPT_FUNCTION_CHECK(getCommentDate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCommentID
		#define GEODE_CONCEPT_CHECK_getCommentID
		GEODE_CONCEPT_FUNCTION_CHECK(getCommentID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDeleted
		#define GEODE_CONCEPT_CHECK_getDeleted
		GEODE_CONCEPT_FUNCTION_CHECK(getDeleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDislikes
		#define GEODE_CONCEPT_CHECK_getDislikes
		GEODE_CONCEPT_FUNCTION_CHECK(getDislikes) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIsHidden
		#define GEODE_CONCEPT_CHECK_getIsHidden
		GEODE_CONCEPT_FUNCTION_CHECK(getIsHidden) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLevelID
		#define GEODE_CONCEPT_CHECK_getLevelID
		GEODE_CONCEPT_FUNCTION_CHECK(getLevelID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLikes
		#define GEODE_CONCEPT_CHECK_getLikes
		GEODE_CONCEPT_FUNCTION_CHECK(getLikes) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUserID
		#define GEODE_CONCEPT_CHECK_getUserID
		GEODE_CONCEPT_FUNCTION_CHECK(getUserID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUserName
		#define GEODE_CONCEPT_CHECK_getUserName
		GEODE_CONCEPT_FUNCTION_CHECK(getUserName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setAccountID
		#define GEODE_CONCEPT_CHECK_setAccountID
		GEODE_CONCEPT_FUNCTION_CHECK(setAccountID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setComment
		#define GEODE_CONCEPT_CHECK_setComment
		GEODE_CONCEPT_FUNCTION_CHECK(setComment) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCommentDate
		#define GEODE_CONCEPT_CHECK_setCommentDate
		GEODE_CONCEPT_FUNCTION_CHECK(setCommentDate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCommentID
		#define GEODE_CONCEPT_CHECK_setCommentID
		GEODE_CONCEPT_FUNCTION_CHECK(setCommentID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDeleted
		#define GEODE_CONCEPT_CHECK_setDeleted
		GEODE_CONCEPT_FUNCTION_CHECK(setDeleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDislikes
		#define GEODE_CONCEPT_CHECK_setDislikes
		GEODE_CONCEPT_FUNCTION_CHECK(setDislikes) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIsHidden
		#define GEODE_CONCEPT_CHECK_setIsHidden
		GEODE_CONCEPT_FUNCTION_CHECK(setIsHidden) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLevelID
		#define GEODE_CONCEPT_CHECK_setLevelID
		GEODE_CONCEPT_FUNCTION_CHECK(setLevelID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLikes
		#define GEODE_CONCEPT_CHECK_setLikes
		GEODE_CONCEPT_FUNCTION_CHECK(setLikes) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUserID
		#define GEODE_CONCEPT_CHECK_setUserID
		GEODE_CONCEPT_FUNCTION_CHECK(setUserID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUserName
		#define GEODE_CONCEPT_CHECK_setUserName
		GEODE_CONCEPT_FUNCTION_CHECK(setUserName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJComment> : ModifyBase<ModifyDerive<Der, GJComment>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJComment>>;
		using ModifyBase<ModifyDerive<Der, GJComment>>::ModifyBase;
		using Base = GJComment;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJComment, create, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJComment, create, cocos2d::CCDictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJComment, getAccountID, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJComment, getComment, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJComment, getCommentDate, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJComment, getCommentID, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJComment, getDeleted, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJComment, getDislikes, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJComment, getIsHidden, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJComment, getLevelID, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJComment, getLikes, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJComment, getUserID, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJComment, getUserName, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJComment, setAccountID, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJComment, setComment, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJComment, setCommentDate, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJComment, setCommentID, long)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJComment, setDeleted, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJComment, setDislikes, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJComment, setIsHidden, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJComment, setLevelID, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJComment, setLikes, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJComment, setUserID, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJComment, setUserName, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJComment, init, )
		}
	};
}
