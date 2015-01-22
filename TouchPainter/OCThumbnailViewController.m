//
//  OCThumbnailViewController.m
//  TouchPainter
//
//  Created by zhoushejun on 14-12-6.
//  Copyright (c) 2014年 shejun.zhou. All rights reserved.
//

#import "OCThumbnailViewController.h"
#import "OCThumbnailCollectionViewCell.h"

static NSString * const reuseIdentifier = @"Cell";

@interface OCThumbnailViewController ()

@end

@implementation OCThumbnailViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    CGFloat space = 10;
    CGFloat w0 = SCREEN_WIDTH / 4.0 - 4 * space;
    CGFloat h0 = w0;
    UICollectionViewFlowLayout *layout  = [[UICollectionViewFlowLayout alloc] init];
    layout.itemSize = CGSizeMake(w0, h0);
    layout.sectionInset = UIEdgeInsetsMake(space, space, space, space);
    layout.minimumInteritemSpacing = space/4;
    layout.minimumLineSpacing = space;
    
    UICollectionView *cltV = [[UICollectionView alloc] initWithFrame:CGRectMake(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT) collectionViewLayout:layout];
    cltV.dataSource = self;
    cltV.delegate = self;
    cltV.backgroundColor = [UIColor whiteColor];
    cltV.alwaysBounceVertical = YES;
    [cltV registerClass:[OCThumbnailCollectionViewCell class] forCellWithReuseIdentifier:reuseIdentifier];
    self.collectionView = cltV;
    [self.view addSubview:self.collectionView];
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

#pragma mark - UICollectionViewDataSource

- (NSInteger)collectionView:(UICollectionView *)collectionView numberOfItemsInSection:(NSInteger)section{
    return 1000;
}

- (UICollectionViewCell *)collectionView:(UICollectionView *)collectionView cellForItemAtIndexPath:(NSIndexPath *)indexPath{
    OCThumbnailCollectionViewCell *cell = [collectionView dequeueReusableCellWithReuseIdentifier:reuseIdentifier forIndexPath:indexPath];
    cell.backgroundColor = [UIColor grayColor];
    if (indexPath.row %2 == 0) {
        cell.strImagePath = @"http://www.huabian.com/uploadfile/2014/0801/20140801043620346.jpg";
    }else {
        cell.strImagePath = @"http://www.huabian.com/uploadfile/2014/0801/20140801043620510.jpg";
    }
    cell.image = nil;
    cell.image = [UIImage imageNamed:cell.strImagePath];
    return cell;
}

#pragma mark - UICollectionViewDelegate


@end
