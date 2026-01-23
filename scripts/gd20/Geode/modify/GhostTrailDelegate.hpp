#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GhostTrailDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, GhostTrailDelegate> : ModifyBase<ModifyDerive<Der, GhostTrailDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GhostTrailDelegate>>;
		using ModifyBase<ModifyDerive<Der, GhostTrailDelegate>>::ModifyBase;
		using Base = GhostTrailDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
