#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/HardStreak.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_addPoint
		#define GEODE_STATICS_addPoint
		GEODE_AS_STATIC_FUNCTION(addPoint) 
	#endif

	#ifndef GEODE_STATICS_clearBehindXPos
		#define GEODE_STATICS_clearBehindXPos
		GEODE_AS_STATIC_FUNCTION(clearBehindXPos) 
	#endif

	#ifndef GEODE_STATICS_firstSetup
		#define GEODE_STATICS_firstSetup
		GEODE_AS_STATIC_FUNCTION(firstSetup) 
	#endif

	#ifndef GEODE_STATICS_getDisableDual
		#define GEODE_STATICS_getDisableDual
		GEODE_AS_STATIC_FUNCTION(getDisableDual) 
	#endif

	#ifndef GEODE_STATICS_getEndPoint
		#define GEODE_STATICS_getEndPoint
		GEODE_AS_STATIC_FUNCTION(getEndPoint) 
	#endif

	#ifndef GEODE_STATICS_getStrokeScale
		#define GEODE_STATICS_getStrokeScale
		GEODE_AS_STATIC_FUNCTION(getStrokeScale) 
	#endif

	#ifndef GEODE_STATICS_getStrokeScaleMod
		#define GEODE_STATICS_getStrokeScaleMod
		GEODE_AS_STATIC_FUNCTION(getStrokeScaleMod) 
	#endif

	#ifndef GEODE_STATICS_normalizeAngle
		#define GEODE_STATICS_normalizeAngle
		GEODE_AS_STATIC_FUNCTION(normalizeAngle) 
	#endif

	#ifndef GEODE_STATICS_quadCornerOffset
		#define GEODE_STATICS_quadCornerOffset
		GEODE_AS_STATIC_FUNCTION(quadCornerOffset) 
	#endif

	#ifndef GEODE_STATICS_reset
		#define GEODE_STATICS_reset
		GEODE_AS_STATIC_FUNCTION(reset) 
	#endif

	#ifndef GEODE_STATICS_resumeStroke
		#define GEODE_STATICS_resumeStroke
		GEODE_AS_STATIC_FUNCTION(resumeStroke) 
	#endif

	#ifndef GEODE_STATICS_setDisableDual
		#define GEODE_STATICS_setDisableDual
		GEODE_AS_STATIC_FUNCTION(setDisableDual) 
	#endif

	#ifndef GEODE_STATICS_setEndPoint
		#define GEODE_STATICS_setEndPoint
		GEODE_AS_STATIC_FUNCTION(setEndPoint) 
	#endif

	#ifndef GEODE_STATICS_setStrokeScale
		#define GEODE_STATICS_setStrokeScale
		GEODE_AS_STATIC_FUNCTION(setStrokeScale) 
	#endif

	#ifndef GEODE_STATICS_setStrokeScaleMod
		#define GEODE_STATICS_setStrokeScaleMod
		GEODE_AS_STATIC_FUNCTION(setStrokeScaleMod) 
	#endif

	#ifndef GEODE_STATICS_stopStroke
		#define GEODE_STATICS_stopStroke
		GEODE_AS_STATIC_FUNCTION(stopStroke) 
	#endif

	#ifndef GEODE_STATICS_updateStroke
		#define GEODE_STATICS_updateStroke
		GEODE_AS_STATIC_FUNCTION(updateStroke) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addPoint
		#define GEODE_CONCEPT_CHECK_addPoint
		GEODE_CONCEPT_FUNCTION_CHECK(addPoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clearBehindXPos
		#define GEODE_CONCEPT_CHECK_clearBehindXPos
		GEODE_CONCEPT_FUNCTION_CHECK(clearBehindXPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_firstSetup
		#define GEODE_CONCEPT_CHECK_firstSetup
		GEODE_CONCEPT_FUNCTION_CHECK(firstSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDisableDual
		#define GEODE_CONCEPT_CHECK_getDisableDual
		GEODE_CONCEPT_FUNCTION_CHECK(getDisableDual) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEndPoint
		#define GEODE_CONCEPT_CHECK_getEndPoint
		GEODE_CONCEPT_FUNCTION_CHECK(getEndPoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStrokeScale
		#define GEODE_CONCEPT_CHECK_getStrokeScale
		GEODE_CONCEPT_FUNCTION_CHECK(getStrokeScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStrokeScaleMod
		#define GEODE_CONCEPT_CHECK_getStrokeScaleMod
		GEODE_CONCEPT_FUNCTION_CHECK(getStrokeScaleMod) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_normalizeAngle
		#define GEODE_CONCEPT_CHECK_normalizeAngle
		GEODE_CONCEPT_FUNCTION_CHECK(normalizeAngle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_quadCornerOffset
		#define GEODE_CONCEPT_CHECK_quadCornerOffset
		GEODE_CONCEPT_FUNCTION_CHECK(quadCornerOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reset
		#define GEODE_CONCEPT_CHECK_reset
		GEODE_CONCEPT_FUNCTION_CHECK(reset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resumeStroke
		#define GEODE_CONCEPT_CHECK_resumeStroke
		GEODE_CONCEPT_FUNCTION_CHECK(resumeStroke) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDisableDual
		#define GEODE_CONCEPT_CHECK_setDisableDual
		GEODE_CONCEPT_FUNCTION_CHECK(setDisableDual) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setEndPoint
		#define GEODE_CONCEPT_CHECK_setEndPoint
		GEODE_CONCEPT_FUNCTION_CHECK(setEndPoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStrokeScale
		#define GEODE_CONCEPT_CHECK_setStrokeScale
		GEODE_CONCEPT_FUNCTION_CHECK(setStrokeScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStrokeScaleMod
		#define GEODE_CONCEPT_CHECK_setStrokeScaleMod
		GEODE_CONCEPT_FUNCTION_CHECK(setStrokeScaleMod) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopStroke
		#define GEODE_CONCEPT_CHECK_stopStroke
		GEODE_CONCEPT_FUNCTION_CHECK(stopStroke) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateStroke
		#define GEODE_CONCEPT_CHECK_updateStroke
		GEODE_CONCEPT_FUNCTION_CHECK(updateStroke) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, HardStreak> : ModifyBase<ModifyDerive<Der, HardStreak>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, HardStreak>>;
		using ModifyBase<ModifyDerive<Der, HardStreak>>::ModifyBase;
		using Base = HardStreak;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(HardStreak, create, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(HardStreak, addPoint, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(HardStreak, clearBehindXPos, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(HardStreak, firstSetup, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(HardStreak, getDisableDual, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(HardStreak, getEndPoint, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(HardStreak, getStrokeScale, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(HardStreak, getStrokeScaleMod, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(HardStreak, normalizeAngle, double)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(HardStreak, quadCornerOffset, cocos2d::CCPoint, cocos2d::CCPoint, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(HardStreak, reset, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(HardStreak, resumeStroke, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(HardStreak, setDisableDual, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(HardStreak, setEndPoint, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(HardStreak, setStrokeScale, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(HardStreak, setStrokeScaleMod, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(HardStreak, stopStroke, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(HardStreak, updateStroke, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(HardStreak, init, )
		}
	};
}
