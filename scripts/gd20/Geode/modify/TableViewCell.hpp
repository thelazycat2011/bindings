#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/TableViewCell.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_deleteButtonSelector
		#define GEODE_STATICS_deleteButtonSelector
		GEODE_AS_STATIC_FUNCTION(deleteButtonSelector) 
	#endif

	#ifndef GEODE_STATICS_getCellIdentifier
		#define GEODE_STATICS_getCellIdentifier
		GEODE_AS_STATIC_FUNCTION(getCellIdentifier) 
	#endif

	#ifndef GEODE_STATICS_getDelBtnColor
		#define GEODE_STATICS_getDelBtnColor
		GEODE_AS_STATIC_FUNCTION(getDelBtnColor) 
	#endif

	#ifndef GEODE_STATICS_getDeleteButton
		#define GEODE_STATICS_getDeleteButton
		GEODE_AS_STATIC_FUNCTION(getDeleteButton) 
	#endif

	#ifndef GEODE_STATICS_getEditable
		#define GEODE_STATICS_getEditable
		GEODE_AS_STATIC_FUNCTION(getEditable) 
	#endif

	#ifndef GEODE_STATICS_isDeleteButtonShow
		#define GEODE_STATICS_isDeleteButtonShow
		GEODE_AS_STATIC_FUNCTION(isDeleteButtonShow) 
	#endif

	#ifndef GEODE_STATICS_resetDeleteButtonPosition
		#define GEODE_STATICS_resetDeleteButtonPosition
		GEODE_AS_STATIC_FUNCTION(resetDeleteButtonPosition) 
	#endif

	#ifndef GEODE_STATICS_setCellIdentifier
		#define GEODE_STATICS_setCellIdentifier
		GEODE_AS_STATIC_FUNCTION(setCellIdentifier) 
	#endif

	#ifndef GEODE_STATICS_setDelBtnColor
		#define GEODE_STATICS_setDelBtnColor
		GEODE_AS_STATIC_FUNCTION(setDelBtnColor) 
	#endif

	#ifndef GEODE_STATICS_setDeleteButton
		#define GEODE_STATICS_setDeleteButton
		GEODE_AS_STATIC_FUNCTION(setDeleteButton) 
	#endif

	#ifndef GEODE_STATICS_setEditable
		#define GEODE_STATICS_setEditable
		GEODE_AS_STATIC_FUNCTION(setEditable) 
	#endif

	#ifndef GEODE_STATICS_showDeleteButton
		#define GEODE_STATICS_showDeleteButton
		GEODE_AS_STATIC_FUNCTION(showDeleteButton) 
	#endif

	#ifndef GEODE_STATICS_updateVisibility
		#define GEODE_STATICS_updateVisibility
		GEODE_AS_STATIC_FUNCTION(updateVisibility) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_deleteButtonSelector
		#define GEODE_CONCEPT_CHECK_deleteButtonSelector
		GEODE_CONCEPT_FUNCTION_CHECK(deleteButtonSelector) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCellIdentifier
		#define GEODE_CONCEPT_CHECK_getCellIdentifier
		GEODE_CONCEPT_FUNCTION_CHECK(getCellIdentifier) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDelBtnColor
		#define GEODE_CONCEPT_CHECK_getDelBtnColor
		GEODE_CONCEPT_FUNCTION_CHECK(getDelBtnColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDeleteButton
		#define GEODE_CONCEPT_CHECK_getDeleteButton
		GEODE_CONCEPT_FUNCTION_CHECK(getDeleteButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEditable
		#define GEODE_CONCEPT_CHECK_getEditable
		GEODE_CONCEPT_FUNCTION_CHECK(getEditable) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isDeleteButtonShow
		#define GEODE_CONCEPT_CHECK_isDeleteButtonShow
		GEODE_CONCEPT_FUNCTION_CHECK(isDeleteButtonShow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetDeleteButtonPosition
		#define GEODE_CONCEPT_CHECK_resetDeleteButtonPosition
		GEODE_CONCEPT_FUNCTION_CHECK(resetDeleteButtonPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCellIdentifier
		#define GEODE_CONCEPT_CHECK_setCellIdentifier
		GEODE_CONCEPT_FUNCTION_CHECK(setCellIdentifier) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDelBtnColor
		#define GEODE_CONCEPT_CHECK_setDelBtnColor
		GEODE_CONCEPT_FUNCTION_CHECK(setDelBtnColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDeleteButton
		#define GEODE_CONCEPT_CHECK_setDeleteButton
		GEODE_CONCEPT_FUNCTION_CHECK(setDeleteButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setEditable
		#define GEODE_CONCEPT_CHECK_setEditable
		GEODE_CONCEPT_FUNCTION_CHECK(setEditable) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showDeleteButton
		#define GEODE_CONCEPT_CHECK_showDeleteButton
		GEODE_CONCEPT_FUNCTION_CHECK(showDeleteButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateVisibility
		#define GEODE_CONCEPT_CHECK_updateVisibility
		GEODE_CONCEPT_FUNCTION_CHECK(updateVisibility) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, TableViewCell> : ModifyBase<ModifyDerive<Der, TableViewCell>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, TableViewCell>>;
		using ModifyBase<ModifyDerive<Der, TableViewCell>>::ModifyBase;
		using Base = TableViewCell;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableViewCell, deleteButtonSelector, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableViewCell, getCellIdentifier, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableViewCell, getDelBtnColor, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableViewCell, getDeleteButton, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableViewCell, getEditable, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableViewCell, isDeleteButtonShow, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableViewCell, resetDeleteButtonPosition, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableViewCell, setCellIdentifier, gd::string const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableViewCell, setDelBtnColor, cocos2d::ccColor3B)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableViewCell, setDeleteButton, cocos2d::CCMenuItem*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableViewCell, setEditable, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableViewCell, showDeleteButton, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableViewCell, updateVisibility, )
		}
	};
}
