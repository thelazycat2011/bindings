#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/DrawGridLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_addPlayer2Point
		#define GEODE_STATICS_addPlayer2Point
		GEODE_AS_STATIC_FUNCTION(addPlayer2Point) 
	#endif

	#ifndef GEODE_STATICS_addPlayerPoint
		#define GEODE_STATICS_addPlayerPoint
		GEODE_AS_STATIC_FUNCTION(addPlayerPoint) 
	#endif

	#ifndef GEODE_STATICS_addToEffects
		#define GEODE_STATICS_addToEffects
		GEODE_AS_STATIC_FUNCTION(addToEffects) 
	#endif

	#ifndef GEODE_STATICS_addToGuides
		#define GEODE_STATICS_addToGuides
		GEODE_AS_STATIC_FUNCTION(addToGuides) 
	#endif

	#ifndef GEODE_STATICS_addToSpeedObjects
		#define GEODE_STATICS_addToSpeedObjects
		GEODE_AS_STATIC_FUNCTION(addToSpeedObjects) 
	#endif

	#ifndef GEODE_STATICS_clearPlayerPoints
		#define GEODE_STATICS_clearPlayerPoints
		GEODE_AS_STATIC_FUNCTION(clearPlayerPoints) 
	#endif

	#ifndef GEODE_STATICS_getActiveGridNodeSize
		#define GEODE_STATICS_getActiveGridNodeSize
		GEODE_AS_STATIC_FUNCTION(getActiveGridNodeSize) 
	#endif

	#ifndef GEODE_STATICS_getEffectSortDirty
		#define GEODE_STATICS_getEffectSortDirty
		GEODE_AS_STATIC_FUNCTION(getEffectSortDirty) 
	#endif

	#ifndef GEODE_STATICS_getLastMusicX
		#define GEODE_STATICS_getLastMusicX
		GEODE_AS_STATIC_FUNCTION(getLastMusicX) 
	#endif

	#ifndef GEODE_STATICS_getPortalMinMax
		#define GEODE_STATICS_getPortalMinMax
		GEODE_AS_STATIC_FUNCTION(getPortalMinMax) 
	#endif

	#ifndef GEODE_STATICS_getTimeNeedsUpdate
		#define GEODE_STATICS_getTimeNeedsUpdate
		GEODE_AS_STATIC_FUNCTION(getTimeNeedsUpdate) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_loadTimeMarkers
		#define GEODE_STATICS_loadTimeMarkers
		GEODE_AS_STATIC_FUNCTION(loadTimeMarkers) 
	#endif

	#ifndef GEODE_STATICS_removeFromEffects
		#define GEODE_STATICS_removeFromEffects
		GEODE_AS_STATIC_FUNCTION(removeFromEffects) 
	#endif

	#ifndef GEODE_STATICS_removeFromGuides
		#define GEODE_STATICS_removeFromGuides
		GEODE_AS_STATIC_FUNCTION(removeFromGuides) 
	#endif

	#ifndef GEODE_STATICS_removeFromSpeedObjects
		#define GEODE_STATICS_removeFromSpeedObjects
		GEODE_AS_STATIC_FUNCTION(removeFromSpeedObjects) 
	#endif

	#ifndef GEODE_STATICS_setActiveGridNodeSize
		#define GEODE_STATICS_setActiveGridNodeSize
		GEODE_AS_STATIC_FUNCTION(setActiveGridNodeSize) 
	#endif

	#ifndef GEODE_STATICS_setEffectSortDirty
		#define GEODE_STATICS_setEffectSortDirty
		GEODE_AS_STATIC_FUNCTION(setEffectSortDirty) 
	#endif

	#ifndef GEODE_STATICS_sortSpeedObjects
		#define GEODE_STATICS_sortSpeedObjects
		GEODE_AS_STATIC_FUNCTION(sortSpeedObjects) 
	#endif

	#ifndef GEODE_STATICS_timeForXPos
		#define GEODE_STATICS_timeForXPos
		GEODE_AS_STATIC_FUNCTION(timeForXPos) 
	#endif

	#ifndef GEODE_STATICS_updateTimeMarkers
		#define GEODE_STATICS_updateTimeMarkers
		GEODE_AS_STATIC_FUNCTION(updateTimeMarkers) 
	#endif

	#ifndef GEODE_STATICS_xPosForTime
		#define GEODE_STATICS_xPosForTime
		GEODE_AS_STATIC_FUNCTION(xPosForTime) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addPlayer2Point
		#define GEODE_CONCEPT_CHECK_addPlayer2Point
		GEODE_CONCEPT_FUNCTION_CHECK(addPlayer2Point) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addPlayerPoint
		#define GEODE_CONCEPT_CHECK_addPlayerPoint
		GEODE_CONCEPT_FUNCTION_CHECK(addPlayerPoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToEffects
		#define GEODE_CONCEPT_CHECK_addToEffects
		GEODE_CONCEPT_FUNCTION_CHECK(addToEffects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToGuides
		#define GEODE_CONCEPT_CHECK_addToGuides
		GEODE_CONCEPT_FUNCTION_CHECK(addToGuides) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToSpeedObjects
		#define GEODE_CONCEPT_CHECK_addToSpeedObjects
		GEODE_CONCEPT_FUNCTION_CHECK(addToSpeedObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clearPlayerPoints
		#define GEODE_CONCEPT_CHECK_clearPlayerPoints
		GEODE_CONCEPT_FUNCTION_CHECK(clearPlayerPoints) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getActiveGridNodeSize
		#define GEODE_CONCEPT_CHECK_getActiveGridNodeSize
		GEODE_CONCEPT_FUNCTION_CHECK(getActiveGridNodeSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEffectSortDirty
		#define GEODE_CONCEPT_CHECK_getEffectSortDirty
		GEODE_CONCEPT_FUNCTION_CHECK(getEffectSortDirty) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLastMusicX
		#define GEODE_CONCEPT_CHECK_getLastMusicX
		GEODE_CONCEPT_FUNCTION_CHECK(getLastMusicX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPortalMinMax
		#define GEODE_CONCEPT_CHECK_getPortalMinMax
		GEODE_CONCEPT_FUNCTION_CHECK(getPortalMinMax) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTimeNeedsUpdate
		#define GEODE_CONCEPT_CHECK_getTimeNeedsUpdate
		GEODE_CONCEPT_FUNCTION_CHECK(getTimeNeedsUpdate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadTimeMarkers
		#define GEODE_CONCEPT_CHECK_loadTimeMarkers
		GEODE_CONCEPT_FUNCTION_CHECK(loadTimeMarkers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeFromEffects
		#define GEODE_CONCEPT_CHECK_removeFromEffects
		GEODE_CONCEPT_FUNCTION_CHECK(removeFromEffects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeFromGuides
		#define GEODE_CONCEPT_CHECK_removeFromGuides
		GEODE_CONCEPT_FUNCTION_CHECK(removeFromGuides) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeFromSpeedObjects
		#define GEODE_CONCEPT_CHECK_removeFromSpeedObjects
		GEODE_CONCEPT_FUNCTION_CHECK(removeFromSpeedObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setActiveGridNodeSize
		#define GEODE_CONCEPT_CHECK_setActiveGridNodeSize
		GEODE_CONCEPT_FUNCTION_CHECK(setActiveGridNodeSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setEffectSortDirty
		#define GEODE_CONCEPT_CHECK_setEffectSortDirty
		GEODE_CONCEPT_FUNCTION_CHECK(setEffectSortDirty) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sortSpeedObjects
		#define GEODE_CONCEPT_CHECK_sortSpeedObjects
		GEODE_CONCEPT_FUNCTION_CHECK(sortSpeedObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_timeForXPos
		#define GEODE_CONCEPT_CHECK_timeForXPos
		GEODE_CONCEPT_FUNCTION_CHECK(timeForXPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTimeMarkers
		#define GEODE_CONCEPT_CHECK_updateTimeMarkers
		GEODE_CONCEPT_FUNCTION_CHECK(updateTimeMarkers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_xPosForTime
		#define GEODE_CONCEPT_CHECK_xPosForTime
		GEODE_CONCEPT_FUNCTION_CHECK(xPosForTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_update
		#define GEODE_CONCEPT_CHECK_update
		GEODE_CONCEPT_FUNCTION_CHECK(update) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, DrawGridLayer> : ModifyBase<ModifyDerive<Der, DrawGridLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, DrawGridLayer>>;
		using ModifyBase<ModifyDerive<Der, DrawGridLayer>>::ModifyBase;
		using Base = DrawGridLayer;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DrawGridLayer, create, cocos2d::CCNode*, LevelEditorLayer*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DrawGridLayer, addPlayer2Point, cocos2d::CCPoint, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DrawGridLayer, addPlayerPoint, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DrawGridLayer, addToEffects, EffectGameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DrawGridLayer, addToGuides, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DrawGridLayer, addToSpeedObjects, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DrawGridLayer, clearPlayerPoints, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DrawGridLayer, getActiveGridNodeSize, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DrawGridLayer, getEffectSortDirty, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DrawGridLayer, getLastMusicX, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DrawGridLayer, getPortalMinMax, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DrawGridLayer, getTimeNeedsUpdate, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DrawGridLayer, init, cocos2d::CCNode*, LevelEditorLayer*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DrawGridLayer, loadTimeMarkers, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DrawGridLayer, removeFromEffects, EffectGameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DrawGridLayer, removeFromGuides, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DrawGridLayer, removeFromSpeedObjects, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DrawGridLayer, setActiveGridNodeSize, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DrawGridLayer, setEffectSortDirty, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DrawGridLayer, sortSpeedObjects, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DrawGridLayer, timeForXPos, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DrawGridLayer, updateTimeMarkers, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DrawGridLayer, xPosForTime, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DrawGridLayer, update, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DrawGridLayer, draw, )
		}
	};
}
