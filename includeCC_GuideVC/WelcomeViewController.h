//
//  WelcomeViewController.h
//  ipjsua
//
//  Created by Tempo on 2017/6/27.
//  Copyright © 2017年 Teluu. All rights reserved.
//

#import <UIKit/UIKit.h>



@interface WelcomeViewController : UIViewController

/**
 传入当前的窗口
 */
@property (strong, nonatomic) UIWindow *window;
/**
 传入引导完后的首页（根）视图
 */
@property (strong, nonatomic) UIViewController *homeViewController;
/**
 传入图片名字数组（带名字后缀）
 */
@property (strong, nonatomic) NSArray *imageNameArray;

@end
