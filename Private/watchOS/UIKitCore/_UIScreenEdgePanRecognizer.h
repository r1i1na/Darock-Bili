//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIScreenEdgePanRecognizer_h
#define _UIScreenEdgePanRecognizer_h
@import Foundation;

#include "UIDelayedAction.h"
#include "_UIScreenEdgePanRecognizerDelegate-Protocol.h"
#include "_UIScreenEdgePanRecognizerSettings.h"

@interface _UIScreenEdgePanRecognizer : NSObject {
  /* instance variables */
  BOOL _hasDoneInitialBackProjectionTest;
  struct CGPoint { double x; double y; } _initialTouchLocation;
  double _initialTouchTimestamp;
  long long _initialInterfaceOrientation;
  unsigned long long _touchedRegion;
  UIDelayedAction *_recognitionTimer;
  struct CGPoint { double x; double y; } _lastTouchLocation;
  double _lastTouchTimestamp;
  long long _lastTouchModifier;
  long long _type;
  int _notifyToken;
}

@property (retain, nonatomic) _UIScreenEdgePanRecognizerSettings *settings;
@property (readonly, nonatomic) BOOL hasRecordedData;
@property (readonly, nonatomic) BOOL useGrapeFlags;
@property (nonatomic) BOOL shouldUseGrapeFlags;
@property (nonatomic) BOOL simulatorWantsEdgeSwipes;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } _lastTouchLocation;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } screenBounds;
@property (nonatomic) unsigned long long targetEdges;
@property (nonatomic) BOOL requiresFlatThumb;
@property (nonatomic) BOOL recognizeAlongEdge;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) unsigned long long recognizedRegion;
@property NSObject<_UIScreenEdgePanRecognizerDelegate> *delegate;

/* instance methods */
- (id)initWithType:(long long)type settings:(id)settings;
- (id)initWithType:(long long)type;
- (void)dealloc;
- (void)reset;
- (void)_setState:(long long)state;
- (long long)_type;
- (unsigned long long)touchedEdgesForInterfaceOrientation:(long long)orientation;
- (void)incorporateTouchSampleAtLocation:(struct CGPoint { double x0; double x1; })location timestamp:(double)timestamp modifier:(long long)modifier region:(unsigned long long)region interfaceOrientation:(long long)orientation forceState:(long long)state;
- (void)_incorporateInitialTouchAtLocation:(struct CGPoint { double x0; double x1; })location timestamp:(double)timestamp modifier:(long long)modifier region:(unsigned long long)region interfaceOrientation:(long long)orientation forceState:(long long)state;
- (void)_incorporateIncrementalSampleAtLocation:(struct CGPoint { double x0; double x1; })location timestamp:(double)timestamp modifier:(long long)modifier region:(unsigned long long)region interfaceOrientation:(long long)orientation forceState:(long long)state;
- (void)_longPressTimerElapsed:(id)elapsed;
- (void)_idleTimerElapsed:(id)elapsed;
- (unsigned long long)_targetEdges;
@end

#endif /* _UIScreenEdgePanRecognizer_h */