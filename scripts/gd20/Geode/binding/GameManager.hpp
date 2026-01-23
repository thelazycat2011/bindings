#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GameManager {
public:
    static constexpr auto CLASS_NAME = "GameManager";

    /**
     * @note[short] Android
     */
    static GameManager* sharedState();

    /**
     * @note[short] Android
     */
    TodoReturn accountStatusChanged();

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn addNewCustomObject(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn applicationDidEnterBackground();

    /**
     * @note[short] Android
     */
    TodoReturn applicationWillEnterForeground();

    /**
     * @note[short] Android
     */
    TodoReturn checkSteamAchievementUnlock();

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn claimItemsResponse(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn colorForIdx(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn colorForPos(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn colorKey(int p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn completedAchievement(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn didExitPlayscene();

    /**
     * @note[short] Android
     */
    TodoReturn doQuickSave();

    /**
     * @note[short] Android
     */
    TodoReturn eventUnlockFeature(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn fadeInMusic(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn followTwitter();

    /**
     * @note[short] Android
     */
    TodoReturn getBGTexture(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getBootups();

    /**
     * @note[short] Android
     */
    TodoReturn getClickedEditor();

    /**
     * @note[short] Android
     */
    TodoReturn getClickedGarage();

    /**
     * @note[short] Android
     */
    TodoReturn getClickedName();

    /**
     * @note[short] Android
     */
    TodoReturn getClickedPractice();

    /**
     * @note[short] Android
     */
    TodoReturn getCommentSortRecent();

    /**
     * @note[short] Android
     */
    TodoReturn getCustomObjectDict();

    /**
     * @note[short] Android
     */
    TodoReturn getDidFollowTwitter();

    /**
     * @note[short] Android
     */
    TodoReturn getDidLikeFacebook();

    /**
     * @note[short] Android
     */
    TodoReturn getDidPauseBGMusic();

    /**
     * @note[short] Android
     */
    TodoReturn getDidPlayGame();

    /**
     * @note[short] Android
     */
    TodoReturn getDidRateGame();

    /**
     * @note[short] Android
     */
    TodoReturn getDidSetupEveryplay();

    /**
     * @note[short] Android
     */
    TodoReturn getDidSubYouTube();

    /**
     * @note[short] Android
     */
    TodoReturn getDidSyncAchievements();

    /**
     * @note[short] Android
     */
    TodoReturn getEditMode();

    /**
     * @note[short] Android
     */
    TodoReturn getEditorCopyString();

    /**
     * @note[short] Android
     */
    TodoReturn getEditorLayer();

    /**
     * @note[short] Android
     */
    TodoReturn getFetchNewLevelsQueued();

    /**
     * @note[short] Android
     */
    TodoReturn getFirstSetup();

    /**
     * @note[short] Android
     */
    TodoReturn getFontFile(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getFontTexture(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getGameVariable(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getGTexture(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getHasRatedGame();

    /**
     * @note[short] Android
     */
    TodoReturn getHasRatingPower();

    /**
     * @note[short] Android
     */
    TodoReturn getIntGameVariable(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getIsResetting();

    /**
     * @note[short] Android
     */
    TodoReturn getLastCustomColorIdx();

    /**
     * @note[short] Android
     */
    TodoReturn getLastGroupID();

    /**
     * @note[short] Android
     */
    TodoReturn getLastLevelID();

    /**
     * @note[short] Android
     */
    TodoReturn getLastScene();

    /**
     * @note[short] Android
     */
    TodoReturn getLastScene2();

    /**
     * @note[short] Android
     */
    TodoReturn getLevelSelectLayer();

    /**
     * @note[short] Android
     */
    TodoReturn getLoadedBGIdx();

    /**
     * @note[short] Android
     */
    TodoReturn getLoadedFontIdx();

    /**
     * @note[short] Android
     */
    TodoReturn getLoadedGIdx();

    /**
     * @note[short] Android
     */
    TodoReturn getMainMenuActive();

    /**
     * @note[short] Android
     */
    TodoReturn getMenulayer();

    /**
     * @note[short] Android
     */
    TodoReturn getNextUniqueObjectKey();

    /**
     * @note[short] Android
     */
    TodoReturn getNextUsedKey(int p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn getOrderedCustomObjectKeys();

    /**
     * @note[short] Android
     */
    TodoReturn getPerformanceMode();

    /**
     * @note[short] Android
     */
    TodoReturn getPlayerBall();

    /**
     * @note[short] Android
     */
    TodoReturn getPlayerBird();

    /**
     * @note[short] Android
     */
    TodoReturn getPlayerColor();

    /**
     * @note[short] Android
     */
    TodoReturn getPlayerColor2();

    /**
     * @note[short] Android
     */
    TodoReturn getPlayerDart();

    /**
     * @note[short] Android
     */
    TodoReturn getPlayerFrame();

    /**
     * @note[short] Android
     */
    TodoReturn getPlayerGlow();

    /**
     * @note[short] Android
     */
    TodoReturn getPlayerIconType();

    /**
     * @note[short] Android
     */
    TodoReturn getPlayerName();

    /**
     * @note[short] Android
     */
    TodoReturn getPlayerRobot();

    /**
     * @note[short] Android
     */
    TodoReturn getPlayerScoreValid();

    /**
     * @note[short] Android
     */
    TodoReturn getPlayerShip();

    /**
     * @note[short] Android
     */
    TodoReturn getPlayerStreak();

    /**
     * @note[short] Android
     */
    TodoReturn getPlayerUDID();

    /**
     * @note[short] Android
     */
    TodoReturn getPlayerUserID();

    /**
     * @note[short] Android
     */
    TodoReturn getPlayLayer();

    /**
     * @note[short] Android
     */
    TodoReturn getPremiumPopup();

    /**
     * @note[short] Android
     */
    TodoReturn getRateDelegate();

    /**
     * @note[short] Android
     */
    TodoReturn getRecordGameplay();

    /**
     * @note[short] Android
     */
    TodoReturn getResolution();

    /**
     * @note[short] Android
     */
    TodoReturn getReturnToSearch();

    /**
     * @note[short] Android
     */
    TodoReturn getShowBPMMarkers();

    /**
     * @note[short] Android
     */
    TodoReturn getShowedEditorGuide();

    /**
     * @note[short] Android
     */
    TodoReturn getShowedLowDetailDialog();

    /**
     * @note[short] Android
     */
    TodoReturn getShowedMenu();

    /**
     * @note[short] Android
     */
    TodoReturn getShowedPirate();

    /**
     * @note[short] Android
     */
    TodoReturn getShowedRateDiffDialog();

    /**
     * @note[short] Android
     */
    TodoReturn getShowedRateStarDialog();

    /**
     * @note[short] Android
     */
    TodoReturn getShowingPromo();

    /**
     * @note[short] Android
     */
    TodoReturn getShowProgressBar();

    /**
     * @note[short] Android
     */
    TodoReturn getShowSongMarkers();

    /**
     * @note[short] Android
     */
    TodoReturn getStoredColor();

    /**
     * @note[short] Android
     */
    TodoReturn getTestSmoothFix();

    /**
     * @note[short] Android
     */
    TodoReturn getTexQuality();

    /**
     * @note[short] Android
     */
    TodoReturn getTotalAttempts();

    /**
     * @note[short] Android
     */
    TodoReturn getValueKeeper();

    /**
     * @note[short] Android
     */
    TodoReturn getWasHigh();

    /**
     * @note[short] Android
     */
    TodoReturn hasShownAdRecently();

    /**
     * @note[short] Android
     */
    TodoReturn iconKey(int p0, IconType p1);

    /**
     * @note[short] Android
     */
    bool isColorUnlocked(int p0, bool p1);

    /**
     * @note[short] Android
     */
    bool isIconUnlocked(int p0, IconType p1);

    /**
     * @note[short] Android
     */
    TodoReturn itemPurchased(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn levelIsPremium(int p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn likeFacebook();

    /**
     * @note[short] Android
     */
    TodoReturn loadBackground(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn loadFont(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn loadGround(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn loadVideoSettings();

    /**
     * @note[short] Android
     */
    TodoReturn lockColor(int p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn lockIcon(int p0, IconType p1);

    /**
     * @note[short] Android
     */
    TodoReturn openEditorGuide();

    /**
     * @note[short] Android
     */
    TodoReturn rateGame();

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn recountUserStats(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn reloadAll(bool p0, bool p1, bool p2);

    /**
     * @note[short] Android
     */
    TodoReturn reloadAllStep2();

    /**
     * @note[short] Android
     */
    TodoReturn reloadAllStep3();

    /**
     * @note[short] Android
     */
    TodoReturn reloadAllStep4();

    /**
     * @note[short] Android
     */
    TodoReturn reloadAllStep5();

    /**
     * @note[short] Android
     */
    TodoReturn removeCustomObject(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn reorderKey(int p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn reportAchievementWithID(char const* p0, int p1, bool p2);

    /**
     * @note[short] Android
     */
    TodoReturn reportPercentageForLevel(int p0, int p1, bool p2);

    /**
     * @note[short] Android
     */
    TodoReturn resetAchievement(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn resetAllIcons();

    /**
     * @note[short] Android
     */
    TodoReturn resetCoinUnlocks();

    /**
     * @note[short] Android
     */
    TodoReturn resolutionForKey(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn returnToLastScene(GJGameLevel* p0);

    /**
     * @note[short] Android
     */
    TodoReturn safePopScene();

    /**
     * @note[short] Android
     */
    void setBootups(int p0);

    /**
     * @note[short] Android
     */
    void setClickedEditor(bool p0);

    /**
     * @note[short] Android
     */
    void setClickedGarage(bool p0);

    /**
     * @note[short] Android
     */
    void setClickedName(bool p0);

    /**
     * @note[short] Android
     */
    void setClickedPractice(bool p0);

    /**
     * @note[short] Android
     */
    void setCommentSortRecent(bool p0);

    /**
     * @note[short] Android
     */
    void setCustomObjectDict(cocos2d::CCDictionary* p0);

    /**
     * @note[short] Android
     */
    void setDidFollowTwitter(bool p0);

    /**
     * @note[short] Android
     */
    void setDidLikeFacebook(bool p0);

    /**
     * @note[short] Android
     */
    void setDidPauseBGMusic(bool p0);

    /**
     * @note[short] Android
     */
    void setDidPlayGame(bool p0);

    /**
     * @note[short] Android
     */
    void setDidRateGame(bool p0);

    /**
     * @note[short] Android
     */
    void setDidSetupEveryplay(bool p0);

    /**
     * @note[short] Android
     */
    void setDidSubYouTube(bool p0);

    /**
     * @note[short] Android
     */
    void setDidSyncAchievements(bool p0);

    /**
     * @note[short] Android
     */
    void setEditMode(bool p0);

    /**
     * @note[short] Android: Rebinded
     */
    void setEditorCopyString(gd::string p0);

    /**
     * @note[short] Android
     */
    void setEditorLayer(LevelEditorLayer* p0);

    /**
     * @note[short] Android
     */
    void setFetchNewLevelsQueued(bool p0);

    /**
     * @note[short] Android
     */
    void setFirstSetup(bool p0);

    /**
     * @note[short] Android
     */
    void setGameVariable(char const* p0, bool p1);

    /**
     * @note[short] Android
     */
    void setHasRatedGame(bool p0);

    /**
     * @note[short] Android
     */
    void setHasRatingPower(bool p0);

    /**
     * @note[short] Android
     */
    void setIntGameVariable(char const* p0, int p1);

    /**
     * @note[short] Android
     */
    void setIsResetting(bool p0);

    /**
     * @note[short] Android
     */
    void setLastCustomColorIdx(int p0);

    /**
     * @note[short] Android
     */
    void setLastGroupID(int p0);

    /**
     * @note[short] Android
     */
    void setLastLevelID(int p0);

    /**
     * @note[short] Android
     */
    void setLastScene(LastGameScene p0);

    /**
     * @note[short] Android
     */
    void setLastScene2(LastGameScene p0);

    /**
     * @note[short] Android
     */
    void setLevelSelectLayer(LevelSelectLayer* p0);

    /**
     * @note[short] Android
     */
    void setMainMenuActive(bool p0);

    /**
     * @note[short] Android
     */
    void setMenulayer(MenuLayer* p0);

    /**
     * @note[short] Android
     */
    void setPerformanceMode(bool p0);

    /**
     * @note[short] Android
     */
    void setPlayerBall(int p0);

    /**
     * @note[short] Android
     */
    void setPlayerBird(int p0);

    /**
     * @note[short] Android
     */
    void setPlayerColor(int p0);

    /**
     * @note[short] Android
     */
    void setPlayerColor2(int p0);

    /**
     * @note[short] Android
     */
    void setPlayerDart(int p0);

    /**
     * @note[short] Android
     */
    void setPlayerFrame(int p0);

    /**
     * @note[short] Android
     */
    void setPlayerGlow(bool p0);

    /**
     * @note[short] Android
     */
    void setPlayerIconType(IconType p0);

    /**
     * @note[short] Android: Rebinded
     */
    void setPlayerName(gd::string p0);

    /**
     * @note[short] Android
     */
    void setPlayerRobot(int p0);

    /**
     * @note[short] Android
     */
    void setPlayerScoreValid(bool p0);

    /**
     * @note[short] Android
     */
    void setPlayerShip(int p0);

    /**
     * @note[short] Android
     */
    void setPlayerStreak(int p0);

    /**
     * @note[short] Android: Rebinded
     */
    void setPlayerUDID(gd::string p0);

    /**
     * @note[short] Android
     */
    void setPlayerUserID(int p0);

    /**
     * @note[short] Android
     */
    void setPlayLayer(PlayLayer* p0);

    /**
     * @note[short] Android
     */
    void setPremiumPopup(PremiumPopup* p0);

    /**
     * @note[short] Android
     */
    void setRateDelegate(GameRateDelegate* p0);

    /**
     * @note[short] Android
     */
    void setRecordGameplay(bool p0);

    /**
     * @note[short] Android
     */
    void setResolution(int p0);

    /**
     * @note[short] Android
     */
    void setReturnToSearch(bool p0);

    /**
     * @note[short] Android
     */
    void setShowBPMMarkers(bool p0);

    /**
     * @note[short] Android
     */
    void setShowedEditorGuide(bool p0);

    /**
     * @note[short] Android
     */
    void setShowedLowDetailDialog(bool p0);

    /**
     * @note[short] Android
     */
    void setShowedMenu(bool p0);

    /**
     * @note[short] Android
     */
    void setShowedPirate(bool p0);

    /**
     * @note[short] Android
     */
    void setShowedRateDiffDialog(bool p0);

    /**
     * @note[short] Android
     */
    void setShowedRateStarDialog(bool p0);

    /**
     * @note[short] Android
     */
    void setShowingPromo(bool p0);

    /**
     * @note[short] Android
     */
    void setShowProgressBar(bool p0);

    /**
     * @note[short] Android
     */
    void setShowSongMarkers(bool p0);

    /**
     * @note[short] Android
     */
    void setStoredColor(cocos2d::ccColor3B p0);

    /**
     * @note[short] Android
     */
    void setTestSmoothFix(bool p0);

    /**
     * @note[short] Android
     */
    void setTexQuality(cocos2d::TextureQuality p0);

    /**
     * @note[short] Android
     */
    void setTotalAttempts(int p0);

    /**
     * @note[short] Android
     */
    void setValueKeeper(cocos2d::CCDictionary* p0);

    /**
     * @note[short] Android
     */
    void setWasHigh(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn shouldShowInterstitial();

    /**
     * @note[short] Android
     */
    TodoReturn shouldShowPromoInterstitial();

    /**
     * @note[short] Android
     */
    TodoReturn showInterstitial();

    /**
     * @note[short] Android
     */
    TodoReturn showInterstitialForced();

    /**
     * @note[short] Android
     */
    TodoReturn showMainMenuAd();

    /**
     * @note[short] Android
     */
    TodoReturn showPromoInterstitial();

    /**
     * @note[short] Android
     */
    TodoReturn startUpdate();

    /**
     * @note[short] Android
     */
    TodoReturn stringForCustomObject(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn subYouTube();

    /**
     * @note[short] Android
     */
    TodoReturn switchCustomObjects(int p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn switchScreenMode(bool p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn syncPlatformAchievements();

    /**
     * @note[short] Android
     */
    TodoReturn toggleGameVariable(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn tryCacheAd();

    /**
     * @note[short] Android
     */
    TodoReturn unloadBackground();

    /**
     * @note[short] Android
     */
    TodoReturn unlockColor(int p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn unlockedPremium();

    /**
     * @note[short] Android
     */
    TodoReturn unlockIcon(int p0, IconType p1);

    /**
     * @note[short] Android
     */
    TodoReturn updateMusic();

    /**
     * @note[short] Android
     */
    TodoReturn verifyAchievementUnlocks();

    /**
     * @note[short] Android
     */
    TodoReturn verifyCoinUnlocks();

    /**
     * @note[short] Android
     */
    TodoReturn verifyStarUnlocks();

    /**
     * @note[short] Android
     */
    TodoReturn verifySyncedCoins();

    /**
     * @note[short] Android
     */
    TodoReturn videoAdHidden();

    /**
     * @note[short] Android
     */
    TodoReturn videoAdShowed();

    /**
     * @note[short] Android
     */
    virtual void update(float p0);

    /**
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Android
     */
    virtual TodoReturn encodeDataTo(DS_Dictionary* p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn dataLoaded(DS_Dictionary* p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn firstLoad();
};
