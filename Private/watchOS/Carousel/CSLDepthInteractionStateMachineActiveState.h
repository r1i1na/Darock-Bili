//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLDepthInteractionStateMachineActiveState_h
#define CSLDepthInteractionStateMachineActiveState_h
@import Foundation;

#include "CSLDepthInteractionStateMachineState.h"

@interface CSLDepthInteractionStateMachineActiveState : CSLDepthInteractionStateMachineState
/* instance methods */
- (void)depthSessionEnded:(id)ended;
- (void)context:(id)context didUpdateModalAppSession:(id)session fromState:(long long)state toState:(long long)state;
- (long long)mode;
- (BOOL)isTransitionState;
- (long long)depthInteractionState;
@end

#endif /* CSLDepthInteractionStateMachineActiveState_h */