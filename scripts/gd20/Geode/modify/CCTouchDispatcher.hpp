#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_touches
		#define GEODE_STATICS_touches
		GEODE_AS_STATIC_FUNCTION(touches) 
	#endif

	#ifndef GEODE_STATICS_touchesBegan
		#define GEODE_STATICS_touchesBegan
		GEODE_AS_STATIC_FUNCTION(touchesBegan) 
	#endif

	#ifndef GEODE_STATICS_touchesMoved
		#define GEODE_STATICS_touchesMoved
		GEODE_AS_STATIC_FUNCTION(touchesMoved) 
	#endif

	#ifndef GEODE_STATICS_touchesEnded
		#define GEODE_STATICS_touchesEnded
		GEODE_AS_STATIC_FUNCTION(touchesEnded) 
	#endif

	#ifndef GEODE_STATICS_touchesCancelled
		#define GEODE_STATICS_touchesCancelled
		GEODE_AS_STATIC_FUNCTION(touchesCancelled) 
	#endif

	#ifndef GEODE_STATICS_getForcePrio
		#define GEODE_STATICS_getForcePrio
		GEODE_AS_STATIC_FUNCTION(getForcePrio) 
	#endif

	#ifndef GEODE_STATICS_setForcePrio
		#define GEODE_STATICS_setForcePrio
		GEODE_AS_STATIC_FUNCTION(setForcePrio) 
	#endif

	#ifndef GEODE_STATICS_getTargetPrio
		#define GEODE_STATICS_getTargetPrio
		GEODE_AS_STATIC_FUNCTION(getTargetPrio) 
	#endif

	#ifndef GEODE_STATICS_setTargetPrio
		#define GEODE_STATICS_setTargetPrio
		GEODE_AS_STATIC_FUNCTION(setTargetPrio) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_touches
		#define GEODE_CONCEPT_CHECK_touches
		GEODE_CONCEPT_FUNCTION_CHECK(touches) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_touchesBegan
		#define GEODE_CONCEPT_CHECK_touchesBegan
		GEODE_CONCEPT_FUNCTION_CHECK(touchesBegan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_touchesMoved
		#define GEODE_CONCEPT_CHECK_touchesMoved
		GEODE_CONCEPT_FUNCTION_CHECK(touchesMoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_touchesEnded
		#define GEODE_CONCEPT_CHECK_touchesEnded
		GEODE_CONCEPT_FUNCTION_CHECK(touchesEnded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_touchesCancelled
		#define GEODE_CONCEPT_CHECK_touchesCancelled
		GEODE_CONCEPT_FUNCTION_CHECK(touchesCancelled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getForcePrio
		#define GEODE_CONCEPT_CHECK_getForcePrio
		GEODE_CONCEPT_FUNCTION_CHECK(getForcePrio) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setForcePrio
		#define GEODE_CONCEPT_CHECK_setForcePrio
		GEODE_CONCEPT_FUNCTION_CHECK(setForcePrio) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTargetPrio
		#define GEODE_CONCEPT_CHECK_getTargetPrio
		GEODE_CONCEPT_FUNCTION_CHECK(getTargetPrio) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTargetPrio
		#define GEODE_CONCEPT_CHECK_setTargetPrio
		GEODE_CONCEPT_FUNCTION_CHECK(setTargetPrio) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCTouchDispatcher> : ModifyBase<ModifyDerive<Der, cocos2d::CCTouchDispatcher>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCTouchDispatcher>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCTouchDispatcher>>::ModifyBase;
		using Base = cocos2d::CCTouchDispatcher;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSet*, cocos2d::CCEvent*, unsigned int>::func(&cocos2d::CCTouchDispatcher::touches)), Thiscall, cocos2d::CCTouchDispatcher, touches, cocos2d::CCSet*, cocos2d::CCEvent*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCSet*, cocos2d::CCEvent*>::func(&cocos2d::CCTouchDispatcher::touchesBegan)), Thiscall, cocos2d::CCTouchDispatcher, touchesBegan, cocos2d::CCSet*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCSet*, cocos2d::CCEvent*>::func(&cocos2d::CCTouchDispatcher::touchesMoved)), Thiscall, cocos2d::CCTouchDispatcher, touchesMoved, cocos2d::CCSet*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCSet*, cocos2d::CCEvent*>::func(&cocos2d::CCTouchDispatcher::touchesEnded)), Thiscall, cocos2d::CCTouchDispatcher, touchesEnded, cocos2d::CCSet*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCSet*, cocos2d::CCEvent*>::func(&cocos2d::CCTouchDispatcher::touchesCancelled)), Thiscall, cocos2d::CCTouchDispatcher, touchesCancelled, cocos2d::CCSet*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTouchDispatcher::getForcePrio)), Thiscall, cocos2d::CCTouchDispatcher, getForcePrio, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::CCTouchDispatcher::setForcePrio)), Thiscall, cocos2d::CCTouchDispatcher, setForcePrio, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTouchDispatcher::getTargetPrio)), Thiscall, cocos2d::CCTouchDispatcher, getTargetPrio, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int>::func(&cocos2d::CCTouchDispatcher::setTargetPrio)), Thiscall, cocos2d::CCTouchDispatcher, setTargetPrio, int)
		}
	};
}
