#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <fmod.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_setVolume
		#define GEODE_STATICS_setVolume
		GEODE_AS_STATIC_FUNCTION(setVolume) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_setVolume
		#define GEODE_CONCEPT_CHECK_setVolume
		GEODE_CONCEPT_FUNCTION_CHECK(setVolume) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, FMOD::ChannelControl> : ModifyBase<ModifyDerive<Der, FMOD::ChannelControl>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FMOD::ChannelControl>>;
		using ModifyBase<ModifyDerive<Der, FMOD::ChannelControl>>::ModifyBase;
		using Base = FMOD::ChannelControl;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&FMOD::ChannelControl::setVolume)), Thiscall, FMOD::ChannelControl, setVolume, float)
		}
	};
}
