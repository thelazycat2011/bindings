#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJFriendRequest.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getComment
		#define GEODE_STATICS_getComment
		GEODE_AS_STATIC_FUNCTION(getComment) 
	#endif

	#ifndef GEODE_STATICS_getDate
		#define GEODE_STATICS_getDate
		GEODE_AS_STATIC_FUNCTION(getDate) 
	#endif

	#ifndef GEODE_STATICS_getFromAccountID
		#define GEODE_STATICS_getFromAccountID
		GEODE_AS_STATIC_FUNCTION(getFromAccountID) 
	#endif

	#ifndef GEODE_STATICS_getIsRead
		#define GEODE_STATICS_getIsRead
		GEODE_AS_STATIC_FUNCTION(getIsRead) 
	#endif

	#ifndef GEODE_STATICS_getRequestID
		#define GEODE_STATICS_getRequestID
		GEODE_AS_STATIC_FUNCTION(getRequestID) 
	#endif

	#ifndef GEODE_STATICS_getToAccountID
		#define GEODE_STATICS_getToAccountID
		GEODE_AS_STATIC_FUNCTION(getToAccountID) 
	#endif

	#ifndef GEODE_STATICS_setComment
		#define GEODE_STATICS_setComment
		GEODE_AS_STATIC_FUNCTION(setComment) 
	#endif

	#ifndef GEODE_STATICS_setDate
		#define GEODE_STATICS_setDate
		GEODE_AS_STATIC_FUNCTION(setDate) 
	#endif

	#ifndef GEODE_STATICS_setFromAccountID
		#define GEODE_STATICS_setFromAccountID
		GEODE_AS_STATIC_FUNCTION(setFromAccountID) 
	#endif

	#ifndef GEODE_STATICS_setIsRead
		#define GEODE_STATICS_setIsRead
		GEODE_AS_STATIC_FUNCTION(setIsRead) 
	#endif

	#ifndef GEODE_STATICS_setRequestID
		#define GEODE_STATICS_setRequestID
		GEODE_AS_STATIC_FUNCTION(setRequestID) 
	#endif

	#ifndef GEODE_STATICS_setToAccountID
		#define GEODE_STATICS_setToAccountID
		GEODE_AS_STATIC_FUNCTION(setToAccountID) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getComment
		#define GEODE_CONCEPT_CHECK_getComment
		GEODE_CONCEPT_FUNCTION_CHECK(getComment) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDate
		#define GEODE_CONCEPT_CHECK_getDate
		GEODE_CONCEPT_FUNCTION_CHECK(getDate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFromAccountID
		#define GEODE_CONCEPT_CHECK_getFromAccountID
		GEODE_CONCEPT_FUNCTION_CHECK(getFromAccountID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIsRead
		#define GEODE_CONCEPT_CHECK_getIsRead
		GEODE_CONCEPT_FUNCTION_CHECK(getIsRead) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRequestID
		#define GEODE_CONCEPT_CHECK_getRequestID
		GEODE_CONCEPT_FUNCTION_CHECK(getRequestID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getToAccountID
		#define GEODE_CONCEPT_CHECK_getToAccountID
		GEODE_CONCEPT_FUNCTION_CHECK(getToAccountID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setComment
		#define GEODE_CONCEPT_CHECK_setComment
		GEODE_CONCEPT_FUNCTION_CHECK(setComment) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDate
		#define GEODE_CONCEPT_CHECK_setDate
		GEODE_CONCEPT_FUNCTION_CHECK(setDate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFromAccountID
		#define GEODE_CONCEPT_CHECK_setFromAccountID
		GEODE_CONCEPT_FUNCTION_CHECK(setFromAccountID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIsRead
		#define GEODE_CONCEPT_CHECK_setIsRead
		GEODE_CONCEPT_FUNCTION_CHECK(setIsRead) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRequestID
		#define GEODE_CONCEPT_CHECK_setRequestID
		GEODE_CONCEPT_FUNCTION_CHECK(setRequestID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setToAccountID
		#define GEODE_CONCEPT_CHECK_setToAccountID
		GEODE_CONCEPT_FUNCTION_CHECK(setToAccountID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJFriendRequest> : ModifyBase<ModifyDerive<Der, GJFriendRequest>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJFriendRequest>>;
		using ModifyBase<ModifyDerive<Der, GJFriendRequest>>::ModifyBase;
		using Base = GJFriendRequest;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJFriendRequest, create, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJFriendRequest, create, cocos2d::CCDictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJFriendRequest, getComment, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJFriendRequest, getDate, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJFriendRequest, getFromAccountID, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJFriendRequest, getIsRead, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJFriendRequest, getRequestID, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJFriendRequest, getToAccountID, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJFriendRequest, setComment, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJFriendRequest, setDate, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJFriendRequest, setFromAccountID, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJFriendRequest, setIsRead, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJFriendRequest, setRequestID, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJFriendRequest, setToAccountID, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJFriendRequest, init, )
		}
	};
}
