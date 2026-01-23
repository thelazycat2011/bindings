#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/PlayerCheckpoint.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getBirdMode
		#define GEODE_STATICS_getBirdMode
		GEODE_AS_STATIC_FUNCTION(getBirdMode) 
	#endif

	#ifndef GEODE_STATICS_getCanJump
		#define GEODE_STATICS_getCanJump
		GEODE_AS_STATIC_FUNCTION(getCanJump) 
	#endif

	#ifndef GEODE_STATICS_getDartMode
		#define GEODE_STATICS_getDartMode
		GEODE_AS_STATIC_FUNCTION(getDartMode) 
	#endif

	#ifndef GEODE_STATICS_getFlipGravity
		#define GEODE_STATICS_getFlipGravity
		GEODE_AS_STATIC_FUNCTION(getFlipGravity) 
	#endif

	#ifndef GEODE_STATICS_getFlyMode
		#define GEODE_STATICS_getFlyMode
		GEODE_AS_STATIC_FUNCTION(getFlyMode) 
	#endif

	#ifndef GEODE_STATICS_getGhostType
		#define GEODE_STATICS_getGhostType
		GEODE_AS_STATIC_FUNCTION(getGhostType) 
	#endif

	#ifndef GEODE_STATICS_getIsScaled
		#define GEODE_STATICS_getIsScaled
		GEODE_AS_STATIC_FUNCTION(getIsScaled) 
	#endif

	#ifndef GEODE_STATICS_getPlayerPos
		#define GEODE_STATICS_getPlayerPos
		GEODE_AS_STATIC_FUNCTION(getPlayerPos) 
	#endif

	#ifndef GEODE_STATICS_getPlayerYVel
		#define GEODE_STATICS_getPlayerYVel
		GEODE_AS_STATIC_FUNCTION(getPlayerYVel) 
	#endif

	#ifndef GEODE_STATICS_getRobotMode
		#define GEODE_STATICS_getRobotMode
		GEODE_AS_STATIC_FUNCTION(getRobotMode) 
	#endif

	#ifndef GEODE_STATICS_getRollMode
		#define GEODE_STATICS_getRollMode
		GEODE_AS_STATIC_FUNCTION(getRollMode) 
	#endif

	#ifndef GEODE_STATICS_getTimeMod
		#define GEODE_STATICS_getTimeMod
		GEODE_AS_STATIC_FUNCTION(getTimeMod) 
	#endif

	#ifndef GEODE_STATICS_setBirdMode
		#define GEODE_STATICS_setBirdMode
		GEODE_AS_STATIC_FUNCTION(setBirdMode) 
	#endif

	#ifndef GEODE_STATICS_setCanJump
		#define GEODE_STATICS_setCanJump
		GEODE_AS_STATIC_FUNCTION(setCanJump) 
	#endif

	#ifndef GEODE_STATICS_setDartMode
		#define GEODE_STATICS_setDartMode
		GEODE_AS_STATIC_FUNCTION(setDartMode) 
	#endif

	#ifndef GEODE_STATICS_setFlipGravity
		#define GEODE_STATICS_setFlipGravity
		GEODE_AS_STATIC_FUNCTION(setFlipGravity) 
	#endif

	#ifndef GEODE_STATICS_setFlyMode
		#define GEODE_STATICS_setFlyMode
		GEODE_AS_STATIC_FUNCTION(setFlyMode) 
	#endif

	#ifndef GEODE_STATICS_setGhostType
		#define GEODE_STATICS_setGhostType
		GEODE_AS_STATIC_FUNCTION(setGhostType) 
	#endif

	#ifndef GEODE_STATICS_setIsScaled
		#define GEODE_STATICS_setIsScaled
		GEODE_AS_STATIC_FUNCTION(setIsScaled) 
	#endif

	#ifndef GEODE_STATICS_setPlayerPos
		#define GEODE_STATICS_setPlayerPos
		GEODE_AS_STATIC_FUNCTION(setPlayerPos) 
	#endif

	#ifndef GEODE_STATICS_setPlayerYVel
		#define GEODE_STATICS_setPlayerYVel
		GEODE_AS_STATIC_FUNCTION(setPlayerYVel) 
	#endif

	#ifndef GEODE_STATICS_setRobotMode
		#define GEODE_STATICS_setRobotMode
		GEODE_AS_STATIC_FUNCTION(setRobotMode) 
	#endif

	#ifndef GEODE_STATICS_setRollMode
		#define GEODE_STATICS_setRollMode
		GEODE_AS_STATIC_FUNCTION(setRollMode) 
	#endif

	#ifndef GEODE_STATICS_setTimeMod
		#define GEODE_STATICS_setTimeMod
		GEODE_AS_STATIC_FUNCTION(setTimeMod) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBirdMode
		#define GEODE_CONCEPT_CHECK_getBirdMode
		GEODE_CONCEPT_FUNCTION_CHECK(getBirdMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCanJump
		#define GEODE_CONCEPT_CHECK_getCanJump
		GEODE_CONCEPT_FUNCTION_CHECK(getCanJump) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDartMode
		#define GEODE_CONCEPT_CHECK_getDartMode
		GEODE_CONCEPT_FUNCTION_CHECK(getDartMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFlipGravity
		#define GEODE_CONCEPT_CHECK_getFlipGravity
		GEODE_CONCEPT_FUNCTION_CHECK(getFlipGravity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFlyMode
		#define GEODE_CONCEPT_CHECK_getFlyMode
		GEODE_CONCEPT_FUNCTION_CHECK(getFlyMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGhostType
		#define GEODE_CONCEPT_CHECK_getGhostType
		GEODE_CONCEPT_FUNCTION_CHECK(getGhostType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIsScaled
		#define GEODE_CONCEPT_CHECK_getIsScaled
		GEODE_CONCEPT_FUNCTION_CHECK(getIsScaled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPlayerPos
		#define GEODE_CONCEPT_CHECK_getPlayerPos
		GEODE_CONCEPT_FUNCTION_CHECK(getPlayerPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPlayerYVel
		#define GEODE_CONCEPT_CHECK_getPlayerYVel
		GEODE_CONCEPT_FUNCTION_CHECK(getPlayerYVel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRobotMode
		#define GEODE_CONCEPT_CHECK_getRobotMode
		GEODE_CONCEPT_FUNCTION_CHECK(getRobotMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRollMode
		#define GEODE_CONCEPT_CHECK_getRollMode
		GEODE_CONCEPT_FUNCTION_CHECK(getRollMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTimeMod
		#define GEODE_CONCEPT_CHECK_getTimeMod
		GEODE_CONCEPT_FUNCTION_CHECK(getTimeMod) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setBirdMode
		#define GEODE_CONCEPT_CHECK_setBirdMode
		GEODE_CONCEPT_FUNCTION_CHECK(setBirdMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCanJump
		#define GEODE_CONCEPT_CHECK_setCanJump
		GEODE_CONCEPT_FUNCTION_CHECK(setCanJump) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDartMode
		#define GEODE_CONCEPT_CHECK_setDartMode
		GEODE_CONCEPT_FUNCTION_CHECK(setDartMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFlipGravity
		#define GEODE_CONCEPT_CHECK_setFlipGravity
		GEODE_CONCEPT_FUNCTION_CHECK(setFlipGravity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFlyMode
		#define GEODE_CONCEPT_CHECK_setFlyMode
		GEODE_CONCEPT_FUNCTION_CHECK(setFlyMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setGhostType
		#define GEODE_CONCEPT_CHECK_setGhostType
		GEODE_CONCEPT_FUNCTION_CHECK(setGhostType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIsScaled
		#define GEODE_CONCEPT_CHECK_setIsScaled
		GEODE_CONCEPT_FUNCTION_CHECK(setIsScaled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPlayerPos
		#define GEODE_CONCEPT_CHECK_setPlayerPos
		GEODE_CONCEPT_FUNCTION_CHECK(setPlayerPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPlayerYVel
		#define GEODE_CONCEPT_CHECK_setPlayerYVel
		GEODE_CONCEPT_FUNCTION_CHECK(setPlayerYVel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRobotMode
		#define GEODE_CONCEPT_CHECK_setRobotMode
		GEODE_CONCEPT_FUNCTION_CHECK(setRobotMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRollMode
		#define GEODE_CONCEPT_CHECK_setRollMode
		GEODE_CONCEPT_FUNCTION_CHECK(setRollMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTimeMod
		#define GEODE_CONCEPT_CHECK_setTimeMod
		GEODE_CONCEPT_FUNCTION_CHECK(setTimeMod) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, PlayerCheckpoint> : ModifyBase<ModifyDerive<Der, PlayerCheckpoint>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, PlayerCheckpoint>>;
		using ModifyBase<ModifyDerive<Der, PlayerCheckpoint>>::ModifyBase;
		using Base = PlayerCheckpoint;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerCheckpoint, create, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerCheckpoint, getBirdMode, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerCheckpoint, getCanJump, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerCheckpoint, getDartMode, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerCheckpoint, getFlipGravity, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerCheckpoint, getFlyMode, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerCheckpoint, getGhostType, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerCheckpoint, getIsScaled, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerCheckpoint, getPlayerPos, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerCheckpoint, getPlayerYVel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerCheckpoint, getRobotMode, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerCheckpoint, getRollMode, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerCheckpoint, getTimeMod, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerCheckpoint, setBirdMode, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerCheckpoint, setCanJump, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerCheckpoint, setDartMode, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerCheckpoint, setFlipGravity, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerCheckpoint, setFlyMode, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerCheckpoint, setGhostType, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerCheckpoint, setIsScaled, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerCheckpoint, setPlayerPos, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerCheckpoint, setPlayerYVel, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerCheckpoint, setRobotMode, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerCheckpoint, setRollMode, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerCheckpoint, setTimeMod, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerCheckpoint, init, )
		}
	};
}
