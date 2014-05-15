//
//  ViewController.h
//  Camera App
//
//  Created by Deepak Sattiraju on 15/05/14.
//  Copyright (c) 2014 ___FULLUSERNAME___. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate>
{
    IBOutlet UIImageView *display;
    UIImagePickerController *imagePicker;
    
}

-(IBAction) TakePhoto:(id)sender;
-(IBAction) fromGallery:(id)sender;
@end
