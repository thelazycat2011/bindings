#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ColoredSection.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getCol
		#define GEODE_STATICS_getCol
		GEODE_AS_STATIC_FUNCTION(getCol) 
	#endif

	#ifndef GEODE_STATICS_getEndPos
		#define GEODE_STATICS_getEndPos
		GEODE_AS_STATIC_FUNCTION(getEndPos) 
	#endif

	#ifndef GEODE_STATICS_getStartPos
		#define GEODE_STATICS_getStartPos
		GEODE_AS_STATIC_FUNCTION(getStartPos) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setCol
		#define GEODE_STATICS_setCol
		GEODE_AS_STATIC_FUNCTION(setCol) 
	#endif

	#ifndef GEODE_STATICS_setEndPos
		#define GEODE_STATICS_setEndPos
		GEODE_AS_STATIC_FUNCTION(setEndPos) 
	#endif

	#ifndef GEODE_STATICS_setStartPos
		#define GEODE_STATICS_setStartPos
		GEODE_AS_STATIC_FUNCTION(setStartPos) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCol
		#define GEODE_CONCEPT_CHECK_getCol
		GEODE_CONCEPT_FUNCTION_CHECK(getCol) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEndPos
		#define GEODE_CONCEPT_CHECK_getEndPos
		GEODE_CONCEPT_FUNCTION_CHECK(getEndPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStartPos
		#define GEODE_CONCEPT_CHECK_getStartPos
		GEODE_CONCEPT_FUNCTION_CHECK(getStartPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCol
		#define GEODE_CONCEPT_CHECK_setCol
		GEODE_CONCEPT_FUNCTION_CHECK(setCol) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setEndPos
		#define GEODE_CONCEPT_CHECK_setEndPos
		GEODE_CONCEPT_FUNCTION_CHECK(setEndPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStartPos
		#define GEODE_CONCEPT_CHECK_setStartPos
		GEODE_CONCEPT_FUNCTION_CHECK(setStartPos) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ColoredSection> : ModifyBase<ModifyDerive<Der, ColoredSection>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ColoredSection>>;
		using ModifyBase<ModifyDerive<Der, ColoredSection>>::ModifyBase;
		using Base = ColoredSection;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColoredSection, create, cocos2d::ccColor3B, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColoredSection, getCol, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColoredSection, getEndPos, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColoredSection, getStartPos, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColoredSection, init, cocos2d::ccColor3B, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColoredSection, setCol, cocos2d::ccColor3B)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColoredSection, setEndPos, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ColoredSection, setStartPos, int)
		}
	};
}
