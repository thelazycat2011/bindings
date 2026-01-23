
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

auto LoadingLayer::getLoadingString() -> decltype(getLoadingString()) {
	using FunctionType = decltype(getLoadingString())(*)(LoadingLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x119690, tulip::hook::TulipConvention::Membercall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LoadingLayer::init(bool p0) -> decltype(init(p0)) {
	using FunctionType = decltype(init(p0))(*)(LoadingLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1187f0, tulip::hook::TulipConvention::Membercall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto LoadingLayer::loadAssets() -> decltype(loadAssets()) {
	using FunctionType = decltype(loadAssets())(*)(LoadingLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1190c0, tulip::hook::TulipConvention::Membercall);
	return reinterpret_cast<FunctionType>(func)(this);
}
