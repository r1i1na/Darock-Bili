//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKUpNextCollectionView_h
#define NTKUpNextCollectionView_h
@import Foundation;

#include "UICollectionView.h"

@interface NTKUpNextCollectionView : UICollectionView
/* instance methods */
- (void)crownInputSequencerWillBecomeIdle:(id)idle withCrownVelocity:(double)velocity targetOffset:(inout double *)offset;
- (BOOL)crownInputSequencer:(id)sequencer shouldRubberBandAtBoundary:(long long)boundary;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_visibleBounds;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
@end

#endif /* NTKUpNextCollectionView_h */