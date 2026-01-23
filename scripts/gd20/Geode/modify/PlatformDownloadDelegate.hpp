#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/PlatformDownloadDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_downloadFinished
		#define GEODE_STATICS_downloadFinished
		GEODE_AS_STATIC_FUNCTION(downloadFinished) 
	#endif

	#ifndef GEODE_STATICS_downloadFailed
		#define GEODE_STATICS_downloadFailed
		GEODE_AS_STATIC_FUNCTION(downloadFailed) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_downloadFinished
		#define GEODE_CONCEPT_CHECK_downloadFinished
		GEODE_CONCEPT_FUNCTION_CHECK(downloadFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadFailed
		#define GEODE_CONCEPT_CHECK_downloadFailed
		GEODE_CONCEPT_FUNCTION_CHECK(downloadFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, PlatformDownloadDelegate> : ModifyBase<ModifyDerive<Der, PlatformDownloadDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, PlatformDownloadDelegate>>;
		using ModifyBase<ModifyDerive<Der, PlatformDownloadDelegate>>::ModifyBase;
		using Base = PlatformDownloadDelegate;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlatformDownloadDelegate, downloadFinished, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlatformDownloadDelegate, downloadFailed, char const*)
		}
	};
}
