#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCSpritePlus.hpp"

class GameObject : public CCSpritePlus {
public:
    static constexpr auto CLASS_NAME = "GameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GameObject, CCSpritePlus)

    /**
     * @note[short] Android
     */
    TodoReturn activatedByPlayer(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn addColorSprite();

    /**
     * @note[short] Android
     */
    TodoReturn addColorSpriteToParent(bool p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn addCustomBlackChild(gd::string p0, float p1, bool p2);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn addCustomChild(gd::string p0, cocos2d::CCPoint p1, int p2);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn addCustomColorChild(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn addGlow();

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn addInternalChild(cocos2d::CCSprite* p0, gd::string p1, cocos2d::CCPoint p2);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn addInternalCustomColorChild(gd::string p0, cocos2d::CCPoint p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn addInternalGlowChild(gd::string p0, cocos2d::CCPoint p1);

    /**
     * @note[short] Android
     */
    TodoReturn addToTempOffset(float p0, float p1);

    /**
     * @note[short] Android
     */
    TodoReturn calculateOrientedBox();

    /**
     * @note[short] Android
     */
    TodoReturn calculateSpawnXPos();

    /**
     * @note[short] Android
     */
    TodoReturn canChangeCustomColor();

    /**
     * @note[short] Android
     */
    TodoReturn canChangeMainColor();

    /**
     * @note[short] Android
     */
    TodoReturn canChangeSecondaryColor();

    /**
     * @note[short] Android
     */
    TodoReturn canRotateFree();

    /**
     * @note[short] Android
     */
    TodoReturn colorForMode(int p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn commonSetup();

    /**
     * @note[short] Android
     */
    TodoReturn copyGroups(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn createAndAddParticle(int p0, char const* p1, int p2, cocos2d::tCCPositionType p3);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn createGlow(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn createGroupContainer(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn createRotateAction(float p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn createSpriteColor(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn createWithFrame(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn createWithKey(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn createWithTexture(cocos2d::CCTexture2D* p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn customObjectSetup(gd::map<gd::string, gd::string>* p0);

    /**
     * @note[short] Android
     */
    TodoReturn customScaleMod(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn deselectObject();

    /**
     * @note[short] Android
     */
    TodoReturn destroyObject();

    /**
     * @note[short] Android
     */
    TodoReturn determineSlopeDirection();

    /**
     * @note[short] Android
     */
    TodoReturn dontCountTowardsLimit();

    /**
     * @note[short] Android
     */
    TodoReturn duplicateAttributes(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn duplicateColorMode(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn duplicateValues(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn editorColorForCustomMode(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn editorColorForMode(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getActiveColorForMode(int p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn getAddedToBlend();

    /**
     * @note[short] Android
     */
    TodoReturn getAddToBatch2();

    /**
     * @note[short] Android
     */
    TodoReturn getBallFrame(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getBoxOffset();

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn getColorFrame(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn getColorIndex();

    /**
     * @note[short] Android
     */
    TodoReturn getColorManager();

    /**
     * @note[short] Android
     */
    TodoReturn getColorOnTop();

    /**
     * @note[short] Android
     */
    TodoReturn getColorSprite();

    /**
     * @note[short] Android
     */
    TodoReturn getCustomAudioScale();

    /**
     * @note[short] Android
     */
    TodoReturn getCustomColorIdx();

    /**
     * @note[short] Android
     */
    TodoReturn getCustomDontFade();

    /**
     * @note[short] Android
     */
    TodoReturn getCustomHitBox();

    /**
     * @note[short] Android
     */
    TodoReturn getCustomObjectZ();

    /**
     * @note[short] Android
     */
    TodoReturn getCustomScale();

    /**
     * @note[short] Android
     */
    TodoReturn getCustomZLayer();

    /**
     * @note[short] Android
     */
    TodoReturn getDamaging();

    /**
     * @note[short] Android
     */
    TodoReturn getDidUpdateLastPosition();

    /**
     * @note[short] Android
     */
    TodoReturn getDontApplyEffect();

    /**
     * @note[short] Android
     */
    TodoReturn getDontApplyFade();

    /**
     * @note[short] Android
     */
    TodoReturn getDontFade();

    /**
     * @note[short] Android
     */
    TodoReturn getDontFadeTinted();

    /**
     * @note[short] Android
     */
    TodoReturn getDontTransform();

    /**
     * @note[short] Android
     */
    TodoReturn getEditorCustomScale();

    /**
     * @note[short] Android
     */
    TodoReturn getEditorLayerID();

    /**
     * @note[short] Android
     */
    TodoReturn getEditorLayerID2();

    /**
     * @note[short] Android
     */
    TodoReturn getEditorSelected();

    /**
     * @note[short] Android
     */
    TodoReturn getEditorSelectIdx();

    /**
     * @note[short] Android
     */
    TodoReturn getEnterAngle();

    /**
     * @note[short] Android
     */
    TodoReturn getEnterEffect();

    /**
     * @note[short] Android
     */
    TodoReturn getFadeInPosOffset();

    /**
     * @note[short] Android
     */
    TodoReturn getFrame();

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn getGlowFrame(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn getGlowOpacityMod();

    /**
     * @note[short] Android
     */
    TodoReturn getGlowUseBGColor();

    /**
     * @note[short] Android
     */
    TodoReturn getGroupCount();

    /**
     * @note[short] Android
     */
    TodoReturn getGroupDisabled();

    /**
     * @note[short] Android
     */
    TodoReturn getGroupDisabledCount();

    /**
     * @note[short] Android
     */
    TodoReturn getGroupID(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getGroupString();

    /**
     * @note[short] Android
     */
    TodoReturn getGroupUpdated();

    /**
     * @note[short] Android
     */
    TodoReturn getHasCustomChildren();

    /**
     * @note[short] Android
     */
    TodoReturn getIgnoreScreenCheck();

    /**
     * @note[short] Android
     */
    TodoReturn getInvisibleMode();

    /**
     * @note[short] Android
     */
    TodoReturn getIsAnimated();

    /**
     * @note[short] Android
     */
    TodoReturn getIsDetailColorObject();

    /**
     * @note[short] Android
     */
    TodoReturn getIsGroupParent();

    /**
     * @note[short] Android
     */
    TodoReturn getIsInvisible();

    /**
     * @note[short] Android
     */
    TodoReturn getIsOriented();

    /**
     * @note[short] Android
     */
    TodoReturn getIsRotated();

    /**
     * @note[short] Android
     */
    TodoReturn getIsSelected();

    /**
     * @note[short] Android
     */
    TodoReturn getIsTintObject();

    /**
     * @note[short] Android
     */
    TodoReturn getIsTriggerSaved();

    /**
     * @note[short] Android
     */
    TodoReturn getLastPosition();

    /**
     * @note[short] Android
     */
    TodoReturn getLockColorAsChild();

    /**
     * @note[short] Android
     */
    TodoReturn getM_ID();

    /**
     * @note[short] Android
     */
    TodoReturn getMainBlend();

    /**
     * @note[short] Android
     */
    TodoReturn getMainColor();

    /**
     * @note[short] Android
     */
    TodoReturn getMainColorBlack();

    /**
     * @note[short] Android
     */
    TodoReturn getMainColorMode();

    /**
     * @note[short] Android
     */
    TodoReturn getMaxAudioScale();

    /**
     * @note[short] Android
     */
    TodoReturn getMinAudioScale();

    /**
     * @note[short] Android
     */
    TodoReturn getNeedsReorder();

    /**
     * @note[short] Android
     */
    TodoReturn getNeedsUpdateColor();

    /**
     * @note[short] Android
     */
    TodoReturn getObjectClass();

    /**
     * @note[short] Android
     */
    TodoReturn getObjectID();

    /**
     * @note[short] Android
     */
    TodoReturn getObjectKey();

    /**
     * @note[short] Android
     */
    TodoReturn getObjectRadius();

    /**
     * @note[short] Android
     */
    TodoReturn getObjectRectDirty();

    /**
     * @note[short] Android
     */
    TodoReturn getObjectZ();

    /**
     * @note[short] Android
     */
    TodoReturn getObjectZLayer();

    /**
     * @note[short] Android
     */
    TodoReturn getObjectZOrder();

    /**
     * @note[short] Android
     */
    TodoReturn getOrientedRectDirty();

    /**
     * @note[short] Android
     */
    TodoReturn getOuterObjectRect();

    /**
     * @note[short] Android
     */
    TodoReturn getParentMode();

    /**
     * @note[short] Android
     */
    TodoReturn getRadius();

    /**
     * @note[short] Android
     */
    TodoReturn getRectOffset();

    /**
     * @note[short] Android
     */
    TodoReturn getRelativeSpriteColor(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getSavedMainColorMode();

    /**
     * @note[short] Android
     */
    TodoReturn getSavedSecondaryColorMode();

    /**
     * @note[short] Android
     */
    TodoReturn getSaveString();

    /**
     * @note[short] Android
     */
    TodoReturn getScaleModX();

    /**
     * @note[short] Android
     */
    TodoReturn getScaleModY();

    /**
     * @note[short] Android
     */
    TodoReturn getSecondaryBlend();

    /**
     * @note[short] Android
     */
    TodoReturn getSecondaryColor();

    /**
     * @note[short] Android
     */
    TodoReturn getSecondaryColorBlack();

    /**
     * @note[short] Android
     */
    TodoReturn getSecondaryColorMode();

    /**
     * @note[short] Android
     */
    TodoReturn getSectionIdx();

    /**
     * @note[short] Android
     */
    TodoReturn getShouldHide();

    /**
     * @note[short] Android
     */
    TodoReturn getSlopeAngle();

    /**
     * @note[short] Android
     */
    TodoReturn getSlopeType();

    /**
     * @note[short] Android
     */
    TodoReturn getSpawnedByTrigger();

    /**
     * @note[short] Android
     */
    TodoReturn getSpawnXPos();

    /**
     * @note[short] Android
     */
    TodoReturn getSpriteColor01();

    /**
     * @note[short] Android
     */
    TodoReturn getSpriteColor02();

    /**
     * @note[short] Android
     */
    TodoReturn getStartFlipX();

    /**
     * @note[short] Android
     */
    TodoReturn getStartFlipY();

    /**
     * @note[short] Android
     */
    TodoReturn getStartPos();

    /**
     * @note[short] Android
     */
    TodoReturn getStartRotation();

    /**
     * @note[short] Android
     */
    TodoReturn getStartScaleX();

    /**
     * @note[short] Android
     */
    TodoReturn getStartScaleY();

    /**
     * @note[short] Android
     */
    TodoReturn getStateVar();

    /**
     * @note[short] Android
     */
    TodoReturn getStoredPosition();

    /**
     * @note[short] Android
     */
    TodoReturn getTextBlockString();

    /**
     * @note[short] Android
     */
    TodoReturn getTouchTriggered();

    /**
     * @note[short] Android
     */
    TodoReturn getType();

    /**
     * @note[short] Android
     */
    TodoReturn getUniqueID();

    /**
     * @note[short] Android
     */
    TodoReturn getUpdateLastPos();

    /**
     * @note[short] Android
     */
    TodoReturn getUpSlope();

    /**
     * @note[short] Android
     */
    TodoReturn getUseAudioScale();

    /**
     * @note[short] Android
     */
    TodoReturn getUseCustomContentSize();

    /**
     * @note[short] Android
     */
    TodoReturn getUseCustomEditorHitbox();

    /**
     * @note[short] Android
     */
    TodoReturn getUseSpecialLight();

    /**
     * @note[short] Android
     */
    TodoReturn getWasSelected();

    /**
     * @note[short] Android
     */
    TodoReturn getZLayer();

    /**
     * @note[short] Android
     */
    TodoReturn groupColor(cocos2d::ccColor3B const& p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn groupOpacityMod();

    /**
     * @note[short] Android
     */
    TodoReturn groupWasDisabled();

    /**
     * @note[short] Android
     */
    TodoReturn groupWasEnabled();

    /**
     * @note[short] Android
     */
    TodoReturn hasBeenActivatedByPlayer(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn hasSecondaryColor();

    /**
     * @note[short] Android
     */
    TodoReturn ignoreFade();

    /**
     * @note[short] Android
     */
    bool init(char const* p0);

    /**
     * @note[short] Android
     */
    bool isColorObject();

    /**
     * @note[short] Android
     */
    bool isColorTrigger();

    /**
     * @note[short] Android
     */
    bool isFacingDown();

    /**
     * @note[short] Android
     */
    bool isSpawnableTrigger();

    /**
     * @note[short] Android
     */
    bool isSpecialObject();

    /**
     * @note[short] Android
     */
    bool isTrigger();

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn loadGroupsFromString(gd::string p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn objectFromString(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn opacityModForMode(int p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn parentForZLayer(int p0, bool p1, int p2);

    /**
     * @note[short] Android
     */
    TodoReturn perspectiveColorFrame(char const* p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn perspectiveFrame(char const* p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn playShineEffect();

    /**
     * @note[short] Android
     */
    TodoReturn powerOffObject();

    /**
     * @note[short] Android
     */
    TodoReturn powerOnObject();

    /**
     * @note[short] Android
     */
    TodoReturn quickUpdatePosition();

    /**
     * @note[short] Android
     */
    TodoReturn removeColorSprite();

    /**
     * @note[short] Android
     */
    TodoReturn removeGlow();

    /**
     * @note[short] Android
     */
    TodoReturn reorderColorSprite();

    /**
     * @note[short] Android
     */
    TodoReturn resetGroupDisabled();

    /**
     * @note[short] Android
     */
    TodoReturn resetMainColorMode();

    /**
     * @note[short] Android
     */
    TodoReturn resetSecondaryColorMode();

    /**
     * @note[short] Android
     */
    void setAddToBatch2(bool p0);

    /**
     * @note[short] Android
     */
    void setColorManager(GJEffectManager* p0);

    /**
     * @note[short] Android
     */
    void setColorOnTop(bool p0);

    /**
     * @note[short] Android
     */
    void setCustomColorIdx(int p0);

    /**
     * @note[short] Android
     */
    void setCustomDontFade(bool p0);

    /**
     * @note[short] Android
     */
    void setCustomHitBox(cocos2d::CCSize p0);

    /**
     * @note[short] Android
     */
    void setCustomObjectZ(int p0);

    /**
     * @note[short] Android
     */
    void setCustomScale(float p0);

    /**
     * @note[short] Android
     */
    void setCustomZLayer(int p0);

    /**
     * @note[short] Android
     */
    void setDefaultMainColorMode(int p0);

    /**
     * @note[short] Android
     */
    void setDefaultSecondaryColorMode(int p0);

    /**
     * @note[short] Android
     */
    void setDidUpdateLastPosition(bool const& p0);

    /**
     * @note[short] Android
     */
    void setDontApplyEffect(bool p0);

    /**
     * @note[short] Android
     */
    void setDontApplyFade(bool p0);

    /**
     * @note[short] Android
     */
    void setDontFade(bool p0);

    /**
     * @note[short] Android
     */
    void setDontFadeTinted(bool p0);

    /**
     * @note[short] Android
     */
    void setDontTransform(bool p0);

    /**
     * @note[short] Android
     */
    void setEditorCustomScale(float p0);

    /**
     * @note[short] Android
     */
    void setEditorLayerID(int p0);

    /**
     * @note[short] Android
     */
    void setEditorLayerID2(int p0);

    /**
     * @note[short] Android
     */
    void setEditorSelected(bool p0);

    /**
     * @note[short] Android
     */
    void setEditorSelectIdx(int p0);

    /**
     * @note[short] Android
     */
    void setEnterAngle(float p0);

    /**
     * @note[short] Android
     */
    void setEnterEffect(int p0);

    /**
     * @note[short] Android
     */
    void setFadeInPosOffset(float p0);

    /**
     * @note[short] Android
     */
    void setGlowOpacity(unsigned char p0);

    /**
     * @note[short] Android
     */
    void setGlowOpacityMod(float p0);

    /**
     * @note[short] Android
     */
    void setGroupUpdated(bool p0);

    /**
     * @note[short] Android
     */
    void setHasCustomChildren(bool p0);

    /**
     * @note[short] Android
     */
    void setHasSyncedAnimation(bool p0);

    /**
     * @note[short] Android
     */
    void setIgnoreScreenCheck(bool p0);

    /**
     * @note[short] Android
     */
    void setIsGroupParent(bool p0);

    /**
     * @note[short] Android
     */
    void setIsSelected(bool p0);

    /**
     * @note[short] Android
     */
    void setIsTintObject(bool p0);

    /**
     * @note[short] Android
     */
    void setLastPosition(cocos2d::CCPoint const& p0);

    /**
     * @note[short] Android
     */
    void setLockColorAsChild(bool p0);

    /**
     * @note[short] Android
     */
    void setM_ID(int p0);

    /**
     * @note[short] Android
     */
    void setMainColorMode(int p0);

    /**
     * @note[short] Android
     */
    void setMyAction(cocos2d::CCAction* p0);

    /**
     * @note[short] Android
     */
    void setNeedsReorder(bool p0);

    /**
     * @note[short] Android
     */
    void setNeedsUpdateColor(bool p0);

    /**
     * @note[short] Android
     */
    void setObjectClass(GameObjectClass p0);

    /**
     * @note[short] Android
     */
    void setObjectID(int p0);

    /**
     * @note[short] Android
     */
    void setObjectKey(int p0);

    /**
     * @note[short] Android
     */
    void setObjectZ(int p0);

    /**
     * @note[short] Android
     */
    void setScaleModX(float p0);

    /**
     * @note[short] Android
     */
    void setScaleModY(float p0);

    /**
     * @note[short] Android
     */
    void setSecondaryColorMode(int p0);

    /**
     * @note[short] Android
     */
    void setSectionIdx(int const& p0);

    /**
     * @note[short] Android
     */
    void setShouldHide(bool p0);

    /**
     * @note[short] Android
     */
    void setSpawnedByTrigger(bool p0);

    /**
     * @note[short] Android
     */
    void setStartFlipX(bool p0);

    /**
     * @note[short] Android
     */
    void setStartFlipY(bool p0);

    /**
     * @note[short] Android
     */
    void setStartRotation(float p0);

    /**
     * @note[short] Android
     */
    void setStartScaleX(float p0);

    /**
     * @note[short] Android
     */
    void setStartScaleY(float p0);

    /**
     * @note[short] Android
     */
    void setStateVar(bool p0);

    /**
     * @note[short] Android
     */
    void setStoredPosition(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    void setTempOffset(float p0, float p1);

    /**
     * @note[short] Android: Rebinded
     */
    void setTextBlockString(gd::string p0);

    /**
     * @note[short] Android
     */
    void setTouchTriggered(bool p0);

    /**
     * @note[short] Android
     */
    void setUniqueID(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn setupCoinAnimation();

    /**
     * @note[short] Android
     */
    TodoReturn setupCoinArt();

    /**
     * @note[short] Android
     */
    TodoReturn setupColorSprite(int p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn setupCustomSprites();

    /**
     * @note[short] Android
     */
    void setUpdateLastPos(bool const& p0);

    /**
     * @note[short] Android
     */
    void setUseAudioScale(bool p0);

    /**
     * @note[short] Android
     */
    void setUseCustomContentSize(bool p0);

    /**
     * @note[short] Android
     */
    void setUseCustomEditorHitbox(bool p0);

    /**
     * @note[short] Android
     */
    void setWasSelected(bool p0);

    /**
     * @note[short] Android
     */
    void setZLayer(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn shouldBlendColor(GJSpriteColor* p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn shouldNotSave();

    /**
     * @note[short] Android
     */
    TodoReturn slopeFloorTop();

    /**
     * @note[short] Android
     */
    TodoReturn slopeWallLeft();

    /**
     * @note[short] Android
     */
    TodoReturn slopeYPos(cocos2d::CCRect p0);

    /**
     * @note[short] Android
     */
    TodoReturn slopeYPos(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn slopeYPos(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn triggerActivated();

    /**
     * @note[short] Android
     */
    TodoReturn triggerObject();

    /**
     * @note[short] Android
     */
    TodoReturn updateCustomScale(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateMainColor();

    /**
     * @note[short] Android
     */
    TodoReturn updateObjectEditorColor();

    /**
     * @note[short] Android
     */
    TodoReturn updateSecondaryColor();

    /**
     * @note[short] Android
     */
    TodoReturn updateStartPos();

    /**
     * @note[short] Android
     */
    TodoReturn updateState();

    /**
     * @note[short] Android
     */
    TodoReturn updateSyncedAnimation(float p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn updateTextObject(gd::string p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn waitingForActivation();

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
    virtual bool initWithTexture(cocos2d::CCTexture2D* p0);

    /**
     * @note[short] Android
     */
    virtual void setChildColor(cocos2d::ccColor3B const& p0);

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
    virtual TodoReturn customSetup();

    /**
     * @note[short] Android
     */
    virtual TodoReturn addMainSpriteToParent(bool p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn resetObject();

    /**
     * @note[short] Android
     */
    virtual TodoReturn activateObject();

    /**
     * @note[short] Android
     */
    virtual TodoReturn deactivateObject(bool p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn getObjectRect();

    /**
     * @note[short] Android
     */
    virtual TodoReturn getObjectRect(float p0, float p1);

    /**
     * @note[short] Android
     */
    virtual TodoReturn getObjectRect2(float p0, float p1);

    /**
     * @note[short] Android
     */
    virtual TodoReturn getObjectTextureRect();

    /**
     * @note[short] Android
     */
    virtual TodoReturn getRealPosition();

    /**
     * @note[short] Android
     */
    virtual void setStartPos(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn updateStartValues();

    /**
     * @note[short] Android
     */
    virtual bool isFlipX();

    /**
     * @note[short] Android
     */
    virtual bool isFlipY();

    /**
     * @note[short] Android
     */
    virtual void setRScaleX(float p0);

    /**
     * @note[short] Android
     */
    virtual void setRScaleY(float p0);

    /**
     * @note[short] Android
     */
    virtual void setRScale(float p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn getRScaleX();

    /**
     * @note[short] Android
     */
    virtual TodoReturn getRScaleY();

    /**
     * @note[short] Android
     */
    virtual void setObjectColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] Android
     */
    virtual void setGlowColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn selectObject(cocos2d::ccColor3B p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn hasBeenActivated();

    /**
     * @note[short] Android
     */
    virtual TodoReturn getOrientedBox();

    /**
     * @note[short] Android
     */
    virtual TodoReturn updateOrientedBox();

    /**
     * @note[short] Android
     */
    virtual TodoReturn updateMainColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn updateSecondaryColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn addToGroup(int p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn removeFromGroup(int p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn saveActiveColors();

    /**
     * @note[short] Android
     */
    virtual TodoReturn spawnXPosition();

    /**
     * @note[short] Android
     */
    virtual TodoReturn updateParticleColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn getHasSyncedAnimation();

    /**
     * @note[short] Android
     */
    virtual void setObjectRectDirty(bool p0);

    /**
     * @note[short] Android
     */
    virtual void setOrientedRectDirty(bool p0);

    /**
     * @note[short] Android
     */
    virtual void setType(GameObjectType p0);
    cocos2d::ccColor3B _0x1c2;
    float _0x1c8;
    float _0x1cc;
    float _0x1d0;
    float _0x1d4;
    bool _0x1d8;
    float _0x1dc;
    bool _0x1e0;
    bool _0x1e1;
    float _0x1e4;
    bool m_editMode;
    bool m_groupDisabled;
    bool m_lockColorAsChild;
    int m_savedMainColorMode;
    int m_savedSecondaryColorMode;
    bool _0x1f4;
    bool _0x1f5;
    float m_tempOffsetX;
    float m_tempOffsetY;
    bool _0x200;
    bool m_flipX;
    bool m_flipY;
    cocos2d::CCPoint m_rectOffset;
    bool _0x20c;
    cocos2d::CCPoint _0x210;
    OBB2D* m_orientedBox;
    bool m_isOriented;
    cocos2d::CCSprite* m_glowSprite;
    bool _0x224;
    cocos2d::CCAction* m_myAction;
    bool _0x22c;
    bool _0x22d;
    bool _0x22e;
    float _0x230;
    float _0x234;
    bool _0x238;
    bool _0x239;
    bool _0x23a;
    cocos2d::CCParticleSystemQuad* m_particle;
    gd::string m_particleKey;
    bool m_hasParticle;
    cocos2d::CCPoint _0x248;
    cocos2d::CCRect _0x250;
    bool _0x260;
    float m_fadeInPosOffset;
    cocos2d::CCRect _0x268;
    bool m_objectRectDirty;
    bool m_orientedRectDirty;
    bool _0x27a;
    bool _0x27b;
    bool _0x27c;
    bool _0x27d;
    bool _0x27e;
    bool m_mainColorBlack;
    bool m_secondaryColorBlack;
    bool m_mainBlend;
    bool m_secondaryBlend;
    bool m_hasCustomChildren;
    bool m_isAnimated;
    cocos2d::CCSprite* m_colorSprite;
    bool m_ignoreScreenCheck;
    float m_radius;
    bool m_isRotated;
    float m_scaleModX;
    float m_scaleModY;
    int m_M_ID;
    GameObjectType m_type;
    int m_sectionIdx;
    bool m_touchTriggered;
    bool m_spawnedByTrigger;
    cocos2d::CCPoint m_startPos;
    gd::string m_frame;
    bool m_useAudioScale;
    bool _0x2bd;
    float m_startRotation;
    float m_startScaleX;
    float m_startScaleY;
    bool m_startFlipX;
    bool m_startFilpY;
    bool m_shouldHide;
    float m_spawnXPos;
    bool m_isInvisible;
    float m_enterAngle;
    int m_enterEffect;
    int m_customColorIdx;
    float m_customScale;
    int m_objectKey;
    bool m_dontTransform;
    bool m_dontFade;
    bool m_dontApplyEnter;
    bool m_dontApplyFade;
    bool m_dontFadeTinted;
    bool m_isTintObject;
    bool m_isDetailColorObject;
    bool m_customDontEnter;
    bool m_customDontFade;
    bool m_stateVar;
    int m_objectZ;
    bool m_addToBatch2;
    bool m_colorOnTop;
    bool m_customAudioScale;
    float m_minAudioScale;
    float m_maxAudioScale;
    int m_uniqueID;
    int m_objectID;
    bool m_invisibleMode;
    bool m_glowUseBGColor;
    bool m_useSpecialLight;
    float m_glowOpacityMod;
    bool m_upSlope;
    int m_slopeType;
    float m_slopeAngle;
    bool m_damaging;
    GJSpriteColor* m_mainColor;
    GJSpriteColor* m_secondaryColor;
    bool m_addedToBlend;
    int m_zLayer;
    int m_customZLayer;
    int m_customObjectZ;
    gd::string m_textBlockString;
    bool m_editorSelected;
    bool m_wasSelected;
    bool m_isSelected;
    int m_editorSelectIdx;
    cocos2d::CCPoint m_storedPosition;
    bool m_needsReorder;
    bool m_needsUpdateColor;
    float m_editorCustomScale;
    int* m_groups;
    int m_groupCount;
    int m_editorLayerID;
    int m_editorLayerID2;
    int m_groupDisabledCount;
    bool m_groupUpdated;
    bool m_useCustomContentSize;
    bool m_useCustomEditorHitbox;
    cocos2d::CCSize m_customHitBox;
    cocos2d::CCPoint m_lastPosition;
    bool m_didUpdateLastPosition;
    bool m_updateLastPos;
    int idk;
    bool m_hasSyncedAnimation;
    bool m_isTriggerSaved;
    int _0x394;
    ColorActionSprite* _0x398;
    ColorActionSprite* _0x39c;
    GJEffectManager* m_effectManager;
};
