//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 651.5.0.0.0
//
#ifndef SWPreventSystemSleepAssertion_h
#define SWPreventSystemSleepAssertion_h
@import Foundation;

#include "BSInvalidatable-Protocol.h"

@class NSString;

@interface SWPreventSystemSleepAssertion : NSObject<BSInvalidatable> {
  /* instance variables */
  NSString *_identifier;
  unsigned int _lock_assertionID;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  double _lock_timeoutTime;
  unsigned long long _lock_state;
  BOOL _invalidated;
}

@property (readonly, nonatomic) BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedHighPriorityQueue;

/* instance methods */
- (id)initWithIdentifier:(id)identifier;
- (void)acquireWithTimeout:(double)timeout handler:(id /* block */)handler;
- (BOOL)isActive;
- (void)invalidate;
- (void)dealloc;
@end

#endif /* SWPreventSystemSleepAssertion_h */