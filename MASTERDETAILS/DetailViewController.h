//
//  DetailViewController.h
//  MASTERDETAILS
//
//  Created by kishore kumar nagalla on 13/07/17.
//  Copyright © 2017 Pyramid SoftSol. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) NSDate *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

