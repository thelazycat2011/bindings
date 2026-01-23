#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class UndoObject {
public:
    static constexpr auto CLASS_NAME = "UndoObject";

    /**
     * @note[short] Android
     */
    static UndoObject* create(GameObject* p0, UndoCommand p1);

    /**
     * @note[short] Android
     */
    TodoReturn createWithArray(cocos2d::CCArray* p0, UndoCommand p1);

    /**
     * @note[short] Android
     */
    TodoReturn createWithTransformObjects(cocos2d::CCArray* p0, UndoCommand p1);

    /**
     * @note[short] Android
     */
    TodoReturn getCommand();

    /**
     * @note[short] Android
     */
    TodoReturn getIsLinked();

    /**
     * @note[short] Android
     */
    TodoReturn getObject();

    /**
     * @note[short] Android
     */
    TodoReturn getObjects();

    /**
     * @note[short] Android
     */
    bool init(cocos2d::CCArray* p0, UndoCommand p1);

    /**
     * @note[short] Android
     */
    bool init(GameObject* p0, UndoCommand p1);

    /**
     * @note[short] Android
     */
    TodoReturn initWithTransformObjects(cocos2d::CCArray* p0, UndoCommand p1);

    /**
     * @note[short] Android
     */
    void setIsLinked(bool p0);

    /**
     * @note[short] Android
     */
    void setObjects(cocos2d::CCArray* p0);
};
