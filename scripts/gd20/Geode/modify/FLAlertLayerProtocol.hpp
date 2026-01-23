#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, FLAlertLayerProtocol> : ModifyBase<ModifyDerive<Der, FLAlertLayerProtocol>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FLAlertLayerProtocol>>;
		using ModifyBase<ModifyDerive<Der, FLAlertLayerProtocol>>::ModifyBase;
		using Base = FLAlertLayerProtocol;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FLAlertLayerProtocol, FLAlert_Clicked, FLAlertLayer*, bool)
		}
	};
}
