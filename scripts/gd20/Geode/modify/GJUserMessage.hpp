#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJUserMessage.hpp>
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

	#ifndef GEODE_STATICS_getBody
		#define GEODE_STATICS_getBody
		GEODE_AS_STATIC_FUNCTION(getBody) 
	#endif

	#ifndef GEODE_STATICS_getDate
		#define GEODE_STATICS_getDate
		GEODE_AS_STATIC_FUNCTION(getDate) 
	#endif

	#ifndef GEODE_STATICS_getIsRead
		#define GEODE_STATICS_getIsRead
		GEODE_AS_STATIC_FUNCTION(getIsRead) 
	#endif

	#ifndef GEODE_STATICS_getIsSender
		#define GEODE_STATICS_getIsSender
		GEODE_AS_STATIC_FUNCTION(getIsSender) 
	#endif

	#ifndef GEODE_STATICS_getIsToggled
		#define GEODE_STATICS_getIsToggled
		GEODE_AS_STATIC_FUNCTION(getIsToggled) 
	#endif

	#ifndef GEODE_STATICS_getMessageID
		#define GEODE_STATICS_getMessageID
		GEODE_AS_STATIC_FUNCTION(getMessageID) 
	#endif

	#ifndef GEODE_STATICS_getSubject
		#define GEODE_STATICS_getSubject
		GEODE_AS_STATIC_FUNCTION(getSubject) 
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

	#ifndef GEODE_STATICS_setBody
		#define GEODE_STATICS_setBody
		GEODE_AS_STATIC_FUNCTION(setBody) 
	#endif

	#ifndef GEODE_STATICS_setDate
		#define GEODE_STATICS_setDate
		GEODE_AS_STATIC_FUNCTION(setDate) 
	#endif

	#ifndef GEODE_STATICS_setIsRead
		#define GEODE_STATICS_setIsRead
		GEODE_AS_STATIC_FUNCTION(setIsRead) 
	#endif

	#ifndef GEODE_STATICS_setIsSender
		#define GEODE_STATICS_setIsSender
		GEODE_AS_STATIC_FUNCTION(setIsSender) 
	#endif

	#ifndef GEODE_STATICS_setIsToggled
		#define GEODE_STATICS_setIsToggled
		GEODE_AS_STATIC_FUNCTION(setIsToggled) 
	#endif

	#ifndef GEODE_STATICS_setMessageID
		#define GEODE_STATICS_setMessageID
		GEODE_AS_STATIC_FUNCTION(setMessageID) 
	#endif

	#ifndef GEODE_STATICS_setSubject
		#define GEODE_STATICS_setSubject
		GEODE_AS_STATIC_FUNCTION(setSubject) 
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

	#ifndef GEODE_CONCEPT_CHECK_getBody
		#define GEODE_CONCEPT_CHECK_getBody
		GEODE_CONCEPT_FUNCTION_CHECK(getBody) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDate
		#define GEODE_CONCEPT_CHECK_getDate
		GEODE_CONCEPT_FUNCTION_CHECK(getDate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIsRead
		#define GEODE_CONCEPT_CHECK_getIsRead
		GEODE_CONCEPT_FUNCTION_CHECK(getIsRead) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIsSender
		#define GEODE_CONCEPT_CHECK_getIsSender
		GEODE_CONCEPT_FUNCTION_CHECK(getIsSender) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIsToggled
		#define GEODE_CONCEPT_CHECK_getIsToggled
		GEODE_CONCEPT_FUNCTION_CHECK(getIsToggled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMessageID
		#define GEODE_CONCEPT_CHECK_getMessageID
		GEODE_CONCEPT_FUNCTION_CHECK(getMessageID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSubject
		#define GEODE_CONCEPT_CHECK_getSubject
		GEODE_CONCEPT_FUNCTION_CHECK(getSubject) 
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

	#ifndef GEODE_CONCEPT_CHECK_setBody
		#define GEODE_CONCEPT_CHECK_setBody
		GEODE_CONCEPT_FUNCTION_CHECK(setBody) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDate
		#define GEODE_CONCEPT_CHECK_setDate
		GEODE_CONCEPT_FUNCTION_CHECK(setDate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIsRead
		#define GEODE_CONCEPT_CHECK_setIsRead
		GEODE_CONCEPT_FUNCTION_CHECK(setIsRead) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIsSender
		#define GEODE_CONCEPT_CHECK_setIsSender
		GEODE_CONCEPT_FUNCTION_CHECK(setIsSender) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIsToggled
		#define GEODE_CONCEPT_CHECK_setIsToggled
		GEODE_CONCEPT_FUNCTION_CHECK(setIsToggled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMessageID
		#define GEODE_CONCEPT_CHECK_setMessageID
		GEODE_CONCEPT_FUNCTION_CHECK(setMessageID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSubject
		#define GEODE_CONCEPT_CHECK_setSubject
		GEODE_CONCEPT_FUNCTION_CHECK(setSubject) 
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
	struct ModifyDerive<Der, GJUserMessage> : ModifyBase<ModifyDerive<Der, GJUserMessage>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJUserMessage>>;
		using ModifyBase<ModifyDerive<Der, GJUserMessage>>::ModifyBase;
		using Base = GJUserMessage;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserMessage, create, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserMessage, create, cocos2d::CCDictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserMessage, getAccountID, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserMessage, getBody, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserMessage, getDate, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserMessage, getIsRead, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserMessage, getIsSender, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserMessage, getIsToggled, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserMessage, getMessageID, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserMessage, getSubject, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserMessage, getUserID, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserMessage, getUserName, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserMessage, setAccountID, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserMessage, setBody, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserMessage, setDate, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserMessage, setIsRead, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserMessage, setIsSender, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserMessage, setIsToggled, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserMessage, setMessageID, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserMessage, setSubject, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserMessage, setUserID, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserMessage, setUserName, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJUserMessage, init, )
		}
	};
}
