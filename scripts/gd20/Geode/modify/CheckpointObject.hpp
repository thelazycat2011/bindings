#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CheckpointObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getActiveEnterEffect
		#define GEODE_STATICS_getActiveEnterEffect
		GEODE_AS_STATIC_FUNCTION(getActiveEnterEffect) 
	#endif

	#ifndef GEODE_STATICS_getCameraPos
		#define GEODE_STATICS_getCameraPos
		GEODE_AS_STATIC_FUNCTION(getCameraPos) 
	#endif

	#ifndef GEODE_STATICS_getColorAction
		#define GEODE_STATICS_getColorAction
		GEODE_AS_STATIC_FUNCTION(getColorAction) 
	#endif

	#ifndef GEODE_STATICS_getColorManagerState
		#define GEODE_STATICS_getColorManagerState
		GEODE_AS_STATIC_FUNCTION(getColorManagerState) 
	#endif

	#ifndef GEODE_STATICS_getDualMode
		#define GEODE_STATICS_getDualMode
		GEODE_AS_STATIC_FUNCTION(getDualMode) 
	#endif

	#ifndef GEODE_STATICS_getIsFlipped
		#define GEODE_STATICS_getIsFlipped
		GEODE_AS_STATIC_FUNCTION(getIsFlipped) 
	#endif

	#ifndef GEODE_STATICS_getObject
		#define GEODE_STATICS_getObject
		GEODE_AS_STATIC_FUNCTION(getObject) 
	#endif

	#ifndef GEODE_STATICS_getPlayerCheck01
		#define GEODE_STATICS_getPlayerCheck01
		GEODE_AS_STATIC_FUNCTION(getPlayerCheck01) 
	#endif

	#ifndef GEODE_STATICS_getPlayerCheck02
		#define GEODE_STATICS_getPlayerCheck02
		GEODE_AS_STATIC_FUNCTION(getPlayerCheck02) 
	#endif

	#ifndef GEODE_STATICS_getPortalObject
		#define GEODE_STATICS_getPortalObject
		GEODE_AS_STATIC_FUNCTION(getPortalObject) 
	#endif

	#ifndef GEODE_STATICS_getTimeStamp
		#define GEODE_STATICS_getTimeStamp
		GEODE_AS_STATIC_FUNCTION(getTimeStamp) 
	#endif

	#ifndef GEODE_STATICS_setActiveEnterEffect
		#define GEODE_STATICS_setActiveEnterEffect
		GEODE_AS_STATIC_FUNCTION(setActiveEnterEffect) 
	#endif

	#ifndef GEODE_STATICS_setCameraPos
		#define GEODE_STATICS_setCameraPos
		GEODE_AS_STATIC_FUNCTION(setCameraPos) 
	#endif

	#ifndef GEODE_STATICS_setColorManagerState
		#define GEODE_STATICS_setColorManagerState
		GEODE_AS_STATIC_FUNCTION(setColorManagerState) 
	#endif

	#ifndef GEODE_STATICS_setDualMode
		#define GEODE_STATICS_setDualMode
		GEODE_AS_STATIC_FUNCTION(setDualMode) 
	#endif

	#ifndef GEODE_STATICS_setIsFlipped
		#define GEODE_STATICS_setIsFlipped
		GEODE_AS_STATIC_FUNCTION(setIsFlipped) 
	#endif

	#ifndef GEODE_STATICS_setObject
		#define GEODE_STATICS_setObject
		GEODE_AS_STATIC_FUNCTION(setObject) 
	#endif

	#ifndef GEODE_STATICS_setPlayerCheck01
		#define GEODE_STATICS_setPlayerCheck01
		GEODE_AS_STATIC_FUNCTION(setPlayerCheck01) 
	#endif

	#ifndef GEODE_STATICS_setPlayerCheck02
		#define GEODE_STATICS_setPlayerCheck02
		GEODE_AS_STATIC_FUNCTION(setPlayerCheck02) 
	#endif

	#ifndef GEODE_STATICS_setPortalObject
		#define GEODE_STATICS_setPortalObject
		GEODE_AS_STATIC_FUNCTION(setPortalObject) 
	#endif

	#ifndef GEODE_STATICS_setTimeStamp
		#define GEODE_STATICS_setTimeStamp
		GEODE_AS_STATIC_FUNCTION(setTimeStamp) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getActiveEnterEffect
		#define GEODE_CONCEPT_CHECK_getActiveEnterEffect
		GEODE_CONCEPT_FUNCTION_CHECK(getActiveEnterEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCameraPos
		#define GEODE_CONCEPT_CHECK_getCameraPos
		GEODE_CONCEPT_FUNCTION_CHECK(getCameraPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getColorAction
		#define GEODE_CONCEPT_CHECK_getColorAction
		GEODE_CONCEPT_FUNCTION_CHECK(getColorAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getColorManagerState
		#define GEODE_CONCEPT_CHECK_getColorManagerState
		GEODE_CONCEPT_FUNCTION_CHECK(getColorManagerState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDualMode
		#define GEODE_CONCEPT_CHECK_getDualMode
		GEODE_CONCEPT_FUNCTION_CHECK(getDualMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIsFlipped
		#define GEODE_CONCEPT_CHECK_getIsFlipped
		GEODE_CONCEPT_FUNCTION_CHECK(getIsFlipped) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getObject
		#define GEODE_CONCEPT_CHECK_getObject
		GEODE_CONCEPT_FUNCTION_CHECK(getObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPlayerCheck01
		#define GEODE_CONCEPT_CHECK_getPlayerCheck01
		GEODE_CONCEPT_FUNCTION_CHECK(getPlayerCheck01) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPlayerCheck02
		#define GEODE_CONCEPT_CHECK_getPlayerCheck02
		GEODE_CONCEPT_FUNCTION_CHECK(getPlayerCheck02) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPortalObject
		#define GEODE_CONCEPT_CHECK_getPortalObject
		GEODE_CONCEPT_FUNCTION_CHECK(getPortalObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTimeStamp
		#define GEODE_CONCEPT_CHECK_getTimeStamp
		GEODE_CONCEPT_FUNCTION_CHECK(getTimeStamp) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setActiveEnterEffect
		#define GEODE_CONCEPT_CHECK_setActiveEnterEffect
		GEODE_CONCEPT_FUNCTION_CHECK(setActiveEnterEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCameraPos
		#define GEODE_CONCEPT_CHECK_setCameraPos
		GEODE_CONCEPT_FUNCTION_CHECK(setCameraPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setColorManagerState
		#define GEODE_CONCEPT_CHECK_setColorManagerState
		GEODE_CONCEPT_FUNCTION_CHECK(setColorManagerState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDualMode
		#define GEODE_CONCEPT_CHECK_setDualMode
		GEODE_CONCEPT_FUNCTION_CHECK(setDualMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIsFlipped
		#define GEODE_CONCEPT_CHECK_setIsFlipped
		GEODE_CONCEPT_FUNCTION_CHECK(setIsFlipped) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setObject
		#define GEODE_CONCEPT_CHECK_setObject
		GEODE_CONCEPT_FUNCTION_CHECK(setObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPlayerCheck01
		#define GEODE_CONCEPT_CHECK_setPlayerCheck01
		GEODE_CONCEPT_FUNCTION_CHECK(setPlayerCheck01) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPlayerCheck02
		#define GEODE_CONCEPT_CHECK_setPlayerCheck02
		GEODE_CONCEPT_FUNCTION_CHECK(setPlayerCheck02) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPortalObject
		#define GEODE_CONCEPT_CHECK_setPortalObject
		GEODE_CONCEPT_FUNCTION_CHECK(setPortalObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTimeStamp
		#define GEODE_CONCEPT_CHECK_setTimeStamp
		GEODE_CONCEPT_FUNCTION_CHECK(setTimeStamp) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CheckpointObject> : ModifyBase<ModifyDerive<Der, CheckpointObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CheckpointObject>>;
		using ModifyBase<ModifyDerive<Der, CheckpointObject>>::ModifyBase;
		using Base = CheckpointObject;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CheckpointObject, create, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CheckpointObject, getActiveEnterEffect, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CheckpointObject, getCameraPos, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CheckpointObject, getColorAction, ColorAction*, cocos2d::ccColor3B)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CheckpointObject, getColorManagerState, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CheckpointObject, getDualMode, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CheckpointObject, getIsFlipped, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CheckpointObject, getObject, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CheckpointObject, getPlayerCheck01, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CheckpointObject, getPlayerCheck02, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CheckpointObject, getPortalObject, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CheckpointObject, getTimeStamp, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CheckpointObject, setActiveEnterEffect, EnterEffect)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CheckpointObject, setCameraPos, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CheckpointObject, setColorManagerState, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CheckpointObject, setDualMode, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CheckpointObject, setIsFlipped, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CheckpointObject, setObject, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CheckpointObject, setPlayerCheck01, PlayerCheckpoint*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CheckpointObject, setPlayerCheck02, PlayerCheckpoint*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CheckpointObject, setPortalObject, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CheckpointObject, setTimeStamp, double)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CheckpointObject, init, )
		}
	};
}
