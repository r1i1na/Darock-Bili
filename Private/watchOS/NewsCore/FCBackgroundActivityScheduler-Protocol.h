//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCBackgroundActivityScheduler_Protocol_h
#define FCBackgroundActivityScheduler_Protocol_h
@import Foundation;

#include "FCBackgroundActivityScheduler-Protocol.h"

@class NSString;

@protocol FCBackgroundActivityScheduler <NSObject>
/* instance methods */
- (void)scheduleBackgroundTaskRepeatingAtInterval:(double)interval identifier:(id)identifier task:(id /* block */)task;
- (void)cancelRepeatingTaskWithIdentifier:(id)identifier;
- (void)requestBackgroundAppRefreshStartingAfter:(id)after before:(id)before;
@end

#endif /* FCBackgroundActivityScheduler_Protocol_h */