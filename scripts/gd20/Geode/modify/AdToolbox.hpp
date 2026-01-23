#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/AdToolbox.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_cacheInterstitial
		#define GEODE_STATICS_cacheInterstitial
		GEODE_AS_STATIC_FUNCTION(cacheInterstitial) 
	#endif

	#ifndef GEODE_STATICS_disableBanner
		#define GEODE_STATICS_disableBanner
		GEODE_AS_STATIC_FUNCTION(disableBanner) 
	#endif

	#ifndef GEODE_STATICS_enableBanner
		#define GEODE_STATICS_enableBanner
		GEODE_AS_STATIC_FUNCTION(enableBanner) 
	#endif

	#ifndef GEODE_STATICS_hasCachedInterstitial
		#define GEODE_STATICS_hasCachedInterstitial
		GEODE_AS_STATIC_FUNCTION(hasCachedInterstitial) 
	#endif

	#ifndef GEODE_STATICS_setupAds
		#define GEODE_STATICS_setupAds
		GEODE_AS_STATIC_FUNCTION(setupAds) 
	#endif

	#ifndef GEODE_STATICS_showInterstitial
		#define GEODE_STATICS_showInterstitial
		GEODE_AS_STATIC_FUNCTION(showInterstitial) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_cacheInterstitial
		#define GEODE_CONCEPT_CHECK_cacheInterstitial
		GEODE_CONCEPT_FUNCTION_CHECK(cacheInterstitial) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_disableBanner
		#define GEODE_CONCEPT_CHECK_disableBanner
		GEODE_CONCEPT_FUNCTION_CHECK(disableBanner) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_enableBanner
		#define GEODE_CONCEPT_CHECK_enableBanner
		GEODE_CONCEPT_FUNCTION_CHECK(enableBanner) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasCachedInterstitial
		#define GEODE_CONCEPT_CHECK_hasCachedInterstitial
		GEODE_CONCEPT_FUNCTION_CHECK(hasCachedInterstitial) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupAds
		#define GEODE_CONCEPT_CHECK_setupAds
		GEODE_CONCEPT_FUNCTION_CHECK(setupAds) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showInterstitial
		#define GEODE_CONCEPT_CHECK_showInterstitial
		GEODE_CONCEPT_FUNCTION_CHECK(showInterstitial) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, AdToolbox> : ModifyBase<ModifyDerive<Der, AdToolbox>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, AdToolbox>>;
		using ModifyBase<ModifyDerive<Der, AdToolbox>>::ModifyBase;
		using Base = AdToolbox;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AdToolbox, cacheInterstitial, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AdToolbox, disableBanner, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AdToolbox, enableBanner, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AdToolbox, hasCachedInterstitial, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AdToolbox, setupAds, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AdToolbox, showInterstitial, )
		}
	};
}
