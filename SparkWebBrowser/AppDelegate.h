//
//  AppDelegate.h
//  Spark
//
//  Copyright (c) 2014-2019 Jonathan Wukitsch / Insleep
//  This code is distributed under the terms and conditions of the GNU license.
//  You may copy, distribute and modify the software as long as you track changes/dates in source files. Any modifications to or software including (via compiler) GPL-licensed code must also be made available under the GPL along with build & install instructions.

#import <Cocoa/Cocoa.h>
#import <WebKit/WebKit.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>

/* Declarations */

#pragma mark - IBOutlets
@property (assign, nonatomic) IBOutlet NSWindow *window;
@property (assign, nonatomic) IBOutlet WebView *webView;
@property (assign, nonatomic) IBOutlet NSTextField *addressBar;
@property (assign, nonatomic) IBOutlet NSTextField *titleStatus;
@property (assign, nonatomic) IBOutlet NSTextField *ntNotSupported;
@property (assign, nonatomic) IBOutlet NSTextField *currentVersion;
@property (assign, nonatomic) IBOutlet NSTextField *currentReleaseChannel;
@property (assign, nonatomic) IBOutlet NSPanel *errorWindow;
@property (assign, nonatomic) IBOutlet NSPanel *popupWindow;
@property (assign, nonatomic) IBOutlet NSPanel *aboutWindow;
@property (assign, nonatomic) IBOutlet NSPanel *configWindow;
@property (assign, nonatomic) IBOutlet NSPanel *clearBrowsingDataWindow;
@property (assign, nonatomic) IBOutlet NSWindow *historyWindow;
@property (assign, nonatomic) IBOutlet NSProgressIndicator *loadingIndicator;
@property (assign, nonatomic) IBOutlet NSImageView *faviconImage;
@property (assign, nonatomic) IBOutlet NSTextField *homepageTextField;
@property (assign, nonatomic) IBOutlet NSButton *setHomepageBtn;
@property (assign, nonatomic) IBOutlet NSPopUpButton *releaseChannelPicker;
@property (assign, nonatomic) IBOutlet NSPanel *settingsWindow;
@property (assign, nonatomic) IBOutlet NSButton *reloadBtn;
@property (assign, nonatomic) IBOutlet NSTextField *ntBtnBackground;
@property (assign, nonatomic) IBOutlet NSButton *ntBtn;
@property (assign, nonatomic) IBOutlet NSPopUpButton *searchEnginePicker;
@property (assign, nonatomic) IBOutlet NSPopUpButton *topBarColorPicker;
@property (assign, nonatomic) IBOutlet NSButton *homepageBasedOnSearchEngineBtn;
@property (assign, nonatomic) IBOutlet NSTextField *tabBg;
@property (assign, nonatomic) IBOutlet NSTextField *topBarBg;
@property (assign, nonatomic) IBOutlet NSButton *backBtn;
@property (assign, nonatomic) IBOutlet NSButton *forwardBtn;
@property (assign, nonatomic) IBOutlet NSButton *homeBtn;
@property (assign, nonatomic) IBOutlet NSButton *settingsBtn;
@property (assign, nonatomic) IBOutlet NSPopUpButton *settingsPopupBtn;
@property (assign, nonatomic) IBOutlet NSColorWell *customColorWell;
@property (assign, nonatomic) IBOutlet NSProgressIndicator *downloadProgressIndicator;
@property (assign, nonatomic) IBOutlet NSButton *closeDownloadingViewBtn;
@property (assign, nonatomic) IBOutlet NSTextField *downloadingViewBg;
@property (assign, nonatomic) IBOutlet NSTextField *fileDownloadingText;
@property (assign, nonatomic) IBOutlet NSTextField *bytesDownloadedText;
@property (assign, nonatomic) IBOutlet NSImageView *fileDownloadStatusIcon;
@property (assign, nonatomic) IBOutlet NSTextField *downloadLocTextField;
@property (assign, nonatomic) IBOutlet NSView *downloadsView;
@property (assign, nonatomic) IBOutlet NSTextField *customSearchEngineField;
@property (assign, nonatomic) IBOutlet NSButton *customSearchEngineSaveBtn;
@property (assign, nonatomic) IBOutlet NSButton *lastSessionRadioBtn;
@property (assign, nonatomic) IBOutlet NSButton *homepageRadioBtn;
@property (assign, nonatomic) IBOutlet NSTextField *errorPanelTitle;
@property (assign, nonatomic) IBOutlet NSTextField *errorPanelText;
@property (assign, nonatomic) IBOutlet NSTextField *popupWindowTitle;
@property (assign, nonatomic) IBOutlet NSTextField *popupWindowText;
@property (assign, nonatomic) IBOutlet NSButton *popupWindowBtn1;
@property (assign, nonatomic) IBOutlet NSButton *popupWindowBtn2;
@property (assign, nonatomic) IBOutlet NSButton *useAboutPageBtn;
@property (assign, nonatomic) IBOutlet NSImageView *pageStatusImage;
@property (assign, nonatomic) IBOutlet NSMenu *menuBarBookmarks;
@property (assign, nonatomic) IBOutlet NSImageView *historyClearedIcon;
@property (assign, nonatomic) IBOutlet NSImageView *browsingDataClearedIcon;
@property (assign, nonatomic) IBOutlet NSView *sparkSecurePageView;
@property (assign, nonatomic) IBOutlet NSTextField *sparkSecurePageText;
@property (assign, nonatomic) IBOutlet NSTextField *sparkSecurePageDetailText;
@property (assign, nonatomic) IBOutlet NSImageView *sparkSecurePageIcon;
@property (assign, nonatomic) IBOutlet NSButton *showHomeBtn;
@property (assign, nonatomic) IBOutlet NSView *bookmarkAddedView;
@property (assign, nonatomic) IBOutlet NSTextField *bookmarkAddedName;
@property (assign, nonatomic) IBOutlet NSTextField *bookmarkAddedURL;
@property (assign, nonatomic) IBOutlet NSView *loadStatusIndicator;
@property (assign, nonatomic) IBOutlet NSTextField *loadStatusIndicatorText;
@property (assign, nonatomic) IBOutlet NSButton *enableLoadStatusIndicatorBtn;
@property (assign, nonatomic) IBOutlet NSButton *clearBrowsingData_browsingHistoryToggle;
@property (assign, nonatomic) IBOutlet NSButton *clearBrowsingData_cachedFilesToggle;
@property (assign, nonatomic) IBOutlet NSButton *clearBrowsingData_bookmarksToggle;
@property (assign, nonatomic) IBOutlet NSButton *clearBrowsingDataConfirmBtn;
@property (assign, nonatomic) IBOutlet NSMenuItem *privateBrowsingModeToggle;
@property (assign, nonatomic) IBOutlet NSTextField *mojaveAppearanceText;
@property (assign, nonatomic) IBOutlet NSTextField *settingsVersionBuildText;
@property (assign, nonatomic) IBOutlet NSButton *setPrefsVersionBuildNumberBtn;
@property (assign, nonatomic) IBOutlet NSTouchBar *sparkTouchBar;

