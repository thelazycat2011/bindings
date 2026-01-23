#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CreatorLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_onBack
		#define GEODE_STATICS_onBack
		GEODE_AS_STATIC_FUNCTION(onBack) 
	#endif

	#ifndef GEODE_STATICS_onFeaturedLevels
		#define GEODE_STATICS_onFeaturedLevels
		GEODE_AS_STATIC_FUNCTION(onFeaturedLevels) 
	#endif

	#ifndef GEODE_STATICS_onLeaderboards
		#define GEODE_STATICS_onLeaderboards
		GEODE_AS_STATIC_FUNCTION(onLeaderboards) 
	#endif

	#ifndef GEODE_STATICS_onMapPacks
		#define GEODE_STATICS_onMapPacks
		GEODE_AS_STATIC_FUNCTION(onMapPacks) 
	#endif

	#ifndef GEODE_STATICS_onMyLevels
		#define GEODE_STATICS_onMyLevels
		GEODE_AS_STATIC_FUNCTION(onMyLevels) 
	#endif

	#ifndef GEODE_STATICS_onOnlineLevels
		#define GEODE_STATICS_onOnlineLevels
		GEODE_AS_STATIC_FUNCTION(onOnlineLevels) 
	#endif

	#ifndef GEODE_STATICS_onSavedLevels
		#define GEODE_STATICS_onSavedLevels
		GEODE_AS_STATIC_FUNCTION(onSavedLevels) 
	#endif

	#ifndef GEODE_STATICS_scene
		#define GEODE_STATICS_scene
		GEODE_AS_STATIC_FUNCTION(scene) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBack
		#define GEODE_CONCEPT_CHECK_onBack
		GEODE_CONCEPT_FUNCTION_CHECK(onBack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onFeaturedLevels
		#define GEODE_CONCEPT_CHECK_onFeaturedLevels
		GEODE_CONCEPT_FUNCTION_CHECK(onFeaturedLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onLeaderboards
		#define GEODE_CONCEPT_CHECK_onLeaderboards
		GEODE_CONCEPT_FUNCTION_CHECK(onLeaderboards) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMapPacks
		#define GEODE_CONCEPT_CHECK_onMapPacks
		GEODE_CONCEPT_FUNCTION_CHECK(onMapPacks) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMyLevels
		#define GEODE_CONCEPT_CHECK_onMyLevels
		GEODE_CONCEPT_FUNCTION_CHECK(onMyLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onOnlineLevels
		#define GEODE_CONCEPT_CHECK_onOnlineLevels
		GEODE_CONCEPT_FUNCTION_CHECK(onOnlineLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSavedLevels
		#define GEODE_CONCEPT_CHECK_onSavedLevels
		GEODE_CONCEPT_FUNCTION_CHECK(onSavedLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scene
		#define GEODE_CONCEPT_CHECK_scene
		GEODE_CONCEPT_FUNCTION_CHECK(scene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CreatorLayer> : ModifyBase<ModifyDerive<Der, CreatorLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CreatorLayer>>;
		using ModifyBase<ModifyDerive<Der, CreatorLayer>>::ModifyBase;
		using Base = CreatorLayer;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CreatorLayer, create, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CreatorLayer, onBack, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CreatorLayer, onFeaturedLevels, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CreatorLayer, onLeaderboards, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CreatorLayer, onMapPacks, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CreatorLayer, onMyLevels, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CreatorLayer, onOnlineLevels, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CreatorLayer, onSavedLevels, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CreatorLayer, scene, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CreatorLayer, init, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CreatorLayer, keyBackClicked, )
		}
	};
}
