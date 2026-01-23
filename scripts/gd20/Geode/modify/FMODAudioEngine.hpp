#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/FMODAudioEngine.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sharedEngine
		#define GEODE_STATICS_sharedEngine
		GEODE_AS_STATIC_FUNCTION(sharedEngine) 
	#endif

	#ifndef GEODE_STATICS_disableMetering
		#define GEODE_STATICS_disableMetering
		GEODE_AS_STATIC_FUNCTION(disableMetering) 
	#endif

	#ifndef GEODE_STATICS_enableMetering
		#define GEODE_STATICS_enableMetering
		GEODE_AS_STATIC_FUNCTION(enableMetering) 
	#endif

	#ifndef GEODE_STATICS_fadeBackgroundMusic
		#define GEODE_STATICS_fadeBackgroundMusic
		GEODE_AS_STATIC_FUNCTION(fadeBackgroundMusic) 
	#endif

	#ifndef GEODE_STATICS_getBackgroundMusicTime
		#define GEODE_STATICS_getBackgroundMusicTime
		GEODE_AS_STATIC_FUNCTION(getBackgroundMusicTime) 
	#endif

	#ifndef GEODE_STATICS_getBackgroundMusicVolume
		#define GEODE_STATICS_getBackgroundMusicVolume
		GEODE_AS_STATIC_FUNCTION(getBackgroundMusicVolume) 
	#endif

	#ifndef GEODE_STATICS_getEffectsVolume
		#define GEODE_STATICS_getEffectsVolume
		GEODE_AS_STATIC_FUNCTION(getEffectsVolume) 
	#endif

	#ifndef GEODE_STATICS_getTimeOffset
		#define GEODE_STATICS_getTimeOffset
		GEODE_AS_STATIC_FUNCTION(getTimeOffset) 
	#endif

	#ifndef GEODE_STATICS_isBackgroundMusicPlaying
		#define GEODE_STATICS_isBackgroundMusicPlaying
		GEODE_AS_STATIC_FUNCTION(isBackgroundMusicPlaying) 
	#endif

	#ifndef GEODE_STATICS_pauseAllEffects
		#define GEODE_STATICS_pauseAllEffects
		GEODE_AS_STATIC_FUNCTION(pauseAllEffects) 
	#endif

	#ifndef GEODE_STATICS_pauseBackgroundMusic
		#define GEODE_STATICS_pauseBackgroundMusic
		GEODE_AS_STATIC_FUNCTION(pauseBackgroundMusic) 
	#endif

	#ifndef GEODE_STATICS_pauseEffect
		#define GEODE_STATICS_pauseEffect
		GEODE_AS_STATIC_FUNCTION(pauseEffect) 
	#endif

	#ifndef GEODE_STATICS_playBackgroundMusic
		#define GEODE_STATICS_playBackgroundMusic
		GEODE_AS_STATIC_FUNCTION(playBackgroundMusic) 
	#endif

	#ifndef GEODE_STATICS_playEffect
		#define GEODE_STATICS_playEffect
		GEODE_AS_STATIC_FUNCTION(playEffect) 
	#endif

	#ifndef GEODE_STATICS_preloadBackgroundMusic
		#define GEODE_STATICS_preloadBackgroundMusic
		GEODE_AS_STATIC_FUNCTION(preloadBackgroundMusic) 
	#endif

	#ifndef GEODE_STATICS_preloadEffect
		#define GEODE_STATICS_preloadEffect
		GEODE_AS_STATIC_FUNCTION(preloadEffect) 
	#endif

	#ifndef GEODE_STATICS_printResult
		#define GEODE_STATICS_printResult
		GEODE_AS_STATIC_FUNCTION(printResult) 
	#endif

	#ifndef GEODE_STATICS_resumeAllEffects
		#define GEODE_STATICS_resumeAllEffects
		GEODE_AS_STATIC_FUNCTION(resumeAllEffects) 
	#endif

	#ifndef GEODE_STATICS_resumeBackgroundMusic
		#define GEODE_STATICS_resumeBackgroundMusic
		GEODE_AS_STATIC_FUNCTION(resumeBackgroundMusic) 
	#endif

	#ifndef GEODE_STATICS_resumeEffect
		#define GEODE_STATICS_resumeEffect
		GEODE_AS_STATIC_FUNCTION(resumeEffect) 
	#endif

	#ifndef GEODE_STATICS_rewindBackgroundMusic
		#define GEODE_STATICS_rewindBackgroundMusic
		GEODE_AS_STATIC_FUNCTION(rewindBackgroundMusic) 
	#endif

	#ifndef GEODE_STATICS_setBackgroundMusicTime
		#define GEODE_STATICS_setBackgroundMusicTime
		GEODE_AS_STATIC_FUNCTION(setBackgroundMusicTime) 
	#endif

	#ifndef GEODE_STATICS_setBackgroundMusicVolume
		#define GEODE_STATICS_setBackgroundMusicVolume
		GEODE_AS_STATIC_FUNCTION(setBackgroundMusicVolume) 
	#endif

	#ifndef GEODE_STATICS_setEffectsVolume
		#define GEODE_STATICS_setEffectsVolume
		GEODE_AS_STATIC_FUNCTION(setEffectsVolume) 
	#endif

	#ifndef GEODE_STATICS_setTimeOffset
		#define GEODE_STATICS_setTimeOffset
		GEODE_AS_STATIC_FUNCTION(setTimeOffset) 
	#endif

	#ifndef GEODE_STATICS_setupAudioEngine
		#define GEODE_STATICS_setupAudioEngine
		GEODE_AS_STATIC_FUNCTION(setupAudioEngine) 
	#endif

	#ifndef GEODE_STATICS_start
		#define GEODE_STATICS_start
		GEODE_AS_STATIC_FUNCTION(start) 
	#endif

	#ifndef GEODE_STATICS_stop
		#define GEODE_STATICS_stop
		GEODE_AS_STATIC_FUNCTION(stop) 
	#endif

	#ifndef GEODE_STATICS_stopAllEffects
		#define GEODE_STATICS_stopAllEffects
		GEODE_AS_STATIC_FUNCTION(stopAllEffects) 
	#endif

	#ifndef GEODE_STATICS_stopBackgroundMusic
		#define GEODE_STATICS_stopBackgroundMusic
		GEODE_AS_STATIC_FUNCTION(stopBackgroundMusic) 
	#endif

	#ifndef GEODE_STATICS_stopEffect
		#define GEODE_STATICS_stopEffect
		GEODE_AS_STATIC_FUNCTION(stopEffect) 
	#endif

	#ifndef GEODE_STATICS_unloadEffect
		#define GEODE_STATICS_unloadEffect
		GEODE_AS_STATIC_FUNCTION(unloadEffect) 
	#endif

	#ifndef GEODE_STATICS_willPlayBackgroundMusic
		#define GEODE_STATICS_willPlayBackgroundMusic
		GEODE_AS_STATIC_FUNCTION(willPlayBackgroundMusic) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_sharedEngine
		#define GEODE_CONCEPT_CHECK_sharedEngine
		GEODE_CONCEPT_FUNCTION_CHECK(sharedEngine) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_disableMetering
		#define GEODE_CONCEPT_CHECK_disableMetering
		GEODE_CONCEPT_FUNCTION_CHECK(disableMetering) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_enableMetering
		#define GEODE_CONCEPT_CHECK_enableMetering
		GEODE_CONCEPT_FUNCTION_CHECK(enableMetering) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fadeBackgroundMusic
		#define GEODE_CONCEPT_CHECK_fadeBackgroundMusic
		GEODE_CONCEPT_FUNCTION_CHECK(fadeBackgroundMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBackgroundMusicTime
		#define GEODE_CONCEPT_CHECK_getBackgroundMusicTime
		GEODE_CONCEPT_FUNCTION_CHECK(getBackgroundMusicTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBackgroundMusicVolume
		#define GEODE_CONCEPT_CHECK_getBackgroundMusicVolume
		GEODE_CONCEPT_FUNCTION_CHECK(getBackgroundMusicVolume) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEffectsVolume
		#define GEODE_CONCEPT_CHECK_getEffectsVolume
		GEODE_CONCEPT_FUNCTION_CHECK(getEffectsVolume) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTimeOffset
		#define GEODE_CONCEPT_CHECK_getTimeOffset
		GEODE_CONCEPT_FUNCTION_CHECK(getTimeOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isBackgroundMusicPlaying
		#define GEODE_CONCEPT_CHECK_isBackgroundMusicPlaying
		GEODE_CONCEPT_FUNCTION_CHECK(isBackgroundMusicPlaying) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pauseAllEffects
		#define GEODE_CONCEPT_CHECK_pauseAllEffects
		GEODE_CONCEPT_FUNCTION_CHECK(pauseAllEffects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pauseBackgroundMusic
		#define GEODE_CONCEPT_CHECK_pauseBackgroundMusic
		GEODE_CONCEPT_FUNCTION_CHECK(pauseBackgroundMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pauseEffect
		#define GEODE_CONCEPT_CHECK_pauseEffect
		GEODE_CONCEPT_FUNCTION_CHECK(pauseEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playBackgroundMusic
		#define GEODE_CONCEPT_CHECK_playBackgroundMusic
		GEODE_CONCEPT_FUNCTION_CHECK(playBackgroundMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playEffect
		#define GEODE_CONCEPT_CHECK_playEffect
		GEODE_CONCEPT_FUNCTION_CHECK(playEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_preloadBackgroundMusic
		#define GEODE_CONCEPT_CHECK_preloadBackgroundMusic
		GEODE_CONCEPT_FUNCTION_CHECK(preloadBackgroundMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_preloadEffect
		#define GEODE_CONCEPT_CHECK_preloadEffect
		GEODE_CONCEPT_FUNCTION_CHECK(preloadEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_printResult
		#define GEODE_CONCEPT_CHECK_printResult
		GEODE_CONCEPT_FUNCTION_CHECK(printResult) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resumeAllEffects
		#define GEODE_CONCEPT_CHECK_resumeAllEffects
		GEODE_CONCEPT_FUNCTION_CHECK(resumeAllEffects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resumeBackgroundMusic
		#define GEODE_CONCEPT_CHECK_resumeBackgroundMusic
		GEODE_CONCEPT_FUNCTION_CHECK(resumeBackgroundMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resumeEffect
		#define GEODE_CONCEPT_CHECK_resumeEffect
		GEODE_CONCEPT_FUNCTION_CHECK(resumeEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rewindBackgroundMusic
		#define GEODE_CONCEPT_CHECK_rewindBackgroundMusic
		GEODE_CONCEPT_FUNCTION_CHECK(rewindBackgroundMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setBackgroundMusicTime
		#define GEODE_CONCEPT_CHECK_setBackgroundMusicTime
		GEODE_CONCEPT_FUNCTION_CHECK(setBackgroundMusicTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setBackgroundMusicVolume
		#define GEODE_CONCEPT_CHECK_setBackgroundMusicVolume
		GEODE_CONCEPT_FUNCTION_CHECK(setBackgroundMusicVolume) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setEffectsVolume
		#define GEODE_CONCEPT_CHECK_setEffectsVolume
		GEODE_CONCEPT_FUNCTION_CHECK(setEffectsVolume) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTimeOffset
		#define GEODE_CONCEPT_CHECK_setTimeOffset
		GEODE_CONCEPT_FUNCTION_CHECK(setTimeOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupAudioEngine
		#define GEODE_CONCEPT_CHECK_setupAudioEngine
		GEODE_CONCEPT_FUNCTION_CHECK(setupAudioEngine) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_start
		#define GEODE_CONCEPT_CHECK_start
		GEODE_CONCEPT_FUNCTION_CHECK(start) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stop
		#define GEODE_CONCEPT_CHECK_stop
		GEODE_CONCEPT_FUNCTION_CHECK(stop) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopAllEffects
		#define GEODE_CONCEPT_CHECK_stopAllEffects
		GEODE_CONCEPT_FUNCTION_CHECK(stopAllEffects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopBackgroundMusic
		#define GEODE_CONCEPT_CHECK_stopBackgroundMusic
		GEODE_CONCEPT_FUNCTION_CHECK(stopBackgroundMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopEffect
		#define GEODE_CONCEPT_CHECK_stopEffect
		GEODE_CONCEPT_FUNCTION_CHECK(stopEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unloadEffect
		#define GEODE_CONCEPT_CHECK_unloadEffect
		GEODE_CONCEPT_FUNCTION_CHECK(unloadEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_willPlayBackgroundMusic
		#define GEODE_CONCEPT_CHECK_willPlayBackgroundMusic
		GEODE_CONCEPT_FUNCTION_CHECK(willPlayBackgroundMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_update
		#define GEODE_CONCEPT_CHECK_update
		GEODE_CONCEPT_FUNCTION_CHECK(update) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, FMODAudioEngine> : ModifyBase<ModifyDerive<Der, FMODAudioEngine>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FMODAudioEngine>>;
		using ModifyBase<ModifyDerive<Der, FMODAudioEngine>>::ModifyBase;
		using Base = FMODAudioEngine;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FMODAudioEngine, sharedEngine, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FMODAudioEngine, disableMetering, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FMODAudioEngine, enableMetering, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FMODAudioEngine, fadeBackgroundMusic, bool, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FMODAudioEngine, getBackgroundMusicTime, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FMODAudioEngine, getBackgroundMusicVolume, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FMODAudioEngine, getEffectsVolume, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FMODAudioEngine, getTimeOffset, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FMODAudioEngine, isBackgroundMusicPlaying, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FMODAudioEngine, isBackgroundMusicPlaying, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FMODAudioEngine, pauseAllEffects, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FMODAudioEngine, pauseBackgroundMusic, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FMODAudioEngine, pauseEffect, unsigned int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FMODAudioEngine, playBackgroundMusic, gd::string, bool, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FMODAudioEngine, playEffect, gd::string, bool, float, float, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FMODAudioEngine, preloadBackgroundMusic, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FMODAudioEngine, preloadEffect, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FMODAudioEngine, printResult, FMOD_RESULT)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FMODAudioEngine, resumeAllEffects, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FMODAudioEngine, resumeBackgroundMusic, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FMODAudioEngine, resumeEffect, unsigned int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FMODAudioEngine, rewindBackgroundMusic, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FMODAudioEngine, setBackgroundMusicTime, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FMODAudioEngine, setBackgroundMusicVolume, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FMODAudioEngine, setEffectsVolume, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FMODAudioEngine, setTimeOffset, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FMODAudioEngine, setupAudioEngine, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FMODAudioEngine, start, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FMODAudioEngine, stop, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FMODAudioEngine, stopAllEffects, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FMODAudioEngine, stopBackgroundMusic, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FMODAudioEngine, stopEffect, unsigned int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FMODAudioEngine, unloadEffect, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FMODAudioEngine, willPlayBackgroundMusic, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FMODAudioEngine, update, float)
		}
	};
}
