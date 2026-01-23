#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_decompressString
		#define GEODE_STATICS_decompressString
		GEODE_AS_STATIC_FUNCTION(decompressString) 
	#endif

	#ifndef GEODE_STATICS_decompressString2
		#define GEODE_STATICS_decompressString2
		GEODE_AS_STATIC_FUNCTION(decompressString2) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_decompressString
		#define GEODE_CONCEPT_CHECK_decompressString
		GEODE_CONCEPT_FUNCTION_CHECK(decompressString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_decompressString2
		#define GEODE_CONCEPT_CHECK_decompressString2
		GEODE_CONCEPT_FUNCTION_CHECK(decompressString2) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::ZipUtils> : ModifyBase<ModifyDerive<Der, cocos2d::ZipUtils>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::ZipUtils>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::ZipUtils>>::ModifyBase;
		using Base = cocos2d::ZipUtils;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<gd::string, bool>::func(&cocos2d::ZipUtils::decompressString)), Cdecl, cocos2d::ZipUtils, decompressString, gd::string, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned char*, bool, int>::func(&cocos2d::ZipUtils::decompressString2)), Cdecl, cocos2d::ZipUtils, decompressString2, unsigned char*, bool, int)
		}
	};
}
