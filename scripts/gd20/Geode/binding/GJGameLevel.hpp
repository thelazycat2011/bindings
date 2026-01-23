#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJGameLevel {
public:
    static constexpr auto CLASS_NAME = "GJGameLevel";

    /**
     * @note[short] Android
     */
    static GJGameLevel* create();

    /**
     * @note[short] Android
     */
    static GJGameLevel* create(cocos2d::CCDictionary* p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn areCoinsVerified();

    /**
     * @note[short] Android
     */
    TodoReturn createWithCoder(DS_Dictionary* p0);

    /**
     * @note[short] Android
     */
    TodoReturn dataLoaded(DS_Dictionary* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getAccountID();

    /**
     * @note[short] Android
     */
    TodoReturn getAttempts();

    /**
     * @note[short] Android
     */
    TodoReturn getAudioFileName();

    /**
     * @note[short] Android
     */
    TodoReturn getAudioTrack();

    /**
     * @note[short] Android
     */
    TodoReturn getAutoLevel();

    /**
     * @note[short] Android
     */
    TodoReturn getAverageDifficulty();

    /**
     * @note[short] Android
     */
    TodoReturn getCapacityString();

    /**
     * @note[short] Android
     */
    TodoReturn getCoin1Verified();

    /**
     * @note[short] Android
     */
    TodoReturn getCoin2Verified();

    /**
     * @note[short] Android
     */
    TodoReturn getCoin3Verified();

    /**
     * @note[short] Android
     */
    TodoReturn getCoinKey(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getCoins();

    /**
     * @note[short] Android
     */
    TodoReturn getCoinsVerified();

    /**
     * @note[short] Android
     */
    TodoReturn getCompletes();

    /**
     * @note[short] Android
     */
    TodoReturn getDemon();

    /**
     * @note[short] Android
     */
    TodoReturn getDemonVotes();

    /**
     * @note[short] Android
     */
    TodoReturn getDifficulty();

    /**
     * @note[short] Android
     */
    TodoReturn getDislikes();

    /**
     * @note[short] Android
     */
    TodoReturn getDontSave();

    /**
     * @note[short] Android
     */
    TodoReturn getDownloads();

    /**
     * @note[short] Android
     */
    TodoReturn getFailedPasswordAttempts();

    /**
     * @note[short] Android
     */
    TodoReturn getFeatured();

    /**
     * @note[short] Android
     */
    TodoReturn getGameVersion();

    /**
     * @note[short] Android
     */
    TodoReturn getHasBeenModified();

    /**
     * @note[short] Android
     */
    TodoReturn getIsEditable();

    /**
     * @note[short] Android
     */
    TodoReturn getIsHidden();

    /**
     * @note[short] Android
     */
    TodoReturn getIsUnlocked();

    /**
     * @note[short] Android
     */
    TodoReturn getIsUploaded();

    /**
     * @note[short] Android
     */
    TodoReturn getIsVerified();

    /**
     * @note[short] Android
     */
    TodoReturn getJumps();

    /**
     * @note[short] Android
     */
    TodoReturn getLastBuildGroupID();

    /**
     * @note[short] Android
     */
    TodoReturn getLastBuildPage();

    /**
     * @note[short] Android
     */
    TodoReturn getLastBuildPageForTab(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getLastBuildSave();

    /**
     * @note[short] Android
     */
    TodoReturn getLastBuildTab();

    /**
     * @note[short] Android
     */
    TodoReturn getLastCameraPos();

    /**
     * @note[short] Android
     */
    TodoReturn getLastEditorZoom();

    /**
     * @note[short] Android
     */
    TodoReturn getLengthKey(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getLevelDesc();

    /**
     * @note[short] Android
     */
    TodoReturn getLevelID();

    /**
     * @note[short] Android
     */
    TodoReturn getLevelLength();

    /**
     * @note[short] Android
     */
    TodoReturn getLevelName();

    /**
     * @note[short] Android
     */
    TodoReturn getLevelRev();

    /**
     * @note[short] Android
     */
    TodoReturn getLevelString();

    /**
     * @note[short] Android
     */
    TodoReturn getLevelType();

    /**
     * @note[short] Android
     */
    TodoReturn getLevelVersion();

    /**
     * @note[short] Android
     */
    TodoReturn getLikes();

    /**
     * @note[short] Android
     */
    TodoReturn getM_ID();

    /**
     * @note[short] Android
     */
    TodoReturn getMaxStarRatings();

    /**
     * @note[short] Android
     */
    TodoReturn getMinStarRatings();

    /**
     * @note[short] Android
     */
    TodoReturn getNormalPercent();

    /**
     * @note[short] Android
     */
    TodoReturn getObjectCount();

    /**
     * @note[short] Android
     */
    TodoReturn getOrder();

    /**
     * @note[short] Android
     */
    TodoReturn getOriginalLevel();

    /**
     * @note[short] Android
     */
    TodoReturn getPassword();

    /**
     * @note[short] Android
     */
    TodoReturn getPracticePercent();

    /**
     * @note[short] Android
     */
    TodoReturn getRateFeature();

    /**
     * @note[short] Android
     */
    TodoReturn getRateStars();

    /**
     * @note[short] Android
     */
    TodoReturn getRateUser();

    /**
     * @note[short] Android
     */
    TodoReturn getRatings();

    /**
     * @note[short] Android
     */
    TodoReturn getRatingsSum();

    /**
     * @note[short] Android
     */
    TodoReturn getRecordString();

    /**
     * @note[short] Android
     */
    TodoReturn getRequestedStars();

    /**
     * @note[short] Android
     */
    TodoReturn getRequiredCoins();

    /**
     * @note[short] Android
     */
    TodoReturn getShowedSongWarning();

    /**
     * @note[short] Android
     */
    TodoReturn getSongID();

    /**
     * @note[short] Android
     */
    TodoReturn getSongName();

    /**
     * @note[short] Android
     */
    TodoReturn getStarRatings();

    /**
     * @note[short] Android
     */
    TodoReturn getStarRatingsSum();

    /**
     * @note[short] Android
     */
    TodoReturn getStars();

    /**
     * @note[short] Android
     */
    TodoReturn getTempName();

    /**
     * @note[short] Android
     */
    TodoReturn getTwoPlayerMode();

    /**
     * @note[short] Android
     */
    TodoReturn getUnpackedLevelDescription();

    /**
     * @note[short] Android
     */
    TodoReturn getUpdateDate();

    /**
     * @note[short] Android
     */
    TodoReturn getUploadDate();

    /**
     * @note[short] Android
     */
    TodoReturn getUserID();

    /**
     * @note[short] Android
     */
    TodoReturn getUserName();

    /**
     * @note[short] Android
     */
    TodoReturn getWasCheatReset();

    /**
     * @note[short] Android
     */
    TodoReturn handleStatsConflict(GJGameLevel* p0);

    /**
     * @note[short] Android
     */
    TodoReturn lengthKeyToString(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn levelWasAltered();

    /**
     * @note[short] Android
     */
    TodoReturn levelWasSubmitted();

    /**
     * @note[short] Android
     */
    TodoReturn savePercentage(int p0, bool p1);

    /**
     * @note[short] Android
     */
    void setAccountID(int p0);

    /**
     * @note[short] Android
     */
    void setAttempts(int p0);

    /**
     * @note[short] Android
     */
    void setAudioTrack(int p0);

    /**
     * @note[short] Android
     */
    void setAutoLevel(bool p0);

    /**
     * @note[short] Android: Rebinded
     */
    void setCapacityString(gd::string p0);

    /**
     * @note[short] Android
     */
    void setCoin1Verified(int p0);

    /**
     * @note[short] Android
     */
    void setCoin2Verified(int p0);

    /**
     * @note[short] Android
     */
    void setCoin3Verified(int p0);

    /**
     * @note[short] Android
     */
    void setCoins(int p0);

    /**
     * @note[short] Android
     */
    void setCoinsVerified(int p0);

    /**
     * @note[short] Android
     */
    void setCompletes(int p0);

    /**
     * @note[short] Android
     */
    void setDemon(bool p0);

    /**
     * @note[short] Android
     */
    void setDemonVotes(int p0);

    /**
     * @note[short] Android
     */
    void setDifficulty(int p0);

    /**
     * @note[short] Android
     */
    void setDislikes(int p0);

    /**
     * @note[short] Android
     */
    void setDontSave(bool p0);

    /**
     * @note[short] Android
     */
    void setDownloads(int p0);

    /**
     * @note[short] Android
     */
    void setFailedPasswordAttempts(int p0);

    /**
     * @note[short] Android
     */
    void setFeatured(int p0);

    /**
     * @note[short] Android
     */
    void setGameVersion(int p0);

    /**
     * @note[short] Android
     */
    void setHasBeenModified(bool p0);

    /**
     * @note[short] Android
     */
    void setIsEditable(bool p0);

    /**
     * @note[short] Android
     */
    void setIsHidden(bool p0);

    /**
     * @note[short] Android
     */
    void setIsUnlocked(bool p0);

    /**
     * @note[short] Android
     */
    void setIsUploaded(bool p0);

    /**
     * @note[short] Android
     */
    void setIsVerified(bool p0);

    /**
     * @note[short] Android
     */
    void setJumps(int p0);

    /**
     * @note[short] Android
     */
    void setLastBuildGroupID(int p0);

    /**
     * @note[short] Android
     */
    void setLastBuildPage(int p0);

    /**
     * @note[short] Android
     */
    void setLastBuildPageForTab(int p0, int p1);

    /**
     * @note[short] Android
     */
    void setLastBuildSave(cocos2d::CCDictionary* p0);

    /**
     * @note[short] Android
     */
    void setLastBuildTab(int p0);

    /**
     * @note[short] Android
     */
    void setLastCameraPos(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    void setLastEditorZoom(float p0);

    /**
     * @note[short] Android: Rebinded
     */
    void setLevelDesc(gd::string p0);

    /**
     * @note[short] Android
     */
    void setLevelID(int p0);

    /**
     * @note[short] Android
     */
    void setLevelLength(int p0);

    /**
     * @note[short] Android: Rebinded
     */
    void setLevelName(gd::string p0);

    /**
     * @note[short] Android
     */
    void setLevelRev(int p0);

    /**
     * @note[short] Android: Rebinded
     */
    void setLevelString(gd::string p0);

    /**
     * @note[short] Android
     */
    void setLevelType(GJLevelType p0);

    /**
     * @note[short] Android
     */
    void setLevelVersion(int p0);

    /**
     * @note[short] Android
     */
    void setLikes(int p0);

    /**
     * @note[short] Android
     */
    void setMaxStarRatings(int p0);

    /**
     * @note[short] Android
     */
    void setMinStarRatings(int p0);

    /**
     * @note[short] Android
     */
    void setNormalPercent(int p0);

    /**
     * @note[short] Android
     */
    void setObjectCount(int p0);

    /**
     * @note[short] Android
     */
    void setOrder(int p0);

    /**
     * @note[short] Android
     */
    void setOriginalLevel(int p0);

    /**
     * @note[short] Android
     */
    void setPassword(int p0);

    /**
     * @note[short] Android
     */
    void setPracticePercent(int p0);

    /**
     * @note[short] Android
     */
    void setRateFeature(bool p0);

    /**
     * @note[short] Android
     */
    void setRateStars(int p0);

    /**
     * @note[short] Android: Rebinded
     */
    void setRateUser(gd::string p0);

    /**
     * @note[short] Android
     */
    void setRatings(int p0);

    /**
     * @note[short] Android
     */
    void setRatingsSum(int p0);

    /**
     * @note[short] Android: Rebinded
     */
    void setRecordString(gd::string p0);

    /**
     * @note[short] Android
     */
    void setRequestedStars(int p0);

    /**
     * @note[short] Android
     */
    void setRequiredCoins(int p0);

    /**
     * @note[short] Android
     */
    void setShowedSongWarning(bool p0);

    /**
     * @note[short] Android
     */
    void setSongID(int p0);

    /**
     * @note[short] Android
     */
    void setStarRatings(int p0);

    /**
     * @note[short] Android
     */
    void setStarRatingsSum(int p0);

    /**
     * @note[short] Android
     */
    void setStars(int p0);

    /**
     * @note[short] Android: Rebinded
     */
    void setTempName(gd::string p0);

    /**
     * @note[short] Android
     */
    void setTwoPlayerMode(bool p0);

    /**
     * @note[short] Android: Rebinded
     */
    void setUpdateDate(gd::string p0);

    /**
     * @note[short] Android: Rebinded
     */
    void setUploadDate(gd::string p0);

    /**
     * @note[short] Android
     */
    void setUserID(int p0);

    /**
     * @note[short] Android: Rebinded
     */
    void setUserName(gd::string p0);

    /**
     * @note[short] Android
     */
    void setWasCheatReset(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn unverifyCoins();

    /**
     * @note[short] Android
     */
    virtual void encodeWithCoder(DS_Dictionary* p0);

    /**
     * @note[short] Android
     */
    virtual bool canEncode();

    /**
     * @note[short] Android
     */
    virtual bool init();
};
