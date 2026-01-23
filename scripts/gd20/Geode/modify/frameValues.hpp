#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/frameValues.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, frameValues> : ModifyBase<ModifyDerive<Der, frameValues>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, frameValues>>;
		using ModifyBase<ModifyDerive<Der, frameValues>>::ModifyBase;
		using Base = frameValues;
        using Derived = Der;
		void apply() override {

		}
	};
}
