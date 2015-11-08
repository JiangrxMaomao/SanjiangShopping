//
//  HotWordsView.h
//  SanjiangShop
//
//  Created by 薛纪杰 on 15/8/31.
//  Copyright (c) 2015年 薛纪杰. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HotWordsDataModel;

@interface HotWordsView : UIScrollView
@property (strong, nonatomic) HotWordsDataModel *dataModel;
@property (strong, nonatomic) void (^hotButtonClickBlock)(UIButton *sender);
@end
