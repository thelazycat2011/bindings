#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class EditorUI {
public:
    static constexpr auto CLASS_NAME = "EditorUI";

    /**
     * @note[short] Android
     */
    static EditorUI* create(LevelEditorLayer* p0);

    /**
     * @note[short] Android
     */
    TodoReturn activateRotationControl(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn activateScaleControl(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn addSnapPosition(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    TodoReturn applyOffset(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn applySpecialOffset(cocos2d::CCPoint p0, GameObject* p1, cocos2d::CCPoint p2);

    /**
     * @note[short] Android
     */
    TodoReturn changeSelectedObjects(cocos2d::CCArray* p0);

    /**
     * @note[short] Android
     */
    TodoReturn clickOnPosition(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    TodoReturn colorSelectClosed(cocos2d::ccColor3B p0);

    /**
     * @note[short] Android
     */
    TodoReturn constrainGameLayerPosition();

    /**
     * @note[short] Android
     */
    TodoReturn constrainGameLayerPosition(float p0, float p1);

    /**
     * @note[short] Android
     */
    TodoReturn copyObjects(cocos2d::CCArray* p0);

    /**
     * @note[short] Android
     */
    TodoReturn createCustomItems();

    /**
     * @note[short] Android
     */
    TodoReturn createMoveMenu();

    /**
     * @note[short] Android
     */
    TodoReturn createUndoSelectObject(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn deactivateRotationControl();

    /**
     * @note[short] Android
     */
    TodoReturn deactivateScaleControl();

    /**
     * @note[short] Android
     */
    TodoReturn deleteObject(GameObject* p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn deselectAll();

    /**
     * @note[short] Android
     */
    TodoReturn deselectObject();

    /**
     * @note[short] Android
     */
    TodoReturn deselectObject(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn deselectTargetPortals();

    /**
     * @note[short] Android
     */
    TodoReturn disableButton(CreateMenuItem* p0);

    /**
     * @note[short] Android
     */
    TodoReturn editButtonUsable();

    /**
     * @note[short] Android
     */
    TodoReturn editGroup(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn editObject(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn enableButton(CreateMenuItem* p0);

    /**
     * @note[short] Android
     */
    TodoReturn findSnapObject(cocos2d::CCArray* p0, float p1);

    /**
     * @note[short] Android
     */
    TodoReturn findSnapObject(cocos2d::CCPoint p0, float p1);

    /**
     * @note[short] Android
     */
    TodoReturn flipObjectsX(cocos2d::CCArray* p0);

    /**
     * @note[short] Android
     */
    TodoReturn flipObjectsY(cocos2d::CCArray* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getButton(char const* p0, int p1, cocos2d::SEL_MenuHandler p2, cocos2d::CCMenu* p3);

    /**
     * @note[short] Android
     */
    TodoReturn getCreateBtn(int p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn getCreateMenuItemButton(cocos2d::CCSprite* p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2, float p3, int p4, cocos2d::CCPoint p5);

    /**
     * @note[short] Android
     */
    TodoReturn getCycledObject(cocos2d::CCArray* p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn getEditMode();

    /**
     * @note[short] Android
     */
    TodoReturn getGridSnappedPos(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    TodoReturn getGroupCenter(cocos2d::CCArray* p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn getLimitedPosition(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    TodoReturn getLimitY();

    /**
     * @note[short] Android
     */
    TodoReturn getModeBtn(char const* p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn getMusicGuideActive();

    /**
     * @note[short] Android
     */
    TodoReturn getRelativeOffset(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getSelectedObjects();

    /**
     * @note[short] Android
     */
    TodoReturn getSpriteButton(char const* p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2, float p3, int p4, cocos2d::CCPoint p5);

    /**
     * @note[short] Android
     */
    TodoReturn getSpriteButton(char const* p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2, float p3);

    /**
     * @note[short] Android
     */
    TodoReturn getSpriteButton(cocos2d::CCSprite* p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2, float p3, int p4, cocos2d::CCPoint p5);

    /**
     * @note[short] Android
     */
    TodoReturn getStoredUndoObject();

    /**
     * @note[short] Android
     */
    TodoReturn getTouchPoint(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Android
     */
    TodoReturn getXMin(int p0);

    /**
     * @note[short] Android
     */
    bool init(LevelEditorLayer* p0);

    /**
     * @note[short] Android
     */
    bool isSpecialSnapObject(int p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn menuItemFromObjectString(gd::string p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn moveForCommand(EditCommand p0);

    /**
     * @note[short] Android
     */
    TodoReturn moveGamelayer(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    TodoReturn moveObject(GameObject* p0, cocos2d::CCPoint p1);

    /**
     * @note[short] Android
     */
    TodoReturn moveObjectCall(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn moveObjectCall(EditCommand p0);

    /**
     * @note[short] Android
     */
    TodoReturn offsetForKey(int p0);

    /**
     * @note[short] Android
     */
    void onCopy(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn onCreate();

    /**
     * @note[short] Android
     */
    void onCreateButton(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn onCreateObject(int p0);

    /**
     * @note[short] Android
     */
    void onDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDeleteAll(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDeleteCustomItem(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDeleteInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDeleteSelected(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDeleteSelectedType(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDeleteStartPos(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDeselectAll(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDuplicate(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onGroupDown(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onGroupUp(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onNewCustomItem(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPaste(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPause(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPlayback(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPlaytest(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSelectBuildTab(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onStopPlaytest(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleGuide(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onUpdateDeleteFilter(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn orderDownCustomItem(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn orderUpCustomItem(cocos2d::CCObject* p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn pasteObjects(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn playerTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Android
     */
    TodoReturn playerTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Android
     */
    TodoReturn playtestStopped();

    /**
     * @note[short] Android
     */
    TodoReturn positionIsInSnapped(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    TodoReturn positionWithoutOffset(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn recreateButtonTabs();

    /**
     * @note[short] Android
     */
    TodoReturn redoLastAction(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn reloadCustomItems();

    /**
     * @note[short] Android
     */
    TodoReturn removeOffset(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn repositionObjectsToCenter(cocos2d::CCArray* p0, cocos2d::CCPoint p1, bool p2);

    /**
     * @note[short] Android
     */
    TodoReturn resetUI();

    /**
     * @note[short] Android
     */
    TodoReturn rotateObjects(cocos2d::CCArray* p0, float p1, cocos2d::CCPoint p2);

    /**
     * @note[short] Android
     */
    TodoReturn rotationforCommand(EditCommand p0);

    /**
     * @note[short] Android
     */
    TodoReturn scaleChanged(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn scaleObjects(cocos2d::CCArray* p0, float p1, cocos2d::CCPoint p2);

    /**
     * @note[short] Android
     */
    TodoReturn selectBuildTab(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn selectObject(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn selectObjects(cocos2d::CCArray* p0);

    /**
     * @note[short] Android
     */
    TodoReturn selectObjectsInRect(cocos2d::CCRect p0);

    /**
     * @note[short] Android
     */
    void setEditMode(EditMode p0);

    /**
     * @note[short] Android
     */
    void setStoredUndoObject(UndoObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn setupCreateMenu();

    /**
     * @note[short] Android
     */
    TodoReturn setupDeleteMenu();

    /**
     * @note[short] Android
     */
    TodoReturn setupEditMenu();

    /**
     * @note[short] Android
     */
    TodoReturn shouldDeleteObject(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn shouldSnap(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn showDeleteConfirmation();

    /**
     * @note[short] Android
     */
    TodoReturn showMaxCoinError();

    /**
     * @note[short] Android
     */
    TodoReturn showMaxError();

    /**
     * @note[short] Android
     */
    TodoReturn showUI(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn sliderChanged(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn toggleDuplicateButton();

    /**
     * @note[short] Android
     */
    TodoReturn toggleEditObjectButton();

    /**
     * @note[short] Android
     */
    TodoReturn toggleEnableRotate(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn toggleFreeMove(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn toggleGuideButton();

    /**
     * @note[short] Android
     */
    TodoReturn toggleMode(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn toggleObjectInfoLabel();

    /**
     * @note[short] Android
     */
    TodoReturn toggleSnap(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn toggleSpecialEditButtons();

    /**
     * @note[short] Android
     */
    TodoReturn toggleSwipe(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn transformObject(GameObject* p0, EditCommand p1, bool p2);

    /**
     * @note[short] Android
     */
    TodoReturn transformObjectCall(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn transformObjectCall(EditCommand p0);

    /**
     * @note[short] Android
     */
    TodoReturn tryDeleteObject(GameObject* p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn tryUpdateTimeMarkers();

    /**
     * @note[short] Android
     */
    TodoReturn undoLastAction(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateButtons();

    /**
     * @note[short] Android
     */
    TodoReturn updateCreateMenu(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateDeleteButtons();

    /**
     * @note[short] Android
     */
    TodoReturn updateDeleteMenu();

    /**
     * @note[short] Android
     */
    TodoReturn updateEditMenu();

    /**
     * @note[short] Android
     */
    TodoReturn updateGridNodeSize();

    /**
     * @note[short] Android
     */
    TodoReturn updateGridNodeSize(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateGroupIDLabel();

    /**
     * @note[short] Android
     */
    TodoReturn updateObjectInfoLabel();

    /**
     * @note[short] Android
     */
    TodoReturn updatePercentLabel();

    /**
     * @note[short] Android
     */
    TodoReturn updatePlaybackBtn();

    /**
     * @note[short] Android
     */
    TodoReturn updateSlider();

    /**
     * @note[short] Android
     */
    TodoReturn updateZoom(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn valueFromXPos(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn xPosFromValue(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn zoomGameLayer(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn zoomIn(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn zoomOut(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Android
     */
    virtual TodoReturn songStateChanged();

    /**
     * @note[short] Android
     */
    virtual void keyUp(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] Android
     */
    virtual void scrollWheel(float p0, float p1);

    /**
     * @note[short] Android
     */
    virtual TodoReturn angleChangeBegin();

    /**
     * @note[short] Android
     */
    virtual TodoReturn angleChangeEnded();

    /**
     * @note[short] Android
     */
    virtual TodoReturn angleChanged(float p0);

    /**
     * @note[short] Android
     */
    virtual TodoReturn updateScaleControl();

    /**
     * @note[short] Android
     */
    virtual TodoReturn scaleChangeBegin();

    /**
     * @note[short] Android
     */
    virtual TodoReturn scaleChangeEnded();
};