#pragma mark - Miscellaneous properties
@property (nonatomic, assign) long bytesReceived;

#pragma mark - IBActions

/**
 * Open a new tab.
 * @param sender
 */
- (IBAction)newTab:(id)sender;

/**
 * Set the user's homepage.
 * @param sender
 */
- (IBAction)setHomepage:(id)sender;

/**
 * Set the user's download location.
 * @param sender
 */
- (IBAction)setDownloadLocation:(id)sender;

/**
 * Set the user's release channel.
 * @param sender
 */
- (IBAction)setReleaseChannel:(id)sender;

/**
 * Start loading a webpage.
 * @param sender
 */
- (IBAction)initWebpageLoad:(id)sender;

/**
 * Set the user's search engine.
 * @param sender
 */
- (IBAction)setSearchEngine:(id)sender;

/**
 * Open the release notes URL.
 * @param sender
 */
- (IBAction)viewReleaseNotes:(id)sender;

/**
 * Open the feature roadmap URL.
 * @param sender
 */
- (IBAction)viewFeatureRoadmap:(id)sender;

/**
 * Set homepage based on the user's search engine.
 * @param sender
 */
- (IBAction)startSettingHomepageBasedOnSearchEngine:(id)sender;

/**
 * Set the user's theme.
 * @param sender
 */
- (IBAction)setTopBarColor:(id)sender;

/**
 * Set a custom color as the user's theme.
 * @param sender
 */
- (IBAction)setCustomColor:(id)sender;

/**
 * Close the About window and open a link to report an issue.
 * @param sender
 */
- (IBAction)reportIssueAboutWindow:(id)sender;

/**
 * Open a link to report an issue.
 * @param sender
 */
- (IBAction)reportIssue:(id)sender;

