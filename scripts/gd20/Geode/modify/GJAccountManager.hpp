#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJAccountManager.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sharedState
		#define GEODE_STATICS_sharedState
		GEODE_AS_STATIC_FUNCTION(sharedState) 
	#endif

	#ifndef GEODE_STATICS_addDLToActive
		#define GEODE_STATICS_addDLToActive
		GEODE_AS_STATIC_FUNCTION(addDLToActive) 
	#endif

	#ifndef GEODE_STATICS_backupAccount
		#define GEODE_STATICS_backupAccount
		GEODE_AS_STATIC_FUNCTION(backupAccount) 
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

	#ifndef GEODE_STATICS_getAccountDelegate
		#define GEODE_STATICS_getAccountDelegate
		GEODE_AS_STATIC_FUNCTION(getAccountDelegate) 
	#endif

	#ifndef GEODE_STATICS_getAccountID
		#define GEODE_STATICS_getAccountID
		GEODE_AS_STATIC_FUNCTION(getAccountID) 
	#endif

	#ifndef GEODE_STATICS_getAccountPassword
		#define GEODE_STATICS_getAccountPassword
		GEODE_AS_STATIC_FUNCTION(getAccountPassword) 
	#endif

	#ifndef GEODE_STATICS_getAccountUserName
		#define GEODE_STATICS_getAccountUserName
		GEODE_AS_STATIC_FUNCTION(getAccountUserName) 
	#endif

	#ifndef GEODE_STATICS_getBackupDelegate
		#define GEODE_STATICS_getBackupDelegate
		GEODE_AS_STATIC_FUNCTION(getBackupDelegate) 
	#endif

	#ifndef GEODE_STATICS_getDLObject
		#define GEODE_STATICS_getDLObject
		GEODE_AS_STATIC_FUNCTION(getDLObject) 
	#endif

	#ifndef GEODE_STATICS_getGJP
		#define GEODE_STATICS_getGJP
		GEODE_AS_STATIC_FUNCTION(getGJP) 
	#endif

	#ifndef GEODE_STATICS_getLoginDelegate
		#define GEODE_STATICS_getLoginDelegate
		GEODE_AS_STATIC_FUNCTION(getLoginDelegate) 
	#endif

	#ifndef GEODE_STATICS_getRegisterDelegate
		#define GEODE_STATICS_getRegisterDelegate
		GEODE_AS_STATIC_FUNCTION(getRegisterDelegate) 
	#endif

	#ifndef GEODE_STATICS_getSettingsDelegate
		#define GEODE_STATICS_getSettingsDelegate
		GEODE_AS_STATIC_FUNCTION(getSettingsDelegate) 
	#endif

	#ifndef GEODE_STATICS_getSyncDelegate
		#define GEODE_STATICS_getSyncDelegate
		GEODE_AS_STATIC_FUNCTION(getSyncDelegate) 
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

	#ifndef GEODE_STATICS_isDLActive
		#define GEODE_STATICS_isDLActive
		GEODE_AS_STATIC_FUNCTION(isDLActive) 
	#endif

	#ifndef GEODE_STATICS_linkToAccount
		#define GEODE_STATICS_linkToAccount
		GEODE_AS_STATIC_FUNCTION(linkToAccount) 
	#endif

	#ifndef GEODE_STATICS_loginAccount
		#define GEODE_STATICS_loginAccount
		GEODE_AS_STATIC_FUNCTION(loginAccount) 
	#endif

	#ifndef GEODE_STATICS_onBackupAccountCompleted
		#define GEODE_STATICS_onBackupAccountCompleted
		GEODE_AS_STATIC_FUNCTION(onBackupAccountCompleted) 
	#endif

	#ifndef GEODE_STATICS_onLoginAccountCompleted
		#define GEODE_STATICS_onLoginAccountCompleted
		GEODE_AS_STATIC_FUNCTION(onLoginAccountCompleted) 
	#endif

	#ifndef GEODE_STATICS_onProcessHttpRequestCompleted
		#define GEODE_STATICS_onProcessHttpRequestCompleted
		GEODE_AS_STATIC_FUNCTION(onProcessHttpRequestCompleted) 
	#endif

	#ifndef GEODE_STATICS_onRegisterAccountCompleted
		#define GEODE_STATICS_onRegisterAccountCompleted
		GEODE_AS_STATIC_FUNCTION(onRegisterAccountCompleted) 
	#endif

	#ifndef GEODE_STATICS_onSyncAccountCompleted
		#define GEODE_STATICS_onSyncAccountCompleted
		GEODE_AS_STATIC_FUNCTION(onSyncAccountCompleted) 
	#endif

	#ifndef GEODE_STATICS_onUpdateAccountSettingsCompleted
		#define GEODE_STATICS_onUpdateAccountSettingsCompleted
		GEODE_AS_STATIC_FUNCTION(onUpdateAccountSettingsCompleted) 
	#endif

	#ifndef GEODE_STATICS_ProcessHttpRequest
		#define GEODE_STATICS_ProcessHttpRequest
		GEODE_AS_STATIC_FUNCTION(ProcessHttpRequest) 
	#endif

	#ifndef GEODE_STATICS_registerAccount
		#define GEODE_STATICS_registerAccount
		GEODE_AS_STATIC_FUNCTION(registerAccount) 
	#endif

	#ifndef GEODE_STATICS_removeDLFromActive
		#define GEODE_STATICS_removeDLFromActive
		GEODE_AS_STATIC_FUNCTION(removeDLFromActive) 
	#endif

	#ifndef GEODE_STATICS_setAccountDelegate
		#define GEODE_STATICS_setAccountDelegate
		GEODE_AS_STATIC_FUNCTION(setAccountDelegate) 
	#endif

	#ifndef GEODE_STATICS_setBackupDelegate
		#define GEODE_STATICS_setBackupDelegate
		GEODE_AS_STATIC_FUNCTION(setBackupDelegate) 
	#endif

	#ifndef GEODE_STATICS_setLoginDelegate
		#define GEODE_STATICS_setLoginDelegate
		GEODE_AS_STATIC_FUNCTION(setLoginDelegate) 
	#endif

	#ifndef GEODE_STATICS_setRegisterDelegate
		#define GEODE_STATICS_setRegisterDelegate
		GEODE_AS_STATIC_FUNCTION(setRegisterDelegate) 
	#endif

	#ifndef GEODE_STATICS_setSettingsDelegate
		#define GEODE_STATICS_setSettingsDelegate
		GEODE_AS_STATIC_FUNCTION(setSettingsDelegate) 
	#endif

	#ifndef GEODE_STATICS_setSyncDelegate
		#define GEODE_STATICS_setSyncDelegate
		GEODE_AS_STATIC_FUNCTION(setSyncDelegate) 
	#endif

	#ifndef GEODE_STATICS_syncAccount
		#define GEODE_STATICS_syncAccount
		GEODE_AS_STATIC_FUNCTION(syncAccount) 
	#endif

	#ifndef GEODE_STATICS_unlinkFromAccount
		#define GEODE_STATICS_unlinkFromAccount
		GEODE_AS_STATIC_FUNCTION(unlinkFromAccount) 
	#endif

	#ifndef GEODE_STATICS_updateAccountSettings
		#define GEODE_STATICS_updateAccountSettings
		GEODE_AS_STATIC_FUNCTION(updateAccountSettings) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_sharedState
		#define GEODE_CONCEPT_CHECK_sharedState
		GEODE_CONCEPT_FUNCTION_CHECK(sharedState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addDLToActive
		#define GEODE_CONCEPT_CHECK_addDLToActive
		GEODE_CONCEPT_FUNCTION_CHECK(addDLToActive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_backupAccount
		#define GEODE_CONCEPT_CHECK_backupAccount
		GEODE_CONCEPT_FUNCTION_CHECK(backupAccount) 
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

	#ifndef GEODE_CONCEPT_CHECK_getAccountDelegate
		#define GEODE_CONCEPT_CHECK_getAccountDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(getAccountDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAccountID
		#define GEODE_CONCEPT_CHECK_getAccountID
		GEODE_CONCEPT_FUNCTION_CHECK(getAccountID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAccountPassword
		#define GEODE_CONCEPT_CHECK_getAccountPassword
		GEODE_CONCEPT_FUNCTION_CHECK(getAccountPassword) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAccountUserName
		#define GEODE_CONCEPT_CHECK_getAccountUserName
		GEODE_CONCEPT_FUNCTION_CHECK(getAccountUserName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBackupDelegate
		#define GEODE_CONCEPT_CHECK_getBackupDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(getBackupDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDLObject
		#define GEODE_CONCEPT_CHECK_getDLObject
		GEODE_CONCEPT_FUNCTION_CHECK(getDLObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGJP
		#define GEODE_CONCEPT_CHECK_getGJP
		GEODE_CONCEPT_FUNCTION_CHECK(getGJP) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLoginDelegate
		#define GEODE_CONCEPT_CHECK_getLoginDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(getLoginDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRegisterDelegate
		#define GEODE_CONCEPT_CHECK_getRegisterDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(getRegisterDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSettingsDelegate
		#define GEODE_CONCEPT_CHECK_getSettingsDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(getSettingsDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSyncDelegate
		#define GEODE_CONCEPT_CHECK_getSyncDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(getSyncDelegate) 
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

	#ifndef GEODE_CONCEPT_CHECK_isDLActive
		#define GEODE_CONCEPT_CHECK_isDLActive
		GEODE_CONCEPT_FUNCTION_CHECK(isDLActive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_linkToAccount
		#define GEODE_CONCEPT_CHECK_linkToAccount
		GEODE_CONCEPT_FUNCTION_CHECK(linkToAccount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loginAccount
		#define GEODE_CONCEPT_CHECK_loginAccount
		GEODE_CONCEPT_FUNCTION_CHECK(loginAccount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBackupAccountCompleted
		#define GEODE_CONCEPT_CHECK_onBackupAccountCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onBackupAccountCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onLoginAccountCompleted
		#define GEODE_CONCEPT_CHECK_onLoginAccountCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onLoginAccountCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onProcessHttpRequestCompleted
		#define GEODE_CONCEPT_CHECK_onProcessHttpRequestCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onProcessHttpRequestCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRegisterAccountCompleted
		#define GEODE_CONCEPT_CHECK_onRegisterAccountCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onRegisterAccountCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSyncAccountCompleted
		#define GEODE_CONCEPT_CHECK_onSyncAccountCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onSyncAccountCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUpdateAccountSettingsCompleted
		#define GEODE_CONCEPT_CHECK_onUpdateAccountSettingsCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onUpdateAccountSettingsCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ProcessHttpRequest
		#define GEODE_CONCEPT_CHECK_ProcessHttpRequest
		GEODE_CONCEPT_FUNCTION_CHECK(ProcessHttpRequest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerAccount
		#define GEODE_CONCEPT_CHECK_registerAccount
		GEODE_CONCEPT_FUNCTION_CHECK(registerAccount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeDLFromActive
		#define GEODE_CONCEPT_CHECK_removeDLFromActive
		GEODE_CONCEPT_FUNCTION_CHECK(removeDLFromActive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setAccountDelegate
		#define GEODE_CONCEPT_CHECK_setAccountDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(setAccountDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setBackupDelegate
		#define GEODE_CONCEPT_CHECK_setBackupDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(setBackupDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLoginDelegate
		#define GEODE_CONCEPT_CHECK_setLoginDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(setLoginDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRegisterDelegate
		#define GEODE_CONCEPT_CHECK_setRegisterDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(setRegisterDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSettingsDelegate
		#define GEODE_CONCEPT_CHECK_setSettingsDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(setSettingsDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSyncDelegate
		#define GEODE_CONCEPT_CHECK_setSyncDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(setSyncDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_syncAccount
		#define GEODE_CONCEPT_CHECK_syncAccount
		GEODE_CONCEPT_FUNCTION_CHECK(syncAccount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unlinkFromAccount
		#define GEODE_CONCEPT_CHECK_unlinkFromAccount
		GEODE_CONCEPT_FUNCTION_CHECK(unlinkFromAccount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateAccountSettings
		#define GEODE_CONCEPT_CHECK_updateAccountSettings
		GEODE_CONCEPT_FUNCTION_CHECK(updateAccountSettings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJAccountManager> : ModifyBase<ModifyDerive<Der, GJAccountManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJAccountManager>>;
		using ModifyBase<ModifyDerive<Der, GJAccountManager>>::ModifyBase;
		using Base = GJAccountManager;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJAccountManager, sharedState, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJAccountManager, addDLToActive, char const*, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJAccountManager, addDLToActive, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJAccountManager, backupAccount, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJAccountManager, dataLoaded, DS_Dictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJAccountManager, encodeDataTo, DS_Dictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJAccountManager, firstSetup, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJAccountManager, getAccountDelegate, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJAccountManager, getAccountID, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJAccountManager, getAccountPassword, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJAccountManager, getAccountUserName, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJAccountManager, getBackupDelegate, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJAccountManager, getDLObject, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJAccountManager, getGJP, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJAccountManager, getLoginDelegate, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJAccountManager, getRegisterDelegate, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJAccountManager, getSettingsDelegate, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJAccountManager, getSyncDelegate, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJAccountManager, handleIt, bool, gd::string, gd::string, GJHttpType)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJAccountManager, handleItDelayed, bool, gd::string, gd::string, GJHttpType)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJAccountManager, handleItND, cocos2d::CCNode*, void*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJAccountManager, isDLActive, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJAccountManager, linkToAccount, gd::string, gd::string, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJAccountManager, loginAccount, gd::string, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJAccountManager, onBackupAccountCompleted, gd::string, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJAccountManager, onLoginAccountCompleted, gd::string, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJAccountManager, onProcessHttpRequestCompleted, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJAccountManager, onRegisterAccountCompleted, gd::string, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJAccountManager, onSyncAccountCompleted, gd::string, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJAccountManager, onUpdateAccountSettingsCompleted, gd::string, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJAccountManager, ProcessHttpRequest, gd::string, gd::string, gd::string, GJHttpType)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJAccountManager, registerAccount, gd::string, gd::string, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJAccountManager, removeDLFromActive, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJAccountManager, setAccountDelegate, GJAccountDelegate*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJAccountManager, setBackupDelegate, GJAccountBackupDelegate*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJAccountManager, setLoginDelegate, GJAccountLoginDelegate*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJAccountManager, setRegisterDelegate, GJAccountRegisterDelegate*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJAccountManager, setSettingsDelegate, GJAccountSettingsDelegate*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJAccountManager, setSyncDelegate, GJAccountSyncDelegate*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJAccountManager, syncAccount, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJAccountManager, unlinkFromAccount, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJAccountManager, updateAccountSettings, int, int, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJAccountManager, init, )
		}
	};
}
