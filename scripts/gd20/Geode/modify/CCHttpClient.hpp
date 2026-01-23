#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos-ext.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_send
		#define GEODE_STATICS_send
		GEODE_AS_STATIC_FUNCTION(send) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_send
		#define GEODE_CONCEPT_CHECK_send
		GEODE_CONCEPT_FUNCTION_CHECK(send) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::extension::CCHttpClient> : ModifyBase<ModifyDerive<Der, cocos2d::extension::CCHttpClient>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::extension::CCHttpClient>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::extension::CCHttpClient>>::ModifyBase;
		using Base = cocos2d::extension::CCHttpClient;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::extension::CCHttpRequest*>::func(&cocos2d::extension::CCHttpClient::send)), Thiscall, cocos2d::extension::CCHttpClient, send, cocos2d::extension::CCHttpRequest*)
		}
	};
}
