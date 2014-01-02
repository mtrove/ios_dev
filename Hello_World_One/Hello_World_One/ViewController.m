//
//  ViewController.m
//  Hello_World_One
//
//  Created by Near on 1/2/14.
//  Copyright (c) 2014 Near. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

//@property (weak, nonatomic) IBOutlet UILabel* LabelHelloWorld;

@end

@implementation ViewController
- (IBAction)SayHelloButton:(id)sender {
    self.LabelHelloWorld.hidden=NO;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
