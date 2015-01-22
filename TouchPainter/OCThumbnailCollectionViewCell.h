//
//  OCThumbnailCollectionViewCell.h
//  TouchPainter
//
//  Created by zhoushejun on 15-1-22.
//  Copyright (c) 2015年 shejun.zhou. All rights reserved.
//

/**
 @file          OCThumbnailCollectionViewCell.h
 
 @author		shejun.zhou
 @version		1.0
 @date          2015-01-22
 @copyright     shejun.zhou
 
 @brief         缩略图cell，懒加载
 */

#import <UIKit/UIKit.h>

@interface OCThumbnailCollectionViewCell : UICollectionViewCell

@property (nonatomic, strong) NSString *strImagePath;
@property (nonatomic, strong) UIImage *image;
@property (nonatomic, strong) UIImage *imageReal;
@property (nonatomic) BOOL loadingThreadHasLaunched;

- (void)forwardImageLoadingThread;

@end
