//
//  OCCoordinatingController.h
//  TouchPainter
//
//  Created by zhoushejun on 14-12-6.
//  Copyright (c) 2014年 shejun.zhou. All rights reserved.
//

/**
 @file          OCCoordinatingController.h
 
 @author		shejun.zhou
 @version		1.0
 @date          2014-12-06
 @copyright     shejun.zhou
 
 @brief         中介者：用一个对象封装一组对象之间的交互逻辑
 */

/**
 @addtogroup    viewMain
 @{
 */

#import <Foundation/Foundation.h>

@class OCCanvasViewController;
@class OCPaletteViewController;
@class OCThumbnailViewController;

/** 中介者 */
@interface OCCoordinatingController : NSObject

@end

/** @} */