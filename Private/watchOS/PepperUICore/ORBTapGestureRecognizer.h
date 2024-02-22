//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef ORBTapGestureRecognizer_h
#define ORBTapGestureRecognizer_h
@import Foundation;

#include "UIGestureRecognizer.h"
#include "ORBTapGestureRecognizerDelegate-Protocol.h"
#include "PUICDelayedBlock.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class CSLSSuspendSystemGestureAssertion, NSArray, NSSet, NSString, UIEvent;

@interface ORBTapGestureRecognizer : UIGestureRecognizer<UIGestureRecognizerDelegate> {
  /* instance variables */
  float _progressMin;
  float _progressLatch;
  float _progressMax;
  BOOL _isUsingLongPressGesture;
  BOOL _isUsingLongPressTwoStepGesture;
  BOOL _isWaitingForTouchUp;
  float _longPressStartDelay;
  float _longPressUpdateInterval;
  float _longPressDuration;
  float _longPressOverheldDuration;
  PUICDelayedBlock *_longPressProgressTimer;
  double _longPressStartTime;
  struct CGPoint { double x; double y; } _touchStartLocation;
  UIEvent *_longPressTouchesBeganEvent;
  NSArray *_longPressGesturesToCancel;
  NSSet *_longPressTouches;
  CSLSSuspendSystemGestureAssertion *_suspendSystemGestureAssertion;
}

@property (readonly, nonatomic) float progress;
@property (readonly, nonatomic) BOOL hasLatched;
@property (weak, nonatomic) NSObject<ORBTapGestureRecognizerDelegate> *orbDelegate;
@property (nonatomic) BOOL acceptLongPress;
@property (nonatomic) BOOL shouldCancelOtherGestureRecognizers;
@property (nonatomic) BOOL shouldAllowTouchMove;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithTarget:(id)target action:(SEL)action;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (BOOL)canPreventGestureRecognizer:(id)recognizer;
- (BOOL)canBePreventedByGestureRecognizer:(id)recognizer;
- (BOOL)isEnabled;
- (void)reset;
- (void)_updateWithTouches:(id)touches event:(id)event;
- (void)_updateWithProgress:(float)progress;
- (void)_cleanup;
- (void)_takeSystemGestureAssertionIfNecessary;
- (void)_releaseSystemGestureAssertionIfNecessary;
- (void)_cancelOtherGestureRecognizersForTouches:(id)touches event:(id)event;
- (id)_gestureRecognizersForTouches:(id)touches;
- (BOOL)_touchMovedTooFarFromStartPoint:(id)point;
- (void)_updateLongPressForTouchesBegan:(id)began event:(id)event;
- (void)_updateTwoStepLongPressForTouchesEnded:(id)ended;
- (void)_updateLongPressForOverheldTouch;
- (float)_longPressProgress;
- (void)_scheduleLongPressProgressTimerWithDelay:(double)delay;
- (BOOL)_allowsTouchLocation:(struct CGPoint { double x0; double x1; })location;
- (void)_clearLongPressProgressTimer;
- (void)_cleanupLongPressGesture;
@end

#endif /* ORBTapGestureRecognizer_h */