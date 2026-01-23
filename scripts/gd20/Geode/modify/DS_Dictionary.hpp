#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_getBoolForKey
		#define GEODE_STATICS_getBoolForKey
		GEODE_AS_STATIC_FUNCTION(getBoolForKey) 
	#endif

	#ifndef GEODE_STATICS_getFloatForKey
		#define GEODE_STATICS_getFloatForKey
		GEODE_AS_STATIC_FUNCTION(getFloatForKey) 
	#endif

	#ifndef GEODE_STATICS_getIntegerForKey
		#define GEODE_STATICS_getIntegerForKey
		GEODE_AS_STATIC_FUNCTION(getIntegerForKey) 
	#endif

	#ifndef GEODE_STATICS_getKey
		#define GEODE_STATICS_getKey
		GEODE_AS_STATIC_FUNCTION(getKey) 
	#endif

	#ifndef GEODE_STATICS_getStringForKey
		#define GEODE_STATICS_getStringForKey
		GEODE_AS_STATIC_FUNCTION(getStringForKey) 
	#endif

	#ifndef GEODE_STATICS_setBoolForKey
		#define GEODE_STATICS_setBoolForKey
		GEODE_AS_STATIC_FUNCTION(setBoolForKey) 
	#endif

	#ifndef GEODE_STATICS_setFloatForKey
		#define GEODE_STATICS_setFloatForKey
		GEODE_AS_STATIC_FUNCTION(setFloatForKey) 
	#endif

	#ifndef GEODE_STATICS_setIntegerForKey
		#define GEODE_STATICS_setIntegerForKey
		GEODE_AS_STATIC_FUNCTION(setIntegerForKey) 
	#endif

	#ifndef GEODE_STATICS_setStringForKey
		#define GEODE_STATICS_setStringForKey
		GEODE_AS_STATIC_FUNCTION(setStringForKey) 
	#endif

	#ifndef GEODE_STATICS_getArrayForKey
		#define GEODE_STATICS_getArrayForKey
		GEODE_AS_STATIC_FUNCTION(getArrayForKey) 
	#endif

	#ifndef GEODE_STATICS_setArrayForKey
		#define GEODE_STATICS_setArrayForKey
		GEODE_AS_STATIC_FUNCTION(setArrayForKey) 
	#endif

	#ifndef GEODE_STATICS_getObjectForKey
		#define GEODE_STATICS_getObjectForKey
		GEODE_AS_STATIC_FUNCTION(getObjectForKey) 
	#endif

	#ifndef GEODE_STATICS_setObjectForKey
		#define GEODE_STATICS_setObjectForKey
		GEODE_AS_STATIC_FUNCTION(setObjectForKey) 
	#endif

	#ifndef GEODE_STATICS_loadRootSubDictFromFile
		#define GEODE_STATICS_loadRootSubDictFromFile
		GEODE_AS_STATIC_FUNCTION(loadRootSubDictFromFile) 
	#endif

	#ifndef GEODE_STATICS_loadRootSubDictFromString
		#define GEODE_STATICS_loadRootSubDictFromString
		GEODE_AS_STATIC_FUNCTION(loadRootSubDictFromString) 
	#endif

	#ifndef GEODE_STATICS_loadRootSubDictFromCompressedFile
		#define GEODE_STATICS_loadRootSubDictFromCompressedFile
		GEODE_AS_STATIC_FUNCTION(loadRootSubDictFromCompressedFile) 
	#endif

	#ifndef GEODE_STATICS_saveRootSubDictToCompressedFile
		#define GEODE_STATICS_saveRootSubDictToCompressedFile
		GEODE_AS_STATIC_FUNCTION(saveRootSubDictToCompressedFile) 
	#endif

	#ifndef GEODE_STATICS_saveRootSubDictToFile
		#define GEODE_STATICS_saveRootSubDictToFile
		GEODE_AS_STATIC_FUNCTION(saveRootSubDictToFile) 
	#endif

	#ifndef GEODE_STATICS_saveRootSubDictToString
		#define GEODE_STATICS_saveRootSubDictToString
		GEODE_AS_STATIC_FUNCTION(saveRootSubDictToString) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_getBoolForKey
		#define GEODE_CONCEPT_CHECK_getBoolForKey
		GEODE_CONCEPT_FUNCTION_CHECK(getBoolForKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFloatForKey
		#define GEODE_CONCEPT_CHECK_getFloatForKey
		GEODE_CONCEPT_FUNCTION_CHECK(getFloatForKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIntegerForKey
		#define GEODE_CONCEPT_CHECK_getIntegerForKey
		GEODE_CONCEPT_FUNCTION_CHECK(getIntegerForKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getKey
		#define GEODE_CONCEPT_CHECK_getKey
		GEODE_CONCEPT_FUNCTION_CHECK(getKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStringForKey
		#define GEODE_CONCEPT_CHECK_getStringForKey
		GEODE_CONCEPT_FUNCTION_CHECK(getStringForKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setBoolForKey
		#define GEODE_CONCEPT_CHECK_setBoolForKey
		GEODE_CONCEPT_FUNCTION_CHECK(setBoolForKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFloatForKey
		#define GEODE_CONCEPT_CHECK_setFloatForKey
		GEODE_CONCEPT_FUNCTION_CHECK(setFloatForKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIntegerForKey
		#define GEODE_CONCEPT_CHECK_setIntegerForKey
		GEODE_CONCEPT_FUNCTION_CHECK(setIntegerForKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStringForKey
		#define GEODE_CONCEPT_CHECK_setStringForKey
		GEODE_CONCEPT_FUNCTION_CHECK(setStringForKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getArrayForKey
		#define GEODE_CONCEPT_CHECK_getArrayForKey
		GEODE_CONCEPT_FUNCTION_CHECK(getArrayForKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setArrayForKey
		#define GEODE_CONCEPT_CHECK_setArrayForKey
		GEODE_CONCEPT_FUNCTION_CHECK(setArrayForKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getObjectForKey
		#define GEODE_CONCEPT_CHECK_getObjectForKey
		GEODE_CONCEPT_FUNCTION_CHECK(getObjectForKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setObjectForKey
		#define GEODE_CONCEPT_CHECK_setObjectForKey
		GEODE_CONCEPT_FUNCTION_CHECK(setObjectForKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadRootSubDictFromFile
		#define GEODE_CONCEPT_CHECK_loadRootSubDictFromFile
		GEODE_CONCEPT_FUNCTION_CHECK(loadRootSubDictFromFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadRootSubDictFromString
		#define GEODE_CONCEPT_CHECK_loadRootSubDictFromString
		GEODE_CONCEPT_FUNCTION_CHECK(loadRootSubDictFromString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadRootSubDictFromCompressedFile
		#define GEODE_CONCEPT_CHECK_loadRootSubDictFromCompressedFile
		GEODE_CONCEPT_FUNCTION_CHECK(loadRootSubDictFromCompressedFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveRootSubDictToCompressedFile
		#define GEODE_CONCEPT_CHECK_saveRootSubDictToCompressedFile
		GEODE_CONCEPT_FUNCTION_CHECK(saveRootSubDictToCompressedFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveRootSubDictToFile
		#define GEODE_CONCEPT_CHECK_saveRootSubDictToFile
		GEODE_CONCEPT_FUNCTION_CHECK(saveRootSubDictToFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveRootSubDictToString
		#define GEODE_CONCEPT_CHECK_saveRootSubDictToString
		GEODE_CONCEPT_FUNCTION_CHECK(saveRootSubDictToString) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, DS_Dictionary> : ModifyBase<ModifyDerive<Der, DS_Dictionary>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, DS_Dictionary>>;
		using ModifyBase<ModifyDerive<Der, DS_Dictionary>>::ModifyBase;
		using Base = DS_Dictionary;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<const char*>::func(&DS_Dictionary::getBoolForKey)), Thiscall, DS_Dictionary, getBoolForKey, const char*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<const char*>::func(&DS_Dictionary::getFloatForKey)), Thiscall, DS_Dictionary, getFloatForKey, const char*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<const char*>::func(&DS_Dictionary::getIntegerForKey)), Thiscall, DS_Dictionary, getIntegerForKey, const char*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<const char*>::func(&DS_Dictionary::getKey)), Thiscall, DS_Dictionary, getKey, const char*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<const char*>::func(&DS_Dictionary::getStringForKey)), Thiscall, DS_Dictionary, getStringForKey, const char*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<const char*, bool, bool>::func(&DS_Dictionary::setBoolForKey)), Thiscall, DS_Dictionary, setBoolForKey, const char*, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<const char*, bool>::func(&DS_Dictionary::setBoolForKey)), Thiscall, DS_Dictionary, setBoolForKey, const char*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<const char*, float, bool>::func(&DS_Dictionary::setFloatForKey)), Thiscall, DS_Dictionary, setFloatForKey, const char*, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<const char*, float>::func(&DS_Dictionary::setFloatForKey)), Thiscall, DS_Dictionary, setFloatForKey, const char*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<const char*, int, bool>::func(&DS_Dictionary::setIntegerForKey)), Thiscall, DS_Dictionary, setIntegerForKey, const char*, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<const char*, int>::func(&DS_Dictionary::setIntegerForKey)), Thiscall, DS_Dictionary, setIntegerForKey, const char*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<const char*, gd::string const&, bool>::func(&DS_Dictionary::setStringForKey)), Thiscall, DS_Dictionary, setStringForKey, const char*, gd::string const&, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<const char*, gd::string const&>::func(&DS_Dictionary::setStringForKey)), Thiscall, DS_Dictionary, setStringForKey, const char*, gd::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<const char*>::func(&DS_Dictionary::getArrayForKey)), Thiscall, DS_Dictionary, getArrayForKey, const char*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<const char*, cocos2d::CCArray*>::func(&DS_Dictionary::setArrayForKey)), Thiscall, DS_Dictionary, setArrayForKey, const char*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<const char*>::func(&DS_Dictionary::getObjectForKey)), Thiscall, DS_Dictionary, getObjectForKey, const char*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<const char*, cocos2d::CCObject*>::func(&DS_Dictionary::setObjectForKey)), Thiscall, DS_Dictionary, setObjectForKey, const char*, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<const char*>::func(&DS_Dictionary::loadRootSubDictFromFile)), Thiscall, DS_Dictionary, loadRootSubDictFromFile, const char*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<gd::string>::func(&DS_Dictionary::loadRootSubDictFromString)), Thiscall, DS_Dictionary, loadRootSubDictFromString, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<const char*>::func(&DS_Dictionary::loadRootSubDictFromCompressedFile)), Thiscall, DS_Dictionary, loadRootSubDictFromCompressedFile, const char*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<const char*>::func(&DS_Dictionary::saveRootSubDictToCompressedFile)), Thiscall, DS_Dictionary, saveRootSubDictToCompressedFile, const char*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<const char*>::func(&DS_Dictionary::saveRootSubDictToFile)), Thiscall, DS_Dictionary, saveRootSubDictToFile, const char*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&DS_Dictionary::saveRootSubDictToString)), Thiscall, DS_Dictionary, saveRootSubDictToString, )
		}
	};
}
