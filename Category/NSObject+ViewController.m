//
//  NSObject+ViewController.m
//  JiaYouKa
//
//  Created by apple on 2018/11/20.
//  Copyright © 2018年 陈高磊. All rights reserved.
//

#import "NSObject+ViewController.h"

@implementation NSObject (ViewController)
- (UIViewController *)ViewController{
    
    UIViewController *viewC = [[[UIApplication sharedApplication] keyWindow] rootViewController];
    
    return viewC;
}

@end
