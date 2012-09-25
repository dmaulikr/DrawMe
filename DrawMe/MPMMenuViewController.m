//
//  MPMViewController.m
//  DrawMe
//
//  Created by Matt McInnes on 25/09/12.
//  Copyright (c) 2012 Matt McInnes. All rights reserved.
//

#import "MPMMenuViewController.h"

@interface MPMMenuViewController ()

@end

@implementation MPMMenuViewController

- (void)viewDidLoad
{
    //set view background NTS..Remove @2x when finished
    self.view.backgroundColor = [UIColor colorWithPatternImage:[UIImage imageNamed:@"background@2x.png"]];

    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
