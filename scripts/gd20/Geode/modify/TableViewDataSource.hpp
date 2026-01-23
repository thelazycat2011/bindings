#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/TableViewDataSource.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_numberOfSectionsInTableView
		#define GEODE_STATICS_numberOfSectionsInTableView
		GEODE_AS_STATIC_FUNCTION(numberOfSectionsInTableView) 
	#endif

	#ifndef GEODE_STATICS_TableViewCommitCellEditingStyleForRowAtIndexPath
		#define GEODE_STATICS_TableViewCommitCellEditingStyleForRowAtIndexPath
		GEODE_AS_STATIC_FUNCTION(TableViewCommitCellEditingStyleForRowAtIndexPath) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_pure_virtual_00a31820
		#define GEODE_CONCEPT_CHECK_pure_virtual_00a31820
		GEODE_CONCEPT_FUNCTION_CHECK(pure_virtual_00a31820) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_numberOfSectionsInTableView
		#define GEODE_CONCEPT_CHECK_numberOfSectionsInTableView
		GEODE_CONCEPT_FUNCTION_CHECK(numberOfSectionsInTableView) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_TableViewCommitCellEditingStyleForRowAtIndexPath
		#define GEODE_CONCEPT_CHECK_TableViewCommitCellEditingStyleForRowAtIndexPath
		GEODE_CONCEPT_FUNCTION_CHECK(TableViewCommitCellEditingStyleForRowAtIndexPath) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pure_virtual_00a3182c
		#define GEODE_CONCEPT_CHECK_pure_virtual_00a3182c
		GEODE_CONCEPT_FUNCTION_CHECK(pure_virtual_00a3182c) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, TableViewDataSource> : ModifyBase<ModifyDerive<Der, TableViewDataSource>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, TableViewDataSource>>;
		using ModifyBase<ModifyDerive<Der, TableViewDataSource>>::ModifyBase;
		using Base = TableViewDataSource;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TableViewDataSource, pure_virtual_00a31820, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableViewDataSource, numberOfSectionsInTableView, TableView*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TableViewDataSource, TableViewCommitCellEditingStyleForRowAtIndexPath, TableView*, TableViewCellEditingStyle, CCIndexPath&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TableViewDataSource, pure_virtual_00a3182c, )
		}
	};
}
