// clang-format off

[[link(android)]]
class AccountHelpLayer {
	// virtual ~AccountHelpLayer();

	static AccountHelpLayer* create();

	TodoReturn doUnlink();
	TodoReturn exitLayer();
	void onAccountManagement(cocos2d::CCObject* sender);
	void onReLogin(cocos2d::CCObject* sender);
	void onUnlink(cocos2d::CCObject* sender);
	TodoReturn updatePage();
	TodoReturn verifyUnlink();

	virtual TodoReturn customSetup();
	virtual TodoReturn layerHidden();
	virtual TodoReturn accountStatusChanged();
	virtual void FLAlert_Clicked(FLAlertLayer*, bool);
}

[[link(android)]]
class AccountLayer {
	// virtual ~AccountLayer();
	// AccountLayer();

	static AccountLayer* create();

	TodoReturn backupAccountFailed(BackupAccountError);
	TodoReturn createToggleButton(gd::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint);
	TodoReturn doBackup();
	TodoReturn doSync();
	TodoReturn exitLayer();
	TodoReturn hideLoadingUI();
	void onBackup(cocos2d::CCObject* sender);
	void onHelp(cocos2d::CCObject* sender);
	void onLogin(cocos2d::CCObject* sender);
	void onMore(cocos2d::CCObject* sender);
	void onRegister(cocos2d::CCObject* sender);
	void onSync(cocos2d::CCObject* sender);
	TodoReturn showLoadingUI();
	TodoReturn syncAccountFailed(BackupAccountError);
	TodoReturn toggleUI(bool);
	TodoReturn updatePage();

	virtual TodoReturn customSetup();
	virtual TodoReturn layerHidden();
	virtual TodoReturn backupAccountFinished();
	virtual TodoReturn syncAccountFinished();
	virtual TodoReturn accountStatusChanged();
	virtual void FLAlert_Clicked(FLAlertLayer*, bool);
}

[[link(android)]]
class AccountLoginLayer {
	// virtual ~AccountLoginLayer();
	// AccountLoginLayer();

	static AccountLoginLayer* create(gd::string);

	TodoReturn createTextBackground(cocos2d::CCPoint, char const*, cocos2d::CCSize);
	TodoReturn createTextInput(cocos2d::CCPoint, cocos2d::CCSize, char const*, int);
	TodoReturn createTextLabel(cocos2d::CCPoint, char const*, cocos2d::CCSize);
	TodoReturn disableNodes();
	TodoReturn hideLoadingUI();
	bool init(gd::string);
	void onClose(cocos2d::CCObject* sender);
	void onSubmit(cocos2d::CCObject* sender);
	TodoReturn resetLabel(int);
	TodoReturn resetLabels();
	TodoReturn showLoadingUI();
	TodoReturn toggleUI(bool);
	TodoReturn updateLabel(AccountError);

	virtual void registerWithTouchDispatcher();
	virtual void keyBackClicked();
	virtual void FLAlert_Clicked(FLAlertLayer*, bool);
	virtual TodoReturn textInputOpened(CCTextInputNode*);
	virtual TodoReturn textInputClosed(CCTextInputNode*);
	virtual void textChanged(CCTextInputNode*);
	virtual TodoReturn loginAccountFinished(int, int);
	virtual TodoReturn loginAccountFailed(AccountError);
}

[[link(android)]]
class AccountRegisterLayer {
	// virtual ~AccountRegisterLayer();
	// AccountRegisterLayer();

	static AccountRegisterLayer* create();

	TodoReturn createTextBackground(cocos2d::CCPoint, cocos2d::CCSize);
	TodoReturn createTextInput(cocos2d::CCPoint, cocos2d::CCSize, gd::string, int);
	TodoReturn createTextLabel(cocos2d::CCPoint, gd::string, cocos2d::CCSize);
	TodoReturn disableNodes();
	TodoReturn hideLoadingUI();
	void onClose(cocos2d::CCObject* sender);
	void onSubmit(cocos2d::CCObject* sender);
	TodoReturn resetLabel(int);
	TodoReturn resetLabels();
	TodoReturn showLoadingUI();
	TodoReturn toggleUI(bool);
	TodoReturn updateLabel(AccountError);
	TodoReturn validEmail(gd::string);
	TodoReturn validPassword(gd::string);
	TodoReturn validUser(gd::string);

	virtual bool init();
	virtual void registerWithTouchDispatcher();
	virtual void keyBackClicked();
	virtual void FLAlert_Clicked(FLAlertLayer*, bool);
	virtual TodoReturn textInputOpened(CCTextInputNode*);
	virtual TodoReturn textInputClosed(CCTextInputNode*);
	virtual void textChanged(CCTextInputNode*);
	virtual TodoReturn textInputShouldOffset(CCTextInputNode*, float);
	virtual TodoReturn textInputReturn(CCTextInputNode*);
	virtual TodoReturn allowTextInput(CCTextInputNode*);
	virtual TodoReturn registerAccountFinished();
	virtual TodoReturn registerAccountFailed(AccountError);
}

[[link(android)]]
class AchievementBar {
	// virtual ~AchievementBar();

	static AchievementBar* create(char const*, char const*, char const*);

	TodoReturn getTargetScene();
	bool init(char const*, char const*, char const*);
	void setTargetScene(cocos2d::CCNode*);
	TodoReturn show();
}

[[link(android)]]
class AchievementCell {
	// virtual ~AchievementCell();
	AchievementCell(char const*, float, float);

	TodoReturn loadFromDict(cocos2d::CCDictionary*);
	TodoReturn updateBGColor(int);

	virtual bool init();
	virtual void draw();
}

[[link(android)]]
class AchievementManager {
	// virtual ~AchievementManager();

	static AchievementManager* sharedState();

	TodoReturn areAchievementsEarned(cocos2d::CCArray*);
	TodoReturn checkAchFromUnlock(char const*);
	TodoReturn dataLoaded(DS_Dictionary*);
	TodoReturn encodeDataTo(DS_Dictionary*);
	TodoReturn firstSetup();
	TodoReturn getAchievementRewardDict();
	TodoReturn getAchievementsWithID(char const*);
	TodoReturn getAllAchievements();
	TodoReturn getAllAchievementsSorted();
	TodoReturn getDontNotifyAch();
	TodoReturn getReportedAchievements();
	bool isAchievementEarned(char const*);
	TodoReturn notifyAchievementWithID(char const*);
	TodoReturn percentageForCount(int, int);
	TodoReturn percentForAchievement(char const*);
	TodoReturn reportAchievementWithID(char const*, int, bool);
	TodoReturn reportPlatformAchievementWithID(char const*, int);
	TodoReturn resetAchievement(char const*);
	TodoReturn resetAchievements();
	void setDontNotifyAch(bool);
	void setReportedAchievements(cocos2d::CCDictionary*);
	TodoReturn setup();

	virtual bool init();
}

[[link(android)]]
class AchievementNotifier {
	// virtual ~AchievementNotifier();

	static AchievementNotifier* sharedState();

	TodoReturn achievementDisplayFinished();
	TodoReturn notifyAchievement(char const*, char const*, char const*);
	TodoReturn showNextAchievement();
	TodoReturn willSwitchToScene(cocos2d::CCScene*);

	virtual bool init();
}

[[link(android)]]
class AchievementsLayer {
	// virtual ~AchievementsLayer();
	// AchievementsLayer();

	static AchievementsLayer* create();

	TodoReturn loadPage(int);
	void onNextPage(cocos2d::CCObject* sender);
	void onPrevPage(cocos2d::CCObject* sender);
	TodoReturn setupLevelBrowser(cocos2d::CCArray*);
	TodoReturn setupPageInfo(int, int, int);

	virtual void keyDown(cocos2d::enumKeyCodes);
	virtual TodoReturn customSetup();
}

[[link(android)]]
class AdToolbox {
	TodoReturn cacheInterstitial();
	TodoReturn disableBanner();
	TodoReturn enableBanner();
	TodoReturn hasCachedInterstitial();
	TodoReturn setupAds();
	TodoReturn showInterstitial();
}

[[link(android)]]
class AnimatedGameObject {
	// virtual ~AnimatedGameObject();

	static AnimatedGameObject* create(int);

	bool init(int);
	TodoReturn setupAnimatedSize(int);
	TodoReturn setupChildSprites();
	TodoReturn updateChildSpriteColor(cocos2d::ccColor3B);

	virtual void setOpacity(unsigned char);
	virtual TodoReturn activateObject();
	virtual TodoReturn deactivateObject(bool);
	virtual void setObjectColor(cocos2d::ccColor3B const&);
	virtual TodoReturn animationFinished(char const*);
}

[[link(android)]]
class AnimatedSpriteDelegate {
	virtual TodoReturn animationFinished(char const*);
}

[[link(android)]]
class AppDelegate {
	// virtual ~AppDelegate();

	TodoReturn bgScale();
	TodoReturn checkSound();
	TodoReturn get();
	TodoReturn getEnableFPSTricks();
	TodoReturn getIsIOS();
	TodoReturn getIsLowMemoryDevice();
	TodoReturn getLoadingFinished();
	TodoReturn getManagersLoaded();
	TodoReturn getPaused();
	TodoReturn getScenePointer();
	TodoReturn hideLoadingCircle();
	TodoReturn loadingIsFinished();
	TodoReturn musicTest();
	TodoReturn pauseGame();
	TodoReturn platformShutdown();
	TodoReturn resumeSound();
	void setIdleTimerDisabled(bool);
	void setManagersLoaded(bool);
	void setPaused(bool);
	void setScenePointer(cocos2d::CCNode*);
	TodoReturn setupGLView();
	TodoReturn showLoadingCircle(bool, bool, bool);
	TodoReturn trySaveGame();

	virtual bool applicationDidFinishLaunching();
	virtual void applicationDidEnterBackground();
	virtual void applicationWillEnterForeground();
	virtual void applicationWillBecomeActive();
	virtual void applicationWillResignActive();
	virtual TodoReturn willSwitchToScene(cocos2d::CCScene*);
}

[[link(android)]]
class AudioEffectsLayer {
	// virtual ~AudioEffectsLayer();

	static AudioEffectsLayer* create(gd::string);

	TodoReturn audioStep(float);
	TodoReturn getAudioScale();
	TodoReturn getBGSquare();
	TodoReturn getRainActive();
	TodoReturn goingDown();
	bool init(gd::string);
	TodoReturn resetAudioVars();
	void setRainActive(bool);
	TodoReturn triggerEffect(float);

	virtual void draw();
	virtual void updateTweenAction(float, char const*);
}

[[link(android)]]
class BitmapFontCache {
	// virtual ~BitmapFontCache();

	static BitmapFontCache* sharedFontCache();

	TodoReturn fontWithConfigFile(char const*, float);
	bool init();
	TodoReturn purgeSharedFontCache();
}

[[link(android)]]
class BonusDropdown {
	// virtual ~BonusDropdown();

	static BonusDropdown* create(gd::string, int);

	TodoReturn getTargetScene();
	bool init(gd::string, int);
	void setTargetScene(cocos2d::CCNode*);
	TodoReturn show();
}

[[link(android)]]
class BoomListLayer {
	// virtual ~BoomListLayer();

	static BoomListLayer* create(BoomListView*, char const*);

	bool init(BoomListView*, char const*);
}

[[link(android)]]
class BoomListView : cocos2d::CCLayer {
	// virtual ~BoomListView();

	static BoomListView* create(cocos2d::CCArray*, float, float, int, BoomListType);

	bool init(cocos2d::CCArray*, float, float, int, BoomListType);
	virtual void setupList();

	virtual void draw();
	virtual TodoReturn TableViewWillDisplayCellForRowAtIndexPath(CCIndexPath&, TableViewCell*, TableView*);
	virtual TodoReturn cellHeightForRowAtIndexPath(CCIndexPath&, TableView*);
	virtual TodoReturn didSelectRowAtIndexPath(CCIndexPath&, TableView*);
	virtual TodoReturn numberOfRowsInSection(unsigned int, TableView*);
	virtual TodoReturn numberOfSectionsInTableView(TableView*);
	virtual TodoReturn cellForRowAtIndexPath(CCIndexPath&, TableView*);
	virtual TodoReturn TableViewCommitCellEditingStyleForRowAtIndexPath(TableView*, TableViewCellEditingStyle, CCIndexPath&);
	virtual TodoReturn TableViewWillReloadCellForRowAtIndexPath(CCIndexPath&, TableViewCell*, TableView*);
	virtual TableViewCell* getListCell(char const*);
	virtual TodoReturn loadCell(TableViewCell*, int);

	TableView* m_tableView;
	cocos2d::CCArray* m_cells;
	BoomListType m_type;
	float m_height;
	float m_width;
	float _0x134;
	int _0x138;
}

[[link(android)]]
class BoomScrollLayer : cocos2d::CCLayer {
	// virtual ~BoomScrollLayer();
	// BoomScrollLayer();

	static BoomScrollLayer* create(cocos2d::CCArray*, int, bool, cocos2d::CCArray*, DynamicScrollDelegate*);
	static BoomScrollLayer* create(cocos2d::CCArray*, int, bool);

	TodoReturn addPage(cocos2d::CCLayer*, int);
	TodoReturn addPage(cocos2d::CCLayer*);
	TodoReturn cancelAndStoleTouch(cocos2d::CCTouch*, cocos2d::CCEvent*);
	TodoReturn claimTouch(cocos2d::CCTouch*);
	TodoReturn getCurrentScreen();
	TodoReturn getDelegate();
	TodoReturn getInternalLayer();
	TodoReturn getMarginOffset();
	TodoReturn getMinimumTouchLengthToChangePage();
	TodoReturn getMinimumTouchLengthToSlide();
	TodoReturn getMinTouchSpeed();
	TodoReturn getMovingToPage();
	TodoReturn getOnlyShowOnePage();
	TodoReturn getPage(int);
	TodoReturn getpages();
	TodoReturn getPagesIndicatorNormalColor();
	TodoReturn getPagesIndicatorSelectedColor();
	TodoReturn getPagesWidthOffset();
	TodoReturn getRelativePageForNum(int);
	TodoReturn getRelativePosForPage(int);
	TodoReturn getScrollArea();
	TodoReturn getShowPagesIndicator();
	TodoReturn getStealTouches();
	TodoReturn getTotalPages();
	TodoReturn getTouchSpeedFast();
	TodoReturn getTouchSpeedMid();
	bool init(cocos2d::CCArray*, int, bool, cocos2d::CCArray*, DynamicScrollDelegate*);
	TodoReturn instantMoveToPage(int);
	TodoReturn moveToPage(int);
	TodoReturn moveToPageEnded();
	TodoReturn pageNumberForPosition(cocos2d::CCPoint);
	TodoReturn positionForPageWithNumber(int);
	TodoReturn quickUpdate();
	TodoReturn removePage(cocos2d::CCLayer*);
	TodoReturn removePageWithNumber(int);
	TodoReturn repositionPagesLooped();
	TodoReturn selectPage(int);
	void setDelegate(BoomScrollLayerDelegate*);
	void setDotScale(float);
	void setMarginOffset(float);
	void setMinimumTouchLengthToChangePage(float);
	void setMinimumTouchLengthToSlide(float);
	void setMinTouchSpeed(float);
	void setOnlyShowOnePage(bool);
	void setPagesIndicatorNormalColor(cocos2d::ccColor4B);
	void setPagesIndicatorPosition(cocos2d::CCPoint);
	void setPagesIndicatorSelectedColor(cocos2d::ccColor4B);
	void setPagesWidthOffset(float);
	void setScrollArea(cocos2d::CCRect);
	void setShowPagesIndicator(bool);
	void setStealTouches(bool);
	void setTouchSpeedFast(float);
	void setTouchSpeedMid(float);
	TodoReturn setupDynamicScrolling(cocos2d::CCArray*, DynamicScrollDelegate*);
	TodoReturn togglePageIndicators(bool);
	TodoReturn updateDots(float);
	TodoReturn updatePages();

	virtual void visit();
	virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void registerWithTouchDispatcher();

	cocos2d::CCArray* m_pageIndicators;
	int m_lastScreen;
	float _0x120;
	float _0x124;
	bool m_looped;
	DynamicScrollDelegate* m_dynamicScrollDelegate;
	cocos2d::CCArray* m_objects;
	bool m_dynamicScrolling;
	int _0x138;
	bool _0x13c;
	cocos2d::CCTouch* m_touch;
	cocos2d::CCArray* m_pages;
	double _0x148;
	cocos2d::CCPoint _0x150;
	ExtendedLayer* m_mainLayer; // geode compile
	cocos2d::CCRect m_scrollArea;
	float m_minTouchSpeed;
	float m_touchSpeedFast;
	float m_touchSpeedMid;
	BoomScrollLayerDelegate* m_delegate;
	bool m_movingToPage;
	bool m_onlyShowOnePage;
	float m_minimumTouchLengthToSlide;
	float m_minimumTouchLengthToChangePage;
	float m_marginOffset;
	bool m_stealTouches;
	bool m_showPagesIndicator;
	cocos2d::CCPoint m_pagesIndicatorPosition;
	cocos2d::ccColor4B m_pagesIndicatorSelectedColor;
	cocos2d::ccColor4B m_pagesIndicatorNormalColor;
	int m_currentScreen;
	float m_pagesWidthOffset;
}

[[link(android)]]
class BoomScrollLayerDelegate {
	virtual TodoReturn scrollLayerScrollingStarted(BoomScrollLayer*);
	virtual TodoReturn scrollLayerScrolledToPage(BoomScrollLayer*, int);
	virtual TodoReturn scrollLayerMoved(cocos2d::CCPoint);
}

[[link(android)]]
class ButtonPage {
	// virtual ~ButtonPage();

	static ButtonPage* create(cocos2d::CCArray*, cocos2d::CCPoint, int, float);

	bool init(cocos2d::CCArray*, cocos2d::CCPoint, int, float);
}

[[link(android)]]
class ButtonSprite {
	// virtual ~ButtonSprite();
	// ButtonSprite();

	static ButtonSprite* create(char const*, float);
	static ButtonSprite* create(char const*, int, int, float, bool, char const*, char const*, float);
	static ButtonSprite* create(char const*, int, int, float, bool, char const*, char const*);
	static ButtonSprite* create(char const*, int, int, float, bool);
	static ButtonSprite* create(char const*);
	static ButtonSprite* create(cocos2d::CCSprite*, int, int, float, float, bool, char const*, bool);
	static ButtonSprite* create(cocos2d::CCSprite*, int, int, float, float, bool);
	static ButtonSprite* create(cocos2d::CCSprite*);

	TodoReturn getBGImage();
	TodoReturn getBGSprite();
	TodoReturn getBtnLabel();
	TodoReturn getBtnSprite();
	bool init(char const*, int, int, float, bool, char const*, char const*, float);
	bool init(cocos2d::CCSprite*, int, int, float, float, bool, char const*, bool);
	void setColor(cocos2d::ccColor3B);
	void setString(char const*);
	TodoReturn updateBGImage(char const*);
	TodoReturn updateSpriteBGSize();
	TodoReturn updateSpriteOffset(cocos2d::CCPoint);
}

[[link(android)]]
class CCAlertCircle : cocos2d::CCNode {
	// virtual ~CCAlertCircle();

	static CCAlertCircle* create();

	TodoReturn getCircle();

	virtual bool init();
	virtual void draw();

	CCAlertCircle* m_circle;
}

[[link(android)]]
class CCAnimatedSprite : cocos2d::CCSprite {
	// virtual ~CCAnimatedSprite();

	TodoReturn cleanupSprite();
	TodoReturn createWithType(char const*);
	TodoReturn getActiveSpriteMode();
	TodoReturn getActiveTween();
	TodoReturn getAnimatedSprite();
	TodoReturn getAnimManager();
	TodoReturn getDefaultAnimation();
	TodoReturn getDelegate();
	TodoReturn getNormalSprite();
	TodoReturn getSprite();
	TodoReturn initWithType(char const*);
	TodoReturn loadType(char const*);
	TodoReturn runAnimation(gd::string);
	TodoReturn runAnimationForced(gd::string);
	void setAnimatedSprite(CCPartAnimSprite*);
	void setColor(cocos2d::ccColor3B);
	void setDefaultAnimation(gd::string);
	void setDelegate(AnimatedSpriteDelegate*);
	void setNormalSprite(cocos2d::CCSprite*);
	void setSprite(cocos2d::CCSprite*);
	TodoReturn switchToMode(spriteMode);
	TodoReturn tweenToAnimation(gd::string, float);
	TodoReturn tweenToAnimationFinished();
	TodoReturn willPlayAnimation();

	virtual void setOpacity(unsigned char);
	virtual TodoReturn animationFinished(char const*);
	virtual TodoReturn animationFinishedO(cocos2d::CCObject*);

	gd::string m_type;
	gd::string m_activeTween;
	SpriteAnimationManager* m_spriteAnimationManager;
	cocos2d::CCSprite* m_sprite;
	cocos2d::CCSprite* m_normalSprite;
	CCPartAnimSprite* m_animatedSprite;
	spriteMode m_activeSpriteMode;
	gd::string m_defaultAnimation;
	AnimatedSpriteDelegate* m_delegate;
}

[[link(android)]]
class CCAnimateFrameCache : cocos2d::CCObject {
	// virtual ~CCAnimateFrameCache();

	static CCAnimateFrameCache* sharedSpriteFrameCache();

	TodoReturn addCustomSpriteFramesWithFile(char const*);
	TodoReturn addDict(cocos2d::CCDictionary*, char const*);
	TodoReturn addDict(DS_Dictionary*, char const*);
	TodoReturn addSpriteFramesWithFile(char const*);
	bool init();
	TodoReturn purgeSharedSpriteFrameCache();
	TodoReturn removeSpriteFrames();
	TodoReturn spriteFrameByName(char const*);

	cocos2d::CCDictionary* m_animationContainer;
	cocos2d::CCDictionary* _0x1c;
	cocos2d::CCDictionary* m_animDescDict;
}

[[link(android)]]
class CCBlockLayer : cocos2d::CCLayerColor {
	// virtual ~CCBlockLayer();

	static CCBlockLayer* create();

	TodoReturn getRemoveOnExit();
	void setRemoveOnExit(bool);

	virtual bool init();
	virtual void draw();
	virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void registerWithTouchDispatcher();
	virtual void keyBackClicked();
	virtual TodoReturn customSetup();
	virtual TodoReturn enterLayer();
	virtual TodoReturn exitLayer();
	virtual TodoReturn showLayer(bool);
	virtual TodoReturn hideLayer(bool);
	virtual TodoReturn layerVisible();
	virtual TodoReturn layerHidden();
	virtual TodoReturn enterAnimFinished();
	virtual TodoReturn disableUI();
	virtual TodoReturn enableUI();

	bool m_removeOnExit;
	bool _0x195; // Game checks this before calling decrementForcePrio
}

[[link(android)]]
class CCCircleAlert {
	// virtual ~CCCircleAlert();

	static CCCircleAlert* create(float, float, float);

	bool init(float, float, float);
}

[[link(android)]]
class CCCircleWave {
	// virtual ~CCCircleWave();
	// CCCircleWave();

	static CCCircleWave* create(float, float, float, bool, bool);
	static CCCircleWave* create(float, float, float, bool);

	TodoReturn baseSetup(float);
	TodoReturn followObject(cocos2d::CCNode*, bool);
	TodoReturn getBlendAdditive();
	TodoReturn getCircleMode();
	TodoReturn getColor();
	TodoReturn getDelegate();
	TodoReturn getLineWidth();
	TodoReturn getOpacity();
	TodoReturn getOpacityMod();
	TodoReturn getRadius();
	TodoReturn getWidth();
	bool init(float, float, float, bool, bool);
	void setBlendAdditive(bool);
	void setCircleMode(CircleMode);
	void setColor(cocos2d::ccColor3B);
	void setDelegate(CCCircleWaveDelegate*);
	void setLineWidth(int);
	void setOpacity(float);
	void setOpacityMod(float);
	void setPosition(cocos2d::CCPoint);
	void setRadius(float);
	void setWidth(float);
	TodoReturn updatePosition(float);

	virtual cocos2d::CCPoint const& getPosition();
	virtual void removeMeAndCleanup();
	virtual void draw();
	virtual void updateTweenAction(float, char const*);
}

[[link(android)]]
class CCCircleWaveDelegate {
	virtual TodoReturn circleWaveWillBeRemoved(CCCircleWave*);
}

[[link(android)]]
class CCContentLayer {
	// virtual ~CCContentLayer();

	static CCContentLayer* create(cocos2d::ccColor4B const&, float, float);

	virtual void setPosition(cocos2d::CCPoint const&);
}

[[link(android)]]
class CCCountdown {
	// virtual ~CCCountdown();

	static CCCountdown* create();

	TodoReturn lapFinished();
	TodoReturn startTimerWithSeconds(float, cocos2d::SEL_CallFunc, cocos2d::CCNode*);

	virtual bool init();
	virtual void setOpacity(unsigned char);
}

[[link(android)]]
class CCCounterLabel {
	// virtual ~CCCounterLabel();

	static CCCounterLabel* create(char const*, char const*, int, FormatterType);

	TodoReturn calculateStepSize();
	TodoReturn disableCounter();
	TodoReturn enableCounter();
	TodoReturn fastUpdateCounter();
	TodoReturn getCurrentCount();
	TodoReturn getTargetCount();
	bool init(char const*, char const*, int, FormatterType);
	void setTargetCount(int);
	TodoReturn setupFormatter(FormatterType);
	TodoReturn updateCounter(float);
	TodoReturn updateString();
}

[[link(android)]]
class CCExtenderNode {
	void setOpacity(unsigned int);
}

[[link(android)]]
class CCIndexPath {
	// virtual ~CCIndexPath();

	TodoReturn CCIndexPathWithSectionRow(int, int);
}

[[link(android)]]
class CCLightFlash {
	// virtual ~CCLightFlash();

	static CCLightFlash* create();

	TodoReturn cleanupFlash();
	TodoReturn fadeAndRemove();
	TodoReturn getFlashP();
	TodoReturn getFlashZ();
	TodoReturn playEffect(cocos2d::CCPoint, cocos2d::ccColor3B, float, float, float, float, float, float, float, float, float, float, float, float, float, float, int, bool, bool, float);
	TodoReturn removeLights();
	void setFlashP(cocos2d::CCNode*);
	void setFlashZ(int);
	TodoReturn showFlash();

	virtual bool init();
}

[[link(android)]]
class CCLightStrip {
	// virtual ~CCLightStrip();

	static CCLightStrip* create(float, float, float, float, float);

	TodoReturn getColor();
	TodoReturn getHeight();
	TodoReturn getOpacity();
	TodoReturn getWidth();
	bool init(float, float, float, float, float);
	void setColor(cocos2d::ccColor3B);
	void setHeight(float);
	void setOpacity(float);
	void setWidth(float);

	virtual void draw();
	virtual void updateTweenAction(float, char const*);
}

[[link(android)]]
class CCMenuItemSpriteExtra : cocos2d::CCMenuItemSprite {
	// virtual ~CCMenuItemSpriteExtra();
	// CCMenuItemSpriteExtra();

	static CCMenuItemSpriteExtra* create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler);

	TodoReturn getClickSound();
	TodoReturn getDarkenClick();
	TodoReturn getOriginalScale();
	TodoReturn getScaleVar();
	TodoReturn getShouldAnimate();
	TodoReturn getVolume();
	bool init(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler);
	void setClickSound(gd::string);
	void setDarkenClick(bool);
	void setOriginalScale(float);
	void setScaleVar(float);
	void setShouldAnimate(bool);
	void setSizeMult(float);
	void setVolume(float);

	virtual void activate();
	virtual void selected();
	virtual void unselected();

	float m_scaleVar;
	float m_originalScale;
	bool m_shouldAnimate;
	bool m_darkenClick;
	float m_volume;
	gd::string m_clickSound;
}

[[link(android)]]
class CCMenuItemToggler : cocos2d::CCMenuItem {
	// virtual ~CCMenuItemToggler();

	static CCMenuItemToggler* create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler);

	TodoReturn activeItem();
	TodoReturn getDontToggle();
	TodoReturn getIsActive();
	TodoReturn getNormalButton();
	TodoReturn getSelectedButton();
	bool init(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler);
	TodoReturn normalTouch(cocos2d::CCObject*);
	TodoReturn selectedTouch(cocos2d::CCObject*);
	void setDontToggle(bool);
	void setSizeMult(float);
	TodoReturn toggle(bool);

	virtual void activate();
	virtual void selected();
	virtual void unselected();
	virtual void setEnabled(bool);
}

[[link(android)]]
class CCMoveCNode {
	// virtual ~CCMoveCNode();

	static CCMoveCNode* create();

	bool init();
}

[[link(android)]]
class CCPartAnimSprite {
	// virtual ~CCPartAnimSprite();

	TodoReturn changeTextureOfID(char const*, char const*);
	TodoReturn countParts();
	TodoReturn createWithAnimDesc(char const*, cocos2d::CCTexture2D*);
	TodoReturn dirtify();
	TodoReturn getSpriteContainer();
	TodoReturn getSpriteForKey(char const*);
	TodoReturn initWithAnimDesc(char const*, cocos2d::CCTexture2D*);
	void setColor(cocos2d::ccColor3B);
	void setFlipX(bool);
	void setFlipY(bool);
	TodoReturn transformSprite(frameValues);
	TodoReturn tweenSpriteTo(frameValues, float);
	TodoReturn tweenToFrame(cocos2d::CCSpriteFrame*, float);

	virtual void setScaleX(float);
	virtual void setScaleY(float);
	virtual void setScale(float);
	virtual void setOpacity(unsigned char);
	virtual void setBlendFunc(cocos2d::_ccBlendFunc);
	virtual void setDisplayFrame(cocos2d::CCSpriteFrame*);
	virtual bool isFrameDisplayed(cocos2d::CCSpriteFrame*);
	virtual cocos2d::CCSpriteFrame* displayFrame();
}

[[link(android)]]
class CCScrollLayerExt {
	// virtual ~CCScrollLayerExt();
	CCScrollLayerExt(cocos2d::CCRect);

	TodoReturn constraintContent();
	TodoReturn getBottomPadding();
	TodoReturn getClipsToBounds();
	TodoReturn getContentLayer();
	TodoReturn getHorizontalScrollIndicator();
	TodoReturn getIsScrolling();
	TodoReturn getIsTouch();
	TodoReturn getLockHorizontal();
	TodoReturn getLockVertical();
	TodoReturn getMaxOffsetBottom();
	TodoReturn getMaxOffsetTop();
	TodoReturn getMaxY();
	TodoReturn getMinY();
	TodoReturn getScrollDelegate();
	TodoReturn getShowsHorizontalScrollIndicator();
	TodoReturn getShowsVerticalScrollIndicator();
	TodoReturn getTopPadding();
	TodoReturn getTouchDispatch();
	TodoReturn getVerticalScrollIndicator();
	TodoReturn moveToTop();
	TodoReturn moveToTopWithOffset(float);
	TodoReturn scrollingEnd();
	TodoReturn scrollLayer(float);
	void setBottomPadding(float);
	void setClipsToBounds(bool);
	void setContentLayer(cocos2d::CCLayerColor*);
	void setContentLayerSize(cocos2d::CCSize);
	void setContentOffset(cocos2d::CCPoint, bool);
	void setHorizontalScrollIndicator(cocos2d::CCLayerColor*);
	void setIsScrolling(bool);
	void setIsTouch(bool);
	void setLockHorizontal(bool);
	void setLockVertical(bool);
	void setMaxOffsetBottom(float);
	void setMaxOffsetTop(float);
	void setScrollDelegate(CCScrollLayerExtDelegate*);
	void setShowsHorizontalScrollIndicator(bool);
	void setShowsVerticalScrollIndicator(bool);
	void setTopPadding(float);
	void setTouchDispatch(bool);
	void setVerticalScrollIndicator(cocos2d::CCLayerColor*);
	TodoReturn updateIndicators(float);

	virtual void visit();
	virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void registerWithTouchDispatcher();
	virtual TodoReturn preVisitWithClippingRect(cocos2d::CCRect);
	virtual TodoReturn postVisit();
}

[[link(android)]]
class CCScrollLayerExtDelegate {
	virtual TodoReturn scrllViewWillBeginDecelerating(CCScrollLayerExt*);
	virtual TodoReturn scrollViewDidEndDecelerating(CCScrollLayerExt*);
	virtual TodoReturn scrollViewTouchMoving(CCScrollLayerExt*);
	virtual TodoReturn scrollViewDidEndMoving(CCScrollLayerExt*);
	virtual TodoReturn scrollViewTouchBegin(CCScrollLayerExt*);
	virtual TodoReturn scrollViewTouchEnd(CCScrollLayerExt*);
}

[[link(android)]]
class CCSpritePart {
	// virtual ~CCSpritePart();

	static CCSpritePart* create(cocos2d::CCTexture2D*);

	TodoReturn createWithSpriteFrameName(char const*);
	TodoReturn getActiveFrame();
	TodoReturn getBeingUsed();
	TodoReturn hideInactive();
	TodoReturn resetTextureRect();
	void setActiveFrame(gd::string);
	void setBeingUsed(bool);
	TodoReturn updateDisplayFrame(char const*);
}

[[link(android)]]
class CCSpritePlus : cocos2d::CCSprite {
	// virtual ~CCSpritePlus();

	TodoReturn addFollower(cocos2d::CCNode*);
	TodoReturn createWithSpriteFrame(cocos2d::CCSpriteFrame*);
	TodoReturn createWithSpriteFrameName(char const*);
	TodoReturn followSprite(CCSpritePlus*);
	TodoReturn getFollowScale();
	TodoReturn removeFollower(cocos2d::CCNode*);
	void setFollowScale(bool);
	TodoReturn stopFollow();

	virtual void setScaleX(float);
	virtual void setScaleY(float);
	virtual void setScale(float);
	virtual void setPosition(cocos2d::CCPoint const&);
	virtual void setRotation(float);
	virtual bool initWithTexture(cocos2d::CCTexture2D*);
	virtual bool initWithSpriteFrameName(char const*);
	virtual void setFlipX(bool);
	virtual void setFlipY(bool);

	cocos2d::CCArray* m_followers;
	CCSpritePlus* m_target;
	bool m_hasFollowers;
	bool m_followScale;
}

[[link(android)]]
class CCTextInputNode {
	// virtual ~CCTextInputNode();
	// CCTextInputNode();

	static CCTextInputNode* create(float, float, char const*, char const*, int, char const*);

	TodoReturn forceOffset();
	TodoReturn getCharLimit();
	TodoReturn getClearAtZero();
	TodoReturn getDelegate();
	TodoReturn getForceOffset();
	TodoReturn getIsPassword();
	TodoReturn getLabel();
	TodoReturn getProfanityFilter();
	TodoReturn getString();
	TodoReturn getTextField();
	bool init(float, float, char const*, char const*, int, char const*);
	TodoReturn onTextFieldInsertText(cocos2d::CCTextFieldTTF*, char const*, int);
	TodoReturn refreshLabel();
	void setAllowedChars(gd::string);
	void setCharLimit(int);
	void setClearAtZero(bool);
	void setDelegate(TextInputDelegate*);
	void setForceOffset(bool);
	void setIsPassword(bool);
	void setLabelNormalColor(cocos2d::ccColor3B);
	void setLabelPlaceholderColor(cocos2d::ccColor3B);
	void setLabelPlaceholderScale(float);
	void setMaxLabelScale(float);
	void setMaxLabelWidth(float);
	void setProfanityFilter(bool);
	void setString(gd::string);
	TodoReturn updateBlinkLabel();
	TodoReturn updateLabel(gd::string);

	virtual void visit();
	virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void registerWithTouchDispatcher();
	virtual void textChanged();
	virtual TodoReturn onClickTrackNode(bool);
	virtual void keyboardWillShow(cocos2d::CCIMEKeyboardNotificationInfo&);
	virtual void keyboardWillHide(cocos2d::CCIMEKeyboardNotificationInfo&);
	virtual bool onTextFieldAttachWithIME(cocos2d::CCTextFieldTTF*);
	virtual bool onTextFieldDetachWithIME(cocos2d::CCTextFieldTTF*);
}

[[link(android)]]
class CheckpointObject {
	// virtual ~CheckpointObject();
	// CheckpointObject();

	static CheckpointObject* create();

	TodoReturn getActiveEnterEffect();
	TodoReturn getCameraPos();
	TodoReturn getColorAction(ColorAction*, cocos2d::ccColor3B);
	TodoReturn getColorManagerState();
	TodoReturn getDualMode();
	TodoReturn getIsFlipped();
	TodoReturn getObject();
	TodoReturn getPlayerCheck01();
	TodoReturn getPlayerCheck02();
	TodoReturn getPortalObject();
	TodoReturn getTimeStamp();
	void setActiveEnterEffect(EnterEffect);
	void setCameraPos(cocos2d::CCPoint);
	void setColorManagerState(gd::string);
	void setDualMode(bool);
	void setIsFlipped(bool);
	void setObject(GameObject*);
	void setPlayerCheck01(PlayerCheckpoint*);
	void setPlayerCheck02(PlayerCheckpoint*);
	void setPortalObject(GameObject*);
	void setTimeStamp(double);

	virtual bool init();
}

[[link(android)]]
class ColorAction {
	// virtual ~ColorAction();
	// ColorAction();

	static ColorAction* create();
	static ColorAction* create(cocos2d::ccColor3B, bool, int);
	static ColorAction* create(cocos2d::ccColor3B, cocos2d::ccColor3B, float, double, bool, int, float, float);
	static ColorAction* create(cocos2d::ccColor3B, cocos2d::ccColor3B, float, double, bool);

	TodoReturn getBlend();
	TodoReturn getCopy();
	TodoReturn getCopyOpacity();
	TodoReturn getCurrentColor();
	TodoReturn getCurrentOpacity();
	TodoReturn getCustom();
	TodoReturn getDeltaTime();
	TodoReturn getDidProcess();
	TodoReturn getDuration();
	TodoReturn getFromColor();
	TodoReturn getFromOpacity();
	TodoReturn getHSVValue();
	TodoReturn getIgnore();
	TodoReturn getIgnoreCopyColor();
	TodoReturn getIndex();
	TodoReturn getInheritColorIndex();
	TodoReturn getSaveString();
	TodoReturn getToColor();
	TodoReturn getToOpacity();
	bool init(cocos2d::ccColor3B, cocos2d::ccColor3B, float, double, bool, int, float, float);
	TodoReturn resetAction();
	void setBlend(bool);
	void setCopyOpacity(bool);
	void setCurrentColor(cocos2d::ccColor3B);
	void setCurrentOpacity(float);
	void setCustom(int);
	void setDeltaTime(float);
	void setDidProcess(bool);
	void setDuration(float);
	void setFromColor(cocos2d::ccColor3B);
	void setFromOpacity(float);
	void setHSVValue(cocos2d::ccHSVValue);
	void setIgnore(bool);
	void setIgnoreCopyColor(bool);
	void setIndex(int);
	void setInheritColorIndex(int);
	void setToColor(cocos2d::ccColor3B);
	void setToOpacity(float);
	TodoReturn setupFromDict(cocos2d::CCDictionary*);
	TodoReturn setupFromString(gd::string);
	TodoReturn step(float);
	TodoReturn updateCustomColor(cocos2d::ccColor3B, cocos2d::ccColor3B);
}

