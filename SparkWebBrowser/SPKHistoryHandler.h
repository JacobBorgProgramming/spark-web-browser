//
//  SPKHistoryHandler.h
//  Spark
//
//  Copyright (c) 2014-2019 Jonathan Wukitsch / Insleep
//  This code is distributed under the terms and conditions of the GNU license.
//  You may copy, distribute and modify the software as long as you track changes/dates in source files. Any modifications to or software including (via compiler) GPL-licensed code must also be made available under the GPL along with build & install instructions.

#import <Foundation/Foundation.h>

@interface SPKHistoryHandler : NSObject

/**
 * Add an item to the history array.
 *
 * @param historyURLString URL to add to history array
 * @param historyTitle Title of URL to add to history array
 */
- (void)addHistoryItem:(NSString *)historyURLString withHistoryTitle:(NSString *)historyTitle;

/**
 * Clear history and reload history table view.
 */
- (void)clearHistory;

/**
 * Get an array of current history items.
 *
 * @return A mutable array of all current history items
 */
- (NSMutableArray *)getHistoryItems;

/**
 * Get an array of current history title items.
 *
 * @return A mutable array of all current history title items
 */
- (NSMutableArray *)getHistoryTitleItems;

@end
