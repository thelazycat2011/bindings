#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCAction> : ModifyBase<ModifyDerive<Der, cocos2d::CCAction>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCAction>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCAction>>::ModifyBase;
		using Base = cocos2d::CCAction;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCAction@cocos2d@@QAE@XZ")), Thiscall, cocos2d::CCAction, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCAction@cocos2d@@UAE@XZ")), Thiscall, cocos2d::CCAction)
		}
	};
}
