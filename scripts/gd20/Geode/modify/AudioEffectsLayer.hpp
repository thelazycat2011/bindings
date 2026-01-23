#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/AudioEffectsLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_audioStep
		#define GEODE_STATICS_audioStep
		GEODE_AS_STATIC_FUNCTION(audioStep) 
	#endif

	#ifndef GEODE_STATICS_getAudioScale
		#define GEODE_STATICS_getAudioScale
		GEODE_AS_STATIC_FUNCTION(getAudioScale) 
	#endif

	#ifndef GEODE_STATICS_getBGSquare
		#define GEODE_STATICS_getBGSquare
		GEODE_AS_STATIC_FUNCTION(getBGSquare) 
	#endif

	#ifndef GEODE_STATICS_getRainActive
		#define GEODE_STATICS_getRainActive
		GEODE_AS_STATIC_FUNCTION(getRainActive) 
	#endif

	#ifndef GEODE_STATICS_goingDown
		#define GEODE_STATICS_goingDown
		GEODE_AS_STATIC_FUNCTION(goingDown) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_resetAudioVars
		#define GEODE_STATICS_resetAudioVars
		GEODE_AS_STATIC_FUNCTION(resetAudioVars) 
	#endif

	#ifndef GEODE_STATICS_setRainActive
		#define GEODE_STATICS_setRainActive
		GEODE_AS_STATIC_FUNCTION(setRainActive) 
	#endif

	#ifndef GEODE_STATICS_triggerEffect
		#define GEODE_STATICS_triggerEffect
		GEODE_AS_STATIC_FUNCTION(triggerEffect) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_updateTweenAction
		#define GEODE_STATICS_updateTweenAction
		GEODE_AS_STATIC_FUNCTION(updateTweenAction) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_audioStep
		#define GEODE_CONCEPT_CHECK_audioStep
		GEODE_CONCEPT_FUNCTION_CHECK(audioStep) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAudioScale
		#define GEODE_CONCEPT_CHECK_getAudioScale
		GEODE_CONCEPT_FUNCTION_CHECK(getAudioScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBGSquare
		#define GEODE_CONCEPT_CHECK_getBGSquare
		GEODE_CONCEPT_FUNCTION_CHECK(getBGSquare) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRainActive
		#define GEODE_CONCEPT_CHECK_getRainActive
		GEODE_CONCEPT_FUNCTION_CHECK(getRainActive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_goingDown
		#define GEODE_CONCEPT_CHECK_goingDown
		GEODE_CONCEPT_FUNCTION_CHECK(goingDown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetAudioVars
		#define GEODE_CONCEPT_CHECK_resetAudioVars
		GEODE_CONCEPT_FUNCTION_CHECK(resetAudioVars) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRainActive
		#define GEODE_CONCEPT_CHECK_setRainActive
		GEODE_CONCEPT_FUNCTION_CHECK(setRainActive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerEffect
		#define GEODE_CONCEPT_CHECK_triggerEffect
		GEODE_CONCEPT_FUNCTION_CHECK(triggerEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTweenAction
		#define GEODE_CONCEPT_CHECK_updateTweenAction
		GEODE_CONCEPT_FUNCTION_CHECK(updateTweenAction) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, AudioEffectsLayer> : ModifyBase<ModifyDerive<Der, AudioEffectsLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, AudioEffectsLayer>>;
		using ModifyBase<ModifyDerive<Der, AudioEffectsLayer>>::ModifyBase;
		using Base = AudioEffectsLayer;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AudioEffectsLayer, create, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AudioEffectsLayer, audioStep, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AudioEffectsLayer, getAudioScale, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AudioEffectsLayer, getBGSquare, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AudioEffectsLayer, getRainActive, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AudioEffectsLayer, goingDown, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AudioEffectsLayer, init, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AudioEffectsLayer, resetAudioVars, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AudioEffectsLayer, setRainActive, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AudioEffectsLayer, triggerEffect, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AudioEffectsLayer, draw, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AudioEffectsLayer, updateTweenAction, float, char const*)
		}
	};
}
