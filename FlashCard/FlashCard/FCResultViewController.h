//
//  FCResultViewController.h
//  FlashCard
//
//  Created by Near on 1/6/14.
//  Copyright (c) 2014 Near. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FCResultViewController : UIViewController{
    UILabel* numRightLabel;
    UILabel* numWronglabel;
}

@property(nonatomic,strong) IBOutlet UILabel* numRightLabel;
@property(nonatomic,strong) IBOutlet UILabel* numWrongLabel;

-(IBAction)startAgain:(id)sender;

@end
