#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/PointNode.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getPoint
		#define GEODE_STATICS_getPoint
		GEODE_AS_STATIC_FUNCTION(getPoint) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setPoint
		#define GEODE_STATICS_setPoint
		GEODE_AS_STATIC_FUNCTION(setPoint) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPoint
		#define GEODE_CONCEPT_CHECK_getPoint
		GEODE_CONCEPT_FUNCTION_CHECK(getPoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPoint
		#define GEODE_CONCEPT_CHECK_setPoint
		GEODE_CONCEPT_FUNCTION_CHECK(setPoint) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, PointNode> : ModifyBase<ModifyDerive<Der, PointNode>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, PointNode>>;
		using ModifyBase<ModifyDerive<Der, PointNode>>::ModifyBase;
		using Base = PointNode;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PointNode, create, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PointNode, getPoint, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PointNode, init, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PointNode, setPoint, cocos2d::CCPoint)
		}
	};
}
