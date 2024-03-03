//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 13.0.0.0.0
//
#ifndef SCRTaskScheduler_h
#define SCRTaskScheduler_h
@import Foundation;

#include "SCRActivityScheduler.h"
#include "SCRTaskSchedulerDelegate-Protocol.h"

@class NSMutableDictionary;

@interface SCRTaskScheduler : NSObject {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  SCRActivityScheduler *_activityScheduler;
  NSMutableDictionary *_activityForTask;
}

@property (weak, nonatomic) NSObject<SCRTaskSchedulerDelegate> *delegate;

/* instance methods */
- (id)initWithTargetQueue:(id)queue;
- (void)scheduleTaskWithIdentifier:(id)identifier withConfiguration:(id)configuration;
- (void)cancelTaskWithIdentifier:(id)identifier;
- (void)completeTaskWithIdentifier:(id)identifier;
- (void)_performTaskWithIdentifier:(id)identifier;
@end

#endif /* SCRTaskScheduler_h */