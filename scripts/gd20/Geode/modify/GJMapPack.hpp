#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJMapPack.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_completedMaps
		#define GEODE_STATICS_completedMaps
		GEODE_AS_STATIC_FUNCTION(completedMaps) 
	#endif

	#ifndef GEODE_STATICS_getColor1
		#define GEODE_STATICS_getColor1
		GEODE_AS_STATIC_FUNCTION(getColor1) 
	#endif

	#ifndef GEODE_STATICS_getColor2
		#define GEODE_STATICS_getColor2
		GEODE_AS_STATIC_FUNCTION(getColor2) 
	#endif

	#ifndef GEODE_STATICS_getM_ID
		#define GEODE_STATICS_getM_ID
		GEODE_AS_STATIC_FUNCTION(getM_ID) 
	#endif

	#ifndef GEODE_STATICS_getPackCoins
		#define GEODE_STATICS_getPackCoins
		GEODE_AS_STATIC_FUNCTION(getPackCoins) 
	#endif

	#ifndef GEODE_STATICS_getPackDifficulty
		#define GEODE_STATICS_getPackDifficulty
		GEODE_AS_STATIC_FUNCTION(getPackDifficulty) 
	#endif

	#ifndef GEODE_STATICS_getPackID
		#define GEODE_STATICS_getPackID
		GEODE_AS_STATIC_FUNCTION(getPackID) 
	#endif

	#ifndef GEODE_STATICS_getPackLevels
		#define GEODE_STATICS_getPackLevels
		GEODE_AS_STATIC_FUNCTION(getPackLevels) 
	#endif

	#ifndef GEODE_STATICS_getPackName
		#define GEODE_STATICS_getPackName
		GEODE_AS_STATIC_FUNCTION(getPackName) 
	#endif

	#ifndef GEODE_STATICS_getPackStars
		#define GEODE_STATICS_getPackStars
		GEODE_AS_STATIC_FUNCTION(getPackStars) 
	#endif

	#ifndef GEODE_STATICS_hasCompletedMapPack
		#define GEODE_STATICS_hasCompletedMapPack
		GEODE_AS_STATIC_FUNCTION(hasCompletedMapPack) 
	#endif

	#ifndef GEODE_STATICS_parsePackColors
		#define GEODE_STATICS_parsePackColors
		GEODE_AS_STATIC_FUNCTION(parsePackColors) 
	#endif

	#ifndef GEODE_STATICS_parsePackLevels
		#define GEODE_STATICS_parsePackLevels
		GEODE_AS_STATIC_FUNCTION(parsePackLevels) 
	#endif

	#ifndef GEODE_STATICS_setColor1
		#define GEODE_STATICS_setColor1
		GEODE_AS_STATIC_FUNCTION(setColor1) 
	#endif

	#ifndef GEODE_STATICS_setColor2
		#define GEODE_STATICS_setColor2
		GEODE_AS_STATIC_FUNCTION(setColor2) 
	#endif

	#ifndef GEODE_STATICS_setPackCoins
		#define GEODE_STATICS_setPackCoins
		GEODE_AS_STATIC_FUNCTION(setPackCoins) 
	#endif

	#ifndef GEODE_STATICS_setPackDifficulty
		#define GEODE_STATICS_setPackDifficulty
		GEODE_AS_STATIC_FUNCTION(setPackDifficulty) 
	#endif

	#ifndef GEODE_STATICS_setPackID
		#define GEODE_STATICS_setPackID
		GEODE_AS_STATIC_FUNCTION(setPackID) 
	#endif

	#ifndef GEODE_STATICS_setPackLevels
		#define GEODE_STATICS_setPackLevels
		GEODE_AS_STATIC_FUNCTION(setPackLevels) 
	#endif

	#ifndef GEODE_STATICS_setPackName
		#define GEODE_STATICS_setPackName
		GEODE_AS_STATIC_FUNCTION(setPackName) 
	#endif

	#ifndef GEODE_STATICS_setPackStars
		#define GEODE_STATICS_setPackStars
		GEODE_AS_STATIC_FUNCTION(setPackStars) 
	#endif

	#ifndef GEODE_STATICS_totalMaps
		#define GEODE_STATICS_totalMaps
		GEODE_AS_STATIC_FUNCTION(totalMaps) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_completedMaps
		#define GEODE_CONCEPT_CHECK_completedMaps
		GEODE_CONCEPT_FUNCTION_CHECK(completedMaps) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getColor1
		#define GEODE_CONCEPT_CHECK_getColor1
		GEODE_CONCEPT_FUNCTION_CHECK(getColor1) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getColor2
		#define GEODE_CONCEPT_CHECK_getColor2
		GEODE_CONCEPT_FUNCTION_CHECK(getColor2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getM_ID
		#define GEODE_CONCEPT_CHECK_getM_ID
		GEODE_CONCEPT_FUNCTION_CHECK(getM_ID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPackCoins
		#define GEODE_CONCEPT_CHECK_getPackCoins
		GEODE_CONCEPT_FUNCTION_CHECK(getPackCoins) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPackDifficulty
		#define GEODE_CONCEPT_CHECK_getPackDifficulty
		GEODE_CONCEPT_FUNCTION_CHECK(getPackDifficulty) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPackID
		#define GEODE_CONCEPT_CHECK_getPackID
		GEODE_CONCEPT_FUNCTION_CHECK(getPackID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPackLevels
		#define GEODE_CONCEPT_CHECK_getPackLevels
		GEODE_CONCEPT_FUNCTION_CHECK(getPackLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPackName
		#define GEODE_CONCEPT_CHECK_getPackName
		GEODE_CONCEPT_FUNCTION_CHECK(getPackName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPackStars
		#define GEODE_CONCEPT_CHECK_getPackStars
		GEODE_CONCEPT_FUNCTION_CHECK(getPackStars) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasCompletedMapPack
		#define GEODE_CONCEPT_CHECK_hasCompletedMapPack
		GEODE_CONCEPT_FUNCTION_CHECK(hasCompletedMapPack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_parsePackColors
		#define GEODE_CONCEPT_CHECK_parsePackColors
		GEODE_CONCEPT_FUNCTION_CHECK(parsePackColors) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_parsePackLevels
		#define GEODE_CONCEPT_CHECK_parsePackLevels
		GEODE_CONCEPT_FUNCTION_CHECK(parsePackLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setColor1
		#define GEODE_CONCEPT_CHECK_setColor1
		GEODE_CONCEPT_FUNCTION_CHECK(setColor1) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setColor2
		#define GEODE_CONCEPT_CHECK_setColor2
		GEODE_CONCEPT_FUNCTION_CHECK(setColor2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPackCoins
		#define GEODE_CONCEPT_CHECK_setPackCoins
		GEODE_CONCEPT_FUNCTION_CHECK(setPackCoins) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPackDifficulty
		#define GEODE_CONCEPT_CHECK_setPackDifficulty
		GEODE_CONCEPT_FUNCTION_CHECK(setPackDifficulty) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPackID
		#define GEODE_CONCEPT_CHECK_setPackID
		GEODE_CONCEPT_FUNCTION_CHECK(setPackID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPackLevels
		#define GEODE_CONCEPT_CHECK_setPackLevels
		GEODE_CONCEPT_FUNCTION_CHECK(setPackLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPackName
		#define GEODE_CONCEPT_CHECK_setPackName
		GEODE_CONCEPT_FUNCTION_CHECK(setPackName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPackStars
		#define GEODE_CONCEPT_CHECK_setPackStars
		GEODE_CONCEPT_FUNCTION_CHECK(setPackStars) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_totalMaps
		#define GEODE_CONCEPT_CHECK_totalMaps
		GEODE_CONCEPT_FUNCTION_CHECK(totalMaps) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJMapPack> : ModifyBase<ModifyDerive<Der, GJMapPack>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJMapPack>>;
		using ModifyBase<ModifyDerive<Der, GJMapPack>>::ModifyBase;
		using Base = GJMapPack;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMapPack, create, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMapPack, create, cocos2d::CCDictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMapPack, completedMaps, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMapPack, getColor1, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMapPack, getColor2, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMapPack, getM_ID, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMapPack, getPackCoins, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMapPack, getPackDifficulty, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMapPack, getPackID, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMapPack, getPackLevels, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMapPack, getPackName, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMapPack, getPackStars, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMapPack, hasCompletedMapPack, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMapPack, parsePackColors, gd::string, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMapPack, parsePackLevels, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMapPack, setColor1, cocos2d::ccColor3B)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMapPack, setColor2, cocos2d::ccColor3B)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMapPack, setPackCoins, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMapPack, setPackDifficulty, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMapPack, setPackID, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMapPack, setPackLevels, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMapPack, setPackName, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMapPack, setPackStars, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMapPack, totalMaps, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMapPack, init, )
		}
	};
}