[[link(android)]]
class ColorActionSprite {
	// virtual ~ColorActionSprite();

	static ColorActionSprite* create();

	TodoReturn getActiveColor();
	TodoReturn getQueuedColorChange();
	void setActiveColor(cocos2d::ccColor3B const&);
	void setQueuedColorChange(cocos2d::ccColor3B);

	virtual bool init();
}

[[link(android)]]
class ColorChannelSprite {
	// virtual ~ColorChannelSprite();

	static ColorChannelSprite* create();

	TodoReturn updateBlending(bool);
	TodoReturn updateCopyLabel(int, bool);
	TodoReturn updateOpacity(float);
	TodoReturn updateValues(ColorAction*);

	virtual bool init();
}

[[link(android)]]
class ColoredSection {
	// ~ColoredSection();

	static ColoredSection* create(cocos2d::ccColor3B, int, int);

	TodoReturn getCol();
	TodoReturn getEndPos();
	TodoReturn getStartPos();
	bool init(cocos2d::ccColor3B, int, int);
	void setCol(cocos2d::ccColor3B);
	void setEndPos(int);
	void setStartPos(int);
}

[[link(android)]]
class ColorSelectDelegate {
	TodoReturn colorSelectClosed(ColorSelectPopup*);
}

[[link(android)]]
class ColorSelectPopup {
	// virtual ~ColorSelectPopup();
	// ColorSelectPopup();

	static ColorSelectPopup* create(ColorAction*);
	static ColorSelectPopup* create(EffectGameObject*, cocos2d::CCArray*, ColorAction*);
	static ColorSelectPopup* create(EffectGameObject*, cocos2d::CCArray*);

	TodoReturn closeColorSelect(cocos2d::CCObject*);
	TodoReturn createToggleButton(gd::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint);
	TodoReturn getAction();
	TodoReturn getColorValue();
	TodoReturn getCustom();
	TodoReturn getCustom2();
	TodoReturn getDelegate();
	TodoReturn getDuration();
	TodoReturn getTargetOpacity();
	bool init(EffectGameObject*, cocos2d::CCArray*, ColorAction*);
	void onCopy(cocos2d::CCObject* sender);
	void onCopyOpacity(cocos2d::CCObject* sender);
	void onPaste(cocos2d::CCObject* sender);
	void onPlayerColor1(cocos2d::CCObject* sender);
	void onPlayerColor2(cocos2d::CCObject* sender);
	void onSelectSpecialColor(cocos2d::CCObject* sender);
	void onSpawnedByTrigger(cocos2d::CCObject* sender);
	void onTintGround(cocos2d::CCObject* sender);
	void onToggleHSVMode(cocos2d::CCObject* sender);
	void onToggleTintMode(cocos2d::CCObject* sender);
	void onTouchTriggered(cocos2d::CCObject* sender);
	void onUpdateCopyColor(cocos2d::CCObject* sender);
	void onUpdateCustomColor(cocos2d::CCObject* sender);
	TodoReturn selectColor(cocos2d::ccColor3B);
	void setDelegate(ColorSelectDelegate*);
	TodoReturn sliderChanged(cocos2d::CCObject*);
	TodoReturn updateColorValue();
	TodoReturn updateCopyColor();
	TodoReturn updateCopyColorTextInputLabel();
	TodoReturn updateCustomColorIdx();
	TodoReturn updateDuration();
	TodoReturn updateDurLabel();
	TodoReturn updateEditorLabel();
	TodoReturn updateHSVMode();
	TodoReturn updateHSVValue();
	TodoReturn updateOpacity();
	TodoReturn updateOpacityLabel();
	TodoReturn updateSpawnedByTrigger();
	TodoReturn updateTextInputLabel();
	TodoReturn updateTouchTriggered();

	virtual void keyBackClicked();
	virtual TodoReturn show();
	virtual TodoReturn determineStartValues();
	virtual TodoReturn textInputClosed(CCTextInputNode*);
	virtual void textChanged(CCTextInputNode*);
	virtual TodoReturn textInputShouldOffset(CCTextInputNode*, float);
	virtual TodoReturn textInputReturn(CCTextInputNode*);
	virtual TodoReturn colorValueChanged(cocos2d::ccColor3B);
	virtual TodoReturn colorSelectClosed(GJSpecialColorSelect*, int);
}

[[link(android)]]
class ColorSetupDelegate {
	virtual TodoReturn colorSetupClosed(int);
}

[[link(android)]]
class CommentCell {
	// virtual ~CommentCell();
	CommentCell(char const*, float, float);

	TodoReturn incrementDislikes();
	TodoReturn incrementLikes();
	TodoReturn loadFromComment(GJComment*);
	void onConfirmDelete(cocos2d::CCObject* sender);
	TodoReturn onDelete();
	void onLike(cocos2d::CCObject* sender);
	TodoReturn onUndelete();
	void onUnhide(cocos2d::CCObject* sender);
	void onViewProfile(cocos2d::CCObject* sender);
	TodoReturn updateBGColor(int);
	TodoReturn updateLabelValues();

	virtual bool init();
	virtual void draw();
	virtual TodoReturn likedItem(LikeItemType, int, bool);
	virtual void FLAlert_Clicked(FLAlertLayer*, bool);
}

[[link(android)]]
class CommentUploadDelegate {
	TodoReturn commentUploadFailed(int);

	virtual TodoReturn commentUploadFinished(int);
	virtual TodoReturn commentDeleteFailed(int, int);
}

[[link(android)]]
class ConfigureHSVWidget {
	// virtual ~ConfigureHSVWidget();

	static ConfigureHSVWidget* create(cocos2d::ccHSVValue, bool);

	TodoReturn getHSVVal();
	TodoReturn getIsMixed();
	bool init(cocos2d::ccHSVValue, bool);
	void onResetHSV(cocos2d::CCObject* sender);
	void onToggleSConst(cocos2d::CCObject* sender);
	void onToggleVConst(cocos2d::CCObject* sender);
	TodoReturn sliderChanged(cocos2d::CCObject*);
	TodoReturn updateLabels();
}

[[link(android)]]
class CreateGuidelinesLayer {
	// virtual ~CreateGuidelinesLayer();

	static CreateGuidelinesLayer* create(LevelSettingsObject*);

	TodoReturn doClearGuidelines();
	TodoReturn getMergedRecordString(gd::string, gd::string);
	bool init(LevelSettingsObject*);
	void onClearGuidelines(cocos2d::CCObject* sender);
	void onStop(cocos2d::CCObject* sender);
	TodoReturn toggleItems(bool);

	virtual void update(float);
	virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void registerWithTouchDispatcher();
	virtual void keyBackClicked();
	virtual void FLAlert_Clicked(FLAlertLayer*, bool);
	virtual void onClose(cocos2d::CCObject* sender);
	virtual void onInfo(cocos2d::CCObject* sender);
	virtual void onRecord(cocos2d::CCObject* sender);
}

[[link(android)]]
class CreateMenuItem {
	// virtual ~CreateMenuItem();

	static CreateMenuItem* create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler);

	TodoReturn getObjectFrame();
	TodoReturn getObjectKey();
	TodoReturn getPage();
	TodoReturn getTab();
	bool init(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler);
	void setObjectFrame(gd::string);
	void setObjectKey(int);
	void setPage(int);
	void setTab(int);
}

[[link(android)]]
class CreatorLayer {
	// virtual ~CreatorLayer();

	static CreatorLayer* create();

	void onBack(cocos2d::CCObject* sender);
	void onFeaturedLevels(cocos2d::CCObject* sender);
	void onLeaderboards(cocos2d::CCObject* sender);
	void onMapPacks(cocos2d::CCObject* sender);
	void onMyLevels(cocos2d::CCObject* sender);
	void onOnlineLevels(cocos2d::CCObject* sender);
	void onSavedLevels(cocos2d::CCObject* sender);
	TodoReturn scene();

	virtual bool init();
	virtual void keyBackClicked();
}

[[link(android)]]
class CustomizeObjectLayer {
	// virtual ~CustomizeObjectLayer();
	// CustomizeObjectLayer();

	static CustomizeObjectLayer* create(GameObject*, cocos2d::CCArray*);

	TodoReturn colorSelectClosed(ColorSelectPopup*);
	TodoReturn createToggleButton(gd::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint);
	TodoReturn determineStartValues();
	TodoReturn getActiveMode(bool);
	TodoReturn getButtonByTag(int);
	TodoReturn getHSV();
	TodoReturn highlightSelected(ButtonSprite*);
	bool init(GameObject*, cocos2d::CCArray*);
	void onBreakApart(cocos2d::CCObject* sender);
	void onBrowse(cocos2d::CCObject* sender);
	void onClear(cocos2d::CCObject* sender);
	void onClose(cocos2d::CCObject* sender);
	void onCopy(cocos2d::CCObject* sender);
	void onEditColor(cocos2d::CCObject* sender);
	void onHSV(cocos2d::CCObject* sender);
	void onNextColorChannel(cocos2d::CCObject* sender);
	void onPaste(cocos2d::CCObject* sender);
	void onSelectColor(cocos2d::CCObject* sender);
	void onSelectMode(cocos2d::CCObject* sender);
	void onUpdateCustomColor(cocos2d::CCObject* sender);
	TodoReturn toggleVisible();
	TodoReturn updateChannelLabel(int);
	TodoReturn updateColorSprite();
	TodoReturn updateCurrentSelection();
	TodoReturn updateCustomColorLabels();
	TodoReturn updateHSVButtons();
	TodoReturn updateSelected(int);

	virtual void keyBackClicked();
	virtual TodoReturn textInputOpened(CCTextInputNode*);
	virtual TodoReturn textInputClosed(CCTextInputNode*);
	virtual void textChanged(CCTextInputNode*);
	virtual TodoReturn hsvPopupClosed(HSVWidgetPopup*, cocos2d::ccHSVValue);
	virtual TodoReturn colorSetupClosed(int);
}

[[link(android)]]
class CustomListView {
	// virtual ~CustomListView();
	// CustomListView();

	static CustomListView* create(cocos2d::CCArray*, float, float, int, BoomListType);

	TodoReturn reloadAll();
	virtual void setupList();

	virtual TableViewCell* getListCell(char const*);
	virtual void loadCell(TableViewCell*, int);
}

[[link(android)]]
class CustomSongCell {
	// virtual ~CustomSongCell();
	CustomSongCell(char const*, float, float);

	TodoReturn loadFromObject(SongInfoObject*);
	void onDelete(cocos2d::CCObject* sender);
	TodoReturn updateBGColor(int);

	virtual bool init();
	virtual void draw();
}

[[link(android)]]
class CustomSongDelegate {
	virtual TodoReturn pure_virtual_00a3cd80() {} // TODO: figure out what function this is
	virtual TodoReturn pure_virtual_00a3cd84() {} // TODO: figure out what function this is
}

[[link(android)]]
class CustomSongLayer {
	// virtual ~CustomSongLayer();

	static CustomSongLayer* create(LevelSettingsObject*);

	TodoReturn getDelegate();
	bool init(LevelSettingsObject*);
	void onClose(cocos2d::CCObject* sender);
	void onCreateLines(cocos2d::CCObject* sender);
	void onGuidelines(cocos2d::CCObject* sender);
	void onInfo(cocos2d::CCObject* sender);
	void onNewgrounds(cocos2d::CCObject* sender);
	void onOptions(cocos2d::CCObject* sender);
	void onSearch(cocos2d::CCObject* sender);
	void onSongBrowser(cocos2d::CCObject* sender);
	void setDelegate(CustomSongLayerDelegate*);
	TodoReturn showNewgroundsMessage();

	virtual void keyBackClicked();
	virtual TodoReturn show();
	virtual void textChanged(CCTextInputNode*);
	virtual TodoReturn textInputOpened(CCTextInputNode*);
	virtual TodoReturn textInputClosed(CCTextInputNode*);
	virtual TodoReturn textInputShouldOffset(CCTextInputNode*, float);
	virtual TodoReturn textInputReturn(CCTextInputNode*);
	virtual TodoReturn dropDownLayerWillClose(GJDropDownLayer*);
}

[[link(android)]]
class CustomSongLayerDelegate {
	virtual TodoReturn customSongLayerClosed();
}

[[link(android)]]
class CustomSongWidget {
	// virtual ~CustomSongWidget();
	// CustomSongWidget();

	static CustomSongWidget* create(SongInfoObject*, LevelSettingsObject*, bool, bool, bool, bool, bool);

	TodoReturn downloadFailed();
	TodoReturn downloadSongFinished(SongInfoObject*);
	TodoReturn getReportSongSelect();
	TodoReturn getSongInfoIfUnloaded();
	TodoReturn getSongObject();
	bool init(SongInfoObject*, LevelSettingsObject*, bool, bool, bool, bool, bool);
	void onCancelDownload(cocos2d::CCObject* sender);
	void onDownload(cocos2d::CCObject* sender);
	void onGetSongInfo(cocos2d::CCObject* sender);
	void onMore(cocos2d::CCObject* sender);
	void onPlayback(cocos2d::CCObject* sender);
	void onSelect(cocos2d::CCObject* sender);
	void setReportSongSelect(bool);
	void setSongObject(SongInfoObject*);
	TodoReturn startDownload();
	TodoReturn startMonitorDownload();
	TodoReturn toggleUpdateButton(bool);
	TodoReturn updateDownloadProgress(float);
	TodoReturn updateError(GJSongError);
	TodoReturn updatePlaybackBtn();
	TodoReturn updateProgressBar(int);
	TodoReturn updateSongInfo();
	TodoReturn updateSongObject(SongInfoObject*);
	TodoReturn verifySongID(int);

	virtual TodoReturn loadSongInfoFinished(SongInfoObject*);
	virtual TodoReturn loadSongInfoFailed(int, GJSongError);
	virtual TodoReturn downloadSongFailed(int, GJSongError);
	virtual TodoReturn songStateChanged();
	virtual void FLAlert_Clicked(FLAlertLayer*, bool);
}

[[link(android)]]
class DownloadMessageDelegate {
	virtual TodoReturn downloadMessageFinished(GJUserMessage*);
	virtual TodoReturn downloadMessageFailed(int);
}

[[link(android)]]
class DrawGridLayer {
	// virtual ~DrawGridLayer();
	// DrawGridLayer();

	static DrawGridLayer* create(cocos2d::CCNode*, LevelEditorLayer*);

	TodoReturn addPlayer2Point(cocos2d::CCPoint, bool);
	TodoReturn addPlayerPoint(cocos2d::CCPoint);
	TodoReturn addToEffects(EffectGameObject*);
	TodoReturn addToGuides(GameObject*);
	TodoReturn addToSpeedObjects(GameObject*);
	TodoReturn clearPlayerPoints();
	TodoReturn getActiveGridNodeSize();
	TodoReturn getEffectSortDirty();
	TodoReturn getLastMusicX();
	TodoReturn getPortalMinMax(GameObject*);
	TodoReturn getTimeNeedsUpdate();
	bool init(cocos2d::CCNode*, LevelEditorLayer*);
	TodoReturn loadTimeMarkers(gd::string);
	TodoReturn removeFromEffects(EffectGameObject*);
	TodoReturn removeFromGuides(GameObject*);
	TodoReturn removeFromSpeedObjects(GameObject*);
	void setActiveGridNodeSize(float);
	void setEffectSortDirty(bool);
	TodoReturn sortSpeedObjects();
	TodoReturn timeForXPos(float);
	TodoReturn updateTimeMarkers();
	TodoReturn xPosForTime(float);

	virtual void update(float);
	virtual void draw();
}

[[link(android)]]
class DynamicScrollDelegate {
	virtual TodoReturn pure_virtual_00a54a68() {} // TODO: figure out what function this is
}

[[link(android)]]
class EditButtonBar {
	// virtual ~EditButtonBar();

	static EditButtonBar* create(cocos2d::CCArray*, cocos2d::CCPoint, int, bool, int, int);

	TodoReturn getPage();
	TodoReturn goToPage(int);
	bool init(cocos2d::CCArray*, cocos2d::CCPoint, int, bool, int, int);
	TodoReturn loadFromItems(cocos2d::CCArray*, int, int, bool);
	void onLeft(cocos2d::CCObject* sender);
	void onRight(cocos2d::CCObject* sender);
	TodoReturn reloadItems(int, int);
}

[[link(android)]]
class EditLevelLayer {
	// virtual ~EditLevelLayer();
	// EditLevelLayer();

	static EditLevelLayer* create(GJGameLevel*);

	TodoReturn closeTextInputs();
	TodoReturn confirmClone(cocos2d::CCObject*);
	TodoReturn confirmDelete(cocos2d::CCObject*);
	TodoReturn confirmMoveToTop(cocos2d::CCObject*);
	bool init(GJGameLevel*);
	void onBack(cocos2d::CCObject* sender);
	TodoReturn onClone();
	TodoReturn onDelete();
	void onEdit(cocos2d::CCObject* sender);
	void onHelp(cocos2d::CCObject* sender);
	void onLevelInfo(cocos2d::CCObject* sender);
	TodoReturn onMoveToTop();
	void onPlay(cocos2d::CCObject* sender);
	void onShare(cocos2d::CCObject* sender);
	void onTest(cocos2d::CCObject* sender);
	void onUpdateDescription(cocos2d::CCObject* sender);
	TodoReturn playStep2();
	TodoReturn playStep3();
	TodoReturn scene(GJGameLevel*);
	TodoReturn setupLevelInfo();
	TodoReturn updateDescText(char const*);
	TodoReturn verifyLevelName();

	virtual void keyBackClicked();
	virtual void keyDown(cocos2d::enumKeyCodes);
	virtual void FLAlert_Clicked(FLAlertLayer*, bool);
	virtual TodoReturn textInputOpened(CCTextInputNode*);
	virtual TodoReturn textInputClosed(CCTextInputNode*);
	virtual void textChanged(CCTextInputNode*);
	virtual TodoReturn uploadActionFinished(int, int);
	virtual TodoReturn uploadActionFailed(int, int);
	virtual TodoReturn onClosePopup(UploadActionPopup*);
}

[[link(android)]]
class EditorOptionsLayer {
	// virtual ~EditorOptionsLayer();
	// EditorOptionsLayer();

	static EditorOptionsLayer* create();

	void onButtonRows(cocos2d::CCObject* sender);
	void onButtonsPerRow(cocos2d::CCObject* sender);

	virtual bool init();
	virtual void onClose(cocos2d::CCObject* sender);
	virtual TodoReturn setupOptions();
}

[[link(android)]]
class EditorPauseLayer {
	// virtual ~EditorPauseLayer();
	// EditorPauseLayer();

	static EditorPauseLayer* create(LevelEditorLayer*);

	TodoReturn doResetUnused();
	bool init(LevelEditorLayer*);
	void onExitEditor(cocos2d::CCObject* sender);
	void onExitNoSave(cocos2d::CCObject* sender);
	void onHelp(cocos2d::CCObject* sender);
	void onKeybindings(cocos2d::CCObject* sender);
	void onOptions(cocos2d::CCObject* sender);
	void onResetUnusedColors(cocos2d::CCObject* sender);
	void onResume(cocos2d::CCObject* sender);
	void onSave(cocos2d::CCObject* sender);
	void onSaveAndExit(cocos2d::CCObject* sender);
	void onSaveAndPlay(cocos2d::CCObject* sender);
	void onSaveAndTest(cocos2d::CCObject* sender);
	void onSong(cocos2d::CCObject* sender);
	TodoReturn playStep2();
	TodoReturn playStep3();
	TodoReturn saveLevel();
	TodoReturn toggleDebugDraw(cocos2d::CCObject*);
	TodoReturn toggleEditorColorMode(cocos2d::CCObject*);
	TodoReturn toggleEditorGrid(cocos2d::CCObject*);
	TodoReturn toggleEditorGround(cocos2d::CCObject*);
	TodoReturn toggleEffectLines(cocos2d::CCObject*);
	TodoReturn toggleFollowPlayer(cocos2d::CCObject*);
	TodoReturn toggleGridOnTop(cocos2d::CCObject*);
	TodoReturn toggleIgnoreDamage(cocos2d::CCObject*);
	TodoReturn togglePlaytestMusic(cocos2d::CCObject*);
	TodoReturn toggleShowObjectInfo(cocos2d::CCObject*);
	TodoReturn uncheckAllPortals(cocos2d::CCObject*);
	TodoReturn updateSongButton();

	virtual void keyBackClicked();
	virtual void keyDown(cocos2d::enumKeyCodes);
	virtual TodoReturn customSetup();
	virtual void FLAlert_Clicked(FLAlertLayer*, bool);
}

[[link(android)]]
class EditorUI {
	// virtual ~EditorUI();
	// EditorUI();

	static EditorUI* create(LevelEditorLayer*);

	TodoReturn activateRotationControl(cocos2d::CCObject*);
	TodoReturn activateScaleControl(cocos2d::CCObject*);
	TodoReturn addSnapPosition(cocos2d::CCPoint);
	TodoReturn applyOffset(GameObject*);
	TodoReturn applySpecialOffset(cocos2d::CCPoint, GameObject*, cocos2d::CCPoint);
	TodoReturn changeSelectedObjects(cocos2d::CCArray*);
	TodoReturn clickOnPosition(cocos2d::CCPoint);
	TodoReturn colorSelectClosed(cocos2d::ccColor3B);
	TodoReturn constrainGameLayerPosition();
	TodoReturn constrainGameLayerPosition(float, float);
	TodoReturn copyObjects(cocos2d::CCArray*);
	TodoReturn createCustomItems();
	TodoReturn createMoveMenu();
	TodoReturn createUndoSelectObject(bool);
	TodoReturn deactivateRotationControl();
	TodoReturn deactivateScaleControl();
	TodoReturn deleteObject(GameObject*, bool);
	TodoReturn deselectAll();
	TodoReturn deselectObject();
	TodoReturn deselectObject(GameObject*);
	TodoReturn deselectTargetPortals();
	TodoReturn disableButton(CreateMenuItem*);
	TodoReturn editButtonUsable();
	TodoReturn editGroup(cocos2d::CCObject*);
	TodoReturn editObject(cocos2d::CCObject*);
	TodoReturn enableButton(CreateMenuItem*);
	TodoReturn findSnapObject(cocos2d::CCArray*, float);
	TodoReturn findSnapObject(cocos2d::CCPoint, float);
	TodoReturn flipObjectsX(cocos2d::CCArray*);
	TodoReturn flipObjectsY(cocos2d::CCArray*);
	TodoReturn getButton(char const*, int, cocos2d::SEL_MenuHandler, cocos2d::CCMenu*);
	TodoReturn getCreateBtn(int, int);
	TodoReturn getCreateMenuItemButton(cocos2d::CCSprite*, cocos2d::SEL_MenuHandler, cocos2d::CCMenu*, float, int, cocos2d::CCPoint);
	TodoReturn getCycledObject(cocos2d::CCArray*, bool);
	TodoReturn getEditMode();
	TodoReturn getGridSnappedPos(cocos2d::CCPoint);
	TodoReturn getGroupCenter(cocos2d::CCArray*, bool);
	TodoReturn getLimitedPosition(cocos2d::CCPoint);
	TodoReturn getLimitY();
	TodoReturn getModeBtn(char const*, int);
	TodoReturn getMusicGuideActive();
	TodoReturn getRelativeOffset(GameObject*);
	TodoReturn getSelectedObjects();
	TodoReturn getSpriteButton(char const*, cocos2d::SEL_MenuHandler, cocos2d::CCMenu*, float, int, cocos2d::CCPoint);
	TodoReturn getSpriteButton(char const*, cocos2d::SEL_MenuHandler, cocos2d::CCMenu*, float);
	TodoReturn getSpriteButton(cocos2d::CCSprite*, cocos2d::SEL_MenuHandler, cocos2d::CCMenu*, float, int, cocos2d::CCPoint);
	TodoReturn getStoredUndoObject();
	TodoReturn getTouchPoint(cocos2d::CCTouch*, cocos2d::CCEvent*);
	TodoReturn getXMin(int);
	bool init(LevelEditorLayer*);
	bool isSpecialSnapObject(int);
	TodoReturn menuItemFromObjectString(gd::string, int);
	TodoReturn moveForCommand(EditCommand);
	TodoReturn moveGamelayer(cocos2d::CCPoint);
	TodoReturn moveObject(GameObject*, cocos2d::CCPoint);
	TodoReturn moveObjectCall(cocos2d::CCObject*);
	TodoReturn moveObjectCall(EditCommand);
	TodoReturn offsetForKey(int);
	void onCopy(cocos2d::CCObject* sender);
	TodoReturn onCreate();
	void onCreateButton(cocos2d::CCObject* sender);
	TodoReturn onCreateObject(int);
	void onDelete(cocos2d::CCObject* sender);
	void onDeleteAll(cocos2d::CCObject* sender);
	void onDeleteCustomItem(cocos2d::CCObject* sender);
	void onDeleteInfo(cocos2d::CCObject* sender);
	void onDeleteSelected(cocos2d::CCObject* sender);
	void onDeleteSelectedType(cocos2d::CCObject* sender);
	void onDeleteStartPos(cocos2d::CCObject* sender);
	void onDeselectAll(cocos2d::CCObject* sender);
	void onDuplicate(cocos2d::CCObject* sender);
	void onGroupDown(cocos2d::CCObject* sender);
	void onGroupUp(cocos2d::CCObject* sender);
	void onNewCustomItem(cocos2d::CCObject* sender);
	void onPaste(cocos2d::CCObject* sender);
	void onPause(cocos2d::CCObject* sender);
	void onPlayback(cocos2d::CCObject* sender);
	void onPlaytest(cocos2d::CCObject* sender);
	void onSelectBuildTab(cocos2d::CCObject* sender);
	void onSettings(cocos2d::CCObject* sender);
	void onStopPlaytest(cocos2d::CCObject* sender);
	void onToggleGuide(cocos2d::CCObject* sender);
	void onUpdateDeleteFilter(cocos2d::CCObject* sender);
	TodoReturn orderDownCustomItem(cocos2d::CCObject*);
	TodoReturn orderUpCustomItem(cocos2d::CCObject*);
	TodoReturn pasteObjects(gd::string);
	TodoReturn playerTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
	TodoReturn playerTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
	TodoReturn playtestStopped();
	TodoReturn positionIsInSnapped(cocos2d::CCPoint);
	TodoReturn positionWithoutOffset(GameObject*);
	TodoReturn recreateButtonTabs();
	TodoReturn redoLastAction(cocos2d::CCObject*);
	TodoReturn reloadCustomItems();
	TodoReturn removeOffset(GameObject*);
	TodoReturn repositionObjectsToCenter(cocos2d::CCArray*, cocos2d::CCPoint, bool);
	TodoReturn resetUI();
	TodoReturn rotateObjects(cocos2d::CCArray*, float, cocos2d::CCPoint);
	TodoReturn rotationforCommand(EditCommand);
	TodoReturn scaleChanged(float);
	TodoReturn scaleObjects(cocos2d::CCArray*, float, cocos2d::CCPoint);
	TodoReturn selectBuildTab(int);
	TodoReturn selectObject(GameObject*);
	TodoReturn selectObjects(cocos2d::CCArray*);
	TodoReturn selectObjectsInRect(cocos2d::CCRect);
	void setEditMode(EditMode);
	void setStoredUndoObject(UndoObject*);
	TodoReturn setupCreateMenu();
	TodoReturn setupDeleteMenu();
	TodoReturn setupEditMenu();
	TodoReturn shouldDeleteObject(GameObject*);
	TodoReturn shouldSnap(GameObject*);
	TodoReturn showDeleteConfirmation();
	TodoReturn showMaxCoinError();
	TodoReturn showMaxError();
	TodoReturn showUI(bool);
	TodoReturn sliderChanged(cocos2d::CCObject*);
	TodoReturn toggleDuplicateButton();
	TodoReturn toggleEditObjectButton();
	TodoReturn toggleEnableRotate(cocos2d::CCObject*);
	TodoReturn toggleFreeMove(cocos2d::CCObject*);
	TodoReturn toggleGuideButton();
	TodoReturn toggleMode(cocos2d::CCObject*);
	TodoReturn toggleObjectInfoLabel();
	TodoReturn toggleSnap(cocos2d::CCObject*);
	TodoReturn toggleSpecialEditButtons();
	TodoReturn toggleSwipe(cocos2d::CCObject*);
	TodoReturn transformObject(GameObject*, EditCommand, bool);
	TodoReturn transformObjectCall(cocos2d::CCObject*);
	TodoReturn transformObjectCall(EditCommand);
	TodoReturn tryDeleteObject(GameObject*, bool);
	TodoReturn tryUpdateTimeMarkers();
	TodoReturn undoLastAction(cocos2d::CCObject*);
	TodoReturn updateButtons();
	TodoReturn updateCreateMenu(bool);
	TodoReturn updateDeleteButtons();
	TodoReturn updateDeleteMenu();
	TodoReturn updateEditMenu();
	TodoReturn updateGridNodeSize();
	TodoReturn updateGridNodeSize(int);
	TodoReturn updateGroupIDLabel();
	TodoReturn updateObjectInfoLabel();
	TodoReturn updatePercentLabel();
	TodoReturn updatePlaybackBtn();
	TodoReturn updateSlider();
	TodoReturn updateZoom(float);
	TodoReturn valueFromXPos(float);
	TodoReturn xPosFromValue(float);
	TodoReturn zoomGameLayer(bool);
	TodoReturn zoomIn(cocos2d::CCObject*);
	TodoReturn zoomOut(cocos2d::CCObject*);

	virtual void draw();
	virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void registerWithTouchDispatcher();
	virtual void keyBackClicked();
	virtual void keyDown(cocos2d::enumKeyCodes);
	virtual void FLAlert_Clicked(FLAlertLayer*, bool);
	virtual TodoReturn songStateChanged();
	virtual void keyUp(cocos2d::enumKeyCodes);
	virtual void scrollWheel(float, float);
	virtual TodoReturn angleChangeBegin();
	virtual TodoReturn angleChangeEnded();
	virtual TodoReturn angleChanged(float);
	virtual TodoReturn updateScaleControl();
	virtual TodoReturn scaleChangeBegin();
	virtual TodoReturn scaleChangeEnded();
}

[[link(android)]]
class EditTriggersPopup {
	// virtual ~EditTriggersPopup();

	static EditTriggersPopup* create(EffectGameObject*, cocos2d::CCArray*);

	TodoReturn createToggleButton(gd::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint);
	bool init(EffectGameObject*, cocos2d::CCArray*);
	void onSpawnedByTrigger(cocos2d::CCObject* sender);
	void onTouchTriggered(cocos2d::CCObject* sender);
	TodoReturn updateSpawnedByTrigger();
	TodoReturn updateTouchTriggered();

	virtual void keyBackClicked();
	virtual TodoReturn show();
	virtual TodoReturn determineStartValues();
	virtual void onClose(cocos2d::CCObject* sender);
}

[[link(android)]]
class EffectGameObject {
	// virtual ~EffectGameObject();
	// EffectGameObject();

	static EffectGameObject* create(char const*);

	TodoReturn customObjectSetup(gd::map<gd::string, gd::string>*);
	TodoReturn getCopyColorIdx();
	TodoReturn getCopyOpacity();
	TodoReturn getCopyPlayerColor1();
	TodoReturn getCopyPlayerColor2();
	TodoReturn getCustomColorBlend();
	TodoReturn getEffectDuration();
	TodoReturn getEffectOrder();
	TodoReturn getEffectSpawnPos();
	TodoReturn getEnableGroup();
	TodoReturn getFadeInTime();
	TodoReturn getFadeOutTime();
	TodoReturn getFromColor();
	TodoReturn getFromOpacity();
	TodoReturn getGroupMainOnly();
	TodoReturn getGroupSecondaryOnly();
	TodoReturn getHoldTime();
	TodoReturn getHSVValue();
	TodoReturn getMoveCommandEasing();
	TodoReturn getMoveCommandPos();
	TodoReturn getMoveLockX();
	TodoReturn getMoveLockY();
	TodoReturn getNextObject();
	TodoReturn getPulseMode();
	TodoReturn getPulseTargetType();
	TodoReturn getSaveString();
	TodoReturn getSpawnDelay();
	TodoReturn getStartTime();
	TodoReturn getTargetColorIndex();
	TodoReturn getTargetID();
	TodoReturn getTargetOpacity();
	TodoReturn getTintColor();
	TodoReturn getTintGround();
	TodoReturn getToColor();
	TodoReturn getToOpacity();
	TodoReturn getWasProcessed();
	bool init(char const*);
	void setCopyColorIdx(int);
	void setCopyOpacity(bool);
	void setCopyPlayerColor1(bool);
	void setCopyPlayerColor2(bool);
	void setCustomColorBlend(bool);
	void setEffectDuration(float);
	void setEffectOrder(int);
	void setEffectSpawnPos(float);
	void setEnableGroup(bool);
	void setFadeInTime(float);
	void setFadeOutTime(float);
	void setFromColor(cocos2d::ccColor3B);
	void setFromOpacity(float);
	void setGroupMainOnly(bool);
	void setGroupSecondaryOnly(bool);
	void setHoldTime(float);
	void setHSVValue(cocos2d::ccHSVValue);
	void setMoveCommandEasing(int);
	void setMoveCommandPos(cocos2d::CCPoint);
	void setMoveLockX(bool);
	void setMoveLockY(bool);
	void setNextObject(EffectGameObject*);
	void setPulseMode(int);
	void setPulseTargetType(int);
	void setSpawnDelay(float);
	void setStartTime(float);
	void setTargetID(int);
	void setTargetOpacity(float);
	void setTintColor(cocos2d::ccColor3B);
	void setTintGround(bool);
	void setToColor(cocos2d::ccColor3B);
	void setToOpacity(float);
	void setWasProcessed(bool);
	TodoReturn triggerObject();
	TodoReturn updateSpecialColor();

	virtual TodoReturn customSetup();
	virtual TodoReturn spawnXPosition();
}

[[link(android)]]
class EndLevelLayer {
	// virtual ~EndLevelLayer();
	// EndLevelLayer();

	static EndLevelLayer* create();

	TodoReturn coinEnterFinished(cocos2d::CCPoint);
	TodoReturn coinEnterFinishedO(cocos2d::CCObject*);
	TodoReturn getCoinString();
	TodoReturn getEndText();
	TodoReturn goEdit();
	void onEdit(cocos2d::CCObject* sender);
	void onEveryplay(cocos2d::CCObject* sender);
	void onMenu(cocos2d::CCObject* sender);
	void onReplay(cocos2d::CCObject* sender);
	TodoReturn playCoinEffect(float);
	TodoReturn playStarEffect(float);
	TodoReturn starEnterFinished();
	TodoReturn tryShowBanner(float);

	virtual void keyBackClicked();
	virtual void keyDown(cocos2d::enumKeyCodes);
	virtual TodoReturn customSetup();
	virtual TodoReturn showLayer(bool);
	virtual TodoReturn enterAnimFinished();
	virtual void keyUp(cocos2d::enumKeyCodes);
}

[[link(android)]]
class EndPortalObject {
	// virtual ~EndPortalObject();

	static EndPortalObject* create();

	TodoReturn calculateSpawnXPos();
	TodoReturn triggerObject();
	TodoReturn updateColors(cocos2d::ccColor3B);

	virtual bool init();
	virtual void setPosition(cocos2d::CCPoint const&);
	virtual void setVisible(bool);
}

[[link(android)]]
class EveryplayToolbox {
	TodoReturn firstSetup();
	bool isEveryplaySupported();
	bool isLowEndDevice();
	bool isPaused();
	bool isRecording();
	bool isRecordingSupported();
	TodoReturn pauseRecording();
	TodoReturn playLastRecording();
	TodoReturn resumeRecording();
	void setMetadataFromLevel(GJGameLevel*);
	TodoReturn showEveryplay();
	TodoReturn startRecording();
	TodoReturn stopRecording();
}

[[link(android)]]
class ExtendedLayer {
	// virtual ~ExtendedLayer();

	static ExtendedLayer* create();

	TodoReturn getDelegate();
	void setDelegate(BoomScrollLayerDelegate*);

	virtual bool init();
	virtual void setPosition(cocos2d::CCPoint const&);
}

[[link(android)]]
class FileOperation {
	TodoReturn getFilePath();
	TodoReturn readFile();
	TodoReturn saveFile();
}

[[link(android)]]
class FileSaveManager {
	// virtual ~FileSaveManager();

	static FileSaveManager* sharedState();

	TodoReturn getShopItems();
	TodoReturn getStoreData();
	TodoReturn loadDataFromFile(char const*);

	virtual bool init();
	virtual TodoReturn firstLoad();
}

[[link(android)]]
class FLAlertLayer : cocos2d::CCLayerColor {
	// virtual ~FLAlertLayer();
	// FLAlertLayer();

	static FLAlertLayer* create(FLAlertLayerProtocol*, char const*, gd::string, char const*, char const*, float, bool, float);
	static FLAlertLayer* create(FLAlertLayerProtocol*, char const*, gd::string, char const*, char const*, float);
	static FLAlertLayer* create(FLAlertLayerProtocol*, char const*, gd::string, char const*, char const*);
	static FLAlertLayer* create(char const* title, gd::string desc, char const* btn)
	{
		return create(nullptr, title, desc, btn, nullptr);
	}

	TodoReturn getBtn1();
	TodoReturn getBtn2();
	TodoReturn getInternalLayer();
	TodoReturn getPParent();
	TodoReturn getReverseKeyBack();
	TodoReturn getShowInstant();
	TodoReturn getTargetScene();
	TodoReturn getZValue();
	bool init(FLAlertLayerProtocol*, char const*, gd::string, char const*, char const*, float, bool, float);
	void onBtn1(cocos2d::CCObject* sender);
	void onBtn2(cocos2d::CCObject* sender);
	void setBtn1(ButtonSprite*);
	void setBtn2(ButtonSprite*);
	void setPParent(FLAlertLayerProtocol*);
	void setReverseKeyBack(bool);
	void setShowInstant(bool);
	void setTargetScene(cocos2d::CCNode*);
	void setZValue(int);

