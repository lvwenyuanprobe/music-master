//
//  PicView.h
//  music
//
//  Created by Apple on 16/6/1.
//  Copyright © 2016年 Apple. All rights reserved.
//

#import <UIKit/UIKit.h>
/**
 *  方形图片
 */
@interface PicView : UIView
// 方图
@property (nonatomic,strong) UIImageView *coverView;
// 透明图层
@property (nonatomic,strong) UIImageView *bgView;
// 播放数
@property (nonatomic,strong) UIButton *playCountBtn;

@end
