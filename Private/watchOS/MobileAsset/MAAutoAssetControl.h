//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 936.60.10.0.0
//
#ifndef MAAutoAssetControl_h
#define MAAutoAssetControl_h
@import Foundation;

#include "SUCoreConnectClientDelegate-Protocol.h"

@class NSString, SUCoreConnectClient;
@protocol OS_dispatch_queue;

@interface MAAutoAssetControl : NSObject<SUCoreConnectClientDelegate>

@property (readonly, retain, nonatomic) NSString *controlClientName;
@property (readonly, retain, nonatomic) NSString *controlClientProcessName;
@property (readonly, nonatomic) long long controlClientProcessID;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueue;
@property (retain, nonatomic) SUCoreConnectClient *connectionClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)controlStatistics:(BOOL)statistics error:(id *)error;
+ (id)knownAssetSummary:(BOOL)summary error:(id *)error;
+ (id)knownAssetSummary:(BOOL)summary limitedToAssetTypes:(id)types error:(id *)error;
+ (id)lockedAssetSummary:(BOOL)summary error:(id *)error;
+ (id)lockedAssetSummary:(BOOL)summary limitedToAssetTypes:(id)types error:(id *)error;
+ (id)stagedAssetSummary:(BOOL)summary error:(id *)error;
+ (id)stagedAssetSummary:(BOOL)summary limitedToAssetTypes:(id)types error:(id *)error;
+ (id)activeJobSummary:(BOOL)summary error:(id *)error;
+ (id)activeJobSummary:(BOOL)summary limitedToAssetTypes:(id)types error:(id *)error;
+ (id)scheduledJobSummary:(BOOL)summary error:(id *)error;
+ (id)scheduledJobSummary:(BOOL)summary limitedToAssetTypes:(id)types error:(id *)error;
+ (id)forceGlobalUnlock:(id)unlock;
+ (id)forceGlobalForget:(id)forget;
+ (id)forceGlobalPurge:(id)purge forcingUnlock:(BOOL)unlock;
+ (id)forceGlobalAbandon:(id)abandon;
+ (long long)simulateCacheDeleteDetermineReclaimableSpace:(id)space withUrgency:(int)urgency error:(id *)error;
+ (long long)simulateCacheDeleteReclaimSpace:(id)space withUrgency:(int)urgency targetingPurgeAmount:(long long)amount error:(id *)error;
+ (id)simulateSetJobOperation:(long long)operation withEndEvent:(long long)event forSelector:(id)selector;
+ (id)defaultDispatchQueue;
+ (id)autoAssetControl;
+ (id)assetSelectorOrAllSelector:(id)selector;
+ (id)pushNotificationHistory:(BOOL)history error:(id *)error;
+ (void)frameworkInstanceSetLogDomain;
+ (id)frameworkDispatchQueue;
+ (id)frameworkInstanceUUID;
+ (long long)waitOnSemaphore:(id)semaphore withTimeout:(long long)timeout;

/* instance methods */
- (id)init;
- (void)_controlStatistics:(BOOL)statistics completion:(id /* block */)completion;
- (void)_knownAssetSummary:(BOOL)summary limitedToAssetTypes:(id)types completion:(id /* block */)completion;
- (void)_lockedAssetSummary:(BOOL)summary limitedToAssetTypes:(id)types completion:(id /* block */)completion;
- (void)_stagedAssetSummary:(BOOL)summary limitedToAssetTypes:(id)types completion:(id /* block */)completion;
- (void)_activeJobSummary:(BOOL)summary limitedToAssetTypes:(id)types completion:(id /* block */)completion;
- (void)_scheduledJobSummary:(BOOL)summary limitedToAssetTypes:(id)types completion:(id /* block */)completion;
- (void)_forceGlobalUnlock:(id)unlock completion:(id /* block */)completion;
- (void)_forceGlobalForget:(id)forget completion:(id /* block */)completion;
- (void)_forceGlobalPurge:(id)purge forcingUnlock:(BOOL)unlock completion:(id /* block */)completion;
- (void)_forceGlobalAbandon:(id)abandon completion:(id /* block */)completion;
- (void)_simulateCacheDeleteDetermineReclaimableSpace:(id)space withUrgency:(int)urgency error:(id *)error completion:(id /* block */)completion;
- (void)_simulateCacheDeleteReclaimSpace:(id)space withUrgency:(int)urgency targetingPurgeAmount:(long long)amount error:(id *)error completion:(id /* block */)completion;
- (void)_simulateSetJobOperation:(long long)operation withEndEvent:(long long)event forSelector:(id)selector completion:(id /* block */)completion;
- (void)connectToServerFrameworkCompletion:(id /* block */)completion;
- (void)connectionClosed;
- (void)handleResponse:(id)response error:(id)error;
- (void)handleMessage:(id)message reply:(id /* block */)reply;
- (void)_successControlStatistics:(id)statistics withControlStatistics:(id)statistics completion:(id /* block */)completion;
- (void)_failedControlStatistics:(id)statistics withErrorCode:(long long)code withResponseError:(id)error description:(id)description completion:(id /* block */)completion;
- (void)_successControl:(id)control completion:(id /* block */)completion;
- (void)_failedControl:(id)control withErrorCode:(long long)code withResponseError:(id)error description:(id)description completion:(id /* block */)completion;
- (void)_successControlSummary:(id)summary withJobSummaryEntries:(id)entries completion:(id /* block */)completion;
- (void)_failedControlSummary:(id)summary withErrorCode:(long long)code withResponseError:(id)error description:(id)description completion:(id /* block */)completion;
- (void)_successControlLockSummary:(id)summary withLockSummaryEntries:(id)entries completion:(id /* block */)completion;
- (void)_failedControlLockSummary:(id)summary withErrorCode:(long long)code withResponseError:(id)error description:(id)description completion:(id /* block */)completion;
- (void)_successSimulateCacheDeleteOperation:(id)operation withReclaimableSpace:(long long)space completion:(id /* block */)completion;
- (void)_failedSimulateCacheDeleteOperation:(id)operation withErrorCode:(long long)code withResponseError:(id)error description:(id)description completion:(id /* block */)completion;
@end

#endif /* MAAutoAssetControl_h */