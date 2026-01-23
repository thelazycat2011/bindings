#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJSearchObject {
public:
    static constexpr auto CLASS_NAME = "GJSearchObject";

    /**
     * @note[short] Android: Rebinded
     */
    static GJSearchObject* create(SearchType p0, gd::string p1, gd::string p2, gd::string p3, int p4, bool p5, bool p6, bool p7, int p8, bool p9, bool p10, bool p11, bool p12, bool p13, bool p14);

    /**
     * @note[short] Android: Rebinded
     */
    static GJSearchObject* create(SearchType p0, gd::string p1);

    /**
     * @note[short] Android
     */
    static GJSearchObject* create(SearchType p0);

    /**
     * @note[short] Android
     */
    TodoReturn createFromKey(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getCoins();

    /**
     * @note[short] Android
     */
    TodoReturn getCustomSong();

    /**
     * @note[short] Android
     */
    TodoReturn getDifficultyStr();

    /**
     * @note[short] Android
     */
    TodoReturn getFeatured();

    /**
     * @note[short] Android
     */
    TodoReturn getKey();

    /**
     * @note[short] Android
     */
    TodoReturn getLengthStr();

    /**
     * @note[short] Android
     */
    TodoReturn getNextPageKey();

    /**
     * @note[short] Android
     */
    TodoReturn getNextPageObject();

    /**
     * @note[short] Android
     */
    TodoReturn getNoStar();

    /**
     * @note[short] Android
     */
    TodoReturn getOriginal();

    /**
     * @note[short] Android
     */
    TodoReturn getPage();

    /**
     * @note[short] Android
     */
    TodoReturn getPrevPageObject();

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn getSearchKey(SearchType p0, gd::string p1, gd::string p2, gd::string p3, int p4, bool p5, bool p6, bool p7, int p8, bool p9, bool p10, bool p11, bool p12, bool p13, bool p14);

    /**
     * @note[short] Android
     */
    TodoReturn getSong();

    /**
     * @note[short] Android
     */
    TodoReturn getSongFilter();

    /**
     * @note[short] Android
     */
    TodoReturn getStar();

    /**
     * @note[short] Android
     */
    TodoReturn getString();

    /**
     * @note[short] Android
     */
    TodoReturn getTotal();

    /**
     * @note[short] Android
     */
    TodoReturn getTwoP();

    /**
     * @note[short] Android
     */
    TodoReturn getType();

    /**
     * @note[short] Android
     */
    TodoReturn getUncompleted();

    /**
     * @note[short] Android: Rebinded
     */
    bool init(SearchType p0, gd::string p1, gd::string p2, gd::string p3, int p4, bool p5, bool p6, bool p7, int p8, bool p9, bool p10, bool p11, bool p12, bool p13, bool p14);

    /**
     * @note[short] Android
     */
    void setCoins(bool p0);

    /**
     * @note[short] Android
     */
    void setCustomSong(bool p0);

    /**
     * @note[short] Android: Rebinded
     */
    void setDifficultyStr(gd::string p0);

    /**
     * @note[short] Android
     */
    void setFeatured(bool p0);

    /**
     * @note[short] Android: Rebinded
     */
    void setLengthStr(gd::string p0);

    /**
     * @note[short] Android
     */
    void setNoStar(bool p0);

    /**
     * @note[short] Android
     */
    void setOriginal(bool p0);

    /**
     * @note[short] Android
     */
    void setPage(int p0);

    /**
     * @note[short] Android
     */
    void setSong(int p0);

    /**
     * @note[short] Android
     */
    void setSongFilter(bool p0);

    /**
     * @note[short] Android
     */
    void setStar(bool p0);

    /**
     * @note[short] Android: Rebinded
     */
    void setString(gd::string p0);

    /**
     * @note[short] Android
     */
    void setTotal(int p0);

    /**
     * @note[short] Android
     */
    void setTwoP(bool p0);

    /**
     * @note[short] Android
     */
    void setType(SearchType p0);

    /**
     * @note[short] Android
     */
    void setUncompleted(bool p0);
};
