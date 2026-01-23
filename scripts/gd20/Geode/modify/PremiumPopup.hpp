#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/PremiumPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, PremiumPopup> : ModifyBase<ModifyDerive<Der, PremiumPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, PremiumPopup>>;
		using ModifyBase<ModifyDerive<Der, PremiumPopup>>::ModifyBase;
		using Base = PremiumPopup;
        using Derived = Der;
		void apply() override {

		}
	};
}
