//
//  ViewController.h
//  Hello_World_Two
//
//  Created by Near on 1/2/14.
//  Copyright (c) 2014 Near. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *userNameText;
@property (weak, nonatomic) IBOutlet UILabel *userNameValue;
@property (weak, nonatomic) IBOutlet UILabel *HelloLabel;

- (IBAction)SayHelloButton:(id)sender;
@end
