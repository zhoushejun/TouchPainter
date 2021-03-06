//
//  OCThumbnailViewController.h
//  TouchPainter
//
//  Created by zhoushejun on 14-12-6.
//  Copyright (c) 2014年 shejun.zhou. All rights reserved.
//

/**
 @file          OCThumbnailViewController.h
 
 @author		shejun.zhou
 @version		1.0
 @date          2014-12-06
 @copyright     shejun.zhou
 
 @brief         缩略图控制器
 */

/**
 @addtogroup    viewMain
 @{
 */

#import <UIKit/UIKit.h>

/** 缩略图控制器 */
@interface OCThumbnailViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate>

@property (nonatomic, strong) UICollectionView *collectionView;

@end

/** @} */
