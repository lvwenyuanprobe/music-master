//
//  NSString+FYString.h
//  章鱼丸
//
//  Created by Apple on 16/3/15.
//  Copyright © 2016年 Apple. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (FYString)

/** 百度糯米json数据的判断 */
+(NSString *)convertImgStr:(NSString *)imgStr;
+(NSString *)getSpecialId:(NSString *)special;
+(NSString *)getWebUrl:(NSString *)cont;
+(NSString *)getComponentUrl:(NSString *)cont;

/** 时间数据转化 */
+ (NSString *)timeIntervalToMMSSFormat:(NSTimeInterval)interval;

@end
