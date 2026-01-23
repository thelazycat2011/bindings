#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GameObject.hpp"

class PlayerObject : public GameObject {
public:
    static constexpr auto CLASS_NAME = "PlayerObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(PlayerObject, GameObject)

    /**
     * @note[short] Android
     */
    static PlayerObject* create(int p0, int p1, cocos2d::CCLayer* p2);

    /**
     * @note[short] Android
     */
    TodoReturn activateStreak();

    /**
     * @note[short] Android
     */
    TodoReturn addAllParticles();

    /**
     * @note[short] Android
     */
    TodoReturn boostPlayer(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn buttonDown(PlayerButton p0);

    /**
     * @note[short] Android
     */
    TodoReturn checkSnapJumpToObject(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn collidedWithObject(float p0, GameObject* p1, cocos2d::CCRect p2);

    /**
     * @note[short] Android
     */
    TodoReturn collidedWithObject(float p0, GameObject* p1);

    /**
     * @note[short] Android
     */
    TodoReturn collidedWithSlope(float p0, GameObject* p1, bool p2);

    /**
     * @note[short] Android
     */
    TodoReturn convertToClosestRotation(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn copyAttributes(PlayerObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn deactivateParticle();

    /**
     * @note[short] Android
     */
    TodoReturn deactivateStreak();

    /**
     * @note[short] Android
     */
    TodoReturn fadeOutStreak2(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn flipGravity(bool p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn flipMod();

    /**
     * @note[short] Android
     */
    TodoReturn getAudioScale();

    /**
     * @note[short] Android
     */
    TodoReturn getBirdMode();

    /**
     * @note[short] Android
     */
    TodoReturn getCanJump();

    /**
     * @note[short] Android
     */
    TodoReturn getClkTimer();

    /**
     * @note[short] Android
     */
    TodoReturn getCurrentIcon();

    /**
     * @note[short] Android
     */
    TodoReturn getDartMode();

    /**
     * @note[short] Android
     */
    TodoReturn getDidStick();

    /**
     * @note[short] Android
     */
    TodoReturn getDisableEffects();

    /**
     * @note[short] Android
     */
    TodoReturn getDualMode();

    /**
     * @note[short] Android
     */
    TodoReturn getFlyMode();

    /**
     * @note[short] Android
     */
    TodoReturn getGameLayer();

    /**
     * @note[short] Android
     */
    TodoReturn getGlowColor1();

    /**
     * @note[short] Android
     */
    TodoReturn getGlowColor2();

    /**
     * @note[short] Android
     */
    TodoReturn getGravityFlipped();

    /**
     * @note[short] Android
     */
    TodoReturn getGroundHeight();

    /**
     * @note[short] Android
     */
    TodoReturn getHasJumped();

    /**
     * @note[short] Android
     */
    TodoReturn getHasRingJumped();

    /**
     * @note[short] Android
     */
    TodoReturn getIsDead();

    /**
     * @note[short] Android
     */
    TodoReturn getIsJumping();

    /**
     * @note[short] Android
     */
    TodoReturn getIsLocked();

    /**
     * @note[short] Android
     */
    TodoReturn getIsSecondPlayer();

    /**
     * @note[short] Android
     */
    TodoReturn getLastGroundObject();

    /**
     * @note[short] Android
     */
    TodoReturn getLastGroundPos();

    /**
     * @note[short] Android
     */
    TodoReturn getLastP();

    /**
     * @note[short] Android
     */
    TodoReturn getLastYVel();

    /**
     * @note[short] Android
     */
    TodoReturn getModifiedSlopeYVel();

    /**
     * @note[short] Android
     */
    TodoReturn getOnGround();

    /**
     * @note[short] Android
     */
    TodoReturn getOnSlope();

    /**
     * @note[short] Android
     */
    TodoReturn getPlayerScale();

    /**
     * @note[short] Android
     */
    TodoReturn getPlayerXVelocity();

    /**
     * @note[short] Android
     */
    TodoReturn getPortalObject();

    /**
     * @note[short] Android
     */
    TodoReturn getPortalP();

    /**
     * @note[short] Android
     */
    TodoReturn getRealPlayerPos();

    /**
     * @note[short] Android
     */
    TodoReturn getRobotMode();

    /**
     * @note[short] Android
     */
    TodoReturn getRollMode();

    /**
     * @note[short] Android
     */
    TodoReturn getSecondColor();

    /**
     * @note[short] Android
     */
    TodoReturn getSlopeYVel();

    /**
     * @note[short] Android
     */
    TodoReturn getTimeMod();

    /**
     * @note[short] Android
     */
    TodoReturn getTookDamage();

    /**
     * @note[short] Android
     */
    TodoReturn getTouchedRing();

    /**
     * @note[short] Android
     */
    TodoReturn getUpKeyDown();

    /**
     * @note[short] Android
     */
    TodoReturn getUpKeyPressed();

    /**
     * @note[short] Android
     */
    TodoReturn getWasOnSlope();

    /**
     * @note[short] Android
     */
    TodoReturn getYVelocity();

    /**
     * @note[short] Android
     */
    TodoReturn gravityDown();

    /**
     * @note[short] Android
     */
    TodoReturn gravityUp();

    /**
     * @note[short] Android
     */
    TodoReturn hardFlipGravity();

    /**
     * @note[short] Android
     */
    TodoReturn hitGround(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn incrementJumps();

    /**
     * @note[short] Android
     */
    bool init(int p0, int p1, cocos2d::CCLayer* p2);

    /**
     * @note[short] Android
     */
    bool isBoostValid(float p0);

    /**
     * @note[short] Android
     */
    bool isFlying();

    /**
     * @note[short] Android
     */
    bool isSafeFlip(float p0);

    /**
     * @note[short] Android
     */
    bool isSafeMode(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn levelFlipFinished();

    /**
     * @note[short] Android
     */
    TodoReturn levelFlipping();

    /**
     * @note[short] Android
     */
    TodoReturn levelWillFlip();

    /**
     * @note[short] Android
     */
    TodoReturn loadFromCheckpoint(PlayerCheckpoint* p0);

    /**
     * @note[short] Android
     */
    TodoReturn lockPlayer();

    /**
     * @note[short] Android
     */
    TodoReturn logValues();

    /**
     * @note[short] Android
     */
    TodoReturn placeStreakPoint();

    /**
     * @note[short] Android
     */
    TodoReturn playBurstEffect();

    /**
     * @note[short] Android
     */
    TodoReturn playerDestroyed(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn playerIsFalling();

    /**
     * @note[short] Android
     */
    TodoReturn playerTeleported();

    /**
     * @note[short] Android
     */
    TodoReturn postCollision(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn preCollision();

    /**
     * @note[short] Android
     */
    TodoReturn preSlopeCollision(float p0, GameObject* p1);

    /**
     * @note[short] Android
     */
    TodoReturn propellPlayer(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn pushButton(PlayerButton p0);

    /**
     * @note[short] Android
     */
    TodoReturn pushDown();

    /**
     * @note[short] Android
     */
    TodoReturn pushPlayer(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn releaseButton(PlayerButton p0);

    /**
     * @note[short] Android
     */
    TodoReturn removeAllParticles();

    /**
     * @note[short] Android
     */
    TodoReturn removePendingCheckpoint();

    /**
     * @note[short] Android
     */
    TodoReturn resetAllParticles();

    /**
     * @note[short] Android
     */
    TodoReturn resetCollisionLog();

    /**
     * @note[short] Android
     */
    TodoReturn resetPlayerIcon();

    /**
     * @note[short] Android
     */
    TodoReturn resetStreak();

    /**
     * @note[short] Android
     */
    TodoReturn ringJump();

    /**
     * @note[short] Android
     */
    TodoReturn runBallRotation(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn runBallRotation2();

    /**
     * @note[short] Android
     */
    TodoReturn runNormalRotation();

    /**
     * @note[short] Android
     */
    TodoReturn runRotateAction(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn saveToCheckpoint(PlayerCheckpoint* p0);

    /**
     * @note[short] Android
     */
    void setAudioScale(float p0);

    /**
     * @note[short] Android
     */
    void setClkTimer(double p0);

    /**
     * @note[short] Android
     */
    void setDisableEffects(bool p0);

    /**
     * @note[short] Android
     */
    void setDualMode(bool p0);

    /**
     * @note[short] Android
     */
    void setGameLayer(cocos2d::CCLayer* p0);

    /**
     * @note[short] Android
     */
    void setGroundHeight(float p0);

    /**
     * @note[short] Android
     */
    void setIsSecondPlayer(bool p0);

    /**
     * @note[short] Android
     */
    void setLastGroundPos(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    void setLastP(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    void setOnGround(bool p0);

    /**
     * @note[short] Android
     */
    void setOnSlope(bool p0);

    /**
     * @note[short] Android
     */
    void setPortalObject(GameObject* p0);

    /**
     * @note[short] Android
     */
    void setPortalP(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    void setRealPlayerPos(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    void setSecondColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] Android
     */
    void setTookDamage(bool p0);

    /**
     * @note[short] Android
     */
    void setTouchedRing(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn setupStreak();

    /**
     * @note[short] Android
     */
    void setWasOnSlope(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn spawnCircle();

    /**
     * @note[short] Android
     */
    TodoReturn spawnDualCircle();

    /**
     * @note[short] Android
     */
    TodoReturn spawnFromPlayer(PlayerObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn spawnPortalCircle(cocos2d::ccColor3B p0, float p1);

    /**
     * @note[short] Android
     */
    TodoReturn spawnScaleCircle();

    /**
     * @note[short] Android
     */
    TodoReturn specialGroundHit();

    /**
     * @note[short] Android
     */
    TodoReturn speedDown();

    /**
     * @note[short] Android
     */
    TodoReturn speedUp();

    /**
     * @note[short] Android
     */
    TodoReturn stopBurstEffect();

    /**
     * @note[short] Android
     */
    TodoReturn stopRotation(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn storeCollision(bool p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn switchedToMode(GameObjectType p0);

    /**
     * @note[short] Android
     */
    TodoReturn testForMoving(float p0, GameObject* p1);

    /**
     * @note[short] Android
     */
    TodoReturn toggleBirdMode(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn toggleDartMode(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn toggleFlyMode(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn toggleGhostEffect(GhostType p0);

    /**
     * @note[short] Android
     */
    TodoReturn togglePlayerScale(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn toggleRobotMode(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn toggleRollMode(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn touchedObject(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn tryPlaceCheckpoint();

    /**
     * @note[short] Android
     */
    TodoReturn updateCheckpointTest();

    /**
     * @note[short] Android
     */
    TodoReturn updateCollide(bool p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn updateCollideBottom(float p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn updateCollideTop(float p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn updateGlowColor();

    /**
     * @note[short] Android
     */
    TodoReturn updateJump(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn updatePlayerBirdFrame(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn updatePlayerDartFrame(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn updatePlayerFrame(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn updatePlayerGlow();

    /**
     * @note[short] Android
     */
    TodoReturn updatePlayerRobotFrame(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn updatePlayerRollFrame(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn updatePlayerScale();

    /**
     * @note[short] Android
     */
    TodoReturn updatePlayerShipFrame(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateRobotAnimationSpeed();

    /**
     * @note[short] Android
     */
    TodoReturn updateRotation(float p0, float p1);

    /**
     * @note[short] Android
     */
    TodoReturn updateRotation(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateShipRotation(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateSlopeRotation(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateSlopeYVelocity(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateTimeMod(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn yStartDown();

    /**
     * @note[short] Android
     */
    TodoReturn yStartUp();

    /**
     * @note[short] Android
     */
    virtual void update(float p0);

    /**
     * @note[short] Android
     */
    virtual void setScaleX(float p0);

    /**
     * @note[short] Android
     */
    virtual void setScaleY(float p0);

    /**
     * @note[short] Android
     */
    virtual void setScale(float p0);

    /**
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& p0);

    /**
     * @note[short] Android
     */
    virtual void setVisible(bool p0);

    /**
     * @note[short] Android
     */
    virtual void setRotation(float p0);

    /**
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);

    /**
     * @note[short] Android
     */
    virtual void setColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] Android
     */
    virtual void setFlipX(bool p0);

    /**
     * @note[short] Android
     */
    virtual void setFlipY(bool p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn resetObject();

    /**
     * @note[short] Android
     */
    virtual TodoReturn getRealPosition();

    /**
     * @note[short] Android
     */
    virtual TodoReturn getOrientedBox();

    /**
     * @note[short] Android
     */
    virtual TodoReturn animationFinished(char const* p0);
    double _0x3a8;
    bool _0x3b0;
    cocos2d::CCNode* _0x3b4;
    cocos2d::CCDictionary* m_topBlockIDs;
    cocos2d::CCDictionary* m_bottomBlockIDs;
    GameObject* m_lastSlopeObject;
    GameObject* m_backupGroundObject;
    GameObject* m_lastGroundObject;
    int m_currentIcon;
    float _0x3d0;
    float _0x3d4;
    bool m_didStick;
    int m_bottomBlockID;
    int m_topBlockID;
    bool _0x3e4;
    bool m_shouldDisconnectSlope;
    GameObject* m_preSlopeObject;
    GameObject* m_slopeObject;
    float _0x3f0;
    int m_lastSlopeID;
    bool _0x3f8;
    cocos2d::CCArray* _0x3fc;
private:
    GhostType m_ghostType;
public:
private:
    GhostTrailEffect* m_ghostTrail;
public:
private:
    cocos2d::CCSprite* _0x410;
public:
private:
    cocos2d::CCSprite* _0x414;
public:
private:
    cocos2d::CCSprite* _0x418;
public:
private:
    cocos2d::CCSprite* _0x41c;
public:
private:
    cocos2d::CCSprite* _0x420;
public:
private:
    cocos2d::CCSprite* _0x424;
public:
private:
    cocos2d::CCSprite* _0x428;
public:
private:
    cocos2d::CCSprite* _0x42c;
public:
private:
    cocos2d::CCMotionStreak* _0x430;
public:
private:
    HardStreak* m_hardStreak;
public:
private:
    double m_playerXVelocity;
public:
private:
    double m_jumpHeight;
public:
private:
    double m_gravity;
public:
private:
    float _0x450;
public:
private:
    float _0x454;
public:
private:
    bool _0x458;
public:
private:
    bool _0x459;
public:
private:
    bool _0x45a;
public:
private:
    bool _0x45b;
public:
private:
    bool _0x45c;
public:
private:
    bool _0x45d;
public:
private:
    bool _0x45e;
public:
private:
    bool _0x45f;
public:
private:
    bool m_placedCheckpoint;
public:
private:
    double _0x468;
public:
private:
    double _0x470;
public:
private:
    double _0x478;
public:
private:
    float _0x484;
public:
private:
    double _0x490;
public:
private:
    GameObject* _0x498;
public:
private:
    CheckpointObject* _0x49c;
public:
private:
    int _0x4a0;
public:
private:
    GJRobotSprite* m_robotSprite;
public:
private:
    bool _0x4a8;
public:
private:
    cocos2d::CCParticleSystemQuad* _0x4ac;
public:
private:
    cocos2d::CCParticleSystemQuad* _0x4b0;
public:
private:
    cocos2d::CCParticleSystemQuad* _0x4b4;
public:
private:
    cocos2d::CCParticleSystemQuad* _0x4b8;
public:
private:
    cocos2d::CCParticleSystemQuad* _0x4bc;
public:
private:
    cocos2d::CCParticleSystemQuad* _0x4c0;
public:
private:
    bool _0x4c4;
public:
private:
    cocos2d::CCParticleSystemQuad* _0x4c8;
public:
private:
    cocos2d::CCParticleSystemQuad* _0x4cc;
public:
private:
    float m_targetSlopeAngle;
public:
private:
    float m_lastSlopeYVelocity;
public:
private:
    float _0x4e4;
public:
private:
    bool _0x4ea;
public:
private:
    bool m_lastSlopeFloorTop;
public:
private:
    float m_collideTop;
public:
private:
    float m_collideBottom;
public:
private:
    bool m_enableStreak;
public:
private:
    bool m_checkpointQueued;
public:
private:
    bool m_tookDamage;
public:
private:
    bool m_upKeyDown;
public:
private:
    bool m_upKeyPressed;
public:
private:
    bool _0x4f9;
public:
private:
    bool _0x4fa;
public:
private:
    double m_yVelocity;
public:
private:
    bool m_onSlope;
public:
private:
    bool m_wasOnSlope;
public:
private:
    float m_slopeYVel;
public:
private:
    bool m_flyMode;
public:
private:
    bool m_birdMode;
public:
private:
    bool m_rollMode;
public:
private:
    bool m_dartMode;
public:
private:
    bool m_robotMode;
public:
private:
    bool m_gravityFlipped;
public:
private:
    bool m_isDead;
public:
private:
    bool m_canJump;
public:
private:
    float m_playerScale;
public:
private:
    float m_timeMod;
public:
private:
    cocos2d::CCPoint m_lastP;
public:
private:
    cocos2d::CCPoint m_portalP;
public:
private:
    cocos2d::CCLayer* m_gameLayer;
public:
private:
    bool m_onGround;
public:
private:
    bool m_isJumping;
public:
private:
    bool m_isLocked;
public:
private:
    cocos2d::CCPoint m_lastGroundPos;
public:
private:
    RingObject* m_touchedRing;
public:
private:
    GameObject* m_portalObject;
public:
private:
    bool m_hasJumped;
public:
private:
    bool m_hasRingJumped;
public:
private:
    cocos2d::ccColor3B m_glowColor1;
public:
private:
    cocos2d::ccColor3B m_glowColor2;
public:
private:
    cocos2d::CCPoint m_realPlayerPos;
public:
private:
    bool m_isSecondPlayer;
public:
private:
    bool m_dualMode;
public:
private:
    double m_clkTimer;
public:
private:
    bool m_disableEffects;
public:
private:
    float m_audioScale;
public:
private:
    float m_groundHeight;
public:
private:
    float m_lastYVel;
public:
};
