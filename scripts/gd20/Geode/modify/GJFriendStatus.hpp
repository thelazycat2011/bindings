#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJFriendStatus.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, GJFriendStatus> : ModifyBase<ModifyDerive<Der, GJFriendStatus>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJFriendStatus>>;
		using ModifyBase<ModifyDerive<Der, GJFriendStatus>>::ModifyBase;
		using Base = GJFriendStatus;
        using Derived = Der;
		void apply() override {

		}
	};
}
