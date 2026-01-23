#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/StoreToolbox.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_doICheck
		#define GEODE_STATICS_doICheck
		GEODE_AS_STATIC_FUNCTION(doICheck) 
	#endif

	#ifndef GEODE_STATICS_isBillingSupported
		#define GEODE_STATICS_isBillingSupported
		GEODE_AS_STATIC_FUNCTION(isBillingSupported) 
	#endif

	#ifndef GEODE_STATICS_purchaseItem
		#define GEODE_STATICS_purchaseItem
		GEODE_AS_STATIC_FUNCTION(purchaseItem) 
	#endif

	#ifndef GEODE_STATICS_restorePurchases
		#define GEODE_STATICS_restorePurchases
		GEODE_AS_STATIC_FUNCTION(restorePurchases) 
	#endif

	#ifndef GEODE_STATICS_setupStore
		#define GEODE_STATICS_setupStore
		GEODE_AS_STATIC_FUNCTION(setupStore) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_doICheck
		#define GEODE_CONCEPT_CHECK_doICheck
		GEODE_CONCEPT_FUNCTION_CHECK(doICheck) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isBillingSupported
		#define GEODE_CONCEPT_CHECK_isBillingSupported
		GEODE_CONCEPT_FUNCTION_CHECK(isBillingSupported) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_purchaseItem
		#define GEODE_CONCEPT_CHECK_purchaseItem
		GEODE_CONCEPT_FUNCTION_CHECK(purchaseItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_restorePurchases
		#define GEODE_CONCEPT_CHECK_restorePurchases
		GEODE_CONCEPT_FUNCTION_CHECK(restorePurchases) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupStore
		#define GEODE_CONCEPT_CHECK_setupStore
		GEODE_CONCEPT_FUNCTION_CHECK(setupStore) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, StoreToolbox> : ModifyBase<ModifyDerive<Der, StoreToolbox>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, StoreToolbox>>;
		using ModifyBase<ModifyDerive<Der, StoreToolbox>>::ModifyBase;
		using Base = StoreToolbox;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(StoreToolbox, doICheck, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(StoreToolbox, isBillingSupported, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(StoreToolbox, purchaseItem, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(StoreToolbox, restorePurchases, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(StoreToolbox, setupStore, )
		}
	};
}