	virtual void onEnter();
	virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void registerWithTouchDispatcher();
	virtual void keyBackClicked();
	virtual void keyDown(cocos2d::enumKeyCodes);
	virtual void show();

	cocos2d::CCMenu* m_buttonMenu;
	PAD = android 0x4;
	FLAlertLayerProtocol* m_pParent;
	cocos2d::CCNode* m_targetScene;
	bool m_reverseKeyBack;
	cocos2d::CCLayer* m_mainLayer; // Geode compile
	int m_zValue;
	bool m_showInstant;
	ButtonSprite* m_btn1;
	ButtonSprite* m_btn2;
	ScrollingLayer* m_scrollingLayer;
	PAD = android 0x4;
	bool _0x1c4;
	bool _0x1c5;
}

[[link(android)]]
class FLAlertLayerProtocol {
	virtual void FLAlert_Clicked(FLAlertLayer*, bool);
}

[[link(android)]]
class FMODAudioEngine {
	// virtual ~FMODAudioEngine();

	static FMODAudioEngine* sharedEngine();

	TodoReturn disableMetering();
	TodoReturn enableMetering();
	TodoReturn fadeBackgroundMusic(bool, float);
	TodoReturn getBackgroundMusicTime();
	TodoReturn getBackgroundMusicVolume();
	TodoReturn getEffectsVolume();
	TodoReturn getTimeOffset();
	bool isBackgroundMusicPlaying();
	bool isBackgroundMusicPlaying(gd::string);
	TodoReturn pauseAllEffects();
	TodoReturn pauseBackgroundMusic();
	TodoReturn pauseEffect(unsigned int);
	TodoReturn playBackgroundMusic(gd::string, bool, bool);
	TodoReturn playEffect(gd::string, bool, float, float, float);
	TodoReturn preloadBackgroundMusic(gd::string);
	TodoReturn preloadEffect(gd::string);
	TodoReturn printResult(FMOD_RESULT);
	TodoReturn resumeAllEffects();
	TodoReturn resumeBackgroundMusic();
	TodoReturn resumeEffect(unsigned int);
	TodoReturn rewindBackgroundMusic();
	void setBackgroundMusicTime(float);
	void setBackgroundMusicVolume(float);
	void setEffectsVolume(float);
	void setTimeOffset(int);
	TodoReturn setupAudioEngine();
	TodoReturn start();
	TodoReturn stop();
	TodoReturn stopAllEffects();
	TodoReturn stopBackgroundMusic(bool);
	TodoReturn stopEffect(unsigned int);
	TodoReturn unloadEffect(gd::string);
	TodoReturn willPlayBackgroundMusic();

	virtual void update(float);
}

[[link(android)]]
class FMODSound {
	// ~FMODSound();

	static FMODSound* create(FMOD::Sound*);

	TodoReturn getSound();
	bool init(FMOD::Sound*);
	void setSound(FMOD::Sound*);
}

[[link(android)]]
class FontObject {
	// virtual ~FontObject();

	TodoReturn createWithConfigFile(char const*, float);
	TodoReturn getFontWidth(int);
	TodoReturn initWithConfigFile(char const*, float);
	TodoReturn parseConfigFile(char const*, float);
}

[[link(android)]]
class frameValues {
	// frameValues(frameValues const&);
}

[[link(android)]]
class FRequestProfilePage {
	// virtual ~FRequestProfilePage();
	// FRequestProfilePage();

	static FRequestProfilePage* create(bool);

	TodoReturn deleteSelected();
	bool init(bool);
	bool isCorrect(char const*);
	TodoReturn loadPage(int);
	void onClose(cocos2d::CCObject* sender);
	void onDeleteSelected(cocos2d::CCObject* sender);
	void onNextPage(cocos2d::CCObject* sender);
	void onPrevPage(cocos2d::CCObject* sender);
	void onSentRequests(cocos2d::CCObject* sender);
	void onToggleAllObjects(cocos2d::CCObject* sender);
	void onUpdate(cocos2d::CCObject* sender);
	TodoReturn setupCommentsBrowser(cocos2d::CCArray*);
	TodoReturn untoggleAll();
	TodoReturn updateLevelsLabel();
	TodoReturn updatePageArrows();

	virtual void registerWithTouchDispatcher();
	virtual void keyBackClicked();
	virtual void FLAlert_Clicked(FLAlertLayer*, bool);
	virtual TodoReturn onClosePopup(UploadActionPopup*);
	virtual TodoReturn uploadActionFinished(int, int);
	virtual TodoReturn uploadActionFailed(int, int);
	virtual TodoReturn loadFRequestsFinished(cocos2d::CCArray*, char const*);
	virtual TodoReturn loadFRequestsFailed(char const*, GJErrorCode);
	virtual TodoReturn setupPageInfo(gd::string, char const*);
	virtual TodoReturn forceReloadRequests(bool);
}

[[link(android)]]
class FriendRequestDelegate {
	virtual TodoReturn loadFRequestsFinished(cocos2d::CCArray*, char const*);
	virtual TodoReturn loadFRequestsFailed(char const*, GJErrorCode);
	virtual TodoReturn setupPageInfo(gd::string, char const*);
	virtual TodoReturn forceReloadRequests(bool);
}

[[link(android)]]
class FriendRequestPopup {
	// virtual ~FriendRequestPopup();

	static FriendRequestPopup* create(GJFriendRequest*);

	TodoReturn blockUser();
	bool init(GJFriendRequest*);
	TodoReturn loadFromGJFriendRequest(GJFriendRequest*);
	void onAccept(cocos2d::CCObject* sender);
	void onBlock(cocos2d::CCObject* sender);
	void onClose(cocos2d::CCObject* sender);
	void onRemove(cocos2d::CCObject* sender);

	virtual void keyBackClicked();
	virtual TodoReturn uploadActionFinished(int, int);
	virtual TodoReturn uploadActionFailed(int, int);
	virtual TodoReturn onClosePopup(UploadActionPopup*);
	virtual void FLAlert_Clicked(FLAlertLayer*, bool);
}

[[link(android)]]
class FriendsProfilePage {
	// virtual ~FriendsProfilePage();
	// FriendsProfilePage();

	static FriendsProfilePage* create(UserListType);

	bool init(UserListType);
	void onBlocked(cocos2d::CCObject* sender);
	void onClose(cocos2d::CCObject* sender);
	void onUpdate(cocos2d::CCObject* sender);
	TodoReturn setupUsersBrowser(cocos2d::CCArray*, UserListType);

	virtual void registerWithTouchDispatcher();
	virtual void keyBackClicked();
	virtual TodoReturn getUserListFinished(cocos2d::CCArray*, UserListType);
	virtual TodoReturn getUserListFailed(UserListType, GJErrorCode);
	virtual TodoReturn userListChanged(cocos2d::CCArray*, UserListType);
	virtual TodoReturn forceReloadList(UserListType);
}

[[link(android)]]
class GameCell {
	// virtual ~GameCell();
	GameCell(char const*, float, float);

	TodoReturn loadFromString(gd::string);
	void onTouch(cocos2d::CCObject* sender);
	TodoReturn updateBGColor(int);

	virtual bool init();
	virtual void draw();
}

[[link(android)]]
class GameEffectsManager {
	// virtual ~GameEffectsManager();

	static GameEffectsManager* create(PlayLayer*);

	TodoReturn addParticleEffect(cocos2d::CCParticleSystemQuad*, int);
	bool init(PlayLayer*);
	TodoReturn scaleParticle(cocos2d::CCParticleSystemQuad*, float);
}

[[link(android)]]
class GameLevelManager {
	// virtual ~GameLevelManager();
	// GameLevelManager();

	static GameLevelManager* sharedState();

	TodoReturn acceptFriendRequest(int, int);
	TodoReturn accountIDForUserID(int);
	TodoReturn addDLToActive(char const*);
	TodoReturn banUser(int);
	TodoReturn blockUser(int);
	TodoReturn createAndGetAccountComments(gd::string, int);
	TodoReturn createAndGetCommentsFull(gd::string, int, bool);
	TodoReturn createAndGetLevelComments(gd::string, int);
	TodoReturn createAndGetLevels(gd::string);
	TodoReturn createAndGetMapPacks(gd::string);
	TodoReturn createAndGetScores(gd::string, GJScoreType);
	TodoReturn createNewLevel();
	TodoReturn createPageInfo(int, int, int);
	TodoReturn dataLoaded(DS_Dictionary*);
	TodoReturn deleteAccountComment(int);
	TodoReturn deleteComment(int, CommentType, int);
	TodoReturn deleteFriendRequests(int, cocos2d::CCArray*, bool);
	TodoReturn deleteLevel(GJGameLevel*);
	TodoReturn deleteLevelComment(int, int);
	TodoReturn deleteSentFriendRequest(int);
	TodoReturn deleteServerLevel(int);
	TodoReturn deleteUserMessages(GJUserMessage*, cocos2d::CCArray*, bool);
	TodoReturn downloadLevel(int);
	TodoReturn downloadUserMessage(int, bool);
	TodoReturn encodeDataTo(DS_Dictionary*);
	TodoReturn firstSetup();
	TodoReturn followUser(int);
	TodoReturn friendRequestFromAccountID(int);
	TodoReturn friendRequestWasRemoved(int, bool);
	TodoReturn getAccountCommentKey(int, int);
	TodoReturn getAccountComments(int, int, int);
	TodoReturn getAllUsedSongIDs();
	TodoReturn getBasePostString(bool);
	TodoReturn getBoolForKey(char const*);
	TodoReturn getCommentDelegate();
	TodoReturn getCommentKey(int, int);
	TodoReturn getCommentUpDelegate();
	TodoReturn getCompletedLevels();
	TodoReturn getCreatedNewLevel();
	TodoReturn getDelegate();
	TodoReturn getDeleteCommentKey(int, int, int);
	TodoReturn getDeleteMessageKey(int, bool);
	TodoReturn getDescKey(int);
	TodoReturn getDifficultyStr(bool, bool, bool, bool, bool, bool, bool, bool);
	TodoReturn getDiffKey(int);
	TodoReturn getDiffVal(int);
	TodoReturn getDlDelegate();
	TodoReturn getDLMessageDelegate();
	TodoReturn getFollowedUsersDict();
	TodoReturn getFRequestDelegate();
	TodoReturn getFriendRequestKey(bool, int);
	TodoReturn getFriendRequests(bool, int, int);
	TodoReturn getGJUserInfo(int);
	TodoReturn getIntForKey(char const*);
	TodoReturn getLastLeaderboard();
	TodoReturn getLastMapPackID();
	TodoReturn getLastSearchKey();
	TodoReturn getLastSearchKey2();
	TodoReturn getLastSearchType();
	TodoReturn getLeaderboardDelegate();
	TodoReturn getLeaderboardScores(char const*);
	TodoReturn getLengthStr(bool, bool, bool, bool, bool);
	TodoReturn getLenKey(int);
	TodoReturn getLenVal(int);
	TodoReturn getLevelComments(int, int, int);
	TodoReturn getLevelKey(int);
	TodoReturn getLevelSaveData();
	TodoReturn getLikeAccountItemKey(LikeItemType, int, bool, int);
	TodoReturn getLikeItemKey(LikeItemType, int, bool);
	TodoReturn getLikeKey(int);
	TodoReturn getLocalLevel(int);
	TodoReturn getLvlDelDelegate();
	TodoReturn getMainLevel(int, bool);
	TodoReturn getMainLevels();
	TodoReturn getMapPackKey(int);
	TodoReturn getMapPacks(GJSearchObject*);
	TodoReturn getMessageKey(int);
	TodoReturn getMessagesKey(bool, int);
	TodoReturn getMListDelegate();
	TodoReturn getMsgUDelegate();
	TodoReturn getOnlineLevels(GJSearchObject*);
	TodoReturn getPageInfo(char const*);
	TodoReturn getPostCommentKey(int);
	TodoReturn getRateKey(int);
	TodoReturn getRateStarsKey(int);
	TodoReturn getReportKey(int);
	TodoReturn getSavedLevel(int);
	TodoReturn getSavedLevels();
	TodoReturn getSavedLevelsDict();
	TodoReturn getSavedMapPack(int);
	TodoReturn getSearchScene(char const*);
	TodoReturn getSplitIntFromKey(char const*, int);
	TodoReturn getStoredLevelComments(char const*);
	TodoReturn getStoredLevelDataDict();
	TodoReturn getStoredOnlineLevels(char const*);
	TodoReturn getStoredUserList(UserListType);
	TodoReturn getStoredUserMessage(int);
	TodoReturn getStoredUserMessageReply(int);
	TodoReturn getTempSave();
	TodoReturn getTimeLeft(char const*, float);
	TodoReturn getUActionDelegate();
	TodoReturn getULDelegate();
	TodoReturn getUpdateDelegate();
	TodoReturn getUpDelegate();
	TodoReturn getUploadMessageKey(int);
	TodoReturn getUserDelegate();
	TodoReturn getUserInfoKey(int);
	TodoReturn getUserList(UserListType);
	TodoReturn getUserMessages(bool, int, int);
	TodoReturn getUsers(GJSearchObject*);
	TodoReturn getValueDict();
	TodoReturn gotoLevelPage(GJGameLevel*);
	TodoReturn handleIt(bool, gd::string, gd::string, GJHttpType);
	TodoReturn handleItDelayed(bool, gd::string, gd::string, GJHttpType);
	TodoReturn handleItND(cocos2d::CCNode*, void*);
	TodoReturn hasDownloadedLevel(int);
	TodoReturn hasLikedAccountItem(LikeItemType, int, bool, int);
	TodoReturn hasLikedItem(LikeItemType, int, bool);
	TodoReturn hasLikedItemFullCheck(LikeItemType, int, int);
	TodoReturn hasLikedLevel(int);
	TodoReturn hasRatedLevel(int);
	TodoReturn hasRatedLevelStars(int);
	TodoReturn hasReportedLevel(int);
	TodoReturn invalidateMessages(bool, bool);
	TodoReturn invalidateRequests(bool, bool);
	TodoReturn invalidateUserList(UserListType, bool);
	bool isDLActive(char const*);
	bool isFollowingUser(int);
	bool isTimeValid(char const*, float);
	bool isUpdateValid(int);
	TodoReturn itemIDFromLikeKey(char const*);
	TodoReturn levelIDFromCommentKey(char const*);
	TodoReturn levelIDFromPostCommentKey(char const*);
	TodoReturn likeFromLikeKey(char const*);
	TodoReturn likeItem(LikeItemType, int, bool, int);
	TodoReturn limitSavedLevels();
	TodoReturn makeTimeStamp(char const*);
	TodoReturn markItemAsLiked(LikeItemType, int, bool, int);
	TodoReturn markLevelAsDownloaded(int);
	TodoReturn markLevelAsLiked(int);
	TodoReturn markLevelAsRated(int);
	TodoReturn markLevelAsRatedStars(int);
	TodoReturn markLevelAsReported(int);
	TodoReturn messageWasRemoved(int, bool);
	TodoReturn onAcceptFriendRequestCompleted(gd::string, gd::string);
	TodoReturn onBanUserCompleted(gd::string, gd::string);
	TodoReturn onBlockUserCompleted(gd::string, gd::string);
	TodoReturn onDeleteCommentCompleted(gd::string, gd::string);
	TodoReturn onDeleteFriendRequestCompleted(gd::string, gd::string);
	TodoReturn onDeleteServerLevelCompleted(gd::string, gd::string);
	TodoReturn onDeleteUserMessagesCompleted(gd::string, gd::string);
	TodoReturn onDownloadLevelCompleted(gd::string, gd::string);
	TodoReturn onDownloadUserMessageCompleted(gd::string, gd::string);
	TodoReturn onGetAccountCommentsCompleted(gd::string, gd::string);
	TodoReturn onGetFriendRequestsCompleted(gd::string, gd::string);
	TodoReturn onGetGJUserInfoCompleted(gd::string, gd::string);
	TodoReturn onGetLeaderboardScoresCompleted(gd::string, gd::string);
	TodoReturn onGetLevelCommentsCompleted(gd::string, gd::string);
	TodoReturn onGetLevelSaveDataCompleted(gd::string, gd::string);
	TodoReturn onGetMapPacksCompleted(gd::string, gd::string);
	TodoReturn onGetOnlineLevelsCompleted(gd::string, gd::string);
	TodoReturn onGetUserListCompleted(gd::string, gd::string);
	TodoReturn onGetUserMessagesCompleted(gd::string, gd::string);
	TodoReturn onGetUsersCompleted(gd::string, gd::string);
	TodoReturn onLikeItemCompleted(gd::string, gd::string);
	TodoReturn onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
	TodoReturn onRateStarsCompleted(gd::string, gd::string);
	TodoReturn onReadFriendRequestCompleted(gd::string, gd::string);
	TodoReturn onRemoveFriendCompleted(gd::string, gd::string);
	TodoReturn onReportLevelCompleted(gd::string, gd::string);
	TodoReturn onRequestUserAccessCompleted(gd::string, gd::string);
	TodoReturn onRestoreItemsCompleted(gd::string, gd::string);
	TodoReturn onSetLevelFeaturedCompleted(gd::string, gd::string);
	TodoReturn onSetLevelStarsCompleted(gd::string, gd::string);
	TodoReturn onSubmitUserInfoCompleted(gd::string, gd::string);
	TodoReturn onSuggestLevelStarsCompleted(gd::string, gd::string);
	TodoReturn onUnblockUserCompleted(gd::string, gd::string);
	TodoReturn onUpdateDescriptionCompleted(gd::string, gd::string);
	TodoReturn onUpdateLevelCompleted(gd::string, gd::string);
	TodoReturn onUpdateUserScoreCompleted(gd::string, gd::string);
	TodoReturn onUploadCommentCompleted(gd::string, gd::string);
	TodoReturn onUploadFriendRequestCompleted(gd::string, gd::string);
	TodoReturn onUploadLevelCompleted(gd::string, gd::string);
	TodoReturn onUploadUserMessageCompleted(gd::string, gd::string);
	TodoReturn pageFromCommentKey(char const*);
	TodoReturn parseRestoreData(gd::string);
	TodoReturn ProcessHttpRequest(gd::string, gd::string, gd::string, GJHttpType);
	TodoReturn purgeUnusedLevels();
	TodoReturn rateStars(int, int);
	TodoReturn readFriendRequest(int);
	TodoReturn removeDelimiterChars(gd::string, bool);
	TodoReturn removeDLFromActive(char const*);
	TodoReturn removeFriend(int);
	TodoReturn removeUserFromList(int, UserListType);
	TodoReturn reportLevel(int);
	TodoReturn requestUserAccess();
	TodoReturn resetAccountComments(int);
	TodoReturn resetAllTimers();
	TodoReturn resetStoredUserInfo(int);
	TodoReturn resetStoredUserList(UserListType);
	TodoReturn resetTimerForKey(char const*);
	TodoReturn responseToDict(gd::string, bool);
	TodoReturn restoreItems();
	TodoReturn saveFetchedLevels(cocos2d::CCArray*);
	TodoReturn saveFetchedMapPacks(cocos2d::CCArray*);
	TodoReturn saveLevel(GJGameLevel*);
	TodoReturn saveMapPack(GJMapPack*);
	void setBoolForKey(bool, char const*);
	void setCommentDelegate(LevelCommentDelegate*);
	void setCommentUpDelegate(CommentUploadDelegate*);
	void setCreatedNewLevel(bool);
	void setDelegate(LevelManagerDelegate*);
	void setDiffVal(int, bool);
	void setDlDelegate(LevelDownloadDelegate*);
	void setDLMessageDelegate(DownloadMessageDelegate*);
	void setFollowedUsersDict(cocos2d::CCDictionary*);
	void setFRequestDelegate(FriendRequestDelegate*);
	void setIntForKey(int, char const*);
	void setLastLeaderboard(int);
	void setLastMapPackID(int);
	void setLastSearchKey(gd::string);
	void setLastSearchKey2(gd::string);
	void setLastSearchType(SearchType);
	void setLeaderboardDelegate(LeaderboardManagerDelegate*);
	void setLenVal(int, bool);
	void setLevelFeatured(int, int);
	void setLevelStars(int, int, bool);
	void setLvlDelDelegate(LevelDeleteDelegate*);
	void setMainLevels(cocos2d::CCDictionary*);
	void setMListDelegate(MessageListDelegate*);
	void setMsgUDelegate(UploadMessageDelegate*);
	void setSavedLevelsDict(cocos2d::CCDictionary*);
	void setStoredLevelDataDict(cocos2d::CCDictionary*);
	void setTempSave(gd::string);
	void setUActionDelegate(UploadActionDelegate*);
	void setULDelegate(UserListDelegate*);
	void setUpdateDelegate(LevelUpdateDelegate*);
	void setUpDelegate(LevelUploadDelegate*);
	void setUserDelegate(UserInfoDelegate*);
	void setValueDict(cocos2d::CCDictionary*);
	TodoReturn storeCommentsResult(cocos2d::CCArray*, gd::string, char const*);
	TodoReturn storeFriendRequest(GJFriendRequest*);
	TodoReturn storeSearchResult(cocos2d::CCArray*, gd::string, char const*);
	TodoReturn storeUserInfo(GJUserScore*);
	TodoReturn storeUserMessage(GJUserMessage*);
	TodoReturn storeUserMessageReply(int, GJUserMessage*);
	TodoReturn storeUserName(int, int, gd::string);
	TodoReturn storeUserNames(gd::string);
	TodoReturn submitUserInfo();
	TodoReturn suggestLevelStars(int, int, bool);
	TodoReturn typeFromCommentKey(char const*);
	TodoReturn typeFromLikeKey(char const*);
	TodoReturn unblockUser(int);
	TodoReturn unfollowUser(int);
	TodoReturn updateDescription(int, gd::string);
	TodoReturn updateLevel(GJGameLevel*);
	TodoReturn updateLevelRewards(GJGameLevel*);
	TodoReturn updateUsernames();
	TodoReturn updateUserScore();
	TodoReturn uploadAccountComment(gd::string);
	TodoReturn uploadComment(gd::string, CommentType, int);
	TodoReturn uploadFriendRequest(int, gd::string);
	TodoReturn uploadLevel(GJGameLevel*);
	TodoReturn uploadLevelComment(int, gd::string);
	TodoReturn uploadUserMessage(int, gd::string, gd::string);
	TodoReturn userIDForAccountID(int);
	TodoReturn userInfoForAccountID(int);
	TodoReturn userNameForUserID(int);
	TodoReturn verifyLevelState(GJGameLevel*);

	virtual bool init();
}

[[link(android)]]
class GameManager {
	// virtual ~GameManager();
	// GameManager();

	static GameManager* sharedState();

	TodoReturn accountStatusChanged();
	TodoReturn addNewCustomObject(gd::string);
	TodoReturn applicationDidEnterBackground();
	TodoReturn applicationWillEnterForeground();
	TodoReturn checkSteamAchievementUnlock();
	TodoReturn claimItemsResponse(gd::string);
	TodoReturn colorForIdx(int);
	TodoReturn colorForPos(int);
	TodoReturn colorKey(int, bool);
	TodoReturn completedAchievement(char const*);
	TodoReturn didExitPlayscene();
	TodoReturn doQuickSave();
	TodoReturn eventUnlockFeature(char const*);
	TodoReturn fadeInMusic(char const*);
	TodoReturn followTwitter();
	TodoReturn getBGTexture(int);
	TodoReturn getBootups();
	TodoReturn getClickedEditor();
	TodoReturn getClickedGarage();
	TodoReturn getClickedName();
	TodoReturn getClickedPractice();
	TodoReturn getCommentSortRecent();
	TodoReturn getCustomObjectDict();
	TodoReturn getDidFollowTwitter();
	TodoReturn getDidLikeFacebook();
	TodoReturn getDidPauseBGMusic();
	TodoReturn getDidPlayGame();
	TodoReturn getDidRateGame();
	TodoReturn getDidSetupEveryplay();
	TodoReturn getDidSubYouTube();
	TodoReturn getDidSyncAchievements();
	TodoReturn getEditMode();
	TodoReturn getEditorCopyString();
	TodoReturn getEditorLayer();
	TodoReturn getFetchNewLevelsQueued();
	TodoReturn getFirstSetup();
	TodoReturn getFontFile(int);
	TodoReturn getFontTexture(int);
	TodoReturn getGameVariable(char const*);
	TodoReturn getGTexture(int);
	TodoReturn getHasRatedGame();
	TodoReturn getHasRatingPower();
	TodoReturn getIntGameVariable(char const*);
	TodoReturn getIsResetting();
	TodoReturn getLastCustomColorIdx();
	TodoReturn getLastGroupID();
	TodoReturn getLastLevelID();
	TodoReturn getLastScene();
	TodoReturn getLastScene2();
	TodoReturn getLevelSelectLayer();
	TodoReturn getLoadedBGIdx();
	TodoReturn getLoadedFontIdx();
	TodoReturn getLoadedGIdx();
	TodoReturn getMainMenuActive();
	TodoReturn getMenulayer();
	TodoReturn getNextUniqueObjectKey();
	TodoReturn getNextUsedKey(int, bool);
	TodoReturn getOrderedCustomObjectKeys();
	TodoReturn getPerformanceMode();
	TodoReturn getPlayerBall();
	TodoReturn getPlayerBird();
	TodoReturn getPlayerColor();
	TodoReturn getPlayerColor2();
	TodoReturn getPlayerDart();
	TodoReturn getPlayerFrame();
	TodoReturn getPlayerGlow();
	TodoReturn getPlayerIconType();
	TodoReturn getPlayerName();
	TodoReturn getPlayerRobot();
	TodoReturn getPlayerScoreValid();
	TodoReturn getPlayerShip();
	TodoReturn getPlayerStreak();
	TodoReturn getPlayerUDID();
	TodoReturn getPlayerUserID();
	TodoReturn getPlayLayer();
	TodoReturn getPremiumPopup();
	TodoReturn getRateDelegate();
	TodoReturn getRecordGameplay();
	TodoReturn getResolution();
	TodoReturn getReturnToSearch();
	TodoReturn getShowBPMMarkers();
	TodoReturn getShowedEditorGuide();
	TodoReturn getShowedLowDetailDialog();
	TodoReturn getShowedMenu();
	TodoReturn getShowedPirate();
	TodoReturn getShowedRateDiffDialog();
	TodoReturn getShowedRateStarDialog();
	TodoReturn getShowingPromo();
	TodoReturn getShowProgressBar();
	TodoReturn getShowSongMarkers();
	TodoReturn getStoredColor();
	TodoReturn getTestSmoothFix();
	TodoReturn getTexQuality();
	TodoReturn getTotalAttempts();
	TodoReturn getValueKeeper();
	TodoReturn getWasHigh();
	TodoReturn hasShownAdRecently();
	TodoReturn iconKey(int, IconType);
	bool isColorUnlocked(int, bool);
	bool isIconUnlocked(int, IconType);
	TodoReturn itemPurchased(char const*);
	TodoReturn levelIsPremium(int, int);
	TodoReturn likeFacebook();
	TodoReturn loadBackground(int);
	TodoReturn loadFont(int);
	TodoReturn loadGround(int);
	TodoReturn loadVideoSettings();
	TodoReturn lockColor(int, bool);
	TodoReturn lockIcon(int, IconType);
	TodoReturn openEditorGuide();
	TodoReturn rateGame();
	TodoReturn recountUserStats(gd::string);
	TodoReturn reloadAll(bool, bool, bool);
	TodoReturn reloadAllStep2();
	TodoReturn reloadAllStep3();
	TodoReturn reloadAllStep4();
	TodoReturn reloadAllStep5();
	TodoReturn removeCustomObject(int);
	TodoReturn reorderKey(int, bool);
	TodoReturn reportAchievementWithID(char const*, int, bool);
	TodoReturn reportPercentageForLevel(int, int, bool);
	TodoReturn resetAchievement(char const*);
	TodoReturn resetAllIcons();
	TodoReturn resetCoinUnlocks();
	TodoReturn resolutionForKey(int);
	TodoReturn returnToLastScene(GJGameLevel*);
	TodoReturn safePopScene();
	void setBootups(int);
	void setClickedEditor(bool);
	void setClickedGarage(bool);
	void setClickedName(bool);
	void setClickedPractice(bool);
	void setCommentSortRecent(bool);
	void setCustomObjectDict(cocos2d::CCDictionary*);
	void setDidFollowTwitter(bool);
	void setDidLikeFacebook(bool);
	void setDidPauseBGMusic(bool);
	void setDidPlayGame(bool);
	void setDidRateGame(bool);
	void setDidSetupEveryplay(bool);
	void setDidSubYouTube(bool);
	void setDidSyncAchievements(bool);
	void setEditMode(bool);
	void setEditorCopyString(gd::string);
	void setEditorLayer(LevelEditorLayer*);
	void setFetchNewLevelsQueued(bool);
	void setFirstSetup(bool);
	void setGameVariable(char const*, bool);
	void setHasRatedGame(bool);
	void setHasRatingPower(bool);
	void setIntGameVariable(char const*, int);
	void setIsResetting(bool);
	void setLastCustomColorIdx(int);
	void setLastGroupID(int);
	void setLastLevelID(int);
	void setLastScene(LastGameScene);
	void setLastScene2(LastGameScene);
	void setLevelSelectLayer(LevelSelectLayer*);
	void setMainMenuActive(bool);
	void setMenulayer(MenuLayer*);
	void setPerformanceMode(bool);
	void setPlayerBall(int);
	void setPlayerBird(int);
	void setPlayerColor(int);
	void setPlayerColor2(int);
	void setPlayerDart(int);
	void setPlayerFrame(int);
	void setPlayerGlow(bool);
	void setPlayerIconType(IconType);
	void setPlayerName(gd::string);
	void setPlayerRobot(int);
	void setPlayerScoreValid(bool);
	void setPlayerShip(int);
	void setPlayerStreak(int);
	void setPlayerUDID(gd::string);
	void setPlayerUserID(int);
	void setPlayLayer(PlayLayer*);
	void setPremiumPopup(PremiumPopup*);
	void setRateDelegate(GameRateDelegate*);
	void setRecordGameplay(bool);
	void setResolution(int);
	void setReturnToSearch(bool);
	void setShowBPMMarkers(bool);
	void setShowedEditorGuide(bool);
	void setShowedLowDetailDialog(bool);
	void setShowedMenu(bool);
	void setShowedPirate(bool);
	void setShowedRateDiffDialog(bool);
	void setShowedRateStarDialog(bool);
	void setShowingPromo(bool);
	void setShowProgressBar(bool);
	void setShowSongMarkers(bool);
	void setStoredColor(cocos2d::ccColor3B);
	void setTestSmoothFix(bool);
	void setTexQuality(cocos2d::TextureQuality);
	void setTotalAttempts(int);
	void setValueKeeper(cocos2d::CCDictionary*);
	void setWasHigh(bool);
	TodoReturn shouldShowInterstitial();
	TodoReturn shouldShowPromoInterstitial();
	TodoReturn showInterstitial();
	TodoReturn showInterstitialForced();
	TodoReturn showMainMenuAd();
	TodoReturn showPromoInterstitial();
	TodoReturn startUpdate();
	TodoReturn stringForCustomObject(int);
	TodoReturn subYouTube();
	TodoReturn switchCustomObjects(int, int);
	TodoReturn switchScreenMode(bool, bool);
	TodoReturn syncPlatformAchievements();
	TodoReturn toggleGameVariable(char const*);
	TodoReturn tryCacheAd();
	TodoReturn unloadBackground();
	TodoReturn unlockColor(int, bool);
	TodoReturn unlockedPremium();
	TodoReturn unlockIcon(int, IconType);
	TodoReturn updateMusic();
	TodoReturn verifyAchievementUnlocks();
	TodoReturn verifyCoinUnlocks();
	TodoReturn verifyStarUnlocks();
	TodoReturn verifySyncedCoins();
	TodoReturn videoAdHidden();
	TodoReturn videoAdShowed();

	virtual void update(float);
	virtual bool init();
	virtual TodoReturn encodeDataTo(DS_Dictionary*);
	virtual TodoReturn dataLoaded(DS_Dictionary*);
	virtual TodoReturn firstLoad();
}

[[link(android)]]
class GameObject : CCSpritePlus {
	// virtual ~GameObject();
	// GameObject();

	TodoReturn activatedByPlayer(GameObject*);
	TodoReturn addColorSprite();
	TodoReturn addColorSpriteToParent(bool);
	TodoReturn addCustomBlackChild(gd::string, float, bool);
	TodoReturn addCustomChild(gd::string, cocos2d::CCPoint, int);
	TodoReturn addCustomColorChild(gd::string);
	TodoReturn addGlow();
	TodoReturn addInternalChild(cocos2d::CCSprite*, gd::string, cocos2d::CCPoint);
	TodoReturn addInternalCustomColorChild(gd::string, cocos2d::CCPoint);
	TodoReturn addInternalGlowChild(gd::string, cocos2d::CCPoint);
	TodoReturn addToTempOffset(float, float);
	TodoReturn calculateOrientedBox();
	TodoReturn calculateSpawnXPos();
	TodoReturn canChangeCustomColor();
	TodoReturn canChangeMainColor();
	TodoReturn canChangeSecondaryColor();
	TodoReturn canRotateFree();
	TodoReturn colorForMode(int, bool);
	TodoReturn commonSetup();
	TodoReturn copyGroups(GameObject*);
	TodoReturn createAndAddParticle(int, char const*, int, cocos2d::tCCPositionType);
	TodoReturn createGlow(gd::string);
	TodoReturn createGroupContainer(int);
	TodoReturn createRotateAction(float, int);
	TodoReturn createSpriteColor(int);
	TodoReturn createWithFrame(char const*);
	TodoReturn createWithKey(int);
	TodoReturn createWithTexture(cocos2d::CCTexture2D*);
	TodoReturn customObjectSetup(gd::map<gd::string, gd::string>*);
	TodoReturn customScaleMod(char const*);
	TodoReturn deselectObject();
	TodoReturn destroyObject();
	TodoReturn determineSlopeDirection();
	TodoReturn dontCountTowardsLimit();
	TodoReturn duplicateAttributes(GameObject*);
	TodoReturn duplicateColorMode(GameObject*);
	TodoReturn duplicateValues(GameObject*);
	TodoReturn editorColorForCustomMode(int);
	TodoReturn editorColorForMode(int);
	TodoReturn getActiveColorForMode(int, bool);
	TodoReturn getAddedToBlend();
	TodoReturn getAddToBatch2();
	TodoReturn getBallFrame(int);
	TodoReturn getBoxOffset();
	TodoReturn getColorFrame(gd::string);
	TodoReturn getColorIndex();
	TodoReturn getColorManager();
	TodoReturn getColorOnTop();
	TodoReturn getColorSprite();
	TodoReturn getCustomAudioScale();
	TodoReturn getCustomColorIdx();
	TodoReturn getCustomDontFade();
	TodoReturn getCustomHitBox();
	TodoReturn getCustomObjectZ();
	TodoReturn getCustomScale();
	TodoReturn getCustomZLayer();
	TodoReturn getDamaging();
	TodoReturn getDidUpdateLastPosition();
	TodoReturn getDontApplyEffect();
	TodoReturn getDontApplyFade();
	TodoReturn getDontFade();
	TodoReturn getDontFadeTinted();
	TodoReturn getDontTransform();
	TodoReturn getEditorCustomScale();
	TodoReturn getEditorLayerID();
	TodoReturn getEditorLayerID2();
	TodoReturn getEditorSelected();
	TodoReturn getEditorSelectIdx();
	TodoReturn getEnterAngle();
	TodoReturn getEnterEffect();
	TodoReturn getFadeInPosOffset();
	TodoReturn getFrame();
	TodoReturn getGlowFrame(gd::string);
	TodoReturn getGlowOpacityMod();
	TodoReturn getGlowUseBGColor();
	TodoReturn getGroupCount();
	TodoReturn getGroupDisabled();
	TodoReturn getGroupDisabledCount();
	TodoReturn getGroupID(int);
	TodoReturn getGroupString();
	TodoReturn getGroupUpdated();
	TodoReturn getHasCustomChildren();
	TodoReturn getIgnoreScreenCheck();
	TodoReturn getInvisibleMode();
	TodoReturn getIsAnimated();
	TodoReturn getIsDetailColorObject();
	TodoReturn getIsGroupParent();
	TodoReturn getIsInvisible();
	TodoReturn getIsOriented();
	TodoReturn getIsRotated();
	TodoReturn getIsSelected();
	TodoReturn getIsTintObject();
	TodoReturn getIsTriggerSaved();
	TodoReturn getLastPosition();
	TodoReturn getLockColorAsChild();
	TodoReturn getM_ID();
	TodoReturn getMainBlend();
	TodoReturn getMainColor();
	TodoReturn getMainColorBlack();
	TodoReturn getMainColorMode();
	TodoReturn getMaxAudioScale();
	TodoReturn getMinAudioScale();
	TodoReturn getNeedsReorder();
	TodoReturn getNeedsUpdateColor();
	TodoReturn getObjectClass();
	TodoReturn getObjectID();
	TodoReturn getObjectKey();
	TodoReturn getObjectRadius();
	TodoReturn getObjectRectDirty();
	TodoReturn getObjectZ();
	TodoReturn getObjectZLayer();
	TodoReturn getObjectZOrder();
	TodoReturn getOrientedRectDirty();
	TodoReturn getOuterObjectRect();
	TodoReturn getParentMode();
	TodoReturn getRadius();
	TodoReturn getRectOffset();
	TodoReturn getRelativeSpriteColor(int);
	TodoReturn getSavedMainColorMode();
	TodoReturn getSavedSecondaryColorMode();
	TodoReturn getSaveString();
	TodoReturn getScaleModX();
	TodoReturn getScaleModY();
	TodoReturn getSecondaryBlend();
	TodoReturn getSecondaryColor();
	TodoReturn getSecondaryColorBlack();
	TodoReturn getSecondaryColorMode();
	TodoReturn getSectionIdx();
	TodoReturn getShouldHide();
	TodoReturn getSlopeAngle();
	TodoReturn getSlopeType();
	TodoReturn getSpawnedByTrigger();
	TodoReturn getSpawnXPos();
	TodoReturn getSpriteColor01();
	TodoReturn getSpriteColor02();
	TodoReturn getStartFlipX();
	TodoReturn getStartFlipY();
	TodoReturn getStartPos();
	TodoReturn getStartRotation();
	TodoReturn getStartScaleX();
	TodoReturn getStartScaleY();
	TodoReturn getStateVar();
	TodoReturn getStoredPosition();
	TodoReturn getTextBlockString();
	TodoReturn getTouchTriggered();
	TodoReturn getType();
	TodoReturn getUniqueID();
	TodoReturn getUpdateLastPos();
	TodoReturn getUpSlope();
	TodoReturn getUseAudioScale();
	TodoReturn getUseCustomContentSize();
	TodoReturn getUseCustomEditorHitbox();
	TodoReturn getUseSpecialLight();
	TodoReturn getWasSelected();
	TodoReturn getZLayer();
	TodoReturn groupColor(cocos2d::ccColor3B const&, bool);
	TodoReturn groupOpacityMod();
	TodoReturn groupWasDisabled();
	TodoReturn groupWasEnabled();
	TodoReturn hasBeenActivatedByPlayer(GameObject*);
	TodoReturn hasSecondaryColor();
	TodoReturn ignoreFade();
	bool init(char const*);
	bool isColorObject();
	bool isColorTrigger();
	bool isFacingDown();
	bool isSpawnableTrigger();
	bool isSpecialObject();
	bool isTrigger();
	TodoReturn loadGroupsFromString(gd::string);
	TodoReturn objectFromString(gd::string);
	TodoReturn opacityModForMode(int, bool);
	TodoReturn parentForZLayer(int, bool, int);
	TodoReturn perspectiveColorFrame(char const*, int);
	TodoReturn perspectiveFrame(char const*, int);
	TodoReturn playShineEffect();
	TodoReturn powerOffObject();
	TodoReturn powerOnObject();
	TodoReturn quickUpdatePosition();
	TodoReturn removeColorSprite();
	TodoReturn removeGlow();
	TodoReturn reorderColorSprite();
	TodoReturn resetGroupDisabled();
	TodoReturn resetMainColorMode();
	TodoReturn resetSecondaryColorMode();
	void setAddToBatch2(bool);
	void setColorManager(GJEffectManager*);
	void setColorOnTop(bool);
	void setCustomColorIdx(int);
	void setCustomDontFade(bool);
	void setCustomHitBox(cocos2d::CCSize);
	void setCustomObjectZ(int);
	void setCustomScale(float);
	void setCustomZLayer(int);
	void setDefaultMainColorMode(int);
	void setDefaultSecondaryColorMode(int);
	void setDidUpdateLastPosition(bool const&);
	void setDontApplyEffect(bool);
	void setDontApplyFade(bool);
	void setDontFade(bool);
	void setDontFadeTinted(bool);
	void setDontTransform(bool);
	void setEditorCustomScale(float);
	void setEditorLayerID(int);
	void setEditorLayerID2(int);
	void setEditorSelected(bool);
	void setEditorSelectIdx(int);
	void setEnterAngle(float);
	void setEnterEffect(int);
	void setFadeInPosOffset(float);
	void setGlowOpacity(unsigned char);
	void setGlowOpacityMod(float);
	void setGroupUpdated(bool);
	void setHasCustomChildren(bool);
	void setHasSyncedAnimation(bool);
	void setIgnoreScreenCheck(bool);
	void setIsGroupParent(bool);
	void setIsSelected(bool);
	void setIsTintObject(bool);
	void setLastPosition(cocos2d::CCPoint const&);
	void setLockColorAsChild(bool);
	void setM_ID(int);
	void setMainColorMode(int);
	void setMyAction(cocos2d::CCAction*);
	void setNeedsReorder(bool);
	void setNeedsUpdateColor(bool);
	void setObjectClass(GameObjectClass);
	void setObjectID(int);
	void setObjectKey(int);
	void setObjectZ(int);
	void setScaleModX(float);
	void setScaleModY(float);
	void setSecondaryColorMode(int);
	void setSectionIdx(int const&);
	void setShouldHide(bool);
	void setSpawnedByTrigger(bool);
	void setStartFlipX(bool);
	void setStartFlipY(bool);
	void setStartRotation(float);
	void setStartScaleX(float);
	void setStartScaleY(float);
	void setStateVar(bool);
	void setStoredPosition(cocos2d::CCPoint);
	void setTempOffset(float, float);
	void setTextBlockString(gd::string);
	void setTouchTriggered(bool);
	void setUniqueID(int);
	TodoReturn setupCoinAnimation();
	TodoReturn setupCoinArt();
	TodoReturn setupColorSprite(int, bool);
	TodoReturn setupCustomSprites();
	void setUpdateLastPos(bool const&);
	void setUseAudioScale(bool);
	void setUseCustomContentSize(bool);
	void setUseCustomEditorHitbox(bool);
	void setWasSelected(bool);
	void setZLayer(int);
	TodoReturn shouldBlendColor(GJSpriteColor*, bool);
	TodoReturn shouldNotSave();
	TodoReturn slopeFloorTop();
	TodoReturn slopeWallLeft();
	TodoReturn slopeYPos(cocos2d::CCRect);
	TodoReturn slopeYPos(float);
	TodoReturn slopeYPos(GameObject*);
	TodoReturn triggerActivated();
	TodoReturn triggerObject();
	TodoReturn updateCustomScale(float);
	TodoReturn updateMainColor();
	TodoReturn updateObjectEditorColor();
	TodoReturn updateSecondaryColor();
	TodoReturn updateStartPos();
	TodoReturn updateState();
	TodoReturn updateSyncedAnimation(float);
	TodoReturn updateTextObject(gd::string, bool);
	TodoReturn waitingForActivation();

