#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetGroupIDLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_addGroupID
		#define GEODE_STATICS_addGroupID
		GEODE_AS_STATIC_FUNCTION(addGroupID) 
	#endif

	#ifndef GEODE_STATICS_callRemoveFromGroup
		#define GEODE_STATICS_callRemoveFromGroup
		GEODE_AS_STATIC_FUNCTION(callRemoveFromGroup) 
	#endif

	#ifndef GEODE_STATICS_determineStartValues
		#define GEODE_STATICS_determineStartValues
		GEODE_AS_STATIC_FUNCTION(determineStartValues) 
	#endif

	#ifndef GEODE_STATICS_getNextFreeGroupID
		#define GEODE_STATICS_getNextFreeGroupID
		GEODE_AS_STATIC_FUNCTION(getNextFreeGroupID) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onAddGroup
		#define GEODE_STATICS_onAddGroup
		GEODE_AS_STATIC_FUNCTION(onAddGroup) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onCopy
		#define GEODE_STATICS_onCopy
		GEODE_AS_STATIC_FUNCTION(onCopy) 
	#endif

	#ifndef GEODE_STATICS_onDontFade
		#define GEODE_STATICS_onDontFade
		GEODE_AS_STATIC_FUNCTION(onDontFade) 
	#endif

	#ifndef GEODE_STATICS_onEditorLayer
		#define GEODE_STATICS_onEditorLayer
		GEODE_AS_STATIC_FUNCTION(onEditorLayer) 
	#endif

	#ifndef GEODE_STATICS_onEditorLayer2
		#define GEODE_STATICS_onEditorLayer2
		GEODE_AS_STATIC_FUNCTION(onEditorLayer2) 
	#endif

	#ifndef GEODE_STATICS_onGroupID
		#define GEODE_STATICS_onGroupID
		GEODE_AS_STATIC_FUNCTION(onGroupID) 
	#endif

	#ifndef GEODE_STATICS_onNextGroupID1
		#define GEODE_STATICS_onNextGroupID1
		GEODE_AS_STATIC_FUNCTION(onNextGroupID1) 
	#endif

	#ifndef GEODE_STATICS_onPaste
		#define GEODE_STATICS_onPaste
		GEODE_AS_STATIC_FUNCTION(onPaste) 
	#endif

	#ifndef GEODE_STATICS_onRemoveFromGroup
		#define GEODE_STATICS_onRemoveFromGroup
		GEODE_AS_STATIC_FUNCTION(onRemoveFromGroup) 
	#endif

	#ifndef GEODE_STATICS_onSmoothEase
		#define GEODE_STATICS_onSmoothEase
		GEODE_AS_STATIC_FUNCTION(onSmoothEase) 
	#endif

	#ifndef GEODE_STATICS_onToggleGroupParent
		#define GEODE_STATICS_onToggleGroupParent
		GEODE_AS_STATIC_FUNCTION(onToggleGroupParent) 
	#endif

	#ifndef GEODE_STATICS_onZLayer
		#define GEODE_STATICS_onZLayer
		GEODE_AS_STATIC_FUNCTION(onZLayer) 
	#endif

	#ifndef GEODE_STATICS_onZOrder
		#define GEODE_STATICS_onZOrder
		GEODE_AS_STATIC_FUNCTION(onZOrder) 
	#endif

	#ifndef GEODE_STATICS_removeGroupID
		#define GEODE_STATICS_removeGroupID
		GEODE_AS_STATIC_FUNCTION(removeGroupID) 
	#endif

	#ifndef GEODE_STATICS_setNextFreeGroupID
		#define GEODE_STATICS_setNextFreeGroupID
		GEODE_AS_STATIC_FUNCTION(setNextFreeGroupID) 
	#endif

	#ifndef GEODE_STATICS_updateEditorLabel
		#define GEODE_STATICS_updateEditorLabel
		GEODE_AS_STATIC_FUNCTION(updateEditorLabel) 
	#endif

	#ifndef GEODE_STATICS_updateEditorLabel2
		#define GEODE_STATICS_updateEditorLabel2
		GEODE_AS_STATIC_FUNCTION(updateEditorLabel2) 
	#endif

	#ifndef GEODE_STATICS_updateEditorLayerID
		#define GEODE_STATICS_updateEditorLayerID
		GEODE_AS_STATIC_FUNCTION(updateEditorLayerID) 
	#endif

	#ifndef GEODE_STATICS_updateEditorLayerID2
		#define GEODE_STATICS_updateEditorLayerID2
		GEODE_AS_STATIC_FUNCTION(updateEditorLayerID2) 
	#endif

	#ifndef GEODE_STATICS_updateGroupIDButtons
		#define GEODE_STATICS_updateGroupIDButtons
		GEODE_AS_STATIC_FUNCTION(updateGroupIDButtons) 
	#endif

	#ifndef GEODE_STATICS_updateGroupIDLabel
		#define GEODE_STATICS_updateGroupIDLabel
		GEODE_AS_STATIC_FUNCTION(updateGroupIDLabel) 
	#endif

	#ifndef GEODE_STATICS_updateZLayerButtons
		#define GEODE_STATICS_updateZLayerButtons
		GEODE_AS_STATIC_FUNCTION(updateZLayerButtons) 
	#endif

	#ifndef GEODE_STATICS_updateZOrder
		#define GEODE_STATICS_updateZOrder
		GEODE_AS_STATIC_FUNCTION(updateZOrder) 
	#endif

	#ifndef GEODE_STATICS_updateZOrderLabel
		#define GEODE_STATICS_updateZOrderLabel
		GEODE_AS_STATIC_FUNCTION(updateZOrderLabel) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_textInputClosed
		#define GEODE_STATICS_textInputClosed
		GEODE_AS_STATIC_FUNCTION(textInputClosed) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addGroupID
		#define GEODE_CONCEPT_CHECK_addGroupID
		GEODE_CONCEPT_FUNCTION_CHECK(addGroupID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_callRemoveFromGroup
		#define GEODE_CONCEPT_CHECK_callRemoveFromGroup
		GEODE_CONCEPT_FUNCTION_CHECK(callRemoveFromGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_determineStartValues
		#define GEODE_CONCEPT_CHECK_determineStartValues
		GEODE_CONCEPT_FUNCTION_CHECK(determineStartValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNextFreeGroupID
		#define GEODE_CONCEPT_CHECK_getNextFreeGroupID
		GEODE_CONCEPT_FUNCTION_CHECK(getNextFreeGroupID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAddGroup
		#define GEODE_CONCEPT_CHECK_onAddGroup
		GEODE_CONCEPT_FUNCTION_CHECK(onAddGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCopy
		#define GEODE_CONCEPT_CHECK_onCopy
		GEODE_CONCEPT_FUNCTION_CHECK(onCopy) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDontFade
		#define GEODE_CONCEPT_CHECK_onDontFade
		GEODE_CONCEPT_FUNCTION_CHECK(onDontFade) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEditorLayer
		#define GEODE_CONCEPT_CHECK_onEditorLayer
		GEODE_CONCEPT_FUNCTION_CHECK(onEditorLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEditorLayer2
		#define GEODE_CONCEPT_CHECK_onEditorLayer2
		GEODE_CONCEPT_FUNCTION_CHECK(onEditorLayer2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGroupID
		#define GEODE_CONCEPT_CHECK_onGroupID
		GEODE_CONCEPT_FUNCTION_CHECK(onGroupID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNextGroupID1
		#define GEODE_CONCEPT_CHECK_onNextGroupID1
		GEODE_CONCEPT_FUNCTION_CHECK(onNextGroupID1) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPaste
		#define GEODE_CONCEPT_CHECK_onPaste
		GEODE_CONCEPT_FUNCTION_CHECK(onPaste) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRemoveFromGroup
		#define GEODE_CONCEPT_CHECK_onRemoveFromGroup
		GEODE_CONCEPT_FUNCTION_CHECK(onRemoveFromGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSmoothEase
		#define GEODE_CONCEPT_CHECK_onSmoothEase
		GEODE_CONCEPT_FUNCTION_CHECK(onSmoothEase) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleGroupParent
		#define GEODE_CONCEPT_CHECK_onToggleGroupParent
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleGroupParent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onZLayer
		#define GEODE_CONCEPT_CHECK_onZLayer
		GEODE_CONCEPT_FUNCTION_CHECK(onZLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onZOrder
		#define GEODE_CONCEPT_CHECK_onZOrder
		GEODE_CONCEPT_FUNCTION_CHECK(onZOrder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeGroupID
		#define GEODE_CONCEPT_CHECK_removeGroupID
		GEODE_CONCEPT_FUNCTION_CHECK(removeGroupID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setNextFreeGroupID
		#define GEODE_CONCEPT_CHECK_setNextFreeGroupID
		GEODE_CONCEPT_FUNCTION_CHECK(setNextFreeGroupID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateEditorLabel
		#define GEODE_CONCEPT_CHECK_updateEditorLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateEditorLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateEditorLabel2
		#define GEODE_CONCEPT_CHECK_updateEditorLabel2
		GEODE_CONCEPT_FUNCTION_CHECK(updateEditorLabel2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateEditorLayerID
		#define GEODE_CONCEPT_CHECK_updateEditorLayerID
		GEODE_CONCEPT_FUNCTION_CHECK(updateEditorLayerID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateEditorLayerID2
		#define GEODE_CONCEPT_CHECK_updateEditorLayerID2
		GEODE_CONCEPT_FUNCTION_CHECK(updateEditorLayerID2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateGroupIDButtons
		#define GEODE_CONCEPT_CHECK_updateGroupIDButtons
		GEODE_CONCEPT_FUNCTION_CHECK(updateGroupIDButtons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateGroupIDLabel
		#define GEODE_CONCEPT_CHECK_updateGroupIDLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateGroupIDLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateZLayerButtons
		#define GEODE_CONCEPT_CHECK_updateZLayerButtons
		GEODE_CONCEPT_FUNCTION_CHECK(updateZLayerButtons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateZOrder
		#define GEODE_CONCEPT_CHECK_updateZOrder
		GEODE_CONCEPT_FUNCTION_CHECK(updateZOrder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateZOrderLabel
		#define GEODE_CONCEPT_CHECK_updateZOrderLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateZOrderLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputClosed
		#define GEODE_CONCEPT_CHECK_textInputClosed
		GEODE_CONCEPT_FUNCTION_CHECK(textInputClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetGroupIDLayer> : ModifyBase<ModifyDerive<Der, SetGroupIDLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetGroupIDLayer>>;
		using ModifyBase<ModifyDerive<Der, SetGroupIDLayer>>::ModifyBase;
		using Base = SetGroupIDLayer;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetGroupIDLayer, create, GameObject*, cocos2d::CCArray*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetGroupIDLayer, addGroupID, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetGroupIDLayer, callRemoveFromGroup, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetGroupIDLayer, determineStartValues, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetGroupIDLayer, getNextFreeGroupID, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetGroupIDLayer, init, GameObject*, cocos2d::CCArray*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetGroupIDLayer, onAddGroup, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetGroupIDLayer, onClose, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetGroupIDLayer, onCopy, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetGroupIDLayer, onDontFade, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetGroupIDLayer, onEditorLayer, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetGroupIDLayer, onEditorLayer2, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetGroupIDLayer, onGroupID, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetGroupIDLayer, onNextGroupID1, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetGroupIDLayer, onPaste, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetGroupIDLayer, onRemoveFromGroup, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetGroupIDLayer, onSmoothEase, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetGroupIDLayer, onToggleGroupParent, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetGroupIDLayer, onZLayer, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetGroupIDLayer, onZOrder, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetGroupIDLayer, removeGroupID, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetGroupIDLayer, setNextFreeGroupID, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetGroupIDLayer, updateEditorLabel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetGroupIDLayer, updateEditorLabel2, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetGroupIDLayer, updateEditorLayerID, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetGroupIDLayer, updateEditorLayerID2, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetGroupIDLayer, updateGroupIDButtons, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetGroupIDLayer, updateGroupIDLabel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetGroupIDLayer, updateZLayerButtons, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetGroupIDLayer, updateZOrder, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetGroupIDLayer, updateZOrderLabel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetGroupIDLayer, keyBackClicked, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetGroupIDLayer, textInputClosed, CCTextInputNode*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetGroupIDLayer, textChanged, CCTextInputNode*)
		}
	};
}
