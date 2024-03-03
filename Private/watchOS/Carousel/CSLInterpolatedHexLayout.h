//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLInterpolatedHexLayout_h
#define CSLInterpolatedHexLayout_h
@import Foundation;

#include "CSLHexLayout.h"
#include "CSLHexLayout.h"

@interface CSLInterpolatedHexLayout : CSLHexLayout

@property (nonatomic) BOOL startContentOffsetInvarient;
@property (nonatomic) BOOL endContentOffsetInvarient;
@property (readonly, nonatomic) CSLHexLayout *startLayout;
@property (readonly, nonatomic) CSLHexLayout *endLayout;

/* instance methods */
- (id)initWithStartLayout:(id)layout endLayout:(id)layout;
- (id)init;
- (id)description;
- (void)setRubberbandVector:;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })offset;
- (void)setTargetHex:(struct Hex { int x0; int x1; })hex;
- (void)updateWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (struct { double x0; })layoutAttributesForItemAtHex:(struct Hex { int x0; int x1; })hex;
- (struct Hex { int x0; int x1; })hexAtPoint:(struct CGPoint { double x0; double x1; })point;
- (BOOL)isStartContentOffsetInvarient;
- (BOOL)isEndContentOffsetInvarient;
@end

#endif /* CSLInterpolatedHexLayout_h */