	virtual void update(float);
	virtual void setScaleX(float);
	virtual void setScaleY(float);
	virtual void setScale(float);
	virtual void setPosition(cocos2d::CCPoint const&);
	virtual void setVisible(bool);
	virtual void setRotation(float);
	virtual void setOpacity(unsigned char);
	virtual bool initWithTexture(cocos2d::CCTexture2D*);
	virtual void setChildColor(cocos2d::ccColor3B const&);
	virtual void setFlipX(bool);
	virtual void setFlipY(bool);
	virtual TodoReturn customSetup();
	virtual TodoReturn addMainSpriteToParent(bool);
	virtual TodoReturn resetObject();
	virtual TodoReturn activateObject();
	virtual TodoReturn deactivateObject(bool);
	virtual TodoReturn getObjectRect();
	virtual TodoReturn getObjectRect(float, float);
	virtual TodoReturn getObjectRect2(float, float);
	virtual TodoReturn getObjectTextureRect();
	virtual TodoReturn getRealPosition();
	virtual void setStartPos(cocos2d::CCPoint);
	virtual TodoReturn updateStartValues();
	virtual bool isFlipX();
	virtual bool isFlipY();
	virtual void setRScaleX(float);
	virtual void setRScaleY(float);
	virtual void setRScale(float);
	virtual TodoReturn getRScaleX();
	virtual TodoReturn getRScaleY();
	virtual void setObjectColor(cocos2d::ccColor3B const&);
	virtual void setGlowColor(cocos2d::ccColor3B const&);
	virtual TodoReturn selectObject(cocos2d::ccColor3B);
	virtual TodoReturn hasBeenActivated();
	virtual TodoReturn getOrientedBox();
	virtual TodoReturn updateOrientedBox();
	virtual TodoReturn updateMainColor(cocos2d::ccColor3B const&);
	virtual TodoReturn updateSecondaryColor(cocos2d::ccColor3B const&);
	virtual TodoReturn addToGroup(int);
	virtual TodoReturn removeFromGroup(int);
	virtual TodoReturn saveActiveColors();
	virtual TodoReturn spawnXPosition();
	virtual TodoReturn updateParticleColor(cocos2d::ccColor3B const&);
	virtual TodoReturn getHasSyncedAnimation();
	virtual void setObjectRectDirty(bool);
	virtual void setOrientedRectDirty(bool);
	virtual void setType(GameObjectType);

	cocos2d::ccColor3B _0x1c2; // Default color?
	float _0x1c8; // updateSyncedAnimation
	float _0x1cc; // updateSyncedAnimation
	float _0x1d0; // updateSyncedAnimation
	float _0x1d4; // updateSyncedAnimation
	bool _0x1d8; // resetObject
	float _0x1dc; // updateSyncedAnimation
	bool _0x1e0; // addCustomBlackChild
	bool _0x1e1; // Unused
	float _0x1e4; // addCustomBlackChild
	bool m_editMode;
	bool m_groupDisabled;
	bool m_lockColorAsChild;
	int m_savedMainColorMode;
	int m_savedSecondaryColorMode;
	bool _0x1f4; // Main color enable HSV?
	bool _0x1f5; // Secondary color enable HSV?
	float m_tempOffsetX;
	float m_tempOffsetY;
	bool _0x200; // Related to temp offset
	bool m_flipX;
	bool m_flipY;
	cocos2d::CCPoint m_rectOffset;
	bool _0x20c; // Rect offset related
	cocos2d::CCPoint _0x210; // Rect offset related
	OBB2D* m_orientedBox;
	bool m_isOriented;
	cocos2d::CCSprite* m_glowSprite;
	bool _0x224;
	cocos2d::CCAction* m_myAction;
	bool _0x22c;
	bool _0x22d;
	bool _0x22e;
	float _0x230; // Width?
	float _0x234; // Height?
	bool _0x238;
	bool _0x239;
	bool _0x23a;
	cocos2d::CCParticleSystemQuad* m_particle;
	gd::string m_particleKey;
	bool m_hasParticle;
	cocos2d::CCPoint _0x248;
	cocos2d::CCRect _0x250;
	bool _0x260;
	float m_fadeInPosOffset;
	cocos2d::CCRect _0x268;
	bool m_objectRectDirty;
	bool m_orientedRectDirty;
	bool _0x27a;
	bool _0x27b;
	bool _0x27c;
	bool _0x27d;
	bool _0x27e;
	bool m_mainColorBlack;
	bool m_secondaryColorBlack;
	bool m_mainBlend;
	bool m_secondaryBlend;
	bool m_hasCustomChildren;
	bool m_isAnimated;
	cocos2d::CCSprite* m_colorSprite;
	bool m_ignoreScreenCheck;
	float m_radius;
	bool m_isRotated;
	float m_scaleModX;
	float m_scaleModY;
	int m_M_ID;
	GameObjectType m_type;
	int m_sectionIdx;
	bool m_touchTriggered;
	bool m_spawnedByTrigger;
	cocos2d::CCPoint m_startPos;
	gd::string m_frame;
	bool m_useAudioScale;
	bool _0x2bd;
	float m_startRotation;
	float m_startScaleX;
	float m_startScaleY;
	bool m_startFlipX;
	bool m_startFilpY;
	bool m_shouldHide;
	float m_spawnXPos;
	bool m_isInvisible;
	float m_enterAngle;
	int m_enterEffect;
	int m_customColorIdx;
	float m_customScale;
	int m_objectKey;
	bool m_dontTransform;
	bool m_dontFade;
	bool m_dontApplyEnter;
	bool m_dontApplyFade;
	bool m_dontFadeTinted;
	bool m_isTintObject;
	bool m_isDetailColorObject;
	bool m_customDontEnter;
	bool m_customDontFade;
	bool m_stateVar;
	int m_objectZ;
	bool m_addToBatch2;
	bool m_colorOnTop;
	bool m_customAudioScale;
	float m_minAudioScale;
	float m_maxAudioScale;
	int m_uniqueID;
	int m_objectID;
	bool m_invisibleMode;
	bool m_glowUseBGColor;
	bool m_useSpecialLight;
	float m_glowOpacityMod;
	bool m_upSlope;
	int m_slopeType;
	float m_slopeAngle;
	bool m_damaging;
	GJSpriteColor* m_mainColor;
	GJSpriteColor* m_secondaryColor;
	bool m_addedToBlend;
	int m_zLayer;
	int m_customZLayer;
	int m_customObjectZ;
	gd::string m_textBlockString;
	bool m_editorSelected;
	bool m_wasSelected;
	bool m_isSelected;
	int m_editorSelectIdx;
	cocos2d::CCPoint m_storedPosition;
	bool m_needsReorder;
	bool m_needsUpdateColor;
	float m_editorCustomScale;
	int* m_groups;
	int m_groupCount;
	int m_editorLayerID;
	int m_editorLayerID2;
	int m_groupDisabledCount;
	bool m_groupUpdated;
	bool m_useCustomContentSize;
	bool m_useCustomEditorHitbox;
	cocos2d::CCSize m_customHitBox;
	cocos2d::CCPoint m_lastPosition;
	bool m_didUpdateLastPosition;
	bool m_updateLastPos;
	int idk; //m_objectClass
	bool m_hasSyncedAnimation;
	bool m_isTriggerSaved;
	int _0x394; // Animation related
	ColorActionSprite* _0x398;
	ColorActionSprite* _0x39c;
	GJEffectManager* m_effectManager;
}

[[link(android)]]
class GameObjectCopy {
	// virtual ~GameObjectCopy();

	static GameObjectCopy* create(GameObject*);

	TodoReturn getObject();
	bool init(GameObject*);
	TodoReturn resetObject();
}

[[link(android)]]
class GameRateDelegate {
	virtual TodoReturn updateRate();
}

[[link(android)]]
class GameSoundManager {
	// ~GameSoundManager();

	TodoReturn asynchronousSetup();
	TodoReturn disableMetering();
	TodoReturn enableMetering();
	TodoReturn fadeInMusic(bool);
	TodoReturn fadeOutMusic(bool);
	TodoReturn getActiveBGMusic();
	TodoReturn getMeteringValue();
	TodoReturn getState();
	bool init();
	bool isLoopedSoundPlaying(gd::string);
	TodoReturn pauseAllLoopedSounds();
	TodoReturn pauseLoopedSound(gd::string);
	TodoReturn playBackgroundMusic(gd::string, bool, bool);
	TodoReturn playEffect(gd::string, float, float, float);
	TodoReturn playLoopedSound(gd::string, gd::string, float, float, bool, bool, bool);
	TodoReturn playUniqueEffect(gd::string, float, float, float);
	TodoReturn playUniqueEffect(gd::string);
	TodoReturn preload();
	TodoReturn removeLoopedSound(gd::string);
	TodoReturn resetUniqueEffects();
	TodoReturn resumeAllLoopedSounds();
	TodoReturn resumeSound();
	TodoReturn setup();
	TodoReturn sharedManager();
	TodoReturn stopAllLoopedSounds();
	TodoReturn stopBackgroundMusic();
	TodoReturn stopLoopedSound(gd::string, bool);
	TodoReturn updateLoopedVolume(gd::string, float);
	TodoReturn updateMetering(float);
}

[[link(android)]]
class GameStatsManager {
	// virtual ~GameStatsManager();

	static GameStatsManager* sharedState();

	TodoReturn checkAchievement(char const*);
	TodoReturn checkCoinAchievement(GJGameLevel*);
	TodoReturn checkCoinsForLevel(GJGameLevel*);
	TodoReturn completedDemonLevel(GJGameLevel*);
	TodoReturn completedLevel(GJGameLevel*);
	TodoReturn completedMapPack(GJMapPack*);
	TodoReturn completedStarLevel(GJGameLevel*);
	TodoReturn dataLoaded(DS_Dictionary*);
	TodoReturn encodeDataTo(DS_Dictionary*);
	TodoReturn firstSetup();
	TodoReturn getCollectedCoinsForLevel(GJGameLevel*);
	TodoReturn getCompletedLevels();
	TodoReturn getCompletedMapPacks();
	TodoReturn getDemonLevelKey(int);
	TodoReturn getLevelKey(GJGameLevel*);
	TodoReturn getLevelKey(int, bool);
	TodoReturn getLiteAchievements();
	TodoReturn getMapPackKey(int);
	TodoReturn getPendingUserCoinsDict();
	TodoReturn getRandomContainer();
	TodoReturn getStarLevelKey(int);
	TodoReturn getStat(char const*);
	TodoReturn getUniqueItemKey(char const*);
	TodoReturn getUserCoinsDict();
	TodoReturn getValueDict();
	TodoReturn hasCompletedDemonLevel(GJGameLevel*);
	TodoReturn hasCompletedLevel(GJGameLevel*);
	TodoReturn hasCompletedMapPack(int);
	TodoReturn hasCompletedOnlineLevel(int);
	TodoReturn hasCompletedStarLevel(GJGameLevel*);
	TodoReturn hasPendingUserCoin(char const*);
	TodoReturn hasUniqueItem(char const*);
	TodoReturn hasUserCoin(char const*);
	TodoReturn incrementStat(char const*, int);
	TodoReturn incrementStat(char const*);
	bool isLiteUnlockable(gd::string);
	bool isUniqueItem(gd::string);
	bool isUniqueValid(gd::string);
	TodoReturn logCoins();
	TodoReturn markLevelAsCompletedAndClaimed(int);
	TodoReturn recountUserCoins(bool);
	TodoReturn resetPreSync();
	TodoReturn resetUserCoins();
	TodoReturn restorePostSync();
	void setCompletedLevels(cocos2d::CCDictionary*);
	void setPendingUserCoinsDict(cocos2d::CCDictionary*);
	void setRandomContainer(cocos2d::CCDictionary*);
	void setStarsForMapPack(int, int);
	void setStat(char const*, int);
	void setStatIfHigher(char const*, int);
	void setUserCoinsDict(cocos2d::CCDictionary*);
	void setValueDict(cocos2d::CCDictionary*);
	TodoReturn starsForMapPack(int);
	TodoReturn storePendingUserCoin(char const*);
	TodoReturn storeUniqueItem(char const*);
	TodoReturn storeUserCoin(char const*);
	TodoReturn tempClear();
	TodoReturn uncompleteLevel(int);
	TodoReturn verifyUserCoins();

	virtual bool init();
}

[[link(android)]]
class GameStoreManager {
	// ~GameStoreManager();

	static GameStoreManager* sharedState();

	TodoReturn addCount(int, char const*);
	TodoReturn boughtGold(int);
	TodoReturn claimItems(char const*);
	TodoReturn consumeItem(char const*);
	TodoReturn countForItem(char const*);
	TodoReturn dataLoaded(DS_Dictionary*);
	TodoReturn dictForFeatureID(char const*);
	TodoReturn displayGoldError();
	TodoReturn displayItemRestore(bool, bool);
	TodoReturn encodeDataTo(DS_Dictionary*);
	TodoReturn eventUnlockFeature(char const*);
	TodoReturn firstLoad();
	TodoReturn getAllItemsForCategory(char const*);
	TodoReturn getCategory(char const*);
	TodoReturn getShopCategories();
	TodoReturn getShopItems();
	bool init();
	bool isBillingSupported();
	bool isFeatureUnlocked(char const*);
	TodoReturn itemPurchased(char const*);
	TodoReturn itemPurchaseFailed(char const*);
	TodoReturn itemRefunded(char const*);
	TodoReturn onClaimItemsCompleted(cocos2d::CCNode*, void*);
	TodoReturn playBuySound();
	TodoReturn purchaseConsumable(char const*, int, int);
	TodoReturn purchaseFeature(char const*, int);
	TodoReturn purchaseItem(char const*);
	TodoReturn restorePurchases();
	void setCount(int, char const*);
	TodoReturn setup();
	TodoReturn sortCategories();
	TodoReturn unlockFeature(char const*);
}

[[link(android)]]
class GameToolbox {
	static TodoReturn addBackButton(cocos2d::CCLayer*, cocos2d::CCMenuItem*);
	static TodoReturn addRThumbScrollButton(cocos2d::CCLayer*);
	static TodoReturn alignItemsHorisontally(cocos2d::CCArray*, float, cocos2d::CCPoint);
	static TodoReturn alignItemsVertically(cocos2d::CCArray*, float, cocos2d::CCPoint);
	static TodoReturn createToggleButton(gd::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCNode*, cocos2d::CCNode*, float, float, float, cocos2d::CCPoint, char const*, bool, int);
	static TodoReturn createToggleButton(gd::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCNode*, cocos2d::CCNode*);
	static TodoReturn doWeHaveInternet();
	static TodoReturn getDropActionWDelay(float, float, float, cocos2d::CCNode*, cocos2d::SEL_CallFunc);
	static TodoReturn getDropActionWEnd(float, float, float, cocos2d::CCAction*, float);
	static TodoReturn getRelativeOffset(GameObject*, cocos2d::CCPoint);
	static TodoReturn getResponse(cocos2d::extension::CCHttpResponse*);
	static TodoReturn hsvFromString(gd::string, char const*);
	static bool isIOS();
	static TodoReturn mergeDictsSaveLargestInt(cocos2d::CCDictionary*, cocos2d::CCDictionary*);
	static TodoReturn multipliedColorValue(cocos2d::ccColor3B, cocos2d::ccColor3B, float);
	static TodoReturn openAppPage();
	static TodoReturn openRateURL(gd::string, gd::string);
	static TodoReturn postClipVisit();
	static TodoReturn preVisitWithClippingRect(cocos2d::CCNode*, cocos2d::CCRect, cocos2d::CCNode*);
	static TodoReturn stringFromHSV(cocos2d::ccHSVValue, char const*);
	static TodoReturn stringSetupToDict(gd::string, char const*);
	static TodoReturn stringSetupToMap(gd::string, char const*);
	static TodoReturn transformColor(cocos2d::ccColor3B const&, cocos2d::ccHSVValue);
	static TodoReturn transformColor(cocos2d::ccColor3B const&, float, float, float);
}

[[link(android)]]
class GaragePage {
	// ~GaragePage();

	static GaragePage* create(IconType, GJGarageLayer*, cocos2d::SEL_MenuHandler);

	bool init(IconType, GJGarageLayer*, cocos2d::SEL_MenuHandler);
	TodoReturn listButtonBarSwitchedPage(ListButtonBar*, int);
	void onGlow(cocos2d::CCObject* sender);
	void onSelect(cocos2d::CCObject* sender);
	TodoReturn updateSelect(cocos2d::CCNode*);
}

[[link(android)]]
class GhostTrailEffect {
	// virtual ~GhostTrailEffect();
	// GhostTrailEffect();

	static GhostTrailEffect* create();

	TodoReturn doBlendAdditive();
	TodoReturn getBlendFunc();
	TodoReturn getDelegate();
	TodoReturn getGhostColor();
	TodoReturn getInternalOffset();
	TodoReturn getPosTarget();
	TodoReturn getPTarget();
	TodoReturn getScaleMod();
	TodoReturn getStartAlpha();
	TodoReturn getTarget();
	TodoReturn getUsePosScale();
	TodoReturn runWithTarget(cocos2d::CCSprite*, float, float, float, float, bool);
	void setBlendFunc(cocos2d::_ccBlendFunc);
	void setDelegate(GhostTrailDelegate*);
	void setGhostColor(cocos2d::ccColor3B);
	void setInternalOffset(cocos2d::CCPoint);
	void setPosTarget(cocos2d::CCSprite*);
	void setPTarget(cocos2d::CCNode*);
	void setScaleMod(float);
	void setStartAlpha(float);
	void setTarget(cocos2d::CCSprite*);
	void setUsePosScale(bool);
	TodoReturn stopTrail();
	TodoReturn trailSnapshot(float);

	virtual bool init();
	virtual void draw();
}

[[link(android)]]
class GJAccountBackupDelegate {
	TodoReturn backupAccountFailed(BackupAccountError);

	virtual TodoReturn backupAccountFinished();
}

[[link(android)]]
class GJAccountDelegate {
	virtual TodoReturn accountStatusChanged();
}

[[link(android)]]
class GJAccountLoginDelegate {
	virtual TodoReturn loginAccountFinished(int, int);
	virtual TodoReturn loginAccountFailed(AccountError);
}

[[link(android)]]
class GJAccountManager {
	// virtual ~GJAccountManager();

	static GJAccountManager* sharedState();

	TodoReturn addDLToActive(char const*, cocos2d::CCObject*);
	TodoReturn addDLToActive(char const*);
	TodoReturn backupAccount();
	TodoReturn dataLoaded(DS_Dictionary*);
	TodoReturn encodeDataTo(DS_Dictionary*);
	TodoReturn firstSetup();
	TodoReturn getAccountDelegate();
	TodoReturn getAccountID();
	TodoReturn getAccountPassword();
	TodoReturn getAccountUserName();
	TodoReturn getBackupDelegate();
	TodoReturn getDLObject(char const*);
	TodoReturn getGJP();
	TodoReturn getLoginDelegate();
	TodoReturn getRegisterDelegate();
	TodoReturn getSettingsDelegate();
	TodoReturn getSyncDelegate();
	TodoReturn handleIt(bool, gd::string, gd::string, GJHttpType);
	TodoReturn handleItDelayed(bool, gd::string, gd::string, GJHttpType);
	TodoReturn handleItND(cocos2d::CCNode*, void*);
	bool isDLActive(char const*);
	TodoReturn linkToAccount(gd::string, gd::string, int, int);
	TodoReturn loginAccount(gd::string, gd::string);
	TodoReturn onBackupAccountCompleted(gd::string, gd::string);
	TodoReturn onLoginAccountCompleted(gd::string, gd::string);
	TodoReturn onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
	TodoReturn onRegisterAccountCompleted(gd::string, gd::string);
	TodoReturn onSyncAccountCompleted(gd::string, gd::string);
	TodoReturn onUpdateAccountSettingsCompleted(gd::string, gd::string);
	TodoReturn ProcessHttpRequest(gd::string, gd::string, gd::string, GJHttpType);
	TodoReturn registerAccount(gd::string, gd::string, gd::string);
	TodoReturn removeDLFromActive(char const*);
	void setAccountDelegate(GJAccountDelegate*);
	void setBackupDelegate(GJAccountBackupDelegate*);
	void setLoginDelegate(GJAccountLoginDelegate*);
	void setRegisterDelegate(GJAccountRegisterDelegate*);
	void setSettingsDelegate(GJAccountSettingsDelegate*);
	void setSyncDelegate(GJAccountSyncDelegate*);
	TodoReturn syncAccount();
	TodoReturn unlinkFromAccount();
	TodoReturn updateAccountSettings(int, int, gd::string);

	virtual bool init();
}

[[link(android)]]
class GJAccountRegisterDelegate {
	virtual TodoReturn registerAccountFinished();
	virtual TodoReturn registerAccountFailed(AccountError);
}

[[link(android)]]
class GJAccountSettingsDelegate {
	virtual TodoReturn updateSettingsFinished();
	virtual TodoReturn updateSettingsFailed();
}

[[link(android)]]
class GJAccountSettingsLayer {
	// virtual ~GJAccountSettingsLayer();

	static GJAccountSettingsLayer* create(int);

	TodoReturn createToggleButton(gd::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint, float, float);
	bool init(int);
	void onClose(cocos2d::CCObject* sender);
	void onFriendRequests(cocos2d::CCObject* sender);
	void onMessageSetting(cocos2d::CCObject* sender);
	void onUpdate(cocos2d::CCObject* sender);
	TodoReturn updateScoreValues();

	virtual void keyBackClicked();
	virtual TodoReturn textInputShouldOffset(CCTextInputNode*, float);
	virtual TodoReturn textInputReturn(CCTextInputNode*);
}

[[link(android)]]
class GJAccountSyncDelegate {
	TodoReturn syncAccountFailed(BackupAccountError);

	virtual TodoReturn syncAccountFinished();
}

[[link(android)]]
class GJBaseGameLayer {
	// virtual ~GJBaseGameLayer();
	// GJBaseGameLayer();

	TodoReturn calculateColorValues(EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*);
	TodoReturn calculateOpacityValues(EffectGameObject*, EffectGameObject*, float, GJEffectManager*);
	TodoReturn createTextLayers();
	TodoReturn flipGravity(PlayerObject*, bool, bool);
	TodoReturn generateToggleData(cocos2d::CCArray*);
	TodoReturn getBatchNode();
	TodoReturn getBatchNodeAdd();
	TodoReturn getBatchNodeAddBottom();
	TodoReturn getBatchNodeAddBottom2();
	TodoReturn getBatchNodeAddBottom2Glow();
	TodoReturn getBatchNodeAddBottomGlow();
	TodoReturn getBatchNodeAddGlow();
	TodoReturn getBatchNodeAddMid();
	TodoReturn getBatchNodeAddMidGlow();
	TodoReturn getBatchNodeAddPlayer();
	TodoReturn getBatchNodeAddText();
	TodoReturn getBatchNodeAddTop();
	TodoReturn getBatchNodeBottom();
	TodoReturn getBatchNodeBottom2();
	TodoReturn getBatchNodePlayer();
	TodoReturn getBatchNodeText();
	TodoReturn getCapacityString();
	TodoReturn getEffectBatchNode();
	TodoReturn getEffectBatchNodeAdd();
	TodoReturn getGameLayer();
	TodoReturn getLevelSettings();
	TodoReturn getPlayer();
	TodoReturn getPlayer2();
	TodoReturn getToggleDataDirty();
	bool isGroupDisabledForObject(GameObject*);
	bool isGroupDisabledForObjectFull(GameObject*, cocos2d::CCArray*);
	TodoReturn parentForZLayer(int, bool, int);
	TodoReturn processColorObject(EffectGameObject*, int, cocos2d::CCDictionary*, float, GJEffectManager*);
	TodoReturn processOpacityObject(EffectGameObject*, cocos2d::CCDictionary*, float, GJEffectManager*);
	void setToggleDataDirty(bool);
	TodoReturn setupLayers();
	TodoReturn timeForXPos(float);
	TodoReturn updateLayerCapacity(gd::string);
	TodoReturn updateLegacyLayerCapacity(int, int, int, int);

	virtual TodoReturn pure_virtual_00a5fb9c() {} // TODO: figure out what function this is
	virtual TodoReturn pure_virtual_00a5fba0() {} // TODO: figure out what function this is
	virtual TodoReturn pure_virtual_00a5fba4() {} // TODO: figure out what function this is
}

[[link(android)]]
class GJColorSetupLayer {
	// virtual ~GJColorSetupLayer();
	// GJColorSetupLayer();

	static GJColorSetupLayer* create(LevelSettingsObject*);

	TodoReturn colorSelectClosed(ColorSelectPopup*);
	TodoReturn getCloseOnSelect();
	TodoReturn getDelegate();
	bool init(LevelSettingsObject*);
	void onClose(cocos2d::CCObject* sender);
	void onColor(cocos2d::CCObject* sender);
	void onPage(cocos2d::CCObject* sender);
	void setCloseOnSelect(bool);
	void setDelegate(ColorSetupDelegate*);
	TodoReturn showPage(int);
	TodoReturn updateSpriteColor(ColorChannelSprite*, cocos2d::CCLabelBMFont*, int);
	TodoReturn updateSpriteColors();

	virtual void keyBackClicked();
}

[[link(android)]]
class GJComment {
	// virtual ~GJComment();

	static GJComment* create();
	static GJComment* create(cocos2d::CCDictionary*);

	TodoReturn getAccountID();
	TodoReturn getComment();
	TodoReturn getCommentDate();
	TodoReturn getCommentID();
	TodoReturn getDeleted();
	TodoReturn getDislikes();
	TodoReturn getIsHidden();
	TodoReturn getLevelID();
	TodoReturn getLikes();
	TodoReturn getUserID();
	TodoReturn getUserName();
	void setAccountID(int);
	void setComment(gd::string);
	void setCommentDate(gd::string);
	void setCommentID(long);
	void setDeleted(bool);
	void setDislikes(int);
	void setIsHidden(bool);
	void setLevelID(int);
	void setLikes(int);
	void setUserID(int);
	void setUserName(gd::string);

	virtual bool init();
}

[[link(android)]]
class GJCommentListLayer {
	// virtual ~GJCommentListLayer();

	static GJCommentListLayer* create(BoomListView*, char const*, cocos2d::ccColor4B, float, float);

	TodoReturn getListView();
	bool init(BoomListView*, char const*, cocos2d::ccColor4B, float, float);
}

[[link(android)]]
class GJDropDownLayer {
	// virtual ~GJDropDownLayer();
	// GJDropDownLayer();

	static GJDropDownLayer* create(char const*, float);
	static GJDropDownLayer* create(char const*);

	TodoReturn getDelegate();
	TodoReturn getHideBackButton();
	TodoReturn getInternalLayer();
	TodoReturn getRemoveOnExit();
	bool init(char const*, float);
	bool init(char const*);
	void setDelegate(GJDropDownLayerDelegate*);
	void setHideBackButton(bool);
	void setRemoveOnExit(bool);

	virtual void draw();
	virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void registerWithTouchDispatcher();
	virtual void keyBackClicked();
	virtual TodoReturn customSetup();
	virtual TodoReturn enterLayer();
	virtual TodoReturn exitLayer(cocos2d::CCObject*);
	virtual TodoReturn showLayer(bool);
	virtual TodoReturn hideLayer(bool);
	virtual TodoReturn layerVisible();
	virtual TodoReturn layerHidden();
	virtual TodoReturn enterAnimFinished();
	virtual TodoReturn disableUI();
	virtual TodoReturn enableUI();
}

[[link(android)]]
class GJDropDownLayerDelegate {
	virtual TodoReturn dropDownLayerWillClose(GJDropDownLayer*);
}

[[link(android)]]
class GJEffectManager {
	// virtual ~GJEffectManager();

	static GJEffectManager* create();

	TodoReturn activeColorForIndex(int);
	TodoReturn activeOpacityForIndex(int);
	TodoReturn addAllInheritedColorActions(cocos2d::CCArray*);
	TodoReturn addGroupPulseEffect(PulseEffectAction*);
	TodoReturn calculateBaseActiveColors();
	TodoReturn calculateInheritedColor(int);
	TodoReturn calculateLightBGColor(cocos2d::ccColor3B);
	TodoReturn colorExists(int);
	TodoReturn colorForEffect(cocos2d::ccColor3B, cocos2d::ccHSVValue);
	TodoReturn colorForGroupID(int, cocos2d::ccColor3B const&, bool);
	TodoReturn colorForIndex(int);
	TodoReturn colorForPulseEffect(cocos2d::ccColor3B const&, PulseEffectAction*);
	TodoReturn createMoveCommand(cocos2d::CCPoint, int, float, int, bool, bool);
	TodoReturn getAllColorActions();
	TodoReturn getAllColorSprites();
	TodoReturn getAllDisabledGroups();
	TodoReturn getClkTimer();
	TodoReturn getColorAction(int);
	TodoReturn getColorSprite(int);
	TodoReturn getCurrentStateString();
	TodoReturn getDeltaMoveActionsDict();
	TodoReturn getLoadedMoveOffset();
	TodoReturn getMixedColor(cocos2d::ccColor3B, cocos2d::ccColor3B, float);
	TodoReturn getPlayerXVelocity();
	TodoReturn getPlayerYVelocity();
	TodoReturn getSaveString();
	TodoReturn getSpawnDelegate();
	TodoReturn hasBeenTriggered(int);
	TodoReturn hasPulseEffectForGroupID(int);
	bool isGroupEnabled(int);
	TodoReturn keyForGroupIDColor(int, cocos2d::ccColor3B const&, bool);
	TodoReturn loadState(gd::string);
	TodoReturn opacityForIndex(int);
	TodoReturn opacityModForGroup(int);
	TodoReturn prepareMoveActions(float);
	TodoReturn processColors();
	TodoReturn processCopyColorPulseActions();
	TodoReturn processInheritedColors();
	TodoReturn processPulseActions();
	TodoReturn removeAllPulseActions();
	TodoReturn removeColorAction(int);
	TodoReturn reset();
	TodoReturn resetColorCache();
	TodoReturn resetEffects();
	TodoReturn resetMoveActions();
	TodoReturn resetToggledGroups();
	TodoReturn resetTriggeredIDs();
	TodoReturn runOpacityActionOnGroup(int, float, float);
	TodoReturn runPulseEffect(int, bool, float, float, float, PulseEffectType, cocos2d::ccColor3B, cocos2d::ccHSVValue, int, bool, bool);
	void setClkTimer(float);
	void setColorAction(ColorAction*, int);
	void setPlayerXVelocity(float);
	void setPlayerYVelocity(float);
	void setSpawnDelegate(SpawnTriggerDelegate*);
	TodoReturn setupFromString(gd::string);
	TodoReturn shouldBlend(int);
	TodoReturn spawnGroup(int, float);
	TodoReturn storeTriggeredID(int);
	TodoReturn toggleGroup(int, bool);
	TodoReturn traverseInheritanceChain(InheritanceNode*);
	TodoReturn updateActiveOpacityEffects();
	TodoReturn updateColorEffects(float);
	TodoReturn updateColors(cocos2d::ccColor3B, cocos2d::ccColor3B);
	TodoReturn updateEffects(float);
	TodoReturn updateOpacityEffects(float);
	TodoReturn updatePulseEffects(float);
	TodoReturn updateSpawnTriggers(float);
	TodoReturn wouldCreateLoop(InheritanceNode*, int);

	virtual bool init();
}

[[link(android)]]
class GJFlyGroundLayer {
	// virtual ~GJFlyGroundLayer();

	static GJFlyGroundLayer* create();

	virtual bool init();
}

[[link(android)]]
class GJFriendRequest {
	// virtual ~GJFriendRequest();

	static GJFriendRequest* create();
	static GJFriendRequest* create(cocos2d::CCDictionary*);

	TodoReturn getComment();
	TodoReturn getDate();
	TodoReturn getFromAccountID();
	TodoReturn getIsRead();
	TodoReturn getRequestID();
	TodoReturn getToAccountID();
	void setComment(gd::string);
	void setDate(gd::string);
	void setFromAccountID(int);
	void setIsRead(bool);
	void setRequestID(int);
	void setToAccountID(int);

	virtual bool init();
}

[[link(android)]]
class GJGameLevel {
	// virtual ~GJGameLevel();
	// GJGameLevel();

	static GJGameLevel* create();
	static GJGameLevel* create(cocos2d::CCDictionary*, bool);

