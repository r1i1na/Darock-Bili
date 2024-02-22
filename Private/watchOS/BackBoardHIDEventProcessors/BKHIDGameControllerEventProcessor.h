//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 598.10.0.0.0
//
#ifndef BKHIDGameControllerEventProcessor_h
#define BKHIDGameControllerEventProcessor_h
@import Foundation;

#include "BKHIDEventProcessor-Protocol.h"

@class NSString;

@interface BKHIDGameControllerEventProcessor : NSObject<BKHIDEventProcessor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (long long)processEvent:(inout struct __IOHIDEvent * *)event sender:(id)sender dispatcher:(id)dispatcher;
@end

#endif /* BKHIDGameControllerEventProcessor_h */