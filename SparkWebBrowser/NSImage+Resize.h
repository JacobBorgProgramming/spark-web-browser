//
//  NSImage+Resize.h
//  Spark
//
//  Created by Jonathan Wukitsch on 7/1/18.
//  Copyright © 2018 Insleep. All rights reserved.
//

#import <Cocoa/Cocoa.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSImage_Resize : NSImage

- (NSImage *)imageResize:(NSImage *)anImage newSize:(NSSize)newSize;

@end

NS_ASSUME_NONNULL_END
