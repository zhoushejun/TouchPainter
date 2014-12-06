//
//  Public.h
//  TouchPainter
//
//  Created by zhoushejun on 14-12-6.
//  Copyright (c) 2014年 shejun.zhou. All rights reserved.
//

/**
 @file          Public.h
 
 @author		shejun.zhou
 @version		1.0
 @date          2014-12-06
 @copyright     shejun.zhou
 
 @brief         公共头文件
 @details
 定义公共扩展类、宏、常量、全局函数等
 @pre			所有设备
 @warning		共用文件，谨慎修改
 @bug			未发现
 @todo			待完善
 @note			none
 @remark		none
 */

/**
 @defgroup      viewRoot
 @{
 @}
 */

/**
 @defgroup      viewMain
 @{
 @}
 */

/** @name DEBUG 模式下打印日志和当前行数 */
// @{
#if DEBUG
#define NSLog(FORMAT, ...) fprintf(stderr,"\nfunction:%s line:%d content--->>> \n%s\n", __FUNCTION__, __LINE__, [[NSString stringWithFormat:FORMAT, ##__VA_ARGS__] UTF8String]);
#else
#define NSLog(FORMAT, ...) nil
#endif
// @}end of DEBUG 模式下打印日志和当前行数

/** @name 获取屏幕 宽度、高度 */
// @{
/** @attention 勿删 */
#define SCREEN_WIDTH  ([UIScreen mainScreen].bounds.size.width)
#define SCREEN_HEIGHT ([UIScreen mainScreen].bounds.size.height)
// @}end of 获取屏幕 宽度、高度



#import <Foundation/Foundation.h>

@interface Public : NSObject

@end
