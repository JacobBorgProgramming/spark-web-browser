//
//  SPKBookmarkHandler.m
//  Spark
//
//  Copyright (c) 2014-2019 Jonathan Wukitsch / Insleep
//  This code is distributed under the terms and conditions of the GNU license.
//  You may copy, distribute and modify the software as long as you track changes/dates in source files. Any modifications to or software including (via compiler) GPL-licensed code must also be made available under the GPL along with build & install instructions.

#import "SPKBookmarkHandler.h"
#import "AppDelegate.h"
#import "NSImage+Resize.h"

@implementation SPKBookmarkHandler

- (void)addBookmark:(NSString *)bookmarkURL withBookmarkTitle:(NSString *)bookmarkTitle withBookmarkIcon:(NSImage *)bookmarkIcon {
    
    AppDelegate *appDelegate = (AppDelegate *)[[NSApplication sharedApplication] delegate];
    
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    NSMutableArray *currentBookmarksArray = nil;
    NSMutableArray *currentBookmarkTitlesArray = nil;
    NSMutableArray *currentBookmarkIconsArray = nil;
    NSData *bookmarkIconData = nil;
    
    if([defaults objectForKey:@"storedBookmarksArray"] == nil) {
        
        NSLog(@"SPKBookmarkHandler: StoredBookmarksArray = nil");
        
        if(appDelegate.faviconImage.image == [NSImage imageNamed:@"favicon.ico"]) { // Check whether or not the current page is a spark: page
            NSLog(@"SPKBookmarkHandler: Spark verified page detected - setting bookmarkIconData to avoid image scaling issues");
            bookmarkIconData = [[NSImage imageNamed:@"SparkFavicon"] TIFFRepresentation];
        } else {
            bookmarkIconData = [[bookmarkIcon imageResize:bookmarkIcon newSize:CGSizeMake(16, 16)] TIFFRepresentation];
        }
        
        currentBookmarksArray = [NSMutableArray array];
        currentBookmarkTitlesArray = [NSMutableArray array];
        currentBookmarkIconsArray = [NSMutableArray array];
        
        [currentBookmarksArray addObject:bookmarkURL];
        [currentBookmarkTitlesArray addObject:bookmarkTitle];
        [currentBookmarkIconsArray addObject:bookmarkIconData];
        
        [defaults setObject:currentBookmarksArray forKey:@"storedBookmarksArray"];
        [defaults setObject:currentBookmarkTitlesArray forKey:@"storedBookmarkTitlesArray"];
        [defaults setObject:currentBookmarkIconsArray forKey:@"storedBookmarkIconsArray"];
        
        NSMenuItem *bookmarkItem = [appDelegate.menuBarBookmarks addItemWithTitle:bookmarkTitle action:@selector(openBookmark:) keyEquivalent:@""];
        bookmarkItem.image = [[NSImage alloc] initWithData:bookmarkIconData];
        
        for(id bookmarkTitle in currentBookmarkTitlesArray) {
            int index = (int)[currentBookmarkTitlesArray indexOfObject:bookmarkTitle];
            [bookmarkItem setRepresentedObject:[NSNumber numberWithInt:index]];
        }
        
    } else {
        
        NSLog(@"SPKBookmarkHandler: StoredBookmarksArray exists");
        
        if(appDelegate.faviconImage.image == [NSImage imageNamed:@"favicon.ico"]) { // Check whether or not the current page is a spark: page
            NSLog(@"SPKBookmarkHandler: Spark verified page detected - setting bookmarkIconData to avoid image scaling issues");
            bookmarkIconData = [[NSImage imageNamed:@"SparkFavicon"] TIFFRepresentation];
        } else {
            bookmarkIconData = [[bookmarkIcon imageResize:bookmarkIcon newSize:CGSizeMake(16, 16)] TIFFRepresentation];
        }
        
        currentBookmarksArray = [[defaults objectForKey:@"storedBookmarksArray"] mutableCopy];
        currentBookmarkTitlesArray = [[defaults objectForKey:@"storedBookmarkTitlesArray"] mutableCopy];
        currentBookmarkIconsArray = [[defaults objectForKey:@"storedBookmarkIconsArray"] mutableCopy];
        
        [currentBookmarksArray addObject:bookmarkURL];
        [currentBookmarkTitlesArray addObject:bookmarkTitle];
        [currentBookmarkIconsArray addObject:bookmarkIconData];
        
        [defaults setObject:currentBookmarksArray forKey:@"storedBookmarksArray"];
        [defaults setObject:currentBookmarkTitlesArray forKey:@"storedBookmarkTitlesArray"];
        [defaults setObject:currentBookmarkIconsArray forKey:@"storedBookmarkIconsArray"];
        
        NSMenuItem *bookmarkItem = [appDelegate.menuBarBookmarks addItemWithTitle:bookmarkTitle action:@selector(openBookmark:) keyEquivalent:@""];
        bookmarkItem.image = [[NSImage alloc] initWithData:bookmarkIconData];
        
        for(id bookmarkTitle in currentBookmarkTitlesArray) {
            int index = (int)[currentBookmarkTitlesArray indexOfObject:bookmarkTitle];
            [bookmarkItem setRepresentedObject:[NSNumber numberWithInt:index]];
        }
    }
}

- (void)clearBookmarks {
    
    AppDelegate *appDelegate = (AppDelegate *)[[NSApplication sharedApplication] delegate];
    
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    
    NSLog(@"SPKBookmarkHandler: Clearing bookmarks...");
    
    [defaults setObject:nil forKey:@"storedBookmarksArray"];
    [defaults setObject:nil forKey:@"storedBookmarkTitlesArray"];
    
    [appDelegate.menuBarBookmarks removeAllItems];
    
    NSMenuItem *bookmarkItem = [appDelegate.menuBarBookmarks addItemWithTitle:@"Bookmark This Page..." action:@selector(addBookmark:) keyEquivalent:@"d"];
    [bookmarkItem setKeyEquivalentModifierMask: NSCommandKeyMask];
    
    [appDelegate.menuBarBookmarks addItem:[NSMenuItem separatorItem]];
    
    NSLog(@"SPKBookmarkHandler: Bookmarks cleared.");
}

- (void)openBookmark:(id)sender {
    // Do nothing - this method is in AppDelegate.m. This is only here to silence Xcode warnings.
}

@end
