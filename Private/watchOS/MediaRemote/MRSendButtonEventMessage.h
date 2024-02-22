//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRSendButtonEventMessage_h
#define MRSendButtonEventMessage_h
@import Foundation;

#include "MRProtocolMessage.h"

@interface MRSendButtonEventMessage : MRProtocolMessage

@property (readonly, nonatomic) struct _MRHIDButtonEvent { unsigned int x0; unsigned int x1; BOOL x2; } buttonEvent;

/* instance methods */
- (id)initWithButtonEvent:(struct _MRHIDButtonEvent { unsigned int x0; unsigned int x1; BOOL x2; })event;
- (unsigned long long)type;
@end

#endif /* MRSendButtonEventMessage_h */