//
//  OCThumbnailCollectionViewCell.m
//  TouchPainter
//
//  Created by zhoushejun on 15-1-22.
//  Copyright (c) 2015年 shejun.zhou. All rights reserved.
//

#import "OCThumbnailCollectionViewCell.h"

@implementation OCThumbnailCollectionViewCell

- (UIImage *)image{
    if (!_imageReal) {
//        _imageReal = [[UIImage alloc] initWithContentsOfFile:self.strImagePath];
        _imageReal = [[UIImage alloc] initWithData:[NSData dataWithContentsOfURL:[NSURL URLWithString:self.strImagePath]]];
    }
    return _image;
}

- (void)drawRect:(CGRect)rect{
    if (!self.imageReal) {
        if (!self.loadingThreadHasLaunched) {
            [self performSelectorInBackground:@selector(forwardImageLoadingThread) withObject:nil];
            self.loadingThreadHasLaunched = YES;
        }
    }else {
        [self.imageReal drawInRect:rect];
    }
}

- (void)forwardImageLoadingThread{
    [self image];
    [self performSelectorInBackground:@selector(setNeedsDisplay) withObject:nil];
}

@end
