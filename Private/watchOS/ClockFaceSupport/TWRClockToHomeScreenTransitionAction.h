//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef TWRClockToHomeScreenTransitionAction_h
#define TWRClockToHomeScreenTransitionAction_h
@import Foundation;

#include "BSAction.h"

@interface TWRClockToHomeScreenTransitionAction : BSAction

@property (readonly, nonatomic) BOOL presenting;

/* instance methods */
- (id)initWithPresenting:(BOOL)presenting responder:(id)responder;
@end

#endif /* TWRClockToHomeScreenTransitionAction_h */