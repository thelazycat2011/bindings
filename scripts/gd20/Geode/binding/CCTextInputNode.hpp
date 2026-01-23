#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCTextInputNode {
public:
    static constexpr auto CLASS_NAME = "CCTextInputNode";

    /**
     * @note[short] Android
     */
    static CCTextInputNode* create(float p0, float p1, char const* p2, char const* p3, int p4, char const* p5);

    /**
     * @note[short] Android
     */
    TodoReturn forceOffset();

    /**
     * @note[short] Android
     */
    TodoReturn getCharLimit();

    /**
     * @note[short] Android
     */
    TodoReturn getClearAtZero();

    /**
     * @note[short] Android
     */
    TodoReturn getDelegate();

    /**
     * @note[short] Android
     */
    TodoReturn getForceOffset();

    /**
     * @note[short] Android
     */
    TodoReturn getIsPassword();

    /**
     * @note[short] Android
     */
    TodoReturn getLabel();

    /**
     * @note[short] Android
     */
    TodoReturn getProfanityFilter();

    /**
     * @note[short] Android
     */
    TodoReturn getString();

    /**
     * @note[short] Android
     */
    TodoReturn getTextField();

    /**
     * @note[short] Android
     */
    bool init(float p0, float p1, char const* p2, char const* p3, int p4, char const* p5);

    /**
     * @note[short] Android
     */
    TodoReturn onTextFieldInsertText(cocos2d::CCTextFieldTTF* p0, char const* p1, int p2);

    /**
     * @note[short] Android
     */
    TodoReturn refreshLabel();

    /**
     * @note[short] Android: Rebinded
     */
    void setAllowedChars(gd::string p0);

    /**
     * @note[short] Android
     */
    void setCharLimit(int p0);

    /**
     * @note[short] Android
     */
    void setClearAtZero(bool p0);

    /**
     * @note[short] Android
     */
    void setDelegate(TextInputDelegate* p0);

    /**
     * @note[short] Android
     */
    void setForceOffset(bool p0);

    /**
     * @note[short] Android
     */
    void setIsPassword(bool p0);

    /**
     * @note[short] Android
     */
    void setLabelNormalColor(cocos2d::ccColor3B p0);

    /**
     * @note[short] Android
     */
    void setLabelPlaceholderColor(cocos2d::ccColor3B p0);

    /**
     * @note[short] Android
     */
    void setLabelPlaceholderScale(float p0);

    /**
     * @note[short] Android
     */
    void setMaxLabelScale(float p0);

    /**
     * @note[short] Android
     */
    void setMaxLabelWidth(float p0);

    /**
     * @note[short] Android
     */
    void setProfanityFilter(bool p0);

    /**
     * @note[short] Android: Rebinded
     */
    void setString(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateBlinkLabel();

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn updateLabel(gd::string p0);

    /**
     * @note[short] Android
     */
    virtual void visit();

    /**
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] Android
     */
    virtual void textChanged();

    /**
     * @note[short] Android
     */
    virtual TodoReturn onClickTrackNode(bool p0);

    /**
     * @note[short] Android
     */
    virtual void keyboardWillShow(cocos2d::CCIMEKeyboardNotificationInfo& p0);

    /**
     * @note[short] Android
     */
    virtual void keyboardWillHide(cocos2d::CCIMEKeyboardNotificationInfo& p0);

    /**
     * @note[short] Android
     */
    virtual bool onTextFieldAttachWithIME(cocos2d::CCTextFieldTTF* p0);

    /**
     * @note[short] Android
     */
    virtual bool onTextFieldDetachWithIME(cocos2d::CCTextFieldTTF* p0);
};
