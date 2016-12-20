//
//  FYMoreCategoryCell.h
//  music
//
//  Created by Apple on 16/5/26.
//  Copyright © 2016年 Apple. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FYMoreCategoryCell : UITableViewCell

@property (nonatomic,strong) UIButton *coverBtn;
@property (nonatomic,strong) UILabel *titleLb;
// 作者
@property (nonatomic,strong) UILabel *introLb;
// 播放次数
@property (nonatomic,strong) UILabel *playsLb;
// 集数
@property (nonatomic,strong) UILabel *tracksLb;

@end
