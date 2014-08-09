//
//  SetPaintingBgViewController.h
//  MagicPaint
//
//  Created by Robin W on 14-4-3.
//  Copyright (c) 2014年 Robin W. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MLImageCrop.h"
@class KKSPaintingView;
@class KKSPaintingManager;
@interface SetPaintingBgViewController : UIViewController<UITextFieldDelegate,UINavigationControllerDelegate,UIImagePickerControllerDelegate,MLImageCropDelegate>

@property (weak, nonatomic) IBOutlet UITextField *paintWidth;
@property (weak, nonatomic) IBOutlet UITextField *paintHeight;
- (IBAction)setBg:(id)sender;
@property (strong, nonatomic) KKSPaintingView *drawerView;
@property (strong,nonatomic)KKSPaintingManager *paintingManager;
@property(nonatomic,strong)UIImage *bgImage;
- (IBAction)setBgImg:(id)sender;
@property (weak, nonatomic) IBOutlet UIImageView *bgImgView;
@end
