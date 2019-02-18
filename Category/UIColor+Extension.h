//
//  AppDelegate.m
//  JiaYouKa
//
//  Created by 陈高磊 on 2018/11/6.
//  Copyright © 2018年 陈高磊. All rights reserved.
//


#import <UIKit/UIKit.h>

#define RGBA(r, g, b, a) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]
#define RGB(r, g, b) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:1]

@interface UIColor (Extension)

+(UIColor* )colorWithHexString:(NSString *)hexString;
+ (CAGradientLayer *)setGradualChangingColor:(UIView *)view fromColor:(NSString *)fromHexColorStr toColor:(NSString *)toHexColorStr;

@end
