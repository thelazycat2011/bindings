#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EveryplayToolbox.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_firstSetup
		#define GEODE_STATICS_firstSetup
		GEODE_AS_STATIC_FUNCTION(firstSetup) 
	#endif

	#ifndef GEODE_STATICS_isEveryplaySupported
		#define GEODE_STATICS_isEveryplaySupported
		GEODE_AS_STATIC_FUNCTION(isEveryplaySupported) 
	#endif

	#ifndef GEODE_STATICS_isLowEndDevice
		#define GEODE_STATICS_isLowEndDevice
		GEODE_AS_STATIC_FUNCTION(isLowEndDevice) 
	#endif

	#ifndef GEODE_STATICS_isPaused
		#define GEODE_STATICS_isPaused
		GEODE_AS_STATIC_FUNCTION(isPaused) 
	#endif

	#ifndef GEODE_STATICS_isRecording
		#define GEODE_STATICS_isRecording
		GEODE_AS_STATIC_FUNCTION(isRecording) 
	#endif

	#ifndef GEODE_STATICS_isRecordingSupported
		#define GEODE_STATICS_isRecordingSupported
		GEODE_AS_STATIC_FUNCTION(isRecordingSupported) 
	#endif

	#ifndef GEODE_STATICS_pauseRecording
		#define GEODE_STATICS_pauseRecording
		GEODE_AS_STATIC_FUNCTION(pauseRecording) 
	#endif

	#ifndef GEODE_STATICS_playLastRecording
		#define GEODE_STATICS_playLastRecording
		GEODE_AS_STATIC_FUNCTION(playLastRecording) 
	#endif

	#ifndef GEODE_STATICS_resumeRecording
		#define GEODE_STATICS_resumeRecording
		GEODE_AS_STATIC_FUNCTION(resumeRecording) 
	#endif

	#ifndef GEODE_STATICS_setMetadataFromLevel
		#define GEODE_STATICS_setMetadataFromLevel
		GEODE_AS_STATIC_FUNCTION(setMetadataFromLevel) 
	#endif

	#ifndef GEODE_STATICS_showEveryplay
		#define GEODE_STATICS_showEveryplay
		GEODE_AS_STATIC_FUNCTION(showEveryplay) 
	#endif

	#ifndef GEODE_STATICS_startRecording
		#define GEODE_STATICS_startRecording
		GEODE_AS_STATIC_FUNCTION(startRecording) 
	#endif

	#ifndef GEODE_STATICS_stopRecording
		#define GEODE_STATICS_stopRecording
		GEODE_AS_STATIC_FUNCTION(stopRecording) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_firstSetup
		#define GEODE_CONCEPT_CHECK_firstSetup
		GEODE_CONCEPT_FUNCTION_CHECK(firstSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isEveryplaySupported
		#define GEODE_CONCEPT_CHECK_isEveryplaySupported
		GEODE_CONCEPT_FUNCTION_CHECK(isEveryplaySupported) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isLowEndDevice
		#define GEODE_CONCEPT_CHECK_isLowEndDevice
		GEODE_CONCEPT_FUNCTION_CHECK(isLowEndDevice) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isPaused
		#define GEODE_CONCEPT_CHECK_isPaused
		GEODE_CONCEPT_FUNCTION_CHECK(isPaused) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isRecording
		#define GEODE_CONCEPT_CHECK_isRecording
		GEODE_CONCEPT_FUNCTION_CHECK(isRecording) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isRecordingSupported
		#define GEODE_CONCEPT_CHECK_isRecordingSupported
		GEODE_CONCEPT_FUNCTION_CHECK(isRecordingSupported) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pauseRecording
		#define GEODE_CONCEPT_CHECK_pauseRecording
		GEODE_CONCEPT_FUNCTION_CHECK(pauseRecording) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playLastRecording
		#define GEODE_CONCEPT_CHECK_playLastRecording
		GEODE_CONCEPT_FUNCTION_CHECK(playLastRecording) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resumeRecording
		#define GEODE_CONCEPT_CHECK_resumeRecording
		GEODE_CONCEPT_FUNCTION_CHECK(resumeRecording) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMetadataFromLevel
		#define GEODE_CONCEPT_CHECK_setMetadataFromLevel
		GEODE_CONCEPT_FUNCTION_CHECK(setMetadataFromLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showEveryplay
		#define GEODE_CONCEPT_CHECK_showEveryplay
		GEODE_CONCEPT_FUNCTION_CHECK(showEveryplay) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_startRecording
		#define GEODE_CONCEPT_CHECK_startRecording
		GEODE_CONCEPT_FUNCTION_CHECK(startRecording) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopRecording
		#define GEODE_CONCEPT_CHECK_stopRecording
		GEODE_CONCEPT_FUNCTION_CHECK(stopRecording) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EveryplayToolbox> : ModifyBase<ModifyDerive<Der, EveryplayToolbox>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EveryplayToolbox>>;
		using ModifyBase<ModifyDerive<Der, EveryplayToolbox>>::ModifyBase;
		using Base = EveryplayToolbox;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EveryplayToolbox, firstSetup, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EveryplayToolbox, isEveryplaySupported, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EveryplayToolbox, isLowEndDevice, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EveryplayToolbox, isPaused, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EveryplayToolbox, isRecording, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EveryplayToolbox, isRecordingSupported, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EveryplayToolbox, pauseRecording, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EveryplayToolbox, playLastRecording, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EveryplayToolbox, resumeRecording, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EveryplayToolbox, setMetadataFromLevel, GJGameLevel*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EveryplayToolbox, showEveryplay, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EveryplayToolbox, startRecording, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EveryplayToolbox, stopRecording, )
		}
	};
}
