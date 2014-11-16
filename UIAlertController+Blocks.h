//
//  UIAlertController+Blocks.h
//  UIAlertControllerBlocks
//
//  Created by Ryan Maxwell on 11/09/14.
//  Copyright (c) 2014 Ryan Maxwell. All rights reserved.
//

@import UIKit;

extern NSInteger const UIAlertControllerCancelActionIndex;
extern NSInteger const UIAlertControllerDestructiveActionIndex;
extern NSInteger const UIAlertControllerFirstOtherActionIndex;

typedef void (^UIAlertControllerCompletionBlock) (UIAlertController *controller, UIAlertAction *action, NSInteger actionIndex);

@interface UIAlertController (Blocks)

+ (instancetype)showInViewController:(UIViewController *)viewController
                           withTitle:(NSString *)title
                             message:(NSString *)message
                      preferredStyle:(UIAlertControllerStyle)preferredStyle
                   cancelButtonTitle:(NSString *)cancelButtonTitle
              destructiveButtonTitle:(NSString *)destructiveButtonTitle
                   otherButtonTitles:(NSArray *)otherButtonTitles
                            tapBlock:(UIAlertControllerCompletionBlock)tapBlock;

+ (instancetype)showAlertInViewController:(UIViewController *)viewController
                                withTitle:(NSString *)title
                                  message:(NSString *)message
                        cancelButtonTitle:(NSString *)cancelButtonTitle
                   destructiveButtonTitle:(NSString *)destructiveButtonTitle
                        otherButtonTitles:(NSArray *)otherButtonTitles
                                 tapBlock:(UIAlertControllerCompletionBlock)tapBlock;

+ (instancetype)showActionSheetInViewController:(UIViewController *)viewController
                                      withTitle:(NSString *)title
                                        message:(NSString *)message
                              cancelButtonTitle:(NSString *)cancelButtonTitle
                         destructiveButtonTitle:(NSString *)destructiveButtonTitle
                              otherButtonTitles:(NSArray *)otherButtonTitles
                                       tapBlock:(UIAlertControllerCompletionBlock)tapBlock;

@end