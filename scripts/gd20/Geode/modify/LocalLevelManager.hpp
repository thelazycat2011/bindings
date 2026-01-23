#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LocalLevelManager.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sharedState
		#define GEODE_STATICS_sharedState
		GEODE_AS_STATIC_FUNCTION(sharedState) 
	#endif

	#ifndef GEODE_STATICS_getAllLevelsInDict
		#define GEODE_STATICS_getAllLevelsInDict
		GEODE_AS_STATIC_FUNCTION(getAllLevelsInDict) 
	#endif

	#ifndef GEODE_STATICS_getAllLevelsWithName
		#define GEODE_STATICS_getAllLevelsWithName
		GEODE_AS_STATIC_FUNCTION(getAllLevelsWithName) 
	#endif

	#ifndef GEODE_STATICS_getLevelsInNameGroups
		#define GEODE_STATICS_getLevelsInNameGroups
		GEODE_AS_STATIC_FUNCTION(getLevelsInNameGroups) 
	#endif

	#ifndef GEODE_STATICS_getLoadString
		#define GEODE_STATICS_getLoadString
		GEODE_AS_STATIC_FUNCTION(getLoadString) 
	#endif

	#ifndef GEODE_STATICS_getLocalLevels
		#define GEODE_STATICS_getLocalLevels
		GEODE_AS_STATIC_FUNCTION(getLocalLevels) 
	#endif

	#ifndef GEODE_STATICS_getMainLevelString
		#define GEODE_STATICS_getMainLevelString
		GEODE_AS_STATIC_FUNCTION(getMainLevelString) 
	#endif

	#ifndef GEODE_STATICS_markLevelsAsUnmodified
		#define GEODE_STATICS_markLevelsAsUnmodified
		GEODE_AS_STATIC_FUNCTION(markLevelsAsUnmodified) 
	#endif

	#ifndef GEODE_STATICS_moveLevelToTop
		#define GEODE_STATICS_moveLevelToTop
		GEODE_AS_STATIC_FUNCTION(moveLevelToTop) 
	#endif

	#ifndef GEODE_STATICS_reorderLevels
		#define GEODE_STATICS_reorderLevels
		GEODE_AS_STATIC_FUNCTION(reorderLevels) 
	#endif

	#ifndef GEODE_STATICS_setLocalLevels
		#define GEODE_STATICS_setLocalLevels
		GEODE_AS_STATIC_FUNCTION(setLocalLevels) 
	#endif

	#ifndef GEODE_STATICS_updateLevelOrder
		#define GEODE_STATICS_updateLevelOrder
		GEODE_AS_STATIC_FUNCTION(updateLevelOrder) 
	#endif

	#ifndef GEODE_STATICS_updateLevelRevision
		#define GEODE_STATICS_updateLevelRevision
		GEODE_AS_STATIC_FUNCTION(updateLevelRevision) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_encodeDataTo
		#define GEODE_STATICS_encodeDataTo
		GEODE_AS_STATIC_FUNCTION(encodeDataTo) 
	#endif

	#ifndef GEODE_STATICS_dataLoaded
		#define GEODE_STATICS_dataLoaded
		GEODE_AS_STATIC_FUNCTION(dataLoaded) 
	#endif

	#ifndef GEODE_STATICS_firstLoad
		#define GEODE_STATICS_firstLoad
		GEODE_AS_STATIC_FUNCTION(firstLoad) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_sharedState
		#define GEODE_CONCEPT_CHECK_sharedState
		GEODE_CONCEPT_FUNCTION_CHECK(sharedState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAllLevelsInDict
		#define GEODE_CONCEPT_CHECK_getAllLevelsInDict
		GEODE_CONCEPT_FUNCTION_CHECK(getAllLevelsInDict) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAllLevelsWithName
		#define GEODE_CONCEPT_CHECK_getAllLevelsWithName
		GEODE_CONCEPT_FUNCTION_CHECK(getAllLevelsWithName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLevelsInNameGroups
		#define GEODE_CONCEPT_CHECK_getLevelsInNameGroups
		GEODE_CONCEPT_FUNCTION_CHECK(getLevelsInNameGroups) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLoadString
		#define GEODE_CONCEPT_CHECK_getLoadString
		GEODE_CONCEPT_FUNCTION_CHECK(getLoadString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLocalLevels
		#define GEODE_CONCEPT_CHECK_getLocalLevels
		GEODE_CONCEPT_FUNCTION_CHECK(getLocalLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMainLevelString
		#define GEODE_CONCEPT_CHECK_getMainLevelString
		GEODE_CONCEPT_FUNCTION_CHECK(getMainLevelString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_markLevelsAsUnmodified
		#define GEODE_CONCEPT_CHECK_markLevelsAsUnmodified
		GEODE_CONCEPT_FUNCTION_CHECK(markLevelsAsUnmodified) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_moveLevelToTop
		#define GEODE_CONCEPT_CHECK_moveLevelToTop
		GEODE_CONCEPT_FUNCTION_CHECK(moveLevelToTop) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reorderLevels
		#define GEODE_CONCEPT_CHECK_reorderLevels
		GEODE_CONCEPT_FUNCTION_CHECK(reorderLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLocalLevels
		#define GEODE_CONCEPT_CHECK_setLocalLevels
		GEODE_CONCEPT_FUNCTION_CHECK(setLocalLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLevelOrder
		#define GEODE_CONCEPT_CHECK_updateLevelOrder
		GEODE_CONCEPT_FUNCTION_CHECK(updateLevelOrder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLevelRevision
		#define GEODE_CONCEPT_CHECK_updateLevelRevision
		GEODE_CONCEPT_FUNCTION_CHECK(updateLevelRevision) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_encodeDataTo
		#define GEODE_CONCEPT_CHECK_encodeDataTo
		GEODE_CONCEPT_FUNCTION_CHECK(encodeDataTo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dataLoaded
		#define GEODE_CONCEPT_CHECK_dataLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(dataLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_firstLoad
		#define GEODE_CONCEPT_CHECK_firstLoad
		GEODE_CONCEPT_FUNCTION_CHECK(firstLoad) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LocalLevelManager> : ModifyBase<ModifyDerive<Der, LocalLevelManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LocalLevelManager>>;
		using ModifyBase<ModifyDerive<Der, LocalLevelManager>>::ModifyBase;
		using Base = LocalLevelManager;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LocalLevelManager, sharedState, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LocalLevelManager, getAllLevelsInDict, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LocalLevelManager, getAllLevelsWithName, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LocalLevelManager, getLevelsInNameGroups, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LocalLevelManager, getLoadString, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LocalLevelManager, getLocalLevels, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LocalLevelManager, getMainLevelString, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LocalLevelManager, markLevelsAsUnmodified, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LocalLevelManager, moveLevelToTop, GJGameLevel*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LocalLevelManager, reorderLevels, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LocalLevelManager, setLocalLevels, cocos2d::CCArray*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LocalLevelManager, updateLevelOrder, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LocalLevelManager, updateLevelRevision, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LocalLevelManager, init, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LocalLevelManager, encodeDataTo, DS_Dictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LocalLevelManager, dataLoaded, DS_Dictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LocalLevelManager, firstLoad, )
		}
	};
}
