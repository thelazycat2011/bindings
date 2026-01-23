#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GameObjectClass.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, GameObjectClass> : ModifyBase<ModifyDerive<Der, GameObjectClass>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GameObjectClass>>;
		using ModifyBase<ModifyDerive<Der, GameObjectClass>>::ModifyBase;
		using Base = GameObjectClass;
        using Derived = Der;
		void apply() override {

		}
	};
}
