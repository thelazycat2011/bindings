#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class LoadingLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "LoadingLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LoadingLayer, cocos2d::CCLayer)

    /**
     * @note[short] Android
     */
    static LoadingLayer* create(bool p0);

    /**
     * @note[short] Windows: 0x119690
     * @note[short] Android
     */
    const char* getLoadingString();

    /**
     * @note[short] Windows: 0x1187f0
     * @note[short] Android
     */
    bool init(bool p0);

    /**
     * @note[short] Windows: 0x1190c0
     * @note[short] Android
     */
    void loadAssets();

    /**
     * @note[short] Android
     */
    void loadingFinished();

    /**
     * @note[short] Android
     */
    void scene(bool p0);

    /**
     * @note[short] Android
     */
    void updateProgress(int p0);
    bool m_unknown;
    bool m_unknown2;
    int m_loadStep;
    cocos2d::CCLabelBMFont* m_caption;
    TextArea* m_textArea;
    cocos2d::CCSprite* m_sliderBar;
    float m_sliderGrooveXPos;
    float m_sliderGrooveHeight;
    bool m_fromRefresh;
};
