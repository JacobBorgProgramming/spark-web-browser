//
//  NSImage+Resize.m
//  Spark
//
//  Copyright (c) 2014-2018 Jonathan Wukitsch / Insleep
//  This code is distributed under the terms and conditions of the GNU license.
//  You may copy, distribute and modify the software as long as you track changes/dates in source files. Any modifications to or software including (via compiler) GPL-licensed code must also be made available under the GPL along with build & install instructions.

#import "NSImage+Resize.h"

@implementation NSImage(resize)

- (NSImage *)imageResize:(NSImage *)anImage newSize:(NSSize)newSize {
    NSImage *sourceImage = anImage;
    [sourceImage setScalesWhenResized:YES];
    
    // Report an error if the source isn't a valid image
    if (![sourceImage isValid]) {
        NSLog(@"NSImageResize encountered an error: Invalid image");
    } else {
        NSImage *smallImage = [[NSImage alloc] initWithSize: newSize];
        [smallImage lockFocus];
        [sourceImage setSize: newSize];
        [[NSGraphicsContext currentContext] setImageInterpolation: NSImageInterpolationHigh];
        [sourceImage drawAtPoint:NSZeroPoint fromRect: CGRectMake(0, 0, 16, 16) operation: NSCompositeCopy fraction:1.0];
        [smallImage unlockFocus];
        return smallImage;
    }
    return nil;
}

@end
