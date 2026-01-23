#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EditorUI.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_activateRotationControl
		#define GEODE_STATICS_activateRotationControl
		GEODE_AS_STATIC_FUNCTION(activateRotationControl) 
	#endif

	#ifndef GEODE_STATICS_activateScaleControl
		#define GEODE_STATICS_activateScaleControl
		GEODE_AS_STATIC_FUNCTION(activateScaleControl) 
	#endif

	#ifndef GEODE_STATICS_addSnapPosition
		#define GEODE_STATICS_addSnapPosition
		GEODE_AS_STATIC_FUNCTION(addSnapPosition) 
	#endif

	#ifndef GEODE_STATICS_applyOffset
		#define GEODE_STATICS_applyOffset
		GEODE_AS_STATIC_FUNCTION(applyOffset) 
	#endif

	#ifndef GEODE_STATICS_applySpecialOffset
		#define GEODE_STATICS_applySpecialOffset
		GEODE_AS_STATIC_FUNCTION(applySpecialOffset) 
	#endif

	#ifndef GEODE_STATICS_changeSelectedObjects
		#define GEODE_STATICS_changeSelectedObjects
		GEODE_AS_STATIC_FUNCTION(changeSelectedObjects) 
	#endif

	#ifndef GEODE_STATICS_clickOnPosition
		#define GEODE_STATICS_clickOnPosition
		GEODE_AS_STATIC_FUNCTION(clickOnPosition) 
	#endif

	#ifndef GEODE_STATICS_colorSelectClosed
		#define GEODE_STATICS_colorSelectClosed
		GEODE_AS_STATIC_FUNCTION(colorSelectClosed) 
	#endif

	#ifndef GEODE_STATICS_constrainGameLayerPosition
		#define GEODE_STATICS_constrainGameLayerPosition
		GEODE_AS_STATIC_FUNCTION(constrainGameLayerPosition) 
	#endif

	#ifndef GEODE_STATICS_copyObjects
		#define GEODE_STATICS_copyObjects
		GEODE_AS_STATIC_FUNCTION(copyObjects) 
	#endif

	#ifndef GEODE_STATICS_createCustomItems
		#define GEODE_STATICS_createCustomItems
		GEODE_AS_STATIC_FUNCTION(createCustomItems) 
	#endif

	#ifndef GEODE_STATICS_createMoveMenu
		#define GEODE_STATICS_createMoveMenu
		GEODE_AS_STATIC_FUNCTION(createMoveMenu) 
	#endif

	#ifndef GEODE_STATICS_createUndoSelectObject
		#define GEODE_STATICS_createUndoSelectObject
		GEODE_AS_STATIC_FUNCTION(createUndoSelectObject) 
	#endif

	#ifndef GEODE_STATICS_deactivateRotationControl
		#define GEODE_STATICS_deactivateRotationControl
		GEODE_AS_STATIC_FUNCTION(deactivateRotationControl) 
	#endif

	#ifndef GEODE_STATICS_deactivateScaleControl
		#define GEODE_STATICS_deactivateScaleControl
		GEODE_AS_STATIC_FUNCTION(deactivateScaleControl) 
	#endif

	#ifndef GEODE_STATICS_deleteObject
		#define GEODE_STATICS_deleteObject
		GEODE_AS_STATIC_FUNCTION(deleteObject) 
	#endif

	#ifndef GEODE_STATICS_deselectAll
		#define GEODE_STATICS_deselectAll
		GEODE_AS_STATIC_FUNCTION(deselectAll) 
	#endif

	#ifndef GEODE_STATICS_deselectObject
		#define GEODE_STATICS_deselectObject
		GEODE_AS_STATIC_FUNCTION(deselectObject) 
	#endif

	#ifndef GEODE_STATICS_deselectTargetPortals
		#define GEODE_STATICS_deselectTargetPortals
		GEODE_AS_STATIC_FUNCTION(deselectTargetPortals) 
	#endif

	#ifndef GEODE_STATICS_disableButton
		#define GEODE_STATICS_disableButton
		GEODE_AS_STATIC_FUNCTION(disableButton) 
	#endif

	#ifndef GEODE_STATICS_editButtonUsable
		#define GEODE_STATICS_editButtonUsable
		GEODE_AS_STATIC_FUNCTION(editButtonUsable) 
	#endif

	#ifndef GEODE_STATICS_editGroup
		#define GEODE_STATICS_editGroup
		GEODE_AS_STATIC_FUNCTION(editGroup) 
	#endif

	#ifndef GEODE_STATICS_editObject
		#define GEODE_STATICS_editObject
		GEODE_AS_STATIC_FUNCTION(editObject) 
	#endif

	#ifndef GEODE_STATICS_enableButton
		#define GEODE_STATICS_enableButton
		GEODE_AS_STATIC_FUNCTION(enableButton) 
	#endif

	#ifndef GEODE_STATICS_findSnapObject
		#define GEODE_STATICS_findSnapObject
		GEODE_AS_STATIC_FUNCTION(findSnapObject) 
	#endif

	#ifndef GEODE_STATICS_flipObjectsX
		#define GEODE_STATICS_flipObjectsX
		GEODE_AS_STATIC_FUNCTION(flipObjectsX) 
	#endif

	#ifndef GEODE_STATICS_flipObjectsY
		#define GEODE_STATICS_flipObjectsY
		GEODE_AS_STATIC_FUNCTION(flipObjectsY) 
	#endif

	#ifndef GEODE_STATICS_getButton
		#define GEODE_STATICS_getButton
		GEODE_AS_STATIC_FUNCTION(getButton) 
	#endif

	#ifndef GEODE_STATICS_getCreateBtn
		#define GEODE_STATICS_getCreateBtn
		GEODE_AS_STATIC_FUNCTION(getCreateBtn) 
	#endif

	#ifndef GEODE_STATICS_getCreateMenuItemButton
		#define GEODE_STATICS_getCreateMenuItemButton
		GEODE_AS_STATIC_FUNCTION(getCreateMenuItemButton) 
	#endif

	#ifndef GEODE_STATICS_getCycledObject
		#define GEODE_STATICS_getCycledObject
		GEODE_AS_STATIC_FUNCTION(getCycledObject) 
	#endif

	#ifndef GEODE_STATICS_getEditMode
		#define GEODE_STATICS_getEditMode
		GEODE_AS_STATIC_FUNCTION(getEditMode) 
	#endif

	#ifndef GEODE_STATICS_getGridSnappedPos
		#define GEODE_STATICS_getGridSnappedPos
		GEODE_AS_STATIC_FUNCTION(getGridSnappedPos) 
	#endif

	#ifndef GEODE_STATICS_getGroupCenter
		#define GEODE_STATICS_getGroupCenter
		GEODE_AS_STATIC_FUNCTION(getGroupCenter) 
	#endif

	#ifndef GEODE_STATICS_getLimitedPosition
		#define GEODE_STATICS_getLimitedPosition
		GEODE_AS_STATIC_FUNCTION(getLimitedPosition) 
	#endif

	#ifndef GEODE_STATICS_getLimitY
		#define GEODE_STATICS_getLimitY
		GEODE_AS_STATIC_FUNCTION(getLimitY) 
	#endif

	#ifndef GEODE_STATICS_getModeBtn
		#define GEODE_STATICS_getModeBtn
		GEODE_AS_STATIC_FUNCTION(getModeBtn) 
	#endif

	#ifndef GEODE_STATICS_getMusicGuideActive
		#define GEODE_STATICS_getMusicGuideActive
		GEODE_AS_STATIC_FUNCTION(getMusicGuideActive) 
	#endif

	#ifndef GEODE_STATICS_getRelativeOffset
		#define GEODE_STATICS_getRelativeOffset
		GEODE_AS_STATIC_FUNCTION(getRelativeOffset) 
	#endif

	#ifndef GEODE_STATICS_getSelectedObjects
		#define GEODE_STATICS_getSelectedObjects
		GEODE_AS_STATIC_FUNCTION(getSelectedObjects) 
	#endif

	#ifndef GEODE_STATICS_getSpriteButton
		#define GEODE_STATICS_getSpriteButton
		GEODE_AS_STATIC_FUNCTION(getSpriteButton) 
	#endif

	#ifndef GEODE_STATICS_getStoredUndoObject
		#define GEODE_STATICS_getStoredUndoObject
		GEODE_AS_STATIC_FUNCTION(getStoredUndoObject) 
	#endif

	#ifndef GEODE_STATICS_getTouchPoint
		#define GEODE_STATICS_getTouchPoint
		GEODE_AS_STATIC_FUNCTION(getTouchPoint) 
	#endif

	#ifndef GEODE_STATICS_getXMin
		#define GEODE_STATICS_getXMin
		GEODE_AS_STATIC_FUNCTION(getXMin) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_isSpecialSnapObject
		#define GEODE_STATICS_isSpecialSnapObject
		GEODE_AS_STATIC_FUNCTION(isSpecialSnapObject) 
	#endif

	#ifndef GEODE_STATICS_menuItemFromObjectString
		#define GEODE_STATICS_menuItemFromObjectString
		GEODE_AS_STATIC_FUNCTION(menuItemFromObjectString) 
	#endif

	#ifndef GEODE_STATICS_moveForCommand
		#define GEODE_STATICS_moveForCommand
		GEODE_AS_STATIC_FUNCTION(moveForCommand) 
	#endif

	#ifndef GEODE_STATICS_moveGamelayer
		#define GEODE_STATICS_moveGamelayer
		GEODE_AS_STATIC_FUNCTION(moveGamelayer) 
	#endif

	#ifndef GEODE_STATICS_moveObject
		#define GEODE_STATICS_moveObject
		GEODE_AS_STATIC_FUNCTION(moveObject) 
	#endif

	#ifndef GEODE_STATICS_moveObjectCall
		#define GEODE_STATICS_moveObjectCall
		GEODE_AS_STATIC_FUNCTION(moveObjectCall) 
	#endif

	#ifndef GEODE_STATICS_offsetForKey
		#define GEODE_STATICS_offsetForKey
		GEODE_AS_STATIC_FUNCTION(offsetForKey) 
	#endif

	#ifndef GEODE_STATICS_onCopy
		#define GEODE_STATICS_onCopy
		GEODE_AS_STATIC_FUNCTION(onCopy) 
	#endif

	#ifndef GEODE_STATICS_onCreate
		#define GEODE_STATICS_onCreate
		GEODE_AS_STATIC_FUNCTION(onCreate) 
	#endif

	#ifndef GEODE_STATICS_onCreateButton
		#define GEODE_STATICS_onCreateButton
		GEODE_AS_STATIC_FUNCTION(onCreateButton) 
	#endif

	#ifndef GEODE_STATICS_onCreateObject
		#define GEODE_STATICS_onCreateObject
		GEODE_AS_STATIC_FUNCTION(onCreateObject) 
	#endif

	#ifndef GEODE_STATICS_onDelete
		#define GEODE_STATICS_onDelete
		GEODE_AS_STATIC_FUNCTION(onDelete) 
	#endif

	#ifndef GEODE_STATICS_onDeleteAll
		#define GEODE_STATICS_onDeleteAll
		GEODE_AS_STATIC_FUNCTION(onDeleteAll) 
	#endif

	#ifndef GEODE_STATICS_onDeleteCustomItem
		#define GEODE_STATICS_onDeleteCustomItem
		GEODE_AS_STATIC_FUNCTION(onDeleteCustomItem) 
	#endif

	#ifndef GEODE_STATICS_onDeleteInfo
		#define GEODE_STATICS_onDeleteInfo
		GEODE_AS_STATIC_FUNCTION(onDeleteInfo) 
	#endif

	#ifndef GEODE_STATICS_onDeleteSelected
		#define GEODE_STATICS_onDeleteSelected
		GEODE_AS_STATIC_FUNCTION(onDeleteSelected) 
	#endif

	#ifndef GEODE_STATICS_onDeleteSelectedType
		#define GEODE_STATICS_onDeleteSelectedType
		GEODE_AS_STATIC_FUNCTION(onDeleteSelectedType) 
	#endif

	#ifndef GEODE_STATICS_onDeleteStartPos
		#define GEODE_STATICS_onDeleteStartPos
		GEODE_AS_STATIC_FUNCTION(onDeleteStartPos) 
	#endif

	#ifndef GEODE_STATICS_onDeselectAll
		#define GEODE_STATICS_onDeselectAll
		GEODE_AS_STATIC_FUNCTION(onDeselectAll) 
	#endif

	#ifndef GEODE_STATICS_onDuplicate
		#define GEODE_STATICS_onDuplicate
		GEODE_AS_STATIC_FUNCTION(onDuplicate) 
	#endif

	#ifndef GEODE_STATICS_onGroupDown
		#define GEODE_STATICS_onGroupDown
		GEODE_AS_STATIC_FUNCTION(onGroupDown) 
	#endif

	#ifndef GEODE_STATICS_onGroupUp
		#define GEODE_STATICS_onGroupUp
		GEODE_AS_STATIC_FUNCTION(onGroupUp) 
	#endif

	#ifndef GEODE_STATICS_onNewCustomItem
		#define GEODE_STATICS_onNewCustomItem
		GEODE_AS_STATIC_FUNCTION(onNewCustomItem) 
	#endif

	#ifndef GEODE_STATICS_onPaste
		#define GEODE_STATICS_onPaste
		GEODE_AS_STATIC_FUNCTION(onPaste) 
	#endif

	#ifndef GEODE_STATICS_onPause
		#define GEODE_STATICS_onPause
		GEODE_AS_STATIC_FUNCTION(onPause) 
	#endif

	#ifndef GEODE_STATICS_onPlayback
		#define GEODE_STATICS_onPlayback
		GEODE_AS_STATIC_FUNCTION(onPlayback) 
	#endif

	#ifndef GEODE_STATICS_onPlaytest
		#define GEODE_STATICS_onPlaytest
		GEODE_AS_STATIC_FUNCTION(onPlaytest) 
	#endif

	#ifndef GEODE_STATICS_onSelectBuildTab
		#define GEODE_STATICS_onSelectBuildTab
		GEODE_AS_STATIC_FUNCTION(onSelectBuildTab) 
	#endif

	#ifndef GEODE_STATICS_onSettings
		#define GEODE_STATICS_onSettings
		GEODE_AS_STATIC_FUNCTION(onSettings) 
	#endif

	#ifndef GEODE_STATICS_onStopPlaytest
		#define GEODE_STATICS_onStopPlaytest
		GEODE_AS_STATIC_FUNCTION(onStopPlaytest) 
	#endif

	#ifndef GEODE_STATICS_onToggleGuide
		#define GEODE_STATICS_onToggleGuide
		GEODE_AS_STATIC_FUNCTION(onToggleGuide) 
	#endif

	#ifndef GEODE_STATICS_onUpdateDeleteFilter
		#define GEODE_STATICS_onUpdateDeleteFilter
		GEODE_AS_STATIC_FUNCTION(onUpdateDeleteFilter) 
	#endif

	#ifndef GEODE_STATICS_orderDownCustomItem
		#define GEODE_STATICS_orderDownCustomItem
		GEODE_AS_STATIC_FUNCTION(orderDownCustomItem) 
	#endif

	#ifndef GEODE_STATICS_orderUpCustomItem
		#define GEODE_STATICS_orderUpCustomItem
		GEODE_AS_STATIC_FUNCTION(orderUpCustomItem) 
	#endif

	#ifndef GEODE_STATICS_pasteObjects
		#define GEODE_STATICS_pasteObjects
		GEODE_AS_STATIC_FUNCTION(pasteObjects) 
	#endif

	#ifndef GEODE_STATICS_playerTouchBegan
		#define GEODE_STATICS_playerTouchBegan
		GEODE_AS_STATIC_FUNCTION(playerTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_playerTouchEnded
		#define GEODE_STATICS_playerTouchEnded
		GEODE_AS_STATIC_FUNCTION(playerTouchEnded) 
	#endif

	#ifndef GEODE_STATICS_playtestStopped
		#define GEODE_STATICS_playtestStopped
		GEODE_AS_STATIC_FUNCTION(playtestStopped) 
	#endif

	#ifndef GEODE_STATICS_positionIsInSnapped
		#define GEODE_STATICS_positionIsInSnapped
		GEODE_AS_STATIC_FUNCTION(positionIsInSnapped) 
	#endif

	#ifndef GEODE_STATICS_positionWithoutOffset
		#define GEODE_STATICS_positionWithoutOffset
		GEODE_AS_STATIC_FUNCTION(positionWithoutOffset) 
	#endif

	#ifndef GEODE_STATICS_recreateButtonTabs
		#define GEODE_STATICS_recreateButtonTabs
		GEODE_AS_STATIC_FUNCTION(recreateButtonTabs) 
	#endif

	#ifndef GEODE_STATICS_redoLastAction
		#define GEODE_STATICS_redoLastAction
		GEODE_AS_STATIC_FUNCTION(redoLastAction) 
	#endif

	#ifndef GEODE_STATICS_reloadCustomItems
		#define GEODE_STATICS_reloadCustomItems
		GEODE_AS_STATIC_FUNCTION(reloadCustomItems) 
	#endif

	#ifndef GEODE_STATICS_removeOffset
		#define GEODE_STATICS_removeOffset
		GEODE_AS_STATIC_FUNCTION(removeOffset) 
	#endif

	#ifndef GEODE_STATICS_repositionObjectsToCenter
		#define GEODE_STATICS_repositionObjectsToCenter
		GEODE_AS_STATIC_FUNCTION(repositionObjectsToCenter) 
	#endif

	#ifndef GEODE_STATICS_resetUI
		#define GEODE_STATICS_resetUI
		GEODE_AS_STATIC_FUNCTION(resetUI) 
	#endif

	#ifndef GEODE_STATICS_rotateObjects
		#define GEODE_STATICS_rotateObjects
		GEODE_AS_STATIC_FUNCTION(rotateObjects) 
	#endif

	#ifndef GEODE_STATICS_rotationforCommand
		#define GEODE_STATICS_rotationforCommand
		GEODE_AS_STATIC_FUNCTION(rotationforCommand) 
	#endif

	#ifndef GEODE_STATICS_scaleChanged
		#define GEODE_STATICS_scaleChanged
		GEODE_AS_STATIC_FUNCTION(scaleChanged) 
	#endif

	#ifndef GEODE_STATICS_scaleObjects
		#define GEODE_STATICS_scaleObjects
		GEODE_AS_STATIC_FUNCTION(scaleObjects) 
	#endif

	#ifndef GEODE_STATICS_selectBuildTab
		#define GEODE_STATICS_selectBuildTab
		GEODE_AS_STATIC_FUNCTION(selectBuildTab) 
	#endif

	#ifndef GEODE_STATICS_selectObject
		#define GEODE_STATICS_selectObject
		GEODE_AS_STATIC_FUNCTION(selectObject) 
	#endif

	#ifndef GEODE_STATICS_selectObjects
		#define GEODE_STATICS_selectObjects
		GEODE_AS_STATIC_FUNCTION(selectObjects) 
	#endif

	#ifndef GEODE_STATICS_selectObjectsInRect
		#define GEODE_STATICS_selectObjectsInRect
		GEODE_AS_STATIC_FUNCTION(selectObjectsInRect) 
	#endif

	#ifndef GEODE_STATICS_setEditMode
		#define GEODE_STATICS_setEditMode
		GEODE_AS_STATIC_FUNCTION(setEditMode) 
	#endif

	#ifndef GEODE_STATICS_setStoredUndoObject
		#define GEODE_STATICS_setStoredUndoObject
		GEODE_AS_STATIC_FUNCTION(setStoredUndoObject) 
	#endif

	#ifndef GEODE_STATICS_setupCreateMenu
		#define GEODE_STATICS_setupCreateMenu
		GEODE_AS_STATIC_FUNCTION(setupCreateMenu) 
	#endif

	#ifndef GEODE_STATICS_setupDeleteMenu
		#define GEODE_STATICS_setupDeleteMenu
		GEODE_AS_STATIC_FUNCTION(setupDeleteMenu) 
	#endif

	#ifndef GEODE_STATICS_setupEditMenu
		#define GEODE_STATICS_setupEditMenu
		GEODE_AS_STATIC_FUNCTION(setupEditMenu) 
	#endif

	#ifndef GEODE_STATICS_shouldDeleteObject
		#define GEODE_STATICS_shouldDeleteObject
		GEODE_AS_STATIC_FUNCTION(shouldDeleteObject) 
	#endif

	#ifndef GEODE_STATICS_shouldSnap
		#define GEODE_STATICS_shouldSnap
		GEODE_AS_STATIC_FUNCTION(shouldSnap) 
	#endif

	#ifndef GEODE_STATICS_showDeleteConfirmation
		#define GEODE_STATICS_showDeleteConfirmation
		GEODE_AS_STATIC_FUNCTION(showDeleteConfirmation) 
	#endif

	#ifndef GEODE_STATICS_showMaxCoinError
		#define GEODE_STATICS_showMaxCoinError
		GEODE_AS_STATIC_FUNCTION(showMaxCoinError) 
	#endif

	#ifndef GEODE_STATICS_showMaxError
		#define GEODE_STATICS_showMaxError
		GEODE_AS_STATIC_FUNCTION(showMaxError) 
	#endif

	#ifndef GEODE_STATICS_showUI
		#define GEODE_STATICS_showUI
		GEODE_AS_STATIC_FUNCTION(showUI) 
	#endif

	#ifndef GEODE_STATICS_sliderChanged
		#define GEODE_STATICS_sliderChanged
		GEODE_AS_STATIC_FUNCTION(sliderChanged) 
	#endif

	#ifndef GEODE_STATICS_toggleDuplicateButton
		#define GEODE_STATICS_toggleDuplicateButton
		GEODE_AS_STATIC_FUNCTION(toggleDuplicateButton) 
	#endif

	#ifndef GEODE_STATICS_toggleEditObjectButton
		#define GEODE_STATICS_toggleEditObjectButton
		GEODE_AS_STATIC_FUNCTION(toggleEditObjectButton) 
	#endif

	#ifndef GEODE_STATICS_toggleEnableRotate
		#define GEODE_STATICS_toggleEnableRotate
		GEODE_AS_STATIC_FUNCTION(toggleEnableRotate) 
	#endif

	#ifndef GEODE_STATICS_toggleFreeMove
		#define GEODE_STATICS_toggleFreeMove
		GEODE_AS_STATIC_FUNCTION(toggleFreeMove) 
	#endif

	#ifndef GEODE_STATICS_toggleGuideButton
		#define GEODE_STATICS_toggleGuideButton
		GEODE_AS_STATIC_FUNCTION(toggleGuideButton) 
	#endif

	#ifndef GEODE_STATICS_toggleMode
		#define GEODE_STATICS_toggleMode
		GEODE_AS_STATIC_FUNCTION(toggleMode) 
	#endif

	#ifndef GEODE_STATICS_toggleObjectInfoLabel
		#define GEODE_STATICS_toggleObjectInfoLabel
		GEODE_AS_STATIC_FUNCTION(toggleObjectInfoLabel) 
	#endif

	#ifndef GEODE_STATICS_toggleSnap
		#define GEODE_STATICS_toggleSnap
		GEODE_AS_STATIC_FUNCTION(toggleSnap) 
	#endif

	#ifndef GEODE_STATICS_toggleSpecialEditButtons
		#define GEODE_STATICS_toggleSpecialEditButtons
		GEODE_AS_STATIC_FUNCTION(toggleSpecialEditButtons) 
	#endif

	#ifndef GEODE_STATICS_toggleSwipe
		#define GEODE_STATICS_toggleSwipe
		GEODE_AS_STATIC_FUNCTION(toggleSwipe) 
	#endif

	#ifndef GEODE_STATICS_transformObject
		#define GEODE_STATICS_transformObject
		GEODE_AS_STATIC_FUNCTION(transformObject) 
	#endif

	#ifndef GEODE_STATICS_transformObjectCall
		#define GEODE_STATICS_transformObjectCall
		GEODE_AS_STATIC_FUNCTION(transformObjectCall) 
	#endif

	#ifndef GEODE_STATICS_tryDeleteObject
		#define GEODE_STATICS_tryDeleteObject
		GEODE_AS_STATIC_FUNCTION(tryDeleteObject) 
	#endif

	#ifndef GEODE_STATICS_tryUpdateTimeMarkers
		#define GEODE_STATICS_tryUpdateTimeMarkers
		GEODE_AS_STATIC_FUNCTION(tryUpdateTimeMarkers) 
	#endif

	#ifndef GEODE_STATICS_undoLastAction
		#define GEODE_STATICS_undoLastAction
		GEODE_AS_STATIC_FUNCTION(undoLastAction) 
	#endif

	#ifndef GEODE_STATICS_updateButtons
		#define GEODE_STATICS_updateButtons
		GEODE_AS_STATIC_FUNCTION(updateButtons) 
	#endif

	#ifndef GEODE_STATICS_updateCreateMenu
		#define GEODE_STATICS_updateCreateMenu
		GEODE_AS_STATIC_FUNCTION(updateCreateMenu) 
	#endif

	#ifndef GEODE_STATICS_updateDeleteButtons
		#define GEODE_STATICS_updateDeleteButtons
		GEODE_AS_STATIC_FUNCTION(updateDeleteButtons) 
	#endif

	#ifndef GEODE_STATICS_updateDeleteMenu
		#define GEODE_STATICS_updateDeleteMenu
		GEODE_AS_STATIC_FUNCTION(updateDeleteMenu) 
	#endif

	#ifndef GEODE_STATICS_updateEditMenu
		#define GEODE_STATICS_updateEditMenu
		GEODE_AS_STATIC_FUNCTION(updateEditMenu) 
	#endif

	#ifndef GEODE_STATICS_updateGridNodeSize
		#define GEODE_STATICS_updateGridNodeSize
		GEODE_AS_STATIC_FUNCTION(updateGridNodeSize) 
	#endif

	#ifndef GEODE_STATICS_updateGroupIDLabel
		#define GEODE_STATICS_updateGroupIDLabel
		GEODE_AS_STATIC_FUNCTION(updateGroupIDLabel) 
	#endif

	#ifndef GEODE_STATICS_updateObjectInfoLabel
		#define GEODE_STATICS_updateObjectInfoLabel
		GEODE_AS_STATIC_FUNCTION(updateObjectInfoLabel) 
	#endif

	#ifndef GEODE_STATICS_updatePercentLabel
		#define GEODE_STATICS_updatePercentLabel
		GEODE_AS_STATIC_FUNCTION(updatePercentLabel) 
	#endif

	#ifndef GEODE_STATICS_updatePlaybackBtn
		#define GEODE_STATICS_updatePlaybackBtn
		GEODE_AS_STATIC_FUNCTION(updatePlaybackBtn) 
	#endif

	#ifndef GEODE_STATICS_updateSlider
		#define GEODE_STATICS_updateSlider
		GEODE_AS_STATIC_FUNCTION(updateSlider) 
	#endif

	#ifndef GEODE_STATICS_updateZoom
		#define GEODE_STATICS_updateZoom
		GEODE_AS_STATIC_FUNCTION(updateZoom) 
	#endif

	#ifndef GEODE_STATICS_valueFromXPos
		#define GEODE_STATICS_valueFromXPos
		GEODE_AS_STATIC_FUNCTION(valueFromXPos) 
	#endif

	#ifndef GEODE_STATICS_xPosFromValue
		#define GEODE_STATICS_xPosFromValue
		GEODE_AS_STATIC_FUNCTION(xPosFromValue) 
	#endif

	#ifndef GEODE_STATICS_zoomGameLayer
		#define GEODE_STATICS_zoomGameLayer
		GEODE_AS_STATIC_FUNCTION(zoomGameLayer) 
	#endif

	#ifndef GEODE_STATICS_zoomIn
		#define GEODE_STATICS_zoomIn
		GEODE_AS_STATIC_FUNCTION(zoomIn) 
	#endif

	#ifndef GEODE_STATICS_zoomOut
		#define GEODE_STATICS_zoomOut
		GEODE_AS_STATIC_FUNCTION(zoomOut) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_ccTouchBegan
		#define GEODE_STATICS_ccTouchBegan
		GEODE_AS_STATIC_FUNCTION(ccTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_ccTouchMoved
		#define GEODE_STATICS_ccTouchMoved
		GEODE_AS_STATIC_FUNCTION(ccTouchMoved) 
	#endif

	#ifndef GEODE_STATICS_ccTouchEnded
		#define GEODE_STATICS_ccTouchEnded
		GEODE_AS_STATIC_FUNCTION(ccTouchEnded) 
	#endif

	#ifndef GEODE_STATICS_ccTouchCancelled
		#define GEODE_STATICS_ccTouchCancelled
		GEODE_AS_STATIC_FUNCTION(ccTouchCancelled) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_keyDown
		#define GEODE_STATICS_keyDown
		GEODE_AS_STATIC_FUNCTION(keyDown) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_songStateChanged
		#define GEODE_STATICS_songStateChanged
		GEODE_AS_STATIC_FUNCTION(songStateChanged) 
	#endif

	#ifndef GEODE_STATICS_keyUp
		#define GEODE_STATICS_keyUp
		GEODE_AS_STATIC_FUNCTION(keyUp) 
	#endif

	#ifndef GEODE_STATICS_scrollWheel
		#define GEODE_STATICS_scrollWheel
		GEODE_AS_STATIC_FUNCTION(scrollWheel) 
	#endif

	#ifndef GEODE_STATICS_angleChangeBegin
		#define GEODE_STATICS_angleChangeBegin
		GEODE_AS_STATIC_FUNCTION(angleChangeBegin) 
	#endif

	#ifndef GEODE_STATICS_angleChangeEnded
		#define GEODE_STATICS_angleChangeEnded
		GEODE_AS_STATIC_FUNCTION(angleChangeEnded) 
	#endif

	#ifndef GEODE_STATICS_angleChanged
		#define GEODE_STATICS_angleChanged
		GEODE_AS_STATIC_FUNCTION(angleChanged) 
	#endif

	#ifndef GEODE_STATICS_updateScaleControl
		#define GEODE_STATICS_updateScaleControl
		GEODE_AS_STATIC_FUNCTION(updateScaleControl) 
	#endif

	#ifndef GEODE_STATICS_scaleChangeBegin
		#define GEODE_STATICS_scaleChangeBegin
		GEODE_AS_STATIC_FUNCTION(scaleChangeBegin) 
	#endif

	#ifndef GEODE_STATICS_scaleChangeEnded
		#define GEODE_STATICS_scaleChangeEnded
		GEODE_AS_STATIC_FUNCTION(scaleChangeEnded) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activateRotationControl
		#define GEODE_CONCEPT_CHECK_activateRotationControl
		GEODE_CONCEPT_FUNCTION_CHECK(activateRotationControl) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activateScaleControl
		#define GEODE_CONCEPT_CHECK_activateScaleControl
		GEODE_CONCEPT_FUNCTION_CHECK(activateScaleControl) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addSnapPosition
		#define GEODE_CONCEPT_CHECK_addSnapPosition
		GEODE_CONCEPT_FUNCTION_CHECK(addSnapPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applyOffset
		#define GEODE_CONCEPT_CHECK_applyOffset
		GEODE_CONCEPT_FUNCTION_CHECK(applyOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applySpecialOffset
		#define GEODE_CONCEPT_CHECK_applySpecialOffset
		GEODE_CONCEPT_FUNCTION_CHECK(applySpecialOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_changeSelectedObjects
		#define GEODE_CONCEPT_CHECK_changeSelectedObjects
		GEODE_CONCEPT_FUNCTION_CHECK(changeSelectedObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clickOnPosition
		#define GEODE_CONCEPT_CHECK_clickOnPosition
		GEODE_CONCEPT_FUNCTION_CHECK(clickOnPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_colorSelectClosed
		#define GEODE_CONCEPT_CHECK_colorSelectClosed
		GEODE_CONCEPT_FUNCTION_CHECK(colorSelectClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_constrainGameLayerPosition
		#define GEODE_CONCEPT_CHECK_constrainGameLayerPosition
		GEODE_CONCEPT_FUNCTION_CHECK(constrainGameLayerPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_copyObjects
		#define GEODE_CONCEPT_CHECK_copyObjects
		GEODE_CONCEPT_FUNCTION_CHECK(copyObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createCustomItems
		#define GEODE_CONCEPT_CHECK_createCustomItems
		GEODE_CONCEPT_FUNCTION_CHECK(createCustomItems) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createMoveMenu
		#define GEODE_CONCEPT_CHECK_createMoveMenu
		GEODE_CONCEPT_FUNCTION_CHECK(createMoveMenu) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createUndoSelectObject
		#define GEODE_CONCEPT_CHECK_createUndoSelectObject
		GEODE_CONCEPT_FUNCTION_CHECK(createUndoSelectObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deactivateRotationControl
		#define GEODE_CONCEPT_CHECK_deactivateRotationControl
		GEODE_CONCEPT_FUNCTION_CHECK(deactivateRotationControl) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deactivateScaleControl
		#define GEODE_CONCEPT_CHECK_deactivateScaleControl
		GEODE_CONCEPT_FUNCTION_CHECK(deactivateScaleControl) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteObject
		#define GEODE_CONCEPT_CHECK_deleteObject
		GEODE_CONCEPT_FUNCTION_CHECK(deleteObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deselectAll
		#define GEODE_CONCEPT_CHECK_deselectAll
		GEODE_CONCEPT_FUNCTION_CHECK(deselectAll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deselectObject
		#define GEODE_CONCEPT_CHECK_deselectObject
		GEODE_CONCEPT_FUNCTION_CHECK(deselectObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deselectTargetPortals
		#define GEODE_CONCEPT_CHECK_deselectTargetPortals
		GEODE_CONCEPT_FUNCTION_CHECK(deselectTargetPortals) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_disableButton
		#define GEODE_CONCEPT_CHECK_disableButton
		GEODE_CONCEPT_FUNCTION_CHECK(disableButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_editButtonUsable
		#define GEODE_CONCEPT_CHECK_editButtonUsable
		GEODE_CONCEPT_FUNCTION_CHECK(editButtonUsable) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_editGroup
		#define GEODE_CONCEPT_CHECK_editGroup
		GEODE_CONCEPT_FUNCTION_CHECK(editGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_editObject
		#define GEODE_CONCEPT_CHECK_editObject
		GEODE_CONCEPT_FUNCTION_CHECK(editObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_enableButton
		#define GEODE_CONCEPT_CHECK_enableButton
		GEODE_CONCEPT_FUNCTION_CHECK(enableButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_findSnapObject
		#define GEODE_CONCEPT_CHECK_findSnapObject
		GEODE_CONCEPT_FUNCTION_CHECK(findSnapObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_flipObjectsX
		#define GEODE_CONCEPT_CHECK_flipObjectsX
		GEODE_CONCEPT_FUNCTION_CHECK(flipObjectsX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_flipObjectsY
		#define GEODE_CONCEPT_CHECK_flipObjectsY
		GEODE_CONCEPT_FUNCTION_CHECK(flipObjectsY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getButton
		#define GEODE_CONCEPT_CHECK_getButton
		GEODE_CONCEPT_FUNCTION_CHECK(getButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCreateBtn
		#define GEODE_CONCEPT_CHECK_getCreateBtn
		GEODE_CONCEPT_FUNCTION_CHECK(getCreateBtn) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCreateMenuItemButton
		#define GEODE_CONCEPT_CHECK_getCreateMenuItemButton
		GEODE_CONCEPT_FUNCTION_CHECK(getCreateMenuItemButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCycledObject
		#define GEODE_CONCEPT_CHECK_getCycledObject
		GEODE_CONCEPT_FUNCTION_CHECK(getCycledObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEditMode
		#define GEODE_CONCEPT_CHECK_getEditMode
		GEODE_CONCEPT_FUNCTION_CHECK(getEditMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGridSnappedPos
		#define GEODE_CONCEPT_CHECK_getGridSnappedPos
		GEODE_CONCEPT_FUNCTION_CHECK(getGridSnappedPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGroupCenter
		#define GEODE_CONCEPT_CHECK_getGroupCenter
		GEODE_CONCEPT_FUNCTION_CHECK(getGroupCenter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLimitedPosition
		#define GEODE_CONCEPT_CHECK_getLimitedPosition
		GEODE_CONCEPT_FUNCTION_CHECK(getLimitedPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLimitY
		#define GEODE_CONCEPT_CHECK_getLimitY
		GEODE_CONCEPT_FUNCTION_CHECK(getLimitY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getModeBtn
		#define GEODE_CONCEPT_CHECK_getModeBtn
		GEODE_CONCEPT_FUNCTION_CHECK(getModeBtn) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMusicGuideActive
		#define GEODE_CONCEPT_CHECK_getMusicGuideActive
		GEODE_CONCEPT_FUNCTION_CHECK(getMusicGuideActive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRelativeOffset
		#define GEODE_CONCEPT_CHECK_getRelativeOffset
		GEODE_CONCEPT_FUNCTION_CHECK(getRelativeOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSelectedObjects
		#define GEODE_CONCEPT_CHECK_getSelectedObjects
		GEODE_CONCEPT_FUNCTION_CHECK(getSelectedObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSpriteButton
		#define GEODE_CONCEPT_CHECK_getSpriteButton
		GEODE_CONCEPT_FUNCTION_CHECK(getSpriteButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStoredUndoObject
		#define GEODE_CONCEPT_CHECK_getStoredUndoObject
		GEODE_CONCEPT_FUNCTION_CHECK(getStoredUndoObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTouchPoint
		#define GEODE_CONCEPT_CHECK_getTouchPoint
		GEODE_CONCEPT_FUNCTION_CHECK(getTouchPoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getXMin
		#define GEODE_CONCEPT_CHECK_getXMin
		GEODE_CONCEPT_FUNCTION_CHECK(getXMin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isSpecialSnapObject
		#define GEODE_CONCEPT_CHECK_isSpecialSnapObject
		GEODE_CONCEPT_FUNCTION_CHECK(isSpecialSnapObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_menuItemFromObjectString
		#define GEODE_CONCEPT_CHECK_menuItemFromObjectString
		GEODE_CONCEPT_FUNCTION_CHECK(menuItemFromObjectString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_moveForCommand
		#define GEODE_CONCEPT_CHECK_moveForCommand
		GEODE_CONCEPT_FUNCTION_CHECK(moveForCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_moveGamelayer
		#define GEODE_CONCEPT_CHECK_moveGamelayer
		GEODE_CONCEPT_FUNCTION_CHECK(moveGamelayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_moveObject
		#define GEODE_CONCEPT_CHECK_moveObject
		GEODE_CONCEPT_FUNCTION_CHECK(moveObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_moveObjectCall
		#define GEODE_CONCEPT_CHECK_moveObjectCall
		GEODE_CONCEPT_FUNCTION_CHECK(moveObjectCall) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_offsetForKey
		#define GEODE_CONCEPT_CHECK_offsetForKey
		GEODE_CONCEPT_FUNCTION_CHECK(offsetForKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCopy
		#define GEODE_CONCEPT_CHECK_onCopy
		GEODE_CONCEPT_FUNCTION_CHECK(onCopy) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCreate
		#define GEODE_CONCEPT_CHECK_onCreate
		GEODE_CONCEPT_FUNCTION_CHECK(onCreate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCreateButton
		#define GEODE_CONCEPT_CHECK_onCreateButton
		GEODE_CONCEPT_FUNCTION_CHECK(onCreateButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCreateObject
		#define GEODE_CONCEPT_CHECK_onCreateObject
		GEODE_CONCEPT_FUNCTION_CHECK(onCreateObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDelete
		#define GEODE_CONCEPT_CHECK_onDelete
		GEODE_CONCEPT_FUNCTION_CHECK(onDelete) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeleteAll
		#define GEODE_CONCEPT_CHECK_onDeleteAll
		GEODE_CONCEPT_FUNCTION_CHECK(onDeleteAll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeleteCustomItem
		#define GEODE_CONCEPT_CHECK_onDeleteCustomItem
		GEODE_CONCEPT_FUNCTION_CHECK(onDeleteCustomItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeleteInfo
		#define GEODE_CONCEPT_CHECK_onDeleteInfo
		GEODE_CONCEPT_FUNCTION_CHECK(onDeleteInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeleteSelected
		#define GEODE_CONCEPT_CHECK_onDeleteSelected
		GEODE_CONCEPT_FUNCTION_CHECK(onDeleteSelected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeleteSelectedType
		#define GEODE_CONCEPT_CHECK_onDeleteSelectedType
		GEODE_CONCEPT_FUNCTION_CHECK(onDeleteSelectedType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeleteStartPos
		#define GEODE_CONCEPT_CHECK_onDeleteStartPos
		GEODE_CONCEPT_FUNCTION_CHECK(onDeleteStartPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeselectAll
		#define GEODE_CONCEPT_CHECK_onDeselectAll
		GEODE_CONCEPT_FUNCTION_CHECK(onDeselectAll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDuplicate
		#define GEODE_CONCEPT_CHECK_onDuplicate
		GEODE_CONCEPT_FUNCTION_CHECK(onDuplicate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGroupDown
		#define GEODE_CONCEPT_CHECK_onGroupDown
		GEODE_CONCEPT_FUNCTION_CHECK(onGroupDown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGroupUp
		#define GEODE_CONCEPT_CHECK_onGroupUp
		GEODE_CONCEPT_FUNCTION_CHECK(onGroupUp) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNewCustomItem
		#define GEODE_CONCEPT_CHECK_onNewCustomItem
		GEODE_CONCEPT_FUNCTION_CHECK(onNewCustomItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPaste
		#define GEODE_CONCEPT_CHECK_onPaste
		GEODE_CONCEPT_FUNCTION_CHECK(onPaste) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPause
		#define GEODE_CONCEPT_CHECK_onPause
		GEODE_CONCEPT_FUNCTION_CHECK(onPause) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPlayback
		#define GEODE_CONCEPT_CHECK_onPlayback
		GEODE_CONCEPT_FUNCTION_CHECK(onPlayback) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPlaytest
		#define GEODE_CONCEPT_CHECK_onPlaytest
		GEODE_CONCEPT_FUNCTION_CHECK(onPlaytest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectBuildTab
		#define GEODE_CONCEPT_CHECK_onSelectBuildTab
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectBuildTab) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSettings
		#define GEODE_CONCEPT_CHECK_onSettings
		GEODE_CONCEPT_FUNCTION_CHECK(onSettings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onStopPlaytest
		#define GEODE_CONCEPT_CHECK_onStopPlaytest
		GEODE_CONCEPT_FUNCTION_CHECK(onStopPlaytest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleGuide
		#define GEODE_CONCEPT_CHECK_onToggleGuide
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleGuide) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUpdateDeleteFilter
		#define GEODE_CONCEPT_CHECK_onUpdateDeleteFilter
		GEODE_CONCEPT_FUNCTION_CHECK(onUpdateDeleteFilter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_orderDownCustomItem
		#define GEODE_CONCEPT_CHECK_orderDownCustomItem
		GEODE_CONCEPT_FUNCTION_CHECK(orderDownCustomItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_orderUpCustomItem
		#define GEODE_CONCEPT_CHECK_orderUpCustomItem
		GEODE_CONCEPT_FUNCTION_CHECK(orderUpCustomItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pasteObjects
		#define GEODE_CONCEPT_CHECK_pasteObjects
		GEODE_CONCEPT_FUNCTION_CHECK(pasteObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playerTouchBegan
		#define GEODE_CONCEPT_CHECK_playerTouchBegan
		GEODE_CONCEPT_FUNCTION_CHECK(playerTouchBegan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playerTouchEnded
		#define GEODE_CONCEPT_CHECK_playerTouchEnded
		GEODE_CONCEPT_FUNCTION_CHECK(playerTouchEnded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playtestStopped
		#define GEODE_CONCEPT_CHECK_playtestStopped
		GEODE_CONCEPT_FUNCTION_CHECK(playtestStopped) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_positionIsInSnapped
		#define GEODE_CONCEPT_CHECK_positionIsInSnapped
		GEODE_CONCEPT_FUNCTION_CHECK(positionIsInSnapped) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_positionWithoutOffset
		#define GEODE_CONCEPT_CHECK_positionWithoutOffset
		GEODE_CONCEPT_FUNCTION_CHECK(positionWithoutOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_recreateButtonTabs
		#define GEODE_CONCEPT_CHECK_recreateButtonTabs
		GEODE_CONCEPT_FUNCTION_CHECK(recreateButtonTabs) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_redoLastAction
		#define GEODE_CONCEPT_CHECK_redoLastAction
		GEODE_CONCEPT_FUNCTION_CHECK(redoLastAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reloadCustomItems
		#define GEODE_CONCEPT_CHECK_reloadCustomItems
		GEODE_CONCEPT_FUNCTION_CHECK(reloadCustomItems) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeOffset
		#define GEODE_CONCEPT_CHECK_removeOffset
		GEODE_CONCEPT_FUNCTION_CHECK(removeOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_repositionObjectsToCenter
		#define GEODE_CONCEPT_CHECK_repositionObjectsToCenter
		GEODE_CONCEPT_FUNCTION_CHECK(repositionObjectsToCenter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetUI
		#define GEODE_CONCEPT_CHECK_resetUI
		GEODE_CONCEPT_FUNCTION_CHECK(resetUI) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rotateObjects
		#define GEODE_CONCEPT_CHECK_rotateObjects
		GEODE_CONCEPT_FUNCTION_CHECK(rotateObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rotationforCommand
		#define GEODE_CONCEPT_CHECK_rotationforCommand
		GEODE_CONCEPT_FUNCTION_CHECK(rotationforCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scaleChanged
		#define GEODE_CONCEPT_CHECK_scaleChanged
		GEODE_CONCEPT_FUNCTION_CHECK(scaleChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scaleObjects
		#define GEODE_CONCEPT_CHECK_scaleObjects
		GEODE_CONCEPT_FUNCTION_CHECK(scaleObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectBuildTab
		#define GEODE_CONCEPT_CHECK_selectBuildTab
		GEODE_CONCEPT_FUNCTION_CHECK(selectBuildTab) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectObject
		#define GEODE_CONCEPT_CHECK_selectObject
		GEODE_CONCEPT_FUNCTION_CHECK(selectObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectObjects
		#define GEODE_CONCEPT_CHECK_selectObjects
		GEODE_CONCEPT_FUNCTION_CHECK(selectObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectObjectsInRect
		#define GEODE_CONCEPT_CHECK_selectObjectsInRect
		GEODE_CONCEPT_FUNCTION_CHECK(selectObjectsInRect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setEditMode
		#define GEODE_CONCEPT_CHECK_setEditMode
		GEODE_CONCEPT_FUNCTION_CHECK(setEditMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStoredUndoObject
		#define GEODE_CONCEPT_CHECK_setStoredUndoObject
		GEODE_CONCEPT_FUNCTION_CHECK(setStoredUndoObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupCreateMenu
		#define GEODE_CONCEPT_CHECK_setupCreateMenu
		GEODE_CONCEPT_FUNCTION_CHECK(setupCreateMenu) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupDeleteMenu
		#define GEODE_CONCEPT_CHECK_setupDeleteMenu
		GEODE_CONCEPT_FUNCTION_CHECK(setupDeleteMenu) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupEditMenu
		#define GEODE_CONCEPT_CHECK_setupEditMenu
		GEODE_CONCEPT_FUNCTION_CHECK(setupEditMenu) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldDeleteObject
		#define GEODE_CONCEPT_CHECK_shouldDeleteObject
		GEODE_CONCEPT_FUNCTION_CHECK(shouldDeleteObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldSnap
		#define GEODE_CONCEPT_CHECK_shouldSnap
		GEODE_CONCEPT_FUNCTION_CHECK(shouldSnap) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showDeleteConfirmation
		#define GEODE_CONCEPT_CHECK_showDeleteConfirmation
		GEODE_CONCEPT_FUNCTION_CHECK(showDeleteConfirmation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showMaxCoinError
		#define GEODE_CONCEPT_CHECK_showMaxCoinError
		GEODE_CONCEPT_FUNCTION_CHECK(showMaxCoinError) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showMaxError
		#define GEODE_CONCEPT_CHECK_showMaxError
		GEODE_CONCEPT_FUNCTION_CHECK(showMaxError) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showUI
		#define GEODE_CONCEPT_CHECK_showUI
		GEODE_CONCEPT_FUNCTION_CHECK(showUI) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sliderChanged
		#define GEODE_CONCEPT_CHECK_sliderChanged
		GEODE_CONCEPT_FUNCTION_CHECK(sliderChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleDuplicateButton
		#define GEODE_CONCEPT_CHECK_toggleDuplicateButton
		GEODE_CONCEPT_FUNCTION_CHECK(toggleDuplicateButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleEditObjectButton
		#define GEODE_CONCEPT_CHECK_toggleEditObjectButton
		GEODE_CONCEPT_FUNCTION_CHECK(toggleEditObjectButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleEnableRotate
		#define GEODE_CONCEPT_CHECK_toggleEnableRotate
		GEODE_CONCEPT_FUNCTION_CHECK(toggleEnableRotate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleFreeMove
		#define GEODE_CONCEPT_CHECK_toggleFreeMove
		GEODE_CONCEPT_FUNCTION_CHECK(toggleFreeMove) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleGuideButton
		#define GEODE_CONCEPT_CHECK_toggleGuideButton
		GEODE_CONCEPT_FUNCTION_CHECK(toggleGuideButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleMode
		#define GEODE_CONCEPT_CHECK_toggleMode
		GEODE_CONCEPT_FUNCTION_CHECK(toggleMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleObjectInfoLabel
		#define GEODE_CONCEPT_CHECK_toggleObjectInfoLabel
		GEODE_CONCEPT_FUNCTION_CHECK(toggleObjectInfoLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleSnap
		#define GEODE_CONCEPT_CHECK_toggleSnap
		GEODE_CONCEPT_FUNCTION_CHECK(toggleSnap) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleSpecialEditButtons
		#define GEODE_CONCEPT_CHECK_toggleSpecialEditButtons
		GEODE_CONCEPT_FUNCTION_CHECK(toggleSpecialEditButtons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleSwipe
		#define GEODE_CONCEPT_CHECK_toggleSwipe
		GEODE_CONCEPT_FUNCTION_CHECK(toggleSwipe) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_transformObject
		#define GEODE_CONCEPT_CHECK_transformObject
		GEODE_CONCEPT_FUNCTION_CHECK(transformObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_transformObjectCall
		#define GEODE_CONCEPT_CHECK_transformObjectCall
		GEODE_CONCEPT_FUNCTION_CHECK(transformObjectCall) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryDeleteObject
		#define GEODE_CONCEPT_CHECK_tryDeleteObject
		GEODE_CONCEPT_FUNCTION_CHECK(tryDeleteObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryUpdateTimeMarkers
		#define GEODE_CONCEPT_CHECK_tryUpdateTimeMarkers
		GEODE_CONCEPT_FUNCTION_CHECK(tryUpdateTimeMarkers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_undoLastAction
		#define GEODE_CONCEPT_CHECK_undoLastAction
		GEODE_CONCEPT_FUNCTION_CHECK(undoLastAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateButtons
		#define GEODE_CONCEPT_CHECK_updateButtons
		GEODE_CONCEPT_FUNCTION_CHECK(updateButtons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCreateMenu
		#define GEODE_CONCEPT_CHECK_updateCreateMenu
		GEODE_CONCEPT_FUNCTION_CHECK(updateCreateMenu) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDeleteButtons
		#define GEODE_CONCEPT_CHECK_updateDeleteButtons
		GEODE_CONCEPT_FUNCTION_CHECK(updateDeleteButtons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDeleteMenu
		#define GEODE_CONCEPT_CHECK_updateDeleteMenu
		GEODE_CONCEPT_FUNCTION_CHECK(updateDeleteMenu) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateEditMenu
		#define GEODE_CONCEPT_CHECK_updateEditMenu
		GEODE_CONCEPT_FUNCTION_CHECK(updateEditMenu) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateGridNodeSize
		#define GEODE_CONCEPT_CHECK_updateGridNodeSize
		GEODE_CONCEPT_FUNCTION_CHECK(updateGridNodeSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateGroupIDLabel
		#define GEODE_CONCEPT_CHECK_updateGroupIDLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateGroupIDLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateObjectInfoLabel
		#define GEODE_CONCEPT_CHECK_updateObjectInfoLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateObjectInfoLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePercentLabel
		#define GEODE_CONCEPT_CHECK_updatePercentLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updatePercentLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePlaybackBtn
		#define GEODE_CONCEPT_CHECK_updatePlaybackBtn
		GEODE_CONCEPT_FUNCTION_CHECK(updatePlaybackBtn) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSlider
		#define GEODE_CONCEPT_CHECK_updateSlider
		GEODE_CONCEPT_FUNCTION_CHECK(updateSlider) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateZoom
		#define GEODE_CONCEPT_CHECK_updateZoom
		GEODE_CONCEPT_FUNCTION_CHECK(updateZoom) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_valueFromXPos
		#define GEODE_CONCEPT_CHECK_valueFromXPos
		GEODE_CONCEPT_FUNCTION_CHECK(valueFromXPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_xPosFromValue
		#define GEODE_CONCEPT_CHECK_xPosFromValue
		GEODE_CONCEPT_FUNCTION_CHECK(xPosFromValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_zoomGameLayer
		#define GEODE_CONCEPT_CHECK_zoomGameLayer
		GEODE_CONCEPT_FUNCTION_CHECK(zoomGameLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_zoomIn
		#define GEODE_CONCEPT_CHECK_zoomIn
		GEODE_CONCEPT_FUNCTION_CHECK(zoomIn) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_zoomOut
		#define GEODE_CONCEPT_CHECK_zoomOut
		GEODE_CONCEPT_FUNCTION_CHECK(zoomOut) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchBegan
		#define GEODE_CONCEPT_CHECK_ccTouchBegan
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchBegan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchMoved
		#define GEODE_CONCEPT_CHECK_ccTouchMoved
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchMoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchEnded
		#define GEODE_CONCEPT_CHECK_ccTouchEnded
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchEnded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchCancelled
		#define GEODE_CONCEPT_CHECK_ccTouchCancelled
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchCancelled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		#define GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		GEODE_CONCEPT_FUNCTION_CHECK(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyDown
		#define GEODE_CONCEPT_CHECK_keyDown
		GEODE_CONCEPT_FUNCTION_CHECK(keyDown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_songStateChanged
		#define GEODE_CONCEPT_CHECK_songStateChanged
		GEODE_CONCEPT_FUNCTION_CHECK(songStateChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyUp
		#define GEODE_CONCEPT_CHECK_keyUp
		GEODE_CONCEPT_FUNCTION_CHECK(keyUp) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scrollWheel
		#define GEODE_CONCEPT_CHECK_scrollWheel
		GEODE_CONCEPT_FUNCTION_CHECK(scrollWheel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_angleChangeBegin
		#define GEODE_CONCEPT_CHECK_angleChangeBegin
		GEODE_CONCEPT_FUNCTION_CHECK(angleChangeBegin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_angleChangeEnded
		#define GEODE_CONCEPT_CHECK_angleChangeEnded
		GEODE_CONCEPT_FUNCTION_CHECK(angleChangeEnded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_angleChanged
		#define GEODE_CONCEPT_CHECK_angleChanged
		GEODE_CONCEPT_FUNCTION_CHECK(angleChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateScaleControl
		#define GEODE_CONCEPT_CHECK_updateScaleControl
		GEODE_CONCEPT_FUNCTION_CHECK(updateScaleControl) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scaleChangeBegin
		#define GEODE_CONCEPT_CHECK_scaleChangeBegin
		GEODE_CONCEPT_FUNCTION_CHECK(scaleChangeBegin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scaleChangeEnded
		#define GEODE_CONCEPT_CHECK_scaleChangeEnded
		GEODE_CONCEPT_FUNCTION_CHECK(scaleChangeEnded) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EditorUI> : ModifyBase<ModifyDerive<Der, EditorUI>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EditorUI>>;
		using ModifyBase<ModifyDerive<Der, EditorUI>>::ModifyBase;
		using Base = EditorUI;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, create, LevelEditorLayer*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, activateRotationControl, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, activateScaleControl, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, addSnapPosition, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, applyOffset, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, applySpecialOffset, cocos2d::CCPoint, GameObject*, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, changeSelectedObjects, cocos2d::CCArray*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, clickOnPosition, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, colorSelectClosed, cocos2d::ccColor3B)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, constrainGameLayerPosition, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, constrainGameLayerPosition, float, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, copyObjects, cocos2d::CCArray*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, createCustomItems, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, createMoveMenu, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, createUndoSelectObject, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, deactivateRotationControl, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, deactivateScaleControl, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, deleteObject, GameObject*, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, deselectAll, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, deselectObject, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, deselectObject, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, deselectTargetPortals, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, disableButton, CreateMenuItem*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, editButtonUsable, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, editGroup, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, editObject, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, enableButton, CreateMenuItem*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, findSnapObject, cocos2d::CCArray*, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, findSnapObject, cocos2d::CCPoint, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, flipObjectsX, cocos2d::CCArray*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, flipObjectsY, cocos2d::CCArray*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, getButton, char const*, int, cocos2d::SEL_MenuHandler, cocos2d::CCMenu*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, getCreateBtn, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, getCreateMenuItemButton, cocos2d::CCSprite*, cocos2d::SEL_MenuHandler, cocos2d::CCMenu*, float, int, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, getCycledObject, cocos2d::CCArray*, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, getEditMode, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, getGridSnappedPos, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, getGroupCenter, cocos2d::CCArray*, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, getLimitedPosition, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, getLimitY, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, getModeBtn, char const*, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, getMusicGuideActive, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, getRelativeOffset, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, getSelectedObjects, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, getSpriteButton, char const*, cocos2d::SEL_MenuHandler, cocos2d::CCMenu*, float, int, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, getSpriteButton, char const*, cocos2d::SEL_MenuHandler, cocos2d::CCMenu*, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, getSpriteButton, cocos2d::CCSprite*, cocos2d::SEL_MenuHandler, cocos2d::CCMenu*, float, int, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, getStoredUndoObject, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, getTouchPoint, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, getXMin, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, init, LevelEditorLayer*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, isSpecialSnapObject, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, menuItemFromObjectString, gd::string, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, moveForCommand, EditCommand)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, moveGamelayer, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, moveObject, GameObject*, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, moveObjectCall, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, moveObjectCall, EditCommand)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, offsetForKey, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, onCopy, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, onCreate, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, onCreateButton, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, onCreateObject, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, onDelete, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, onDeleteAll, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, onDeleteCustomItem, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, onDeleteInfo, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, onDeleteSelected, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, onDeleteSelectedType, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, onDeleteStartPos, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, onDeselectAll, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, onDuplicate, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, onGroupDown, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, onGroupUp, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, onNewCustomItem, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, onPaste, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, onPause, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, onPlayback, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, onPlaytest, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, onSelectBuildTab, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, onSettings, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, onStopPlaytest, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, onToggleGuide, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, onUpdateDeleteFilter, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, orderDownCustomItem, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, orderUpCustomItem, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, pasteObjects, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, playerTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, playerTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, playtestStopped, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, positionIsInSnapped, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, positionWithoutOffset, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, recreateButtonTabs, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, redoLastAction, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, reloadCustomItems, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, removeOffset, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, repositionObjectsToCenter, cocos2d::CCArray*, cocos2d::CCPoint, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, resetUI, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, rotateObjects, cocos2d::CCArray*, float, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, rotationforCommand, EditCommand)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, scaleChanged, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, scaleObjects, cocos2d::CCArray*, float, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, selectBuildTab, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, selectObject, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, selectObjects, cocos2d::CCArray*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, selectObjectsInRect, cocos2d::CCRect)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, setEditMode, EditMode)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, setStoredUndoObject, UndoObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, setupCreateMenu, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, setupDeleteMenu, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, setupEditMenu, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, shouldDeleteObject, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, shouldSnap, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, showDeleteConfirmation, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, showMaxCoinError, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, showMaxError, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, showUI, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, sliderChanged, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, toggleDuplicateButton, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, toggleEditObjectButton, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, toggleEnableRotate, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, toggleFreeMove, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, toggleGuideButton, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, toggleMode, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, toggleObjectInfoLabel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, toggleSnap, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, toggleSpecialEditButtons, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, toggleSwipe, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, transformObject, GameObject*, EditCommand, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, transformObjectCall, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, transformObjectCall, EditCommand)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, tryDeleteObject, GameObject*, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, tryUpdateTimeMarkers, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, undoLastAction, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, updateButtons, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, updateCreateMenu, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, updateDeleteButtons, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, updateDeleteMenu, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, updateEditMenu, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, updateGridNodeSize, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, updateGridNodeSize, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, updateGroupIDLabel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, updateObjectInfoLabel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, updatePercentLabel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, updatePlaybackBtn, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, updateSlider, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, updateZoom, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, valueFromXPos, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, xPosFromValue, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, zoomGameLayer, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, zoomIn, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, zoomOut, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, draw, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, registerWithTouchDispatcher, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, keyBackClicked, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, keyDown, cocos2d::enumKeyCodes)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, FLAlert_Clicked, FLAlertLayer*, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, songStateChanged, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, keyUp, cocos2d::enumKeyCodes)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, scrollWheel, float, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, angleChangeBegin, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, angleChangeEnded, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, angleChanged, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, updateScaleControl, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, scaleChangeBegin, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorUI, scaleChangeEnded, )
		}
	};
}
