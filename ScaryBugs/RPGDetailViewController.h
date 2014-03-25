//
//  RPGDetailViewController.h
//  ScaryBugs
//
//  Created by Roger Perez on 3/18/14.
//  Copyright (c) 2014 Roger Perez. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RPGRateView.h"

@interface RPGDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UITextField *titleField;
@property (weak, nonatomic) IBOutlet UIImageView *imageView;
@property (weak, nonatomic) IBOutlet UIView *rateView;

@property (weak, nonatomic) IBOutlet UIButton *addPictureTapped;
@end
