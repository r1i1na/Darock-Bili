//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCEntitlementService_h
#define FCEntitlementService_h
@import Foundation;

#include "FCCoreConfigurationManager-Protocol.h"

@class NFMutexLock, NSMutableArray, NSTimer;

@interface FCEntitlementService : NSObject

@property (nonatomic) BOOL requestInProgress;
@property (retain, nonatomic) NSTimer *entitlementRequestTimer;
@property (retain, nonatomic) NSMutableArray *blocks;
@property (retain, nonatomic) NFMutexLock *accessLock;
@property (readonly, nonatomic) NSObject<FCCoreConfigurationManager> *configurationManager;

/* instance methods */
- (id)initWithConfigurationManager:(id)manager;
- (void)performEntitlementWithIgnoreCache:(BOOL)cache completion:(id /* block */)completion;
- (void)_performEntitlementWithIgnoreCache:(BOOL)cache requestTimeoutDuration:(long long)duration completion:(id /* block */)completion;
- (void)startTimerWithTimeoutDuration:(double)duration;
- (void)clearTimer;
@end

#endif /* FCEntitlementService_h */