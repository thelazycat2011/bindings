#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJCommentListLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getListView
		#define GEODE_STATICS_getListView
		GEODE_AS_STATIC_FUNCTION(getListView) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getListView
		#define GEODE_CONCEPT_CHECK_getListView
		GEODE_CONCEPT_FUNCTION_CHECK(getListView) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJCommentListLayer> : ModifyBase<ModifyDerive<Der, GJCommentListLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJCommentListLayer>>;
		using ModifyBase<ModifyDerive<Der, GJCommentListLayer>>::ModifyBase;
		using Base = GJCommentListLayer;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJCommentListLayer, create, BoomListView*, char const*, cocos2d::ccColor4B, float, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJCommentListLayer, getListView, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJCommentListLayer, init, BoomListView*, char const*, cocos2d::ccColor4B, float, float)
		}
	};
}
