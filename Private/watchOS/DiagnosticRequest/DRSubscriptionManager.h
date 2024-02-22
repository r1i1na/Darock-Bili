//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 308.64.1.0.0
//
#ifndef DRSubscriptionManager_h
#define DRSubscriptionManager_h
@import Foundation;

@class NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

@interface DRSubscriptionManager : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (readonly, nonatomic) NSMutableDictionary *perTeamIdMonitors;
@property (readonly, nonatomic) NSMutableDictionary *perTeamIdConfigState;
@property (readonly, nonatomic) NSMutableSet *inFlightSubscriptionRequests;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)_configFromEvent:(id)event teamIdOut:(id *)out;
- (void)_processNewEvent:(id)event;
- (id)init;
- (void)_broadcastErrorForTeamID:(id)id error:(id)error;
- (void)_requestSubscriptionToTeamIDStream:(id)idstream;
- (void)_completeSubscriptionRequestForTeamID:(id)id config:(id)config event:(id)event;
- (BOOL)_hasInitializedSubscriptionForTeamID:(id)id cachedConfigOut:(id *)out errorOut:(id *)out;
- (void)addMonitor:(id)monitor;
- (void)_unsubscribeFromStreamWithTeamID:(id)id;
- (void)removeMonitor:(id)monitor;
@end

#endif /* DRSubscriptionManager_h */