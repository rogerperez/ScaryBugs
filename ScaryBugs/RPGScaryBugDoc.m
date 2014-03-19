//
//  RPGScaryBugDoc.m
//  ScaryBugs
//
//  Created by Roger Perez on 3/18/14.
//  Copyright (c) 2014 Roger Perez. All rights reserved.
//

#import "RPGScaryBugDoc.h"
#import "RPGScaryBugData.h"

@implementation RPGScaryBugDoc

@synthesize data = _data;
@synthesize thumbImage = _thumbImage;
@synthesize fullImage = _fullImage;

- (id)initWithTitle:(NSString *)title rating:(float)rating thumbImage:(UIImage *)thumbImage fullImage:(UIImage *)fullImage {
    if((self = [super init])) {
        self.data = [[RPGScaryBugData alloc] initWithTitle:title rating:rating];
        self.thumbImage = thumbImage;
        self.fullImage = fullImage;
    }
    return self;
}

@end
