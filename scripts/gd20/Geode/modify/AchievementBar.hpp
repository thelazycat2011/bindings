#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/AchievementBar.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getTargetScene
		#define GEODE_STATICS_getTargetScene
		GEODE_AS_STATIC_FUNCTION(getTargetScene) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setTargetScene
		#define GEODE_STATICS_setTargetScene
		GEODE_AS_STATIC_FUNCTION(setTargetScene) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTargetScene
		#define GEODE_CONCEPT_CHECK_getTargetScene
		GEODE_CONCEPT_FUNCTION_CHECK(getTargetScene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTargetScene
		#define GEODE_CONCEPT_CHECK_setTargetScene
		GEODE_CONCEPT_FUNCTION_CHECK(setTargetScene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_show
		#define GEODE_CONCEPT_CHECK_show
		GEODE_CONCEPT_FUNCTION_CHECK(show) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, AchievementBar> : ModifyBase<ModifyDerive<Der, AchievementBar>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, AchievementBar>>;
		using ModifyBase<ModifyDerive<Der, AchievementBar>>::ModifyBase;
		using Base = AchievementBar;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AchievementBar, create, char const*, char const*, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AchievementBar, getTargetScene, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AchievementBar, init, char const*, char const*, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AchievementBar, setTargetScene, cocos2d::CCNode*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AchievementBar, show, )
		}
	};
}
