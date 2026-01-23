#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class UploadActionPopup {
public:
    static constexpr auto CLASS_NAME = "UploadActionPopup";

    /**
     * @note[short] Android: Rebinded
     */
    static UploadActionPopup* create(UploadPopupDelegate* p0, gd::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn closePopup();

    /**
     * @note[short] Android
     */
    TodoReturn getDelegate();

    /**
     * @note[short] Android: Rebinded
     */
    bool init(UploadPopupDelegate* p0, gd::string p1);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void setDelegate(UploadPopupDelegate* p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn showFailMessage(gd::string p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn showSuccessMessage(gd::string p0);

    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();
};
