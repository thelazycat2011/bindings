#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCImage> : ModifyBase<ModifyDerive<Der, cocos2d::CCImage>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCImage>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCImage>>::ModifyBase;
		using Base = cocos2d::CCImage;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCImage@cocos2d@@QAE@XZ")), Thiscall, cocos2d::CCImage, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCImage@cocos2d@@UAE@XZ")), Thiscall, cocos2d::CCImage)
		}
	};
}
