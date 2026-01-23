#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/TeleportPortalObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_customObjectSetup
		#define GEODE_STATICS_customObjectSetup
		GEODE_AS_STATIC_FUNCTION(customObjectSetup) 
	#endif

	#ifndef GEODE_STATICS_getLockX
		#define GEODE_STATICS_getLockX
		GEODE_AS_STATIC_FUNCTION(getLockX) 
	#endif

	#ifndef GEODE_STATICS_getPortalTargetY
		#define GEODE_STATICS_getPortalTargetY
		GEODE_AS_STATIC_FUNCTION(getPortalTargetY) 
	#endif

	#ifndef GEODE_STATICS_getSaveString
		#define GEODE_STATICS_getSaveString
		GEODE_AS_STATIC_FUNCTION(getSaveString) 
	#endif

	#ifndef GEODE_STATICS_getSmoothEase
		#define GEODE_STATICS_getSmoothEase
		GEODE_AS_STATIC_FUNCTION(getSmoothEase) 
	#endif

	#ifndef GEODE_STATICS_getTargetPortal
		#define GEODE_STATICS_getTargetPortal
		GEODE_AS_STATIC_FUNCTION(getTargetPortal) 
	#endif

	#ifndef GEODE_STATICS_getTeleportXOff
		#define GEODE_STATICS_getTeleportXOff
		GEODE_AS_STATIC_FUNCTION(getTeleportXOff) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setLockX
		#define GEODE_STATICS_setLockX
		GEODE_AS_STATIC_FUNCTION(setLockX) 
	#endif

	#ifndef GEODE_STATICS_setPortalTargetY
		#define GEODE_STATICS_setPortalTargetY
		GEODE_AS_STATIC_FUNCTION(setPortalTargetY) 
	#endif

	#ifndef GEODE_STATICS_setPositionOverride
		#define GEODE_STATICS_setPositionOverride
		GEODE_AS_STATIC_FUNCTION(setPositionOverride) 
	#endif

	#ifndef GEODE_STATICS_setSmoothEase
		#define GEODE_STATICS_setSmoothEase
		GEODE_AS_STATIC_FUNCTION(setSmoothEase) 
	#endif

	#ifndef GEODE_STATICS_setStartPosOverride
		#define GEODE_STATICS_setStartPosOverride
		GEODE_AS_STATIC_FUNCTION(setStartPosOverride) 
	#endif

	#ifndef GEODE_STATICS_setTargetPortal
		#define GEODE_STATICS_setTargetPortal
		GEODE_AS_STATIC_FUNCTION(setTargetPortal) 
	#endif

	#ifndef GEODE_STATICS_setPosition
		#define GEODE_STATICS_setPosition
		GEODE_AS_STATIC_FUNCTION(setPosition) 
	#endif

	#ifndef GEODE_STATICS_setRotation
		#define GEODE_STATICS_setRotation
		GEODE_AS_STATIC_FUNCTION(setRotation) 
	#endif

	#ifndef GEODE_STATICS_setStartPos
		#define GEODE_STATICS_setStartPos
		GEODE_AS_STATIC_FUNCTION(setStartPos) 
	#endif

	#ifndef GEODE_STATICS_addToGroup
		#define GEODE_STATICS_addToGroup
		GEODE_AS_STATIC_FUNCTION(addToGroup) 
	#endif

	#ifndef GEODE_STATICS_removeFromGroup
		#define GEODE_STATICS_removeFromGroup
		GEODE_AS_STATIC_FUNCTION(removeFromGroup) 
	#endif

	#ifndef GEODE_STATICS_setRotation2
		#define GEODE_STATICS_setRotation2
		GEODE_AS_STATIC_FUNCTION(setRotation2) 
	#endif

	#ifndef GEODE_STATICS_addToGroup2
		#define GEODE_STATICS_addToGroup2
		GEODE_AS_STATIC_FUNCTION(addToGroup2) 
	#endif

	#ifndef GEODE_STATICS_removeFromGroup2
		#define GEODE_STATICS_removeFromGroup2
		GEODE_AS_STATIC_FUNCTION(removeFromGroup2) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_customObjectSetup
		#define GEODE_CONCEPT_CHECK_customObjectSetup
		GEODE_CONCEPT_FUNCTION_CHECK(customObjectSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLockX
		#define GEODE_CONCEPT_CHECK_getLockX
		GEODE_CONCEPT_FUNCTION_CHECK(getLockX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPortalTargetY
		#define GEODE_CONCEPT_CHECK_getPortalTargetY
		GEODE_CONCEPT_FUNCTION_CHECK(getPortalTargetY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSaveString
		#define GEODE_CONCEPT_CHECK_getSaveString
		GEODE_CONCEPT_FUNCTION_CHECK(getSaveString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSmoothEase
		#define GEODE_CONCEPT_CHECK_getSmoothEase
		GEODE_CONCEPT_FUNCTION_CHECK(getSmoothEase) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTargetPortal
		#define GEODE_CONCEPT_CHECK_getTargetPortal
		GEODE_CONCEPT_FUNCTION_CHECK(getTargetPortal) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTeleportXOff
		#define GEODE_CONCEPT_CHECK_getTeleportXOff
		GEODE_CONCEPT_FUNCTION_CHECK(getTeleportXOff) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLockX
		#define GEODE_CONCEPT_CHECK_setLockX
		GEODE_CONCEPT_FUNCTION_CHECK(setLockX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPortalTargetY
		#define GEODE_CONCEPT_CHECK_setPortalTargetY
		GEODE_CONCEPT_FUNCTION_CHECK(setPortalTargetY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPositionOverride
		#define GEODE_CONCEPT_CHECK_setPositionOverride
		GEODE_CONCEPT_FUNCTION_CHECK(setPositionOverride) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSmoothEase
		#define GEODE_CONCEPT_CHECK_setSmoothEase
		GEODE_CONCEPT_FUNCTION_CHECK(setSmoothEase) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStartPosOverride
		#define GEODE_CONCEPT_CHECK_setStartPosOverride
		GEODE_CONCEPT_FUNCTION_CHECK(setStartPosOverride) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTargetPortal
		#define GEODE_CONCEPT_CHECK_setTargetPortal
		GEODE_CONCEPT_FUNCTION_CHECK(setTargetPortal) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPosition
		#define GEODE_CONCEPT_CHECK_setPosition
		GEODE_CONCEPT_FUNCTION_CHECK(setPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRotation
		#define GEODE_CONCEPT_CHECK_setRotation
		GEODE_CONCEPT_FUNCTION_CHECK(setRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStartPos
		#define GEODE_CONCEPT_CHECK_setStartPos
		GEODE_CONCEPT_FUNCTION_CHECK(setStartPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToGroup
		#define GEODE_CONCEPT_CHECK_addToGroup
		GEODE_CONCEPT_FUNCTION_CHECK(addToGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeFromGroup
		#define GEODE_CONCEPT_CHECK_removeFromGroup
		GEODE_CONCEPT_FUNCTION_CHECK(removeFromGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRotation2
		#define GEODE_CONCEPT_CHECK_setRotation2
		GEODE_CONCEPT_FUNCTION_CHECK(setRotation2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToGroup2
		#define GEODE_CONCEPT_CHECK_addToGroup2
		GEODE_CONCEPT_FUNCTION_CHECK(addToGroup2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeFromGroup2
		#define GEODE_CONCEPT_CHECK_removeFromGroup2
		GEODE_CONCEPT_FUNCTION_CHECK(removeFromGroup2) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, TeleportPortalObject> : ModifyBase<ModifyDerive<Der, TeleportPortalObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, TeleportPortalObject>>;
		using ModifyBase<ModifyDerive<Der, TeleportPortalObject>>::ModifyBase;
		using Base = TeleportPortalObject;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TeleportPortalObject, create, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TeleportPortalObject, customObjectSetup, gd::map<gd::string, gd::string>*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TeleportPortalObject, getLockX, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TeleportPortalObject, getPortalTargetY, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TeleportPortalObject, getSaveString, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TeleportPortalObject, getSmoothEase, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TeleportPortalObject, getTargetPortal, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TeleportPortalObject, getTeleportXOff, cocos2d::CCNode*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TeleportPortalObject, init, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TeleportPortalObject, setLockX, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TeleportPortalObject, setPortalTargetY, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TeleportPortalObject, setPositionOverride, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TeleportPortalObject, setSmoothEase, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TeleportPortalObject, setStartPosOverride, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TeleportPortalObject, setTargetPortal, TeleportPortalObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TeleportPortalObject, setPosition, cocos2d::CCPoint const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TeleportPortalObject, setRotation, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TeleportPortalObject, setStartPos, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TeleportPortalObject, addToGroup, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TeleportPortalObject, removeFromGroup, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TeleportPortalObject, setRotation2, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TeleportPortalObject, addToGroup2, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TeleportPortalObject, removeFromGroup2, int)
		}
	};
}
