//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICActionCancelGestureRecognizer_h
#define PUICActionCancelGestureRecognizer_h
@import Foundation;

#include "UITapGestureRecognizer.h"

@interface PUICActionCancelGestureRecognizer : UITapGestureRecognizer {
  /* instance variables */
  double _startTime;
}

/* instance methods */
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
@end

#endif /* PUICActionCancelGestureRecognizer_h */