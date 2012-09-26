//
//  MPMDrawingViewController.h
//  DrawMe
//
//  Created by Matt McInnes on 25/09/12.
//  Copyright (c) 2012 Matt McInnes. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MPMDrawingViewController : UIViewController <UIActionSheetDelegate> {
    
    CGPoint lastPoint;
    CGFloat red;
    CGFloat green;
    CGFloat blue;
    CGFloat brush;
    CGFloat opacity;
    BOOL mouseSwiped;
    
}

@property (weak, nonatomic) IBOutlet UIImageView *mainImage;
@property (weak, nonatomic) IBOutlet UIImageView *tempDrawImage;
@property (strong, nonatomic) IBOutlet UIButton *green;
@property (strong, nonatomic) IBOutlet UIButton *orange;
@property (strong, nonatomic) IBOutlet UIButton *black;
@property (strong, nonatomic) IBOutlet UIButton *grey;
@property (strong, nonatomic) IBOutlet UIButton *red;
@property (strong, nonatomic) IBOutlet UIButton *blue;
@property (strong, nonatomic) IBOutlet UIButton *lightgreen;
@property (strong, nonatomic) IBOutlet UIButton *lightblue;
@property (strong, nonatomic) IBOutlet UIButton *brown;
@property (strong, nonatomic) IBOutlet UIButton *rubber;



- (void)motionBegan:(UIEventSubtype)motion withEvent:(UIEvent *)event;
- (void)motionCancelled:(UIEventSubtype)motion withEvent:(UIEvent *)event;
- (void)motionEnded:(UIEventSubtype)motion withEvent:(UIEvent *)event;


- (IBAction)pencilPressed:(id)sender;
- (IBAction)eraserPressed:(id)sender;
- (IBAction)reset:(id)sender;
- (IBAction)settings:(id)sender;
- (IBAction)save:(id)sender;
- (IBAction)hideButtons:(id)sender;
- (IBAction)showButtons:(id)sender;

- (IBAction)savetodocs:(id)sender;
- (IBAction)uploadit:(id)sender;
- (IBAction)edit:(id)sender;
- (IBAction)backtohome:(id)sender;

@property (strong, nonatomic) IBOutlet UILabel *label;

@end
