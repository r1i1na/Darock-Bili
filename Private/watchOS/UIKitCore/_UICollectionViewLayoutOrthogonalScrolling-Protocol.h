//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UICollectionViewLayoutOrthogonalScrolling_Protocol_h
#define _UICollectionViewLayoutOrthogonalScrolling_Protocol_h
@import Foundation;

@protocol _UICollectionViewLayoutOrthogonalScrolling <NSObject>
/* instance methods */
- (BOOL)_hasOrthogonalScrollingSections;
- (id)_orthogonalScrollingSections;
- (void)_setOffset:(struct CGPoint { double x0; double x1; })offset forOrthogonalScrollingSection:(long long)section;
- (struct CGPoint { double x0; double x1; })_offsetForOrthogonalScrollingSection:(long long)section;
- (unsigned long long)_orthogonalScrollingAxis;
- (double)_orthogonalScrollingDecelerationRateForSection:(long long)section;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_orthogonalScrollingLayoutRectForSection:(long long)section;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_orthogonalScrollingContentRectForSection:(long long)section;
- (BOOL)_shouldOrthogonalScrollingSectionSupplementaryScrollWithContentForIndexPath:(id)path elementKind:(id)kind;
- (BOOL)_shouldOrthogonalScrollingSectionDecorationScrollWithContentForIndexPath:(id)path elementKind:(id)kind;
- (id)_extendedAttributesQueryIncludingOrthogonalScrollingRegions:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })regions;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_orthogonalFrameWithOffsetElidedForItemWithLayoutAttributes:(id)attributes frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (BOOL)_orthogonalScrollingElementShouldAppearAboveForAttributes:(id)attributes;
- (BOOL)_orthogonalScrollingElementShouldAppearBelowForAttributes:(id)attributes;
@end

#endif /* _UICollectionViewLayoutOrthogonalScrolling_Protocol_h */