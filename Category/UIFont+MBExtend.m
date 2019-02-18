//
//  UIFont+MBExtend.m
//  SocketRocket
//
//  Created by July Cattery on 17/4/20.
//  Copyright © 2017年 loovee. All rights reserved.
//

#import "UIFont+MBExtend.h"
#import <objc/runtime.h>
#define MyUIScreen  375
@implementation UIFont (MBExtend)

+ (UIFont *)fontWithFontName:(NSString *)name size:(CGFloat)size {
    if ([[UIDevice currentDevice].systemVersion floatValue] >= 9.0) {
        return [UIFont fontWithName:name size:size];
    }else {
        return [UIFont systemFontOfSize:size];
    }
}
-(void)load {
    // 获取替换后的类方法
    Method newMethod = class_getClassMethod([self class], @selector(adjustFont:));
    // 获取替换前的类方法
    Method method = class_getClassMethod([self class], @selector(systemFontOfSize:));
    // 然后交换类方法，交换两个方法的IMP指针，(IMP代表了方法的具体的实现）
    method_exchangeImplementations(newMethod, method);
}

+ (UIFont *)adjustFont:(CGFloat)fontSize {
    UIFont *newFont = nil;
    newFont = [UIFont adjustFont:fontSize * [UIScreen mainScreen].bounds.size.width/MyUIScreen];
    return newFont;
}



@end
