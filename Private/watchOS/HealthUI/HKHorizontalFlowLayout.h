//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKHorizontalFlowLayout_h
#define HKHorizontalFlowLayout_h
@import Foundation;

#include "UICollectionViewFlowLayout.h"

@interface HKHorizontalFlowLayout : UICollectionViewFlowLayout

@property (nonatomic) BOOL snapsToItemBoundaries;
@property (nonatomic) BOOL snapsToItemCenters;
@property (nonatomic) double leadingInset;
@property (nonatomic) double trailingInset;

/* class methods */
+ (double)snapToBoundariesDecelerationRate;

/* instance methods */
- (id)init;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })offset withScrollingVelocity:(struct CGPoint { double x0; double x1; })velocity;
@end

#endif /* HKHorizontalFlowLayout_h */