//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 114.2.2.0.0
//
#ifndef WAGUIPrimaryActionDeactiveAnimation_h
#define WAGUIPrimaryActionDeactiveAnimation_h
@import Foundation;

#include "WAGUIClientSideAnimation.h"
#include "WAGUISpringClientSideAnimation.h"

@class CAMediaTimingFunction;

@interface WAGUIPrimaryActionDeactiveAnimation : NSObject {
  /* instance variables */
  WAGUIClientSideAnimation *_animation;
  CAMediaTimingFunction *_easeTimingFunction;
  WAGUISpringClientSideAnimation *_springAnimation;
}

@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ applier;
@property (nonatomic) double velocity;
@property (readonly, nonatomic) BOOL isActive;

/* class methods */
+ (double)duration;

/* instance methods */
- (id)init;
- (void)start;
- (void)stop;
- (void)_handleAnimationProgress:(double)progress;
@end

#endif /* WAGUIPrimaryActionDeactiveAnimation_h */