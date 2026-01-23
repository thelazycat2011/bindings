#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class InheritanceNode {
public:
    static constexpr auto CLASS_NAME = "InheritanceNode";

    /**
     * @note[short] Android
     */
    static InheritanceNode* create(int p0, InheritanceNode* p1);

    /**
     * @note[short] Android
     */
    TodoReturn getIndex();

    /**
     * @note[short] Android
     */
    TodoReturn getIsStart();

    /**
     * @note[short] Android
     */
    TodoReturn getTarget();

    /**
     * @note[short] Android
     */
    bool init(int p0, InheritanceNode* p1);

    /**
     * @note[short] Android
     */
    void setIndex(int p0);

    /**
     * @note[short] Android
     */
    void setIsStart(bool p0);

    /**
     * @note[short] Android
     */
    void setTarget(InheritanceNode* p0);
};
