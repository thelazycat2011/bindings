#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class TableViewCell {
public:
    static constexpr auto CLASS_NAME = "TableViewCell";

    /**
     * @note[short] Android: Rebinded
     */
     TableViewCell(char const* p0, float p1, float p2);

    /**
     * @note[short] Android
     */
    TodoReturn deleteButtonSelector(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getCellIdentifier();

    /**
     * @note[short] Android
     */
    TodoReturn getDelBtnColor();

    /**
     * @note[short] Android
     */
    TodoReturn getDeleteButton();

    /**
     * @note[short] Android
     */
    TodoReturn getEditable();

    /**
     * @note[short] Android
     */
    bool isDeleteButtonShow();

    /**
     * @note[short] Android
     */
    TodoReturn resetDeleteButtonPosition();

    /**
     * @note[short] Android: Rebinded
     */
    void setCellIdentifier(gd::string const& p0);

    /**
     * @note[short] Android
     */
    void setDelBtnColor(cocos2d::ccColor3B p0);

    /**
     * @note[short] Android
     */
    void setDeleteButton(cocos2d::CCMenuItem* p0);

    /**
     * @note[short] Android
     */
    void setEditable(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn showDeleteButton(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateVisibility();
};
