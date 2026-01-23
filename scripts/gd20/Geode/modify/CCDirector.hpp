#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_drawScene
		#define GEODE_STATICS_drawScene
		GEODE_AS_STATIC_FUNCTION(drawScene) 
	#endif

	#ifndef GEODE_STATICS_setContentScaleFactor
		#define GEODE_STATICS_setContentScaleFactor
		GEODE_AS_STATIC_FUNCTION(setContentScaleFactor) 
	#endif

	#ifndef GEODE_STATICS_setupScreenScale
		#define GEODE_STATICS_setupScreenScale
		GEODE_AS_STATIC_FUNCTION(setupScreenScale) 
	#endif

	#ifndef GEODE_STATICS_updateContentScale
		#define GEODE_STATICS_updateContentScale
		GEODE_AS_STATIC_FUNCTION(updateContentScale) 
	#endif

	#ifndef GEODE_STATICS_updateScreenScale
		#define GEODE_STATICS_updateScreenScale
		GEODE_AS_STATIC_FUNCTION(updateScreenScale) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_drawScene
		#define GEODE_CONCEPT_CHECK_drawScene
		GEODE_CONCEPT_FUNCTION_CHECK(drawScene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setContentScaleFactor
		#define GEODE_CONCEPT_CHECK_setContentScaleFactor
		GEODE_CONCEPT_FUNCTION_CHECK(setContentScaleFactor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupScreenScale
		#define GEODE_CONCEPT_CHECK_setupScreenScale
		GEODE_CONCEPT_FUNCTION_CHECK(setupScreenScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateContentScale
		#define GEODE_CONCEPT_CHECK_updateContentScale
		GEODE_CONCEPT_FUNCTION_CHECK(updateContentScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateScreenScale
		#define GEODE_CONCEPT_CHECK_updateScreenScale
		GEODE_CONCEPT_FUNCTION_CHECK(updateScreenScale) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCDirector> : ModifyBase<ModifyDerive<Der, cocos2d::CCDirector>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCDirector>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCDirector>>::ModifyBase;
		using Base = cocos2d::CCDirector;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCDirector@cocos2d@@QAE@XZ")), Thiscall, cocos2d::CCDirector, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCDirector@cocos2d@@UAE@XZ")), Thiscall, cocos2d::CCDirector)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCDirector::drawScene)), Thiscall, cocos2d::CCDirector, drawScene, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&cocos2d::CCDirector::setContentScaleFactor)), Thiscall, cocos2d::CCDirector, setContentScaleFactor, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSize, cocos2d::CCSize, cocos2d::TextureQuality>::func(&cocos2d::CCDirector::setupScreenScale)), Thiscall, cocos2d::CCDirector, setupScreenScale, cocos2d::CCSize, cocos2d::CCSize, cocos2d::TextureQuality)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::TextureQuality>::func(&cocos2d::CCDirector::updateContentScale)), Thiscall, cocos2d::CCDirector, updateContentScale, cocos2d::TextureQuality)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSize>::func(&cocos2d::CCDirector::updateScreenScale)), Thiscall, cocos2d::CCDirector, updateScreenScale, cocos2d::CCSize)
		}
	};
}
