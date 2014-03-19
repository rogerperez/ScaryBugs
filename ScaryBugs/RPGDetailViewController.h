//
//  RPGDetailViewController.h
//  ScaryBugs
//
//  Created by Roger Perez on 3/18/14.
//  Copyright (c) 2014 Roger Perez. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RPGDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
