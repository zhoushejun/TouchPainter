//
//  OCMark.h
//  TouchPainter
//
//  Created by zhoushejun on 14-12-7.
//  Copyright (c) 2014年 shejun.zhou. All rights reserved.
//

/**
 @file          OCMark.h
 
 @author		shejun.zhou
 @version		1.0
 @date          2014-12-07
 @copyright     shejun.zhou
 
 @brief         点、线、顶点具体类及协议
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/** 协议 */
@protocol OCMarkDelegate <NSObject>

@property (nonatomic, strong) UIColor *color;                   ///< 颜色
@property (nonatomic, assign) CGFloat size;                     ///< 大小
@property (nonatomic, assign) CGPoint location;                 ///< 位置
@property (nonatomic, readonly) NSUInteger count;               ///< 子节点数
@property (nonatomic, readonly) id<OCMarkDelegate> lastChild;   ///< 最后一个子节点

- (id)copy;
/** 添加子节点 */
- (void)addMark:(id<OCMarkDelegate>)markDelegate;
/** 移除子节点 */
- (void)removeMark:(id<OCMarkDelegate>)markDelegate;
/** 按照 index序号 返回特定子节点 */
- (id<OCMarkDelegate>)childMarkAtIndex:(NSUInteger)index;
/** 绘图 */
- (void)drawWithContext:(CGContextRef)context;

@end

/** 顶点 */
@interface OCVertex : NSObject <OCMarkDelegate, NSCopying>

//@property (nonatomic, assign) CGF
@end

/** 点 */
@interface OCDot : OCVertex

@end

/** 线 */
@interface OCStroke : NSObject <OCMarkDelegate, NSCopying>

@end
