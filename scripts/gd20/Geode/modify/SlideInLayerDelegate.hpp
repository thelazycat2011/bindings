#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SlideInLayerDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, SlideInLayerDelegate> : ModifyBase<ModifyDerive<Der, SlideInLayerDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SlideInLayerDelegate>>;
		using ModifyBase<ModifyDerive<Der, SlideInLayerDelegate>>::ModifyBase;
		using Base = SlideInLayerDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
