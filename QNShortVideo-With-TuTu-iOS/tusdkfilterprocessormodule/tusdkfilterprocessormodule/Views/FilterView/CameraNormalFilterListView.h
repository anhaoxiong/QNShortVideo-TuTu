//
//  CameraNormalFilterListView.h
//  TuSDKVideoDemo
//
//  Created by bqlin on 2018/11/14.
//  Copyright © 2018年 TuSDK. All rights reserved.
//

#import "HorizontalListView.h"

/**
 相机普通滤镜列表
 */
@interface CameraNormalFilterListView : HorizontalListView

-(instancetype)initWithFrame:(CGRect)frame filterCodes:(NSArray<NSString *> *)filterCodes;

/**
 滤镜码
 */
@property (nonatomic, strong,readonly) NSArray *filterCodes;

/**
 选中的滤镜码
 */
@property (nonatomic, copy) NSString *selectedFilterCode;

/**
 滤镜项点击回调
 */
@property (nonatomic, copy) void (^itemViewTapActionHandler)(CameraNormalFilterListView *filterListView, HorizontalListItemView *selectedItemView, NSString *filterCode);

@end
