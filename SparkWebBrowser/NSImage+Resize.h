//
//  NSImage+Resize.h
//  Spark
//
//  Created by Jonathan Wukitsch on 7/1/18.
//  Copyright © 2018 Insleep. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSImage(resize)

- (NSImage *)imageResize:(NSImage *)anImage newSize:(NSSize)newSize;

@end