	TodoReturn areCoinsVerified();
	TodoReturn createWithCoder(DS_Dictionary*);
	TodoReturn dataLoaded(DS_Dictionary*);
	TodoReturn getAccountID();
	TodoReturn getAttempts();
	TodoReturn getAudioFileName();
	TodoReturn getAudioTrack();
	TodoReturn getAutoLevel();
	TodoReturn getAverageDifficulty();
	TodoReturn getCapacityString();
	TodoReturn getCoin1Verified();
	TodoReturn getCoin2Verified();
	TodoReturn getCoin3Verified();
	TodoReturn getCoinKey(int);
	TodoReturn getCoins();
	TodoReturn getCoinsVerified();
	TodoReturn getCompletes();
	TodoReturn getDemon();
	TodoReturn getDemonVotes();
	TodoReturn getDifficulty();
	TodoReturn getDislikes();
	TodoReturn getDontSave();
	TodoReturn getDownloads();
	TodoReturn getFailedPasswordAttempts();
	TodoReturn getFeatured();
	TodoReturn getGameVersion();
	TodoReturn getHasBeenModified();
	TodoReturn getIsEditable();
	TodoReturn getIsHidden();
	TodoReturn getIsUnlocked();
	TodoReturn getIsUploaded();
	TodoReturn getIsVerified();
	TodoReturn getJumps();
	TodoReturn getLastBuildGroupID();
	TodoReturn getLastBuildPage();
	TodoReturn getLastBuildPageForTab(int);
	TodoReturn getLastBuildSave();
	TodoReturn getLastBuildTab();
	TodoReturn getLastCameraPos();
	TodoReturn getLastEditorZoom();
	TodoReturn getLengthKey(int);
	TodoReturn getLevelDesc();
	TodoReturn getLevelID();
	TodoReturn getLevelLength();
	TodoReturn getLevelName();
	TodoReturn getLevelRev();
	TodoReturn getLevelString();
	TodoReturn getLevelType();
	TodoReturn getLevelVersion();
	TodoReturn getLikes();
	TodoReturn getM_ID();
	TodoReturn getMaxStarRatings();
	TodoReturn getMinStarRatings();
	TodoReturn getNormalPercent();
	TodoReturn getObjectCount();
	TodoReturn getOrder();
	TodoReturn getOriginalLevel();
	TodoReturn getPassword();
	TodoReturn getPracticePercent();
	TodoReturn getRateFeature();
	TodoReturn getRateStars();
	TodoReturn getRateUser();
	TodoReturn getRatings();
	TodoReturn getRatingsSum();
	TodoReturn getRecordString();
	TodoReturn getRequestedStars();
	TodoReturn getRequiredCoins();
	TodoReturn getShowedSongWarning();
	TodoReturn getSongID();
	TodoReturn getSongName();
	TodoReturn getStarRatings();
	TodoReturn getStarRatingsSum();
	TodoReturn getStars();
	TodoReturn getTempName();
	TodoReturn getTwoPlayerMode();
	TodoReturn getUnpackedLevelDescription();
	TodoReturn getUpdateDate();
	TodoReturn getUploadDate();
	TodoReturn getUserID();
	TodoReturn getUserName();
	TodoReturn getWasCheatReset();
	TodoReturn handleStatsConflict(GJGameLevel*);
	TodoReturn lengthKeyToString(int);
	TodoReturn levelWasAltered();
	TodoReturn levelWasSubmitted();
	TodoReturn savePercentage(int, bool);
	void setAccountID(int);
	void setAttempts(int);
	void setAudioTrack(int);
	void setAutoLevel(bool);
	void setCapacityString(gd::string);
	void setCoin1Verified(int);
	void setCoin2Verified(int);
	void setCoin3Verified(int);
	void setCoins(int);
	void setCoinsVerified(int);
	void setCompletes(int);
	void setDemon(bool);
	void setDemonVotes(int);
	void setDifficulty(int);
	void setDislikes(int);
	void setDontSave(bool);
	void setDownloads(int);
	void setFailedPasswordAttempts(int);
	void setFeatured(int);
	void setGameVersion(int);
	void setHasBeenModified(bool);
	void setIsEditable(bool);
	void setIsHidden(bool);
	void setIsUnlocked(bool);
	void setIsUploaded(bool);
	void setIsVerified(bool);
	void setJumps(int);
	void setLastBuildGroupID(int);
	void setLastBuildPage(int);
	void setLastBuildPageForTab(int, int);
	void setLastBuildSave(cocos2d::CCDictionary*);
	void setLastBuildTab(int);
	void setLastCameraPos(cocos2d::CCPoint);
	void setLastEditorZoom(float);
	void setLevelDesc(gd::string);
	void setLevelID(int);
	void setLevelLength(int);
	void setLevelName(gd::string);
	void setLevelRev(int);
	void setLevelString(gd::string);
	void setLevelType(GJLevelType);
	void setLevelVersion(int);
	void setLikes(int);
	void setMaxStarRatings(int);
	void setMinStarRatings(int);
	void setNormalPercent(int);
	void setObjectCount(int);
	void setOrder(int);
	void setOriginalLevel(int);
	void setPassword(int);
	void setPracticePercent(int);
	void setRateFeature(bool);
	void setRateStars(int);
	void setRateUser(gd::string);
	void setRatings(int);
	void setRatingsSum(int);
	void setRecordString(gd::string);
	void setRequestedStars(int);
	void setRequiredCoins(int);
	void setShowedSongWarning(bool);
	void setSongID(int);
	void setStarRatings(int);
	void setStarRatingsSum(int);
	void setStars(int);
	void setTempName(gd::string);
	void setTwoPlayerMode(bool);
	void setUpdateDate(gd::string);
	void setUploadDate(gd::string);
	void setUserID(int);
	void setUserName(gd::string);
	void setWasCheatReset(bool);
	TodoReturn unverifyCoins();

	virtual void encodeWithCoder(DS_Dictionary*);
	virtual bool canEncode();
	virtual bool init();
}

[[link(android)]]
class GJGarageLayer : cocos2d::CCLayer {
	// virtual ~GJGarageLayer();
	// GJGarageLayer();

	TodoReturn achievementForUnlock(int, UnlockType);
	TodoReturn checkBall(int);
	TodoReturn checkBird(int);
	TodoReturn checkColor(int, bool);
	TodoReturn checkDart(int);
	TodoReturn checkIcon(int);
	TodoReturn checkRobot(int);
	TodoReturn checkShip(int);
	TodoReturn checkSpecial(int);
	TodoReturn descriptionForUnlock(int, UnlockType);
	TodoReturn getDoSelect();
	TodoReturn getLockFrame(int, UnlockType);
	TodoReturn getRateSprite();
	TodoReturn node();
	void onBack(cocos2d::CCObject* sender);
	void onBallIcon(cocos2d::CCObject* sender);
	void onBirdIcon(cocos2d::CCObject* sender);
	void onDartIcon(cocos2d::CCObject* sender);
	void onInfo(cocos2d::CCObject* sender);
	void onPlayerColor1(cocos2d::CCObject* sender);
	void onPlayerColor2(cocos2d::CCObject* sender);
	void onPlayerIcon(cocos2d::CCObject* sender);
	void onRobotIcon(cocos2d::CCObject* sender);
	void onSelectTab(cocos2d::CCObject* sender);
	void onShipIcon(cocos2d::CCObject* sender);
	void onSpecialIcon(cocos2d::CCObject* sender);
	TodoReturn playRainbowEffect();
	TodoReturn playShadowEffect();
	TodoReturn scene();
	TodoReturn selectPage(IconType);
	void setRateSprite(cocos2d::CCSprite*);
	TodoReturn setupColorSelect();
	TodoReturn setupIconSelect();
	TodoReturn toggleGlow();
	TodoReturn updateColorSelect(cocos2d::CCNode*, bool);
	TodoReturn updatePlayerColors();
	TodoReturn updatePlayerName(char const*);
	TodoReturn updatePlayerSelect(cocos2d::CCNode*);

	virtual bool init();
	virtual void keyBackClicked();
	virtual TodoReturn textInputOpened(CCTextInputNode*);
	virtual TodoReturn textInputClosed(CCTextInputNode*);
	virtual void textChanged(CCTextInputNode*);
	virtual TodoReturn listButtonBarSwitchedPage(ListButtonBar*, int);
	virtual TodoReturn showUnlockPopup(int, UnlockType);
	virtual TodoReturn updateRate();
	virtual void FLAlert_Clicked(FLAlertLayer*, bool);
}

[[link(android)]]
class GJGroundLayer {
	// virtual ~GJGroundLayer();

	static GJGroundLayer* create(int, int);

	TodoReturn createLine(int);
	TodoReturn deactivateGround();
	TodoReturn fadeInFinished();
	TodoReturn getGroundSprite3();
	TodoReturn getGroundSprite4();
	TodoReturn getGroundWidth();
	TodoReturn getGroundY();
	TodoReturn getIsActive();
	TodoReturn getLine();
	TodoReturn hideShadows();
	bool init(int, int);
	TodoReturn loadGroundSprites(int, bool);
	TodoReturn positionGround(float);
	TodoReturn updateGround01Color(cocos2d::ccColor3B);
	TodoReturn updateGround02Color(cocos2d::ccColor3B);
	TodoReturn updateGroundPos(cocos2d::CCPoint);
	TodoReturn updateGroundWidth();
	TodoReturn updateLineBlend(bool);

	virtual void draw();
	virtual TodoReturn showGround();
	virtual TodoReturn fadeInGround(float);
	virtual TodoReturn fadeOutGround(float);
}

[[link(android)]]
class GJHttpResult {
	// virtual ~GJHttpResult();

	static GJHttpResult* create(bool, gd::string, gd::string, GJHttpType);

	TodoReturn getRequestTag();
	TodoReturn getResult();
	TodoReturn getSuccess();
	TodoReturn getType();
	bool init(bool, gd::string, gd::string, GJHttpType);
	void setRequestTag(gd::string);
	void setResult(gd::string);
	void setSuccess(bool);
	void setType(GJHttpType);
}

[[link(android)]]
class GJListLayer {
	// virtual ~GJListLayer();

	static GJListLayer* create(BoomListView*, char const*, cocos2d::ccColor4B, float, float);

	TodoReturn getListView();
	bool init(BoomListView*, char const*, cocos2d::ccColor4B, float, float);
}

[[link(android)]]
class GJMapPack {
	// virtual ~GJMapPack();
	// GJMapPack();

	static GJMapPack* create();
	static GJMapPack* create(cocos2d::CCDictionary*);

	TodoReturn completedMaps();
	TodoReturn getColor1();
	TodoReturn getColor2();
	TodoReturn getM_ID();
	TodoReturn getPackCoins();
	TodoReturn getPackDifficulty();
	TodoReturn getPackID();
	TodoReturn getPackLevels();
	TodoReturn getPackName();
	TodoReturn getPackStars();
	TodoReturn hasCompletedMapPack();
	TodoReturn parsePackColors(gd::string, gd::string);
	TodoReturn parsePackLevels(gd::string);
	void setColor1(cocos2d::ccColor3B);
	void setColor2(cocos2d::ccColor3B);
	void setPackCoins(int);
	void setPackDifficulty(int);
	void setPackID(int);
	void setPackLevels(gd::string);
	void setPackName(gd::string);
	void setPackStars(int);
	TodoReturn totalMaps();

	virtual bool init();
}

[[link(android)]]
class GJMessageCell {
	// virtual ~GJMessageCell();
	GJMessageCell(char const*, float, float);

	TodoReturn loadFromMessage(GJUserMessage*);
	TodoReturn markAsRead();
	void onDeleteMessage(cocos2d::CCObject* sender);
	void onToggle(cocos2d::CCObject* sender);
	void onViewMessage(cocos2d::CCObject* sender);
	void onViewProfile(cocos2d::CCObject* sender);
	TodoReturn updateBGColor(int);
	TodoReturn updateToggle();

	virtual bool init();
	virtual void draw();
	virtual void FLAlert_Clicked(FLAlertLayer*, bool);
	virtual TodoReturn uploadActionFinished(int, int);
	virtual TodoReturn uploadActionFailed(int, int);
	virtual TodoReturn onClosePopup(UploadActionPopup*);
}

[[link(android)]]
class GJMessagePopup {
	// virtual ~GJMessagePopup();
	// GJMessagePopup();

	static GJMessagePopup* create(GJUserMessage*);

	TodoReturn blockUser();
	bool init(GJUserMessage*);
	TodoReturn loadFromGJMessage(GJUserMessage*);
	void onBlock(cocos2d::CCObject* sender);
	void onClose(cocos2d::CCObject* sender);
	void onRemove(cocos2d::CCObject* sender);
	void onReply(cocos2d::CCObject* sender);

	virtual void keyBackClicked();
	virtual TodoReturn downloadMessageFinished(GJUserMessage*);
	virtual TodoReturn downloadMessageFailed(int);
	virtual TodoReturn uploadActionFinished(int, int);
	virtual TodoReturn uploadActionFailed(int, int);
	virtual TodoReturn onClosePopup(UploadActionPopup*);
	virtual void FLAlert_Clicked(FLAlertLayer*, bool);
}

[[link(android)]]
class GJMoreGamesLayer {
	// virtual ~GJMoreGamesLayer();

	static GJMoreGamesLayer* create();

	TodoReturn getMoreGamesList();

	virtual TodoReturn customSetup();
}

[[link(android)]]
class GJMoveCommandLayer {
	// ~GJMoveCommandLayer();

	static GJMoveCommandLayer* create(EffectGameObject*, cocos2d::CCArray*);

	TodoReturn determineStartValues();
	bool init(EffectGameObject*, cocos2d::CCArray*);
	TodoReturn keyBackClicked();
	void onClose(cocos2d::CCObject* sender);
	void onEasing(cocos2d::CCObject* sender);
	void onLockPlayerX(cocos2d::CCObject* sender);
	void onLockPlayerY(cocos2d::CCObject* sender);
	void onSpawnedByTrigger(cocos2d::CCObject* sender);
	void onTouchTriggered(cocos2d::CCObject* sender);
	void onUpdateGroupID(cocos2d::CCObject* sender);
	TodoReturn posFromSliderValue(float);
	TodoReturn sliderChanged(cocos2d::CCObject*);
	TodoReturn sliderValueFromPos(int);
	TodoReturn sliderXChanged(cocos2d::CCObject*);
	TodoReturn sliderYChanged(cocos2d::CCObject*);
	void textChanged(CCTextInputNode*);
	TodoReturn textInputClosed(CCTextInputNode*);
	TodoReturn textInputReturn(CCTextInputNode*);
	TodoReturn textInputShouldOffset(CCTextInputNode*, float);
	TodoReturn updateDuration();
	TodoReturn updateDurLabel(bool);
	TodoReturn updateEasingLabel();
	TodoReturn updateEditorLabel();
	TodoReturn updateMoveCommandEasing();
	TodoReturn updateMoveCommandPosX();
	TodoReturn updateMoveCommandPosY();
	TodoReturn updateSpawnedByTrigger();
	TodoReturn updateTargetGroupID();
	TodoReturn updateTextInputLabel();
	TodoReturn updateTouchTriggered();
	TodoReturn updateValueXLabel();
	TodoReturn updateValueYLabel();
}

[[link(android)]]
class GJObjectDecoder {
	// virtual ~GJObjectDecoder();

	static GJObjectDecoder* sharedDecoder();

	virtual bool init();
	virtual TodoReturn getDecodedObject(int, DS_Dictionary*);
}

[[link(android)]]
class GJOptionsLayer {
	// virtual ~GJOptionsLayer();

	static GJOptionsLayer* create();

	TodoReturn addToggle(char const*, char const*, char const*);
	TodoReturn countForPage(int);
	TodoReturn goToPage(int);
	TodoReturn incrementCountForPage(int);
	TodoReturn infoKey(int);
	TodoReturn layerForPage(int);
	TodoReturn layerKey(int);
	TodoReturn nextPosition(int);
	TodoReturn objectKey(int);
	TodoReturn objectsForPage(int);
	void onInfo(cocos2d::CCObject* sender);
	void onNextPage(cocos2d::CCObject* sender);
	void onPrevPage(cocos2d::CCObject* sender);
	void onToggle(cocos2d::CCObject* sender);
	TodoReturn pageKey(int);

	virtual bool init();
	virtual void keyBackClicked();
	virtual void onClose(cocos2d::CCObject* sender);
	virtual TodoReturn setupOptions();
}

[[link(android)]]
class GJRequestCell {
	// virtual ~GJRequestCell();
	GJRequestCell(char const*, float, float);

	TodoReturn loadFromScore(GJUserScore*);
	TodoReturn markAsRead();
	void onDeleteRequest(cocos2d::CCObject* sender);
	void onToggle(cocos2d::CCObject* sender);
	void onViewFriendRequest(cocos2d::CCObject* sender);
	void onViewProfile(cocos2d::CCObject* sender);
	TodoReturn updateBGColor(int);
	TodoReturn updateToggle();

	virtual bool init();
	virtual void draw();
	virtual void FLAlert_Clicked(FLAlertLayer*, bool);
	virtual TodoReturn uploadActionFinished(int, int);
	virtual TodoReturn uploadActionFailed(int, int);
	virtual TodoReturn onClosePopup(UploadActionPopup*);
}

[[link(android)]]
class GJRobotSprite {
	// virtual ~GJRobotSprite();
	// GJRobotSprite();

	static GJRobotSprite* create();

	TodoReturn getFireBoostSprite();
	TodoReturn getHeadSprite();
	TodoReturn hideGlow();
	TodoReturn showGlow();
	TodoReturn updateColor01(cocos2d::ccColor3B);
	TodoReturn updateColor02(cocos2d::ccColor3B);
	TodoReturn updateColors();
	TodoReturn updateFrame(int);
	TodoReturn updateGlowColor(cocos2d::ccColor3B, bool);

	virtual bool init();
	virtual void setOpacity(unsigned char);
}

[[link(android)]]
class GJRotationControl {
	// virtual ~GJRotationControl();
	// GJRotationControl();

	static GJRotationControl* create();

	TodoReturn finishTouch();
	TodoReturn getDelegate();
	void setAngle(float);
	void setDelegate(GJRotationControlDelegate*);
	TodoReturn updateSliderPosition(cocos2d::CCPoint);

	virtual bool init();
	virtual void draw();
	virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
}

[[link(android)]]
class GJRotationControlDelegate {
	virtual TodoReturn angleChanged(float);
	virtual TodoReturn angleChangeBegin();
	virtual TodoReturn angleChangeEnded();
}

[[link(android)]]
class GJScaleControl {
	// virtual ~GJScaleControl();

	static GJScaleControl* create();

	TodoReturn finishTouch();
	TodoReturn getDelegate();
	TodoReturn loadValues(GameObject*, cocos2d::CCArray*);
	TodoReturn scaleFromValue(float);
	void setDelegate(GJScaleControlDelegate*);
	TodoReturn sliderChanged(cocos2d::CCObject*);
	TodoReturn updateLabel(float);
	TodoReturn valueFromScale(float);

	virtual bool init();
	virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
}

[[link(android)]]
class GJScaleControlDelegate {
	TodoReturn scaleChanged(float);

	virtual TodoReturn scaleChangeBegin();
	virtual TodoReturn scaleChangeEnded();
}

[[link(android)]]
class GJScoreCell {
	// virtual ~GJScoreCell();
	GJScoreCell(char const*, float, float);

	TodoReturn loadFromScore(GJUserScore*);
	void onBan(cocos2d::CCObject* sender);
	void onMoreLevels(cocos2d::CCObject* sender);
	void onViewProfile(cocos2d::CCObject* sender);
	TodoReturn updateBGColor(int);

	virtual bool init();
	virtual void draw();
	virtual void FLAlert_Clicked(FLAlertLayer*, bool);
}

[[link(android)]]
class GJSearchObject {
	// virtual ~GJSearchObject();

	static GJSearchObject* create(SearchType, gd::string, gd::string, gd::string, int, bool, bool, bool, int, bool, bool, bool, bool, bool, bool);
	static GJSearchObject* create(SearchType, gd::string);
	static GJSearchObject* create(SearchType);

	TodoReturn createFromKey(char const*);
	TodoReturn getCoins();
	TodoReturn getCustomSong();
	TodoReturn getDifficultyStr();
	TodoReturn getFeatured();
	TodoReturn getKey();
	TodoReturn getLengthStr();
	TodoReturn getNextPageKey();
	TodoReturn getNextPageObject();
	TodoReturn getNoStar();
	TodoReturn getOriginal();
	TodoReturn getPage();
	TodoReturn getPrevPageObject();
	TodoReturn getSearchKey(SearchType, gd::string, gd::string, gd::string, int, bool, bool, bool, int, bool, bool, bool, bool, bool, bool);
	TodoReturn getSong();
	TodoReturn getSongFilter();
	TodoReturn getStar();
	TodoReturn getString();
	TodoReturn getTotal();
	TodoReturn getTwoP();
	TodoReturn getType();
	TodoReturn getUncompleted();
	bool init(SearchType, gd::string, gd::string, gd::string, int, bool, bool, bool, int, bool, bool, bool, bool, bool, bool);
	void setCoins(bool);
	void setCustomSong(bool);
	void setDifficultyStr(gd::string);
	void setFeatured(bool);
	void setLengthStr(gd::string);
	void setNoStar(bool);
	void setOriginal(bool);
	void setPage(int);
	void setSong(int);
	void setSongFilter(bool);
	void setStar(bool);
	void setString(gd::string);
	void setTotal(int);
	void setTwoP(bool);
	void setType(SearchType);
	void setUncompleted(bool);
}

[[link(android)]]
class GJSongBrowser {
	// virtual ~GJSongBrowser();
	// GJSongBrowser();

	static GJSongBrowser* create(LevelSettingsObject*);

	bool init(LevelSettingsObject*);
	TodoReturn loadPage(int);
	void onDeleteAll(cocos2d::CCObject* sender);
	void onNextPage(cocos2d::CCObject* sender);
	void onPrevPage(cocos2d::CCObject* sender);
	TodoReturn setupPageInfo(int, int, int);
	TodoReturn setupSongBrowser(cocos2d::CCArray*);

	virtual TodoReturn customSetup();
	virtual void FLAlert_Clicked(FLAlertLayer*, bool);
}

[[link(android)]]
class GJSpecialColorSelect {
	// virtual ~GJSpecialColorSelect();

	static GJSpecialColorSelect* create(int, GJSpecialColorSelectDelegate*);

	TodoReturn getButtonByTag(int);
	TodoReturn highlightSelected(ButtonSprite*);
	bool init(int, GJSpecialColorSelectDelegate*);
	void onClose(cocos2d::CCObject* sender);
	void onSelectColor(cocos2d::CCObject* sender);
	TodoReturn textForColorIdx(int);

	virtual void keyBackClicked();
}

[[link(android)]]
class GJSpecialColorSelectDelegate {
	virtual TodoReturn colorSelectClosed(GJSpecialColorSelect*, int);
}

[[link(android)]]
class GJSpriteColor {
	// ~GJSpriteColor();

	static GJSpriteColor* create();

	TodoReturn getBaseOpacityMod();
	TodoReturn getColorMode();
	TodoReturn getCustomBlend();
	TodoReturn getCustomColor();
	TodoReturn getCustomColorMode();
	TodoReturn getCustomOpacityMod();
	TodoReturn getDefaultColorMode();
	TodoReturn getEnableHSV();
	TodoReturn getHSVValue();
	bool init();
	TodoReturn resetCustomColorMode();
	void setBaseOpacityMod(float);
	void setCustomBlend(bool);
	void setCustomColor(cocos2d::ccColor3B);
	void setCustomColorMode(int);
	void setCustomOpacityMod(float);
	void setDefaultColorMode(int);
	void setEnableHSV(bool);
	void setHSVValue(cocos2d::ccHSVValue);
}

[[link(android)]]
class GJUserCell {
	// virtual ~GJUserCell();
	GJUserCell(char const*, float, float);

	TodoReturn loadFromScore(GJUserScore*);
	void onCancelFriendRequest(cocos2d::CCObject* sender);
	void onRemoveFriend(cocos2d::CCObject* sender);
	void onSendMessage(cocos2d::CCObject* sender);
	void onUnblockUser(cocos2d::CCObject* sender);
	void onViewFriendRequest(cocos2d::CCObject* sender);
	void onViewProfile(cocos2d::CCObject* sender);
	TodoReturn updateBGColor(int);

	virtual bool init();
	virtual void draw();
	virtual void FLAlert_Clicked(FLAlertLayer*, bool);
	virtual TodoReturn uploadActionFinished(int, int);
	virtual TodoReturn uploadActionFailed(int, int);
	virtual TodoReturn onClosePopup(UploadActionPopup*);
}

[[link(android)]]
class GJUserMessage {
	// virtual ~GJUserMessage();

	static GJUserMessage* create();
	static GJUserMessage* create(cocos2d::CCDictionary*);

	TodoReturn getAccountID();
	TodoReturn getBody();
	TodoReturn getDate();
	TodoReturn getIsRead();
	TodoReturn getIsSender();
	TodoReturn getIsToggled();
	TodoReturn getMessageID();
	TodoReturn getSubject();
	TodoReturn getUserID();
	TodoReturn getUserName();
	void setAccountID(int);
	void setBody(gd::string);
	void setDate(gd::string);
	void setIsRead(bool);
	void setIsSender(bool);
	void setIsToggled(bool);
	void setMessageID(int);
	void setSubject(gd::string);
	void setUserID(int);
	void setUserName(gd::string);

	virtual bool init();
}

[[link(android)]]
class GJUserScore {
	// virtual ~GJUserScore();
	// GJUserScore();

	static GJUserScore* create();
	static GJUserScore* create(cocos2d::CCDictionary*);

	TodoReturn getAccIcon();
	TodoReturn getAccountID();
	TodoReturn getBall();
	TodoReturn getBird();
	TodoReturn getCoins();
	TodoReturn getColor1();
	TodoReturn getColor2();
	TodoReturn getDart();
	TodoReturn getDateString();
	TodoReturn getDemons();
	TodoReturn getFriendReqSetting();
	TodoReturn getFriendStatus();
	TodoReturn getGlobalRank();
	TodoReturn getGlow();
	TodoReturn getIcon();
	TodoReturn getIconType();
	TodoReturn getIsNewRelation();
	TodoReturn getIsToggled();
	TodoReturn getLevels();
	TodoReturn getMessageSetting();
	TodoReturn getNewFriends();
	TodoReturn getNewMessages();
	TodoReturn getNewRequests();
	TodoReturn getRank();
	TodoReturn getRobot();
	TodoReturn getScoreType();
	TodoReturn getShip();
	TodoReturn getSpecial();
	TodoReturn getStars();
	TodoReturn getStreak();
	TodoReturn getUserCoins();
	TodoReturn getUserID();
	TodoReturn getUserName();
	TodoReturn getUserUDID();
	TodoReturn getYtUsername();
	bool isCurrentUser();
	TodoReturn mergeWithScore(GJUserScore*);
	void setAccIcon(int);
	void setAccountID(int);
	void setBall(int);
	void setBird(int);
	void setCoins(int);
	void setColor1(int);
	void setColor2(int);
	void setDart(int);
	void setDateString(gd::string);
	void setDemons(int);
	void setFriendReqSetting(int);
	void setFriendStatus(GJFriendStatus);
	void setGlobalRank(int);
	void setGlow(bool);
	void setIcon(int);
	void setIconType(int);
	void setIsNewRelation(bool);
	void setIsToggled(bool);
	void setLevels(int);
	void setMessageSetting(int);
	void setNewFriends(int);
	void setNewMessages(int);
	void setNewRequests(int);
	void setRank(int);
	void setRobot(int);
	void setScoreType(GJScoreType);
	void setShip(int);
	void setSpecial(int);
	void setStars(int);
	void setStreak(int);
	void setUserCoins(int);
	void setUserID(int);
	void setUserName(gd::string);
	void setUserUDID(gd::string);
	void setYtUsername(gd::string);

	virtual bool init();
}

[[link(android)]]
class GJWriteMessagePopup {
	// virtual ~GJWriteMessagePopup();
	// GJWriteMessagePopup();

	static GJWriteMessagePopup* create(int, int);

	TodoReturn closeMessagePopup(bool);
	bool init(int, int);
	void onClearBody(cocos2d::CCObject* sender);
	void onClose(cocos2d::CCObject* sender);
	void onSend(cocos2d::CCObject* sender);
	TodoReturn updateBody(gd::string);
	TodoReturn updateCharCountLabel(int);
	TodoReturn updateSubject(gd::string);
	TodoReturn updateText(gd::string, int);

	virtual void registerWithTouchDispatcher();
	virtual void keyBackClicked();
	virtual TodoReturn textInputOpened(CCTextInputNode*);
	virtual TodoReturn textInputClosed(CCTextInputNode*);
	virtual void textChanged(CCTextInputNode*);
	virtual TodoReturn uploadMessageFinished(int);
	virtual TodoReturn uploadMessageFailed(int);
	virtual TodoReturn onClosePopup(UploadActionPopup*);
	virtual void FLAlert_Clicked(FLAlertLayer*, bool);
	virtual TodoReturn textInputShouldOffset(CCTextInputNode*, float);
	virtual TodoReturn textInputReturn(CCTextInputNode*);
}

[[link(android)]]
class GManager {
	// virtual ~GManager();

	TodoReturn getCompressedSaveString();
	TodoReturn getQuickSave();
	TodoReturn getSaveString();
	TodoReturn load();
	TodoReturn loadDataFromFile(gd::string);
	TodoReturn loadFromCompressedString(gd::string);
	TodoReturn loadFromString(gd::string);
	TodoReturn save();
	TodoReturn saveData(DS_Dictionary*, gd::string);
	TodoReturn saveGMTo(gd::string);
	void setQuickSave(bool);
	TodoReturn tryLoadData(DS_Dictionary*, gd::string);

	virtual bool init();
	virtual TodoReturn setup();
	virtual TodoReturn encodeDataTo(DS_Dictionary*);
	virtual TodoReturn dataLoaded(DS_Dictionary*);
	virtual TodoReturn firstLoad();
}

[[link(android)]]
class GooglePlayDelegate {
	virtual TodoReturn googlePlaySignedIn();
}

[[link(android)]]
class GooglePlayManager {
	// virtual ~GooglePlayManager();

	static GooglePlayManager* sharedState();

	TodoReturn getDelegate();
	TodoReturn getDelegate2();
	TodoReturn googlePlaySignedIn();
	void setDelegate(GooglePlayDelegate*);
	void setDelegate2(GooglePlayDelegate*);

	virtual bool init();
}

[[link(android)]]
class GravityEffectSprite {
	// virtual ~GravityEffectSprite();

	static GravityEffectSprite* create();

	TodoReturn updateSpritesColor(cocos2d::ccColor3B);

	virtual bool init();
	virtual void draw();
}

[[link(android)]]
class GroupCommandObject {
	// ~GroupCommandObject();
	// GroupCommandObject();

	static GroupCommandObject* create();

	TodoReturn createFromString(gd::string);
	TodoReturn easeToText(int);
	TodoReturn getDeltaTime();
	TodoReturn getDeltaValue();
	TodoReturn getDuration();
	TodoReturn getEasedAction(cocos2d::CCActionInterval*, int);
	TodoReturn getEasing();
	TodoReturn getIsFinished();
	TodoReturn getLastRound();
	TodoReturn getLockX();
	TodoReturn getLockY();
	TodoReturn getSaveString();
	TodoReturn getTarget();
	TodoReturn getTargetGroupID();
	TodoReturn getTotalValue();
	TodoReturn getValue();
	bool init();
	TodoReturn resetDelta();
	TodoReturn runMoveCommand(cocos2d::CCPoint, float, int, bool, bool);
	void setDeltaTime(float);
	void setDeltaValue(cocos2d::CCPoint);
	void setDuration(float);
	void setEasing(int);
	void setIsFinished(bool);
	void setLastRound(bool);
	void setLockX(bool);
	void setLockY(bool);
	void setTarget(cocos2d::CCPoint);
	void setTargetGroupID(int);
	void setTotalValue(cocos2d::CCPoint);
	void setValue(cocos2d::CCPoint);
	TodoReturn step(float);
	TodoReturn updateTweenAction(float, char const*);
}

[[link(android)]]
class HardStreak {
	// virtual ~HardStreak();

	static HardStreak* create();

	TodoReturn addPoint(cocos2d::CCPoint);
	TodoReturn clearBehindXPos(float);
	TodoReturn firstSetup();
	TodoReturn getDisableDual();
	TodoReturn getEndPoint();
	TodoReturn getStrokeScale();
	TodoReturn getStrokeScaleMod();
	TodoReturn normalizeAngle(double);
	TodoReturn quadCornerOffset(cocos2d::CCPoint, cocos2d::CCPoint, float);
	TodoReturn reset();
	TodoReturn resumeStroke();
	void setDisableDual(bool);
	void setEndPoint(cocos2d::CCPoint);
	void setStrokeScale(float);
	void setStrokeScaleMod(float);
	TodoReturn stopStroke();
	TodoReturn updateStroke(float);

	virtual bool init();
}

[[link(android)]]
class HSVWidgetPopup {
	// virtual ~HSVWidgetPopup();

	static HSVWidgetPopup* create(cocos2d::ccHSVValue, HSVWidgetPopupDelegate*, gd::string);

	bool init(cocos2d::ccHSVValue, HSVWidgetPopupDelegate*, gd::string);
	void onClose(cocos2d::CCObject* sender);

	virtual void keyBackClicked();
}

[[link(android)]]
class HSVWidgetPopupDelegate {
	TodoReturn hsvPopupClosed(HSVWidgetPopup*, cocos2d::ccHSVValue);
}

[[link(android)]]
class InfoAlertButton {
	// virtual ~InfoAlertButton();

	static InfoAlertButton* create(gd::string, gd::string, float);

	bool init(gd::string, gd::string, float);

	virtual void activate();
}

[[link(android)]]
class InfoLayer {
	// virtual ~InfoLayer();
	// InfoLayer();

	static InfoLayer* create(GJGameLevel*);

	TodoReturn commentUploadFailed(int);
	TodoReturn confirmReport(cocos2d::CCObject*);
	TodoReturn getSpriteButton(char const*, cocos2d::SEL_MenuHandler, cocos2d::CCMenu*, float);
	bool init(GJGameLevel*);
	bool isCorrect(char const*);
	TodoReturn loadPage(int);
	void onClose(cocos2d::CCObject* sender);
	void onComment(cocos2d::CCObject* sender);
	void onGetComments(cocos2d::CCObject* sender);
	void onLevelInfo(cocos2d::CCObject* sender);
	void onMore(cocos2d::CCObject* sender);
	void onNextPage(cocos2d::CCObject* sender);
	void onOriginal(cocos2d::CCObject* sender);
	void onPrevPage(cocos2d::CCObject* sender);
	TodoReturn setupCommentsBrowser(cocos2d::CCArray*);
	TodoReturn setupLevelInfo();
	TodoReturn toggleCommentMode(cocos2d::CCNode*);
	TodoReturn updateCommentModeButtons();
	TodoReturn updateLevelsLabel();

	virtual void registerWithTouchDispatcher();
	virtual void keyBackClicked();
	virtual TodoReturn show();
	virtual TodoReturn loadCommentsFinished(cocos2d::CCArray*, char const*);
	virtual TodoReturn loadCommentsFailed(char const*);
	virtual TodoReturn setupPageInfo(gd::string, char const*);
	virtual TodoReturn commentUploadFinished(int);
	virtual TodoReturn updateUserScoreFinished();
	virtual void FLAlert_Clicked(FLAlertLayer*, bool);
}

[[link(android)]]
class InheritanceNode {
	// virtual ~InheritanceNode();

	static InheritanceNode* create(int, InheritanceNode*);

	TodoReturn getIndex();
	TodoReturn getIsStart();
	TodoReturn getTarget();
	bool init(int, InheritanceNode*);
	void setIndex(int);
	void setIsStart(bool);
	void setTarget(InheritanceNode*);
}

[[link(android)]]
class KeybindingsLayer {
	// virtual ~KeybindingsLayer();

	static KeybindingsLayer* create();

	TodoReturn addKeyPair(char const*, char const*);
	TodoReturn countForPage(int);
	TodoReturn goToPage(int);
	TodoReturn incrementCountForPage(int);
	TodoReturn infoKey(int);
	TodoReturn layerForPage(int);
	TodoReturn layerKey(int);
	TodoReturn nextPosition(int);
	TodoReturn objectKey(int);
	TodoReturn objectsForPage(int);
	void onClose(cocos2d::CCObject* sender);
	void onInfo(cocos2d::CCObject* sender);
	void onNextPage(cocos2d::CCObject* sender);
	void onPrevPage(cocos2d::CCObject* sender);
	void onToggle(cocos2d::CCObject* sender);
	TodoReturn pageKey(int);

	virtual bool init();
	virtual void keyBackClicked();
}

[[link(android)]]
class KeybindingsManager {
	// virtual ~KeybindingsManager();

	static KeybindingsManager* sharedState();

	TodoReturn commandForKey(cocos2d::enumKeyCodes, GJKeyGroup, bool, bool, bool);
	TodoReturn commandForKeyMods(cocos2d::enumKeyCodes, GJKeyGroup);
	TodoReturn commandForKeyNoMods(cocos2d::enumKeyCodes, GJKeyGroup);
	TodoReturn commandToKeyForGroup(GJKeyGroup);
	TodoReturn dataLoaded(DS_Dictionary*);
	TodoReturn encodeDataTo(DS_Dictionary*);
	TodoReturn firstSetup();
	TodoReturn getCommandToKeyDict();
	TodoReturn getKeyToCommandDict();
	TodoReturn groupForCommand(GJKeyCommand);
	TodoReturn keyForCommand(GJKeyCommand);
	TodoReturn keyToCommandForGroup(GJKeyGroup);
	void setCommandToKeyDict(cocos2d::CCDictionary*);
	void setKeyToCommandDict(cocos2d::CCDictionary*);

	virtual bool init();
}

[[link(android)]]
class LeaderboardManagerDelegate {
	virtual TodoReturn updateUserScoreFinished();
	virtual TodoReturn updateUserScoreFailed();
	virtual TodoReturn loadLeaderboardFinished(cocos2d::CCArray*, char const*);
	virtual TodoReturn loadLeaderboardFailed(char const*);
}

[[link(android)]]
class LeaderboardsLayer {
	// virtual ~LeaderboardsLayer();

	static LeaderboardsLayer* create(LeaderboardState);

	bool init(LeaderboardState);
	bool isCorrect(char const*);
	void onBack(cocos2d::CCObject* sender);
	void onCreators(cocos2d::CCObject* sender);
	void onGlobal(cocos2d::CCObject* sender);
	void onInfo(cocos2d::CCObject* sender);
	void onTop(cocos2d::CCObject* sender);
	void onWeek(cocos2d::CCObject* sender);
	TodoReturn refreshTabs();
	TodoReturn scene(LeaderboardState);
	TodoReturn selectLeaderboard(LeaderboardState);
	TodoReturn setupLevelBrowser(cocos2d::CCArray*);
	TodoReturn setupTabs();
	TodoReturn toggleTabButtons();

	virtual void keyBackClicked();
	virtual TodoReturn updateUserScoreFinished();
	virtual TodoReturn updateUserScoreFailed();
	virtual TodoReturn loadLeaderboardFinished(cocos2d::CCArray*, char const*);
	virtual TodoReturn loadLeaderboardFailed(char const*);
}

[[link(android)]]
class LevelBrowserLayer {
	// virtual ~LevelBrowserLayer();
	// LevelBrowserLayer();

