#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CustomListView.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_reloadAll
		#define GEODE_STATICS_reloadAll
		GEODE_AS_STATIC_FUNCTION(reloadAll) 
	#endif

	#ifndef GEODE_STATICS_setupList
		#define GEODE_STATICS_setupList
		GEODE_AS_STATIC_FUNCTION(setupList) 
	#endif

	#ifndef GEODE_STATICS_getListCell
		#define GEODE_STATICS_getListCell
		GEODE_AS_STATIC_FUNCTION(getListCell) 
	#endif

	#ifndef GEODE_STATICS_loadCell
		#define GEODE_STATICS_loadCell
		GEODE_AS_STATIC_FUNCTION(loadCell) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reloadAll
		#define GEODE_CONCEPT_CHECK_reloadAll
		GEODE_CONCEPT_FUNCTION_CHECK(reloadAll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupList
		#define GEODE_CONCEPT_CHECK_setupList
		GEODE_CONCEPT_FUNCTION_CHECK(setupList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getListCell
		#define GEODE_CONCEPT_CHECK_getListCell
		GEODE_CONCEPT_FUNCTION_CHECK(getListCell) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadCell
		#define GEODE_CONCEPT_CHECK_loadCell
		GEODE_CONCEPT_FUNCTION_CHECK(loadCell) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CustomListView> : ModifyBase<ModifyDerive<Der, CustomListView>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CustomListView>>;
		using ModifyBase<ModifyDerive<Der, CustomListView>>::ModifyBase;
		using Base = CustomListView;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomListView, create, cocos2d::CCArray*, float, float, int, BoomListType)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomListView, reloadAll, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomListView, setupList, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomListView, getListCell, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomListView, loadCell, TableViewCell*, int)
		}
	};
}
