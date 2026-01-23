#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sharedOpenGLView
		#define GEODE_STATICS_sharedOpenGLView
		GEODE_AS_STATIC_FUNCTION(sharedOpenGLView) 
	#endif

	#ifndef GEODE_STATICS_toggleFullScreen
		#define GEODE_STATICS_toggleFullScreen
		GEODE_AS_STATIC_FUNCTION(toggleFullScreen) 
	#endif

	#ifndef GEODE_STATICS_pollEvents
		#define GEODE_STATICS_pollEvents
		GEODE_AS_STATIC_FUNCTION(pollEvents) 
	#endif

	#ifndef GEODE_STATICS_end
		#define GEODE_STATICS_end
		GEODE_AS_STATIC_FUNCTION(end) 
	#endif

	#ifndef GEODE_STATICS_isOpenGLReady
		#define GEODE_STATICS_isOpenGLReady
		GEODE_AS_STATIC_FUNCTION(isOpenGLReady) 
	#endif

	#ifndef GEODE_STATICS_swapBuffers
		#define GEODE_STATICS_swapBuffers
		GEODE_AS_STATIC_FUNCTION(swapBuffers) 
	#endif

	#ifndef GEODE_STATICS_setIMEKeyboardState
		#define GEODE_STATICS_setIMEKeyboardState
		GEODE_AS_STATIC_FUNCTION(setIMEKeyboardState) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_sharedOpenGLView
		#define GEODE_CONCEPT_CHECK_sharedOpenGLView
		GEODE_CONCEPT_FUNCTION_CHECK(sharedOpenGLView) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleFullScreen
		#define GEODE_CONCEPT_CHECK_toggleFullScreen
		GEODE_CONCEPT_FUNCTION_CHECK(toggleFullScreen) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pollEvents
		#define GEODE_CONCEPT_CHECK_pollEvents
		GEODE_CONCEPT_FUNCTION_CHECK(pollEvents) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_end
		#define GEODE_CONCEPT_CHECK_end
		GEODE_CONCEPT_FUNCTION_CHECK(end) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isOpenGLReady
		#define GEODE_CONCEPT_CHECK_isOpenGLReady
		GEODE_CONCEPT_FUNCTION_CHECK(isOpenGLReady) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_swapBuffers
		#define GEODE_CONCEPT_CHECK_swapBuffers
		GEODE_CONCEPT_FUNCTION_CHECK(swapBuffers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIMEKeyboardState
		#define GEODE_CONCEPT_CHECK_setIMEKeyboardState
		GEODE_CONCEPT_FUNCTION_CHECK(setIMEKeyboardState) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCEGLView> : ModifyBase<ModifyDerive<Der, cocos2d::CCEGLView>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCEGLView>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCEGLView>>::ModifyBase;
		using Base = cocos2d::CCEGLView;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCEGLView@cocos2d@@IAE@XZ")), Thiscall, cocos2d::CCEGLView, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCEGLView@cocos2d@@MAE@XZ")), Thiscall, cocos2d::CCEGLView)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCEGLView::sharedOpenGLView)), Cdecl, cocos2d::CCEGLView, sharedOpenGLView, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&cocos2d::CCEGLView::toggleFullScreen)), Thiscall, cocos2d::CCEGLView, toggleFullScreen, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCEGLView::pollEvents)), Thiscall, cocos2d::CCEGLView, pollEvents, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCEGLView::end)), Thiscall, cocos2d::CCEGLView, end, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCEGLView::isOpenGLReady)), Thiscall, cocos2d::CCEGLView, isOpenGLReady, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCEGLView::swapBuffers)), Thiscall, cocos2d::CCEGLView, swapBuffers, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::CCEGLView::setIMEKeyboardState)), Thiscall, cocos2d::CCEGLView, setIMEKeyboardState, bool)
		}
	};
}
