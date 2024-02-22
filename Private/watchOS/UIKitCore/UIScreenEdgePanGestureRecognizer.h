//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIScreenEdgePanGestureRecognizer_h
#define UIScreenEdgePanGestureRecognizer_h
@import Foundation;

#include "UIPanGestureRecognizer.h"
#include "_UISEGestureFeatureDelegate-Protocol.h"
#include "_UISEGestureFeatureSettings.h"
#include "_UISEMuxGestureFeature.h"

@class NSString;

@interface UIScreenEdgePanGestureRecognizer : UIPanGestureRecognizer<_UISEGestureFeatureDelegate> {
  /* instance variables */
  _UISEGestureFeatureSettings *_settings;
  id /* block */ _createFeatureBlock;
  _UISEMuxGestureFeature *_rootFeature;
  unsigned long long _touchedEdges;
  BOOL _recognizesWithoutEdge;
}

@property (nonatomic) unsigned long long edges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)_shouldDefaultToTouches;
+ (BOOL)_shouldSupportStylusTouches;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithTarget:(id)target action:(SEL)action;
- (id)initWithTarget:(id)target action:(SEL)action type:(long long)type options:(unsigned long long)options;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (long long)_touchInterfaceOrientation;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)reset;
- (BOOL)_shouldTryToBeginWithEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)featureDidChangeState:(id)state;
- (double)_bottomEdgeAngleWindow;
- (void)_setBottomEdgeAngleWindow:(double)window;
- (double)_bottomEdgeRegionSize;
- (void)_setBottomEdgeRegionSize:(double)size;
- (double)_edgeRegionSize;
- (void)_setEdgeRegionSize:(double)size;
- (void)_setHysteresis:(double)hysteresis;
- (void)_resetHystersis;
- (void)setMinimumNumberOfTouches:(unsigned long long)touches;
- (unsigned long long)touchedEdges;
- (void)_setRecognizesWithoutEdge:(BOOL)edge;
- (BOOL)_recognizesWithoutEdge;
- (id)debugDictionary;
- (unsigned long long)_rootFeatureState;
@end

#endif /* UIScreenEdgePanGestureRecognizer_h */