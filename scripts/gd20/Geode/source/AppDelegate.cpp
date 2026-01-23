
#include <stdexcept>
#include <Geode/Bindings.hpp>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>

using namespace geode;
using namespace geode::modifier;

#if !defined(GEODE_WRAP_FUNCTION)
#define GEODE_WRAP_FUNCTION
template <class F>
static auto wrapFunction(uintptr_t address, tulip::hook::TulipConvention convention) {
	auto wrapped = geode::hook::createWrapper(reinterpret_cast<void*>(address), tulip::hook::WrapperMetadata{
		.m_convention = geode::hook::createConvention(convention),
		.m_abstract = tulip::hook::AbstractFunction::from(F(nullptr)),
	});
	if (wrapped.isErr()) {
		throw std::runtime_error(wrapped.unwrapErr());
	}
	return wrapped.unwrap();
}
#endif

float AppDelegate::bgScale() {
		auto ssfMax = cocos2d::CCDirector::sharedDirector()->getScreenScaleFactorMax();
		if (!this->m_enableFPSTricks && !GameManager::sharedState()->m_performanceMode) {
			return ssfMax;
		}

		return ssfMax * cocos2d::CCDirector::sharedDirector()->getContentScaleFactor();
	}

AppDelegate* AppDelegate::get() {
		return static_cast<AppDelegate*>(cocos2d::CCApplication::sharedApplication());
	}
