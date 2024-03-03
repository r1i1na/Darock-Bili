//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIPassthroughTapGestureRecognizer_h
#define _UIPassthroughTapGestureRecognizer_h
@import Foundation;

#include "UITapGestureRecognizer.h"

@interface _UIPassthroughTapGestureRecognizer : UITapGestureRecognizer {
  /* instance variables */
  struct { unsigned int x :1 commandHeldThroughAllTouchPhases; } _flags;
}

@property (readonly, nonatomic) BOOL tapWasCommandModified;

/* instance methods */
- (id)initWithTarget:(id)target action:(SEL)action;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)setState:(long long)state;
- (void)reset;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
@end

#endif /* _UIPassthroughTapGestureRecognizer_h */