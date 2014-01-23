//
//  abcMasterViewController.h
//  Program1
//
//  Created by Lin Li on 1/23/14.
//  Copyright (c) 2014 Lin Li. All rights reserved.
//

#import <UIKit/UIKit.h>

@class abcDetailViewController;

@interface abcMasterViewController : UITableViewController

@property (strong, nonatomic) abcDetailViewController *detailViewController;

@end
