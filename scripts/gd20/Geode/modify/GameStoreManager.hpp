#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GameStoreManager.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sharedState
		#define GEODE_STATICS_sharedState
		GEODE_AS_STATIC_FUNCTION(sharedState) 
	#endif

	#ifndef GEODE_STATICS_addCount
		#define GEODE_STATICS_addCount
		GEODE_AS_STATIC_FUNCTION(addCount) 
	#endif

	#ifndef GEODE_STATICS_boughtGold
		#define GEODE_STATICS_boughtGold
		GEODE_AS_STATIC_FUNCTION(boughtGold) 
	#endif

	#ifndef GEODE_STATICS_claimItems
		#define GEODE_STATICS_claimItems
		GEODE_AS_STATIC_FUNCTION(claimItems) 
	#endif

	#ifndef GEODE_STATICS_consumeItem
		#define GEODE_STATICS_consumeItem
		GEODE_AS_STATIC_FUNCTION(consumeItem) 
	#endif

	#ifndef GEODE_STATICS_countForItem
		#define GEODE_STATICS_countForItem
		GEODE_AS_STATIC_FUNCTION(countForItem) 
	#endif

	#ifndef GEODE_STATICS_dataLoaded
		#define GEODE_STATICS_dataLoaded
		GEODE_AS_STATIC_FUNCTION(dataLoaded) 
	#endif

	#ifndef GEODE_STATICS_dictForFeatureID
		#define GEODE_STATICS_dictForFeatureID
		GEODE_AS_STATIC_FUNCTION(dictForFeatureID) 
	#endif

	#ifndef GEODE_STATICS_displayGoldError
		#define GEODE_STATICS_displayGoldError
		GEODE_AS_STATIC_FUNCTION(displayGoldError) 
	#endif

	#ifndef GEODE_STATICS_displayItemRestore
		#define GEODE_STATICS_displayItemRestore
		GEODE_AS_STATIC_FUNCTION(displayItemRestore) 
	#endif

	#ifndef GEODE_STATICS_encodeDataTo
		#define GEODE_STATICS_encodeDataTo
		GEODE_AS_STATIC_FUNCTION(encodeDataTo) 
	#endif

	#ifndef GEODE_STATICS_eventUnlockFeature
		#define GEODE_STATICS_eventUnlockFeature
		GEODE_AS_STATIC_FUNCTION(eventUnlockFeature) 
	#endif

	#ifndef GEODE_STATICS_firstLoad
		#define GEODE_STATICS_firstLoad
		GEODE_AS_STATIC_FUNCTION(firstLoad) 
	#endif

	#ifndef GEODE_STATICS_getAllItemsForCategory
		#define GEODE_STATICS_getAllItemsForCategory
		GEODE_AS_STATIC_FUNCTION(getAllItemsForCategory) 
	#endif

	#ifndef GEODE_STATICS_getCategory
		#define GEODE_STATICS_getCategory
		GEODE_AS_STATIC_FUNCTION(getCategory) 
	#endif

	#ifndef GEODE_STATICS_getShopCategories
		#define GEODE_STATICS_getShopCategories
		GEODE_AS_STATIC_FUNCTION(getShopCategories) 
	#endif

	#ifndef GEODE_STATICS_getShopItems
		#define GEODE_STATICS_getShopItems
		GEODE_AS_STATIC_FUNCTION(getShopItems) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_isBillingSupported
		#define GEODE_STATICS_isBillingSupported
		GEODE_AS_STATIC_FUNCTION(isBillingSupported) 
	#endif

	#ifndef GEODE_STATICS_isFeatureUnlocked
		#define GEODE_STATICS_isFeatureUnlocked
		GEODE_AS_STATIC_FUNCTION(isFeatureUnlocked) 
	#endif

	#ifndef GEODE_STATICS_itemPurchased
		#define GEODE_STATICS_itemPurchased
		GEODE_AS_STATIC_FUNCTION(itemPurchased) 
	#endif

	#ifndef GEODE_STATICS_itemPurchaseFailed
		#define GEODE_STATICS_itemPurchaseFailed
		GEODE_AS_STATIC_FUNCTION(itemPurchaseFailed) 
	#endif

	#ifndef GEODE_STATICS_itemRefunded
		#define GEODE_STATICS_itemRefunded
		GEODE_AS_STATIC_FUNCTION(itemRefunded) 
	#endif

	#ifndef GEODE_STATICS_onClaimItemsCompleted
		#define GEODE_STATICS_onClaimItemsCompleted
		GEODE_AS_STATIC_FUNCTION(onClaimItemsCompleted) 
	#endif

	#ifndef GEODE_STATICS_playBuySound
		#define GEODE_STATICS_playBuySound
		GEODE_AS_STATIC_FUNCTION(playBuySound) 
	#endif

	#ifndef GEODE_STATICS_purchaseConsumable
		#define GEODE_STATICS_purchaseConsumable
		GEODE_AS_STATIC_FUNCTION(purchaseConsumable) 
	#endif

	#ifndef GEODE_STATICS_purchaseFeature
		#define GEODE_STATICS_purchaseFeature
		GEODE_AS_STATIC_FUNCTION(purchaseFeature) 
	#endif

	#ifndef GEODE_STATICS_purchaseItem
		#define GEODE_STATICS_purchaseItem
		GEODE_AS_STATIC_FUNCTION(purchaseItem) 
	#endif

	#ifndef GEODE_STATICS_restorePurchases
		#define GEODE_STATICS_restorePurchases
		GEODE_AS_STATIC_FUNCTION(restorePurchases) 
	#endif

	#ifndef GEODE_STATICS_setCount
		#define GEODE_STATICS_setCount
		GEODE_AS_STATIC_FUNCTION(setCount) 
	#endif

	#ifndef GEODE_STATICS_setup
		#define GEODE_STATICS_setup
		GEODE_AS_STATIC_FUNCTION(setup) 
	#endif

	#ifndef GEODE_STATICS_sortCategories
		#define GEODE_STATICS_sortCategories
		GEODE_AS_STATIC_FUNCTION(sortCategories) 
	#endif

	#ifndef GEODE_STATICS_unlockFeature
		#define GEODE_STATICS_unlockFeature
		GEODE_AS_STATIC_FUNCTION(unlockFeature) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_sharedState
		#define GEODE_CONCEPT_CHECK_sharedState
		GEODE_CONCEPT_FUNCTION_CHECK(sharedState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addCount
		#define GEODE_CONCEPT_CHECK_addCount
		GEODE_CONCEPT_FUNCTION_CHECK(addCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_boughtGold
		#define GEODE_CONCEPT_CHECK_boughtGold
		GEODE_CONCEPT_FUNCTION_CHECK(boughtGold) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_claimItems
		#define GEODE_CONCEPT_CHECK_claimItems
		GEODE_CONCEPT_FUNCTION_CHECK(claimItems) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_consumeItem
		#define GEODE_CONCEPT_CHECK_consumeItem
		GEODE_CONCEPT_FUNCTION_CHECK(consumeItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_countForItem
		#define GEODE_CONCEPT_CHECK_countForItem
		GEODE_CONCEPT_FUNCTION_CHECK(countForItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dataLoaded
		#define GEODE_CONCEPT_CHECK_dataLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(dataLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dictForFeatureID
		#define GEODE_CONCEPT_CHECK_dictForFeatureID
		GEODE_CONCEPT_FUNCTION_CHECK(dictForFeatureID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_displayGoldError
		#define GEODE_CONCEPT_CHECK_displayGoldError
		GEODE_CONCEPT_FUNCTION_CHECK(displayGoldError) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_displayItemRestore
		#define GEODE_CONCEPT_CHECK_displayItemRestore
		GEODE_CONCEPT_FUNCTION_CHECK(displayItemRestore) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_encodeDataTo
		#define GEODE_CONCEPT_CHECK_encodeDataTo
		GEODE_CONCEPT_FUNCTION_CHECK(encodeDataTo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_eventUnlockFeature
		#define GEODE_CONCEPT_CHECK_eventUnlockFeature
		GEODE_CONCEPT_FUNCTION_CHECK(eventUnlockFeature) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_firstLoad
		#define GEODE_CONCEPT_CHECK_firstLoad
		GEODE_CONCEPT_FUNCTION_CHECK(firstLoad) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAllItemsForCategory
		#define GEODE_CONCEPT_CHECK_getAllItemsForCategory
		GEODE_CONCEPT_FUNCTION_CHECK(getAllItemsForCategory) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCategory
		#define GEODE_CONCEPT_CHECK_getCategory
		GEODE_CONCEPT_FUNCTION_CHECK(getCategory) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getShopCategories
		#define GEODE_CONCEPT_CHECK_getShopCategories
		GEODE_CONCEPT_FUNCTION_CHECK(getShopCategories) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getShopItems
		#define GEODE_CONCEPT_CHECK_getShopItems
		GEODE_CONCEPT_FUNCTION_CHECK(getShopItems) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isBillingSupported
		#define GEODE_CONCEPT_CHECK_isBillingSupported
		GEODE_CONCEPT_FUNCTION_CHECK(isBillingSupported) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isFeatureUnlocked
		#define GEODE_CONCEPT_CHECK_isFeatureUnlocked
		GEODE_CONCEPT_FUNCTION_CHECK(isFeatureUnlocked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_itemPurchased
		#define GEODE_CONCEPT_CHECK_itemPurchased
		GEODE_CONCEPT_FUNCTION_CHECK(itemPurchased) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_itemPurchaseFailed
		#define GEODE_CONCEPT_CHECK_itemPurchaseFailed
		GEODE_CONCEPT_FUNCTION_CHECK(itemPurchaseFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_itemRefunded
		#define GEODE_CONCEPT_CHECK_itemRefunded
		GEODE_CONCEPT_FUNCTION_CHECK(itemRefunded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClaimItemsCompleted
		#define GEODE_CONCEPT_CHECK_onClaimItemsCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onClaimItemsCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playBuySound
		#define GEODE_CONCEPT_CHECK_playBuySound
		GEODE_CONCEPT_FUNCTION_CHECK(playBuySound) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_purchaseConsumable
		#define GEODE_CONCEPT_CHECK_purchaseConsumable
		GEODE_CONCEPT_FUNCTION_CHECK(purchaseConsumable) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_purchaseFeature
		#define GEODE_CONCEPT_CHECK_purchaseFeature
		GEODE_CONCEPT_FUNCTION_CHECK(purchaseFeature) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_purchaseItem
		#define GEODE_CONCEPT_CHECK_purchaseItem
		GEODE_CONCEPT_FUNCTION_CHECK(purchaseItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_restorePurchases
		#define GEODE_CONCEPT_CHECK_restorePurchases
		GEODE_CONCEPT_FUNCTION_CHECK(restorePurchases) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCount
		#define GEODE_CONCEPT_CHECK_setCount
		GEODE_CONCEPT_FUNCTION_CHECK(setCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setup
		#define GEODE_CONCEPT_CHECK_setup
		GEODE_CONCEPT_FUNCTION_CHECK(setup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sortCategories
		#define GEODE_CONCEPT_CHECK_sortCategories
		GEODE_CONCEPT_FUNCTION_CHECK(sortCategories) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unlockFeature
		#define GEODE_CONCEPT_CHECK_unlockFeature
		GEODE_CONCEPT_FUNCTION_CHECK(unlockFeature) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GameStoreManager> : ModifyBase<ModifyDerive<Der, GameStoreManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GameStoreManager>>;
		using ModifyBase<ModifyDerive<Der, GameStoreManager>>::ModifyBase;
		using Base = GameStoreManager;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStoreManager, sharedState, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStoreManager, addCount, int, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStoreManager, boughtGold, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStoreManager, claimItems, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStoreManager, consumeItem, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStoreManager, countForItem, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStoreManager, dataLoaded, DS_Dictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStoreManager, dictForFeatureID, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStoreManager, displayGoldError, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStoreManager, displayItemRestore, bool, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStoreManager, encodeDataTo, DS_Dictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStoreManager, eventUnlockFeature, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStoreManager, firstLoad, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStoreManager, getAllItemsForCategory, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStoreManager, getCategory, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStoreManager, getShopCategories, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStoreManager, getShopItems, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStoreManager, init, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStoreManager, isBillingSupported, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStoreManager, isFeatureUnlocked, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStoreManager, itemPurchased, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStoreManager, itemPurchaseFailed, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStoreManager, itemRefunded, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStoreManager, onClaimItemsCompleted, cocos2d::CCNode*, void*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStoreManager, playBuySound, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStoreManager, purchaseConsumable, char const*, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStoreManager, purchaseFeature, char const*, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStoreManager, purchaseItem, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStoreManager, restorePurchases, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStoreManager, setCount, int, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStoreManager, setup, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStoreManager, sortCategories, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameStoreManager, unlockFeature, char const*)
		}
	};
}
