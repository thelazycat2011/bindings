#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJSearchObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createFromKey
		#define GEODE_STATICS_createFromKey
		GEODE_AS_STATIC_FUNCTION(createFromKey) 
	#endif

	#ifndef GEODE_STATICS_getCoins
		#define GEODE_STATICS_getCoins
		GEODE_AS_STATIC_FUNCTION(getCoins) 
	#endif

	#ifndef GEODE_STATICS_getCustomSong
		#define GEODE_STATICS_getCustomSong
		GEODE_AS_STATIC_FUNCTION(getCustomSong) 
	#endif

	#ifndef GEODE_STATICS_getDifficultyStr
		#define GEODE_STATICS_getDifficultyStr
		GEODE_AS_STATIC_FUNCTION(getDifficultyStr) 
	#endif

	#ifndef GEODE_STATICS_getFeatured
		#define GEODE_STATICS_getFeatured
		GEODE_AS_STATIC_FUNCTION(getFeatured) 
	#endif

	#ifndef GEODE_STATICS_getKey
		#define GEODE_STATICS_getKey
		GEODE_AS_STATIC_FUNCTION(getKey) 
	#endif

	#ifndef GEODE_STATICS_getLengthStr
		#define GEODE_STATICS_getLengthStr
		GEODE_AS_STATIC_FUNCTION(getLengthStr) 
	#endif

	#ifndef GEODE_STATICS_getNextPageKey
		#define GEODE_STATICS_getNextPageKey
		GEODE_AS_STATIC_FUNCTION(getNextPageKey) 
	#endif

	#ifndef GEODE_STATICS_getNextPageObject
		#define GEODE_STATICS_getNextPageObject
		GEODE_AS_STATIC_FUNCTION(getNextPageObject) 
	#endif

	#ifndef GEODE_STATICS_getNoStar
		#define GEODE_STATICS_getNoStar
		GEODE_AS_STATIC_FUNCTION(getNoStar) 
	#endif

	#ifndef GEODE_STATICS_getOriginal
		#define GEODE_STATICS_getOriginal
		GEODE_AS_STATIC_FUNCTION(getOriginal) 
	#endif

	#ifndef GEODE_STATICS_getPage
		#define GEODE_STATICS_getPage
		GEODE_AS_STATIC_FUNCTION(getPage) 
	#endif

	#ifndef GEODE_STATICS_getPrevPageObject
		#define GEODE_STATICS_getPrevPageObject
		GEODE_AS_STATIC_FUNCTION(getPrevPageObject) 
	#endif

	#ifndef GEODE_STATICS_getSearchKey
		#define GEODE_STATICS_getSearchKey
		GEODE_AS_STATIC_FUNCTION(getSearchKey) 
	#endif

	#ifndef GEODE_STATICS_getSong
		#define GEODE_STATICS_getSong
		GEODE_AS_STATIC_FUNCTION(getSong) 
	#endif

	#ifndef GEODE_STATICS_getSongFilter
		#define GEODE_STATICS_getSongFilter
		GEODE_AS_STATIC_FUNCTION(getSongFilter) 
	#endif

	#ifndef GEODE_STATICS_getStar
		#define GEODE_STATICS_getStar
		GEODE_AS_STATIC_FUNCTION(getStar) 
	#endif

	#ifndef GEODE_STATICS_getString
		#define GEODE_STATICS_getString
		GEODE_AS_STATIC_FUNCTION(getString) 
	#endif

	#ifndef GEODE_STATICS_getTotal
		#define GEODE_STATICS_getTotal
		GEODE_AS_STATIC_FUNCTION(getTotal) 
	#endif

	#ifndef GEODE_STATICS_getTwoP
		#define GEODE_STATICS_getTwoP
		GEODE_AS_STATIC_FUNCTION(getTwoP) 
	#endif

	#ifndef GEODE_STATICS_getType
		#define GEODE_STATICS_getType
		GEODE_AS_STATIC_FUNCTION(getType) 
	#endif

	#ifndef GEODE_STATICS_getUncompleted
		#define GEODE_STATICS_getUncompleted
		GEODE_AS_STATIC_FUNCTION(getUncompleted) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setCoins
		#define GEODE_STATICS_setCoins
		GEODE_AS_STATIC_FUNCTION(setCoins) 
	#endif

	#ifndef GEODE_STATICS_setCustomSong
		#define GEODE_STATICS_setCustomSong
		GEODE_AS_STATIC_FUNCTION(setCustomSong) 
	#endif

	#ifndef GEODE_STATICS_setDifficultyStr
		#define GEODE_STATICS_setDifficultyStr
		GEODE_AS_STATIC_FUNCTION(setDifficultyStr) 
	#endif

	#ifndef GEODE_STATICS_setFeatured
		#define GEODE_STATICS_setFeatured
		GEODE_AS_STATIC_FUNCTION(setFeatured) 
	#endif

	#ifndef GEODE_STATICS_setLengthStr
		#define GEODE_STATICS_setLengthStr
		GEODE_AS_STATIC_FUNCTION(setLengthStr) 
	#endif

	#ifndef GEODE_STATICS_setNoStar
		#define GEODE_STATICS_setNoStar
		GEODE_AS_STATIC_FUNCTION(setNoStar) 
	#endif

	#ifndef GEODE_STATICS_setOriginal
		#define GEODE_STATICS_setOriginal
		GEODE_AS_STATIC_FUNCTION(setOriginal) 
	#endif

	#ifndef GEODE_STATICS_setPage
		#define GEODE_STATICS_setPage
		GEODE_AS_STATIC_FUNCTION(setPage) 
	#endif

	#ifndef GEODE_STATICS_setSong
		#define GEODE_STATICS_setSong
		GEODE_AS_STATIC_FUNCTION(setSong) 
	#endif

	#ifndef GEODE_STATICS_setSongFilter
		#define GEODE_STATICS_setSongFilter
		GEODE_AS_STATIC_FUNCTION(setSongFilter) 
	#endif

	#ifndef GEODE_STATICS_setStar
		#define GEODE_STATICS_setStar
		GEODE_AS_STATIC_FUNCTION(setStar) 
	#endif

	#ifndef GEODE_STATICS_setString
		#define GEODE_STATICS_setString
		GEODE_AS_STATIC_FUNCTION(setString) 
	#endif

	#ifndef GEODE_STATICS_setTotal
		#define GEODE_STATICS_setTotal
		GEODE_AS_STATIC_FUNCTION(setTotal) 
	#endif

	#ifndef GEODE_STATICS_setTwoP
		#define GEODE_STATICS_setTwoP
		GEODE_AS_STATIC_FUNCTION(setTwoP) 
	#endif

	#ifndef GEODE_STATICS_setType
		#define GEODE_STATICS_setType
		GEODE_AS_STATIC_FUNCTION(setType) 
	#endif

	#ifndef GEODE_STATICS_setUncompleted
		#define GEODE_STATICS_setUncompleted
		GEODE_AS_STATIC_FUNCTION(setUncompleted) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createFromKey
		#define GEODE_CONCEPT_CHECK_createFromKey
		GEODE_CONCEPT_FUNCTION_CHECK(createFromKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCoins
		#define GEODE_CONCEPT_CHECK_getCoins
		GEODE_CONCEPT_FUNCTION_CHECK(getCoins) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCustomSong
		#define GEODE_CONCEPT_CHECK_getCustomSong
		GEODE_CONCEPT_FUNCTION_CHECK(getCustomSong) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDifficultyStr
		#define GEODE_CONCEPT_CHECK_getDifficultyStr
		GEODE_CONCEPT_FUNCTION_CHECK(getDifficultyStr) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFeatured
		#define GEODE_CONCEPT_CHECK_getFeatured
		GEODE_CONCEPT_FUNCTION_CHECK(getFeatured) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getKey
		#define GEODE_CONCEPT_CHECK_getKey
		GEODE_CONCEPT_FUNCTION_CHECK(getKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLengthStr
		#define GEODE_CONCEPT_CHECK_getLengthStr
		GEODE_CONCEPT_FUNCTION_CHECK(getLengthStr) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNextPageKey
		#define GEODE_CONCEPT_CHECK_getNextPageKey
		GEODE_CONCEPT_FUNCTION_CHECK(getNextPageKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNextPageObject
		#define GEODE_CONCEPT_CHECK_getNextPageObject
		GEODE_CONCEPT_FUNCTION_CHECK(getNextPageObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNoStar
		#define GEODE_CONCEPT_CHECK_getNoStar
		GEODE_CONCEPT_FUNCTION_CHECK(getNoStar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOriginal
		#define GEODE_CONCEPT_CHECK_getOriginal
		GEODE_CONCEPT_FUNCTION_CHECK(getOriginal) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPage
		#define GEODE_CONCEPT_CHECK_getPage
		GEODE_CONCEPT_FUNCTION_CHECK(getPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPrevPageObject
		#define GEODE_CONCEPT_CHECK_getPrevPageObject
		GEODE_CONCEPT_FUNCTION_CHECK(getPrevPageObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSearchKey
		#define GEODE_CONCEPT_CHECK_getSearchKey
		GEODE_CONCEPT_FUNCTION_CHECK(getSearchKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSong
		#define GEODE_CONCEPT_CHECK_getSong
		GEODE_CONCEPT_FUNCTION_CHECK(getSong) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSongFilter
		#define GEODE_CONCEPT_CHECK_getSongFilter
		GEODE_CONCEPT_FUNCTION_CHECK(getSongFilter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStar
		#define GEODE_CONCEPT_CHECK_getStar
		GEODE_CONCEPT_FUNCTION_CHECK(getStar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getString
		#define GEODE_CONCEPT_CHECK_getString
		GEODE_CONCEPT_FUNCTION_CHECK(getString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTotal
		#define GEODE_CONCEPT_CHECK_getTotal
		GEODE_CONCEPT_FUNCTION_CHECK(getTotal) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTwoP
		#define GEODE_CONCEPT_CHECK_getTwoP
		GEODE_CONCEPT_FUNCTION_CHECK(getTwoP) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getType
		#define GEODE_CONCEPT_CHECK_getType
		GEODE_CONCEPT_FUNCTION_CHECK(getType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUncompleted
		#define GEODE_CONCEPT_CHECK_getUncompleted
		GEODE_CONCEPT_FUNCTION_CHECK(getUncompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCoins
		#define GEODE_CONCEPT_CHECK_setCoins
		GEODE_CONCEPT_FUNCTION_CHECK(setCoins) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCustomSong
		#define GEODE_CONCEPT_CHECK_setCustomSong
		GEODE_CONCEPT_FUNCTION_CHECK(setCustomSong) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDifficultyStr
		#define GEODE_CONCEPT_CHECK_setDifficultyStr
		GEODE_CONCEPT_FUNCTION_CHECK(setDifficultyStr) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFeatured
		#define GEODE_CONCEPT_CHECK_setFeatured
		GEODE_CONCEPT_FUNCTION_CHECK(setFeatured) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLengthStr
		#define GEODE_CONCEPT_CHECK_setLengthStr
		GEODE_CONCEPT_FUNCTION_CHECK(setLengthStr) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setNoStar
		#define GEODE_CONCEPT_CHECK_setNoStar
		GEODE_CONCEPT_FUNCTION_CHECK(setNoStar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOriginal
		#define GEODE_CONCEPT_CHECK_setOriginal
		GEODE_CONCEPT_FUNCTION_CHECK(setOriginal) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPage
		#define GEODE_CONCEPT_CHECK_setPage
		GEODE_CONCEPT_FUNCTION_CHECK(setPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSong
		#define GEODE_CONCEPT_CHECK_setSong
		GEODE_CONCEPT_FUNCTION_CHECK(setSong) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSongFilter
		#define GEODE_CONCEPT_CHECK_setSongFilter
		GEODE_CONCEPT_FUNCTION_CHECK(setSongFilter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStar
		#define GEODE_CONCEPT_CHECK_setStar
		GEODE_CONCEPT_FUNCTION_CHECK(setStar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setString
		#define GEODE_CONCEPT_CHECK_setString
		GEODE_CONCEPT_FUNCTION_CHECK(setString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTotal
		#define GEODE_CONCEPT_CHECK_setTotal
		GEODE_CONCEPT_FUNCTION_CHECK(setTotal) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTwoP
		#define GEODE_CONCEPT_CHECK_setTwoP
		GEODE_CONCEPT_FUNCTION_CHECK(setTwoP) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setType
		#define GEODE_CONCEPT_CHECK_setType
		GEODE_CONCEPT_FUNCTION_CHECK(setType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUncompleted
		#define GEODE_CONCEPT_CHECK_setUncompleted
		GEODE_CONCEPT_FUNCTION_CHECK(setUncompleted) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJSearchObject> : ModifyBase<ModifyDerive<Der, GJSearchObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJSearchObject>>;
		using ModifyBase<ModifyDerive<Der, GJSearchObject>>::ModifyBase;
		using Base = GJSearchObject;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSearchObject, create, SearchType, gd::string, gd::string, gd::string, int, bool, bool, bool, int, bool, bool, bool, bool, bool, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSearchObject, create, SearchType, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSearchObject, create, SearchType)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSearchObject, createFromKey, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSearchObject, getCoins, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSearchObject, getCustomSong, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSearchObject, getDifficultyStr, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSearchObject, getFeatured, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSearchObject, getKey, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSearchObject, getLengthStr, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSearchObject, getNextPageKey, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSearchObject, getNextPageObject, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSearchObject, getNoStar, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSearchObject, getOriginal, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSearchObject, getPage, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSearchObject, getPrevPageObject, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSearchObject, getSearchKey, SearchType, gd::string, gd::string, gd::string, int, bool, bool, bool, int, bool, bool, bool, bool, bool, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSearchObject, getSong, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSearchObject, getSongFilter, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSearchObject, getStar, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSearchObject, getString, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSearchObject, getTotal, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSearchObject, getTwoP, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSearchObject, getType, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSearchObject, getUncompleted, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSearchObject, init, SearchType, gd::string, gd::string, gd::string, int, bool, bool, bool, int, bool, bool, bool, bool, bool, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSearchObject, setCoins, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSearchObject, setCustomSong, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSearchObject, setDifficultyStr, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSearchObject, setFeatured, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSearchObject, setLengthStr, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSearchObject, setNoStar, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSearchObject, setOriginal, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSearchObject, setPage, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSearchObject, setSong, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSearchObject, setSongFilter, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSearchObject, setStar, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSearchObject, setString, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSearchObject, setTotal, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSearchObject, setTwoP, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSearchObject, setType, SearchType)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSearchObject, setUncompleted, bool)
		}
	};
}
