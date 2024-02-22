//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDUserPresenceFeeder_h
#define HMDUserPresenceFeeder_h
@import Foundation;

#include "HMDHomePresenceBase.h"
#include "HMDUserPresenceFeed.h"
#include "HMDUserPresenceFeedSession.h"
#include "HMFLogging-Protocol.h"

@class NSString;

@interface HMDUserPresenceFeeder : HMDHomePresenceBase<HMFLogging>

@property (nonatomic) unsigned long long presenceRegionStatus;
@property (retain, nonatomic) HMDUserPresenceFeedSession *currentFeedSession;
@property (retain, nonatomic) HMDUserPresenceFeed *lastSentFeed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)init;
- (void)presenceAuthStatusChangedForUser:(id)user presenceAuthStatus:(id)status;
- (void)presenceAuthChanged;
- (void)homeDataProcessed;
- (void)notifyDidArriveHome;
- (void)notifyDidLeaveHome;
- (void)notifyDidEnterHomeRegion;
- (void)notifyDidLeaveHomeRegion;
@end

#endif /* HMDUserPresenceFeeder_h */