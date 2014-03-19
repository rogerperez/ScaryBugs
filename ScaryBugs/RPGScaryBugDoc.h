//
//  RPGScaryBugDoc.h
//  ScaryBugs
//
//  Created by Roger Perez on 3/18/14.
//  Copyright (c) 2014 Roger Perez. All rights reserved.
//

#import <Foundation/Foundation.h>

@class RPGScaryBugData;

@interface RPGScaryBugDoc : NSObject

@property (strong) RPGScaryBugData *data;
@property (strong) UIImage *thumbImage;
@property (strong) UIImage *fullImage;

- (id)initWithTitle:(NSString *)title rating:(float)rating thumbImage:(UIImage *)thumbImage fullImage:(UIImage *)fullImage;

@end
