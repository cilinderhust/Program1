//
//  abcDetailViewController.h
//  Program1
//
//  Created by Lin Li on 1/23/14.
//  Copyright (c) 2014 Lin Li. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface abcDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