	static LevelBrowserLayer* create(GJSearchObject*);

	bool init(GJSearchObject*);
	bool isCorrect(char const*);
	TodoReturn loadPage(GJSearchObject*);
	void onDeleteAll(cocos2d::CCObject* sender);
	void onInfo(cocos2d::CCObject* sender);
	void onMyOnlineLevels(cocos2d::CCObject* sender);
	void onNew(cocos2d::CCObject* sender);
	void onNextPage(cocos2d::CCObject* sender);
	void onPrevPage(cocos2d::CCObject* sender);
	void onRefresh(cocos2d::CCObject* sender);
	TodoReturn scene(GJSearchObject*);
	void setSearchObject(GJSearchObject*);
	TodoReturn setupLevelBrowser(cocos2d::CCArray*);
	TodoReturn updateLevelsLabel();

	virtual TodoReturn loadLevelsFinished(cocos2d::CCArray*, char const*);
	virtual TodoReturn loadLevelsFailed(char const*);
	virtual void onEnter();
	virtual void onEnterTransitionDidFinish();
	virtual void keyBackClicked();
	virtual void keyDown(cocos2d::enumKeyCodes);
	virtual TodoReturn setupPageInfo(gd::string, char const*);
	virtual void onBack(cocos2d::CCObject* sender);
	virtual void FLAlert_Clicked(FLAlertLayer*, bool);
}

[[link(android)]]
class LevelCell {
	// virtual ~LevelCell();
	LevelCell(char const*, float, float);

	TodoReturn loadCustomLevelCell();
	TodoReturn loadFromLevel(GJGameLevel*);
	TodoReturn loadLocalLevelCell();
	void onClick(cocos2d::CCObject* sender);
	void onViewProfile(cocos2d::CCObject* sender);
	TodoReturn updateBGColor(int);

	virtual bool init();
	virtual void draw();
}

[[link(android)]]
class LevelCommentDelegate {
	virtual TodoReturn loadCommentsFinished(cocos2d::CCArray*, char const*);
	virtual TodoReturn loadCommentsFailed(char const*);
	virtual TodoReturn updateUserScoreFinished();
	virtual TodoReturn setupPageInfo(gd::string, char const*);
}

[[link(android)]]
class LevelDeleteDelegate {
	virtual TodoReturn levelDeleteFinished(int);
	virtual TodoReturn levelDeleteFailed(int);
}

[[link(android)]]
class LevelDownloadDelegate {
	virtual TodoReturn levelDownloadFinished(GJGameLevel*);
	virtual TodoReturn levelDownloadFailed(int);
}

[[link(android)]]
class LevelEditorLayer {
	// virtual ~LevelEditorLayer();
	// LevelEditorLayer();

	static LevelEditorLayer* create(GJGameLevel*);

	TodoReturn addObjectFromString(gd::string);
	TodoReturn addObjectsRecursiveFromArray(cocos2d::CCArray*, int);
	TodoReturn addSpecial(GameObject*);
	TodoReturn addToGroup(GameObject*, int);
	TodoReturn addToGroup(GameObject*);
	TodoReturn addToRedoList(UndoObject*);
	TodoReturn addToUndoList(UndoObject*, bool);
	TodoReturn animateInDualGround(GameObject*, float, bool);
	TodoReturn breakApartTextObject(GameObject*);
	TodoReturn calculateColorValues(EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*);
	TodoReturn canPasteState();
	TodoReturn checkCollisions(PlayerObject*, float);
	TodoReturn checkSpawnObjects();
	TodoReturn copyObjectState(GameObject*);
	TodoReturn createBackground();
	TodoReturn createGroundLayer();
	TodoReturn createObject(int, cocos2d::CCPoint, bool);
	TodoReturn createObjectsFromSetup(gd::string);
	TodoReturn createObjectsFromString(gd::string, bool);
	TodoReturn dirtifyTriggers();
	TodoReturn enterDualMode(GameObject*, bool);
	TodoReturn fastUpdateDisabledGroups();
	TodoReturn flipGravity(PlayerObject*, bool, bool);
	TodoReturn fullUpdateDisabledGroups();
	TodoReturn getAllObjects();
	TodoReturn getClkTimer();
	TodoReturn getCoinCount();
	TodoReturn getDontApplyLayerFilter();
	TodoReturn getDualMode();
	TodoReturn getGridLayer();
	TodoReturn getGridPos(cocos2d::CCPoint);
	TodoReturn getGroundHeightForMode(int);
	TodoReturn getGroup(int);
	TodoReturn getGroupIDFilter();
	TodoReturn getLastObjectX();
	TodoReturn getLevel();
	TodoReturn getLevelDistance();
	TodoReturn getLevelString();
	TodoReturn getMaxPortalY();
	TodoReturn getMinPortalY();
	TodoReturn getNextColorChannel();
	TodoReturn getNextFreeGroupID();
	TodoReturn getObjectCount();
	TodoReturn getObjectRect(GameObject*, bool);
	TodoReturn getOldLevelString();
	TodoReturn getOtherPlayer(PlayerObject*);
	TodoReturn getPlayerState();
	TodoReturn getRelativeOffset(GameObject*);
	TodoReturn getSectionCount();
	TodoReturn getUILayer();
	TodoReturn handleAction(bool, cocos2d::CCArray*);
	TodoReturn hasAction(bool);
	bool init(GJGameLevel*);
	TodoReturn objectAtPosition(cocos2d::CCPoint);
	TodoReturn objectIntersectsCircle(GameObject*, GameObject*);
	TodoReturn objectMoved(GameObject*);
	TodoReturn objectsAtPosition(cocos2d::CCPoint);
	TodoReturn objectsInRect(cocos2d::CCRect, bool);
	TodoReturn onPausePlaytest();
	TodoReturn onPlaytest();
	TodoReturn onResumePlaytest();
	TodoReturn onStopPlaytest();
	TodoReturn pasteAtributeState(GameObject*, cocos2d::CCArray*);
	TodoReturn pasteColorState(GameObject*, cocos2d::CCArray*);
	TodoReturn playerWillSwitchMode(PlayerObject*, GameObject*);
	TodoReturn playMusic();
	TodoReturn preloadMoveActions();
	TodoReturn processLoadedMoveActions();
	TodoReturn processMoveActionsStep();
	TodoReturn pushButton(int, bool);
	TodoReturn recreateGroups();
	TodoReturn redoLastAction();
	TodoReturn releaseButton(int, bool);
	TodoReturn removeAllObjects();
	TodoReturn removeAllObjectsOfType(int);
	TodoReturn removeBackground();
	TodoReturn removeFromGroup(GameObject*);
	TodoReturn removeGroundLayer();
	TodoReturn removeObject(GameObject*, bool);
	TodoReturn removeObjectFromSection(GameObject*);
	TodoReturn removePlayer2();
	TodoReturn removeSpecial(GameObject*);
	TodoReturn reorderObjectSection(GameObject*);
	TodoReturn resetMovingObjects();
	TodoReturn resetObjectVector();
	TodoReturn resetUnusedColorChannels();
	TodoReturn rotationForSlopeNearObject(GameObject*);
	TodoReturn scene(GJGameLevel*);
	TodoReturn sectionForPos(float);
	void setDontApplyLayerFilter(bool);
	void setGroupIDFilter(int);
	void setObjectCount(int);
	void setStartPosObject(StartPosObject*);
	TodoReturn setupLevelStart(LevelSettingsObject*);
	TodoReturn shouldBlend(int);
	TodoReturn sortBatchnodeChildren(float);
	TodoReturn spawnGroup(int, float);
	TodoReturn spawnPlayer2();
	TodoReturn switchToFlyMode(PlayerObject*, GameObject*, bool, int);
	TodoReturn switchToRobotMode(PlayerObject*, GameObject*, bool);
	TodoReturn switchToRollMode(PlayerObject*, GameObject*, bool);
	TodoReturn timeForXPos(float);
	TodoReturn toggleDualMode(GameObject*, bool, PlayerObject*, bool);
	TodoReturn toggleGrid(bool);
	TodoReturn toggleGround(bool);
	TodoReturn triggerMoveCommand(EffectGameObject*);
	TodoReturn typeExistsAtPosition(int, cocos2d::CCPoint, bool, bool, float);
	TodoReturn undoLastAction();
	TodoReturn updateDualGround(PlayerObject*, int, bool);
	TodoReturn updateEditorMode();
	TodoReturn updateGameObjects();
	TodoReturn updateGround(float);
	TodoReturn updateGroundWidth();
	TodoReturn updateLevelColors();
	TodoReturn updateLevelFont(int);
	TodoReturn updateOBB2(cocos2d::CCRect);
	TodoReturn updateTimeMod(float, bool);
	TodoReturn validGroup(GameObject*);
	TodoReturn willSwitchToMode(int, PlayerObject*);

	virtual void update(float);
	virtual void draw();
	virtual TodoReturn updateVisibility(float);
	virtual TodoReturn addToSection(GameObject*);
	virtual TodoReturn removeFromGroup(GameObject*, int);
	virtual TodoReturn levelSettingsUpdated();
}

[[link(android)]]
class LevelFeatureLayer {
	// virtual ~LevelFeatureLayer();

	static LevelFeatureLayer* create(int);

	bool init(int);
	void onClose(cocos2d::CCObject* sender);
	void onDown(cocos2d::CCObject* sender);
	void onDown2(cocos2d::CCObject* sender);
	void onRemoveValues(cocos2d::CCObject* sender);
	void onSetFeatured(cocos2d::CCObject* sender);
	void onUp(cocos2d::CCObject* sender);
	void onUp2(cocos2d::CCObject* sender);
	TodoReturn updateStars();

	virtual void keyBackClicked();
}

[[link(android)]]
class LevelInfoLayer {
	// virtual ~LevelInfoLayer();
	// LevelInfoLayer();

	static LevelInfoLayer* create(GJGameLevel*);

	TodoReturn confirmClone(cocos2d::CCObject*);
	TodoReturn confirmDelete(cocos2d::CCObject*);
	TodoReturn confirmOwnerDelete(cocos2d::CCObject*);
	TodoReturn downloadLevel();
	TodoReturn incrementDislikes();
	TodoReturn incrementLikes();
	bool init(GJGameLevel*);
	void onBack(cocos2d::CCObject* sender);
	void onClone(cocos2d::CCObject* sender);
	void onDelete(cocos2d::CCObject* sender);
	void onFeatured(cocos2d::CCObject* sender);
	void onInfo(cocos2d::CCObject* sender);
	void onLevelInfo(cocos2d::CCObject* sender);
	void onLike(cocos2d::CCObject* sender);
	void onOwnerDelete(cocos2d::CCObject* sender);
	void onPlay(cocos2d::CCObject* sender);
	void onPlayReplay(cocos2d::CCObject* sender);
	void onRate(cocos2d::CCObject* sender);
	void onRateStars(cocos2d::CCObject* sender);
	void onRateStarsMod(cocos2d::CCObject* sender);
	void onUpdate(cocos2d::CCObject* sender);
	void onViewProfile(cocos2d::CCObject* sender);
	TodoReturn playStep2();
	TodoReturn playStep3();
	TodoReturn scene(GJGameLevel*);
	TodoReturn setupLevelInfo();
	TodoReturn setupProgressBars();
	TodoReturn shouldDownloadLevel();
	TodoReturn showSongWarning();
	TodoReturn showUpdateAlert(UpdateResponse);
	TodoReturn tryCloneLevel(cocos2d::CCObject*);
	TodoReturn updateLabelValues();
	TodoReturn updateSideButtons();

	virtual void keyBackClicked();
	virtual void keyDown(cocos2d::enumKeyCodes);
	virtual TodoReturn numberInputClosed(NumberInputLayer*);
	virtual TodoReturn levelDownloadFinished(GJGameLevel*);
	virtual TodoReturn levelDownloadFailed(int);
	virtual TodoReturn levelUpdateFinished(GJGameLevel*, UpdateResponse);
	virtual TodoReturn levelUpdateFailed(int);
	virtual TodoReturn levelDeleteFinished(int);
	virtual TodoReturn levelDeleteFailed(int);
	virtual TodoReturn rateLevelClosed();
	virtual TodoReturn likedItem(LikeItemType, int, bool);
	virtual void FLAlert_Clicked(FLAlertLayer*, bool);
}

[[link(android)]]
class LevelManagerDelegate {
	virtual TodoReturn loadLevelsFinished(cocos2d::CCArray*, char const*);
	virtual TodoReturn loadLevelsFailed(char const*);
	virtual TodoReturn setupPageInfo(gd::string, char const*);
}

[[link(android)]]
class LevelPage {
	// virtual ~LevelPage();
	// LevelPage();

	static LevelPage* create(GJGameLevel*);

	TodoReturn addSecretCoin();
	bool init(GJGameLevel*);
	void onInfo(cocos2d::CCObject* sender);
	void onPlay(cocos2d::CCObject* sender);
	TodoReturn playCoinEffect();
	TodoReturn playStep2();
	TodoReturn playStep3();
	TodoReturn updateDynamicPage(GJGameLevel*);

	virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void registerWithTouchDispatcher();
}

[[link(android)]]
class LevelSearchLayer {
	// virtual ~LevelSearchLayer();

	static LevelSearchLayer* create();

	TodoReturn checkDiff(int);
	TodoReturn checkTime(int);
	TodoReturn clearFilters();
	TodoReturn confirmClearFilters(cocos2d::CCObject*);
	TodoReturn getDiffKey(int);
	TodoReturn getLevelLenKey();
	TodoReturn getSearchDiffKey();
	TodoReturn getSearchObject(SearchType, gd::string);
	TodoReturn getTimeKey(int);
	void onBack(cocos2d::CCObject* sender);
	void onClose(cocos2d::CCObject* sender);
	void onFollowed(cocos2d::CCObject* sender);
	void onFriends(cocos2d::CCObject* sender);
	void onLatestStars(cocos2d::CCObject* sender);
	void onMagic(cocos2d::CCObject* sender);
	void onMoreOptions(cocos2d::CCObject* sender);
	void onMostDownloaded(cocos2d::CCObject* sender);
	void onMostLikes(cocos2d::CCObject* sender);
	void onMostRecent(cocos2d::CCObject* sender);
	void onSearch(cocos2d::CCObject* sender);
	void onSearchUser(cocos2d::CCObject* sender);
	void onStarAward(cocos2d::CCObject* sender);
	void onTrending(cocos2d::CCObject* sender);
	TodoReturn scene();
	TodoReturn toggleDifficulty(cocos2d::CCObject*);
	TodoReturn toggleDifficultyNum(int, bool);
	TodoReturn toggleStar(cocos2d::CCObject*);
	TodoReturn toggleTime(cocos2d::CCObject*);
	TodoReturn toggleTimeNum(int, bool);
	TodoReturn updateSearchLabel(char const*);

	virtual bool init();
	virtual void keyBackClicked();
	virtual TodoReturn textInputOpened(CCTextInputNode*);
	virtual TodoReturn textInputClosed(CCTextInputNode*);
	virtual void textChanged(CCTextInputNode*);
	virtual void FLAlert_Clicked(FLAlertLayer*, bool);
}

[[link(android)]]
class LevelSelectLayer {
	// virtual ~LevelSelectLayer();

	static LevelSelectLayer* create(int);

	TodoReturn colorForPage(int);
	TodoReturn getColorValue(int, int, float);
	bool init(int);
	void onBack(cocos2d::CCObject* sender);
	void onDownload(cocos2d::CCObject* sender);
	void onInfo(cocos2d::CCObject* sender);
	void onNext(cocos2d::CCObject* sender);
	void onPlay(cocos2d::CCObject* sender);
	void onPrev(cocos2d::CCObject* sender);
	TodoReturn scene(int);

	virtual void keyBackClicked();
	virtual void keyDown(cocos2d::enumKeyCodes);
	virtual TodoReturn updatePageWithObject(cocos2d::CCObject*, cocos2d::CCObject*);
	virtual TodoReturn scrollLayerMoved(cocos2d::CCPoint);
}

[[link(android)]]
class LevelSettingsDelegate {
	virtual TodoReturn levelSettingsUpdated();
}

[[link(android)]]
class LevelSettingsLayer {
	// virtual ~LevelSettingsLayer();
	// LevelSettingsLayer();

	static LevelSettingsLayer* create(LevelSettingsObject*, LevelEditorLayer*);

	TodoReturn audioNext(cocos2d::CCObject*);
	TodoReturn audioPrevious(cocos2d::CCObject*);
	TodoReturn colorSelectClosed(ColorSelectPopup*);
	TodoReturn createToggleButton(gd::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint);
	TodoReturn getDelegate();
	bool init(LevelSettingsObject*, LevelEditorLayer*);
	void on3DLine(cocos2d::CCObject* sender);
	void onBG(cocos2d::CCObject* sender);
	void onBGArt(cocos2d::CCObject* sender);
	void onClose(cocos2d::CCObject* sender);
	void onCol(cocos2d::CCObject* sender);
	void onDualMode(cocos2d::CCObject* sender);
	void onG(cocos2d::CCObject* sender);
	void onG2(cocos2d::CCObject* sender);
	void onGArt(cocos2d::CCObject* sender);
	void onGravityFlipped(cocos2d::CCObject* sender);
	void onLine(cocos2d::CCObject* sender);
	void onMiniMode(cocos2d::CCObject* sender);
	void onObj(cocos2d::CCObject* sender);
	void onOpenCustomSong(cocos2d::CCObject* sender);
	void onSelectFont(cocos2d::CCObject* sender);
	void onSelectMode(cocos2d::CCObject* sender);
	void onSelectSpeed(cocos2d::CCObject* sender);
	void onSongMode(cocos2d::CCObject* sender);
	void onTwoPlayerMode(cocos2d::CCObject* sender);
	void onTwoPlayerModeInfo(cocos2d::CCObject* sender);
	TodoReturn selectSong(int);
	void setDelegate(LevelSettingsDelegate*);
	TodoReturn showCustomSongSelect();
	TodoReturn showPicker(int, ColorAction*);
	TodoReturn updateAudioLabel();
	TodoReturn updateColorSprite(ColorChannelSprite*);
	TodoReturn updateColorSprites();

	virtual TodoReturn customSongLayerClosed();
	virtual void registerWithTouchDispatcher();
	virtual void keyBackClicked();
	virtual void FLAlert_Clicked(FLAlertLayer*, bool);
	virtual TodoReturn selectArtClosed(SelectArtLayer*);
}

[[link(android)]]
class LevelSettingsObject {
	// virtual ~LevelSettingsObject();

	static LevelSettingsObject* create();

	TodoReturn getBGIdx();
	TodoReturn getColorManager();
	TodoReturn getFadeIn();
	TodoReturn getFadeOut();
	TodoReturn getFontIdx();
	TodoReturn getGIdx();
	TodoReturn getGLineIdx();
	TodoReturn getGravityFlipped();
	TodoReturn getIsLimited();
	TodoReturn getLastColorPage();
	TodoReturn getLevel();
	TodoReturn getSaveString();
	TodoReturn getSongChanged();
	TodoReturn getSongOffset();
	TodoReturn getSongString();
	TodoReturn getStartDualMode();
	TodoReturn getStartMiniMode();
	TodoReturn getStartMode();
	TodoReturn getStartSpeed();
	TodoReturn getTwoPlayerMode();
	TodoReturn objectFromDict(cocos2d::CCDictionary*);
	TodoReturn objectFromString(gd::string);
	TodoReturn offsetMusic();
	void setBGIdx(int);
	void setColorManager(GJEffectManager*);
	void setFadeIn(bool);
	void setFadeOut(bool);
	void setFontIdx(int);
	void setGIdx(int);
	void setGLineIdx(int);
	void setGravityFlipped(bool);
	void setIsLimited(bool);
	void setLastColorPage(int);
	void setLevel(GJGameLevel*);
	void setSongChanged(bool);
	void setSongOffset(float);
	void setSongString(gd::string);
	void setStartDualMode(bool);
	void setStartMiniMode(bool);
	void setStartMode(int);
	void setStartSpeed(int);
	void setTwoPlayerMode(bool);
	TodoReturn setupColorsFromLegacyMode(cocos2d::CCDictionary*);

	virtual bool init();
}

[[link(android)]]
class LevelTools {
	TodoReturn artistForAudio(int);
	TodoReturn base64DecodeString(gd::string);
	TodoReturn base64EncodeString(gd::string);
	TodoReturn createOldStarLevelDict();
	TodoReturn createStarLevelDict();
	TodoReturn createStarPackDict();
	TodoReturn distanceFromXPosForDuration(float, float, float, cocos2d::CCArray*, int);
	TodoReturn fbURLForArtist(int);
	TodoReturn getAudioBPM(int);
	TodoReturn getAudioFileName(int);
	TodoReturn getAudioString(int);
	TodoReturn getAudioTitle(int);
	TodoReturn getLevel(int, bool);
	TodoReturn getSongObject(int);
	TodoReturn nameForArtist(int);
	TodoReturn ngURLForArtist(int);
	TodoReturn offsetBPMForTrack(int);
	TodoReturn timeForXPos(float, cocos2d::CCArray*, int);
	TodoReturn urlForAudio(int);
	TodoReturn verifyLevelIntegrity(gd::string, int);
	TodoReturn xPosForTime(float, cocos2d::CCArray*, int);
	TodoReturn ytURLForArtist(int);
}

[[link(android)]]
class LevelUpdateDelegate {
	virtual TodoReturn levelUpdateFinished(GJGameLevel*, UpdateResponse);
	virtual TodoReturn levelUpdateFailed(int);
}

[[link(android)]]
class LevelUploadDelegate {
	virtual TodoReturn levelUploadFinished(GJGameLevel*);
	virtual TodoReturn levelUploadFailed(GJGameLevel*);
}

[[link(android)]]
class LikeItemDelegate {
	virtual TodoReturn likedItem(LikeItemType, int, bool);
}

[[link(android)]]
class LikeItemLayer {
	// virtual ~LikeItemLayer();

	static LikeItemLayer* create(LikeItemType, int, int);

	TodoReturn getDelegate();
	bool init(LikeItemType, int, int);
	void onClose(cocos2d::CCObject* sender);
	void onDislike(cocos2d::CCObject* sender);
	void onLike(cocos2d::CCObject* sender);
	void setDelegate(LikeItemDelegate*);
	TodoReturn triggerLike(bool);

	virtual void keyBackClicked();
}

[[link(android)]]
class ListButtonBar {
	// virtual ~ListButtonBar();

	static ListButtonBar* create(cocos2d::CCArray*, cocos2d::CCPoint, int, int, float, float, float, float, int);

	TodoReturn getDelegate();
	TodoReturn getPage();
	TodoReturn goToPage(int);
	bool init(cocos2d::CCArray*, cocos2d::CCPoint, int, int, float, float, float, float, int);
	void onLeft(cocos2d::CCObject* sender);
	void onRight(cocos2d::CCObject* sender);
	void setDelegate(ListButtonBarDelegate*);
}

[[link(android)]]
class ListButtonBarDelegate {
	virtual TodoReturn listButtonBarSwitchedPage(ListButtonBar*, int);
}

[[link(android)]]
class ListButtonPage {
	// virtual ~ListButtonPage();

	static ListButtonPage* create(cocos2d::CCArray*, cocos2d::CCPoint, int, int, float, float, float);

	bool init(cocos2d::CCArray*, cocos2d::CCPoint, int, int, float, float, float);
}

[[link(android)]]
class ListCell {
	// virtual ~ListCell();
	ListCell(char const*, float, float);

	TodoReturn loadFromObject(cocos2d::CCObject*, int, int, int);
	TodoReturn updateBGColor(int);

	virtual bool init();
	virtual void draw();
}

[[link(android)]]
class LoadingCircle {
	// virtual ~LoadingCircle();

	static LoadingCircle* create();

	TodoReturn fadeAndRemove();
	TodoReturn getCircle();
	TodoReturn getDarkOverlay();
	TodoReturn getTargetScene();
	void setDarkOverlay(bool);
	void setTargetScene(cocos2d::CCNode*);
	TodoReturn show();

	virtual bool init();
	virtual void draw();
	virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void registerWithTouchDispatcher();
}

[[link(android)]]
class LoadingLayer {
	// virtual ~LoadingLayer();

	static LoadingLayer* create(bool);

	TodoReturn getLoadingString();
	bool init(bool);
	TodoReturn loadAssets();
	TodoReturn loadingFinished();
	TodoReturn scene(bool);
	TodoReturn updateProgress(int);
}

[[link(android)]]
class LocalLevelManager {
	// virtual ~LocalLevelManager();

	static LocalLevelManager* sharedState();

	TodoReturn getAllLevelsInDict();
	TodoReturn getAllLevelsWithName(gd::string);
	TodoReturn getLevelsInNameGroups();
	TodoReturn getLoadString(int);
	TodoReturn getLocalLevels();
	TodoReturn getMainLevelString(int);
	TodoReturn markLevelsAsUnmodified();
	TodoReturn moveLevelToTop(GJGameLevel*);
	TodoReturn reorderLevels();
	void setLocalLevels(cocos2d::CCArray*);
	TodoReturn updateLevelOrder();
	TodoReturn updateLevelRevision();

	virtual bool init();
	virtual TodoReturn encodeDataTo(DS_Dictionary*);
	virtual TodoReturn dataLoaded(DS_Dictionary*);
	virtual TodoReturn firstLoad();
}

[[link(android)]]
class MapPackCell {
	// virtual ~MapPackCell();
	MapPackCell(char const*, float, float);

	TodoReturn loadFromMapPack(GJMapPack*);
	void onClaimReward(cocos2d::CCObject* sender);
	void onClick(cocos2d::CCObject* sender);
	TodoReturn playCompleteEffect();
	TodoReturn reloadCell();
	TodoReturn updateBGColor(int);

	virtual bool init();
	virtual void draw();
}

[[link(android)]]
class MenuGameLayer {
	// virtual ~MenuGameLayer();
	// MenuGameLayer();

	static MenuGameLayer* create();

	TodoReturn destroyPlayer();
	TodoReturn getBGColor(int);
	TodoReturn resetPlayer();
	TodoReturn tryJump(float);
	TodoReturn updateColor(float);
	TodoReturn updateColors();

	virtual void update(float);
	virtual bool init();
	virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void registerWithTouchDispatcher();
}

[[link(android)]]
class MenuLayer {
	// virtual ~MenuLayer();

	TodoReturn endGame();
	TodoReturn node();
	void onAchievements(cocos2d::CCObject* sender);
	void onCreator(cocos2d::CCObject* sender);
	void onEveryplay(cocos2d::CCObject* sender);
	void onFacebook(cocos2d::CCObject* sender);
	void onFullVersion(cocos2d::CCObject* sender);
	void onGameCenter(cocos2d::CCObject* sender);
	void onGarage(cocos2d::CCObject* sender);
	void onGooglePlayGames(cocos2d::CCObject* sender);
	void onMoreGames(cocos2d::CCObject* sender);
	void onMyProfile(cocos2d::CCObject* sender);
	void onNewgrounds(cocos2d::CCObject* sender);
	void onOptions(cocos2d::CCObject* sender);
	TodoReturn onOptionsInstant();
	void onPlay(cocos2d::CCObject* sender);
	void onQuit(cocos2d::CCObject* sender);
	void onRobTop(cocos2d::CCObject* sender);
	void onStats(cocos2d::CCObject* sender);
	void onTrailer(cocos2d::CCObject* sender);
	void onTwitter(cocos2d::CCObject* sender);
	void onYouTube(cocos2d::CCObject* sender);
	TodoReturn openOptions(bool);
	TodoReturn scene(bool);
	TodoReturn showGCQuestion();
	TodoReturn showPirateMessage();
	TodoReturn syncPlatformAchievements(float);
	TodoReturn tryShowAd(float);
	TodoReturn updateUserProfileButton();
	TodoReturn willClose();

	virtual bool init();
	virtual void keyBackClicked();
	virtual void keyDown(cocos2d::enumKeyCodes);
	virtual TodoReturn googlePlaySignedIn();
	virtual void FLAlert_Clicked(FLAlertLayer*, bool);
}

[[link(android)]]
class MessageListDelegate {
	virtual TodoReturn loadMessagesFinished(cocos2d::CCArray*, char const*);
	virtual TodoReturn loadMessagesFailed(char const*, GJErrorCode);
	virtual TodoReturn forceReloadMessages(bool);
	virtual TodoReturn setupPageInfo(gd::string, char const*);
}

[[link(android)]]
class MessagesProfilePage {
	// virtual ~MessagesProfilePage();
	// MessagesProfilePage();

	static MessagesProfilePage* create(bool);

	TodoReturn deleteSelected();
	bool init(bool);
	bool isCorrect(char const*);
	TodoReturn loadPage(int);
	void onClose(cocos2d::CCObject* sender);
	void onDeleteSelected(cocos2d::CCObject* sender);
	void onNextPage(cocos2d::CCObject* sender);
	void onPrevPage(cocos2d::CCObject* sender);
	void onSentMessages(cocos2d::CCObject* sender);
	void onToggleAllObjects(cocos2d::CCObject* sender);
	void onUpdate(cocos2d::CCObject* sender);
	TodoReturn setupCommentsBrowser(cocos2d::CCArray*);
	TodoReturn untoggleAll();
	TodoReturn updateLevelsLabel();
	TodoReturn updatePageArrows();

	virtual void registerWithTouchDispatcher();
	virtual void keyBackClicked();
	virtual void FLAlert_Clicked(FLAlertLayer*, bool);
	virtual TodoReturn onClosePopup(UploadActionPopup*);
	virtual TodoReturn uploadActionFinished(int, int);
	virtual TodoReturn uploadActionFailed(int, int);
	virtual TodoReturn loadMessagesFinished(cocos2d::CCArray*, char const*);
	virtual TodoReturn loadMessagesFailed(char const*, GJErrorCode);
	virtual TodoReturn forceReloadMessages(bool);
	virtual TodoReturn setupPageInfo(gd::string, char const*);
}

[[link(android)]]
class MoreOptionsLayer {
	// virtual ~MoreOptionsLayer();

	static MoreOptionsLayer* create();

	TodoReturn addToggle(char const*, char const*, char const*);
	TodoReturn countForPage(int);
	TodoReturn goToPage(int);
	TodoReturn incrementCountForPage(int);
	TodoReturn infoKey(int);
	TodoReturn layerForPage(int);
	TodoReturn layerKey(int);
	TodoReturn nextPosition(int);
	TodoReturn objectKey(int);
	TodoReturn objectsForPage(int);
	void onClose(cocos2d::CCObject* sender);
	void onGPSignIn(cocos2d::CCObject* sender);
	void onGPSignOut(cocos2d::CCObject* sender);
	void onInfo(cocos2d::CCObject* sender);
	void onKeybindings(cocos2d::CCObject* sender);
	void onNextPage(cocos2d::CCObject* sender);
	void onPrevPage(cocos2d::CCObject* sender);
	void onSongBrowser(cocos2d::CCObject* sender);
	void onToggle(cocos2d::CCObject* sender);
	TodoReturn pageKey(int);
	TodoReturn toggleGP();

	virtual bool init();
	virtual void keyBackClicked();
	virtual TodoReturn textInputShouldOffset(CCTextInputNode*, float);
	virtual TodoReturn textInputReturn(CCTextInputNode*);
	virtual TodoReturn googlePlaySignedIn();
}

[[link(android)]]
class MoreSearchLayer {
	// virtual ~MoreSearchLayer();

	static MoreSearchLayer* create();

	TodoReturn audioNext(cocos2d::CCObject*);
	TodoReturn audioPrevious(cocos2d::CCObject*);
	TodoReturn createToggleButton(gd::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint);
	void onClose(cocos2d::CCObject* sender);
	void onCoins(cocos2d::CCObject* sender);
	void onFeatured(cocos2d::CCObject* sender);
	void onFollowed(cocos2d::CCObject* sender);
	void onFriends(cocos2d::CCObject* sender);
	void onInfo(cocos2d::CCObject* sender);
	void onNoStar(cocos2d::CCObject* sender);
	void onOriginal(cocos2d::CCObject* sender);
	void onSongFilter(cocos2d::CCObject* sender);
	void onSongMode(cocos2d::CCObject* sender);
	void onTwoPlayer(cocos2d::CCObject* sender);
	void onUncompleted(cocos2d::CCObject* sender);
	TodoReturn selectSong(int);
	TodoReturn toggleSongNodes(bool, bool);
	TodoReturn updateAudioLabel();

	virtual bool init();
	virtual void keyBackClicked();
	virtual TodoReturn textInputShouldOffset(CCTextInputNode*, float);
	virtual TodoReturn textInputReturn(CCTextInputNode*);
}

[[link(android)]]
class MoreVideoOptionsLayer {
	// virtual ~MoreVideoOptionsLayer();

	static MoreVideoOptionsLayer* create();

	TodoReturn addToggle(char const*, char const*, char const*);
	TodoReturn countForPage(int);
	TodoReturn goToPage(int);
	TodoReturn incrementCountForPage(int);
	TodoReturn infoKey(int);
	TodoReturn layerForPage(int);
	TodoReturn layerKey(int);
	TodoReturn nextPosition(int);
	TodoReturn objectKey(int);
	TodoReturn objectsForPage(int);
	void onClose(cocos2d::CCObject* sender);
	void onInfo(cocos2d::CCObject* sender);
	void onNextPage(cocos2d::CCObject* sender);
	void onPrevPage(cocos2d::CCObject* sender);
	void onToggle(cocos2d::CCObject* sender);
	TodoReturn pageKey(int);

	virtual bool init();
	virtual void keyBackClicked();
}

[[link(android)]]
class MultilineBitmapFont {
	// virtual ~MultilineBitmapFont();
	// MultilineBitmapFont();

	TodoReturn createWithFont(char const*, gd::string, float, float, cocos2d::CCPoint, int, bool);
	TodoReturn getIgnoreColorCode();
	TodoReturn getSizeWidth();
	TodoReturn getTextHeight();
	TodoReturn getTextPos();
	TodoReturn getTextWidth();
	TodoReturn initWithFont(char const*, gd::string, float, float, cocos2d::CCPoint, int, bool);
	TodoReturn readColorInfo(gd::string);
	void setIgnoreColorCode(bool);
	TodoReturn stringWithMaxWidth(gd::string, float, float);

	virtual void setOpacity(unsigned char);
}

[[link(android)]]
class MusicDelegateHandler {
	// virtual ~MusicDelegateHandler();

	static MusicDelegateHandler* create(MusicDownloadDelegate*);

	TodoReturn getDelegate();
	bool init(MusicDownloadDelegate*);
}

[[link(android)]]
class MusicDownloadDelegate {
	TodoReturn downloadSongFinished(SongInfoObject*);

	virtual TodoReturn loadSongInfoFinished(SongInfoObject*);
	virtual TodoReturn loadSongInfoFailed(int, GJSongError);
	virtual TodoReturn downloadSongFailed(int, GJSongError);
	virtual TodoReturn songStateChanged();
}

[[link(android)]]
class MusicDownloadManager {
	// virtual ~MusicDownloadManager();

	static MusicDownloadManager* sharedState();

	TodoReturn addDLToActive(char const*, cocos2d::CCObject*);
	TodoReturn addDLToActive(char const*);
	TodoReturn addMusicDownloadDelegate(MusicDownloadDelegate*);
	TodoReturn addSongObjectFromString(gd::string);
	TodoReturn clearSong(int);
	TodoReturn clearUnusedSongs();
	TodoReturn createSongsInfo(gd::string);
	TodoReturn dataLoaded(DS_Dictionary*);
	TodoReturn deleteSong(int);
	TodoReturn downloadSong(int);
	TodoReturn downloadSongFailed(int, GJSongError);
	TodoReturn downloadSongFinished(SongInfoObject*);
	TodoReturn encodeDataTo(DS_Dictionary*);
	TodoReturn firstSetup();
	TodoReturn getAllSongs();
	TodoReturn getDLObject(char const*);
	TodoReturn getDownloadedSongs();
	TodoReturn getDownloadedSongsDict();
	TodoReturn getDownloadProgress(int);
	TodoReturn getSongDownloadKey(int);
	TodoReturn getSongInfo(int, bool);
	TodoReturn getSongInfoKey(int);
	TodoReturn getSongInfoObject(int);
	TodoReturn getSongPriority();
	TodoReturn handleIt(bool, gd::string, gd::string, GJHttpType);
	TodoReturn handleItDelayed(bool, gd::string, gd::string, GJHttpType);
	TodoReturn handleItND(cocos2d::CCNode*, void*);
	TodoReturn incrementPriorityForSong(int);
	bool isDLActive(char const*);
	bool isRunningActionForSongID(int);
	bool isSongDownloaded(int);
	TodoReturn limitDownloadedSongs();
	TodoReturn loadSongInfoFailed(int, GJSongError);
	TodoReturn loadSongInfoFinished(SongInfoObject*);
	TodoReturn onDownloadSongCompleted(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
	TodoReturn onGetSongInfoCompleted(gd::string, gd::string);
	TodoReturn onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
	TodoReturn pathForSong(int);
	TodoReturn ProcessHttpRequest(gd::string, gd::string, gd::string, GJHttpType);
	TodoReturn removeDLFromActive(char const*);
	TodoReturn removeMusicDownloadDelegate(MusicDownloadDelegate*);
	TodoReturn responseToDict(gd::string, char const*);
	void setDownloadedSongsDict(cocos2d::CCDictionary*);
	TodoReturn showTOS(FLAlertLayerProtocol*);
	TodoReturn songStateChanged();
	TodoReturn stopDownload(int);

	virtual bool init();
}

[[link(android)]]
class MyLevelsLayer {
	// ~MyLevelsLayer();

	static MyLevelsLayer* create();

	bool init();
	TodoReturn keyBackClicked();
	void onBack(cocos2d::CCObject* sender);
	void onNew(cocos2d::CCObject* sender);
	TodoReturn scene();
	TodoReturn setupLevelBrowser();
}

[[link(android)]]
class NodePoint {
	// virtual ~NodePoint();

	static NodePoint* create(cocos2d::CCPoint);

	TodoReturn getPoint();
	bool init(cocos2d::CCPoint);
}

[[link(android)]]
class NumberInputDelegate {
	virtual TodoReturn numberInputClosed(NumberInputLayer*);
}

[[link(android)]]
class NumberInputLayer {
	// virtual ~NumberInputLayer();

	static NumberInputLayer* create();

	TodoReturn deleteLast();
	TodoReturn getDelegate();
	TodoReturn getMaxNumbers();
	TodoReturn getMinNumbers();
	TodoReturn getNumberString();
	TodoReturn inputNumber(int);
	void onClose(cocos2d::CCObject* sender);
	void onDone(cocos2d::CCObject* sender);
	void onNumber(cocos2d::CCObject* sender);
	void setDelegate(NumberInputDelegate*);
	void setMaxNumbers(int);
	void setMinNumbers(int);
	TodoReturn updateNumberState();

