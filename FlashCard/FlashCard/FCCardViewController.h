//
//  FCCardViewController.h
//  FlashCard
//
//  Created by Near on 1/6/14.
//  Copyright (c) 2014 Near. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FCCardViewController : UIViewController
@property(nonatomic,strong) IBOutlet UILabel* cardLabel;
@property(nonatomic,strong) IBOutlet UIButton* answer1Button;
@property(nonatomic,strong) IBOutlet UIButton* answer2Button;
@property(nonatomic,strong) IBOutlet UIButton* answer3Button;


-(void)nextCard;
-(IBAction)answerCardTouched:(id)sender;


@end
