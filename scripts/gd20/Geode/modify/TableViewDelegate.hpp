#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/TableViewDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_willTweenToIndexPath
		#define GEODE_STATICS_willTweenToIndexPath
		GEODE_AS_STATIC_FUNCTION(willTweenToIndexPath) 
	#endif

	#ifndef GEODE_STATICS_didEndTweenToIndexPath
		#define GEODE_STATICS_didEndTweenToIndexPath
		GEODE_AS_STATIC_FUNCTION(didEndTweenToIndexPath) 
	#endif

	#ifndef GEODE_STATICS_TableViewWillDisplayCellForRowAtIndexPath
		#define GEODE_STATICS_TableViewWillDisplayCellForRowAtIndexPath
		GEODE_AS_STATIC_FUNCTION(TableViewWillDisplayCellForRowAtIndexPath) 
	#endif

	#ifndef GEODE_STATICS_TableViewDidDisplayCellForRowAtIndexPath
		#define GEODE_STATICS_TableViewDidDisplayCellForRowAtIndexPath
		GEODE_AS_STATIC_FUNCTION(TableViewDidDisplayCellForRowAtIndexPath) 
	#endif

	#ifndef GEODE_STATICS_TableViewWillReloadCellForRowAtIndexPath
		#define GEODE_STATICS_TableViewWillReloadCellForRowAtIndexPath
		GEODE_AS_STATIC_FUNCTION(TableViewWillReloadCellForRowAtIndexPath) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_willTweenToIndexPath
		#define GEODE_CONCEPT_CHECK_willTweenToIndexPath
		GEODE_CONCEPT_FUNCTION_CHECK(willTweenToIndexPath) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_didEndTweenToIndexPath
		#define GEODE_CONCEPT_CHECK_didEndTweenToIndexPath
		GEODE_CONCEPT_FUNCTION_CHECK(didEndTweenToIndexPath) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_TableViewWillDisplayCellForRowAtIndexPath
		#define GEODE_CONCEPT_CHECK_TableViewWillDisplayCellForRowAtIndexPath
		GEODE_CONCEPT_FUNCTION_CHECK(TableViewWillDisplayCellForRowAtIndexPath) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_TableViewDidDisplayCellForRowAtIndexPath
		#define GEODE_CONCEPT_CHECK_TableViewDidDisplayCellForRowAtIndexPath
		GEODE_CONCEPT_FUNCTION_CHECK(TableViewDidDisplayCellForRowAtIndexPath) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_TableViewWillReloadCellForRowAtIndexPath
		#define GEODE_CONCEPT_CHECK_TableViewWillReloadCellForRowAtIndexPath
		GEODE_CONCEPT_FUNCTION_CHECK(TableViewWillReloadCellForRowAtIndexPath) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pure_virtual_00a3180c
		#define GEODE_CONCEPT_CHECK_pure_virtual_00a3180c
		GEODE_CONCEPT_FUNCTION_CHECK(pure_virtual_00a3180c) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pure_virtual_00a31810
		#define GEODE_CONCEPT_CHECK_pure_virtual_00a31810
		GEODE_CONCEPT_FUNCTION_CHECK(pure_virtual_00a31810) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, TableViewDelegate> : ModifyBase<ModifyDerive<Der, TableViewDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, TableViewDelegate>>;
		using ModifyBase<ModifyDerive<Der, TableViewDelegate>>::ModifyBase;
		using Base = TableViewDelegate;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableViewDelegate, willTweenToIndexPath, CCIndexPath&, TableViewCell*, TableView*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableViewDelegate, didEndTweenToIndexPath, CCIndexPath&, TableView*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableViewDelegate, TableViewWillDisplayCellForRowAtIndexPath, CCIndexPath&, TableViewCell*, TableView*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableViewDelegate, TableViewDidDisplayCellForRowAtIndexPath, CCIndexPath&, TableViewCell*, TableView*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableViewDelegate, TableViewWillReloadCellForRowAtIndexPath, CCIndexPath&, TableViewCell*, TableView*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TableViewDelegate, pure_virtual_00a3180c, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TableViewDelegate, pure_virtual_00a31810, )
		}
	};
}
