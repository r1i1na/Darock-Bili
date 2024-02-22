//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 10.0.0.0.0
//
#ifndef _CATArbitratorRegistrationEntry_h
#define _CATArbitratorRegistrationEntry_h
@import Foundation;

@class NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _CATArbitratorRegistrationEntry : NSObject {
  /* instance variables */
  id mResource;
  unsigned long long mMaxConcurrentCount;
  NSMutableArray *mPendingWaits;
  NSObject<OS_dispatch_source> *mPendingWaitsSource;
  NSObject<OS_dispatch_queue> *mPendingWaitsQueue;
}

@property (readonly, nonatomic) unsigned long long currentCount;

/* instance methods */
- (id)initWithResource:(id)resource maxConcurrentCount:(unsigned long long)count;
- (id)makeResourceProxyIfPossible:(BOOL)possible;
- (id)waitForResourceWithExclusive:(BOOL)exclusive group:(id)group;
- (void)invalidate;
- (void)resourceProxyDidInvalidate:(id)invalidate;
- (void)pendingWaitsNeedServicing;
- (void)servicePendingWaitTokens;
- (id)makeResourceProxyIfPossibleWithoutLocking:(BOOL)locking;
@end

#endif /* _CATArbitratorRegistrationEntry_h */