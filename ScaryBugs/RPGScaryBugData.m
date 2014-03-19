//
//  RPGScaryBugData.m
//  ScaryBugs
//
//  Created by Roger Perez on 3/18/14.
//  Copyright (c) 2014 Roger Perez. All rights reserved.
//

#import "RPGScaryBugData.h"

@implementation RPGScaryBugData

@synthesize title = _title;
@synthesize rating = _rating;

- (id)initWithTitle:(NSString *)title rating:(float)rating {
    if((self = [super init])) {
        self.title = title;
        self.rating = rating;
    }
    return self;
}

@end
