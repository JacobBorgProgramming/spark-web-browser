//
//  SPKGlobalStrings.h
//  Spark
//
//  Copyright (c) 2014-2019 Jonathan Wukitsch / Insleep
//  This code is distributed under the terms and conditions of the GNU license.
//  You may copy, distribute and modify the software as long as you track changes/dates in source files. Any modifications to or software including (via compiler) GPL-licensed code must also be made available under the GPL along with build & install instructions.

#import <Cocoa/Cocoa.h>

#ifndef SPKGlobalStrings_h
#define SPKGlobalStrings_h


/* General strings */

/// Spark version number
NSString *appVersionString = nil;

/// Spark build number
NSString *appBuildString = nil;

/// macOS version number
NSString *operatingSystemVersionString = nil;

/// macOS build number
NSString *operatingSystemBuildString = nil;

/// macOS product name
NSString *macOSProductName = nil;

/// Edited macOS product name
NSString *customMacOSProductName = nil;

/// Current interface style (dark/light)
NSString *interfaceStyle = nil;

/// Spark release channel
NSString *releaseChannel = nil;

/// Edited macOS version string
NSString *editedVersionString = nil;

/// Spark user agent, used when loading webpages
NSString *userAgent = nil;

/// Title used within the titleStatus string
NSString *clippedTitle = nil;

/// Value from NSUserDefaults of lastSession
NSString *lastSession = nil;


/* Appcast URL strings */

/// Stable channel appcast URL
NSString *stableChannelAppcastURL = @"https://spark.insleep.tech/appcast.xml";

/// Nightly channel appcast URL
NSString *nightlyChannelAppcastURL = @"https://spark.insleep.tech/appcast-dev.xml";


/* Search engine query strings */

/// Google search query string
NSString *googleSearchString = @"https://www.google.com/search?q=%@";

/// Bing search query string
NSString *bingSearchString = @"https://www.bing.com/search?q=%@";

/// Yahoo search query string
NSString *yahooSearchString = @"https://search.yahoo.com/search?p=%@";

/// Duck Duck Go search query string
NSString *duckDuckGoSearchString = @"https://www.duckduckgo.com/%@";

/// Custom search query string
NSString *customSearchString = nil;


/* Search engine default homepages */

/// Google default homepage
NSString *googleDefaultURL = @"https://www.google.com/";

/// Bing default homepage
NSString *bingDefaultURL = @"https://www.bing.com/";

/// Yahoo default homepage
NSString *yahooDefaultURL = @"https://www.yahoo.com/";

/// Duck Duck Go default homepage
NSString *duckDuckGoDefaultURL = @"https://www.duckduckgo.com/";


/* Strings for "Help" menu bar item */

/// Spark issue report URL
NSString *appReportIssueURL = @"https://www.github.com/insleep/spark-web-browser/issues/new?title=Describe%20your%20feature%20request%20or%20bug%20report,%20succinctly&body=**Spark%20version:**%20%0A%20**Spark%20build:**%20%0A%20**Release%20channel:**%20%0A%20**macOS%20version:**%20%0A%0A%20**Description:**%20%0A%0A%20**Steps%20to%20reproduce:**%20%0A%0A%20**Expected%20results:**%20%0A%0A%20**Actual%20results:**%20";

/// Spark existing issues URL
NSString *appExistingIssuesURL = @"https://www.github.com/insleep/spark-web-browser/issues/";

/// Spark update release list
NSString *appReleasesURL = @"https://www.github.com/insleep/spark-web-browser/releases/tag/%@/";

/// Spark roadmap URL
NSString *appRoadmapURL = @"https://trello.com/b/TPd5oizl/spark-roadmap/";


/* Strings related to page indicator */

/// Text shown when a secure Spark page is loaded
NSString *secureSparkPageText = @"You are viewing a secure Spark page.";

/// Detail text shown when a secure Spark page is loaded
NSString *secureSparkPageDetailText = @"Your information is private when it is sent to secure Spark pages.";

/// Text shown when a secure site is loaded
NSString *secureHTTPSPageText = @"Your connection to this site is secure.";

