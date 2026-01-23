#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createWithSpriteFrameName
		#define GEODE_STATICS_createWithSpriteFrameName
		GEODE_AS_STATIC_FUNCTION(createWithSpriteFrameName) 
	#endif

	#ifndef GEODE_STATICS_initWithSpriteFrame
		#define GEODE_STATICS_initWithSpriteFrame
		GEODE_AS_STATIC_FUNCTION(initWithSpriteFrame) 
	#endif

	#ifndef GEODE_STATICS_initWithSpriteFrameName
		#define GEODE_STATICS_initWithSpriteFrameName
		GEODE_AS_STATIC_FUNCTION(initWithSpriteFrameName) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithSpriteFrameName
		#define GEODE_CONCEPT_CHECK_createWithSpriteFrameName
		GEODE_CONCEPT_FUNCTION_CHECK(createWithSpriteFrameName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithSpriteFrame
		#define GEODE_CONCEPT_CHECK_initWithSpriteFrame
		GEODE_CONCEPT_FUNCTION_CHECK(initWithSpriteFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithSpriteFrameName
		#define GEODE_CONCEPT_CHECK_initWithSpriteFrameName
		GEODE_CONCEPT_FUNCTION_CHECK(initWithSpriteFrameName) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCSprite> : ModifyBase<ModifyDerive<Der, cocos2d::CCSprite>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCSprite>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCSprite>>::ModifyBase;
		using Base = cocos2d::CCSprite;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCSprite@cocos2d@@QAE@XZ")), Thiscall, cocos2d::CCSprite, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCSprite@cocos2d@@UAE@XZ")), Thiscall, cocos2d::CCSprite)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCSprite::create)), Cdecl, cocos2d::CCSprite, create, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCSprite::createWithSpriteFrameName)), Cdecl, cocos2d::CCSprite, createWithSpriteFrameName, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCSpriteFrame*>::func(&cocos2d::CCSprite::initWithSpriteFrame)), Thiscall, cocos2d::CCSprite, initWithSpriteFrame, cocos2d::CCSpriteFrame*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<char const*>::func(&cocos2d::CCSprite::initWithSpriteFrameName)), Thiscall, cocos2d::CCSprite, initWithSpriteFrameName, char const*)
		}
	};
}