	virtual bool init();
	virtual void registerWithTouchDispatcher();
	virtual void keyBackClicked();
}

[[link(android)]]
class OBB2D {
	// virtual ~OBB2D();
	// OBB2D();

	static OBB2D* create(cocos2d::CCPoint, float, float, float);

	TodoReturn calculateWithCenter(cocos2d::CCPoint, float, float, float);
	TodoReturn computeAxes();
	TodoReturn getBoundingRect();
	bool init(cocos2d::CCPoint, float, float, float);
	TodoReturn orderCorners();
	TodoReturn overlaps(OBB2D*);
	TodoReturn overlaps1Way(OBB2D*);
}

[[link(android)]]
class ObjectManager {
	// virtual ~ObjectManager();

	TodoReturn animLoaded(char const*);
	TodoReturn getDefinition(char const*);
	TodoReturn getGlobalAnimCopy(char const*);
	TodoReturn instance();
	TodoReturn loadCopiedAnimations();
	TodoReturn loadCopiedSets();
	TodoReturn purgeObjectManager();
	TodoReturn replaceAllOccurencesOfString(cocos2d::CCString*, cocos2d::CCString*, cocos2d::CCDictionary*);
	void setLoaded(char const*);
	TodoReturn setup();

	virtual bool init();
}

[[link(android)]]
class ObjectToolbox {
	// virtual ~ObjectToolbox();

	static ObjectToolbox* sharedState();

	TodoReturn allKeys();
	TodoReturn frameToKey(char const*);
	TodoReturn gridNodeSizeForKey(int);
	TodoReturn intKeyToFrame(int);
	TodoReturn keyToFrame(char const*);
	TodoReturn perspectiveBlockFrame(int);

	virtual bool init();
}

[[link(android)]]
class OpacityEffectAction {
	// ~OpacityEffectAction();

	static OpacityEffectAction* create(float, float, float, int);

	TodoReturn createFromString(gd::string);
	TodoReturn getDeltaTime();
	TodoReturn getOpacity();
	TodoReturn getSaveString();
	TodoReturn getTargetID();
	bool init(float, float, float, int);
	void setDeltaTime(float);
	void setTargetID(int);
	TodoReturn step(float);
}

[[link(android)]]
class OptionsLayer {
	// virtual ~OptionsLayer();

	static OptionsLayer* create();

	TodoReturn createToggleButton(gd::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint);
	TodoReturn exitLayer();
	TodoReturn musicSliderChanged(cocos2d::CCObject*);
	void onAccount(cocos2d::CCObject* sender);
	void onHelp(cocos2d::CCObject* sender);
	void onOptions(cocos2d::CCObject* sender);
	void onProgressBar(cocos2d::CCObject* sender);
	void onRate(cocos2d::CCObject* sender);
	void onRecordReplays(cocos2d::CCObject* sender);
	void onSecretVault(cocos2d::CCObject* sender);
	void onSoundtracks(cocos2d::CCObject* sender);
	void onSupport(cocos2d::CCObject* sender);
	void onVideo(cocos2d::CCObject* sender);
	TodoReturn sfxSliderChanged(cocos2d::CCObject*);
	TodoReturn tryEnableRecord();

	virtual TodoReturn customSetup();
	virtual TodoReturn layerHidden();
	virtual void FLAlert_Clicked(FLAlertLayer*, bool);
}

[[link(android)]]
class PauseLayer {
	// virtual ~PauseLayer();
	// PauseLayer();

	static PauseLayer* create(bool);

	TodoReturn createToggleButton(gd::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint);
	TodoReturn goEdit();
	bool init(bool);
	TodoReturn musicSliderChanged(cocos2d::CCObject*);
	void onAutoCheckpoints(cocos2d::CCObject* sender);
	void onAutoRetry(cocos2d::CCObject* sender);
	void onEdit(cocos2d::CCObject* sender);
	void onHelp(cocos2d::CCObject* sender);
	void onNormalMode(cocos2d::CCObject* sender);
	void onPracticeMode(cocos2d::CCObject* sender);
	void onProgressBar(cocos2d::CCObject* sender);
	void onQuit(cocos2d::CCObject* sender);
	void onRecordReplays(cocos2d::CCObject* sender);
	void onRestart(cocos2d::CCObject* sender);
	void onResume(cocos2d::CCObject* sender);
	void onTime(cocos2d::CCObject* sender);
	TodoReturn setupProgressBars();
	TodoReturn sfxSliderChanged(cocos2d::CCObject*);
	TodoReturn tryShowBanner(float);

	virtual void keyBackClicked();
	virtual void keyDown(cocos2d::enumKeyCodes);
	virtual TodoReturn customSetup();
	virtual void keyUp(cocos2d::enumKeyCodes);
}

[[link(android)]]
class PlatformDownloadDelegate {
	virtual TodoReturn downloadFinished(char const*);
	virtual TodoReturn downloadFailed(char const*);
}

[[link(android)]]
class PlatformToolbox {
	TodoReturn activateGameCenter();
	TodoReturn doesFileExist(gd::string);
	TodoReturn downloadAndSavePromoImage(gd::string, gd::string);
	TodoReturn gameDidSave();
	TodoReturn getDisplaySize();
	TodoReturn getRawPath(char const*);
	TodoReturn getUniqueUserID();
	TodoReturn getUserID();
	TodoReturn hideCursor();
	bool isControllerConnected();
	bool isHD();
	bool isLocalPlayerAuthenticated();
	bool isLowMemoryDevice();
	bool isNetworkAvailable();
	bool isSignedInGooglePlay();
	TodoReturn loadAndDecryptFileToString(char const*, char const*);
	TodoReturn logEvent(char const*);
	TodoReturn onGameLaunch();
	TodoReturn onNativePause();
	TodoReturn onNativeResume();
	TodoReturn onToggleKeyboard();
	TodoReturn openAppPage();
	TodoReturn platformShutdown();
	TodoReturn refreshWindow();
	TodoReturn reportAchievementWithID(char const*, int);
	TodoReturn reportLoadingFinished();
	TodoReturn resizeWindow(float, float);
	TodoReturn saveAndEncryptStringToFile(gd::string, char const*, char const*);
	TodoReturn sendMail(char const*, char const*, char const*);
	void setBlockBackButton(bool);
	void setKeyboardState(bool);
	TodoReturn shouldResumeSound();
	TodoReturn showAchievements();
	TodoReturn showCursor();
	TodoReturn signInGooglePlay();
	TodoReturn signOutGooglePlay();
	TodoReturn spriteFromSavedFile(gd::string);
	TodoReturn toggleCallGLFinish(bool);
	TodoReturn toggleCPUSleepMode(bool);
	TodoReturn toggleForceTimer(bool);
	TodoReturn toggleFullScreen(bool);
	TodoReturn toggleMouseControl(bool);
	TodoReturn toggleSmoothFix(bool);
	TodoReturn toggleVerticalSync(bool);
	TodoReturn tryShowRateDialog(gd::string);
	TodoReturn updateMouseControl();
	TodoReturn updateWindowedSize(float, float);
}

[[link(android)]]
class PlayerCheckpoint {
	// virtual ~PlayerCheckpoint();
	// PlayerCheckpoint();

	static PlayerCheckpoint* create();

	TodoReturn getBirdMode();
	TodoReturn getCanJump();
	TodoReturn getDartMode();
	TodoReturn getFlipGravity();
	TodoReturn getFlyMode();
	TodoReturn getGhostType();
	TodoReturn getIsScaled();
	TodoReturn getPlayerPos();
	TodoReturn getPlayerYVel();
	TodoReturn getRobotMode();
	TodoReturn getRollMode();
	TodoReturn getTimeMod();
	void setBirdMode(bool);
	void setCanJump(bool);
	void setDartMode(bool);
	void setFlipGravity(bool);
	void setFlyMode(bool);
	void setGhostType(int);
	void setIsScaled(bool);
	void setPlayerPos(cocos2d::CCPoint);
	void setPlayerYVel(float);
	void setRobotMode(bool);
	void setRollMode(bool);
	void setTimeMod(float);

	virtual bool init();
}

[[link(android)]]
class PlayerObject : GameObject {
	// virtual ~PlayerObject();
	// PlayerObject();

	static PlayerObject* create(int, int, cocos2d::CCLayer*);

	TodoReturn activateStreak();
	TodoReturn addAllParticles();
	TodoReturn boostPlayer(float);
	TodoReturn buttonDown(PlayerButton);
	TodoReturn checkSnapJumpToObject(GameObject*);
	TodoReturn collidedWithObject(float, GameObject*, cocos2d::CCRect);
	TodoReturn collidedWithObject(float, GameObject*);
	TodoReturn collidedWithSlope(float, GameObject*, bool);
	TodoReturn convertToClosestRotation(float);
	TodoReturn copyAttributes(PlayerObject*);
	TodoReturn deactivateParticle();
	TodoReturn deactivateStreak();
	TodoReturn fadeOutStreak2(float);
	TodoReturn flipGravity(bool, bool);
	TodoReturn flipMod();
	TodoReturn getAudioScale();
	TodoReturn getBirdMode();
	TodoReturn getCanJump();
	TodoReturn getClkTimer();
	TodoReturn getCurrentIcon();
	TodoReturn getDartMode();
	TodoReturn getDidStick();
	TodoReturn getDisableEffects();
	TodoReturn getDualMode();
	TodoReturn getFlyMode();
	TodoReturn getGameLayer();
	TodoReturn getGlowColor1();
	TodoReturn getGlowColor2();
	TodoReturn getGravityFlipped();
	TodoReturn getGroundHeight();
	TodoReturn getHasJumped();
	TodoReturn getHasRingJumped();
	TodoReturn getIsDead();
	TodoReturn getIsJumping();
	TodoReturn getIsLocked();
	TodoReturn getIsSecondPlayer();
	TodoReturn getLastGroundObject();
	TodoReturn getLastGroundPos();
	TodoReturn getLastP();
	TodoReturn getLastYVel();
	TodoReturn getModifiedSlopeYVel();
	TodoReturn getOnGround();
	TodoReturn getOnSlope();
	TodoReturn getPlayerScale();
	TodoReturn getPlayerXVelocity();
	TodoReturn getPortalObject();
	TodoReturn getPortalP();
	TodoReturn getRealPlayerPos();
	TodoReturn getRobotMode();
	TodoReturn getRollMode();
	TodoReturn getSecondColor();
	TodoReturn getSlopeYVel();
	TodoReturn getTimeMod();
	TodoReturn getTookDamage();
	TodoReturn getTouchedRing();
	TodoReturn getUpKeyDown();
	TodoReturn getUpKeyPressed();
	TodoReturn getWasOnSlope();
	TodoReturn getYVelocity();
	TodoReturn gravityDown();
	TodoReturn gravityUp();
	TodoReturn hardFlipGravity();
	TodoReturn hitGround(bool);
	TodoReturn incrementJumps();
	bool init(int, int, cocos2d::CCLayer*);
	bool isBoostValid(float);
	bool isFlying();
	bool isSafeFlip(float);
	bool isSafeMode(float);
	TodoReturn levelFlipFinished();
	TodoReturn levelFlipping();
	TodoReturn levelWillFlip();
	TodoReturn loadFromCheckpoint(PlayerCheckpoint*);
	TodoReturn lockPlayer();
	TodoReturn logValues();
	TodoReturn placeStreakPoint();
	TodoReturn playBurstEffect();
	TodoReturn playerDestroyed(bool);
	TodoReturn playerIsFalling();
	TodoReturn playerTeleported();
	TodoReturn postCollision(float);
	TodoReturn preCollision();
	TodoReturn preSlopeCollision(float, GameObject*);
	TodoReturn propellPlayer(float);
	TodoReturn pushButton(PlayerButton);
	TodoReturn pushDown();
	TodoReturn pushPlayer(float);
	TodoReturn releaseButton(PlayerButton);
	TodoReturn removeAllParticles();
	TodoReturn removePendingCheckpoint();
	TodoReturn resetAllParticles();
	TodoReturn resetCollisionLog();
	TodoReturn resetPlayerIcon();
	TodoReturn resetStreak();
	TodoReturn ringJump();
	TodoReturn runBallRotation(float);
	TodoReturn runBallRotation2();
	TodoReturn runNormalRotation();
	TodoReturn runRotateAction(bool);
	TodoReturn saveToCheckpoint(PlayerCheckpoint*);
	void setAudioScale(float);
	void setClkTimer(double);
	void setDisableEffects(bool);
	void setDualMode(bool);
	void setGameLayer(cocos2d::CCLayer*);
	void setGroundHeight(float);
	void setIsSecondPlayer(bool);
	void setLastGroundPos(cocos2d::CCPoint);
	void setLastP(cocos2d::CCPoint);
	void setOnGround(bool);
	void setOnSlope(bool);
	void setPortalObject(GameObject*);
	void setPortalP(cocos2d::CCPoint);
	void setRealPlayerPos(cocos2d::CCPoint);
	void setSecondColor(cocos2d::ccColor3B const&);
	void setTookDamage(bool);
	void setTouchedRing(GameObject*);
	TodoReturn setupStreak();
	void setWasOnSlope(bool);
	TodoReturn spawnCircle();
	TodoReturn spawnDualCircle();
	TodoReturn spawnFromPlayer(PlayerObject*);
	TodoReturn spawnPortalCircle(cocos2d::ccColor3B, float);
	TodoReturn spawnScaleCircle();
	TodoReturn specialGroundHit();
	TodoReturn speedDown();
	TodoReturn speedUp();
	TodoReturn stopBurstEffect();
	TodoReturn stopRotation(bool);
	TodoReturn storeCollision(bool, int);
	TodoReturn switchedToMode(GameObjectType);
	TodoReturn testForMoving(float, GameObject*);
	TodoReturn toggleBirdMode(bool);
	TodoReturn toggleDartMode(bool);
	TodoReturn toggleFlyMode(bool);
	TodoReturn toggleGhostEffect(GhostType);
	TodoReturn togglePlayerScale(bool);
	TodoReturn toggleRobotMode(bool);
	TodoReturn toggleRollMode(bool);
	TodoReturn touchedObject(GameObject*);
	TodoReturn tryPlaceCheckpoint();
	TodoReturn updateCheckpointTest();
	TodoReturn updateCollide(bool, int);
	TodoReturn updateCollideBottom(float, int);
	TodoReturn updateCollideTop(float, int);
	TodoReturn updateGlowColor();
	TodoReturn updateJump(float);
	TodoReturn updatePlayerBirdFrame(int);
	TodoReturn updatePlayerDartFrame(int);
	TodoReturn updatePlayerFrame(int);
	TodoReturn updatePlayerGlow();
	TodoReturn updatePlayerRobotFrame(int);
	TodoReturn updatePlayerRollFrame(int);
	TodoReturn updatePlayerScale();
	TodoReturn updatePlayerShipFrame(int);
	TodoReturn updateRobotAnimationSpeed();
	TodoReturn updateRotation(float, float);
	TodoReturn updateRotation(float);
	TodoReturn updateShipRotation(float);
	TodoReturn updateSlopeRotation(float);
	TodoReturn updateSlopeYVelocity(float);
	TodoReturn updateTimeMod(float);
	TodoReturn yStartDown();
	TodoReturn yStartUp();

	virtual void update(float);
	virtual void setScaleX(float);
	virtual void setScaleY(float);
	virtual void setScale(float);
	virtual void setPosition(cocos2d::CCPoint const&);
	virtual void setVisible(bool);
	virtual void setRotation(float);
	virtual void setOpacity(unsigned char);
	virtual void setColor(cocos2d::ccColor3B const&);
	virtual void setFlipX(bool);
	virtual void setFlipY(bool);
	virtual TodoReturn resetObject();
	virtual TodoReturn getRealPosition();
	virtual TodoReturn getOrientedBox();
	virtual TodoReturn animationFinished(char const*);

	double _0x3a8; // getModifiedSlopeYVel
	bool _0x3b0; // hitGround, placeStreakPoint
	cocos2d::CCNode* _0x3b4;
	cocos2d::CCDictionary* m_topBlockIDs;
	cocos2d::CCDictionary* m_bottomBlockIDs;
	GameObject* m_lastSlopeObject;
	GameObject* m_backupGroundObject;
	GameObject* m_lastGroundObject;
	int m_currentIcon;
	float _0x3d0; // postCollision
	float _0x3d4; // postCollision
	bool m_didStick;
	int m_bottomBlockID;
	int m_topBlockID;
	bool _0x3e4; // hitGround
	bool m_shouldDisconnectSlope;
	GameObject* m_preSlopeObject;
	GameObject* m_slopeObject;
	float _0x3f0;
	int m_lastSlopeID;
	bool _0x3f8; // isBoostValid
	cocos2d::CCArray* _0x3fc;
	PAD = android 0x8;
	GhostType m_ghostType;
	GhostTrailEffect* m_ghostTrail;
	cocos2d::CCSprite* _0x410;
	cocos2d::CCSprite* _0x414;
	cocos2d::CCSprite* _0x418;
	cocos2d::CCSprite* _0x41c;
	cocos2d::CCSprite* _0x420;
	cocos2d::CCSprite* _0x424;
	cocos2d::CCSprite* _0x428;
	cocos2d::CCSprite* _0x42c;
	cocos2d::CCMotionStreak* _0x430;
	HardStreak* m_hardStreak;
	double m_playerXVelocity;
	double m_jumpHeight;
	double m_gravity;
	float _0x450;
	float _0x454; // isSafeMode
	bool _0x458; // flipGravity, placeStreakPoint
	bool _0x459;
	bool _0x45a; // m_isRising
	bool _0x45b; // inPlayLayer
	bool _0x45c;
	bool _0x45d;
	bool _0x45e;
	bool _0x45f; // hitGround
	bool m_placedCheckpoint;
	PAD = android 0x8;
	double _0x468;
	double _0x470;
	double _0x478; // isSafeFlip
	PAD = android 0x4;
	float _0x484;
	PAD = android 0x8;
	double _0x490;
	GameObject* _0x498;
	CheckpointObject* _0x49c;
	int _0x4a0; // Timer for checkpoints
	GJRobotSprite* m_robotSprite;
	bool _0x4a8; // specialGroundHit
	cocos2d::CCParticleSystemQuad* _0x4ac;
	cocos2d::CCParticleSystemQuad* _0x4b0;
	cocos2d::CCParticleSystemQuad* _0x4b4;
	cocos2d::CCParticleSystemQuad* _0x4b8;
	cocos2d::CCParticleSystemQuad* _0x4bc;
	cocos2d::CCParticleSystemQuad* _0x4c0;
	bool _0x4c4;
	cocos2d::CCParticleSystemQuad* _0x4c8; // hitGround
	cocos2d::CCParticleSystemQuad* _0x4cc; // hitGround
	PAD = android 0xc;
	float m_targetSlopeAngle;
	float m_lastSlopeYVelocity;
	float _0x4e4;
	PAD = android 0x2;
	bool _0x4ea;
	bool m_lastSlopeFloorTop;
	float m_collideTop;
	float m_collideBottom;
	bool m_enableStreak;
	bool m_checkpointQueued;
	bool m_tookDamage;
	bool m_upKeyDown;
	bool m_upKeyPressed;
	bool _0x4f9;
	bool _0x4fa;
	PAD = android 0x5;
	double m_yVelocity;
	bool m_onSlope;
	bool m_wasOnSlope;
	float m_slopeYVel;
	bool m_flyMode;
	bool m_birdMode;
	bool m_rollMode;
	bool m_dartMode;
	bool m_robotMode;
	bool m_gravityFlipped;
	bool m_isDead;
	bool m_canJump;
	float m_playerScale;
	float m_timeMod;
	cocos2d::CCPoint m_lastP;
	cocos2d::CCPoint m_portalP;
	cocos2d::CCLayer* m_gameLayer;
	bool m_onGround;
	bool m_isJumping;
	bool m_isLocked;
	cocos2d::CCPoint m_lastGroundPos;
	RingObject* m_touchedRing;
	GameObject* m_portalObject;
	bool m_hasJumped;
	bool m_hasRingJumped;
	cocos2d::ccColor3B m_glowColor1;
	cocos2d::ccColor3B m_glowColor2;
	cocos2d::CCPoint m_realPlayerPos;
	bool m_isSecondPlayer;
	bool m_dualMode;
	PAD = android 0x6;
	double m_clkTimer;
	bool m_disableEffects;
	float m_audioScale;
	float m_groundHeight;
	float m_lastYVel;
}

[[link(android)]]
class PlayLayer {
	// virtual ~PlayLayer();
	// PlayLayer();

	static PlayLayer* create(GJGameLevel*);

	TodoReturn addCircle(CCCircleWave*);
	TodoReturn addObject(GameObject*);
	TodoReturn addToGroup(GameObject*);
	TodoReturn addToSpeedObjects(GameObject*);
	TodoReturn animateInDualGround(GameObject*, float, bool);
	TodoReturn animateInGround(bool);
	TodoReturn animateOutGround(bool);
	TodoReturn animateOutGroundFinished();
	TodoReturn applyEnterEffect(GameObject*);
	TodoReturn calculateColorValues(EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*);
	TodoReturn cameraMoveX(float, float, float);
	TodoReturn cameraMoveY(float, float, float);
	TodoReturn checkCollisions(PlayerObject*, float);
	TodoReturn checkSpawnObjects();
	TodoReturn claimParticle(gd::string);
	TodoReturn clearPickedUpItems();
	TodoReturn colorObject(int, cocos2d::ccColor3B);
	TodoReturn createCheckpoint();
	TodoReturn createObjectsFromSetup(gd::string);
	TodoReturn createParticle(int, char const*, int, cocos2d::tCCPositionType);
	TodoReturn delayedResetLevel();
	TodoReturn destroyPlayer(PlayerObject*);
	TodoReturn enterDualMode(GameObject*, bool);
	TodoReturn exitAirMode();
	TodoReturn exitBirdMode(PlayerObject*);
	TodoReturn exitDartMode(PlayerObject*);
	TodoReturn exitFlyMode(PlayerObject*);
	TodoReturn exitRobotMode(PlayerObject*);
	TodoReturn exitRollMode(PlayerObject*);
	TodoReturn flipFinished();
	TodoReturn flipGravity(PlayerObject*, bool, bool);
	TodoReturn flipObjects();
	TodoReturn fullReset();
	TodoReturn getAttempts();
	TodoReturn getBigActionContainer();
	TodoReturn getCameraPortal();
	TodoReturn getCameraPos();
	TodoReturn getCleanReset();
	TodoReturn getClkTimer();
	TodoReturn getColorManager();
	TodoReturn getDidAwardStars();
	TodoReturn getDidJump();
	TodoReturn getDualMode();
	TodoReturn getDualModeCamera();
	TodoReturn getEndTriggered();
	TodoReturn getFlipValue();
	TodoReturn getForcePlaybackControl();
	TodoReturn getGroundHeightForMode(int);
	TodoReturn getGroup(int);
	TodoReturn getIsFlipped();
	TodoReturn getIsResetting();
	TodoReturn getJumps();
	TodoReturn getLastCheckpoint();
	TodoReturn getLastRunPercent();
	TodoReturn getLevel();
	TodoReturn getMaxPortalY();
	TodoReturn getMinPortalY();
	TodoReturn getOtherPlayer(PlayerObject*);
	TodoReturn getParticleKey(int, char const*, int, cocos2d::tCCPositionType);
	TodoReturn getParticleKey2(gd::string);
	TodoReturn getPlaybackMode();
	TodoReturn getPracticeMode();
	TodoReturn getRelativeMod(cocos2d::CCPoint, float, float, float);
	TodoReturn getResetFlipObjects();
	TodoReturn getResetQueued();
	TodoReturn getResetTriggered();
	TodoReturn getShouldRestartAfterStopped();
	TodoReturn getShowingEndLayer();
	TodoReturn getStartPos();
	TodoReturn getTempMilliTime();
	TodoReturn getTestMode();
	TodoReturn getUILayer();
	TodoReturn gravityEffectFinished();
	TodoReturn hasItem(int);
	TodoReturn hasUniqueCoin(GameObject*);
	TodoReturn incrementJumps();
	bool init(GJGameLevel*);
	bool isFlipping();
	TodoReturn levelComplete();
	TodoReturn lightningFlash(cocos2d::CCPoint, cocos2d::ccColor3B);
	TodoReturn lightningFlash(cocos2d::CCPoint, cocos2d::CCPoint, cocos2d::ccColor3B, float, float, int);
	TodoReturn loadDefaultColors();
	TodoReturn loadLastCheckpoint();
	TodoReturn markCheckpoint();
	TodoReturn moveCameraToPos(cocos2d::CCPoint);
	TodoReturn objectIntersectsCircle(GameObject*, GameObject*);
	TodoReturn onQuit();
	TodoReturn pauseGame(bool);
	TodoReturn pickupItem(GameObject*);
	TodoReturn playEndAnimationToPos(cocos2d::CCPoint);
	TodoReturn playerWillSwitchMode(PlayerObject*, GameObject*);
	TodoReturn playExitDualEffect(PlayerObject*);
	TodoReturn playFlashEffect(float, int, float);
	TodoReturn playSpeedParticle(float);
	TodoReturn preloadActions();
	TodoReturn preloadMoveActions();
	TodoReturn processItems();
	TodoReturn processLoadedMoveActions();
	TodoReturn processMoveActionsStep();
	TodoReturn pushButton(int, bool);
	TodoReturn recordAction(bool, PlayerObject*);
	TodoReturn registerActiveObject(GameObject*);
	TodoReturn registerStateObject(GameObject*);
	TodoReturn releaseButton(int, bool);
	TodoReturn removeAllObjects();
	TodoReturn removeFromGroup(GameObject*);
	TodoReturn removeLastCheckpoint();
	TodoReturn removeObjectFromSection(GameObject*);
	TodoReturn removePlayer2();
	TodoReturn reorderObjectSection(GameObject*);
	TodoReturn resetLevel();
	TodoReturn resume();
	TodoReturn resumeAndRestart();
	TodoReturn saveRecordAction(bool, PlayerObject*);
	TodoReturn scene(GJGameLevel*);
	TodoReturn sectionForPos(float);
	void setActiveEnterEffect(EnterEffect);
	void setCleanReset(bool);
	void setEndTriggered(bool);
	void setForcePlaybackControl(bool);
	void setIsResetting(bool);
	void setLastRunPercent(int);
	void setPlaybackMode(bool);
	void setResetQueued(bool);
	void setShouldRestartAfterStopped(bool);
	void setShowingEndLayer(bool);
	void setStartPos(cocos2d::CCPoint);
	void setStartPosObject(StartPosObject*);
	TodoReturn setupLevelStart(LevelSettingsObject*);
	TodoReturn setupReplay(gd::string);
	TodoReturn shakeCamera(float);
	TodoReturn shouldBlend(int);
	TodoReturn showCompleteEffect();
	TodoReturn showCompleteText();
	TodoReturn showEndLayer();
	TodoReturn showHint();
	TodoReturn showNewBest();
	TodoReturn showRetryLayer();
	TodoReturn showTwoPlayerGuide();
	TodoReturn sortGroups();
	TodoReturn spawnCircle();
	TodoReturn spawnFirework();
	TodoReturn spawnGroup(int, float);
	TodoReturn spawnGroup(int);
	TodoReturn spawnParticle(char const*, int, cocos2d::tCCPositionType, cocos2d::CCPoint);
	TodoReturn spawnPlayer2();
	TodoReturn startGame();
	TodoReturn startMusic();
	TodoReturn startRecording();
	TodoReturn startRecordingDelayed();
	TodoReturn stopCameraShake();
	TodoReturn stopRecording();
	TodoReturn storeCheckpoint(CheckpointObject*);
	TodoReturn switchToFlyMode(PlayerObject*, GameObject*, bool, int);
	TodoReturn switchToRobotMode(PlayerObject*, GameObject*, bool);
	TodoReturn switchToRollMode(PlayerObject*, GameObject*, bool);
	TodoReturn timeForXPos(float);
	TodoReturn timeForXPos2(float, bool);
	TodoReturn toggleDualMode(GameObject*, bool, PlayerObject*, bool);
	TodoReturn toggleFlipped(bool, bool);
	TodoReturn toggleGhostEffect(int);
	TodoReturn toggleGroup(int, bool);
	TodoReturn togglePracticeMode(bool);
	TodoReturn tryStartRecord();
	TodoReturn unclaimParticle(char const*, cocos2d::CCParticleSystemQuad*);
	TodoReturn unregisterActiveObject(GameObject*);
	TodoReturn unregisterStateObject(GameObject*);
	TodoReturn updateAttempts();
	TodoReturn updateCamera(float);
	TodoReturn updateColor(cocos2d::ccColor3B, float, int, bool, float, cocos2d::ccHSVValue, int, bool);
	TodoReturn updateDualGround(PlayerObject*, int, bool);
	TodoReturn updateEffectPositions();
	TodoReturn updateLevelColors();
	TodoReturn updateProgressbar();
	TodoReturn updateReplay(float);
	TodoReturn updateTimeMod(float, bool);
	TodoReturn updateVisibility();
	TodoReturn visitWithColorFlash();
	TodoReturn willSwitchToMode(int, PlayerObject*);

	virtual void update(float);
	virtual void onEnterTransitionDidFinish();
	virtual void onExit();
	virtual void draw();
	virtual void visit();
	virtual void updateTweenAction(float, char const*);
	virtual TodoReturn toggleGlitter(bool);
	virtual TodoReturn addToSection(GameObject*);
	virtual TodoReturn playGravityEffect(bool);
	virtual TodoReturn toggleProgressbar();
	virtual TodoReturn circleWaveWillBeRemoved(CCCircleWave*);
}

[[link(android)]]
class PointNode {
	// virtual ~PointNode();

	static PointNode* create(cocos2d::CCPoint);

	TodoReturn getPoint();
	bool init(cocos2d::CCPoint);
	void setPoint(cocos2d::CCPoint);
}

[[link(android)]]
class PriceLabel {
	// virtual ~PriceLabel();

	static PriceLabel* create(int);

	bool init(int);
	void setColor(cocos2d::ccColor3B);
	void setOpacity(float);
	void setPrice(int);
}

[[link(android)]]
class ProfilePage {
	// virtual ~ProfilePage();
	// ProfilePage();

	static ProfilePage* create(int, bool);

	TodoReturn blockUser();
	TodoReturn commentUploadFailed(int);
	bool init(int, bool);
	bool isCorrect(char const*);
	TodoReturn loadPage(int);
	TodoReturn loadPageFromUserInfo(GJUserScore*);
	void onBlockUser(cocos2d::CCObject* sender);
	void onClose(cocos2d::CCObject* sender);
	void onComment(cocos2d::CCObject* sender);
	void onFollow(cocos2d::CCObject* sender);
	void onFriend(cocos2d::CCObject* sender);
	void onFriends(cocos2d::CCObject* sender);
	void onMessages(cocos2d::CCObject* sender);
	void onMyLevels(cocos2d::CCObject* sender);
	void onNextPage(cocos2d::CCObject* sender);
	void onPrevPage(cocos2d::CCObject* sender);
	void onRequests(cocos2d::CCObject* sender);
	void onSendMessage(cocos2d::CCObject* sender);
	void onSettings(cocos2d::CCObject* sender);
	void onUpdate(cocos2d::CCObject* sender);
	void onYouTube(cocos2d::CCObject* sender);
	TodoReturn setupComments();
	TodoReturn setupCommentsBrowser(cocos2d::CCArray*);
	TodoReturn showNoAccountError();
	TodoReturn toggleMainPageVisibility(bool);
	TodoReturn updateLevelsLabel();
	TodoReturn updatePageArrows();

	virtual void registerWithTouchDispatcher();
	virtual void keyBackClicked();
	virtual TodoReturn show();
	virtual void FLAlert_Clicked(FLAlertLayer*, bool);
	virtual TodoReturn updateUserScoreFinished();
	virtual TodoReturn updateUserScoreFailed();
	virtual TodoReturn getUserInfoFinished(GJUserScore*);
	virtual TodoReturn getUserInfoFailed(int);
	virtual TodoReturn userInfoChanged(GJUserScore*);
	virtual TodoReturn loadCommentsFinished(cocos2d::CCArray*, char const*);
	virtual TodoReturn loadCommentsFailed(char const*);
	virtual TodoReturn setupPageInfo(gd::string, char const*);
	virtual TodoReturn commentUploadFinished(int);
	virtual TodoReturn commentDeleteFailed(int, int);
	virtual TodoReturn onClosePopup(UploadActionPopup*);
	virtual TodoReturn uploadActionFinished(int, int);
	virtual TodoReturn uploadActionFailed(int, int);
}

[[link(android)]]
class PromoInterstitial {
	// virtual ~PromoInterstitial();

	static PromoInterstitial* create();

	TodoReturn getEnableBannerOnClose();
	void onClick(cocos2d::CCObject* sender);
	void onClose(cocos2d::CCObject* sender);
	void setEnableBannerOnClose(bool);
	TodoReturn setup();

	virtual bool init();
	virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void registerWithTouchDispatcher();
	virtual void keyBackClicked();
	virtual TodoReturn show();
}

[[link(android)]]
class PulseEffectAction {
	// ~PulseEffectAction();

	static PulseEffectAction* create(float, float, float, PulseEffectType, int, cocos2d::ccColor3B, cocos2d::ccHSVValue, int, bool, bool);

	TodoReturn createFromString(gd::string);
	TodoReturn getCopyColorIdx();
	TodoReturn getDeltaTime();
	TodoReturn getGroupMainOnly();
	TodoReturn getGroupSecondaryOnly();
	TodoReturn getHSVValue();
	TodoReturn getSaveString();
	TodoReturn getTargetColor();
	TodoReturn getTargetID();
	TodoReturn getType();
	TodoReturn getValue();
	bool init(float, float, float, PulseEffectType, int, cocos2d::ccColor3B, cocos2d::ccHSVValue, int, bool, bool);
	bool isFinished();
	void setDeltaTime(float);
	TodoReturn step(float);
	TodoReturn valueForDelta(float, float, float, float);
}

[[link(android)]]
class RateLevelDelegate {
	virtual TodoReturn rateLevelClosed();
}

[[link(android)]]
class RateLevelLayer {
	// virtual ~RateLevelLayer();

	static RateLevelLayer* create(int);

	TodoReturn getDelegate();
	bool init(int);
	void onClose(cocos2d::CCObject* sender);
	void onRate(cocos2d::CCObject* sender);
	TodoReturn selectRating(cocos2d::CCObject*);
	void setDelegate(RateLevelDelegate*);

	virtual void keyBackClicked();
}

[[link(android)]]
class RateStarsLayer {
	// virtual ~RateStarsLayer();
	// RateStarsLayer();

	static RateStarsLayer* create(int, bool);

	TodoReturn getDelegate();
	TodoReturn getStarsButton(int, cocos2d::SEL_MenuHandler, cocos2d::CCMenu*, float);
	bool init(int, bool);
	void onClose(cocos2d::CCObject* sender);
	void onRate(cocos2d::CCObject* sender);
	void onToggleCoins(cocos2d::CCObject* sender);
	void onToggleFeature(cocos2d::CCObject* sender);
	TodoReturn selectRating(cocos2d::CCObject*);
	void setDelegate(RateLevelDelegate*);

	virtual void keyBackClicked();
	virtual TodoReturn uploadActionFinished(int, int);
	virtual TodoReturn uploadActionFailed(int, int);
	virtual TodoReturn onClosePopup(UploadActionPopup*);
}

[[link(android)]]
class RetryLevelLayer {
	// virtual ~RetryLevelLayer();

	static RetryLevelLayer* create();

	TodoReturn getEndText();
	void onEveryplay(cocos2d::CCObject* sender);
	void onMenu(cocos2d::CCObject* sender);
	void onReplay(cocos2d::CCObject* sender);
	TodoReturn setupLastProgress();

	virtual void keyBackClicked();
	virtual void keyDown(cocos2d::enumKeyCodes);
	virtual TodoReturn customSetup();
	virtual TodoReturn showLayer(bool);
	virtual TodoReturn enterAnimFinished();
	virtual void keyUp(cocos2d::enumKeyCodes);
}

[[link(android)]]
class RingObject {
	// virtual ~RingObject();

	static RingObject* create(char const*);

	bool init(char const*);
	TodoReturn powerOnObject();
	TodoReturn spawnCircle();
	TodoReturn triggerActivated();
	TodoReturn updateColors(cocos2d::ccColor3B);

	virtual void setScale(float);
	virtual void setPosition(cocos2d::CCPoint const&);
	virtual void setVisible(bool);
	virtual TodoReturn resetObject();
	virtual void setRScale(float);
	virtual TodoReturn powerOffObject();
}

[[link(android)]]
class SavedLevelsLayer {
	// ~SavedLevelsLayer();

	static SavedLevelsLayer* create();

	bool init();
	TodoReturn keyBackClicked();
	void onBack(cocos2d::CCObject* sender);
	TodoReturn scene();
	TodoReturn setupLevelBrowser();
}

[[link(android)]]
class ScrollingLayer {
	// virtual ~ScrollingLayer();
	// ScrollingLayer();

	static ScrollingLayer* create(cocos2d::CCSize, cocos2d::CCPoint, float);

	TodoReturn getInternalLayer();
	TodoReturn getScaleParent();
	TodoReturn getViewRect();
	bool init(cocos2d::CCSize, cocos2d::CCPoint, float);
	void setScaleParent(cocos2d::CCNode*);
	void setStartOffset(cocos2d::CCPoint);

	virtual void draw();
	virtual void visit();
	virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
}

[[link(android)]]
class SearchButton {
	// virtual ~SearchButton();

	static SearchButton* create(char const*, char const*, float, char const*);

	TodoReturn getLabel();
	TodoReturn getSprite();
	bool init(char const*, char const*, float, char const*);
}

[[link(android)]]
class SecretLayer {
	// virtual ~SecretLayer();

	static SecretLayer* create();

	TodoReturn getBasicMessage();
	TodoReturn getMessage();
	TodoReturn getThreadMessage();
	TodoReturn nodeWithTag(int);
	void onBack(cocos2d::CCObject* sender);
	void onSubmit(cocos2d::CCObject* sender);
	TodoReturn playCoinEffect();
	TodoReturn scene();
	TodoReturn selectAThread();
	TodoReturn updateMessageLabel(gd::string);
	TodoReturn updateSearchLabel(char const*);

