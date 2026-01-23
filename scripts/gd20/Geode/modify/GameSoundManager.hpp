#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GameSoundManager.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_asynchronousSetup
		#define GEODE_STATICS_asynchronousSetup
		GEODE_AS_STATIC_FUNCTION(asynchronousSetup) 
	#endif

	#ifndef GEODE_STATICS_disableMetering
		#define GEODE_STATICS_disableMetering
		GEODE_AS_STATIC_FUNCTION(disableMetering) 
	#endif

	#ifndef GEODE_STATICS_enableMetering
		#define GEODE_STATICS_enableMetering
		GEODE_AS_STATIC_FUNCTION(enableMetering) 
	#endif

	#ifndef GEODE_STATICS_fadeInMusic
		#define GEODE_STATICS_fadeInMusic
		GEODE_AS_STATIC_FUNCTION(fadeInMusic) 
	#endif

	#ifndef GEODE_STATICS_fadeOutMusic
		#define GEODE_STATICS_fadeOutMusic
		GEODE_AS_STATIC_FUNCTION(fadeOutMusic) 
	#endif

	#ifndef GEODE_STATICS_getActiveBGMusic
		#define GEODE_STATICS_getActiveBGMusic
		GEODE_AS_STATIC_FUNCTION(getActiveBGMusic) 
	#endif

	#ifndef GEODE_STATICS_getMeteringValue
		#define GEODE_STATICS_getMeteringValue
		GEODE_AS_STATIC_FUNCTION(getMeteringValue) 
	#endif

	#ifndef GEODE_STATICS_getState
		#define GEODE_STATICS_getState
		GEODE_AS_STATIC_FUNCTION(getState) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_isLoopedSoundPlaying
		#define GEODE_STATICS_isLoopedSoundPlaying
		GEODE_AS_STATIC_FUNCTION(isLoopedSoundPlaying) 
	#endif

	#ifndef GEODE_STATICS_pauseAllLoopedSounds
		#define GEODE_STATICS_pauseAllLoopedSounds
		GEODE_AS_STATIC_FUNCTION(pauseAllLoopedSounds) 
	#endif

	#ifndef GEODE_STATICS_pauseLoopedSound
		#define GEODE_STATICS_pauseLoopedSound
		GEODE_AS_STATIC_FUNCTION(pauseLoopedSound) 
	#endif

	#ifndef GEODE_STATICS_playBackgroundMusic
		#define GEODE_STATICS_playBackgroundMusic
		GEODE_AS_STATIC_FUNCTION(playBackgroundMusic) 
	#endif

	#ifndef GEODE_STATICS_playEffect
		#define GEODE_STATICS_playEffect
		GEODE_AS_STATIC_FUNCTION(playEffect) 
	#endif

	#ifndef GEODE_STATICS_playLoopedSound
		#define GEODE_STATICS_playLoopedSound
		GEODE_AS_STATIC_FUNCTION(playLoopedSound) 
	#endif

	#ifndef GEODE_STATICS_playUniqueEffect
		#define GEODE_STATICS_playUniqueEffect
		GEODE_AS_STATIC_FUNCTION(playUniqueEffect) 
	#endif

	#ifndef GEODE_STATICS_preload
		#define GEODE_STATICS_preload
		GEODE_AS_STATIC_FUNCTION(preload) 
	#endif

	#ifndef GEODE_STATICS_removeLoopedSound
		#define GEODE_STATICS_removeLoopedSound
		GEODE_AS_STATIC_FUNCTION(removeLoopedSound) 
	#endif

	#ifndef GEODE_STATICS_resetUniqueEffects
		#define GEODE_STATICS_resetUniqueEffects
		GEODE_AS_STATIC_FUNCTION(resetUniqueEffects) 
	#endif

	#ifndef GEODE_STATICS_resumeAllLoopedSounds
		#define GEODE_STATICS_resumeAllLoopedSounds
		GEODE_AS_STATIC_FUNCTION(resumeAllLoopedSounds) 
	#endif

	#ifndef GEODE_STATICS_resumeSound
		#define GEODE_STATICS_resumeSound
		GEODE_AS_STATIC_FUNCTION(resumeSound) 
	#endif

	#ifndef GEODE_STATICS_setup
		#define GEODE_STATICS_setup
		GEODE_AS_STATIC_FUNCTION(setup) 
	#endif

	#ifndef GEODE_STATICS_sharedManager
		#define GEODE_STATICS_sharedManager
		GEODE_AS_STATIC_FUNCTION(sharedManager) 
	#endif

	#ifndef GEODE_STATICS_stopAllLoopedSounds
		#define GEODE_STATICS_stopAllLoopedSounds
		GEODE_AS_STATIC_FUNCTION(stopAllLoopedSounds) 
	#endif

	#ifndef GEODE_STATICS_stopBackgroundMusic
		#define GEODE_STATICS_stopBackgroundMusic
		GEODE_AS_STATIC_FUNCTION(stopBackgroundMusic) 
	#endif

	#ifndef GEODE_STATICS_stopLoopedSound
		#define GEODE_STATICS_stopLoopedSound
		GEODE_AS_STATIC_FUNCTION(stopLoopedSound) 
	#endif

	#ifndef GEODE_STATICS_updateLoopedVolume
		#define GEODE_STATICS_updateLoopedVolume
		GEODE_AS_STATIC_FUNCTION(updateLoopedVolume) 
	#endif

	#ifndef GEODE_STATICS_updateMetering
		#define GEODE_STATICS_updateMetering
		GEODE_AS_STATIC_FUNCTION(updateMetering) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_asynchronousSetup
		#define GEODE_CONCEPT_CHECK_asynchronousSetup
		GEODE_CONCEPT_FUNCTION_CHECK(asynchronousSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_disableMetering
		#define GEODE_CONCEPT_CHECK_disableMetering
		GEODE_CONCEPT_FUNCTION_CHECK(disableMetering) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_enableMetering
		#define GEODE_CONCEPT_CHECK_enableMetering
		GEODE_CONCEPT_FUNCTION_CHECK(enableMetering) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fadeInMusic
		#define GEODE_CONCEPT_CHECK_fadeInMusic
		GEODE_CONCEPT_FUNCTION_CHECK(fadeInMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fadeOutMusic
		#define GEODE_CONCEPT_CHECK_fadeOutMusic
		GEODE_CONCEPT_FUNCTION_CHECK(fadeOutMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getActiveBGMusic
		#define GEODE_CONCEPT_CHECK_getActiveBGMusic
		GEODE_CONCEPT_FUNCTION_CHECK(getActiveBGMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMeteringValue
		#define GEODE_CONCEPT_CHECK_getMeteringValue
		GEODE_CONCEPT_FUNCTION_CHECK(getMeteringValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getState
		#define GEODE_CONCEPT_CHECK_getState
		GEODE_CONCEPT_FUNCTION_CHECK(getState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isLoopedSoundPlaying
		#define GEODE_CONCEPT_CHECK_isLoopedSoundPlaying
		GEODE_CONCEPT_FUNCTION_CHECK(isLoopedSoundPlaying) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pauseAllLoopedSounds
		#define GEODE_CONCEPT_CHECK_pauseAllLoopedSounds
		GEODE_CONCEPT_FUNCTION_CHECK(pauseAllLoopedSounds) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pauseLoopedSound
		#define GEODE_CONCEPT_CHECK_pauseLoopedSound
		GEODE_CONCEPT_FUNCTION_CHECK(pauseLoopedSound) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playBackgroundMusic
		#define GEODE_CONCEPT_CHECK_playBackgroundMusic
		GEODE_CONCEPT_FUNCTION_CHECK(playBackgroundMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playEffect
		#define GEODE_CONCEPT_CHECK_playEffect
		GEODE_CONCEPT_FUNCTION_CHECK(playEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playLoopedSound
		#define GEODE_CONCEPT_CHECK_playLoopedSound
		GEODE_CONCEPT_FUNCTION_CHECK(playLoopedSound) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playUniqueEffect
		#define GEODE_CONCEPT_CHECK_playUniqueEffect
		GEODE_CONCEPT_FUNCTION_CHECK(playUniqueEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_preload
		#define GEODE_CONCEPT_CHECK_preload
		GEODE_CONCEPT_FUNCTION_CHECK(preload) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeLoopedSound
		#define GEODE_CONCEPT_CHECK_removeLoopedSound
		GEODE_CONCEPT_FUNCTION_CHECK(removeLoopedSound) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetUniqueEffects
		#define GEODE_CONCEPT_CHECK_resetUniqueEffects
		GEODE_CONCEPT_FUNCTION_CHECK(resetUniqueEffects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resumeAllLoopedSounds
		#define GEODE_CONCEPT_CHECK_resumeAllLoopedSounds
		GEODE_CONCEPT_FUNCTION_CHECK(resumeAllLoopedSounds) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resumeSound
		#define GEODE_CONCEPT_CHECK_resumeSound
		GEODE_CONCEPT_FUNCTION_CHECK(resumeSound) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setup
		#define GEODE_CONCEPT_CHECK_setup
		GEODE_CONCEPT_FUNCTION_CHECK(setup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sharedManager
		#define GEODE_CONCEPT_CHECK_sharedManager
		GEODE_CONCEPT_FUNCTION_CHECK(sharedManager) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopAllLoopedSounds
		#define GEODE_CONCEPT_CHECK_stopAllLoopedSounds
		GEODE_CONCEPT_FUNCTION_CHECK(stopAllLoopedSounds) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopBackgroundMusic
		#define GEODE_CONCEPT_CHECK_stopBackgroundMusic
		GEODE_CONCEPT_FUNCTION_CHECK(stopBackgroundMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopLoopedSound
		#define GEODE_CONCEPT_CHECK_stopLoopedSound
		GEODE_CONCEPT_FUNCTION_CHECK(stopLoopedSound) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLoopedVolume
		#define GEODE_CONCEPT_CHECK_updateLoopedVolume
		GEODE_CONCEPT_FUNCTION_CHECK(updateLoopedVolume) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateMetering
		#define GEODE_CONCEPT_CHECK_updateMetering
		GEODE_CONCEPT_FUNCTION_CHECK(updateMetering) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GameSoundManager> : ModifyBase<ModifyDerive<Der, GameSoundManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GameSoundManager>>;
		using ModifyBase<ModifyDerive<Der, GameSoundManager>>::ModifyBase;
		using Base = GameSoundManager;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameSoundManager, asynchronousSetup, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameSoundManager, disableMetering, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameSoundManager, enableMetering, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameSoundManager, fadeInMusic, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameSoundManager, fadeOutMusic, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameSoundManager, getActiveBGMusic, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameSoundManager, getMeteringValue, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameSoundManager, getState, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameSoundManager, init, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameSoundManager, isLoopedSoundPlaying, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameSoundManager, pauseAllLoopedSounds, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameSoundManager, pauseLoopedSound, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameSoundManager, playBackgroundMusic, gd::string, bool, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameSoundManager, playEffect, gd::string, float, float, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameSoundManager, playLoopedSound, gd::string, gd::string, float, float, bool, bool, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameSoundManager, playUniqueEffect, gd::string, float, float, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameSoundManager, playUniqueEffect, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameSoundManager, preload, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameSoundManager, removeLoopedSound, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameSoundManager, resetUniqueEffects, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameSoundManager, resumeAllLoopedSounds, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameSoundManager, resumeSound, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameSoundManager, setup, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameSoundManager, sharedManager, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameSoundManager, stopAllLoopedSounds, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameSoundManager, stopBackgroundMusic, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameSoundManager, stopLoopedSound, gd::string, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameSoundManager, updateLoopedVolume, gd::string, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameSoundManager, updateMetering, float)
		}
	};
}