/// Text shown when an insecure site is loaded
NSString *insecureHTTPSPageText = @"Your connection to this site is not secure.";

/// Detail text shown when a secure site is loaded
NSString *secureHTTPSPageDetailText = @"Your information (for example, passwords or credit card numbers) is private when it is sent to this site.";

/// Detail text shown when an insecure site is loaded
NSString *insecureHTTPSPageDetailText = @"You should not enter any sensitive information on this site (for example, passwords or credit cards).";


/* Strings used when downloading files */

/// Title shown when an error occurs while downloading a file
NSString *downloadFailedTitle = @"Error Downloading File";

/// Location in which to download a file
NSString *downloadLocation = nil;

/// Download location, edited to remove special characters
NSString *downloadLocationEdited = nil;

/// Bytes received (file download) (formatted)
NSString *bytesReceivedFormatted = nil;

/// Expected length of file being downloaded (formatted)
NSString *expectedLengthFormatted = nil;

/// Filename suggested when downloading files
NSString *suggestedFilename = nil;

/// Suggested filename with ellipsis suffix
NSString *clippedFilename = nil;

/// Directory where downloaded files are stored
NSString *destinationFilename = nil;

/// User home directory
NSString *homeDirectory = nil;


/* Webpage loading-related strings */

/// String used when initiating a search query
NSString *searchString = nil;

/// Current homepage chosen
NSString *homepageString = nil;

/// Initial string to load a webpage from
NSString *urlString = nil;

/// Edited string to load a webpage from
NSString *editedURLString = nil;

/// Spark release channel, including capital letters
NSString *capitalizedReleaseChannel = nil;

/// Spark release channel, not including capital letters
NSString *uncapitalizedReleaseChannel = nil;

/// Current search engine chosen
NSString *searchEngineChosen = nil;

/// Current theme color stored in NSUserDefaults
NSString *colorChosen = nil;

/// NSURL converted to a NSString, used when handling spark:// URL events
NSString *urlToString = nil;

/// Current website URL
NSString *websiteURL = nil;

/// URL for the service that retrieves favicons
NSString *faviconURLString = nil;


/* Strings shown on spark:// pages */

/// Disclaimer shown when user is running a non-supported beta build of macOS 10.13
NSString *betaOperatingSystemDisclaimerText = @"You are running a build of macOS 10.13 High Sierra that is not officially supported by Spark (%@). Please be aware that Spark may function improperly.";


/* Settings panel strings */

// "General" panel

/// Title shown when setting a release channel
NSString *setReleaseChannelTitle = @"Set Release Channel and Restart?";

/// Button text shown when setting a release channel
NSString *setReleaseChannelConfirmBtnText = @"Set Release Channel";

/// Button text shown when setting a release channel
NSString *setReleaseChannelRestartLaterBtnText = @"Restart Later";


// "Search" panel

/// Text shown when the user enters an invalid URL in the custom search engine field
NSString *customSearchEngineInvalidURLText = @"An error occurred: The text you entered is not a valid URL. Please enter a valid URL and try again.";

/// Text shown when the user enters nothing in the custom search engine field
NSString *customSearchEngineEmptyText = @"An error occurred: You did not enter any text. Please enter a valid URL and try again.";


// "Privacy" panel

/// Text shown when a selection error occurs when clearing browsing data
NSString *clearBrowsingDataSelectionErrorText = @"Browsing data could not be cleared. Please open an issue on GitHub for assistance.";

// "Reset" panel

/// Title shown when resetting all settings
NSString *resetAllSettingsTitle = @"Reset Settings and Restart?";

/// Text shown when resetting all settings
NSString *resetAllSettingsDetailText = @"This will reset your startup page, release channel, search engine, bookmarks, and theme. A browser restart is required for this to take effect.";

/// Button text shown when resetting all settings
NSString *resetAllSettingsButtonText = @"Reset All Settings";


// Misc.

/// Generic error title shown throughout the browser
NSString *genericErrorTitle = @"Error";

/// Cancel text shown throughout the browser
NSString *cancelButtonText = @"Cancel";


#endif /* SPKGlobalStrings_h */