	virtual bool init();
	virtual void keyBackClicked();
	virtual TodoReturn textInputOpened(CCTextInputNode*);
	virtual TodoReturn textInputClosed(CCTextInputNode*);
	virtual void textChanged(CCTextInputNode*);
	virtual void FLAlert_Clicked(FLAlertLayer*, bool);
}

[[link(android)]]
class SelectArtDelegate {
	virtual TodoReturn selectArtClosed(SelectArtLayer*);
}

[[link(android)]]
class SelectArtLayer {
	// virtual ~SelectArtLayer();

	static SelectArtLayer* create(SelectArtType);

	TodoReturn getDelegate();
	TodoReturn getSelected();
	TodoReturn getSelectedCustom();
	TodoReturn getType();
	bool init(SelectArtType);
	void onClose(cocos2d::CCObject* sender);
	void onSelectCustom(cocos2d::CCObject* sender);
	TodoReturn selectArt(cocos2d::CCObject*);
	void setDelegate(SelectArtDelegate*);
	TodoReturn updateSelectedCustom(int);

	virtual void keyBackClicked();
}

[[link(android)]]
class SelectFontLayer {
	// virtual ~SelectFontLayer();

	static SelectFontLayer* create(LevelEditorLayer*);

	bool init(LevelEditorLayer*);
	void onChangeFont(cocos2d::CCObject* sender);
	void onClose(cocos2d::CCObject* sender);
	TodoReturn updateFontLabel();

	virtual void keyBackClicked();
}

[[link(android)]]
class SetGroupIDLayer {
	// virtual ~SetGroupIDLayer();
	// SetGroupIDLayer();

	static SetGroupIDLayer* create(GameObject*, cocos2d::CCArray*);

	TodoReturn addGroupID(int);
	TodoReturn callRemoveFromGroup(float);
	TodoReturn determineStartValues();
	TodoReturn getNextFreeGroupID();
	bool init(GameObject*, cocos2d::CCArray*);
	void onAddGroup(cocos2d::CCObject* sender);
	void onClose(cocos2d::CCObject* sender);
	void onCopy(cocos2d::CCObject* sender);
	void onDontFade(cocos2d::CCObject* sender);
	void onEditorLayer(cocos2d::CCObject* sender);
	void onEditorLayer2(cocos2d::CCObject* sender);
	void onGroupID(cocos2d::CCObject* sender);
	void onNextGroupID1(cocos2d::CCObject* sender);
	void onPaste(cocos2d::CCObject* sender);
	void onRemoveFromGroup(cocos2d::CCObject* sender);
	void onSmoothEase(cocos2d::CCObject* sender);
	void onToggleGroupParent(cocos2d::CCObject* sender);
	void onZLayer(cocos2d::CCObject* sender);
	void onZOrder(cocos2d::CCObject* sender);
	TodoReturn removeGroupID(int);
	void setNextFreeGroupID(int);
	TodoReturn updateEditorLabel();
	TodoReturn updateEditorLabel2();
	TodoReturn updateEditorLayerID();
	TodoReturn updateEditorLayerID2();
	TodoReturn updateGroupIDButtons();
	TodoReturn updateGroupIDLabel();
	TodoReturn updateZLayerButtons();
	TodoReturn updateZOrder();
	TodoReturn updateZOrderLabel();

	virtual void keyBackClicked();
	virtual TodoReturn textInputClosed(CCTextInputNode*);
	virtual void textChanged(CCTextInputNode*);
}

[[link(android)]]
class SetIDLayer {
	// ~SetIDLayer();

	static SetIDLayer* create(GameObject*);

	bool init(GameObject*);
	TodoReturn keyBackClicked();
	void onClose(cocos2d::CCObject* sender);
	void onDown(cocos2d::CCObject* sender);
	void onUp(cocos2d::CCObject* sender);
	TodoReturn updateID();
}

[[link(android)]]
class SetupObjectTogglePopup {
	// virtual ~SetupObjectTogglePopup();

	static SetupObjectTogglePopup* create(EffectGameObject*, cocos2d::CCArray*);

	TodoReturn createToggleButton(gd::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint);
	bool init(EffectGameObject*, cocos2d::CCArray*);
	void onEnableGroup(cocos2d::CCObject* sender);
	void onSpawnedByTrigger(cocos2d::CCObject* sender);
	void onTargetIDArrow(cocos2d::CCObject* sender);
	void onTouchTriggered(cocos2d::CCObject* sender);
	TodoReturn updateEditorLabel();
	TodoReturn updateSpawnedByTrigger();
	TodoReturn updateTargetID();
	TodoReturn updateTextInputLabel();
	TodoReturn updateTouchTriggered();

	virtual void keyBackClicked();
	virtual TodoReturn show();
	virtual TodoReturn determineStartValues();
	virtual void onClose(cocos2d::CCObject* sender);
	virtual TodoReturn textInputClosed(CCTextInputNode*);
	virtual void textChanged(CCTextInputNode*);
	virtual TodoReturn textInputShouldOffset(CCTextInputNode*, float);
	virtual TodoReturn textInputReturn(CCTextInputNode*);
}

[[link(android)]]
class SetupOpacityPopup {
	// virtual ~SetupOpacityPopup();
	// SetupOpacityPopup();

	static SetupOpacityPopup* create(EffectGameObject*, cocos2d::CCArray*);

	bool init(EffectGameObject*, cocos2d::CCArray*);
	void onSpawnedByTrigger(cocos2d::CCObject* sender);
	void onTargetIDArrow(cocos2d::CCObject* sender);
	void onTouchTriggered(cocos2d::CCObject* sender);
	TodoReturn sliderChanged(cocos2d::CCObject*);
	TodoReturn updateDuration();
	TodoReturn updateDurLabel();
	TodoReturn updateEditorLabel();
	TodoReturn updateOpacity();
	TodoReturn updateOpacityLabel();
	TodoReturn updateSpawnedByTrigger();
	TodoReturn updateTargetID();
	TodoReturn updateTextInputLabel();
	TodoReturn updateTouchTriggered();

	virtual void keyBackClicked();
	virtual TodoReturn show();
	virtual TodoReturn determineStartValues();
	virtual void onClose(cocos2d::CCObject* sender);
	virtual TodoReturn textInputClosed(CCTextInputNode*);
	virtual void textChanged(CCTextInputNode*);
	virtual TodoReturn textInputShouldOffset(CCTextInputNode*, float);
	virtual TodoReturn textInputReturn(CCTextInputNode*);
}

[[link(android)]]
class SetupPulsePopup {
	// virtual ~SetupPulsePopup();
	// SetupPulsePopup();

	static SetupPulsePopup* create(EffectGameObject*, cocos2d::CCArray*);

	TodoReturn closeColorSelect(cocos2d::CCObject*);
	TodoReturn getColorValue();
	bool init(EffectGameObject*, cocos2d::CCArray*);
	void onCopy(cocos2d::CCObject* sender);
	void onGroupMainOnly(cocos2d::CCObject* sender);
	void onGroupSecondaryOnly(cocos2d::CCObject* sender);
	void onPaste(cocos2d::CCObject* sender);
	void onSelectPulseMode(cocos2d::CCObject* sender);
	void onSelectSpecialColor(cocos2d::CCObject* sender);
	void onSelectSpecialTargetID(cocos2d::CCObject* sender);
	void onSelectTargetMode(cocos2d::CCObject* sender);
	void onSpawnedByTrigger(cocos2d::CCObject* sender);
	void onTouchTriggered(cocos2d::CCObject* sender);
	void onUpdateCopyColor(cocos2d::CCObject* sender);
	void onUpdateCustomColor(cocos2d::CCObject* sender);
	TodoReturn selectColor(cocos2d::ccColor3B);
	TodoReturn sliderChanged(cocos2d::CCObject*);
	TodoReturn updateColorValue();
	TodoReturn updateCopyColor();
	TodoReturn updateCopyColorTextInputLabel();
	TodoReturn updateEditorLabel();
	TodoReturn updateFadeInLabel(bool);
	TodoReturn updateFadeInTime();
	TodoReturn updateFadeOutLabel(bool);
	TodoReturn updateFadeOutTime();
	TodoReturn updateGroupMainOnly();
	TodoReturn updateGroupSecondaryOnly();
	TodoReturn updateHoldLabel(bool);
	TodoReturn updateHoldTime();
	TodoReturn updateHSVValue();
	TodoReturn updatePulseMode();
	TodoReturn updatePulseTargetType();
	TodoReturn updateSpawnedByTrigger();
	TodoReturn updateTargetID();
	TodoReturn updateTextInputLabel();
	TodoReturn updateTouchTriggered();

	virtual void keyBackClicked();
	virtual TodoReturn show();
	virtual TodoReturn determineStartValues();
	virtual TodoReturn textInputClosed(CCTextInputNode*);
	virtual void textChanged(CCTextInputNode*);
	virtual TodoReturn textInputShouldOffset(CCTextInputNode*, float);
	virtual TodoReturn textInputReturn(CCTextInputNode*);
	virtual TodoReturn colorValueChanged(cocos2d::ccColor3B);
	virtual TodoReturn textInputOpened(CCTextInputNode*);
	virtual TodoReturn colorSelectClosed(GJSpecialColorSelect*, int);
}

[[link(android)]]
class SetupSpawnPopup {
	// virtual ~SetupSpawnPopup();

	static SetupSpawnPopup* create(EffectGameObject*, cocos2d::CCArray*);

	TodoReturn createToggleButton(gd::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint);
	bool init(EffectGameObject*, cocos2d::CCArray*);
	void onTargetIDArrow(cocos2d::CCObject* sender);
	void onTouchTriggered(cocos2d::CCObject* sender);
	TodoReturn updateEditorLabel();
	TodoReturn updateTargetID();
	TodoReturn updateTextInputLabel();

	virtual void keyBackClicked();
	virtual TodoReturn show();
	virtual TodoReturn determineStartValues();
	virtual void onClose(cocos2d::CCObject* sender);
	virtual TodoReturn textInputClosed(CCTextInputNode*);
	virtual void textChanged(CCTextInputNode*);
	virtual TodoReturn textInputShouldOffset(CCTextInputNode*, float);
	virtual TodoReturn textInputReturn(CCTextInputNode*);
}

[[link(android)]]
class sha1 {
	TodoReturn calc(void const*, int, unsigned char*);
	TodoReturn toHexString(unsigned char const*, char*);
}

[[link(android)]]
class ShareCommentLayer {
	// virtual ~ShareCommentLayer();
	// ShareCommentLayer();

	static ShareCommentLayer* create(gd::string, int, CommentType, int);

	bool init(gd::string, int, CommentType, int);
	void onClose(cocos2d::CCObject* sender);
	void onShare(cocos2d::CCObject* sender);
	TodoReturn updateCharCountLabel();
	TodoReturn updateDescText(char const*);

	virtual void registerWithTouchDispatcher();
	virtual void keyBackClicked();
	virtual TodoReturn textInputOpened(CCTextInputNode*);
	virtual TodoReturn textInputClosed(CCTextInputNode*);
	virtual void textChanged(CCTextInputNode*);
	virtual TodoReturn uploadActionFinished(int, int);
	virtual TodoReturn uploadActionFailed(int, int);
	virtual TodoReturn onClosePopup(UploadActionPopup*);
}

[[link(android)]]
class ShareLevelLayer {
	// virtual ~ShareLevelLayer();

	static ShareLevelLayer* create(GJGameLevel*);

	TodoReturn getStarsButton(int, cocos2d::SEL_MenuHandler, cocos2d::CCMenu*, float);
	bool init(GJGameLevel*);
	void onClose(cocos2d::CCObject* sender);
	void onSettings(cocos2d::CCObject* sender);
	void onShare(cocos2d::CCObject* sender);
	TodoReturn selectRating(cocos2d::CCObject*);
	TodoReturn setupStars();

	virtual void keyBackClicked();
}

[[link(android)]]
class ShareLevelSettingsLayer {
	// virtual ~ShareLevelSettingsLayer();

	static ShareLevelSettingsLayer* create(GJGameLevel*);

	bool init(GJGameLevel*);
	void onClose(cocos2d::CCObject* sender);
	void onCopyable(cocos2d::CCObject* sender);
	void onEditPassword(cocos2d::CCObject* sender);
	void onPassword(cocos2d::CCObject* sender);
	TodoReturn updateSettingsState();

	virtual TodoReturn numberInputClosed(NumberInputLayer*);
	virtual void keyBackClicked();
}

[[link(android)]]
class SimpleObject {
	// virtual ~SimpleObject();

	static SimpleObject* create();

	TodoReturn getColor();
	bool init();
	void setColor(cocos2d::ccColor3B);
}

[[link(android)]]
class SimplePlayer {
	// virtual ~SimplePlayer();

	static SimplePlayer* create(int);

	TodoReturn getSpecial();
	TodoReturn getUseGlow();
	bool init(int);
	void setFrames(char const*, char const*, char const*, char const*);
	void setSecondColor(cocos2d::ccColor3B const&);
	void setSpecial(int);
	void setUseGlow(bool);
	TodoReturn updateColors();
	TodoReturn updatePlayerFrame(int, IconType);

	virtual void setOpacity(unsigned char);
	virtual void setColor(cocos2d::ccColor3B const&);
}

[[link(android)]]
class SlideInLayer {
	// virtual ~SlideInLayer();
	// SlideInLayer();

	static SlideInLayer* create();

	TodoReturn getDelegate();
	TodoReturn getRemoveOnExit();
	void setDelegate(SlideInLayerDelegate*);
	void setRemoveOnExit(bool);

	virtual bool init();
	virtual void draw();
	virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void registerWithTouchDispatcher();
	virtual void keyBackClicked();
	virtual TodoReturn customSetup();
	virtual TodoReturn enterLayer();
	virtual TodoReturn exitLayer(cocos2d::CCObject*);
	virtual TodoReturn showLayer(bool);
	virtual TodoReturn hideLayer(bool);
	virtual TodoReturn layerVisible();
	virtual TodoReturn layerHidden();
	virtual TodoReturn enterAnimFinished();
	virtual TodoReturn disableUI();
	virtual TodoReturn enableUI();
}

[[link(android)]]
class Slider {
	// virtual ~Slider();

	static Slider* create(cocos2d::CCNode*, cocos2d::SEL_MenuHandler, char const*, char const*, char const*, char const*, float);
	static Slider* create(cocos2d::CCNode*, cocos2d::SEL_MenuHandler, float);
	static Slider* create(cocos2d::CCNode*, cocos2d::SEL_MenuHandler);

	TodoReturn disableTouch();
	TodoReturn getLiveDragging();
	TodoReturn getThumb();
	TodoReturn getValue();
	bool init(cocos2d::CCNode*, cocos2d::SEL_MenuHandler, char const*, char const*, char const*, char const*, float);
	void setBarVisibility(bool);
	void setLiveDragging(bool);
	void setValue(float);
	TodoReturn updateBar();

	virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
}

[[link(android)]]
class SliderThumb {
	// virtual ~SliderThumb();

	static SliderThumb* create(cocos2d::CCNode*, cocos2d::SEL_MenuHandler, char const*, char const*);

	TodoReturn getValue();
	bool init(cocos2d::CCNode*, cocos2d::SEL_MenuHandler, char const*, char const*);
	void setValue(float);
}

[[link(android)]]
class SliderTouchLogic {
	// virtual ~SliderTouchLogic();
	// SliderTouchLogic();

	static SliderTouchLogic* create(cocos2d::CCNode*, cocos2d::SEL_MenuHandler, char const*, char const*, float);

	TodoReturn getLiveDragging();
	TodoReturn getSliderDelegate();
	TodoReturn getThumb();
	TodoReturn getTouchOffset();
	bool init(cocos2d::CCNode*, cocos2d::SEL_MenuHandler, char const*, char const*, float);
	void setLiveDragging(bool);
	void setSliderDelegate(Slider*);

	virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void registerWithTouchDispatcher();
}

[[link(android)]]
class SongCell {
	// virtual ~SongCell();
	SongCell(char const*, float, float);

	TodoReturn loadFromObject(SongObject*);
	void onClick(cocos2d::CCObject* sender);
	TodoReturn updateBGColor(int);

	virtual bool init();
	virtual void draw();
}

[[link(android)]]
class SongInfoLayer {
	// virtual ~SongInfoLayer();

	static SongInfoLayer* create(gd::string, gd::string, gd::string, gd::string, gd::string, gd::string);
	static SongInfoLayer* create(int);

	bool init(gd::string, gd::string, gd::string, gd::string, gd::string, gd::string);
	void onClose(cocos2d::CCObject* sender);
	void onDownload(cocos2d::CCObject* sender);
	void onFB(cocos2d::CCObject* sender);
	void onNG(cocos2d::CCObject* sender);
	void onYT(cocos2d::CCObject* sender);

	virtual void keyBackClicked();
}

[[link(android)]]
class SongInfoObject {
	// virtual ~SongInfoObject();

	static SongInfoObject* create(cocos2d::CCDictionary*);
	static SongInfoObject* create(int, gd::string, gd::string, int, float, gd::string, gd::string, gd::string, int);
	static SongInfoObject* create(int);

	TodoReturn createWithCoder(DS_Dictionary*);
	TodoReturn getArtistID();
	TodoReturn getArtistName();
	TodoReturn getArtistYT();
	TodoReturn getFileSize();
	TodoReturn getIsBlocked();
	TodoReturn getIsUnloaded();
	TodoReturn getIsVerified();
	TodoReturn getLevelSettings();
	TodoReturn getSongID();
	TodoReturn getSongName();
	TodoReturn getSongPriority();
	TodoReturn getSongURL();
	TodoReturn getSongYT();
	bool init(int, gd::string, gd::string, int, float, gd::string, gd::string, gd::string, int);
	void setArtistID(int);
	void setArtistName(gd::string);
	void setArtistYT(gd::string);
	void setFileSize(float);
	void setIsBlocked(bool);
	void setIsUnloaded(bool);
	void setIsVerified(bool);
	void setLevelSettings(LevelSettingsObject*);
	void setSongID(int);
	void setSongName(gd::string);
	void setSongPriority(int);
	void setSongURL(gd::string);
	void setSongYT(gd::string);

	virtual void encodeWithCoder(DS_Dictionary*);
	virtual bool canEncode();
}

[[link(android)]]
class SongObject {
	// virtual ~SongObject();

	static SongObject* create(int);

	TodoReturn getAudioTrack();
	bool init(int);
}

[[link(android)]]
class SongOptionsLayer {
	// virtual ~SongOptionsLayer();

	static SongOptionsLayer* create(LevelSettingsObject*);

	bool init(LevelSettingsObject*);
	void onClose(cocos2d::CCObject* sender);
	void onFadeIn(cocos2d::CCObject* sender);
	void onFadeOut(cocos2d::CCObject* sender);
	void onInfo(cocos2d::CCObject* sender);
	void onPlayback(cocos2d::CCObject* sender);
	TodoReturn updatePlaybackBtn();

	virtual void keyBackClicked();
}

[[link(android)]]
class SongsLayer {
	// virtual ~SongsLayer();

	static SongsLayer* create();

	virtual TodoReturn customSetup();
}

[[link(android)]]
class SpawnTriggerAction {
	// ~SpawnTriggerAction();

	static SpawnTriggerAction* create(float, int);

	TodoReturn createFromString(gd::string);
	TodoReturn getDelayTime();
	TodoReturn getDeltaTime();
	TodoReturn getSaveString();
	TodoReturn getTargetID();
	bool init(float, int);
	bool isFinished();
	void setDelayTime(float);
	void setDeltaTime(float);
	TodoReturn step(float);
}

[[link(android)]]
class SpawnTriggerDelegate {
	TodoReturn spawnGroup(int);
}

[[link(android)]]
class SpeedObject {
	// ~SpeedObject();

	static SpeedObject* create(int, float);

	TodoReturn getSpeedMod();
	TodoReturn getXPos();
	bool init(int, float);
	void setSource(GameObject*);
}

[[link(android)]]
class Spinor {
	TodoReturn slerp(Spinor const&, Spinor const&, float);
}

[[link(android)]]
class SpriteAnimationManager {
	// virtual ~SpriteAnimationManager();

	TodoReturn animationFinished();
	TodoReturn createAnimations(gd::string);
	TodoReturn createWithOwner(CCAnimatedSprite*, gd::string);
	TodoReturn doCleanup();
	TodoReturn executeAnimation(gd::string);
	TodoReturn finishAnimation(gd::string);
	TodoReturn getActiveAnimation();
	TodoReturn getAnimationContainer();
	TodoReturn getAnimType(gd::string);
	TodoReturn getPrio(gd::string);
	TodoReturn initWithOwner(CCAnimatedSprite*, gd::string);
	TodoReturn loadAnimations(gd::string);
	TodoReturn offsetCurrentAnimation(float);
	TodoReturn overridePrio();
	TodoReturn playSound(gd::string);
	TodoReturn playSoundForAnimation(gd::string);
	TodoReturn queueAnimation(gd::string);
	TodoReturn resetAnimState();
	TodoReturn runAnimation(gd::string);
	TodoReturn runQueuedAnimation();
	void setActiveAnimation(gd::string);
	void setAnimationContainer(cocos2d::CCDictionary*);
	TodoReturn stopAnimations();
	TodoReturn storeAnimation(cocos2d::CCAnimate*, cocos2d::CCAnimate*, gd::string, int, spriteMode, cocos2d::CCSpriteFrame*);
	TodoReturn storeSoundForAnimation(cocos2d::CCString*, gd::string, float);
	TodoReturn updateAnimationSpeed(float);
}

[[link(android)]]
class SpriteDescription {
	// virtual ~SpriteDescription();
	// SpriteDescription();

	TodoReturn createDescription(cocos2d::CCDictionary*);
	TodoReturn createDescription(DS_Dictionary*);
	TodoReturn getTransformValues(frameValues*);
	TodoReturn initDescription(cocos2d::CCDictionary*);
	TodoReturn initDescription(DS_Dictionary*);
}

[[link(android)]]
class StartPosObject {
	// virtual ~StartPosObject();

	static StartPosObject* create();

	TodoReturn getSaveString();
	TodoReturn getSettings();
	void setSettings(LevelSettingsObject*);

	virtual bool init();
}

[[link(android)]]
class StatsCell {
	// virtual ~StatsCell();
	StatsCell(char const*, float, float);

	TodoReturn getTitleFromKey(char const*);
	TodoReturn loadFromObject(StatsObject*);
	TodoReturn updateBGColor(int);

	virtual bool init();
	virtual void draw();
}

[[link(android)]]
class StatsLayer {
	// virtual ~StatsLayer();

	static StatsLayer* create();

	virtual TodoReturn customSetup();
}

[[link(android)]]
class StatsObject {
	// virtual ~StatsObject();

	static StatsObject* create(char const*, int);

	TodoReturn getKey();
	TodoReturn getValue();
	bool init(char const*, int);
}

[[link(android)]]
class StoreToolbox {
	TodoReturn doICheck();
	bool isBillingSupported();
	TodoReturn purchaseItem(char const*);
	TodoReturn restorePurchases();
	TodoReturn setupStore();
}

[[link(android)]]
class SupportLayer {
	// virtual ~SupportLayer();

	static SupportLayer* create();

	TodoReturn createToggleButton(gd::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint);
	TodoReturn exitLayer();
	void onCocos2d(cocos2d::CCObject* sender);
	void onEmail(cocos2d::CCObject* sender);
	void onFAQ(cocos2d::CCObject* sender);
	void onLowDetail(cocos2d::CCObject* sender);
	void onRequestAccess(cocos2d::CCObject* sender);
	void onRestore(cocos2d::CCObject* sender);
	void onRobTop(cocos2d::CCObject* sender);
	TodoReturn sendSupportMail();

	virtual TodoReturn customSetup();
	virtual TodoReturn uploadActionFinished(int, int);
	virtual TodoReturn uploadActionFailed(int, int);
	virtual TodoReturn onClosePopup(UploadActionPopup*);
	virtual void FLAlert_Clicked(FLAlertLayer*, bool);
}

[[link(android)]]
class TableView {
	// virtual ~TableView();
	TableView(cocos2d::CCRect);

	static TableView* create(TableViewDelegate*, TableViewDataSource*, cocos2d::CCRect);

	TodoReturn cancelAndStoleTouch(cocos2d::CCTouch*, cocos2d::CCEvent*);
	TodoReturn cellForRowAtIndexPath(CCIndexPath&);
	TodoReturn cellForTouch(cocos2d::CCTouch*);
	TodoReturn checkBoundaryOfCell(cocos2d::CCPoint&, float);
	TodoReturn checkBoundaryOfCell(TableViewCell*);
	TodoReturn checkBoundaryOfContent(float);
	TodoReturn checkFirstCell(TableViewCell*);
	TodoReturn checkLastCell(TableViewCell*);
	TodoReturn claimTouch(cocos2d::CCTouch*);
	TodoReturn deleteTableViewCell(TableViewCell*);
	TodoReturn dequeueReusableCellWithIdentifier(char const*);
	TodoReturn getBeginLocation();
	TodoReturn getBeginTouch();
	TodoReturn getCellRemovedArray();
	TodoReturn getCellVisibleArray();
	TodoReturn getCheckLocation();
	TodoReturn getClipsToBounds();
	TodoReturn getDataSource();
	TodoReturn getDelegate();
	TodoReturn getEditable();
	TodoReturn getindexPathAddedArray();
	TodoReturn getIsScheduled();
	TodoReturn getIsTouch();
	TodoReturn getLastCellPos();
	TodoReturn getScrollingToIndexPath();
	TodoReturn getStealTouches();
	TodoReturn getTouchCell();
	TodoReturn getTouchDispatch();
	TodoReturn initTableViewCells();
	bool isDuplicateIndexPath(CCIndexPath&);
	bool isDuplicateInVisibleCellArray(CCIndexPath*);
	TodoReturn reloadData();
	TodoReturn removeIndexPathFromPathAddedArray(CCIndexPath&);
	TodoReturn scrollToIndexPath(CCIndexPath&);
	void setBeginLocation(cocos2d::CCPoint);
	void setBeginTouch(cocos2d::CCTouch*);
	void setCellRemovedArray(cocos2d::CCArray*);
	void setCellVisibleArray(cocos2d::CCArray*);
	void setCheckLocation(cocos2d::CCPoint);
	void setClipsToBounds(bool);
	void setDataSource(TableViewDataSource*);
	void setDelegate(TableViewDelegate*);
	void setEditable(bool);
	TodoReturn setindexPathAddedArray(cocos2d::CCArray*);
	void setIsScheduled(bool);
	void setIsTouch(bool);
	void setLastCellPos(cocos2d::CCPoint);
	void setScrollingToIndexPath(CCIndexPath*);
	void setStealTouches(bool);
	void setTouchCell(TableViewCell*);
	void setTouchDispatch(bool);
	TodoReturn touchFinish(cocos2d::CCTouch*);

	virtual void onEnter();
	virtual void onExit();
	virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void registerWithTouchDispatcher();
	virtual void scrollWheel(float, float);
	virtual TodoReturn scrllViewWillBeginDecelerating(CCScrollLayerExt*);
	virtual TodoReturn scrollViewDidEndDecelerating(CCScrollLayerExt*);
	virtual TodoReturn scrollViewTouchMoving(CCScrollLayerExt*);
	virtual TodoReturn scrollViewDidEndMoving(CCScrollLayerExt*);
}

[[link(android)]]
class TableViewCell {
	// virtual ~TableViewCell();
	TableViewCell(char const*, float, float);

	TodoReturn deleteButtonSelector(cocos2d::CCObject*);
	TodoReturn getCellIdentifier();
	TodoReturn getDelBtnColor();
	TodoReturn getDeleteButton();
	TodoReturn getEditable();
	bool isDeleteButtonShow();
	TodoReturn resetDeleteButtonPosition();
	void setCellIdentifier(gd::string const&);
	void setDelBtnColor(cocos2d::ccColor3B);
	void setDeleteButton(cocos2d::CCMenuItem*);
	void setEditable(bool);
	TodoReturn showDeleteButton(bool);
	TodoReturn updateVisibility();
}

[[link(android)]]
class TableViewDataSource {
	virtual TodoReturn pure_virtual_00a31820() {} // TODO: figure out what function this is
	virtual TodoReturn numberOfSectionsInTableView(TableView*);
	virtual TodoReturn TableViewCommitCellEditingStyleForRowAtIndexPath(TableView*, TableViewCellEditingStyle, CCIndexPath&);
	virtual TodoReturn pure_virtual_00a3182c() {} // TODO: figure out what function this is
}

[[link(android)]]
class TableViewDelegate {
	virtual TodoReturn willTweenToIndexPath(CCIndexPath&, TableViewCell*, TableView*);
	virtual TodoReturn didEndTweenToIndexPath(CCIndexPath&, TableView*);
	virtual TodoReturn TableViewWillDisplayCellForRowAtIndexPath(CCIndexPath&, TableViewCell*, TableView*);
	virtual TodoReturn TableViewDidDisplayCellForRowAtIndexPath(CCIndexPath&, TableViewCell*, TableView*);
	virtual TodoReturn TableViewWillReloadCellForRowAtIndexPath(CCIndexPath&, TableViewCell*, TableView*);
	virtual TodoReturn pure_virtual_00a3180c() {} // TODO: figure out what function this is
	virtual TodoReturn pure_virtual_00a31810() {} // TODO: figure out what function this is
}

[[link(android)]]
class TeleportPortalObject {
	// virtual ~TeleportPortalObject();

	static TeleportPortalObject* create(char const*);

	TodoReturn customObjectSetup(gd::map<gd::string, gd::string>*);
	TodoReturn getLockX();
	TodoReturn getPortalTargetY();
	TodoReturn getSaveString();
	TodoReturn getSmoothEase();
	TodoReturn getTargetPortal();
	TodoReturn getTeleportXOff(cocos2d::CCNode*);
	bool init(char const*);
	void setLockX(bool);
	void setPortalTargetY(float);
	void setPositionOverride(cocos2d::CCPoint);
	void setSmoothEase(bool);
	void setStartPosOverride(cocos2d::CCPoint);
	void setTargetPortal(TeleportPortalObject*);

	virtual void setPosition(cocos2d::CCPoint const&);
	virtual void setRotation(float);
	virtual void setStartPos(cocos2d::CCPoint);
	virtual TodoReturn addToGroup(int);
	virtual TodoReturn removeFromGroup(int);
	virtual void setRotation2(float);
	virtual TodoReturn addToGroup2(int);
	virtual TodoReturn removeFromGroup2(int);
}

[[link(android)]]
class TextArea {
	// virtual ~TextArea();
	// TextArea();

	static TextArea* create(gd::string, char const*, float, float, cocos2d::CCPoint, float, bool);

	TodoReturn colorAllCharactersTo(cocos2d::ccColor3B);
	TodoReturn fadeIn(float, bool);
	TodoReturn fadeOut(float);
	TodoReturn fadeOutAndRemove();
	TodoReturn finishFade();
	TodoReturn getAlign();
	TodoReturn getFadeInFinished();
	TodoReturn getFontScale();
	TodoReturn getLineSpace();
	TodoReturn getMaxWidth();
	TodoReturn getOnTimer();
	TodoReturn getSizeWidth();
	TodoReturn getTextHeight();
	TodoReturn getTextPosition();
	TodoReturn getTextWidth();
	TodoReturn hideAll();
	bool init(gd::string, char const*, float, float, cocos2d::CCPoint, float, bool);
	void setAlign(cocos2d::CCPoint);
	void setFadeInFinished(bool);
	void setFontScale(float);
	void setIgnoreColorCode(bool);
	void setLineSpace(float);
	void setMaxWidth(float);
	void setOnTimer(bool);
	void setString(gd::string);
	TodoReturn showAll();
	TodoReturn stopAllCharacterActions();

	virtual void draw();
	virtual void setOpacity(unsigned char);
}

[[link(android)]]
class TextInputDelegate {
	virtual void textChanged(CCTextInputNode*);
	virtual TodoReturn textInputOpened(CCTextInputNode*);
	virtual TodoReturn textInputClosed(CCTextInputNode*);
	virtual TodoReturn textInputShouldOffset(CCTextInputNode*, float);
	virtual TodoReturn textInputReturn(CCTextInputNode*);
	virtual TodoReturn allowTextInput(CCTextInputNode*);
}

[[link(android)]]
class TriggerEffectDelegate {
	virtual TodoReturn pure_virtual_00a3b958() {} // TODO: figure out what function this is
	virtual TodoReturn pure_virtual_00a3b95c() {} // TODO: figure out what function this is
	virtual TodoReturn pure_virtual_00a3b960() {} // TODO: figure out what function this is
}

[[link(android)]]
class TutorialLayer {
	// virtual ~TutorialLayer();

	static TutorialLayer* create();

	TodoReturn loadPage(int);
	void onClose(cocos2d::CCObject* sender);
	void onNext(cocos2d::CCObject* sender);
	TodoReturn removeTutorialTexture();

	virtual bool init();
	virtual void keyBackClicked();
}

[[link(android)]]
class TutorialPopup {
	// virtual ~TutorialPopup();

	static TutorialPopup* create(gd::string);

	TodoReturn animateMenu();
	TodoReturn closeTutorial(cocos2d::CCObject*);
	bool init(gd::string);
	TodoReturn registerForCallback(cocos2d::SEL_MenuHandler, cocos2d::CCNode*);

	virtual void keyBackClicked();
	virtual TodoReturn show();
}

[[link(android)]]
class UILayer {
	// virtual ~UILayer();
	// UILayer();

	static UILayer* create();

	TodoReturn disableMenu();
	TodoReturn enableMenu();
	TodoReturn getClkTimer();
	void onCheck(cocos2d::CCObject* sender);
	void onDeleteCheck(cocos2d::CCObject* sender);
	void onPause(cocos2d::CCObject* sender);
	TodoReturn pCommand(cocos2d::CCNode*);
	TodoReturn toggleCheckpointsMenu(bool);

	virtual bool init();
	virtual void draw();
	virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
	virtual void registerWithTouchDispatcher();
	virtual void keyBackClicked();
	virtual void keyDown(cocos2d::enumKeyCodes);
	virtual void keyUp(cocos2d::enumKeyCodes);
}

[[link(android)]]
class UndoObject {
	// virtual ~UndoObject();

	static UndoObject* create(GameObject*, UndoCommand);

	TodoReturn createWithArray(cocos2d::CCArray*, UndoCommand);
	TodoReturn createWithTransformObjects(cocos2d::CCArray*, UndoCommand);
	TodoReturn getCommand();
	TodoReturn getIsLinked();
	TodoReturn getObject();
	TodoReturn getObjects();
	bool init(cocos2d::CCArray*, UndoCommand);
	bool init(GameObject*, UndoCommand);
	TodoReturn initWithTransformObjects(cocos2d::CCArray*, UndoCommand);
	void setIsLinked(bool);
	void setObjects(cocos2d::CCArray*);
}

[[link(android)]]
class UpdateAccountSettingsPopup {
	// virtual ~UpdateAccountSettingsPopup();

	static UpdateAccountSettingsPopup* create(GJAccountSettingsLayer*, int, int, gd::string);

	bool init(GJAccountSettingsLayer*, int, int, gd::string);
	void onClose(cocos2d::CCObject* sender);

	virtual void keyBackClicked();
	virtual TodoReturn updateSettingsFinished();
	virtual TodoReturn updateSettingsFailed();
}

[[link(android)]]
class UploadActionDelegate {
	virtual TodoReturn uploadActionFinished(int, int);
	virtual TodoReturn uploadActionFailed(int, int);
}

[[link(android)]]
class UploadActionPopup {
	// virtual ~UploadActionPopup();

	static UploadActionPopup* create(UploadPopupDelegate*, gd::string);

	TodoReturn closePopup();
	TodoReturn getDelegate();
	bool init(UploadPopupDelegate*, gd::string);
	void onClose(cocos2d::CCObject* sender);
	void setDelegate(UploadPopupDelegate*);
	TodoReturn showFailMessage(gd::string);
	TodoReturn showSuccessMessage(gd::string);

	virtual void keyBackClicked();
}

[[link(android)]]
class UploadMessageDelegate {
	virtual TodoReturn uploadMessageFinished(int);
	virtual TodoReturn uploadMessageFailed(int);
}

[[link(android)]]
class UploadPopup {
	// virtual ~UploadPopup();

	static UploadPopup* create(GJGameLevel*);

	bool init(GJGameLevel*);
	void onBack(cocos2d::CCObject* sender);
	void onClose(cocos2d::CCObject* sender);
	void onReturnToLevel(cocos2d::CCObject* sender);

	virtual void keyBackClicked();
	virtual TodoReturn show();
	virtual TodoReturn levelUploadFinished(GJGameLevel*);
	virtual TodoReturn levelUploadFailed(GJGameLevel*);
}

[[link(android)]]
class UploadPopupDelegate {
	virtual TodoReturn onClosePopup(UploadActionPopup*);
}

[[link(android)]]
class UserInfoDelegate {
	virtual TodoReturn getUserInfoFinished(GJUserScore*);
	virtual TodoReturn getUserInfoFailed(int);
	virtual TodoReturn userInfoChanged(GJUserScore*);
}

[[link(android)]]
class UserListDelegate {
	virtual TodoReturn getUserListFinished(cocos2d::CCArray*, UserListType);
	virtual TodoReturn getUserListFailed(UserListType, GJErrorCode);
	virtual TodoReturn userListChanged(cocos2d::CCArray*, UserListType);
	virtual TodoReturn forceReloadList(UserListType);
}

[[link(android)]]
class VideoOptionsLayer {
	// virtual ~VideoOptionsLayer();

	static VideoOptionsLayer* create();

	TodoReturn createToggleButton(gd::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint, float, float, bool);
	void onAdvanced(cocos2d::CCObject* sender);
	void onApply(cocos2d::CCObject* sender);
	void onClose(cocos2d::CCObject* sender);
	void onFullscreen(cocos2d::CCObject* sender);
	void onInfo(cocos2d::CCObject* sender);
	void onResolutionNext(cocos2d::CCObject* sender);
	void onResolutionPrev(cocos2d::CCObject* sender);
	void onTextureQualityNext(cocos2d::CCObject* sender);
	void onTextureQualityPrev(cocos2d::CCObject* sender);
	TodoReturn toggleResolution();
	TodoReturn updateResolution(int);
	TodoReturn updateTextureQuality(int);

	virtual bool init();
	virtual void keyBackClicked();
}

[[link(android)]]
class GameObjectClass {

}

[[link(android)]]
class GhostTrailDelegate {

}

[[link(android)]]
class GJFriendStatus {

}

[[link(android)]]
class PremiumPopup {

}

[[link(android)]]
class SlideInLayerDelegate {

}
