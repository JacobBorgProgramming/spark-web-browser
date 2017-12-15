//
//  SPKBookmarkHandler.h
//  Spark
//
//  Copyright (c) 2014-2018 Jonathan Wukitsch / Insleep
//  This code is distributed under the terms and conditions of the GNU license.
//  You may copy, distribute and modify the software as long as you track changes/dates in source files. Any modifications to or software including (via compiler) GPL-licensed code must also be made available under the GPL along with build & install instructions.

#import <Foundation/Foundation.h>

@interface SPKBookmarkHandler : NSObject

/**
 * Add an item to the bookmarks array.
 *
 * @param bookmarkURL URL to add to bookmarks array
 * @param bookmarkTitle Title of URL to add to bookmarks array
 * @param bookmarkIcon Favicon of URL to add to bookmarks array
 */
- (void)addBookmark:(NSString *)bookmarkURL withBookmarkTitle:(NSString *)bookmarkTitle withBookmarkIcon:(NSImage *)bookmarkIcon;

/**
 * Clear bookmarks and repopulate "Bookmarks" menu.
 */
- (void)clearBookmarks;

/**
 * Do nothing. This method is in AppDelegate.m.
 */
- (void)openBookmark:(id)sender;

@end
