#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCScrollLayerExtDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_scrllViewWillBeginDecelerating
		#define GEODE_STATICS_scrllViewWillBeginDecelerating
		GEODE_AS_STATIC_FUNCTION(scrllViewWillBeginDecelerating) 
	#endif

	#ifndef GEODE_STATICS_scrollViewDidEndDecelerating
		#define GEODE_STATICS_scrollViewDidEndDecelerating
		GEODE_AS_STATIC_FUNCTION(scrollViewDidEndDecelerating) 
	#endif

	#ifndef GEODE_STATICS_scrollViewTouchMoving
		#define GEODE_STATICS_scrollViewTouchMoving
		GEODE_AS_STATIC_FUNCTION(scrollViewTouchMoving) 
	#endif

	#ifndef GEODE_STATICS_scrollViewDidEndMoving
		#define GEODE_STATICS_scrollViewDidEndMoving
		GEODE_AS_STATIC_FUNCTION(scrollViewDidEndMoving) 
	#endif

	#ifndef GEODE_STATICS_scrollViewTouchBegin
		#define GEODE_STATICS_scrollViewTouchBegin
		GEODE_AS_STATIC_FUNCTION(scrollViewTouchBegin) 
	#endif

	#ifndef GEODE_STATICS_scrollViewTouchEnd
		#define GEODE_STATICS_scrollViewTouchEnd
		GEODE_AS_STATIC_FUNCTION(scrollViewTouchEnd) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_scrllViewWillBeginDecelerating
		#define GEODE_CONCEPT_CHECK_scrllViewWillBeginDecelerating
		GEODE_CONCEPT_FUNCTION_CHECK(scrllViewWillBeginDecelerating) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scrollViewDidEndDecelerating
		#define GEODE_CONCEPT_CHECK_scrollViewDidEndDecelerating
		GEODE_CONCEPT_FUNCTION_CHECK(scrollViewDidEndDecelerating) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scrollViewTouchMoving
		#define GEODE_CONCEPT_CHECK_scrollViewTouchMoving
		GEODE_CONCEPT_FUNCTION_CHECK(scrollViewTouchMoving) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scrollViewDidEndMoving
		#define GEODE_CONCEPT_CHECK_scrollViewDidEndMoving
		GEODE_CONCEPT_FUNCTION_CHECK(scrollViewDidEndMoving) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scrollViewTouchBegin
		#define GEODE_CONCEPT_CHECK_scrollViewTouchBegin
		GEODE_CONCEPT_FUNCTION_CHECK(scrollViewTouchBegin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scrollViewTouchEnd
		#define GEODE_CONCEPT_CHECK_scrollViewTouchEnd
		GEODE_CONCEPT_FUNCTION_CHECK(scrollViewTouchEnd) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCScrollLayerExtDelegate> : ModifyBase<ModifyDerive<Der, CCScrollLayerExtDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCScrollLayerExtDelegate>>;
		using ModifyBase<ModifyDerive<Der, CCScrollLayerExtDelegate>>::ModifyBase;
		using Base = CCScrollLayerExtDelegate;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExtDelegate, scrllViewWillBeginDecelerating, CCScrollLayerExt*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExtDelegate, scrollViewDidEndDecelerating, CCScrollLayerExt*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExtDelegate, scrollViewTouchMoving, CCScrollLayerExt*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExtDelegate, scrollViewDidEndMoving, CCScrollLayerExt*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExtDelegate, scrollViewTouchBegin, CCScrollLayerExt*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCScrollLayerExtDelegate, scrollViewTouchEnd, CCScrollLayerExt*)
		}
	};
}
