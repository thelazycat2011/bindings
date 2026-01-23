#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_compileShader
		#define GEODE_STATICS_compileShader
		GEODE_AS_STATIC_FUNCTION(compileShader) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_compileShader
		#define GEODE_CONCEPT_CHECK_compileShader
		GEODE_CONCEPT_FUNCTION_CHECK(compileShader) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCGLProgram> : ModifyBase<ModifyDerive<Der, cocos2d::CCGLProgram>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCGLProgram>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCGLProgram>>::ModifyBase;
		using Base = cocos2d::CCGLProgram;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int*, unsigned int, const char*>::func(&cocos2d::CCGLProgram::compileShader)), Thiscall, cocos2d::CCGLProgram, compileShader, unsigned int*, unsigned int, const char*)
		}
	};
}
