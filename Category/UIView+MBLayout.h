//
//  UIView+MBLayout.h
//  SocketRocket
//
//  Created by July Cattery on 17/4/20.
//  Copyright © 2017年 loovee. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (MBLayout)

@property (nonatomic, assign) CGFloat top;

@property (nonatomic, assign) CGFloat bottom;

@property (nonatomic, assign) CGFloat left;

@property (nonatomic, assign) CGFloat right;

@property (nonatomic, assign) CGFloat width;

@property (nonatomic, assign) CGFloat height;

@property (nonatomic, assign) CGFloat centerX;

@property (nonatomic, assign) CGFloat centerY;

@property (nonatomic, assign) CGSize size;

@property (nonatomic, assign) CGPoint origin;

///圆角
- (void)setCornerWithRadius:(CGFloat)radius;
///圆角加边框
- (void)setCornerWithRadius:(CGFloat)radius borderWidth:(CGFloat)width borderColor:(UIColor *)color;
- (UIViewController *)viewController;
-(void)addShadowColor:(UIColor *)color offset:(CGSize)offsert;
- (void)addShadowColor:(UIColor *)color;
@end
