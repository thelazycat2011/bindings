#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GroupCommandObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createFromString
		#define GEODE_STATICS_createFromString
		GEODE_AS_STATIC_FUNCTION(createFromString) 
	#endif

	#ifndef GEODE_STATICS_easeToText
		#define GEODE_STATICS_easeToText
		GEODE_AS_STATIC_FUNCTION(easeToText) 
	#endif

	#ifndef GEODE_STATICS_getDeltaTime
		#define GEODE_STATICS_getDeltaTime
		GEODE_AS_STATIC_FUNCTION(getDeltaTime) 
	#endif

	#ifndef GEODE_STATICS_getDeltaValue
		#define GEODE_STATICS_getDeltaValue
		GEODE_AS_STATIC_FUNCTION(getDeltaValue) 
	#endif

	#ifndef GEODE_STATICS_getDuration
		#define GEODE_STATICS_getDuration
		GEODE_AS_STATIC_FUNCTION(getDuration) 
	#endif

	#ifndef GEODE_STATICS_getEasedAction
		#define GEODE_STATICS_getEasedAction
		GEODE_AS_STATIC_FUNCTION(getEasedAction) 
	#endif

	#ifndef GEODE_STATICS_getEasing
		#define GEODE_STATICS_getEasing
		GEODE_AS_STATIC_FUNCTION(getEasing) 
	#endif

	#ifndef GEODE_STATICS_getIsFinished
		#define GEODE_STATICS_getIsFinished
		GEODE_AS_STATIC_FUNCTION(getIsFinished) 
	#endif

	#ifndef GEODE_STATICS_getLastRound
		#define GEODE_STATICS_getLastRound
		GEODE_AS_STATIC_FUNCTION(getLastRound) 
	#endif

	#ifndef GEODE_STATICS_getLockX
		#define GEODE_STATICS_getLockX
		GEODE_AS_STATIC_FUNCTION(getLockX) 
	#endif

	#ifndef GEODE_STATICS_getLockY
		#define GEODE_STATICS_getLockY
		GEODE_AS_STATIC_FUNCTION(getLockY) 
	#endif

	#ifndef GEODE_STATICS_getSaveString
		#define GEODE_STATICS_getSaveString
		GEODE_AS_STATIC_FUNCTION(getSaveString) 
	#endif

	#ifndef GEODE_STATICS_getTarget
		#define GEODE_STATICS_getTarget
		GEODE_AS_STATIC_FUNCTION(getTarget) 
	#endif

	#ifndef GEODE_STATICS_getTargetGroupID
		#define GEODE_STATICS_getTargetGroupID
		GEODE_AS_STATIC_FUNCTION(getTargetGroupID) 
	#endif

	#ifndef GEODE_STATICS_getTotalValue
		#define GEODE_STATICS_getTotalValue
		GEODE_AS_STATIC_FUNCTION(getTotalValue) 
	#endif

	#ifndef GEODE_STATICS_getValue
		#define GEODE_STATICS_getValue
		GEODE_AS_STATIC_FUNCTION(getValue) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_resetDelta
		#define GEODE_STATICS_resetDelta
		GEODE_AS_STATIC_FUNCTION(resetDelta) 
	#endif

	#ifndef GEODE_STATICS_runMoveCommand
		#define GEODE_STATICS_runMoveCommand
		GEODE_AS_STATIC_FUNCTION(runMoveCommand) 
	#endif

	#ifndef GEODE_STATICS_setDeltaTime
		#define GEODE_STATICS_setDeltaTime
		GEODE_AS_STATIC_FUNCTION(setDeltaTime) 
	#endif

	#ifndef GEODE_STATICS_setDeltaValue
		#define GEODE_STATICS_setDeltaValue
		GEODE_AS_STATIC_FUNCTION(setDeltaValue) 
	#endif

	#ifndef GEODE_STATICS_setDuration
		#define GEODE_STATICS_setDuration
		GEODE_AS_STATIC_FUNCTION(setDuration) 
	#endif

	#ifndef GEODE_STATICS_setEasing
		#define GEODE_STATICS_setEasing
		GEODE_AS_STATIC_FUNCTION(setEasing) 
	#endif

	#ifndef GEODE_STATICS_setIsFinished
		#define GEODE_STATICS_setIsFinished
		GEODE_AS_STATIC_FUNCTION(setIsFinished) 
	#endif

	#ifndef GEODE_STATICS_setLastRound
		#define GEODE_STATICS_setLastRound
		GEODE_AS_STATIC_FUNCTION(setLastRound) 
	#endif

	#ifndef GEODE_STATICS_setLockX
		#define GEODE_STATICS_setLockX
		GEODE_AS_STATIC_FUNCTION(setLockX) 
	#endif

	#ifndef GEODE_STATICS_setLockY
		#define GEODE_STATICS_setLockY
		GEODE_AS_STATIC_FUNCTION(setLockY) 
	#endif

	#ifndef GEODE_STATICS_setTarget
		#define GEODE_STATICS_setTarget
		GEODE_AS_STATIC_FUNCTION(setTarget) 
	#endif

	#ifndef GEODE_STATICS_setTargetGroupID
		#define GEODE_STATICS_setTargetGroupID
		GEODE_AS_STATIC_FUNCTION(setTargetGroupID) 
	#endif

	#ifndef GEODE_STATICS_setTotalValue
		#define GEODE_STATICS_setTotalValue
		GEODE_AS_STATIC_FUNCTION(setTotalValue) 
	#endif

	#ifndef GEODE_STATICS_setValue
		#define GEODE_STATICS_setValue
		GEODE_AS_STATIC_FUNCTION(setValue) 
	#endif

	#ifndef GEODE_STATICS_step
		#define GEODE_STATICS_step
		GEODE_AS_STATIC_FUNCTION(step) 
	#endif

	#ifndef GEODE_STATICS_updateTweenAction
		#define GEODE_STATICS_updateTweenAction
		GEODE_AS_STATIC_FUNCTION(updateTweenAction) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createFromString
		#define GEODE_CONCEPT_CHECK_createFromString
		GEODE_CONCEPT_FUNCTION_CHECK(createFromString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_easeToText
		#define GEODE_CONCEPT_CHECK_easeToText
		GEODE_CONCEPT_FUNCTION_CHECK(easeToText) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDeltaTime
		#define GEODE_CONCEPT_CHECK_getDeltaTime
		GEODE_CONCEPT_FUNCTION_CHECK(getDeltaTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDeltaValue
		#define GEODE_CONCEPT_CHECK_getDeltaValue
		GEODE_CONCEPT_FUNCTION_CHECK(getDeltaValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDuration
		#define GEODE_CONCEPT_CHECK_getDuration
		GEODE_CONCEPT_FUNCTION_CHECK(getDuration) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEasedAction
		#define GEODE_CONCEPT_CHECK_getEasedAction
		GEODE_CONCEPT_FUNCTION_CHECK(getEasedAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEasing
		#define GEODE_CONCEPT_CHECK_getEasing
		GEODE_CONCEPT_FUNCTION_CHECK(getEasing) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIsFinished
		#define GEODE_CONCEPT_CHECK_getIsFinished
		GEODE_CONCEPT_FUNCTION_CHECK(getIsFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLastRound
		#define GEODE_CONCEPT_CHECK_getLastRound
		GEODE_CONCEPT_FUNCTION_CHECK(getLastRound) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLockX
		#define GEODE_CONCEPT_CHECK_getLockX
		GEODE_CONCEPT_FUNCTION_CHECK(getLockX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLockY
		#define GEODE_CONCEPT_CHECK_getLockY
		GEODE_CONCEPT_FUNCTION_CHECK(getLockY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSaveString
		#define GEODE_CONCEPT_CHECK_getSaveString
		GEODE_CONCEPT_FUNCTION_CHECK(getSaveString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTarget
		#define GEODE_CONCEPT_CHECK_getTarget
		GEODE_CONCEPT_FUNCTION_CHECK(getTarget) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTargetGroupID
		#define GEODE_CONCEPT_CHECK_getTargetGroupID
		GEODE_CONCEPT_FUNCTION_CHECK(getTargetGroupID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTotalValue
		#define GEODE_CONCEPT_CHECK_getTotalValue
		GEODE_CONCEPT_FUNCTION_CHECK(getTotalValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getValue
		#define GEODE_CONCEPT_CHECK_getValue
		GEODE_CONCEPT_FUNCTION_CHECK(getValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetDelta
		#define GEODE_CONCEPT_CHECK_resetDelta
		GEODE_CONCEPT_FUNCTION_CHECK(resetDelta) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_runMoveCommand
		#define GEODE_CONCEPT_CHECK_runMoveCommand
		GEODE_CONCEPT_FUNCTION_CHECK(runMoveCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDeltaTime
		#define GEODE_CONCEPT_CHECK_setDeltaTime
		GEODE_CONCEPT_FUNCTION_CHECK(setDeltaTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDeltaValue
		#define GEODE_CONCEPT_CHECK_setDeltaValue
		GEODE_CONCEPT_FUNCTION_CHECK(setDeltaValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDuration
		#define GEODE_CONCEPT_CHECK_setDuration
		GEODE_CONCEPT_FUNCTION_CHECK(setDuration) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setEasing
		#define GEODE_CONCEPT_CHECK_setEasing
		GEODE_CONCEPT_FUNCTION_CHECK(setEasing) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIsFinished
		#define GEODE_CONCEPT_CHECK_setIsFinished
		GEODE_CONCEPT_FUNCTION_CHECK(setIsFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLastRound
		#define GEODE_CONCEPT_CHECK_setLastRound
		GEODE_CONCEPT_FUNCTION_CHECK(setLastRound) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLockX
		#define GEODE_CONCEPT_CHECK_setLockX
		GEODE_CONCEPT_FUNCTION_CHECK(setLockX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLockY
		#define GEODE_CONCEPT_CHECK_setLockY
		GEODE_CONCEPT_FUNCTION_CHECK(setLockY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTarget
		#define GEODE_CONCEPT_CHECK_setTarget
		GEODE_CONCEPT_FUNCTION_CHECK(setTarget) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTargetGroupID
		#define GEODE_CONCEPT_CHECK_setTargetGroupID
		GEODE_CONCEPT_FUNCTION_CHECK(setTargetGroupID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTotalValue
		#define GEODE_CONCEPT_CHECK_setTotalValue
		GEODE_CONCEPT_FUNCTION_CHECK(setTotalValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setValue
		#define GEODE_CONCEPT_CHECK_setValue
		GEODE_CONCEPT_FUNCTION_CHECK(setValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_step
		#define GEODE_CONCEPT_CHECK_step
		GEODE_CONCEPT_FUNCTION_CHECK(step) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTweenAction
		#define GEODE_CONCEPT_CHECK_updateTweenAction
		GEODE_CONCEPT_FUNCTION_CHECK(updateTweenAction) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GroupCommandObject> : ModifyBase<ModifyDerive<Der, GroupCommandObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GroupCommandObject>>;
		using ModifyBase<ModifyDerive<Der, GroupCommandObject>>::ModifyBase;
		using Base = GroupCommandObject;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GroupCommandObject, create, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GroupCommandObject, createFromString, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GroupCommandObject, easeToText, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GroupCommandObject, getDeltaTime, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GroupCommandObject, getDeltaValue, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GroupCommandObject, getDuration, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GroupCommandObject, getEasedAction, cocos2d::CCActionInterval*, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GroupCommandObject, getEasing, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GroupCommandObject, getIsFinished, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GroupCommandObject, getLastRound, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GroupCommandObject, getLockX, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GroupCommandObject, getLockY, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GroupCommandObject, getSaveString, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GroupCommandObject, getTarget, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GroupCommandObject, getTargetGroupID, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GroupCommandObject, getTotalValue, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GroupCommandObject, getValue, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GroupCommandObject, init, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GroupCommandObject, resetDelta, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GroupCommandObject, runMoveCommand, cocos2d::CCPoint, float, int, bool, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GroupCommandObject, setDeltaTime, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GroupCommandObject, setDeltaValue, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GroupCommandObject, setDuration, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GroupCommandObject, setEasing, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GroupCommandObject, setIsFinished, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GroupCommandObject, setLastRound, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GroupCommandObject, setLockX, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GroupCommandObject, setLockY, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GroupCommandObject, setTarget, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GroupCommandObject, setTargetGroupID, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GroupCommandObject, setTotalValue, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GroupCommandObject, setValue, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GroupCommandObject, step, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GroupCommandObject, updateTweenAction, float, char const*)
		}
	};
}