/**
 * Close the Downloads view.
 * @param sender
 */
- (IBAction)closeDownloadingView:(id)sender;

/**
 * Save a custom search engine.
 * @param sender
 */
- (IBAction)saveCustomSearchEngine:(id)sender;

/**
 * Save a page and store it to a location.
 * @param sender
 */
- (IBAction)savePage:(id)sender;

/**
 * Save an option based on the currently selected radio button.
 * @param sender
 */
- (IBAction)lastSessionRadioBtnSelected:(id)sender;

/**
 * Save an option based on the currently selected radio button.
 * @param sender
 */
- (IBAction)homepageRadioBtnSelected:(id)sender;

/**
 * Set the user's release channel and relaunch Spark.
 * @param sender
 */
- (IBAction)setReleaseChannelBtnClicked:(id)sender;

/**
 * Use the About page instead of the About window.
 * @param sender
 */
- (IBAction)useAboutPage:(id)sender;

/**
 * Open the About window.
 * @param sender
 */
- (IBAction)openAboutWindow:(id)sender;

/**
 * Enable the page load status indicator.
 * @param sender
 */
- (IBAction)enableLoadStatusIndicator:(id)sender;

/**
 * Show the version and build numbers in Preferences.
 * @param sender
 */
- (IBAction)showVersionBuildPrefs:(id)sender;

/**
 * Add a bookmark to the bookmarks array.
 * @param sender
 */
- (IBAction)addBookmark:(id)sender;

/**
 * Determine whether or not the address bar bookmarks viewer is open.
 * @param sender
 */
- (IBAction)addBookmarkAddressBar:(id)sender;

/**
 * Clear the history array.
 * @param sender
 */
- (IBAction)clearHistory:(id)sender;

/**
 * Load the user's homepage.
 * @param sender
 */
- (IBAction)loadHomepage:(id)sender;

/**
 * Show the Home button on the address bar.
 * @param sender
 */
- (IBAction)startShowingHomeBtn:(id)sender;

/**
 * Create a bookmark and close the "Bookmark Added" window.
 * @param sender
 */
- (IBAction)bookmarkAddedDoneBtnPressed:(id)sender;

/**
 * Cancel the creation of a bookmark.
 * @param sender
 */
- (IBAction)cancelBookmarkCreation:(id)sender;

/**
 * Open Keychain Access and display certificates.
 * @param sender
 */
- (IBAction)manageCertificatesBtnPressed:(id)sender;

/**
 * Open Clear Browsing Data window.
 * @param sender
 */
- (IBAction)clearBrowsingData:(id)sender;

/**
 * Clear browsing data and close window.
 * @param sender
 */
- (IBAction)confirmBrowsingDataDeletion:(id)sender;

/**
 * Close Clear Browsing Data window.
 * @param sender
 */
- (IBAction)cancelClearBrowsingData:(id)sender;

/**
 * Check whether or not toggle is on and perform actions accordingly.
 * @param sender
 */
- (IBAction)clearBrowsingData_browsingHistory_toggled:(id)sender;

/**
 * Check whether or not toggle is on and perform actions accordingly.
 * @param sender
 */
- (IBAction)clearBrowsingData_cachedFiles_toggled:(id)sender;

/**
 * Check whether or not toggle is on and perform actions accordingly.
 * @param sender
 */
- (IBAction)clearBrowsingData_bookmarks_toggled:(id)sender;

/**
 * Enable/disable private browsing mode.
 * @param sender
 */
- (IBAction)togglePrivateBrowsingMode:(id)sender;

#pragma mark - Various methods
- (void)webView:(WebView *)sender didStartProvisionalLoadForFrame:(WebFrame *)frame;
- (void)webView:(WebView *)sender didReceiveTitle:(NSString *)title forFrame:(WebFrame *)frame;

/**
 * Set the user's homepage with a string.
 * @param Homepage to set
 */
- (void)setHomepageWithString:(NSString *)homepageToSet;

/**
 * Show the settings popup menu when the button is clicked.
 * @param sender
 */
- (void)settingsMenuClicked:(id)sender;

/**
 * Set the user's homepage based on their search engine.
 */
- (void)setHomepageBasedOnSearchEngine;

/**
 * Check experimental configuration settings.
 */
- (void)checkExperimentalConfig;

/**
 * Handle local file webpage titles.
 */
- (void)handleFilePrefix;

/**
 * Handle errors when no webpage title is set.
 */
- (void)handleNoWebpageTitleSet;

@end
