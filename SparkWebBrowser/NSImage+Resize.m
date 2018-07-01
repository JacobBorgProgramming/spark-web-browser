//
//  NSImage+Resize.m
//  Spark
//
//  Created by Jonathan Wukitsch on 7/1/18.
//  Copyright © 2018 Insleep. All rights reserved.
//

#import "NSImage+Resize.h"

@implementation NSImage_Resize

- (NSImage *)imageResize:(NSImage *)anImage newSize:(NSSize)newSize {
    NSImage *sourceImage = anImage;
    [sourceImage setScalesWhenResized:YES];
    
    // Report an error if the source isn't a valid image
    if (![sourceImage isValid]) {
        NSLog(@"Invalid Image");
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
