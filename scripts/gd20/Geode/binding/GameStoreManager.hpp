#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GameStoreManager {
public:
    static constexpr auto CLASS_NAME = "GameStoreManager";

    /**
     * @note[short] Android
     */
    static GameStoreManager* sharedState();

    /**
     * @note[short] Android
     */
    TodoReturn addCount(int p0, char const* p1);

    /**
     * @note[short] Android
     */
    TodoReturn boughtGold(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn claimItems(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn consumeItem(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn countForItem(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn dataLoaded(DS_Dictionary* p0);

    /**
     * @note[short] Android
     */
    TodoReturn dictForFeatureID(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn displayGoldError();

    /**
     * @note[short] Android
     */
    TodoReturn displayItemRestore(bool p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn encodeDataTo(DS_Dictionary* p0);

    /**
     * @note[short] Android
     */
    TodoReturn eventUnlockFeature(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn firstLoad();

    /**
     * @note[short] Android
     */
    TodoReturn getAllItemsForCategory(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getCategory(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getShopCategories();

    /**
     * @note[short] Android
     */
    TodoReturn getShopItems();

    /**
     * @note[short] Android
     */
    bool init();

    /**
     * @note[short] Android
     */
    bool isBillingSupported();

    /**
     * @note[short] Android
     */
    bool isFeatureUnlocked(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn itemPurchased(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn itemPurchaseFailed(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn itemRefunded(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn onClaimItemsCompleted(cocos2d::CCNode* p0, void* p1);

    /**
     * @note[short] Android
     */
    TodoReturn playBuySound();

    /**
     * @note[short] Android
     */
    TodoReturn purchaseConsumable(char const* p0, int p1, int p2);

    /**
     * @note[short] Android
     */
    TodoReturn purchaseFeature(char const* p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn purchaseItem(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn restorePurchases();

    /**
     * @note[short] Android
     */
    void setCount(int p0, char const* p1);

    /**
     * @note[short] Android
     */
    TodoReturn setup();

    /**
     * @note[short] Android
     */
    TodoReturn sortCategories();

    /**
     * @note[short] Android
     */
    TodoReturn unlockFeature(char const* p0);
};
